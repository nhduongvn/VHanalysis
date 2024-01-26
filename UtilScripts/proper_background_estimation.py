## ============================================================================
## proper_background_subtraction.py - We want to see what backgrounds we have 
##                                    in our estimation. To do this, we need to 
##                                    try to remove other backgrounds and see 
##                                    how they compare. This version fixes to
##                                    use the method that Duong talks about.
## 
## Notes:	create 01/23/2024, pyoung
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
dirpath = '../condor_results/2024Jan/NONE/'
output_directory = '../plot_results/2024Jan/'

## Variables we care about
selection_methods = [
  "tagOnly", "DHZfirst", "tagFirst"
]
selection_methods = [ "tagFirst" ]

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
print "        To remove the other backgrounds that are included, we  "
print "        subtract the MC samples from the 2b2c shape to just get"
print "        QCD and then compare the shape to the data-driven."

## Go through each selection method
for sel in selection_methods:
  
  print "\n\nSelection Method: ", sel
  
  ## For each selection method, we need to calculate the scale factor.
  ## We start doing this by first getting the data shapes (2b2c & 2b1c).
  hName = "VH_" + sel + "_MH_v_MZ"
  print ">>> | Histogram name (v1): ", hName
  
  plots_2b2c_by_year = getHist(hName, category_samples["Data"],
      histFiles, lumiScales)
  
  hName2 = "VH_" + sel + "_2b1c_MH_v_MZ"
  print ">>> | Histogram name (v2): ", hName2
  
  plots_2b1c_by_year = getHist(hName2, category_samples["Data"],
      histFiles, lumiScales)

  ## Go through each year
  for y in years:
    
    print "\n>>> ~~~~ ANALYZING YEAR 20", y, " ~~~~"
    
    ## Take the 2b2c and subtract the MC so that we just get QCD
    plot_2b2c = plots_2b2c_by_year[y].Clone()
    plot_2b1c = plots_2b1c_by_year[y].Clone()
    nBinsX = plot_2b2c.GetNbinsX()
    nBinsY = plot_2b2c.GetNbinsY()
    
    for cat in other_backgrounds:
      bckg_plot = getHist(hName, category_samples[cat],
      histFiles, lumiScales)[y].Clone()
      plot_2b2c.Add(bckg_plot, -1)
      
      bckg_plot = getHist(hName2, category_samples[cat],
      histFiles, lumiScales)[y].Clone()
      plot_2b1c.Add(bckg_plot, -1)
    
    ## Determine the number of events in each possible region. We should
    ## have 6 important regions:
    ## 1. 2b2c ==> SR, VR, CR
    ## 2. 2b1c ==> SR, VR, CR
    events = { "2b2c": {}, "2b1c": {} }
    events["2b2c"] = { "CR": 0, "VR": 0, "SR": 0, "other": 0, "total": 0}
    events["2b1c"] = { "CR": 0, "VR": 0, "SR": 0, "other": 0, "total": 0}
    
    SR_width = region_sizes["SR"]
    VR_width = region_sizes["VR"] + SR_width
    CR_width = region_sizes["CR"] + VR_width
    
    QCD_evts = 0
    
    ## Go through each bin in each direction
    print ">>> Looping through bins to count events (may be slow)..."
    for yb in range(1, nBinsY+1):
    
      cY = plot_2b2c.GetYaxis().GetBinCenter(yb)
      for x in range(1, nBinsX+1):
        cX = plot_2b2c.GetXaxis().GetBinCenter(x)
        
        evts = plot_2b2c.GetBinContent(x,yb)
        events["2b2c"]["total"] += evts
        
        ## Check against each of our regions & the sectors we want (our diagonals)
        ## First, for the 2b2c data
        region = "all"
        #within_line = within_line_range(a,b,c,cX,cY,r)
        
        if (isWithinEllipse(cX, cY, 125.0, 91.0, SR_width, SR_width)):# and within_line):
          region = "SR"
        elif (isWithinEllipse(cX, cY, 125.0, 91.0, VR_width, VR_width)):# and within_line):
          region = "VR"
        elif (isWithinEllipse(cX, cY, 125.0, 91.0, CR_width, CR_width)):# and within_line):
          region = "CR"
        else:
          region = "other"
        
        events["2b2c"][region] += evts
        
        ## Check against each of our regions & the sectors we want (our diagonals)
        ## Now, for the 2b1c data
        evts = plot_2b1c.GetBinContent(x,yb)
        events["2b1c"][region] += evts
    
    ## Now, calculate the transfer function / SF for the CR & VR regions
    
    N_2b1c_SR = events["2b1c"]["SR"]
    sigma_N_SR = pow(sqrt(N_2b1c_SR)/N_2b1c_SR,2)
    
    for region in ["CR", "VR"]:
      evt_2b2c = events["2b2c"][region]
      evt_2b1c = events["2b1c"][region]
    
      alpha = 1.0 * evt_2b2c / evt_2b1c
      #alphas[region][y] = alpha
      N_predict = alpha * N_2b1c_SR
    
      sigma1 = pow(sqrt(evt_2b1c)/evt_2b1c, 2)
      sigma2 = pow(sqrt(evt_2b2c)/evt_2b2c, 2)
      rel_error = sqrt(sigma1 + sigma2)
      unc_alpha = rel_error * alpha
      per_alpha = unc_alpha / alpha
      #unc[region][y] = unc_alpha
      
      rel_error = sqrt(sigma_N_SR + sigma1 + sigma2)
      unc_N = rel_error * N_predict
      per_N = unc_N / N_predict
    
      print "\n==================================="
      print "Selection Method: ", sel
      print "==================================="
      print "Region: ", region
      print "==================================="
      print "N(2b2c) = ", evt_2b2c
      print "N(2b1c) = ", evt_2b1c
      print "alpha   = ", alpha, " +/- ", unc_alpha, " | ", per_alpha*100, "%"
      print "N_pred  = ", N_predict, " +/- ", unc_N, " | ", per_N*100, "%"
    

