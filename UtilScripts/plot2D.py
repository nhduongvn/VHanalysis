## ============================================================================
## plot_2D.py - This plots 2D distributions that we're interested in. It takes
##              every sample we care about and plots the distribution for it.
##              It also takes all the MC samples and combines them.
## ============================================================================

## == Import Statements =======================================================

import sys, os
import ROOT
import ConfigParser
from math import *
from my_funcs import ScaleToLumi1, getHist, makePlot

## == Useful Methods ==========================================================

## == Settings ================================================================

## Set this so we don't have issues with outputting so many plots
ROOT.gROOT.SetBatch(True)

## The years we want to check
years = ['16', '17', '18']

## Do we want to use a logarithmic scale?
useLogY = False

## Input & Output file locations
dirpath = '../condor_results/Aug2023_addedTagSF/NONE/'
output_directory = '../plot_results/Aug2023_SF/'

## Variables we care about
selection_methods = [ "tags", "algo", "both" ]
selection_methods = [ "both" ]
variables = [ "MH_v_MZ" ]

## Normal List of Samples 
sampleList = [ 
  'JetHT', 'ZH_HToCC_ZToQQ', 'ggZH_HToCC_ZToQQ', ## Jet HT & ZH(H->CC)
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
categories = [ "Data", "QCD", "ST", "TT", "ZJ", "WJ", "WW", 
  "WZ", "ZZ", "ZHbb", "ggZHbb", "ggZHcc", "ggZHcc"]
DATA = 0
QCD = 1

category_names = {
  "ST" : 'Single top',
  "TT": 't#bar{t}', "ZJ": 'Z + jets', "WJ": 'W + jets'}


## Samples Split into Categories
category_samples = {
  "Data": ['JetHT'],
  "ZHcc": ['ZH_HToCC_ZToQQ'],
  "ZHbb": ['ZH_HToBB_ZToQQ'],
  "ggZHcc": ['ggZH_HToCC_ZToQQ'],
  "ggZHbb": ['ggZH_HToBB_ZToQQ'],
  "QCD": ['QCD_HT100to200_v9', 'QCD_HT200to300_v9', 'QCD_HT300to500_v9', 
          'QCD_HT500to700_v9', 'QCD_HT700to1000_v9','QCD_HT1000to1500_v9', 
          'QCD_HT1500to2000_v9', 'QCD_HT2000toInf_v9'],
  "ST": ['ST_t-channel_antitop', 'ST_t-channel_top', 'ST_tW-channel_antitop',
         'ST_tW-channel_top'],
  "TT": ['TTToHadronic','TTToSemiLeptonic','TTTo2L2Nu'],
  "ZJ": ['ZJetsToQQ_HT-200to400', 'ZJetsToQQ_HT-400to600',     
         'ZJetsToQQ_HT-600to800', 'ZJetsToQQ_HT-800toInf'],
  "WJ": ['WJetsToQQ_HT-200to400', 'WJetsToQQ_HT-400to600', 'WJetsToQQ_HT-600to800',  
         'WJetsToQQ_HT-800toInf', 'WJetsToLNu_HT-400to600', 'WJetsToLNu_HT-100to200', 
         'WJetsToLNu_HT-200to400', 'WJetsToLNu_HT-600to800','WJetsToLNu_HT-800to1200',
         'WJetsToLNu_HT-1200to2500','WJetsToLNu_HT-2500toInf'],
  "WW": [ 'WW'], "WZ": ['WZ'], "ZZ": ['ZZ']
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
  
  ## Go through each variable
  for var in variables:
    
    print "| Variable: ", var
    print ">>> Pulling proper histograms from files..."
    
    ## Go through each type of sample and get the appropriate plots.
    ## We will combine for simplicity some similar files. For example,
    ## we combine all QCD bins into one QCD file.
    hName = "VbbHcc_" + sel + "_" + var
    print ">>> | Histogram name: ", hName
    
    plots_by_year = {}
    for cat in categories:
      plots_by_year[cat] = getHist(hName, category_samples[cat],
        histFiles, lumiScales)
    
    #############################
    ## Stack plots for each year
    #############################
    
    for y in years:
      
      ## Get necessary information
      #tmps = cfg.get(var, 'xAxisRange').split(',')
      #xA_range = []
      #if 'Pi' not in tmps[1]:
      #  xA_range = [float(tmps[0]), float(tmps[1])]
      #else:
      # xA_range = [0, ROOT.TMath.Pi()]
      #xA_title = cfg.get(var, 'xAxisTitle')
      
      ## Plot(s) #1 - plot each individually
      for cat in categories:
        plot = plots_by_year[cat][y].Clone()
        canvas_name = sel + "_" + var + "_" + y
        full_output = output_directory + '/20' + y + '/2D/' + cat + '/'
        logY = useLogY
        
        makePlot(plot, "", canvas_name, full_output,
          'm_{H} [GeV]', [], 'm_{Z} [GeV]', 10, logY, lumiS[y], 0, 0, fill=True,
          is2D=True)
          
        ## Get the 1D projections
        plotX = plot.ProjectionX()
        plotY = plot.ProjectionY()
        makePlot(plotX, "", canvas_name + "_projX", full_output,
          'm_{H} [GeV]', [], 'Events/10 GeV', 10, logY, lumiS[y], 
          0, 0, fill=False)
        makePlot(plotY, "", canvas_name + "_projY", full_output,
          'm_{Z} [GeV]', [], 'Events/10 GeV', 10, logY, lumiS[y],
          0, 0, fill=False)
      
      ## Plots(2) #2 - combined MC samples
      plot = plots_by_year["QCD"][y].Clone()
      for cat in categories:
        if cat in ["QCD","Data"]: continue
        plot.Add(plots_by_year[cat][y].Clone())
      canvas_name = "MCcombined_" + sel + "_" + var + "_" + y
      full_output = output_directory + '/20' + y + '/2D/MC_combined/'
      logY = useLogY
        
      makePlot(plot, "", canvas_name, full_output,
        'm_{H} [GeV]', [], 'm_{Z} [GeV]', 10, logY, lumiS[y], 0, 0, fill=True,
        is2D=True)
    
    #########################
    ## Combine for all years
    #########################
    
    ## Combine plots by year
    plots_all = {}
    
    for cat in categories:
      cat_plots = plots_by_year[cat]
      
      ## First plot
      plots_all[cat] = cat_plots['16'].Clone(cat_plots['16'].GetName()+'_all')
      
      ## Add the remaining years
      for y in ['17','18']:
        plot = cat_plots[y].Clone()
        plots_all[cat].Add(plot)
      
    ## Plot(s) #1 - plot each individually
    for cat in categories:
      plot = plots_all[cat].Clone()
      canvas_name = cat + "_" + sel + "_" + var + "_all"
      full_output = output_directory + '/all/2D/' + cat + '/'
      logY = useLogY
      
      makePlot(plot, "", canvas_name, full_output, 'm_{H} [GeV]',
        [], 'm_{Z} [GeV]', 10, logY, lumiS[y], 0, 0, fill=True, is2D=True)
    
    #continue
    
    ## Plot(s) #2 - combined MC samples
    plot = plots_all["QCD"].Clone()
    for cat in categories:
      if cat in ["QCD", "Data"]: continue
      plot.Add(plots_all[cat].Clone())
    
    canvas_name = "MCcombined_" + sel + "_" + var + "_all"
    full_output = output_directory + '/all/2D/MC_combined/'
    logY = useLogY
    
    makePlot(plot, "", canvas_name, full_output,
      'm_{H} [GeV]', [], 'm_{Z} [GeV]', 10, logY, lumiS[y], 0, 0, fill=True,
      is2D=True)
