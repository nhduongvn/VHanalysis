## == IMPORT STATEMENTS =======================================================
import ROOT
import sys,os
import copy
import ConfigParser
import math
from my_funcs import makePlot, ScaleToLumi1, getHist

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

filepath = '../new_condor_results/NONE/'
plotFolder = '../produced_plots/mediumWP/'

samples = ['ZH_HToCC_ZToQQ', 'ggZH_HToCC_ZToQQ']

###############################################################################
## Main Code - DO NOT EDIT BELOW HERE UNLESS YOU WANT TO CRY.
###############################################################################

print '====================================='
print 'Plotting Histograms for Jets'
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

## Get the proper files & scales that we want.

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
plot_names = config.get('Plots', 'Jet_plot').split(',')
for i in range(len(plot_names)):
  plot_names[i] = plot_names[i].strip()

for pName in plot_names:

  #################################
  ## Stack the plots for each year.
  #################################
  for y in years:
  
    if debug: print "plot:", pName
    plot = getHist(pName, samples, files, lumiScales, "")
    plot_name = "VbbHcc_" + pName
    
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
      makePlot(plot[y], plot_name, pName + '_' + y, output_dir, xAxisTitle, xAxisRange,
        yAxisTitle, rebin, logY, lumi[y], ROOT.kBlack, ROOT.kBlack) 
    
    if debug: print "=========================================================="

