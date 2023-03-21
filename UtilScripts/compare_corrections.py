## == IMPORT STATEMENTS =======================================================

import ROOT
import sys,os
import copy
import math
import ConfigParser
from math import *

from my_funcs import makeStackPlot

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
def getHist(pN, sample_name, fH, lS, printSamples=True):
  hOut = {}
  
  ## Go through each year we're interested in.
  for y in years:
    ## Get the first sample
    if printSamples: print sample_name[0], pN, y
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
    
  if printSamples: 
    print "==============================================="
    
  return hOut

###############################################################################
## MAIN CODE
###############################################################################

###############################
## These you can edit / change
###############################
years = ['16', '17', '18']
regions = ['tags', 'algo', 'both']#, 'alljet', 'seljet']
plotCat = 'VbbHcc'
useLogY = False

plotFolder = '../plot_results/JEC_comp/noJEC/'              ## medium WP no JEC
resultpath = '../condor_results/mediumWP_noJEC/'
plotFolder_JEC = '../plot_results/JEC_comp/JEC/'            ## medium WP w/ JEC
resultpath_JEC = '../condor_results/mediumWP_wJEC/' 
plotFolder_massJEC = '../plot_results/JEC_comp/massJEC/'    ## medium WP w/ JEC + mass
resultpath_massJEC = '../condor_results/mediumWP_wMassJEC/'

plot_output = '../plot_results/JEC_comp/'

## List with just Signal
ss = ['ZH_HToCC_ZToQQ', 'ggZH_HToCC_ZToQQ']

colors = [ ROOT.kGreen + 2, ROOT.kBlue, ROOT.kRed]

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
fNames_JEC = {}
fNames_massJEC = {}

xSecs = {}
lumiScales = {}

fHist = {}
fHist_JEC = {}
fHist_massJEC = {}

for s in ss:
  
  fNames[s] = {}
  fNames_JEC[s] = {}
  fNames_massJEC[s] = {}
  
  xSecs[s] = {}
  lumiScales[s] = {}
  
  fHist[s] = {}
  fHist_JEC[s] = {}
  fHist_massJEC[s] = {}
  
  for y in years:
    
    lumi = float(cfg.get('General', 'lumi_'+y))
    names = cfg.get(s, 'file_'+y).split(',')
    print '>>>>>>>>>: ', len(names)
    xSecTmps = ['1']*len(names)
    kfactor = ['1']*len(names)
    if s not in ['JetHT']:
      xSecTmps = cfg.get(s, 'xSec_'+y).split(',')
    
    fNames[s][y] = []
    fNames_JEC[s][y] = []
    fNames_massJEC[s][y] = []
    
    xSecs[s][y] = []
    
    fHist[s][y] = []
    fHist_JEC[s][y] = []
    fHist_massJEC[s][y] = []
    
    dirpath = resultpath + '/NONE/'
    for iN in names:
      fNames[s][y].append(dirpath + '/' + iN)
      fHist[s][y].append(ROOT.TFile.Open(fNames[s][y][-1],'READ'))
    
    dirpath = resultpath_JEC + '/NONE/'
    for iN in names:
      fNames_JEC[s][y].append(dirpath + '/' + iN)
      fHist_JEC[s][y].append(ROOT.TFile.Open(fNames_JEC[s][y][-1],'READ'))
    
    dirpath = resultpath_massJEC + '/NONE/'
    for iN in names:
      fNames_massJEC[s][y].append(dirpath + '/' + iN)
      fHist_massJEC[s][y].append(ROOT.TFile.Open(fNames_massJEC[s][y][-1],'READ'))
    
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

nums = {}

###############################################################################
## Plot Type #1 - Everything but MET
###############################################################################
        
## Go through each region of interest
yMaxes = {}
yMaxes["tags"] = [ 0.6, 0.4 ]
yMaxes["algo"] = [ 0.25, 0.25 ]
yMaxes["both"] = [ 0.6, 0.4 ]
for r in regions:
  
  nums[r] = {}
  plotNames = ['Z_mass', 'H_mass']
  yMax = yMaxes[r]
  
  for i in range(len(plotNames)):
    
    plN = plotNames[i]
    if r != '':
      hN = 'VbbHcc_' + r + '_' + plN
    else:
      hN = 'VbbHcc_' + plN
    
    ## Get all the desired plots
    hSignal = getHist(hN, ss, fHist, lumiScales)
    hSignal_JEC = getHist(hN, ss, fHist_JEC, lumiScales)
    hSignal_massJEC = getHist(hN, ss, fHist_massJEC, lumiScales)
    #hZHcc = getHist(hN,['ZH_HToCC_ZToQQ'],fHist,lumiScales)
    #hggZHcc = getHist(hN,['ggZH_HToCC_ZToQQ'],fHist,lumiScales)
    
    ############################
    # Stack plots for each year
    ############################
    
    for y in years:
      tmps = cfg.get(plN,'xAxisRange').split(',')
      xA_range = []
      if 'Pi' not in tmps[1]:
        xA_range = [float(tmps[0]), float(tmps[1])]
      else:
        xA_range = [0, ROOT.TMath.Pi()]
      xA_title = cfg.get(plN, 'xAxisTitle')
      nRebin = int(cfg.get(plN, 'rebin'))
      
      plots_process = [
        hSignal[y].Clone().Rebin(nRebin),
        hSignal_JEC[y].Clone().Rebin(nRebin),
        hSignal_massJEC[y].Clone().Rebin(nRebin)
      ]
      
      plotNames_process = [ "No JEC", "with JEC", "JEC + Jet Mass Correction"]
      
      _logY = useLogY
      if 'CutFlow' in plN: _logY = True
      makeStackPlot(plots_process, plotNames_process,       ## plot & plot name
        plN + '_' + r + '_' + y,                            ## canvas name
        plot_output + '/20' + y + '_QCDv9' + '/overlay/',   ## output folder
        xA_title, xA_range,                                 ## x-axis information
        normMC=False, logY=False,                           ## modifications
        custom_colors = colors, useStack=False,
        useFill = False, forceMaxY = True, 
        forced_maxY = yMax[i], legendColumns=1)
        
      

