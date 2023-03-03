## == IMPORT STATEMENTS =======================================================

import ROOT
import sys,os
import copy
import math
import ConfigParser
from math import *

from my_funcs import makeStackPlot, makePlot

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
def getHist(pN, sample_name, fH, lS, useScale=True):
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
        #if sample_name[iS] not in ['JetHT'] and useScale:
        #  h.Scale(lS[sample_name[iS]][y][fi])
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
selection_types = ['tags', 'algo', 'both']
plotFolder = '../full_results/'
useLogY = False
producePlots = False

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
## Plots #1 - 1D histograms
###############################################################################

if producePlots:
  for s in selection_types:
    
    plotNames = ["dR_bjets_truth", "dR_cjets_truth"]
    plotRef = ["dR_bjets", "dR_cjets"]
    
    for i in range(len(plotNames)):
      
      plN = plotNames[i]
      
      hN = "VbbHcc_eff_" + s + "_" + plN
     
      hZHcc   = getHist(hN, ['ZH_HToCC_ZToQQ'], fHist, lumiScales, False)
      hggZHcc = getHist(hN, ['ggZH_HToCC_ZToQQ'], fHist, lumiScales, False)
      
      hQCD    = getHist(hN, ['QCD_HT100to200_v9','QCD_HT200to300_v9', 'QCD_HT300to500_v9','QCD_HT500to700_v9','QCD_HT700to1000_v9','QCD_HT1000to1500_v9','QCD_HT1500to2000_v9','QCD_HT2000toInf_v9'], fHist, lumiScales, False)
      hTT     = getHist(hN, ['TTToHadronic','TTToSemiLeptonic','TTTo2L2Nu'], fHist, lumiScales, False)
    
      hSignal = getHist(hN, ss_signal, fHist, lumiScales, False)
      hBckg   = getHist(hN, ss_bckg,   fHist, lumiScales, False)
    
      #############################
      ## Stack plots for each year
      #############################
      for y in years:
        
        ref = plotRef[i]
        tmps = cfg.get(ref,'xAxisRange').split(',')
        if 'Pi' not in tmps[1]:
          xA_range = [float(tmps[0]), float(tmps[1])]
        else:
          xA_range = [0, ROOT.TMath.Pi()]
        xA_title = cfg.get(ref, 'xAxisTitle')
        nRebin = int(cfg.get(ref, 'rebin'))
        
        signal_plots = [
          hSignal[y].Clone().Rebin(nRebin),
          #hZHcc[y].Clone().Rebin(nRebin),
          #hggZHcc[y].Clone().Rebin(nRebin)
        ]
      
        signal_names = [ "ZHcc+ggZHcc" ]#'ZHcc', 'ggZHcc' ]
        logY = useLogY
        
        makePlot(hSignal[y].Clone().Rebin(nRebin), "ZHcc + ggZHcc",
          'eff_' + plN + '_' + s + '_signal_' + y,
          plotFolder + '/20' + y + '_QCDv9/signal/' + s + '/',
          xA_title, xA_range, "", 1, logY, lumiS[y], ROOT.kRed, ROOT.kRed)
      
        makePlot(hBckg[y].Clone().Rebin(nRebin), "QCD + t#bar{t}",
          'eff_' + plN + '_' + s + '_bckg_' + y,
          plotFolder + '/20' + y + '_QCDv9/bckg/' + s + '/',
          xA_title, xA_range, "", 1, logY, lumiS[y], ROOT.kRed, ROOT.kRed)
        
        
        #makeStackPlot(signal_plots, signal_names, 'eff_' + plN + '_' + s + '_signal_' + y,
        #  plotFolder + '/20' + y + '_QCDv9/signal/' + s + '/', xA_title,
        #  xA_range, 'MC unc. (stat.)', False, logY=logY, lumi=lumiS[y],
        #  minY_forLog = 0.0, forceMin=True, modMaxX=False)
      
        bckg_plots = [
          hBckg[y].Clone().Rebin(nRebin)
          #hQCD[y].Clone().Rebin(nRebin),
          #hTT[y].Clone().Rebin(nRebin)
        ]
      
        bckg_names = [ "QCD + t#bar{t}" ]#'QCD', 't#bar{t}' ]
      
        #makeStackPlot(bckg_plots, bckg_names, 'eff_' + plN + '_' + s + '_bckg_' + y,
        #  plotFolder + '/20' + y + '_QCDv9/bckg/' + s + '/', xA_title,
        #  xA_range, 'MC unc. (stat.)', False, logY=logY, lumi=lumiS[y],
        #  minY_forLog = 0.0, forceMin=True, modMaxX=False)
      
