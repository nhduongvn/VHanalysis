## ============================================================================
## plot_weights.py - This macro is used to plot the various weights used to 
## 		     modify events in our MC samples. NOTE: These only apply to
##		     MC, so we do not worry about any data.
## ============================================================================

## == IMPORT STATEMENTS ========================================================

import ROOT
import sys,os
import copy
import math
import ConfigParser
from math import *
from my_funcs import makeStackPlot

ROOT.gROOT.SetBatch(True)

## == Useful Methods ==========================================================

## Scale a histogram to the proper luminosity
def scaleToLumi1(fName, xSec, lumi):
  f = ROOT.TFile.Open(fName, 'read')  ## Read the file
  hTmp = f.Get('Nevt')                ## Get the histogram
  nP = hTmp.GetBinContent(3)          ## Calculate the scale
  nN = hTmp.GetBinContent(1)
  return lumi*xSec/(nP-nN)            ## Return it


## Get the histograms for a given sample and variable
def getHist(plotName, sample_names, hist_files, lumiScales):
  
  hOut = {}
  
  ## Go through each year we're interested in.
  for y in years:
    
    ## Get the first sample & the appropriate histogram
    print sample_names[0], plotName, y
    hOut[y] = hist_files[sample_names[0]][y][0].Get(plotName).Clone()
    if sample_names[0] not in ['JetHT']:
      hOut[y].Scale(lumiScales[sample_names[0]][y][0])

    ## Add the other samples
    for iS in range(len(sample_names)):
      for fi in range(len(hist_files[sample_names[iS]][y])):
        
        ## Skip the first sample (already done)
        if iS == 0 and fi == 0: continue
                
        h = hist_files[sample_names[iS]][y][fi].Get(plotName).Clone()
        if sample_names[iS] not in ['JetHT']:
          h.Scale(lumiScales[sample_names[iS]][y][fi])
        hOut[y].Add(h)
  
  return hOut

## == Main Code ===============================================================

## Edit / change the following as necessary:
years = ['16', '17', '18']
useLogY = False

dirpath = '../condor_results/Aug2023_addedTagSF/NONE/'
outputDir = '../plot_results/Aug2023_SF/'

debug = True

## Normal List of Samples 
ss = [ 'JetHT', 'ZH_HToCC_ZToQQ', 'ggZH_HToCC_ZToQQ', ## Jet HT & ZH(H->CC)
  'ZH_HToBB_ZToQQ', 'ggZH_HToBB_ZToQQ',               ## ZH(H->BB)
  'QCD_HT100to200_v9',
  'QCD_HT200to300_v9', 'QCD_HT300to500_v9',           ## QCD (200-Inf)
  'QCD_HT500to700_v9', 'QCD_HT700to1000_v9', 'QCD_HT1000to1500_v9', 
  'QCD_HT1500to2000_v9', 'QCD_HT2000toInf_v9', 
  'WJetsToQQ_HT-200to400',
  'WJetsToQQ_HT-400to600', 'WJetsToQQ_HT-600to800',   ## WJ (400-Inf)
  'WJetsToQQ_HT-800toInf', 'WJetsToLNu_HT-400to600',
  'WJetsToLNu_HT-100to200', 'WJetsToLNu_HT-200to400',
  'WJetsToLNu_HT-600to800','WJetsToLNu_HT-800to1200', 
  'WJetsToLNu_HT-1200to2500','WJetsToLNu_HT-2500toInf',
  'ZJetsToQQ_HT-200to400',
  'ZJetsToQQ_HT-400to600', 'ZJetsToQQ_HT-600to800',   ## ZJ (400-Inf)
  'ZJetsToQQ_HT-800toInf',
  'TTToHadronic','TTToSemiLeptonic','TTTo2L2Nu',      ## Top (ttbar)
  'ST_t-channel_antitop','ST_t-channel_top',          ## Top (Single Top)
  'ST_tW-channel_antitop','ST_tW-channel_top',
  'WW','WZ','ZZ'                                      ## VV
]

