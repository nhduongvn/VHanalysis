## ============================================================================
## plot_mass_pairings.py - Take the signal variables and plot them along with
##                         their axis projections.
## ============================================================================

## == Import Statements =======================================================

import sys, os
import ROOT
import ConfigParser
from math import *
from my_funcs import ScaleToLumi1, makePlot

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
useLogY = True
## Input & Output file locations
dirpath = '../condor_results/Sep2023_ZH/NONE/'
output_directory = '../plot_results/Sep2023_ZH/'

## Variables we care about
selection_methods = [ "tags", "algo", "both" ]
selection_methods = [ '' ]
variables = [ "pT_ratio", "dR_bjets", "dR_bjet0", "dR_bjet1",
	"dR_cjets", "dR_cjet0", "dR_cjet1", "dR_ZUnder30",
	"dR_HUnder30" ]
xAxes = [ "p_{T}^{jet}/p_{T}^{parton}",
	"#Delta R(b parton, b-jet)",
	"#Delta R(b0, b-jet 0)",
	"#Delta R(b1, b-jet 1)",
	"#Delta R(c parton, c-jet)",
	"#Delta R(c0, c-jet 0)",
	"#Delta R(c1, c-jet 1)",
	"#Delta R(b parton, b-jet) | m_{bb} < 30 GeV",
	"#Delta R(c parton, c-jet) | m_{cc} < 30 GeV"
]

## Normal List of Samples 
sampleList = [ 
  'ZH_HToCC_ZToQQ', 'ggZH_HToCC_ZToQQ', ## ZH(H->CC)
]

## Category names & Labels
categories = [ "ZHcc", "ggZHcc" ]

## Samples Split into Categories
category_samples = {
  "ZHcc": ['ZH_HToCC_ZToQQ'],
  "ggZHcc": ['ggZH_HToCC_ZToQQ'],
}

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
    if s not in ['JetHT']:
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

  print "Selection Method: ", sel
  
  ## Get the plots for the year desired
  for i in range(0, len(variables)):
    var = variables[i]
    hName = var
    print ">>> | Histogram name: ", hName
    
    plots_by_year = {}
    for cat in categories:
      plots_by_year[cat] = getHist(hName, category_samples[cat],
        histFiles, lumiScales)
    
    ##########################
    ## Stack plots per year
    ##########################
    
    for y in years:
      
      ## Get the plots for this year. We want the main 2D plot
      ## and then from this plot, we wanna get the projections
      for cat in categories:
      
        ## Plot the 2D histogram
        logY = useLogY
      
        plot = plots_by_year[cat][y]
        binSize = plot.GetBinWidth(1)
        #plot.Rebin2D(10,10)
        
        canvas_name = cat + "_" + var + "_" + y
        full_output = output_directory + '/20' + y + '/reco_match/' + cat + '/'
        
        makePlot(plot, "", canvas_name, full_output, 
          xAxes[i], [], "Events/" + str(binSize),
          1, logY, lumiS[y], ROOT.kBlue + 2,
          ROOT.kBlack)
        
      
