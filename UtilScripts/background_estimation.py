## ============================================================================
## background_estimation.py - We use a modified ABCD method to determine the 
##                            QCD background rate.
## 
## Notes:	create 10/11/2023, pyoung
## ============================================================================

## == Import Statements =======================================================

import sys, os
import ROOT
import ConfigParser
from math import *
from my_funcs import ScaleToLumi1, isWithinEllipse

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

variables = [ "MH_v_MZ" ]

## Normal List of Samples 
sampleList = [ 'Data', #'ZH_HToCC_ZToQQ', 'ggZH_HToCC_ZToQQ', ## Jet HT & ZH(H->CC)
  #'ZH_HToBB_ZToQQ', 'ggZH_HToBB_ZToQQ',               ## ZH(H->BB)
  'QCD_HT100to200_v9',
  'QCD_HT200to300_v9', 'QCD_HT300to500_v9',           ## QCD (200-Inf)
  'QCD_HT500to700_v9', 'QCD_HT700to1000_v9', 'QCD_HT1000to1500_v9', 
  'QCD_HT1500to2000_v9', 'QCD_HT2000toInf_v9', 
  #'WJetsToQQ_HT-200to400',
  #'WJetsToQQ_HT-400to600', 'WJetsToQQ_HT-600to800',   ## WJ (400-Inf)
  #'WJetsToQQ_HT-800toInf', 'WJetsToLNu_HT-400to600',
  #'WJetsToLNu_HT-100to200', 'WJetsToLNu_HT-200to400',
  #'WJetsToLNu_HT-600to800','WJetsToLNu_HT-800to1200', 
  #'WJetsToLNu_HT-1200to2500','WJetsToLNu_HT-2500toInf',
  #'ZJetsToQQ_HT-200to400',
  #'ZJetsToQQ_HT-400to600', 'ZJetsToQQ_HT-600to800',   ## ZJ (400-Inf)
  #'ZJetsToQQ_HT-800toInf',
  #'TTToHadronic','TTToSemiLeptonic','TTTo2L2Nu',      ## Top (ttbar)
  #'ST_t-channel_antitop','ST_t-channel_top',          ## Top (Single Top)
  #'ST_tW-channel_antitop','ST_tW-channel_top',
  #'WW','WZ','ZZ'                                      ## VV
]


## Category names & Labels
categories = [ "Data", "QCD" ]

## Samples Split into Categories
category_samples = {
  "Data": ['Data'],
  "QCD": [ 'QCD_HT100to200_v9', 'QCD_HT200to300_v9', 
           'QCD_HT300to500_v9', 'QCD_HT500to700_v9', 
           'QCD_HT700to1000_v9', 'QCD_HT1000to1500_v9', 
           'QCD_HT1500to2000_v9', 'QCD_HT2000toInf_v9']
}