################################
## Do not edit below this point
################################

## Load the config
if debug: print ">>> Loading config file..."
config_file = '../Configs/config.ini'
cfg = ConfigParser.ConfigParser()
cfg.read(config_file)

## Get the lumi scales
if debug: print ">>> Loading lumi scales..."
lumiS = {}
for y in years:
  lumiTmp = float(cfg.get('General','lumi_'+y))/1000.0
  lumiTmp = float("%.1f" % lumiTmp)
  lumiS[y] = str(lumiTmp)
print "lumi scales = ", lumiS

## Retrieve necessary information from the desired samples
print ">>> Retrieving file information..."
fileNames = {}
xSecs = {}
lumiScales = {}
histFiles = {}

for s in ss:
  
  fileNames[s] = {}
  xSecs[s] = {}
  lumiScales[s] = {}
  histFiles[s] = {}
  
  for y in years:
    
    lumi = float(cfg.get('General','lumi_'+y))
    names = cfg.get(s,'file_'+y).split(',')
    print '>>>>>>>>>: ', len(names)
    xSecTmps = ['1']*len(names)
    kfactor = ['1']*len(names)
    if s not in ['JetHT']:
      xSecTmps = cfg.get(s, 'xSec_'+y).split(',')
    
    fileNames[s][y] = []
    xSecs[s][y] = []
    histFiles[s][y] = []
    
    for iN in names:
      fileNames[s][y].append(dirpath + '/' + iN)
      histFiles[s][y].append(ROOT.TFile.Open(fileNames[s][y][-1],'READ'))
    
    print xSecTmps
    for iS in xSecTmps:
      if '*' in iS: iS = iS.split('*')
      if len(iS) == 2:
        xSecs[s][y].append(float(iS[0])*float(iS[1]))
      else:
        xSecs[s][y].append(float(iS))
    
    lumiScales[s][y] = [1]*len(names)
    for iN in range(len(fileNames[s][y])):
      if s not in ['JetHT']:
        print s, y, iN, fileNames[s][y][iN]
        lumiScales[s][y][iN] = scaleToLumi1(fileNames[s][y][iN], xSecs[s][y][iN], lumi)

nums = {}
print "All files retrieved..."


## Go through our regions and get the variables we want
plotNames = cfg.get('Plots', 'Weight_plot').split(',')

