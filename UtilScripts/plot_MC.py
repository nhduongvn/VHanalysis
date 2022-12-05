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

###############################
## These you can edit / change
###############################
years = ['16', '17', '18']
regions = ['tags', 'algo', 'both']
summary_control_plot_name = 'summary_control_plot_zjet_zHFjet.txt'
plotFolder = '../full_results/'

ss = ['ZH_HToCC_ZToQQ', 'ggZH_HToCC_ZToQQ', 'ZH_HToBB_ZToQQ', 'ggZH_HToBB_ZToQQ', 'QCD_HT200to300_v9', 'WJetsToQQ_HT-400to600', 'WJetsToLNu_HT-400to600', 'ZJetsToQQ_HT-400to600', 'TTToHadronic', 'TTToSemiLeptonic', 'TTTo2L2Nu', 'ST_t-channel_antitop', 'ST_t-channel_top', 'ST_tW-channel_antitop', 'ST_tW-channel_top', 'WW', 'WZ', 'ZZ']

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
    for iN in names:
      fNames[s][y].append(cfg.get('Paths', 'path') + '/' + iN)
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
    
## Go through each region of interest
for r in regions:
  
  nums[r] = {}
  plotNames = cfg.get('Plots', 'VbbHcc_plot').split(',')
  
  for plN in plotNames:
    hN = 'VbbHcc_' + r + '_' + plN
    
    ## Get all the desired plots
    hZHcc = getHist(hN,['ZH_HToCC_ZToQQ'],fHist,lumiScales)
    hZHbb = getHist(hN,['ZH_HToBB_ZToQQ'],fHist,lumiScales)
    hggZHcc = getHist(hN,['ggZH_HToCC_ZToQQ'],fHist,lumiScales)
    hggZHbb = getHist(hN,['ggZH_HToBB_ZToQQ'],fHist,lumiScales)
    hQCD = getHist(hN, ['QCD_HT200to300_v9'], fHist, lumiScales)
    hWJ = getHist(hN, ['WJetsToQQ_HT-400to600'], fHist, lumiScales)
    hZJ = getHist(hN, ['ZJetsToQQ_HT-400to600'], fHist, lumiScales)
    hTT = getHist(hN,['TTToHadronic','TTToSemiLeptonic','TTTo2L2Nu'],fHist,lumiScales)
    hST = getHist(hN,['ST_t-channel_antitop','ST_t-channel_top','ST_tW-channel_antitop','ST_tW-channel_top'],fHist,lumiScales)
    hWW = getHist(hN,['WW'],fHist,lumiScales)
    hWZ = getHist(hN,['WZ'],fHist,lumiScales)
    hZZ = getHist(hN,['ZZ'],fHist,lumiScales)
    
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
        hST[y].Clone().Rebin(nRebin),
        hTT[y].Clone().Rebin(nRebin),
        hZJ[y].Clone().Rebin(nRebin),
        hWJ[y].Clone().Rebin(nRebin),
        hWW[y].Clone().Rebin(nRebin),
        hWZ[y].Clone().Rebin(nRebin),
        hZZ[y].Clone().Rebin(nRebin),
        hZHbb[y].Clone().Rebin(nRebin),
        hggZHbb[y].Clone().Rebin(nRebin),
        hZHcc[y].Clone().Rebin(nRebin),
        hggZHcc[y].Clone().Rebin(nRebin)
      ]
      
      plotNames_process = []
      plotNames_process = [
        'QCD', 'Single Top', 't#bar{t}', 'Z + jets', 'W + jets',
        'WW', 'WZ', 'ZZ', 'ZHbb', 'ggZHbb', 'ZHcc', 'ggZHcc'
      ]
      
      logY = False
      if 'CutFlow' in plN: logY = True
      makeStackPlot(plots_process, plotNames_process, plN + '_' + r + '_all',
        plotFolder + '/20' + y + '_QCDv9' + '/' + r + '/', xA_title, xA_range, 'MC unc. (stat.)',
        False, logY=logY, lumi=lumiS[y])
      
    ###################################
    ## Plot control plot for all years
    ###################################
    hZHccA = hZHcc['16'].Clone(hZHcc['16'].GetName()+'_all')
    hZHbbA = hZHbb['16'].Clone(hZHbb['16'].GetName()+'_all')
    hggZHccA = hggZHcc['16'].Clone(hggZHcc['16'].GetName()+'_all')
    hggZHbbA = hggZHbb['16'].Clone(hggZHbb['16'].GetName()+'_all')
    hQCDA = hQCD['16'].Clone(hQCD['16'].GetName()+'_all')
    hSTA = hST['16'].Clone(hST['16'].GetName()+'_all')
    hTTA = hTT['16'].Clone(hTT['16'].GetName()+'_all')
    hZJA = hZJ['16'].Clone(hZJ['16'].GetName()+'_all')
    hWJA = hWJ['16'].Clone(hWJ['16'].GetName()+'_all')
    hWWA = hWW['16'].Clone(hWW['16'].GetName()+'_all')
    hWZA = hWZ['16'].Clone(hWZ['16'].GetName()+'_all')
    hZZA = hZZ['16'].Clone(hZZ['16'].GetName()+'_all')
      
    for y in ['17','18']:
      hDatA.Add(hDat[y])
      hZHccA.Add(hZHcc[y])
      hZHbbA.Add(hZHbb[y])
      hggZHccA.Add(hggZHcc[y])
      hggZHbbA.Add(hggZHbb[y])
      hQCDA.Add(hQCD[y])
      hSTA.Add(hST[y])
      hTTA.Add(hTT[y])
      hZJA.Add(hZJ[y])
      hWJA.Add(hWJ[y])
      hWWA.Add(hWW[y])
      hWZA.Add(hWZ[y])
      hZZA.Add(hZZ[y])

    plots_process = [
      hQCDA.Clone().Rebin(nRebin),
      hSTA.Clone().Rebin(nRebin),
      hTTA.Clone().Rebin(nRebin),
      hZJA.Clone().Rebin(nRebin),
      hWJA.Clone().Rebin(nRebin),
      hWWA.Clone().Rebin(nRebin),
      hWZA.Clone().Rebin(nRebin),
      hZZA.Clone().Rebin(nRebin),
      hZHbbA.Clone().Rebin(nRebin),
      hggZHbbA.Clone().Rebin(nRebin),
      hZHccA.Clone().Rebin(nRebin),
      hggZHccA.Clone().Rebin(nRebin)
    ]
    
    plotNames_process = []
    plotNames_process = [
      'QCD', 'Single Top', 't#bar{t}', 'Z + jets', 'W + jets',
      'WW', 'WZ', 'ZZ', 'ZHbb', 'ggZHbb', 'ZHcc', 'ggZHcc'
    ]
    
    logY = False
    if 'CutFlow' in plN: logY=True
    makeStackPlot(plots_process, plotNames_process, plN + '_'+ r + '_all', 
      plotFolder + 'All_QCDv9' + '/' + r + '/', xA_title, xA_range, 'MC. unc. (stat.)',
      False, logY=logY, lumi='138', minY_forLog=1.0)