###############################################################################
## Plots #2 - 2D histograms
###############################################################################

if producePlots:

  plotNames = [ "dR_v_dR_b_truth", "dR_v_dR_c_truth", "dRb_v_dRc_truth",
    "id_v_id_b_truth", "id_v_id_c_truth" ]
    
  nRebin = [ 2, 2, 2, 1, 1 ]
  
  xAxes = [ "#Delta R(b_{0}, b_{0}^{jet})", "#Delta R(c_{0}, c_{0}^{jet})",
    "#Delta R(b_{0}b_{1})", "index (b_{0})", "index (c_{0})"]

  yAxes = [  "#Delta R(b_{1}, b_{1}^{jet})", "#Delta R(c_{1}, c_{1}^{jet})",
    "#Delta R(c_{0}c_{1})", "index (b_{1})", "index (c_{1})"]

  for s in selection_types:
    
    for i in range(len(plotNames)):
      
      plN = plotNames[i]
      hN = "VbbHcc_eff_" + s + "_" + plN
      
      ## Get the proper signals
      hSignal = getHist(hN, ss_signal, fHist, lumiScales)
      hBckg   = getHist(hN, ss_bckg,   fHist, lumiScales)
      
      #############################
      ## Stack plots for each year
      #############################
      for y in years:
        
        logY = useLogY
        
        makePlot(hSignal[y].Clone(), "ZHcc + ggZHcc", 
          'eff_' + plN + '_' + s + '_signal_' + y,
          plotFolder + '/20' + y + '_QCDv9/signal/' + s + '/',
          xAxes[i], [], yAxes[i], nRebin[i], logY, lumiS[y], ROOT.kRed,
          ROOT.kRed, is2D=True)
      
        makePlot(hBckg[y].Clone(), "QCD + t#bar{t}",
          'eff_' + plN + '_' + s + '_bckg_' + y,
          plotFolder + '/20' + y + '_QCDv9/bckg/' + s + '/',
          xAxes[i], [], yAxes[i], nRebin[i], logY, lumiS[y], ROOT.kRed,
          ROOT.kRed, is2D=True)
    
    

###############################################################################
## Plots #3 - calculate efficiencies
###############################################################################

eff = {}

for s in selection_types:

  eff[s] = {}
  
  plN = "nMatches_truth"
  hN = "VbbHcc_eff_" + s + "_" + plN
    
  ## Get the proper signals
  hSignal = getHist(hN, ss_signal, fHist, lumiScales, False)
  #hSignal = getHist(hN, ["ZH_HToCC_ZToQQ"], fHist, lumiScales, False)
  
  for y in years:
    
    #plot = hSignal[y].Clone()
    num = hSignal[y].GetBinContent(5)
    nEntries = hSignal[y].GetEntries()
    
    eff_s_y = num * 1.0 / nEntries
    eff[s][y] = eff_s_y
    
    print s + " 20" + y + " = " + str(num) + "/" + str(nEntries)

## Print out the proper data

print "\nSelection Type\t\t2016\t\t2017\t\t2018"
print "~~~~~~~~~~~~~~\t\t~~~~\t\t~~~~\t\t~~~~"
for s in selection_types:
  output_str = s + "\t\t"
  
  for y in years:
    
    output_str += str(eff[s][y]) + "\t\t"
  
  print output_str











