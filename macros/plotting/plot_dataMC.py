## ============================================================================
## plot_dataMC.py - This macro is used to plot the various samples and compare
##                  them with the data we're using.
## ============================================================================

## == IMPORT STATEMENTS =======================================================

import ROOT
import sys,os
import copy
import math
import ConfigParser
from math import *
from my_funcs import makeDataMCPlot, makePlot, blind_region

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
    if sample_names[0] not in ['JetHT', 'BTagCSV', 'Data']:
      hOut[y].Scale(lumiScales[sample_names[0]][y][0])

    ## Add the other samples
    for iS in range(len(sample_names)):
      for fi in range(len(hist_files[sample_names[iS]][y])):
        
        ## Skip the first sample (already done)
        if iS == 0 and fi == 0: continue
                
        h = hist_files[sample_names[iS]][y][fi].Get(plotName).Clone()
        if sample_names[iS] not in ['JetHT', 'BTagCSV', 'Data']:
          h.Scale(lumiScales[sample_names[iS]][y][fi])
        hOut[y].Add(h)
  
  return hOut

## == Main Code ===============================================================

print "Pulling settings and preferences..."

## Edit / change the following options as needed:
years = ['16', '17', '18']
#years = ['17']
regions = ['tagOnly', 'DHZfirst', 'tagFirst']
#regions = ['tagFirst']
useLogY = False
outputDir = '../plot_results/2024May/dataMC/'
dirpath = '../condor_results/2024May/NONE/'
plotCat = 'VbbHcc_plot'

#regions = ['']
#plotCat = 'Weight_plot'

debug = True

