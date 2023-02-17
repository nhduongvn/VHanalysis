## == IMPORT STATEMENTS =======================================================

import ROOT
import sys,os
import copy
import math
import ConfigParser

from math import *
from my_funcs import makeOverlayPlots

ROOT.gROOT.SetBatch(True)

## == USEFUL METHODS ==========================================================

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
debug = True
years = ['16','17','18']
plotFolder = '../full_results/'
useLogY = True

produceSelectionTypes = True

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
## Type 1 - variables that will involve the different selection types
###############################################################################
if produceSelectionTypes:
  if debug:
    print "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
    print "STEP 1: Producing ROC curves for selection-type variables"
    print "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
    
    selection_types = ['tags', 'algo', 'both']
    selection_colors = [ROOT.kGreen + 2, ROOT.kBlue, ROOT.kRed]
    
    variables = [ 'H_mass', 'H_dR', 'H_dR_Bj0', 'H_dR_Bj1', 
                  'Z_mass', 'Z_dR', 'Z_dR_Bj0', 'Z_dR_Bj1', 'dR_HZ',
                  'H_pt', 'Z_pt', 'Aplanarity', 'Sphericity'] 
    
    ## Go through each variable
    for plN in variables:
      
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
        
        tmps = cfg.get(plN,'xAxisRange').split(',')
        xA_range = []
        if 'Pi' not in tmps[1]:
          xA_range = [float(tmps[0]), float(tmps[1])]
        else:
          xA_range = [0, ROOT.TMath.Pi()]
        xA_title = cfg.get(plN, 'xAxisTitle')
        nRebin = int(cfg.get(plN, 'rebin'))
        
        signal_plots = [
          hSignals["tags"][y].Clone().Rebin(nRebin),
          hSignals["algo"][y].Clone().Rebin(nRebin),
          hSignals["both"][y].Clone().Rebin(nRebin)
        ]
        
        for plot in signal_plots:
          plot.Scale(1./plot.Integral())
        
        bckg_plots = [
          hBckgs["tags"][y].Clone().Rebin(nRebin),
          hBckgs["algo"][y].Clone().Rebin(nRebin),
          hBckgs["both"][y].Clone().Rebin(nRebin)
        ]
        
        for plot in bckg_plots:
          plot.Scale(1./plot.Integral())
      
        signalPlot_names = [ "Tagging Only (Signal)", 
        "Mass-Matching Prioritized (Signal)", "Tagging Prioritized (Signal)"]
        
        bckgPlot_names = [ "Tagging Only (Bckg)",
        "Mass-Matching Prioritized (Bckg)", "Tagging Prioritized (Bckg)"]
      
        makeOverlayPlots(signal_plots, bckg_plots, signalPlot_names,
          bckgPlot_names, "overlay_" + plN + "_" + y,
          plotFolder + "/20" + y + "_QCDv9" + "/overlay/",
          xA_title, xA_range, selection_colors, lumi=lumiS[y], logY=useLogY)

###############################################################################
## Type #2 - related to jet type
###############################################################################

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
      
      tmps = cfg.get(plN,'xAxisRange').split(',')
      xA_range = []
      if 'Pi' not in tmps[1]:
        xA_range = [float(tmps[0]), float(tmps[1])]
      else:
        xA_range = [0, ROOT.TMath.Pi()]
      xA_title = cfg.get(plN, 'xAxisTitle')
      nRebin = int(cfg.get(plN, 'rebin'))

      signal_plots = [
        hSignals["ljet"][y].Clone().Rebin(nRebin),
        hSignals["bjet"][y].Clone().Rebin(nRebin),
        hSignals["cjet"][y].Clone().Rebin(nRebin)
      ]
 
      for plot in signal_plots:
        plot.Scale(1./plot.Integral())
    
      bckg_plots = [
        hBckgs["ljet"][y].Clone().Rebin(nRebin),
        hBckgs["bjet"][y].Clone().Rebin(nRebin),
        hBckgs["cjet"][y].Clone().Rebin(nRebin)
      ]
      
      for plot in bckg_plots:
        plot.Scale(1./plot.Integral())

      signalPlot_names = [ "l-jets (signal)", "b-jets (signal)", "c-jets (signal)" ]
      bckgPlot_names = ["l-jets (bckg)", "b-jets (bckg)", "c-jets (bckg)"]
    
      makeOverlayPlots(signal_plots, bckg_plots, signalPlot_names,
        bckgPlot_names, "overlay_jets_" + canvName + "_" + y,
        plotFolder + "/20" + y + "_QCDv9" + "/overlay/",
        xA_title, xA_range, jet_colors, lumi=lumiS[y], logY=useLogY)

###############################################################################
## Type #3 - MET
###############################################################################

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
      
      tmps = cfg.get(plN,'xAxisRange').split(',')
      xA_range = []
      if 'Pi' not in tmps[1]:
        xA_range = [float(tmps[0]), float(tmps[1])]
      else:
        xA_range = [0, ROOT.TMath.Pi()]
      xA_title = cfg.get(plN, 'xAxisTitle')
      nRebin = int(cfg.get(plN, 'rebin'))
     
      signal_plots = [hSignal[y].Clone().Rebin(nRebin)]
      for plot in signal_plots:
        plot.Scale(1./plot.Integral())
      bckg_plots = [hBckg[y].Clone().Rebin(nRebin)]
      for plot in bckg_plots:
        plot.Scale(1./plot.Integral())
      
      print plN
      
      signal_names = [plN + " (signal)"]
      bckg_names = [plN + " (bckg)"]
        
      makeOverlayPlots(signal_plots, bckg_plots, signal_names,
        bckg_names, "overlay_" + region_names[r] + "_" + plN + "_" + y,
        plotFolder + "/20" + y + "_QCDv9" + "/overlay/",
        xA_title, xA_range, plot_colors, lumi=lumiS[y], logY=useLogY)

