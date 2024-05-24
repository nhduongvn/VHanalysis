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
from my_funcs import makeDataMCPlot, makePlot, blind_region, makeOverlapPlot

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
years = ['16']
regions = ['tagOnly', 'DHZfirst', 'tagFirst']
regions = ['tagFirst']
useLogY = False
outputDir = '../plot_results/2024Feb/'
dirpath = '../condor_results/2024Feb/NONE/'
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

category_samples = {
  "QCD": ['QCD_HT100to200_v9',
  'QCD_HT200to300_v9', 'QCD_HT300to500_v9',           
  'QCD_HT500to700_v9', 'QCD_HT700to1000_v9', 'QCD_HT1000to1500_v9', 
  'QCD_HT1500to2000_v9', 'QCD_HT2000toInf_v9']
}

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
  plotNames = ["H_pt_jet0", "H_pt_jet1", "Z_pt_jet0", "Z_pt_jet1"]
  
  # We need to get plots for all of the proper pT overlays
  plots_per_year = {}
  for plN in plotNames:
    hN = "VH_" + r + "_" + plN
    print ">>>", hN
    plots_per_year[plN] = getHist(hN, category_samples["QCD"], histFiles, lumiScales)
  
  # Go through each year
  for y in years:
    
    # Overlap the Higgs pT plots and the Z pT plots
    plots = [
      plots_per_year["H_pt_jet0"][y].Clone().Rebin(2),
      plots_per_year["H_pt_jet1"][y].Clone().Rebin(2)
    ]
    plotNames = [
      "Higgs p_{T}^{j0}",
      "Higgs p_{T}^{j1}"
    ]
    
    canvasName = r + "_Higgs_" + y
    output_path = outputDir + "/pT_overlap/20" + y
    makeOverlapPlot(plots, plotNames, canvasName, output_path, 
      "p_{T} (GeV)", [0,2000], "Events / 2 GeV",
      1, True, lumiS[y])
    
    plots = [
      plots_per_year["Z_pt_jet0"][y].Clone().Rebin(2),
      plots_per_year["Z_pt_jet1"][y].Clone().Rebin(2)
    ]
    plotNames = [
      "Z p_{T}^{j0}",
      "Z p_{T}^{j1}"
    ]
    
    canvasName = r + "_Z_" + y
    output_path = outputDir + "/pT_overlap/20" + y
    makeOverlapPlot(plots, plotNames, canvasName, output_path, 
      "p_{T} (GeV)", [0,2000], "Events / 2 GeV",
      1, True, lumiS[y])
    
    plots = [
      plots_per_year["H_pt_jet0"][y].Clone().Rebin(2),
      plots_per_year["H_pt_jet1"][y].Clone().Rebin(2),
      plots_per_year["Z_pt_jet0"][y].Clone().Rebin(2),
      plots_per_year["Z_pt_jet1"][y].Clone().Rebin(2)
    ]
    plotNames = [
      "Higgs p_{T}^{j0}",
      "Higgs p_{T}^{j1}",
      "Z p_{T}^{j0}",
      "Z p_{T}^{j1}"
    ]
    
    canvasName = r + "_all_" + y
    output_path = outputDir + "/pT_overlap/20" + y
    makeOverlapPlot(plots, plotNames, canvasName, output_path, 
      "p_{T} (GeV)", [0,2000], "Events / 2 GeV",
      1, True, lumiS[y])
    
    canvasName = r + "_all_" + y + "_ZOOM"
    output_path = outputDir + "/pT_overlap/20" + y
    makeOverlapPlot(plots, plotNames, canvasName, output_path, 
      "p_{T} (GeV)", [0,200], "Events / 2 GeV",
      1, True, lumiS[y], lower=True)
  
