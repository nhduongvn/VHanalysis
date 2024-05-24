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
selection_methods = [ "tagFirst" ]

variables = [ "MH_v_MZ" ]
plot_variables = [ "Z_mass", "H_mass" ]

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
categories = [ 
  "Data", "QCD"#, "ZHcc", "ZHbb", "ggZHcc", "ggZHbb", 
  #"WJ", "ZJ", "TT", "ST", "WW", "WZ", "ZZ" 
]

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

other_backgrounds = [ "ZHbb", "ggZHbb", "WJ", "ZJ", "TT", "ST", "WW", "WZ", "ZZ" ]

## Regions
region_sizes = {
  "CR": 20,#[25,20],
  "VR": 10,#[15,10],
  "SR": 30,#25,#[30,25],
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

## Sectors
sector_line_info = {
  "I": {
    "a": 91.0/125,
    "b": -1.0,
    "c": 0.0,
  },
  "II": {
    "a": 125.0/91,
    "b": 1,
    "c": -23906.0/91,
  }
}

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
  
  ## Get the proper plots (for the background estimation)
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
  
  ## Get the proper plots (for the plotting)
  plots_2b2c_by_variable = {}
  plots_2b1c_by_variable = {}
  for var in plot_variables:
    plots_2b2c_by_variable[var] = {}
    plots_2b1c_by_variable[var] = {}
    
    for cat in categories:
      plots_2b1c_by_variable[var][cat] = getHist("VH_" + sel + "_2b1c_" + var,
        category_samples[cat], histFiles, lumiScales)
      plots_2b2c_by_variable[var][cat] = getHist("VH_" + sel + "_" + var,
        category_samples[cat], histFiles, lumiScales)
  
  ## Go through each year
  for y in years:
  
    print "\n>>> ~~~~~Analyzing year 20", y, "~~~~~"
    
    events = { "I": {}, "II": {}}
    for key in ["I", "II"]:
      events[key] = { "2b2c": {}, "2b1c": {} }
      events[key]["2b2c"] = { "CR": 0, "VR": 0, "SR": 0, "other": 0, "total": 0, "all" : 0 }
      events[key]["2b1c"] = { "CR": 0, "VR": 0, "SR": 0, "other": 0, "total": 0, "all" : 0 }
    
    ## We want to analyze for each diagonal
    for line_key in sector_line_info.keys():
      print "diagonal: ", line_key
      
      line_info = sector_line_info[line_key]
      a = line_info["a"]
      b = line_info["b"]
      c = line_info["c"]
      r = 30.0
      
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
      
      QCD_evts = 0
      
      ## Go through each bin in each direction
      print ">>> Looping through bins to count events (may be slow)..."
      for yb in range(1, nBinsY+1):
      
        cY = plot_2b2c.GetYaxis().GetBinCenter(yb)
        for x in range(1, nBinsX+1):
          cX = plot_2b2c.GetXaxis().GetBinCenter(x)
          
          evts = plot_2b2c.GetBinContent(x,yb)
          events[line_key]["2b2c"]["total"] += evts
          
          ## Check against each of our regions & the sectors we want (our diagonals)
          ## First, for the 2b2c data
          region = "all"
          within_line = within_line_range(a,b,c,cX,cY,r)
          
          if (isWithinEllipse(cX, cY, 125.0, 91.0, SR_width, SR_width) and within_line):
            region = "SR"
          elif (isWithinEllipse(cX, cY, 125.0, 91.0, VR_width, VR_width) and within_line):
            region = "VR"
          elif (isWithinEllipse(cX, cY, 125.0, 91.0, CR_width, CR_width) and within_line):
            region = "CR"
          elif within_line:
            region = "other"
          
          if within_line:
            events[line_key]["2b2c"]["total"] += evts
          events[line_key]["2b2c"][region] += evts
          
          
          ## Check against each of our regions & the sectors we want (our diagonals)
          ## Now, for the 2b1c data
          evts = plot_2b1c.GetBinContent(x,yb)
          if within_line:
            events[line_key]["2b1c"]["total"] += evts
          events[line_key]["2b1c"][region] += evts
    
    ## Print out and determine the contamination values for each region
    #for line_key in sector_line_info.keys():
    #  
    #  print "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"
    #  print "# Events in Sector: ", line_key
    #  print "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"
    #  total_evts = events[line_key]["2b2c"]["total"]
    #  for region in ["CR", "VR", "SR", "all", "other"]:
    #    evt = events[line_key]["2b2c"][region]
    #    per = evt * 1.0 / total_evts
    #    print region, ": ", evt, "(", '{:,.3f}'.format(per), ")"
    #  print "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"
    #  print "Total: ", total_evts
    #  print "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"
    
    ## We have 3 ways we want to analyze this data:
    ## 1. sector I by itself
    ## 2. sector II by itself
    ## 3. sectors I & II combined
    for sectors in [["I"],["II"],["I","II"]]:
      
      if sectors == ["I"]: sector_name = "I"
      elif sectors == ["II"]: sector_name = "II"
      elif sectors == ["I","II"]: sector_name = "both"
      else: sector_name = "other"
    
      ## Get values that we need to calculate for both regions
      N_2b1c_SR =  events["I"]["2b1c"]["SR"]
      sigma_N_SR = pow(sqrt(N_2b1c_SR)/N_2b1c_SR, 2)
      
      ## Calculate the transfer function / SF for the control region (CR)
      evt_2b2c = 0
      evt_2b1c = 0
      for line in sectors:
        evt_2b1c += events[line]["2b1c"]["CR"]
        evt_2b2c += events[line]["2b2c"]["CR"]
      
      alpha_CR = 1.0 * evt_2b2c / evt_2b1c
      N_predict_CR = alpha_CR * N_2b1c_SR
      
      sigma1 = pow(sqrt(evt_2b1c)/evt_2b1c, 2)
      sigma2 = pow(sqrt(evt_2b2c)/evt_2b2c, 2)
      rel_error = sqrt(sigma1 + sigma2)
      unc_alpha_CR = rel_error * alpha_CR 
      per_alpha_CR = unc_alpha_CR / alpha_CR
      
      rel_error = sqrt(sigma_N_SR + sigma1 + sigma2)
      unc_N_CR = rel_error * N_predict_CR
      per_N_CR = unc_N_CR / N_predict_CR
      
      print "\n==================================="
      print "Selection Method: ", sel
      print "==================================="
      print "Sectors: ", sectors
      print "==================================="
      print "Control Region"
      print "==================================="
      print "N(2b2c) = ", evt_2b2c
      print "N(2b1c) = ", evt_2b1c
      print "alpha   = ", alpha_CR, " +/- ", unc_alpha_CR, " | ", per_alpha_CR*100, "%"
      print "N_pred  = ", N_predict_CR, " +/- ", unc_N_CR, " | ", per_N_CR*100, "%"
      
      ## Calculate the same thing in the validation region (VR)
      evt_2b2c = 0
      evt_2b1c = 0
      for line in sectors:
        evt_2b1c += events[line]["2b1c"]["VR"]
        evt_2b2c += events[line]["2b2c"]["VR"]
      
      alpha_VR = 1.0 * evt_2b2c / evt_2b1c
      N_predict_VR = alpha_VR * N_2b1c_SR
      
      sigma1 = pow(sqrt(evt_2b1c)/evt_2b1c, 2)
      sigma2 = pow(sqrt(evt_2b2c)/evt_2b2c, 2)
      rel_error = sqrt(sigma1 + sigma2)
      unc_alpha_VR = rel_error * alpha_VR 
      per_alpha_VR = unc_alpha_VR / alpha_VR
      
      rel_error = sqrt(sigma_N_SR + sigma1 + sigma2)
      unc_N_VR = rel_error * N_predict_VR
      per_N_VR = unc_N_VR / N_predict_VR
      
      print "==================================="
      print "Validation Region"
      print "==================================="
      print "N(2b2c) = ", evt_2b2c
      print "N(2b1c) = ", evt_2b1c
      print "alpha   = ", alpha_VR, " +/- ", unc_alpha_VR, " | ", per_alpha_VR*100, "%"
      print "N_pred  = ", N_predict_VR, " +/- ", unc_N_VR, " | ", per_N_VR*100, "%"
      print "==================================="
      
      ## Produce the interested plots here. We want to produce
      ## the following plots:
      ## 1. full region
      ## 2. signal region
      ## 3. validation region 
      ## Make sure we make the appropriate plots for each variable
      
      output_subpath = output_directory + "/20" + y + "/bckg_estimate_sectors/" + sector_name + "/"
      
      for var in plot_variables:
      
        nRebin = int(cfg.get(var, "rebin"))
        nRebin = 4
        tmps = cfg.get(var, "xAxisRange").split(",")
        xA_range = []
        if "Pi" not in tmps[1]:
          xA_range = [float(tmps[0]), float(tmps[1])]
        else:
          xA_range = [0, ROOT.TMath.Pi()]
        xA_title = cfg.get(var, "xAxisTitle") 
        
        ## 1. Generate for the full region. Get the full plots.
        ## Also, plot the references.
        print ">>> Generating plots for variable = ", var
        
        data_plot = plots_2b2c_by_variable[var]["Data"][y].Clone()
        QCD_plot = plots_2b1c_by_variable[var]["Data"][y].Clone()
        QCD_plot.Scale(alpha_CR)
        
        plots_process = [
          data_plot.Clone().Rebin(nRebin),  # Data
          QCD_plot.Clone().Rebin(nRebin),                    # Data-driven 'QCD'
        ]

        if y == '18': dataTitle = 'Data (JetHT, 20'+y+')'
        else: dataTitle = 'Data (BTagCSV, 20'+y+')'
        plotNames_process = [
          dataTitle, "Data-driven Bckg"
        ]
        
        ## Full Region Plots
        output_path = output_subpath + "/noMC/full/"
        logY = useLogY
        makeDataMCPlot(plots_process, plotNames_process,  ## Plots
          var + "_" + sel + "_" + y, output_path,         ## Folders
          xA_title, xA_range, 'MC unc. (stat.)', False,   ## Axes
          logY=logY, lumi=lumiS[y], blindMass=True,
          colors_to_use=colors)
        
        ## (Reference Plot)
        plots_process = [
          data_plot.Clone().Rebin(nRebin),
          plots_2b1c_by_variable[var]["Data"][y].Clone().Rebin(nRebin)
        ]
        output_path = output_subpath + "/noMC/ref/"
        makeDataMCPlot(plots_process, plotNames_process,  ## Plots
          var + "_" + sel + "_" + y, output_path,         ## Folders
          xA_title, xA_range, 'MC unc. (stat.)', False,   ## Axes
          logY=logY, lumi=lumiS[y], blindMass=True,
          colors_to_use=colors)
        
        ## Validation Region
        nRebin = 2
        data_VR = plots_2b2c_by_variable[var]["Data"][y].Clone()
        QCD_VR = QCD_plot.Clone()
        
        for i in range(3):
          region = regions_to_blind["VR"][var]
          data_VR = blind_region(data_VR, region[i][0], region[i][1])
          QCD_VR = blind_region(QCD_VR, region[i][0], region[i][1])
        
        plots_VR = [
          data_VR.Clone().Rebin(nRebin), 
          QCD_VR.Clone().Rebin(nRebin)
        ]
        
        output_path = output_subpath + "/noMC/VR/"
        makeDataMCPlot(plots_VR, plotNames_process,       ## Plots
          var + "_" + sel + "_VR_" + y, output_path,         ## Folders
          xA_title, xA_range, 'MC unc. (stat.)', False,   ## Axes
          logY=logY, lumi=lumiS[y], blindMass=False,
          colors_to_use=colors)
        
        ## Signal Region
        data_SR = plots_2b2c_by_variable[var]["Data"][y].Clone()
        QCD_SR = QCD_plot.Clone()
        
        for i in range(2):
          region = regions_to_blind["SR"][var]
          data_SR = blind_region(data_SR, region[i][0], region[i][1])
          QCD_SR = blind_region(QCD_SR, region[i][0], region[i][1])
        
        plots_SR = [
          data_SR.Clone().Rebin(nRebin), 
          QCD_SR.Clone().Rebin(nRebin)
        ]
        
        output_path = output_subpath + "/noMC/SR/"
        makeDataMCPlot(plots_SR, plotNames_process,       ## Plots
          var + "_" + sel + "_SR_" + y, output_path,         ## Folders
          xA_title, xA_range, 'MC unc. (stat.)', False,   ## Axes
          logY=logY, lumi=lumiS[y], blindMass=True,
          massRegion=signal_regions[var],
          colors_to_use=colors)
        
        ## Check to see how the background is when we remove other backgrounds
        #QCD_bckg = QCD_plot.Clone()
        #for cat in other_backgrounds:
        #  QCD_bckg.Add(plots_2b2c_by_variable[var][cat][y], -1)
        
        
        #plots_process = [
        #  plots_2b2c_by_year[var]["Data"][y].Clone().Rebin(nRebin),
        #  QCD_bckg.Clone().Rebin(nRebin)
        #]
        
       # for cat in ["ST", "TT", "ZJ", "WJ", "WW", "WZ", "ZZ", "ZHbb", "ggZHbb", "ZHcc", "ggZHcc"]:
       #   plots_process.append(plots_2b2c_by_year[var][cat][y].Clone().Rebin(nRebin))
      
        #if y == '18': dataTitle = 'Data (JetHT, 20'+y+')'
        #else: dataTitle = 'Data (BTagCSV, 20'+y+')'
      
        #plotNames_process = [
        #  dataTitle, 'QCD (Data-Driven Estimate)', 'Single top', 't#bar{t}', 'Z + jets', 'W + jets',
        #  'WW', 'WZ', 'ZZ', 'ZHbb', 'ggZHbb', 'ZHcc', 'ggZHcc'
        #]
        
        #overlay_plots = [
        #{ "plot": QCD_plot.Clone().Rebin(nRebin),
        # "name": "Full data-driven background" }
        #]
        #output_path = output_subpath + "/MC/full/"
        #makeDataMCPlot(plots_process, plotNames_process,  ## Plots
        #  var + "_" + sel + "_" + y, output_path,         ## Folders
        #  xA_title, xA_range, 'MC unc. (stat.)', False,   ## Axes
        #  logY=logY, lumi=lumiS[y], blindMass=True, 
        #  massRegion=signal_regions[var], overlays=overlay_plots)
    
      

## == END OF FILE =============================================================
