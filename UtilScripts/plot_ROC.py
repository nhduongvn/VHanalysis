## == IMPORT STATEMENTS =======================================================

import ROOT
import sys,os
import copy
import math
import ConfigParser
from math import *

from my_funcs import makeROCcurve, makeROCinterval

ROOT.gROOT.SetBatch(True)

## == Useful Methods ==========================================================

##############################################
## Scale a histogram to the proper luminosity
##############################################
def scaleToLumi1(fName, xSec, lumi):
  f = ROOT.TFile.Open(fName, 'read')
  hTmp = f.Get('Nevt')
  nP = hTmp.GetBinContent(3)
  nN = hTmp.GetBinContent(1)
  return lumi*xSec/(nP-nN)

####################################################
## Get the histograms for a given sample & variable
####################################################
def getHist(pN, sample_name, fH, lS):
  hOut = {}
  
  ## Go through each year we're interested in.
  for y in years:
    ## Get the first sample
    print sample_name[0], pN, y
    hOut[y] = fH[sample_name[0]][y][0].Get(pN).Clone()
    if sample_name[0] not in ['JetHT']:
      hOut[y].Scale(lS[sample_name[0]][y][0])
    
    ## Add the other samples 
    for iS in range(len(sample_name)):
      for fi in range(len(fH[sample_name[iS]][y])):
        if iS == 0 and fi == 0: continue
        h = fH[sample_name[iS]][y][fi].Get(pN).Clone()
        if sample_name[iS] not in ['JetHT']:
          h.Scale(lS[sample_name[iS]][y][fi])
        hOut[y].Add(h)
    
  return hOut

###############################################################################
## MAIN CODE
###############################################################################

## From this point, we've got "four" different type of ROC curves we want to generate:
##
## 1a. ROC curves for variables of each selection type, with "less than" cuts
## 1b. same as 1a, but with "greater than" cuts
## 2. ROC curves for variables of each jet type (l vs. b vs. c)
## 3. ROC curves that area just one and done.
## 4. ROC curves that use intervals. 
##
## Let's handle the bits that are the same for each type here first.

######################
## Editable Variables
######################
debug = True
years = ['16', '17', '18']
plotFolder = '../full_results/'
useLogY = True

produceOneSidedROCs = False
produceJetROCs = False
produceGeneralROCs = False
produceIntervalROCs = True

## signal samples
ss_signal = ['ZH_HToCC_ZToQQ', 'ggZH_HToCC_ZToQQ']

## simplified background samples - QCD and ttbar
ss_bckg = [ 'QCD_HT100to200_v9', 'QCD_HT200to300_v9', 'QCD_HT300to500_v9','QCD_HT500to700_v9','QCD_HT700to1000_v9','QCD_HT1000to1500_v9','QCD_HT1500to2000_v9','QCD_HT2000toInf_v9', 'TTToHadronic', 'TTToSemiLeptonic', 'TTTo2L2Nu']

## combined list containing both signal & background samples
ss = ['ZH_HToCC_ZToQQ', 'ggZH_HToCC_ZToQQ', 'QCD_HT100to200_v9', 'QCD_HT200to300_v9', 'QCD_HT300to500_v9','QCD_HT500to700_v9','QCD_HT700to1000_v9','QCD_HT1000to1500_v9','QCD_HT1500to2000_v9','QCD_HT2000toInf_v9', 'TTToHadronic', 'TTToSemiLeptonic', 'TTTo2L2Nu']

##################################################
## Do not edit below this point (without caution)
##################################################

## Load the config file
if debug: print "STEP 0: Loading necessary elements..."
if debug: print ">>>>>>> loading config files..."
config_file = '../Configs/config.ini'
cfg = ConfigParser.ConfigParser()
cfg.read(config_file)

## Get the lumi scales
if debug: print ">>>>>>> loading luminosities..."
lumiS = {}
for y in years:
  lumiTmp = float(cfg.get('General','lumi_'+y))/1000.
  lumiTmp = format("%.1f" % lumiTmp)
  lumiS[y] = str(lumiTmp)
print "lumi scales = ", lumiS

## Retrieve necessary information
## from the desired samples
if debug: print ">>>>>>> loading cross-sections..."
if debug: print ">>>>>>> loading appropriate files..."

fNames = {}
xSecs = {}
lumiScales = {}
fHist = {}

