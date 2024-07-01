## ============================================================================
## optimize_SR.py - This a ROOT macro written in Python to take our current
##                  signal region (SR) values and determine the best way to
##                  modify them to get minimal contamination in the validation
##                  (VR) and control (CR) regions.
## ============================================================================

## == Import Statements =======================================================

import sys, os
import ROOT
import ConfigParser
from math import *
from my_funcs import ScaleToLumi1, isWithinEllipse, makeGraphOverlays

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
    #if sample_names[0] not in ['JetHT']:
    #  hOut[y].Scale(lumiScales[sample_names[0]][y][0])
    
    ## Add the other samples
    for iS in range(len(sample_names)):
      for fi in range(len(hist_files[sample_names[iS]][y])):
        
        ## Skip the first sample (already grabbed)
        if iS == 0 and fi == 0: continue
        
        h = hist_files[sample_names[iS]][y][fi].Get(plotName).Clone()
        #if sample_names[iS] not in ["JetHT"]:
        #  h.Scale(lumiScales[sample_names[iS]][y][fi])
        hOut[y].Add(h)
  
  return hOut

## == Settings ================================================================

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
selection_methods = [ "MCjet_inRange"]
variables = [ "MH_v_MZ" ]

## Normal List of Samples 
sampleList = [ 
  'ZH_HToCC_ZToQQ', #'ggZH_HToCC_ZToQQ', ## ZH(H->CC)
]

## Category names & Labels
categories = [ "ZHcc", ]#"ggZHcc" ]

## Samples Split into Categories
category_samples = {
  "ZHcc": ['ZH_HToCC_ZToQQ'],
  #"ggZHcc": ['ggZH_HToCC_ZToQQ'],
}

## Regions
region_sizes = {
  "CR": 20,#[25,20],
  "VR": 10,#[15,10],
  "SR": 25,#[30,25],
}

desired_xRange = [20, 200]
desired_yRange = [20, 160]

## Config file we want to use
config_file = '../Configs/config.ini'

## Debug mode control
debug_mode = True

## == Main Setup ==============================================================

#################################
## Do not edit below this point
## (unless absolutely necessary)
#################################

## Header for start of program
print "## ============================================= ##"
print "## Plotting 2D histograms                        ##"
print "## ==============================================##\n"

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
      if s not in ['JetHT', 'Data']:
        print ">>> |", s, y, iN, fileNames[s][y][iN]
        lumiScales[s][y][iN] = ScaleToLumi1(fileNames[s][y][iN],
          xSecs[s][y][iN], lumi)

print "\n>>> All files retrieved..."

## == Main Code ===============================================================

## Get the plots for the year desired
hName = "VH_MCjet_ideal_MH_v_MZ"
print ">>> | Histogram name: ", hName

plots_by_year = getHist(hName, ["ZH_HToCC_ZToQQ"], histFiles, lumiScales)
  
##########################
## Stack plots per year
##########################

if debug_mode: print "\n"

