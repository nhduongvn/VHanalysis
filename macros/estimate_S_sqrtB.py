import ROOT
import sys,os
import ConfigParser
from math import *
from my_funcs import ScaleToLumi1, blind_regions

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
#years = ['18']

## Do we want to use a logarithmic scale?
useLogY = False

## Input & Output file locations
dirpath = '../condor_results/2024May/NONE/'
output_directory = '../plot_results/2024May'

## Variables we care about
selection_methods = [
  "tagOnly", "DHZfirst", "tagFirst"
]
#selection_methods = [ "tagFirst" ]
selection_methods = [ "tagOnly" ]
#selection_methods = [ "DHZfirst" ]

plot_category = 'VbbHcc_plot'

variables = [ "MH_v_MZ" ]
plot_variables = [ "Z_mass", "H_mass" ]

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
  "QCD", "ZHcc", "ZHbb", "ggZHcc", "ggZHbb", 
  "WJ", "ZJ", "TT", "ST", "VV", "ZZ" # "WW", "WZ", "ZZ" 
]

signal_cats = [ "ggZHcc", "ZHcc" ]
bckg_cats = [ "QCD", "WJ", "ZJ", "TT", "ST", "VV", "ZZ", "ZHbb", "ggZHbb"]

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
  #"WW": ['WW'],
  #"WZ": ['WZ'],
  #"ZZ": ['ZZ']
  "VV": ['WW','WZ'],
  "ZZ": ['ZZ']
}

other_backgrounds = [ "ZHcc", "ggZHcc", "ZHbb", "ggZHbb", "WJ", "ZJ", "TT", "ST", "WW", "WZ", "ZZ" ]
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

#alphas = { "CR": {}, "VR": {} }
#unc = { "CR": {}, "VR": {} }

colors = [800+7]

## Config file we want to use
config_file = '../Configs/config.ini'

## Debug mode control
debug_mode = True
subtract_other_backgrounds = True


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


## Go through each selection method
for sel in selection_methods:
  
  print "\n\nSelection Method: ", sel
  
  ## For each selection method, we need to calculate the scale factor.
  ## We start doing this by first getting the data shapes (2b2c & 2b1c).
  hName = "VH_" + sel + "_Z_mass"
  print ">>> | Histogram name: ", hName
  
  plots_by_year = {}
  for cat in categories: 
    plots_by_year[cat] = getHist(hName, category_samples[cat],
      histFiles, lumiScales)
  
  counts_by_year = {}
  S_sqrtB_by_year = {}
  bckg_total_by_year = {}
  ## Go through each year
  for y in years:
    
    plots = {}
    counts = {}
    for cat in categories:
      plots[cat] = blind_regions(plots_by_year[cat][y], [[60, 120]])
      counts[cat] = plots[cat].Integral()
    
    counts_by_year[y] = counts
    signal_total = 0
    for cat in signal_cats:
      signal_total += counts[cat]
    
    bckg_total = 0
    for cat in bckg_cats:
      bckg_total += counts[cat]
    
    sqrtB = sqrt(bckg_total)
    s_sqrtB = signal_total / sqrtB
    S_sqrtB_by_year[y] = s_sqrtB
    bckg_total_by_year[y] = bckg_total
  
  ## Calculate for full Run 2
  signal_total = 0
  bckg_total = 0
  for y in years:
    for cat in signal_cats:
      signal_total += counts_by_year[y][cat]
    for cat in bckg_cats:
      bckg_total += counts_by_year[y][cat]
  run2_s_sqrtB = signal_total / sqrt(bckg_total)
  
  totals_run2 = {}
  for cat in categories:
    totals_run2[cat] = 0
    for y in years:
      totals_run2[cat] += counts_by_year[y][cat]
  
  ## Print the outputs
  print "======================================================"
  print "\t\t2016\t2017\t2018\tRun2"
  print "======================================================"
  for cat in bckg_cats:
    line = cat + "\t"
    for y in years:
      line += str(counts_by_year[y][cat]) + "\t"
    line += str(totals_run2[cat])
    print line
  
  print "-------------------------------------------------------"
  line = "(total)\t"
  for y in years:
    line += str(bckg_total_by_year[y]) + "\t"
  line += str(bckg_total)
  print line
  print "-------------------------------------------------------"
  
  for cat in signal_cats:
    line = cat + "\t"
    for y in years:
      line += str(counts_by_year[y][cat]) + "\t"
    line += str(totals_run2[cat])
    print line
  
  line = "S/sqrtB\t"
  for y in years:
    line += str(S_sqrtB_by_year[y]) + "\t"
  line += str(run2_s_sqrtB)
  print line
  
