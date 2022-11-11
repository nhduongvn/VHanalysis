## == IMPORT STATEMENTS =======================================================
import ROOT
import sys,os
import copy
import ConfigParser
import math
from my_funcs import makeOverlapPlot, ScaleToLumi1, getHist

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
plot_names = config.get('Plots', 'VbbHcc_plot').split(',')
for i in range(len(plot_names)):
  plot_names[i] = plot_names[i].strip()

for pName in plot_names:
  
  if debug: 
    print '###########################################################################'
    print 'plot:', pName
  hasMCTruth = int(config.get(pName, 'hasMCTruth')) == 1
  if debug: print '>>> hasMCTruth:', hasMCTruth
  
  ## Get the histograms we want.
  if hasMCTruth == True:
    hMC = getHist(pName, samples, files, lumiScales, 'MC')
    if debug: print '>>>MC retrieved.'
    
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
    xAxisTitle = config.get(pName, 'xAxisTitle')
    yAxisTitle = config.get(pName, 'yAxisTitle')
    rebin = int(config.get(pName, 'rebin'))
    
    xAxisRange = config.get(pName, 'xAxisRange').split(',')
    for i in range(len(xAxisRange)):
      xAxisRange[i] = float(xAxisRange[i].strip())
    
    if debug:
      print '>>> xAxisTitle:', xAxisTitle
      print '>>> yAxisTitle:', yAxisTitle
      print '>>> rebin:     ', rebin
      print '>>> xAxisRange:', xAxisRange
    
    for logY in [True, False]:
      
      ## Get the proper output directory
      output_dir = plotFolder + subfolder + '/20' + y + '/'
      
      ## Make the overlay version
      makeOverlapPlot(plot_process, plotNames_process, pName + '_' + y,
        output_dir, xAxisTitle, xAxisRange, yAxisTitle, rebin, logY, lumi[y])
      if debug: print '== Overlap plot created (logY =', logY, ') =='
      
      ## If we have a MC truth plot, plot it.
      if hasMCTruth == True:
        makeOverlapPlot([hMC[y].Clone()], ["MC Truth"], pName + '_MCTruth_' + y,
          output_dir, xAxisTitle, xAxisRange, yAxisTitle, rebin, logY, lumi[y])
        if debug: print '== MC Truth plot created (logY =', logY, ') =='
    
    if debug: print "=========================================================="
    
    
    
  