for s in ss:
  
  fNames[s] = {}
  xSecs[s] = {}
  lumiScales[s] = {}
  fHist[s] = {}
  
  for y in years:
    
    lumi = float(cfg.get('General', 'lumi_'+y))
    names = cfg.get(s, 'file_'+y).split(',')
    print '>>>>>>>>>: ', len(names)
    xSecTmps = ['1']*len(names)
    kfactor = ['1']*len(names)
    if s not in ['JetHT']:
      xSecTmps = cfg.get(s, 'xSec_'+y).split(',')
    
    fNames[s][y] = []
    xSecs[s][y] = []
    fHist[s][y] = []
    dirpath = '../new_condor_results/NONE/'
    for iN in names:
      #fNames[s][y].append(cfg.get('Paths', 'path') + '/' + iN)
      fNames[s][y].append(dirpath + '/' + iN)
      fHist[s][y].append(ROOT.TFile.Open(fNames[s][y][-1],'READ'))
    
    print xSecTmps
    for iS in xSecTmps:
      if '*' in iS: iS = iS.split('*')
      if len(iS) == 2:
        xSecs[s][y].append(float(iS[0])*float(iS[1]))
      else:
        xSecs[s][y].append(float(iS))
        
    lumiScales[s][y] = [1]*len(names)
    for iN in range(len(fNames[s][y])):
      if s not in ['JetHT']:
        print s, y, iN, fNames[s][y][iN]
        lumiScales[s][y][iN] = scaleToLumi1(fNames[s][y][iN], xSecs[s][y][iN], lumi)

###############################################################################
## ROC Curves Type #1 - related to selection cut types
###############################################################################

if produceOneSidedROCs:
  if debug: 
    print "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
    print "STEP 1: Producing ROC curves for selection-type variables"
    print "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"

  lessThan_list = [ 'H_dR', 'H_dR_Bj0', 'H_dR_Bj1',
		  'Z_dR', 'Z_dR_Bj0', 'Z_dR_Bj1' ]
  greaterThan_list = [ 'H_pt', 'Z_pt', 'Aplanarity', 'Sphericity' ]

  selection_types = ['tags', 'algo', 'both']
  selection_colors = [ROOT.kGreen + 2, ROOT.kBlue, ROOT.kRed]

  variable_lists = [lessThan_list, greaterThan_list]
  useLessThan_list = [True, False]

  ## Go through each list with the proper cut types.
  for v in range(len(variable_lists)):
  
    ## Get the appropriate list of variables
    useLessThan = useLessThan_list[v]
    plot_names = variable_lists[v]
  
    ## Go through each variable in the list
    for plN in plot_names:
      
      if debug:
        print "======================\nVbbHcc_*_" + plN + "\n======================"
      
      ## Get the signal & background plots for each year.
      ## Remember, we want different ones for each type
      ## of selection type, i.e. tagging only, tagging
      ## prioritized, and mass-matching priotitized.
    
      hSignals = {}
      hBckgs = {}
      for sType in selection_types:
        var_name = "VbbHcc_" + sType + "_" + plN
        hSignals[sType] = getHist(var_name, ss_signal, fHist, lumiScales)
        hBckgs[sType]   = getHist(var_name, ss_bckg,   fHist, lumiScales)
    
      #############################
      ## Stack plots for each year
      #############################
      for y in years:
        
        xAxis_title = "False Signal Rate (Bckg)"
        yAxis_title = "True Signal Rate"
        nRebin = int(cfg.get(plN, 'rebin'))
      
        signal_plots = [
          hSignals["tags"][y].Clone().Rebin(nRebin),
          hSignals["algo"][y].Clone().Rebin(nRebin),
          hSignals["both"][y].Clone().Rebin(nRebin)
        ]
        
        bckg_plots = [
          hBckgs["tags"][y].Clone().Rebin(nRebin),
          hBckgs["algo"][y].Clone().Rebin(nRebin),
          hBckgs["both"][y].Clone().Rebin(nRebin)
        ]
      
        plot_names = [ "Tagging Only", 
        "Mass-Matching Prioritized", "Tagging Prioritized"]
      
        makeROCcurve(signal_plots, bckg_plots, plot_names, plN,
          "ROC_" + plN + "_" + y, plotFolder + "/20" + y + "_QCDv9" + "/ROC/",
          selection_colors, lumi=lumiS[y], useLessThan=useLessThan,
          lowerLegend=True)

###############################################################################
## ROC Curves Type #2 - related to jet type
###############################################################################

if produceJetROCs:
  if debug: 
    print "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
    print "STEP 2: Producing ROC curves for jet-type variables"
    print "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"


  varList = [ 's', '0', '1', '2', '3']
  varNames = [ 'all', 'leading', 
	  'subleading', 'subsubleading', 
	  'subsubsubleading']
  canvNames = ['all', 'lead', 'sub1', 'sub2', 'sub3']
  jet_types = ['ljet', 'bjet', 'cjet']
  jet_colors = [ROOT.kRed, ROOT.kBlue, ROOT.kGreen + 2]

  for i in range(len(varList)):
  
    variable = varList[i]
    varName = varNames[i]
    canvName = canvNames[i]
  
    if debug:
      print "======================\nVbbHcc_jets_pt_*jet" + variable + "\n======================"
    
    
    hSignals = {}
    hBckgs = {}
  
    for jType in jet_types:
      hName = "VbbHcc_jets_pt_" + jType + variable
      hSignals[jType] = getHist(hName, ss_signal, fHist, lumiScales)
      hBckgs[jType]   = getHist(hName, ss_bckg,   fHist, lumiScales)
  
    #############################
    ## Stack plots for each year
    #############################
    for y in years:
      
      plN = 'pt_ljet' + variable
      
      xAxis_title = "False Signal Rate (Bckg)"
      xAxis_title = "True Signal Rate"
      nRebin = int(cfg.get(plN,"rebin"))

      signal_plots = [
        hSignals["ljet"][y].Clone().Rebin(nRebin),
        hSignals["bjet"][y].Clone().Rebin(nRebin),
        hSignals["cjet"][y].Clone().Rebin(nRebin)
      ]
    
      bckg_plots = [
        hBckgs["ljet"][y].Clone().Rebin(nRebin),
        hBckgs["bjet"][y].Clone().Rebin(nRebin),
        hBckgs["cjet"][y].Clone().Rebin(nRebin)
      ]

      plot_names = [ "l-jets", "b-jets", "c-jets" ]
    
      makeROCcurve(signal_plots, bckg_plots, plot_names, plN,
        "ROC_pt_jets_" + canvName + "_" + y,
        plotFolder + "/20" + y + "_QCDv9" + "/ROC/", jet_colors,
        lumi=lumiS[y], useLessThan=False, lowerLegend=True)

