## == IMPORT STATEMENTS =======================================================

import ROOT
import sys,os
import copy
import math
import ConfigParser
from math import *

from my_funcs import makeGausFit

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
regions = [
  'tags', 'tags_noMassCorr', 'tags_noJEC',
  'algo', 'algo_noMassCorr', 'algo_noJEC',
  'both', 'both_noMassCorr', 'both_noJEC'
]
plotCat = 'VbbHcc'
useLogY = False

plotFolder = '../plot_results/JEC_comp/noJEC/'    ## medium WP no JEC
resultpath = '../condor_results/mediumWP_noJEC/'
plotFolder = '../plot_results/JEC_comp/JEC/'      ## medium WP w/ JEC
resultpath = '../condor_results/mediumWP_wJEC/' 
plotFolder = '../plot_results/JEC_comp/massJEC/'  ## medium WP w/ JEC + mass
resultpath = '../condor_results/mediumWP_wMassJEC/'
plotFolder = '../plot_results/JEC_comp/updated/'  ## medium WP (updated)
resultpath = '../condor_results/mediumWP_updated/'
plotFolder = '../plot_results/JEC_comp/viaFlavor/' ## medium WP (reg via hadron flavor)
resultpath = '../condor_results/mediumWP_viaFlavor/'
plotFolder = '../plot_results/JEC_comp/newest/'  ## medium WP (all in one file)
resultpath = '../condor_results/mediumWP_newest/'

## List with just Signal
ss = ['ZH_HToCC_ZToQQ', 'ggZH_HToCC_ZToQQ']

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
    dirpath = resultpath + '/NONE/'
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


nums = {}

###############################################################################
## Plot Type #1 - Everything but MET
###############################################################################
        
## Go through each region of interest
for r in regions:
  
  nums[r] = {}
  plotNames = ['Z_mass', 'H_mass']
  ranges = [ [65,115], [90,160] ]
  
  for i in range(len(plotNames)):
    
    plN = plotNames[i]
    fitRange = ranges[i]
    if r != '':
      hN = 'VbbHcc_' + r + '_' + plN
    else:
      hN = 'VbbHcc_' + plN
    
    ## Get all the desired plots
    hSignal = getHist(hN, ss, fHist, lumiScales)
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
        hSignal[y].Clone().Rebin(nRebin)
        #hZHcc[y].Clone().Rebin(nRebin),
        #hggZHcc[y].Clone().Rebin(nRebin)
      ]
      
      plotNames_process = [ 'ZHcc + ggZHcc'] #'ZHcc', 'ggZHcc' ]
      
      _logY = useLogY
      if 'CutFlow' in plN: _logY = True
      makeGausFit(plots_process[0], 'ZHcc + ggZHcc',        ## plot & plot name
        plN + '_' + r + '_' + y,                            ## canvas name
        plotFolder + '/20' + y + '_QCDv9' + '/gaus_fit/',   ## output folder
        fitRange, xA_title, xA_range,                       ## x-axis information
        lumiS[y], ROOT.kBlack, ROOT.kRed)                   ## modifications
        
      