for y in years:
  
  ## Get the histogram we want to use for this analysis
  logY = useLogY
  plot = plots_by_year[y]
  nBinsX = plot.GetNbinsX()
  nBinsY = plot.GetNbinsY()
  
  if debug_mode: print "Analyzing for year 20" + y
  
  ## We have a starting point where our signal region is defined
  ## by a circle around (125,91) GeV. The SR is initially 25 GeV,
  ## the VR 10 GeV, and CR 20 GeV. We want to check two different
  ## methods here: 
  ## 1) Adjust where our center point is
  ## 2) Adjust the elongation of our x-axis 
  
  ## =======================================
  ## Method #1 - Adjusting the Center Point
  ## =======================================
  xAdj_range = [-20, 20]
  xAdj_values = []
  percentages = { 
    "SR": [], "VR": [], "CR": [], "other": [] }
  
  SR_width = region_sizes["SR"]
  VR_width = region_sizes["VR"] + SR_width
  CR_width = region_sizes["CR"] + VR_width
  for i in range(xAdj_range[0], xAdj_range[1]):
  
    print ">>> Adjusting center (125,91) by (", i, ",0)"
    
    center_x = 125.0 + i
    xAdj_values.append(center_x)
    
    ## Determine the percentages of events in each region
    events = { "CR": 0, "VR": 0, "SR": 0, "other": 0, "total": 0 }
    
    ## Go through each bin in each direction
    for yb in range(1, nBinsY+1):
      
      cY = plot.GetYaxis().GetBinCenter(yb)
      for x in range(1, nBinsX+1):
        cX = plot.GetXaxis().GetBinCenter(x)
        
        evts = plot.GetBinContent(x,yb)
        events["total"] += evts
        
        ## Check against each of our regions
        region = "other"
        if isWithinEllipse(cX, cY, center_x, 91.0, SR_width, SR_width):
          region = "SR"
        elif isWithinEllipse(cX, cY, center_x, 91.0, VR_width, VR_width):
          region = "VR"
        elif isWithinEllipse(cX, cY, center_x, 91.0, CR_width, CR_width):
          region = "CR"
        events[region] += evts
    
    ## Now, determine the percentages
    total = events["total"] * 1.0
    percents = { 
      "SR": events["SR"] / total,
      "VR": events["VR"] / total,
      "CR": events["CR"] / total,
      "other": events["other"] / total
    }
    
    ## Add these to our overall lists
    for key in percents:
      percentages[key].append(percents[key])
    
  ## Make a plot that overlays the graphs for each case
  ## using the xAdj_values as our x-values and each
  ## percentages as a unique set of y-values
  canvas_name = "OPT_SR_shift" + y
  full_output = output_directory + '/20' + y + '/2D_signal/ZHcc/'
  makeGraphOverlays(canvas_name, full_output, xAdj_values, 
    percentages, "x-center of ellipse [GeV]", "percentage of events")
  
  ## =======================================
  ## Method #1 - Adjusting the Major Axis
  ## =======================================
  xAdj_range = [0, 20]
  xAdj_values = []
  percentages = { 
    "SR": [], "VR": [], "CR": [], "other": [] }
  
  for i in range(xAdj_range[0], xAdj_range[1]):
  
    xAdj_values.append(i)
    print ">>> Adjusting major axes by ", i
    
    ## Calculate our axes with the adjustment
    SR_y = region_sizes["SR"]
    SR_x = SR_y + i
    VR_y = SR_y + region_sizes["VR"]
    VR_x = VR_y + i
    CR_y = VR_y + region_sizes["CR"]
    CR_x = CR_y + i
    
    ## Determine the percentages of events in each region
    events = { "CR": 0, "VR": 0, "SR": 0, "other": 0, "total": 0 }
    
    ## Go through each bin in each direction
    for yb in range(1, nBinsY+1):
      
      cY = plot.GetYaxis().GetBinCenter(yb)
      for x in range(1, nBinsX+1):
        cX = plot.GetXaxis().GetBinCenter(x)
        
        evts = plot.GetBinContent(x,yb)
        events["total"] += evts
        
        ## Check against each of our regions
        region = "other"
        if isWithinEllipse(cX, cY, 125.0, 91.0, SR_x, SR_y):
          region = "SR"
        elif isWithinEllipse(cX, cY, 125.0, 91.0, VR_x, VR_y):
          region = "VR"
        elif isWithinEllipse(cX, cY, 125.0, 91.0, CR_x, CR_y):
          region = "CR"
        events[region] += evts
    
    ## Now, determine the percentages
    total = events["total"] * 1.0
    percents = { 
      "SR": events["SR"] / total,
      "VR": events["VR"] / total,
      "CR": events["CR"] / total,
      "other": events["other"] / total
    }
    
    ## Add these to our overall lists
    for key in percents:
      percentages[key].append(percents[key])
  
  ## Make a plot that overlays the graphs for each case
  ## using the xAdj_values as our x-values and each
  ## percentages as a unique set of y-values
  canvas_name = "OPT_SR_elongate" + y
  full_output = output_directory + '/20' + y + '/2D_signal/ZHcc/'
  makeGraphOverlays(canvas_name, full_output, xAdj_values, 
    percentages, "|major axis - minor axis| [GeV]", "percentage of events",
    legend_position=[0.1,0.5,0.3,0.7])
    
    
  
  
