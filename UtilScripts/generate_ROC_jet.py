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

colors = [ROOT.kRed, ROOT.kBlue, ROOT.kGreen + 2]

###############################
## These you can edit / change
###############################
years = ['16', '17', '18']
regions = ['tags', 'algo', 'both']
plotCat = 'VbbHcc'
useLogY = True
summary_control_plot_name = 'summary_control_plot_zjet_zHFjet.txt'
plotFolder = '../full_results/'

## List with just Signal
ss_signal = ['ZH_HToCC_ZToQQ', 'ggZH_HToCC_ZToQQ']

## List with just QCD and ttbar files
ss_bckg = [ 'QCD_HT100to200_v9', 'QCD_HT200to300_v9', 'QCD_HT300to500_v9','QCD_HT500to700_v9','QCD_HT700to1000_v9','QCD_HT1000to1500_v9','QCD_HT1500to2000_v9','QCD_HT2000toInf_v9', 'TTToHadronic', 'TTToSemiLeptonic', 'TTTo2L2Nu']

ss = ['ZH_HToCC_ZToQQ', 'ggZH_HToCC_ZToQQ', 'QCD_HT100to200_v9', 'QCD_HT200to300_v9', 'QCD_HT300to500_v9','QCD_HT500to700_v9','QCD_HT700to1000_v9','QCD_HT1000to1500_v9','QCD_HT1500to2000_v9','QCD_HT2000toInf_v9', 'TTToHadronic', 'TTToSemiLeptonic', 'TTTo2L2Nu']

################################
## Do not edit below this point
################################

## Load the config
config_file = '../Configs/config.ini'
cfg = ConfigParser.ConfigParser()
cfg.read(config_file)

## Get the lumi scales
lumiS = {}
for y in years:
  lumiTmp = float(cfg.get('General','lumi_'+y))/1000.
  lumiTmp = format("%.1f" % lumiTmp)
  lumiS[y] = str(lumiTmp)
print "lumi scales = ", lumiS


## Retrieve necessary information 
## from the desired samples
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

## Go through each variable of interest
varList = ['s', '0', '1', '2', '3']
varNames = ['all','leading','subleading','subsubleading','subsubsubleading']
canvNames = ['all', 'lead', 'sub1', 'sub2', 'sub3']
nums = {}

for i in range(len(varList)):
 
  variable = varList[i]
  varName = varNames[i]
  canvName = canvNames[i]
  
  ## We need to get the appropriate plot for light jets, b-jets, and c-jets
  hName_l = 'VbbHcc_jets_pt_ljet' + variable
  hName_b = 'VbbHcc_jets_pt_bjet' + variable
  hName_c = 'VbbHcc_jets_pt_cjet' + variable
  
  hL_signal = getHist(hName_l, ss_signal, fHist, lumiScales)
  hB_signal = getHist(hName_b, ss_signal, fHist, lumiScales)
  hC_signal = getHist(hName_c, ss_signal, fHist, lumiScales)
  hL_bckg = getHist(hName_l, ss_bckg, fHist, lumiScales)
  hB_bckg = getHist(hName_b, ss_bckg, fHist, lumiScales)
  hC_bckg = getHist(hName_c, ss_bckg, fHist, lumiScales)
  
  ############################
  # Stack plots for each year
  ############################
  for y in years:
    plN = 'pt_ljet' + variable
    tmps = cfg.get(plN,'xAxisRange').split(',')
    xA_range = []
    if 'Pi' not in tmps[1]:
      xA_range = [float(tmps[0]), float(tmps[1])]
    
    xA_title = "False Signal Rate (Bckg)"
    yA_title = "True Signal Rate"
    nRebin = int(cfg.get(plN,'rebin'))
    
    signal_plots = [
      hL_signal[y].Clone().Rebin(nRebin),
      hB_signal[y].Clone().Rebin(nRebin),
      hC_signal[y].Clone().Rebin(nRebin),
    ]
    
    bckg_plots = [
      hL_bckg[y].Clone().Rebin(nRebin),
      hB_bckg[y].Clone().Rebin(nRebin),
      hC_bckg[y].Clone().Rebin(nRebin),
    ]
    
    plotNames_process = [
      "l-jets", "b-jets", "c-jets"
    ]
    
    ## This is the typical one-sided cut.
    makeROCcurve(signal_plots, bckg_plots, plotNames_process, plN,
      "ROC_pt_jets_" + canvName + "_" + y,
      plotFolder + '/20' + y + '_QCDv9' + '/ROC/', colors, lumi=lumiS[y])
    
  
  