###############################################################################
## ROC Curves Type #3 - related to regions of general variables we want.
###############################################################################

if produceGeneralROCs:
  if debug: 
    print "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
    print "STEP 3: Producing ROC curves for standard variables"
    print "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"

  regions = ['MET']
  region_names = ['all']
  plot_colors = [ ROOT.kMagenta + 2 ]
  
  for r in range(len(regions)):
    
    plotNames = cfg.get("Plots", "VbbHcc_" + regions[r] + "_plot").split(",")
    
    for plN in plotNames:
      
      ## Get the plots for the signal and background
      hSignal = getHist("VbbHcc_" + region_names[r] + "_" + plN, ss_signal, fHist, lumiScales)
      hBckg   = getHist("VbbHcc_" + region_names[r] + "_" + plN, ss_bckg,   fHist, lumiScales)
      
      #############################
      ## Stack plots for each year
      #############################
      for y in years:
        
        xAxis_title = "False Signal Rate (Bckg)"
        yAxis_title = "True Signal Rate"
        nRebin = int(cfg.get(plN, "rebin"))
      
        signal_plots = [hSignal[y].Clone().Rebin(nRebin)]
        bckg_plots = [hBckg[y].Clone().Rebin(nRebin)]
        
        makeROCcurve(signal_plots, bckg_plots, [""], plN,
          "ROC_" + region_names[r] + "_" + plN + "_" + y,
          plotFolder + "/20" + y + "_QCDv9" + "/ROC/",
          plot_colors, lumi=lumiS[y], useLessThan=True,
          lowerLegend=True)

###############################################################################
## ROC Curves Type #4 - related to interval cuts for variables
###############################################################################

if produceIntervalROCs:
  if debug: 
    print "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
    print "STEP 4: Producing ROC curves for interval cuts"
    print "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
  
  selection_types = ['tags', 'algo', 'both']
  selection_colors = [ROOT.kGreen + 2, ROOT.kBlue, ROOT.kRed]
  
  variable_list = [ 'H_mass', 'Z_mass', 'dR_HZ' ]
  
  ## Go through each list with the proper cut types.
  for v in range(len(variable_list)):
    
    ## Go through each variable in the list
    for plN in variable_list:
      
      if debug:
        print "======================\nVbbHcc_*_" + plN + "\n======================"
      
      ## Get the signal & background plots for each year.
      ## Remember, we want different ones for each type
      ## of selection type, i.e. tagging only, tagging
      ## prioritized, and mass-matching priotitized.
      
      hSignals = {}
      hBckgs = {}
      for sType in selection_types:
        var_name = "VbbHcc_" + sType + "_" + plN
        hSignals[sType] = getHist(var_name, ss_signal, fHist, lumiScales)
        hBckgs[sType]   = getHist(var_name, ss_bckg,   fHist, lumiScales)
    
      #############################
      ## Stack plots for each year
      #############################
      for y in years:
        
        xAxis_title = "False Signal Rate (Bckg)"
        yAxis_title = "True Signal Rate"
        nRebin = int(cfg.get(plN, 'rebin'))
      
        signal_plots = [
          hSignals["tags"][y].Clone().Rebin(nRebin),
          hSignals["algo"][y].Clone().Rebin(nRebin),
          hSignals["both"][y].Clone().Rebin(nRebin)
        ]
      
        bckg_plots = [
          hBckgs["tags"][y].Clone().Rebin(nRebin),
          hBckgs["algo"][y].Clone().Rebin(nRebin),
          hBckgs["both"][y].Clone().Rebin(nRebin)
        ]
        
        plot_names = [ "Tagging Only", 
        "Mass-Matching Prioritized", "Tagging Prioritized"]
        
        makeROCinterval(signal_plots, bckg_plots, plot_names, plN,
          "ROC_" + plN + "_" + y, plotFolder + "/20" + y + "_QCDv9" + "/ROC/",
          selection_colors, lumi=lumiS[y])
      












