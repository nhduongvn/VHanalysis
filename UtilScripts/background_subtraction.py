## ============================================================================
## background_subtraction.py - We want to see what backgrounds we have in our
##                             estimation. To do this, we need to try to remove
##                             other backgrounds and see how they compare.
## 
## Notes:	create 10/11/2023, pyoung
## ============================================================================

## == Import Statements =======================================================

import sys, os
import ROOT
import ConfigParser
from math import *
from my_funcs import ScaleToLumi1, isWithinEllipse, within_line_range, makeDataMCPlot, blind_region

## == Useful Methods ==========================================================

## We're using this modified version without scaling because we want
## the most data points available in this case.
def getHist(plotName, sample_names, hist_files, lumiScales, debug = True):
  
  hOut = {}
  
  ## Go through each year we're interested in.
  for y in years:
    
    ## Get the first sample and the appropriate histogram
    if debug: 
      print "Looking in ", sample_names[0], " for ", plotName, "(20",y,")"
    hOut[y] = hist_files[sample_names[0]][y][0].Get(plotName).Clone()
    if sample_names[0] not in ['JetHT', 'Data']:
      hOut[y].Scale(lumiScales[sample_names[0]][y][0])
    
    ## Add the other samples
    for iS in range(len(sample_names)):
      for fi in range(len(hist_files[sample_names[iS]][y])):
        
        ## Skip the first sample (already grabbed)
        if iS == 0 and fi == 0: continue
        
        h = hist_files[sample_names[iS]][y][fi].Get(plotName).Clone()
        if sample_names[iS] not in ["JetHT", "Data"]:
          scale = lumiScales[sample_names[iS]][y][fi]
          if debug:
            print "Scaling ", sample_names[iS], ", SF = ", scale
          h.Scale(scale)
        hOut[y].Add(h)
  
  return hOut

## == Settings ================================================================

print "======================================================="
print "BACKGROUND_SUBTRACTION.py"
print "======================================================="

## 1. Get all the appropriate files & settings we need.
print "STEP 1: setting appropriate settings..."

## Set this so we don't have issues with outputting so many plots
ROOT.gROOT.SetBatch(True)

## The years we want to check
years = ['16', '17', '18']

## Do we want to use a logarithmic scale?
useLogY = False

## Input & Output file locations
dirpath = '../condor_results/Nov2023_updated/NONE/'
output_directory = '../plot_results/Nov2023_updated/'

## Variables we care about
selection_methods = [
  "tagOnly", "DHZfirst", "tagFirst"
]
selection_methods = [ "tagFirst" ]

plot_category = 'VbbHcc_plot'

variables = [ "MH_v_MZ" ]

