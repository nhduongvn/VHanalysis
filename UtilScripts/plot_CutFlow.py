## == IMPORT STATEMENTS =======================================================
import ROOT
import sys,os
import copy
import ConfigParser
import math
from my_funcs import makeOverlapPlot, ScaleToLumi1, getHist, makePlot

ROOT.gROOT.SetBatch(True)

## == USEFUL METHODS ==========================================================

debug = True

## Load the config
config_file = '../Configs/config_peteryou.ini'
config = ConfigParser.ConfigParser()
config.read(config_file)
#print config.sections()

###############################################################################
## INPUT VARIABLES (Editable)
###############################################################################

## The following are variables that you are allowed to change.
years = ['16', '17', '18']

filepath = '../newest_condor_results/NONE/'
plotFolder = '../produced_plots/looseWP/'

samples = ['ZH_HToCC_ZToQQ', 'ggZH_HToCC_ZToQQ']

###############################################################################
## Main Code - DO NOT EDIT BELOW HERE UNLESS YOU WANT TO CRY.
###############################################################################

print '====================================='
print 'MC Comparison of Selection Methods'
print '====================================='


subfolder = 'COMBINED'
if len(samples) == 1:
  subfolder = samples[0] + '/'

## Check to make sure the files are 
## where we expect them to be.
filepath_exists = os.path.exists(filepath)
if not filepath_exists:
  print 'ERROR: Filepath', filepath, 'does NOT exist. Terminating macro.'
  exit()

## Check to make sure the output does exist.
## If not, create the proper directory.
plotfolder_exists = os.path.exists(plotFolder)
if not plotfolder_exists:
  print 'WARNING:', plotFolder, 'directory does NOT exist.'
  os.makedirs(plotFolder)
  print '>>> directory created.'

## Get the proper files & scales that we want
lumi = {}
for y in years:
  lumi[y] = float(config.get('General', 'lumi_' + y))

files = {}
lumiScales = {}
if debug: print 'Pulling proper files and lumi...'
for s in samples:
  files[s] = {}
  lumiScales[s] = {}
  for y in years:
    fName = config.get(s, 'file_' + y)
    if debug: print '>>>', filepath + fName
    files[s][y] = ROOT.TFile.Open(filepath + fName, 'READ')
    xSec = float(config.get(s, 'xSec_' + y))
    scale = ScaleToLumi1(filepath + fName, xSec, lumi[y])
    lumiScales[s][y] = scale

############################################
## Go through the plots we're interested in.
############################################
plot_names = ["CutFlow"]

for pName in plot_names:
  
  if debug: 
    print '###########################################################################'
    print 'plot:', pName
  
  ## Get the histograms we want.
  hTags = getHist(pName, samples, files, lumiScales, 'tags')
  if debug: print '>>>Tags retrieved.'
  
  hAlgo = getHist(pName, samples, files, lumiScales, 'algo')
  if debug: print '>>>Algo retrieved.'
  
  hBoth = getHist(pName, samples, files, lumiScales, 'duong')
  if debug: print '>>>Both retrieved.'
  
  #################################
  ## Stack the plots for each year.
  #################################
  for y in years:
    
    ## Copy the plots we want to process
    plot_process = [hTags[y].Clone(), hAlgo[y].Clone(), hBoth[y].Clone()]
    plotNames_process = ['Tagging Only', 'D_{HZ} Prioritized', 'Tagging Prioritized']
    
    ## Properly stack/overlay the plots
    xAxisTitle = ""
    yAxisTitle = "Events"
    rebin = 1
    
    xAxisRange = [0,7]
    
    if debug:
      print '>>> xAxisTitle:', xAxisTitle
      print '>>> yAxisTitle:', yAxisTitle
      print '>>> rebin:     ', rebin
      print '>>> xAxisRange:', xAxisRange
    
    for logY in [True, False]:
      
      ## Get the proper output directory
      output_dir = plotFolder + subfolder + '/20' + y + '/'
      
      ## Make the overlay version
      makePlot(hTags[y].Clone(), "Tagging Only", pName + '_tags_' + y, 
        output_dir, xAxisTitle, xAxisRange, yAxisTitle, rebin, logY, lumi[y], 
        ROOT.kBlack, 16, True, [1000,1000000]) 
        
      makePlot(hAlgo[y].Clone(), "Matching Prioritized", pName + '_algo_' + y, 
        output_dir, xAxisTitle, xAxisRange, yAxisTitle, rebin, logY, lumi[y], 
        ROOT.kBlue, 38, True, [1000,1000000]) 
      
      makePlot(hBoth[y].Clone(), "Tagging Prioritized", pName + '_both_' + y,
        output_dir, xAxisTitle, xAxisRange, yAxisTitle, rebin, logY, lumi[y],
        ROOT.kRed, 46, True, [1000,1000000])
      
    
    if debug: print "=========================================================="
    
    
    
  