## Normal List of Samples 
ss = [ 'Data', 'ZH_HToCC_ZToQQ', 'ggZH_HToCC_ZToQQ', ## Jet HT & ZH(H->CC)
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
    if s not in ['JetHT','BTagCSV', 'Data']:
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
      if s not in ['JetHT','BTagCSV', 'Data']:
        print s, y, iN, fileNames[s][y][iN]
        lumiScales[s][y][iN] = scaleToLumi1(fileNames[s][y][iN], xSecs[s][y][iN], lumi)

nums = {}
print "All files retrieved..."

## Go through each region of interest
for r in regions:
  
  print ">>> Checking region r = ", r
  nums[r] = {}
  plotNames = cfg.get('Plots', plotCat).split(',')
  
  #plotNames = ["CutFlow"]
 # plotNames = ["nCombos"]
  
  
  for plN in plotNames:
    
    plN = plN.strip(' ')
    print ">>>>>> Checking plot plN = ", plN
    if r != '': hN = 'VH_' + r + '_' + plN
    else: hN = plN
    
    ## Get all desired plots
    hData = getHist(hN, ['Data'], histFiles, lumiScales)                    ## Data
    hZHcc = getHist(hN, ['ZH_HToCC_ZToQQ'], histFiles, lumiScales)           ## ZH (signal)
    hZHbb = getHist(hN, ['ZH_HToBB_ZToQQ'], histFiles, lumiScales)           ## ZHbb
    hggZHcc = getHist(hN, ['ggZH_HToCC_ZToQQ'], histFiles, lumiScales)       ## ggZH (signal 2)
    hggZHbb = getHist(hN, ['ggZH_HToBB_ZToQQ'], histFiles, lumiScales)       ## ggZHbb
    
    hQCD = getHist(hN, ['QCD_HT100to200_v9', 'QCD_HT200to300_v9',            ## QCD
      'QCD_HT300to500_v9', 'QCD_HT500to700_v9', 'QCD_HT700to1000_v9', 
      'QCD_HT1000to1500_v9', 'QCD_HT1500to2000_v9', 'QCD_HT2000toInf_v9'],
      histFiles, lumiScales)
    
    hWJ = getHist(hN, ['WJetsToQQ_HT-200to400', 'WJetsToQQ_HT-400to600',     ## W+j
      'WJetsToQQ_HT-600to800', 'WJetsToQQ_HT-800toInf', 'WJetsToLNu_HT-400to600',
      'WJetsToLNu_HT-100to200', 'WJetsToLNu_HT-200to400', 
      'WJetsToLNu_HT-600to800','WJetsToLNu_HT-800to1200',
      'WJetsToLNu_HT-1200to2500','WJetsToLNu_HT-2500toInf'],
      histFiles, lumiScales)
    
    hZJ = getHist(hN, ['ZJetsToQQ_HT-200to400', 'ZJetsToQQ_HT-400to600',     ## Z+j
      'ZJetsToQQ_HT-600to800', 'ZJetsToQQ_HT-800toInf'],
      histFiles, lumiScales)

    hTT = getHist(hN, ['TTToHadronic', 'TTToSemiLeptonic', 'TTTo2L2Nu'],     ## ttbar
      histFiles, lumiScales)
    
    hST = getHist(hN, ['ST_t-channel_antitop','ST_t-channel_top',            ## Single Top
      'ST_tW-channel_antitop','ST_tW-channel_top'], histFiles, lumiScales)

    hWW = getHist(hN, ['WW'], histFiles, lumiScales)  ## WW
    hWZ = getHist(hN, ['WZ'], histFiles, lumiScales)  ## WZ
    hZZ = getHist(hN, ['ZZ'], histFiles, lumiScales)  ## ZZ

    ############################
    # Stack plots for each year
    ############################
    
    for y in years:
      
      print ">>>>>> Plotting for 20" + y
      tmps = cfg.get(plN, 'xAxisRange').split(',')
      xA_range = []
      if 'Pi' not in tmps[1]:
        xA_range = [float(tmps[0]), float(tmps[1])]
      else:
        xA_range = [0, ROOT.TMath.Pi()]
      
      xA_title = cfg.get(plN, 'xAxisTitle')
      nRebin = int(cfg.get(plN, 'rebin'))
      
      ## If 2017, remove the problematic bin ~40-60 GeV
      if y in ['17']:
        if plN in ["H_mass", "Z_mass"]:
          low = 290# if plN == "H_mass" else 50
          high = 300# if plN == "H_mass" else 60
          hQCD[y] = blind_region(hQCD[y], low, high)
      
      plots_process = [
        hData[y].Clone().Rebin(nRebin),   ## Jet HT (data)
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
        
      
      if y == '18': dataTitle = 'Data (JetHT, 20'+y+')'
      else: dataTitle = 'Data (BTagCSV, 20'+y+')'
      
      plotNames_process = [
        dataTitle, 'QCD', 'Single top', 't#bar{t}', 'Z + jets', 'W + jets', 'WW',
        'WZ', 'ZZ', 'ZHbb', 'ggZHbb', 'ZHcc', 'ggZHcc'
      ]
      individual_names = [
        'Data', 'QCD', 'SingleTop', 'Ttbar', 'Zjets', 'Wjets', 'WW', 
        'WZ', 'ZZ', 'ZHbb', 'ggZHbb', 'ZHcc', 'ggZHcc'
      ]
      
      logY = useLogY
      if 'CutFlow' in plN: logY = True
      if 'nCombos' in plN: logY = True
      makeDataMCPlot(plots_process, plotNames_process, ## Plots
        plN + '_' + r + '_' + y, outputDir + '/20'+y,  ## folders
        xA_title, xA_range, 'MC unc. (stat.)', False,  ## axes
        logY=logY, lumi=lumiS[y], blindMass=True)      ## other
      
      ## Plot each plot separately so we have it for reference
      #for i in range(len(plotNames_process)):
      # makePlot(plots_process[i], plotNames_process[i],
      #    plN + '_' + r + '_' + y, outputDir + '/20' + y + '/' + individual_names[i],
      #    xA_title, xA_range, '', 1, logY, lumiS[y], ROOT.kBlack, ROOT.kRed, fill=False)
          
      
    ####################################
    ## Plot control plots for ALL years 
    ####################################
    
    continue
    
    ## Start by getting the first plot for each sample
    hDataA = hData['16'].Clone(hData['16'].GetName()+'_all')
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
    
    ## Then add to each one the other years
    for y in ['17','18']:
      hDataA.Add(hData[y])
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
      hWZA.Add(hWW[y])
      hZZA.Add(hZZ[y])
    
    ## Put all the plots & names into proper lists for plotting
    plots_process = [
      hDataA.Clone().Rebin(nRebin),
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
    
    dataTitle = 'Data (JetHT)'
    plotNames_process = [
      dataTitle, 'QCD', 'Single top', 't#bar{t}', 'Z + jets', 'W + jets',
      'WW', 'WZ', 'ZZ', 'ZHbb', 'ggZHbb', 'ZHcc', 'ggZHcc'
    ]
    
    logY = useLogY
   # if 'CutFlow' in plN: logY = True
    makeDataMCPlot(plots_process, plotNames_process, ## Plots
      plN + '_' + r + '_all', outputDir + '/All',
      xA_title, xA_range, 'MC unc. (stat.)', False,
      logY=logY, lumi='138', minY_forLog=0.3, blindMass=True)
    
    


