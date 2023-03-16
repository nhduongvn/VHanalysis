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

bckg_colors = [ ROOT.kMagenta + 2, ROOT.kOrange + 7]

###############################
## These you can edit / change
###############################
years = ['16', '17', '18']
regions = ['tags', 'algo', 'both']##, 'alljet', 'seljet']
plotCat = 'VbbHcc'
useLogY = True

plotFolder = '../full_results/'      ## mediumWP
resultpath = '../condor_results/' 
plotFolder = '../looseWP_results/'   ## looseWP
resultpath = '../newest_condor_results/'

## Normal List of Files we want
ss = ['ZH_HToCC_ZToQQ', 'ggZH_HToCC_ZToQQ', 'ZH_HToBB_ZToQQ', 'ggZH_HToBB_ZToQQ', 
  'QCD_HT200to300_v9', 'QCD_HT300to500_v9', 'QCD_HT500to700_v9', 'QCD_HT700to1000_v9',
  'QCD_HT1000to1500_v9', 'QCD_HT1500to2000_v9', 'QCD_HT2000toInf_v9', 'WJetsToQQ_HT-400to600', 
  'WJetsToLNu_HT-400to600', 'ZJetsToQQ_HT-400to600', 'TTToHadronic', 'TTToSemiLeptonic', 
  'TTTo2L2Nu', 'ST_t-channel_antitop', 'ST_t-channel_top', 'ST_tW-channel_antitop', 
  'ST_tW-channel_top', 'WW', 'WZ', 'ZZ']

## List with just QCD and ttbar files
ss = [ 'QCD_HT100to200_v9', 'QCD_HT200to300_v9', 'QCD_HT300to500_v9', 'QCD_HT500to700_v9',
  'QCD_HT700to1000_v9', 'QCD_HT1000to1500_v9', 'QCD_HT1500to2000_v9', 'QCD_HT2000toInf_v9', 
  'TTToHadronic', 'TTToSemiLeptonic', 'TTTo2L2Nu']

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
  plotNames = cfg.get('Plots', plotCat + '_plot').split(',')
  
  for plN in plotNames:
    if r != '':
      hN = 'VbbHcc_' + r + '_' + plN
    else:
      hN = 'VbbHcc_' + plN
    
    ## Get all the desired plots
    hQCD = getHist(hN, ['QCD_HT100to200_v9','QCD_HT200to300_v9', 'QCD_HT300to500_v9', 
      'QCD_HT500to700_v9', 'QCD_HT700to1000_v9', 'QCD_HT1000to1500_v9', 
      'QCD_HT1500to2000_v9', 'QCD_HT2000toInf_v9'], fHist, lumiScales)
    hTT  = getHist(hN,['TTToHadronic','TTToSemiLeptonic','TTTo2L2Nu'],fHist,lumiScales)
    
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
        hQCD[y].Clone().Rebin(nRebin),
        hTT[y].Clone().Rebin(nRebin),
      ]
      
      plotNames_process = []
      plotNames_process = [
        'QCD', 'Single Top', 't#bar{t}', 'Z + jets', 'W + jets',
        'WW', 'WZ', 'ZZ', 'ZHbb', 'ggZHbb', 'ZHcc', 'ggZHcc'
      ]
      plotNames_process = [ 'QCD', 't#bar{t}']
      
      _logY = useLogY
      if 'CutFlow' in plN: _logY = True
      makeStackPlot(plots_process, plotNames_process,                       ## plots & plot names
        plN + '_' + r + '_' + y,                                            ## canvas name
        plotFolder + '/20' + y + '_QCDv9' + '/bckg/' + r + '/',             ## output folder
        xA_title, xA_range,                                                 ## x-axis information
        normMC=False, logY=_logY, lumi=lumiS[y],custom_colors=bckg_colors)  ## modifications
      

    ###################################
    ## Plot control plot for all years
    ###################################
    hQCDA = hQCD['16'].Clone(hQCD['16'].GetName()+'_all')
    hTTA = hTT['16'].Clone(hTT['16'].GetName()+'_all')
      
    for y in ['17','18']:
      hQCDA.Add(hQCD[y])
      hTTA.Add(hTT[y])

    plots_process = [
      hQCDA.Clone().Rebin(nRebin),
      hTTA.Clone().Rebin(nRebin),
    ]
    
    plotNames_process = []
    plotNames_process = [
      'QCD', 'Single Top', 't#bar{t}', 'Z + jets', 'W + jets',
      'WW', 'WZ', 'ZZ', 'ZHbb', 'ggZHbb', 'ZHcc', 'ggZHcc'
    ]
    plotNames_process = [ 'QCD', 't#bar{t}' ]
    
    _logY = useLogY
    if 'CutFlow' in plN: _logY=True
    makeStackPlot(plots_process, plotNames_process,                                      ## plots & plot names
      plN + '_'+ r + '_all',                                                             ## canvas name
      plotFolder + 'All_QCDv9' + '/bckg/' + r + '/',                                     ## output folder
      xA_title, xA_range,                                                                ## x-axis information
      normMC=False, logY=_logY, lumi='138', minY_forLog=1.0, custom_colors=bckg_colors)  ## modifications

###############################################################################
## Plot Type #2 - MET
###############################################################################

## Get all the desired plots
hZHcc = getHist("VbbHcc_all_MET", ss,fHist,lumiScales)
hggZHcc = getHist("VbbHcc_all_MET", ss,fHist,lumiScales)

for y in years:
  tmps = cfg.get("MET",'xAxisRange').split(',')
  xA_range = []
  if 'Pi' not in tmps[1]:
    xA_range = [float(tmps[0]), float(tmps[1])]
  else:
    xA_range = [0, ROOT.TMath.Pi()]
  xA_title = cfg.get("MET", 'xAxisTitle')
  nRebin = int(cfg.get("MET", 'rebin'))
  
  plots_process = [
    hZHcc[y].Clone().Rebin(nRebin),
    hggZHcc[y].Clone().Rebin(nRebin)
  ]

  plotNames_process = [ 'QCD', 't#bar{t}' ]
      
  logY = useLogY
  if 'CutFlow' in plN: logY = True
  makeStackPlot(plots_process, plotNames_process,                                  ## plots & plot names
    "MET_" + y,                                                                    ## canvas name
    plotFolder + '/20' + y + '_QCDv9' + '/bckg/all/',                              ## output folder
    xA_title, xA_range,                                                            ## x-axis information
    False, logY=logY, lumi=lumiS[y], minY_forLog=1.0, custom_colors=bckg_colors)   ## modifications