## Regions
region_sizes = {
  "CR": 20,#[25,20],
  "VR": 10,#[15,10],
  "SR": 30,#25,#[30,25],
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
  
  print "Selection Method: ", sel
  
  ## Get the proper plots
  hName = "VH_" + sel + "_MH_v_MZ"
  print ">>> | Histogram name (v1): ", hName
  
  plots_2b2c_by_year = {}
  for cat in categories:
    plots_2b2c_by_year[cat] = getHist(hName, category_samples[cat],
      histFiles, lumiScales)
  
  hName2 = "VH_" + sel + "_2b1c_MH_v_MZ"
  print ">>> | Histogram name (v2): ", hName2
  
  plots_2b1c_by_year = {}
  for cat in categories:
    plots_2b1c_by_year[cat] = getHist(hName2, category_samples[cat],
      histFiles, lumiScales)
  
  ## Go through each year
  for y in years:
  
    print "\n>>> ~~~~~Analyzing year 20", y, "~~~~~"
    
    plot_2b2c = plots_2b2c_by_year["Data"][y]
    plot_2b1c = plots_2b1c_by_year["Data"][y]
    plot_QCD = plots_2b2c_by_year["QCD"][y]
    nBinsX = plot_2b2c.GetNbinsX()
    nBinsY = plot_2b2c.GetNbinsY()
    
    ## Determine the number of events in each possible region. We should
    ## have 6 important regions:
    ## 1. 2b2c => CR, SR, VR
    ## 2. 2b1c => CR, SR, VR
    SR_width = region_sizes["SR"]
    VR_width = region_sizes["VR"] + SR_width
    CR_width = region_sizes["CR"] + VR_width
    
    events = { "2b2c": {}, "2b1c": {} }
    events["2b2c"] = { "CR": 0, "VR": 0, "SR": 0, "other": 0, "total": 0 }
    events["2b1c"] = { "CR": 0, "VR": 0, "SR": 0, "other": 0, "total": 0 }
    
    QCD_evts = 0
    
    ## Go through each bin in each direction
    for yb in range(1, nBinsY+1):
      
      cY = plot_2b2c.GetYaxis().GetBinCenter(yb)
      for x in range(1, nBinsX+1):
        cX = plot_2b2c.GetXaxis().GetBinCenter(x)
        
        evts = plot_2b2c.GetBinContent(x,yb)
        events["2b2c"]["total"] += evts
        
        ## Check against each of our regions
        region = "other"
        if isWithinEllipse(cX, cY, 125.0, 91.0, SR_width, SR_width):
          region = "SR"
        elif isWithinEllipse(cX, cY, 125.0, 91.0, VR_width, VR_width):
          region = "VR"
        elif isWithinEllipse(cX, cY, 125.0, 91.0, CR_width, CR_width):
          region = "CR"
        events["2b2c"][region] += evts
        
        evts = plot_2b1c.GetBinContent(x,yb)
        events["2b1c"]["total"] += evts
        
        ## Check against each of our regions
        region = "other"
        if isWithinEllipse(cX, cY, 125.0, 91.0, SR_width, SR_width):
          region = "SR"
        elif isWithinEllipse(cX, cY, 125.0, 91.0, VR_width, VR_width):
          region = "VR"
        elif isWithinEllipse(cX, cY, 125.0, 91.0, CR_width, CR_width):
          region = "CR"
        events["2b1c"][region] += evts
        
        
        ## Check for QCD MC 
        evts = plot_QCD.GetBinContent(x,yb)
        if isWithinEllipse(cX, cY, 125.0, 91.0, SR_width, SR_width):
          QCD_evts += evts
    
    ## The algorithm is as follows:
    
    ## 1. Determine the transfer function (a = N(2b2c) / N(2b1c))
    ##    in the control (CR) and validation (VR) regions
    alpha_CR = 1.0 * events["2b2c"]["CR"] / events["2b1c"]["CR"]
    alpha_VR = 1.0 * events["2b2c"]["VR"] / events["2b1c"]["VR"]
    alphas = { "CR": alpha_CR, "VR": alpha_VR }
    
    ## 3. Apply the transfer function to N(2b1c) in the signal region (SR)
    ##    to estimate the QCD background. Compare it with the MC QCD events
    N_CR_predicted = alpha_CR * events["2b1c"]["SR"]
    N_VR_predicted = alpha_VR * events["2b1c"]["SR"]
    predicted = { "CR": N_CR_predicted, "VR": N_VR_predicted }
    
    ## Calculate the uncertainties
    N_evt = events["2b1c"]["SR"]
    dS_SR = sqrt(N_evt)
    sigma_SR = pow(dS_SR / N_evt,2)
    unc_alpha = {}
    unc_percent_alpha = {}
    uncertainty = {}
    unc_percent = {}
    for region in ["CR", "VR"]:
      
      evt_2b2c = events["2b2c"][region]
      dS_2c = sqrt(evt_2b2c)
      sigma_2c = pow(dS_2c / evt_2b2c,2)
      
      evt_2b1c = events["2b1c"][region]
      dS_1c = sqrt(evt_2b1c)
      sigma_1c = pow(dS_1c / evt_2b1c,2)
      
      rel_error = sqrt(sigma_SR + sigma_2c + sigma_1c)
      uncertainty[region] = rel_error * predicted[region]
      unc_percent[region] = uncertainty[region] / predicted[region]
      
      rel_error_alpha = sqrt(sigma_2c + sigma_1c)
      unc_alpha[region] = rel_error_alpha * alphas[region]
      unc_percent_alpha[region] = unc_alpha[region] / alphas[region]
       
    ## Output all of the information we're interested in
    print "==================================="
    print "Control Region"
    print "==================================="
    print "N(2b2c) = ", events["2b2c"]["CR"]
    print "N(2b1c) = ", events["2b1c"]["CR"]
    print "alpha   = ", alpha_CR, " +/- ", unc_alpha["CR"], " | ", unc_percent_alpha["CR"]*100, "%"
    print "N_pred  = ", N_CR_predicted, " +/- ", uncertainty["CR"], " | ", unc_percent["CR"]*100, "%"
    print "==================================="
    print "Validation Region"
    print "==================================="
    print "N(2b2c) = ", events["2b2c"]["VR"]
    print "N(2b1c) = ", events["2b1c"]["VR"]
    print "alpha   = ", alpha_VR, " +/- ", unc_alpha["VR"], " | ", unc_percent_alpha["VR"]*100, "%"
    print "N_pred  = ", N_VR_predicted, " +/- ", uncertainty["VR"], " | ", unc_percent["VR"]*100, "%"
    print "==================================="
    print "Data SR = ", events["2b2c"]["SR"]
    print "QCD (MC)= ", QCD_evts
    print "==================================="
    

## == END OF FILE =============================================================