for plN in plotNames:
  
  ## Make sure we strip away any whitespace
  plN = plN.strip(' ')
  print ">>>>>> Checking plot plN = ", plN
  
  ## Get all the desired plots. In this case, we don't have weights
  ## in Data, so we're looking purely at MC files.
  hZHcc = getHist(plN, ['ZH_HToCC_ZToQQ'], histFiles, lumiScales)           ## ZH (signal)
  hZHbb = getHist(plN, ['ZH_HToBB_ZToQQ'], histFiles, lumiScales)           ## ZHbb
  hggZHcc = getHist(plN, ['ggZH_HToCC_ZToQQ'], histFiles, lumiScales)       ## ggZH (signal 2)
  hggZHbb = getHist(plN, ['ggZH_HToBB_ZToQQ'], histFiles, lumiScales)       ## ggZHbb
  
  hQCD = getHist(plN, ['QCD_HT100to200_v9', 'QCD_HT200to300_v9',            ## QCD
    'QCD_HT300to500_v9', 'QCD_HT500to700_v9', 'QCD_HT700to1000_v9', 
    'QCD_HT1000to1500_v9', 'QCD_HT1500to2000_v9', 'QCD_HT2000toInf_v9'],
    histFiles, lumiScales)
    
  hWJ = getHist(plN, ['WJetsToQQ_HT-200to400', 'WJetsToQQ_HT-400to600',     ## W+j
    'WJetsToQQ_HT-600to800', 'WJetsToQQ_HT-800toInf', 'WJetsToLNu_HT-400to600',
    'WJetsToLNu_HT-100to200', 'WJetsToLNu_HT-200to400', 
    'WJetsToLNu_HT-600to800','WJetsToLNu_HT-800to1200',
    'WJetsToLNu_HT-1200to2500','WJetsToLNu_HT-2500toInf'],
    histFiles, lumiScales)
  
  hZJ = getHist(plN, ['ZJetsToQQ_HT-200to400', 'ZJetsToQQ_HT-400to600',     ## Z+j
    'ZJetsToQQ_HT-600to800', 'ZJetsToQQ_HT-800toInf'],
    histFiles, lumiScales)

  hTT = getHist(plN, ['TTToHadronic', 'TTToSemiLeptonic', 'TTTo2L2Nu'],     ## ttbar
    histFiles, lumiScales)
    
  hST = getHist(plN, ['ST_t-channel_antitop','ST_t-channel_top',            ## Single Top
    'ST_tW-channel_antitop','ST_tW-channel_top'], histFiles, lumiScales)

  hWW = getHist(plN, ['WW'], histFiles, lumiScales)  ## WW
  hWZ = getHist(plN, ['WZ'], histFiles, lumiScales)  ## WZ
  hZZ = getHist(plN, ['ZZ'], histFiles, lumiScales)  ## ZZ
  
  ############################
  # Stack plots for each year
  ############################
  
  for y in years:
    
    ## Get the variables we desire to modify our plots.
    ## These come from our config file.
    print ">>>>>> Plotting for 20" + y
    tmps = cfg.get(plN, 'xAxisRange').split(',')
    xA_range = []
    if 'Pi' not in tmps[1]:
      xA_range = [float(tmps[0]), float(tmps[1])]
    else:
      xA_range = [0, ROOT.TMath.Pi()]
    
    xA_title = cfg.get(plN, 'xAxisTitle')
    nRebin = int(cfg.get(plN, 'rebin'))
    
    ## Compile the plots and their names into proper lists.
    plots_process = [
        #hData[y].Clone().Rebin(nRebin),   ## Jet HT (data)
        hQCD[y].Clone().Rebin(nRebin),    ## QCD
        hST[y].Clone().Rebin(nRebin),     ## Single Top
        hTT[y].Clone().Rebin(nRebin),     ## ttbar
        hZJ[y].Clone().Rebin(nRebin),     ## Z+j
        hWJ[y].Clone().Rebin(nRebin),     ## W+j
        hWW[y].Clone().Rebin(nRebin),     ## WW
        hWZ[y].Clone().Rebin(nRebin),     ## WZ
        hZZ[y].Clone().Rebin(nRebin),     ## ZZ
        hZHbb[y].Clone().Rebin(nRebin),   ## ZHbb
        hggZHbb[y].Clone().Rebin(nRebin), ## ggZHbb
        hZHcc[y].Clone().Rebin(nRebin),   ## ZHcc (signal)
        hggZHcc[y].Clone().Rebin(nRebin)  ## ggZHcc (signal 2)
    ]
    
    #dataTitle = 'Data (JetHT, 20'+y+')'
    plotNames_process = [
      'QCD', 'Single top', 't#bar{t}', 'Z + jets', 'W + jets', 'WW',
      'WZ', 'ZZ', 'ZHbb', 'ggZHbb', 'ZHcc', 'ggZHcc'
    ]
      
    ## Plot our variables
    logY = useLogY
    if 'CutFlow' in plN: logY = True
    
    canvasName = plN + '_' + y
    plotFolder = outputDir + '/20' + y + '/weights/'
      
    makeStackPlot(plots_process, plotNames_process,	## Our plots & names
      canvasName, plotFolder,
      xA_title, xA_range, logY=logY,
      lumi=lumiS[y], legendOnLeft=True)
      
  
