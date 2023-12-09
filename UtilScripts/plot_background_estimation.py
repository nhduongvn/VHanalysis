###############################################################################
## - PLOT BACKGROUND ESTIMATION - 
##
## Description: This is a script designed to take our background estimation
##              information from the other script (background_estimation.py)
##              and actually plot the data-driven background shape over the 
##              data and other MC backbgrounds.
## 
## Created: Dec. 5, 2023 - P.W. Young
##
###############################################################################

## == < Libraries & Classes > =================================================

import sys, os
import ROOT
import ConfigParser
from math import *
from my_funcs import ScaleToLumi1, makeDataMCPlot, blind_region

## == < Useful Methods > ======================================================

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
      logY = useLogY

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

## == < Settings > ============================================================

print "======================================================="
print "PLOT BACKGROUND ESTIMATION .py"
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

plot_category = 'VbbHcc_plot'

## Normal List of Samples 
sampleList = [ 'Data', 'ZH_HToCC_ZToQQ', 'ggZH_HToCC_ZToQQ', ## Jet HT & ZH(H->CC)
  'ZH_HToBB_ZToQQ', 'ggZH_HToBB_ZToQQ',               ## ZH(H->BB)
  #'QCD_HT100to200_v9',
  #'QCD_HT200to300_v9', 'QCD_HT300to500_v9',           ## QCD (200-Inf)
  #'QCD_HT500to700_v9', 'QCD_HT700to1000_v9', 'QCD_HT1000to1500_v9', 
  #'QCD_HT1500to2000_v9', 'QCD_HT2000toInf_v9', 
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

## Make the categories for our samples and then
## assign the samples to the proper categories
#categories = [ "Data", "ZHcc", "ZHbb", "ggZHcc", "ggZHbb",
#  "QCD", "WJ", "ZJ", "TT", "ST", "WW", "WZ", "ZZ"]

categories = [ "Data", "QCD", "ST", "TT", "ZJ", "WJ",
  "WW", "WZ", "ZZ", "ZHbb", "ggZHbb", "ZHcc", "ggZHcc"]

category_samples = {
  "Data": ["Data"],
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

## Keep track of our region sizes
region_sizes = {
  "CR": 20, ## 20 GeV radius beyond the VR
  "VR": 10, ## 10 GeV radius beyond the SR
  "SR": 30, ## 30 GeV radius around peak mass
}

regions_to_blind = {
  "VR": {
    "Z_mass": [[0,50],[60,120],[130,2000]],
    "H_mass": [[0,85],[95,155],[165,2000]]
  },
  "SR": {
    "H_mass": [[0,95],[155,2000]],
    "Z_mass": [[0,60],[120,2000]]
  }
}

signal_regions = {
  "H_mass": [95,155],
  "Z_mass": [60,120],
}

## Keep track of the scale factors we got from each region
CR_SF = {
  "tagOnly": {
    '16': 0.292,
    '17': 0.346,
    '18': 0.367
  },
  "DHZfirst": {
    '16': 0.199,
    '17': 0.204,
    '18': 0.212
  },
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

colors = [800+7]


## Config file we want to use
config_file = '../Configs/config.ini'

## Debug mode control
debug_mode = True

print ">>> All settings set."

## == < Main Setup > ==========================================================

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


## == < Main Code > ===========================================================

## 3. Get the 2b1c data & modify it based on our estimation results.
print "STEP 3: For this part of the code, we need to loop through each"
print "        selection method, year, and variable. We want to get   "
print "        the full list of samples and instead of using the QCD  "
print "        MC in the stack plots, we use the data-driven shape.\n"

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
      if cat == "QCD": continue
      plots_2b2c_by_year[cat] = getHist(hName, category_samples[cat],
      histFiles, lumiScales)
  
    hName2 = "VH_" + sel + "_2b1c_" + var
    print "\n>>> | Histogram name (v2): ", hName2
  
    plots_2b1c_by_year = {}
    for cat in categories:
      if cat == "QCD": continue
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

## == < non-MC versions> ======================================================

      ## We need to build the QCD background from the 2b1c data.
      ## Take it and scale it by the above scale factor.
      print ">>> | normalizing data-driven shape for background"
      SF = CR_SF[sel][y]
      QCD_plot = plots_2b1c_by_year["Data"][y].Clone()
      QCD_plot.Scale(SF)
 
      ## Now, we can build the stack plot. Get all the plots into a proper
      ## order and give them each a proper name.
      print ">>> | compiling plots & plot names"
      plots_process = [
        plots_2b2c_by_year["Data"][y].Clone().Rebin(nRebin),  # Data
        QCD_plot.Clone().Rebin(nRebin),                    # Data-driven 'QCD'
      ]

      if y == '18': dataTitle = 'Data (JetHT, 20'+y+')'
      else: dataTitle = 'Data (BTagCSV, 20'+y+')'
      plotNames_process = [
        dataTitle, "Data-driven Bckg"
      ]

      print ">>> | stack-plotting the samples"
      output_path = output_directory + "/20" + y + "/bckg_estimate/noMC/full/"
      logY = useLogY
      makeDataMCPlot(plots_process, plotNames_process,  ## Plots
        var + "_" + sel + "_" + y, output_path,         ## Folders
        xA_title, xA_range, 'MC unc. (stat.)', False,   ## Axes
        logY=logY, lumi=lumiS[y], blindMass=True,
        colors_to_use=colors)
      
      ## Now, do a version that's just the VR...
      nRebin = 2
      data_VR = plots_2b2c_by_year["Data"][y].Clone()
      QCD_VR = QCD_plot.Clone()
      
      for i in range(3):
        region = regions_to_blind["VR"][var]
        #print region
        data_VR = blind_region(data_VR, region[i][0], region[i][1])
        QCD_VR = blind_region(QCD_VR, region[i][0], region[i][1])
        
      plots_VR = [
        data_VR.Clone().Rebin(nRebin), 
        QCD_VR.Clone().Rebin(nRebin)
      ]
      
      print ">>> | stack-plotting Validation Region only"
      output_path = output_directory + "/20" + y + "/bckg_estimate/noMC/VR/"
      makeDataMCPlot(plots_VR, plotNames_process,
        var + "_" + sel + "_VR_" + y, output_path,
        xA_title, xA_range, 'MC unc. (stat.)', False,
        logY=logY, lumi=lumiS[y], blindMass=False, massRegion=signal_regions[var],
        colors_to_use=colors)
      
      ## ...and one that's just the SR.
      data_SR = plots_2b2c_by_year["Data"][y].Clone()
      QCD_SR = QCD_plot.Clone()
      
      for i in range(2):
        region = regions_to_blind["SR"][var]
        data_SR = blind_region(data_SR, region[i][0], region[i][1])
        QCD_SR = blind_region(QCD_SR, region[i][0], region[i][1])
      
      plots_SR = [
        data_SR.Clone().Rebin(nRebin),
        QCD_SR.Clone().Rebin(nRebin),
      ]
      
      print ">>> | stack-plotting Signal Region only"
      output_path = output_directory + "/20" + y + "/bckg_estimate/noMC/SR/"
      makeDataMCPlot(plots_SR, plotNames_process,
        var + "_" + sel + "_SR_" + y, output_path,
        xA_title, xA_range, 'MC unc. (stat.)', False,
        logY=logY, lumi=lumiS[y], blindMass=True, massRegion=signal_regions[var],
        colors_to_use=colors)
      
      
      print ">>> | stack-plotting original plot"
      output_path = output_directory + "/20" + y + "/bckg_estimate/noMC/ref/"
      plots_process = [
        plots_2b2c_by_year["Data"][y].Clone().Rebin(nRebin),
        plots_2b1c_by_year["Data"][y].Clone().Rebin(nRebin)
      ]
      plotNames_process = [
        dataTitle, "2b1c Data (Unscaled)"
      ]
      makeDataMCPlot(plots_process, plotNames_process,
        var + "_" + sel + "_" + y, output_path,
        xA_title, xA_range, 'MC unc. (stat.)', False,
        logY=logY, lumi=lumiS[y], blindMass=True, massRegion=signal_regions[var],
        colors_to_use=colors)
      
## == < MC versions > =========================================================

      ## Stack versions with all the other MC samples
      plots_to_modify = {}
      for category in categories:
        if category == "QCD":
          plots_to_modify[category] = QCD_plot.Clone()
        else: 
          plots_to_modify[category] = plots_2b2c_by_year[category][y].Clone()
      
      plots_full = {}
      for cat in categories:
        plots_full[cat] = plots_to_modify[cat].Clone()
      
      plotNames_process = [
        dataTitle, 'QCD', 'Single top', 't#bar{t}', 'Z + jets', 'W + jets',
        'WW', 'WZ', 'ZZ', 'ZHbb', 'ggZHbb', 'ZHcc', 'ggZHcc'
      ]
      plots_process = []
      nRebin = 4
      for cat in categories:
        plots_process.append(plots_full[cat].Clone().Rebin(nRebin))
      
      output_path = output_directory + "/20" + y + "/bckg_estimate/MC/full/"
      logY = useLogY
      makeDataMCPlot(plots_process, plotNames_process,  ## Plots
        var + "_" + sel + "_" + y, output_path,         ## Folders
        xA_title, xA_range, 'MC unc. (stat.)', False,   ## Axes
        logY=logY, lumi=lumiS[y], blindMass=True, massRegion=signal_regions[var])
      
      ## Now, do the version that is just the signal region
      plots_SR = {}
      plots_process = []
      for cat in categories:
        plots_SR[cat] = plots_full[cat].Clone()
        for i in range(2):
          region = regions_to_blind["SR"][var]
          plots_SR[cat] = blind_region(plots_SR[cat], region[i][0], region[i][1])
        plots_process.append(plots_SR[cat])
        
      output_path = output_directory + "/20" + y + "/bckg_estimate/MC/SR/"
      logY = useLogY
      makeDataMCPlot(plots_process, plotNames_process,  ## Plots
        var + "_" + sel + "_" + y, output_path,         ## Folders
        xA_title, xA_range, 'MC unc. (stat.)', False,   ## Axes
        logY=logY, lumi=lumiS[y], blindMass=True, massRegion=signal_regions[var])
      

## 4. Sit back and relax.
print "STEP 4: Program completed."

## == <END OF FILE> ===========================================================