## Normal List of Samples 
sampleList = [ 'Data', 'ZH_HToCC_ZToQQ', 'ggZH_HToCC_ZToQQ', ## Jet HT & ZH(H->CC)
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

## Category names & Labels
categories = [ 
  "Data", "QCD", "ZHcc", "ZHbb", "ggZHcc", "ggZHbb", 
  "WJ", "ZJ", "TT", "ST", "WW", "WZ", "ZZ" 
]

## Samples Split into Categories
category_samples = {
  "Data": ["Data"],
  "QCD": [ 'QCD_HT100to200_v9', 'QCD_HT200to300_v9', 
           'QCD_HT300to500_v9', 'QCD_HT500to700_v9', 
           'QCD_HT700to1000_v9', 'QCD_HT1000to1500_v9', 
           'QCD_HT1500to2000_v9', 'QCD_HT2000toInf_v9'],
  "ZHcc": ["ZH_HToCC_ZToQQ"],
  "ZHbb": ["ZH_HToBB_ZToQQ"],
  "ggZHcc": ["ggZH_HToCC_ZToQQ"],
  "ggZHbb": ["ggZH_HToBB_ZToQQ"],
  "WJ": ['WJetsToQQ_HT-200to400', 'WJetsToQQ_HT-400to600',  
      'WJetsToQQ_HT-600to800', 'WJetsToQQ_HT-800toInf', 'WJetsToLNu_HT-400to600',
      'WJetsToLNu_HT-100to200', 'WJetsToLNu_HT-200to400', 
      'WJetsToLNu_HT-600to800','WJetsToLNu_HT-800to1200',
      'WJetsToLNu_HT-1200to2500','WJetsToLNu_HT-2500toInf'],
  "ZJ": ['ZJetsToQQ_HT-200to400', 'ZJetsToQQ_HT-400to600',
      'ZJetsToQQ_HT-600to800', 'ZJetsToQQ_HT-800toInf'],
  "TT": ['TTToHadronic', 'TTToSemiLeptonic', 'TTTo2L2Nu'],
  "ST": ['ST_t-channel_antitop','ST_t-channel_top',
      'ST_tW-channel_antitop','ST_tW-channel_top'],
  "WW": ['WW'],
  "WZ": ['WZ'],
  "ZZ": ['ZZ']
}

other_backgrounds = [ "ZHbb", "ggZHbb", "WJ", "ZJ", "TT", "ST", "WW", "WZ", "ZZ" ]
other_backgrounds_v2 = [ "ZHbb", "ggZHbb", "WJ", "ZJ", "QCD", "ST", "WW", "WZ", "ZZ"]

## Regions
region_sizes = {
  "CR": 20,#[25,20],
  "VR": 10,#[15,10],
  "SR": 30,#25,#[30,25],
}

## Keep track of the scale factors we got from each region
CR_SF = {
  "tagOnly": {'16': 0.292, '17': 0.346, '18': 0.367 },
  "DHZfirst": {'16': 0.199, '17': 0.204, '18': 0.212},
  "tagFirst": {
    '16': 0.371,
    '17': 0.426,
    '18': 0.439,
  }
}

CR_SF_unc = {
  "tagOnly": {
    '16': 0.001,
    '17': 0.002,
    '18': 0.001
  },
  "DHZfirst": {
    '16': 0.001,
    '17': 0.002,
    '18': 0.002
  },
  "tagFirst": {
    '16': 0.001,
    '17': 0.002,
    '18': 0.002
  }
}

signal_regions = {
  "H_mass": [95,155],
  "Z_mass": [60,120],
}

colors = [800+7]

## Config file we want to use
config_file = '../Configs/config.ini'

## Debug mode control
debug_mode = True

## == Main Setup ==============================================================

#################################
## Do not edit below this point
## (unless absolutely necessary)
#################################

## 2. Retrieve the proper files and information from the configs.
print "STEP 2: retrieving files and luminosities..."

## Load the config files
if debug_mode: print ">>> Loading config file..."
cfg = ConfigParser.ConfigParser()
cfg.read(config_file)

## Get the proper lumi scales
if debug_mode: print ">>> Loading lumi scales..."
lumiS = {}
for y in years:
  lumiTmp = float(cfg.get('General','lumi_'+y))/1000.0
  lumiTmp = float("%.1f" % lumiTmp)
  lumiS[y] = str(lumiTmp)
if debug_mode: print ">>> lumi scales = ", lumiS

## Retrieve the proper files and information related to them.
if debug_mode: print ">>> Retrieving information on samples..."
fileNames = {}
xSecs = {}
lumiScales = {}
histFiles = {}

for s in sampleList:
  
  fileNames[s] = {}
  xSecs[s] = {}
  lumiScales[s] = {}
  histFiles[s] = {}
  
  for y in years:
  
    if debug_mode: print "\nLooking for year 20" + y
    
    ## Get the proper luminosity scale and the files
    ## for the given year (should be only ~1/year)
    lumi = float(cfg.get('General', 'lumi_'+y))
    names = cfg.get(s, 'file_'+y).split(',')
    if debug_mode: print ">>> | ", len(names), " files..."
    
    ## Get other values of interest
    xSecTmps = ['1']*len(names)
    kfactor = ['1']*len(names)
    if s not in ['JetHT', 'Data']:
      xSecTmps = cfg.get(s, 'xSec_'+y).split(',')
    
    ## Get the proper information for this year
    fileNames[s][y] = []
    xSecs[s][y] = []
    histFiles[s][y] = []
    
    for iN in names:
      fileNames[s][y].append(dirpath + '/' + iN)
      histFiles[s][y].append(ROOT.TFile.Open(fileNames[s][y][-1],'READ'))
    
    if debug_mode: print ">>> | xSec = ", xSecTmps
    for iS in xSecTmps:
      if '*' in iS: iS.split('*')
      if len(iS) == 2:
        xSecs[s][y].append(float(iS[0])*float(iS[1]))
      else:
        xSecs[s][y].append(float(iS))
    
    lumiScales[s][y] = [1]*len(names)
    for iN in range(len(fileNames[s][y])):
      if s not in ['JetHT']:
        print ">>> |", s, y, iN, fileNames[s][y][iN]
        lumiScales[s][y][iN] = ScaleToLumi1(fileNames[s][y][iN],
          xSecs[s][y][iN], lumi)

print "\n>>> All files retrieved..."

## == Main Code ===============================================================

## 3. Get the 2b1c data & modify it based on our estimation results.
print "STEP 3: For this part of the code, we need to loop through each"
print "        selection method, year, and variable. We want to get   "
print "        the full list of samples and instead of using the QCD  "
print "        MC in the stack plots, we use the data-driven shape.   "
print "        To determine if the other backgrounds are included, we "
print "        subtract the MC samples from the others.               "

## Go through each selection method
for sel in selection_methods:
  
  print "Selection Method: ", sel
  
  ## Get all the variables and loop through them
  variables = cfg.get('Plots', plot_category).split(',')
  variables = ["H_mass", "Z_mass"]
  for var in variables:
    
    print "Variable: ", var

    ## Get the proper plots
    hName = "VH_" + sel + "_" + var
    print ">>> | Histogram name (v1): ", hName
  
    plots_2b2c_by_year = {}
    for cat in categories:
      #if cat == "QCD": continue
      plots_2b2c_by_year[cat] = getHist(hName, category_samples[cat],
      histFiles, lumiScales)
  
    hName2 = "VH_" + sel + "_2b1c_" + var
    print "\n>>> | Histogram name (v2): ", hName2
  
    plots_2b1c_by_year = {}
    for cat in categories:
      #if cat == "QCD": continue
      plots_2b1c_by_year[cat] = getHist(hName2, category_samples[cat],
        histFiles, lumiScales)
  
    ## Go through each year
    for y in years:
      
      print "\n>>> ~~~~~Analyzing year 20", y, "~~~~~"

      ## Get information we're interested in from our configs
      nRebin = int(cfg.get(var, "rebin"))
      nRebin = 4
      tmps = cfg.get(var, "xAxisRange").split(",")
      xA_range = []
      if "Pi" not in tmps[1]:
        xA_range = [float(tmps[0]), float(tmps[1])]
      else:
        xA_range = [0, ROOT.TMath.Pi()]
      xA_title = cfg.get(var, "xAxisTitle") 
      
      ## We need to build the QCD background from the 2b1c data.
      ## Take it and scale it by the above scale factor.
      print ">>> | normalizing data-driven shape for background"
      SF = CR_SF[sel][y]
      bckg_plot = plots_2b1c_by_year["Data"][y].Clone()
      bckg_plot.Scale(SF)
      
      ## Get all the other plots that we're interested in.
      ## Then, remove them from our plot here.
      QCD_plot = bckg_plot.Clone()
      #for key, value in plots_2b2c_by_year.iteritems():
      #  print key
      for cat in other_backgrounds:
        QCD_plot.Add(plots_2b2c_by_year[cat][y], -1)
      
      ## [1] Print out plots that compare this resulting plot and 
      ## the QCD determined by MC.
      plots_process = [
        QCD_plot.Clone().Rebin(nRebin),
        plots_2b2c_by_year["QCD"][y].Clone().Rebin(nRebin)
      ]
      plotNames_process = [
        "QCD (data-driven)",
        "QCD (MC)"
      ]
      
      output_path = output_directory + "/20" + y + "/bckg_subtraction/QCD/"
      logY = useLogY
      makeDataMCPlot(plots_process, plotNames_process,  ## Plots
        var + "_" + sel + "_" + y, output_path,         ## Folders
        xA_title, xA_range, 'MC unc. (stat.)', False,   ## Axes
        logY=logY, lumi=lumiS[y], blindMass=False, 
        colors_to_use=colors)
      
      ## [2] Print out plots that use all the backgrounds but we
      ## use the data-driven QCD here instead of the MC.
      plots_process = [
        plots_2b2c_by_year["Data"][y].Clone().Rebin(nRebin),
        QCD_plot.Clone().Rebin(nRebin)
      ]
      #for cat in categories:
      #  if cat in ["Data", "QCD"]: continue
      for cat in ["ST", "TT", "ZJ", "WJ", "WW", "WZ", "ZZ", "ZHbb", "ggZHbb", "ZHcc", "ggZHcc"]:
        plots_process.append(plots_2b2c_by_year[cat][y].Clone().Rebin(nRebin))
      
      if y == '18': dataTitle = 'Data (JetHT, 20'+y+')'
      else: dataTitle = 'Data (BTagCSV, 20'+y+')'
      
      plotNames_process = [
        dataTitle, 'QCD (Data-Driven Estimate)', 'Single top', 't#bar{t}', 'Z + jets', 'W + jets',
        'WW', 'WZ', 'ZZ', 'ZHbb', 'ggZHbb', 'ZHcc', 'ggZHcc'
      ]
      
      output_path = output_directory + "/20" + y + "/bckg_subtraction/full/"
      logY = useLogY
      makeDataMCPlot(plots_process, plotNames_process,  ## Plots
        var + "_" + sel + "_" + y, output_path,         ## Folders
        xA_title, xA_range, 'MC unc. (stat.)', False,   ## Axes
        logY=logY, lumi=lumiS[y], blindMass=True, massRegion=signal_regions[var])
      
      ## [3] Do a version where you overlay the full data-driven background
      ## on top of this for comparison
      overlay_plots = [
        { "plot": bckg_plot.Clone().Rebin(nRebin),
          "name": "Full data-driven background" }
      ]
      
      output_path = output_directory + "/20" + y + "/bckg_subtraction/w_overlay/"
      makeDataMCPlot(plots_process, plotNames_process,  ## Plots
        var + "_" + sel + "_" + y, output_path,         ## Folders
        xA_title, xA_range, 'MC unc. (stat.)', False,   ## Axes
        logY=logY, lumi=lumiS[y], blindMass=True, 
        massRegion=signal_regions[var], overlays=overlay_plots)
    
