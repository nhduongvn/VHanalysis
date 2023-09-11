## ============================================================================
## calculate_CR_SF.py - This determines the SF between the data and MC in our
## 			control region. It will check to see if it also fits in
##                      the verification region.
## ============================================================================

## == Import Statements =======================================================

import sys, os
import ROOT
import ConfigParser
from math import *
from my_funcs import ScaleToLumi1, getHist, makeDataMCPlot, blind_regions, blind_region

## == Useful Methods ==========================================================

def calculate_Nevt_in_regions(hist, regions):
  
  ## Keep a running total (sum for all control regions)
  Nevt = 0
  
  ## Go through each bin and check against each region
  Nbins = hist.GetNbinsX()
  for i in range(1, Nbins):
    
    ## Get the bin center and contents
    center = hist.GetBinCenter(i)
    contents = hist.GetBinContent(i)
    
    ## Check our center against each region
    for r in regions:
      low = r[0]
      high = r[1]
      if center > low and center < high:
        Nevt += contents
    
  ## Return the number of events
  return Nevt


def get_key_index(dictionary, key):
  if key in dictionary:
    keys = list(dictionary.keys())
    index = keys.index(key)
    return index
  else: return -1

def get_list_index(my_list, value):
  for i, item in enumerate(my_list):
    if item == value:
      return i
  return -1

## == Settings ================================================================

## Set this so we don't have issues with outputting so many plots
ROOT.gROOT.SetBatch(True)

## These are the regions we want to use. We are currently defining our regions
## by signal = on-shell mass +/- 20 GeV, verification = +/- 10 on either side
## of that, and control by +/- 15 GeV on either side of that.
regions = {
  "Z": {
    "signal": [[70,110]],
    "verify": [[60,70], [110,120]],
    "control": [[45,60], [120,135]]
  },
  "Higgs": {
    "signal": [[105,145]],
    "verify": [[95,105], [145,155]],
    "control": [[80,95], [155, 170]]
  }
}

bad_bin_range = {
  "Z": [50,60],
  "Higgs": [40,50]
}

## This is the variable we're using for our calibration
ptcl = "Z"
if ptcl == "Z": other_ptcl = "Higgs"
elif ptcl == "Higgs": other_ptcl = "Z"

## The years we want to check
years = ['16', '17', '18']

## Do we want to use a logarithmic scale?
useLogY = False

## Input & Output file locations
dirpath = '../condor_results/Aug2023_addedTagSF/NONE/'
output_directory = '../plot_results/Aug2023_SF/'

## Variables that we care about
mass_plot_names = {
  "Z": "Z_mass",
  "Higgs": "H_mass"
}

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
print "## Control Region SF Calculations                ##"
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
## == PART 1 : Determine CR by using desired mass distribution ================

print ">>> Pulling proper histograms from files..."

## Go through each type of sample and get the appropriate plots.
## We will combine for simplicity some similar files. For example,
## we combine all QCD bins into one QCD file.

## Get the appropriate histogram name for the desired boson.
pName = mass_plot_names[ptcl]
hName = "VbbHcc_both_" + pName

plots_by_year = {}
for cat in categories:
  plots_by_year[cat] = getHist(hName, category_samples[cat], 
    histFiles, lumiScales)

print "\n"

##############################
## Stack plots for each year
##############################

scale_factors = {}
for y in years:
  
  scale_factors[y] = {}
  
  ## Get the modifications we want to make for our plots
  print ">>> Combining plots for 20" + y
  tmps = cfg.get(pName, 'xAxisRange').split(',')
  xA_range = []
  if 'Pi' not in tmps[1]:
    xA_range = [float(tmps[0]), float(tmps[1])]
  else:
    xA_range = [0, ROOT.TMath.Pi()]
  
  xA_title = cfg.get(pName, 'xAxisTitle')
  nRebin = 1 #int(cfg.get(pName, 'rebin'))
  
  ## Put all the plots together into convenient lists
  ## along with the associated names.
  plots_process = []
  plotNames_process = []
  for cat in categories:
    plots_process.append(plots_by_year[cat][y].Clone().Rebin(nRebin))
    if cat in ["Data"]:
      dataTitle = 'Data (JetHT, 20'+y+')'
      plotNames_process.append(dataTitle)
    elif cat in category_names:
      plotNames_process.append(category_names[cat])
    else:
      plotNames_process.append(cat)
  
  ## If 2017, remove the bad bin at ~40-60 GeV
  if y in ['17']:
    bad_region = bad_bin_range[ptcl]
    plots_process[QCD] = blind_region(plots_process[1], 
      bad_region[0], bad_region[1])
  
  ## Stack all of the plots together. Then, get the
  ## number of events in our control regions.
  mcCombo = plots_process[QCD].Clone()
  for i in range(2,len(plots_process)):
    mcCombo.Add(plots_process[i])
  
  Nevt_mc = calculate_Nevt_in_regions(mcCombo, 
    regions[ptcl]["control"])
  
  ## Go through our data and get the number of events
  ## in our control regions.
  data = plots_process[DATA].Clone()
  Nevt_data = calculate_Nevt_in_regions(data,
    regions[ptcl]["control"])
  
  CR_SF = Nevt_data / Nevt_mc
  scale_factors[y]["control"] = CR_SF
  
  print "==========================="
  print "Nevt (MC)   = ", Nevt_mc
  print "Nevt (Data) = ", Nevt_data
  print "CR_SF (20" + y + ") = ", CR_SF
  print "==========================="
  
  ## Go through both and determine the number of events
  ## in our verification regions.
  Nevt_mc_VR = calculate_Nevt_in_regions(mcCombo,
    regions[ptcl]["verify"])
  Nevt_data_VR = calculate_Nevt_in_regions(data,
    regions[ptcl]["verify"])
  VR_SF = Nevt_data_VR / Nevt_mc_VR
  scale_factors[y]["verify"] = VR_SF
  
  print "Nevt (MC)   = ", Nevt_mc_VR
  print "Nevt (Data) = ", Nevt_data_VR
  print "VR_SF (20" + y + ") = ", VR_SF
  print "==========================="
  
  per_diff = abs(VR_SF-CR_SF)/((VR_SF+CR_SF)/2.0)
  print "% difference = ", per_diff
  print "===========================\n"
  
  ## What plots do we want to show?
  ## 1. Show a plot that shows the control regions
  ## scaled by the value and print the value.
  logY = useLogY
  if 'CutFlow' in pName: logY = True
  
  canvas_name = pName + '_' + y
  full_output = output_directory + '/20' + y + '/CR_SF/'
  
  ctrl_region_plots = []
  for i in range(0,len(plots_process)):
    ctrl_region_plot = blind_regions(plots_process[i], 
      regions[ptcl]["control"])
    ctrl_region_plots.append(ctrl_region_plot)
  
  makeDataMCPlot(ctrl_region_plots, plotNames_process, ## Plots
    canvas_name + '_control', full_output,             ## folders
    xA_title, xA_range, 'MC unc. (stat.)', False,      ## axes
    logY=logY, lumi=lumiS[y])                          ## other
  
  ## 2. Show a plot where we apply to the scale factor
  ## to the verification region and show them only.
  verify_plots = []
  for i in range(0,len(plots_process)):
    verify_plot = blind_regions(plots_process[i],
      regions[ptcl]["verify"])
    verify_plots.append(verify_plot)
  
  makeDataMCPlot(verify_plots, plotNames_process,
    canvas_name + '_verify', full_output,
    xA_title, xA_range, 'MC unc. (stat.)', False,
    logY=logY, lumi=lumiS[y])
  
  ## Now that we've got a scale factor, scale our MC
  ## samples by it.
  for i in range(1,len(plots_process)):
    plots_process[i].Scale(CR_SF)
  
  
  ## 3. Plot the entire Z mass to see how it fits
  ## Make sure to rebin our items so we don't have
  ## the unnecessary fluctuation.
  for plot in plots_process:
    plot.Rebin(10)
  makeDataMCPlot(plots_process, plotNames_process,
    canvas_name, full_output,
    xA_title, xA_range, 'MC unc. (stat.)', False,
    logY=logY, lumi=lumiS[y])
  
#################################
## Combine plots for ALL years
#################################

## Start by getting the first plot for each sample. 
## Then, add the other years on top. We have two versions
## we'll wanna do for ALL the years. 1. Combine with the 
## individual year CR SF, 2. Combine all together and then
## get one CR SF for the entire thing.

plots_all = []
plots_wYearSF = []
for cat in categories:
  cat_plots = plots_by_year[cat]
  
  ## First plot
  plots_all.append(cat_plots['16'].Clone(cat_plots['16'].GetName()+'_all'))
  plots_wYearSF.append(cat_plots['16'].Clone(cat_plots['16'].GetName()+'_all_YearSF'))
  
  ## The remaining years - Remember to remove
  ## the bad bin for 2017 (~40-60 GeV)
  for y in ['17','18']:
    plot = cat_plots[y].Clone()
    plotSF = cat_plots[y].Clone()
    yearSF = scale_factors[y]["control"]
    
    if y in ['17']:
      bad_region = bad_bin_range[ptcl]
      plot = blind_region(plot, bad_region[0], bad_region[1])
      plotSF = blind_region(plotSF, bad_region[0], bad_region[1])
    
    plots_all[len(plots_all)-1].Add(plot)
    
    plotSF.Scale(yearSF)
    plots_wYearSF[len(plots_all)-1].Add(plotSF)


## Put all the plots together with the proper names
plots_process = []
plotsSF_process = []
plotNames_process = []

for cat in categories:
  idx = get_list_index(categories, cat)
  #print "index for cat = ", idx
  plots_process.append(plots_all[idx].Clone())
  plotsSF_process.append(plots_wYearSF[idx].Clone())
  if cat in ["Data"]:
    dataTitle = 'Data (JetHT)'
    plotNames_process.append(dataTitle)
  elif cat in category_names:
    plotNames_process.append(category_names[cat])
  else:
    plotNames_process.append(cat)

## There's nothing else we need to do with the SF one other than
## put them together and plot them.
canvas_name = pName + '_all'
full_output = output_directory + '/all/CR_SF/'

for i in range(0, len(plotsSF_process)):
  plotsSF_process[i].Rebin(10)

makeDataMCPlot(plotsSF_process, plotNames_process,
  canvas_name + '_combined', full_output,
  xA_title, xA_range, 'MC unc. (stat.)', False,
  logY=logY, lumi=lumiS[y])

## Now, let's calculate the SF in the control region
## for the combined version. We need to combine all
## MC samples into a single plot.
mcCombo = plots_process[QCD].Clone()
for i in range(2,len(plots_process)):
  mcCombo.Add(plots_process[i])

Nevt_mc = calculate_Nevt_in_regions(mcCombo, 
  regions[ptcl]["control"])

## Go through our data and get the number of events
## in our control regions.
data = plots_process[DATA].Clone()
Nevt_data = calculate_Nevt_in_regions(data,
  regions[ptcl]["control"])

CR_SF_all = Nevt_data / Nevt_mc

print "==========================="
print "Nevt (MC)   = ", Nevt_mc
print "Nevt (Data) = ", Nevt_data
print "CR_SF (all) = ", CR_SF_all
print "==========================="

## Go through both and determine the number of events
## in our verification regions.
Nevt_mc_VR = calculate_Nevt_in_regions(mcCombo,
  regions[ptcl]["verify"])
Nevt_data_VR = calculate_Nevt_in_regions(data,
  regions[ptcl]["verify"])
VR_SF_all = Nevt_data_VR / Nevt_mc_VR

print "Nevt (MC)   = ", Nevt_mc_VR
print "Nevt (Data) = ", Nevt_data_VR
print "VR_SF (all) = ", VR_SF_all
print "==========================="

per_diff = abs(VR_SF_all-CR_SF_all)/((VR_SF_all+CR_SF_all)/2.0)
print "% difference = ", per_diff
print "===========================\n"

## Show the proper plots. 
## 1. Plot showing control regions
logY = useLogY
canvas_name = pName + '_all'
full_output = output_directory + '/all/CR_SF/'
ctrl_region_plots = []
for i in range(0,len(plots_process)):
  ctrl_region_plot = blind_regions(plots_process[i], 
    regions[ptcl]["control"])
  ctrl_region_plots.append(ctrl_region_plot)

makeDataMCPlot(ctrl_region_plots, plotNames_process,
  canvas_name + '_control', full_output,
  xA_title, xA_range, 'MC unc. (stat.)', False,
  logY=logY, lumi=lumiS[y])

## 2. Plot showing verification regions
verify_plots = []
for i in range(0,len(plots_process)):
  verify_plot = blind_regions(plots_process[i],
    regions[ptcl]["verify"])
  verify_plots.append(verify_plot)
  
makeDataMCPlot(verify_plots, plotNames_process,
  canvas_name + '_verify', full_output,
  xA_title, xA_range, 'MC unc. (stat.)', False,
  logY=logY, lumi=lumiS[y])

## 3. Plot the entire Z mass to see how it fits
## Make sure to rebin our items so we don't have
## unncessary fluctuation.
for i in range(1, len(plots_process)):
  plots_process[i].Scale(CR_SF_all)

for plot in plots_process:
  plot.Rebin(10)

makeDataMCPlot(plots_process, plotNames_process,
    canvas_name, full_output,
    xA_title, xA_range, 'MC unc. (stat.)', False,
    logY=logY, lumi=lumiS[y])
 
## == PART 2 : Apply CR SF to the other mass distribution =====================
    
## Now, get all the plots again, but for the other boson.
pName = mass_plot_names[other_ptcl]
hName = "VbbHcc_both_" + pName

plots_by_year = {}
for cat in categories:
  plots_by_year[cat] = getHist(hName, category_samples[cat], 
    histFiles, lumiScales)

##############################
## Stack plots for each year
##############################

for y in years:
  
  ## Get the modifications we want to make for our plots
  print ">>> Combining plots for 20" + y
  tmps = cfg.get(pName, 'xAxisRange').split(',')
  xA_range = []
  if 'Pi' not in tmps[1]:
    xA_range = [float(tmps[0]), float(tmps[1])]
  else:
    xA_range = [0, ROOT.TMath.Pi()]
  
  xA_title = cfg.get(pName, 'xAxisTitle')
  nRebin = int(cfg.get(pName, 'rebin'))
  
  ## Put all the plots together into convenient lists
  ## along with the associated names.
  plots_process = []
  plotNames_process = []
  for cat in categories:
    plots_process.append(plots_by_year[cat][y].Clone().Rebin(nRebin))
    if cat in ["Data"]:
      dataTitle = 'Data (JetHT, 20'+y+')'
      plotNames_process.append(dataTitle)
    elif cat in category_names:
      plotNames_process.append(category_names[cat])
    else:
      plotNames_process.append(cat)
  
  ## If 2017, remove the bad bin at ~40-60 GeV
  if y in ['17']:
    bad_region = bad_bin_range[other_ptcl]
    plots_process[QCD] = blind_region(plots_process[1], 
      bad_region[0], bad_region[1])
  
  ## Scale each MC sample by our CR SF
  for i in range(1, len(plots_process)):
    plots_process[i].Scale(scale_factors[y]["control"])
  
  ## output these plots
  canvas_name = pName + '_' + y
  full_output = output_directory + '/20' + y + '/CR_SF/'
  
  makeDataMCPlot(plots_process, plotNames_process,
    canvas_name, full_output,
    xA_title, xA_range, 'MC unc. (stat.)', False,
    logY=logY, lumi=lumiS[y])

#################################
## Combine plots for ALL years
#################################

## Start by getting the first plot for each sample. 
## Then, add the other years on top. We have two versions
## we'll wanna do for ALL the years. 1. Combine with the 
## individual year CR SF, 2. Combine all together and then
## get one CR SF for the entire thing.

plots_all = []
plots_wYearSF = []
for cat in categories:
  cat_plots = plots_by_year[cat]
  
  ## First plot
  plots_all.append(cat_plots['16'].Clone(cat_plots['16'].GetName()+'_all'))
  plots_wYearSF.append(cat_plots['16'].Clone(cat_plots['16'].GetName()+'_all_YearSF'))
  
  ## The remaining years - Remember to remove
  ## the bad bin for 2017 (~40-60 GeV)
  for y in ['17','18']:
    plot = cat_plots[y].Clone()
    plotSF = cat_plots[y].Clone()
    yearSF = scale_factors[y]["control"]
    
    if y in ['17']:
      bad_region = bad_bin_range[other_ptcl]
      plot = blind_region(plot, bad_region[0], bad_region[1])
      plotSF = blind_region(plotSF, bad_region[0], bad_region[1])
    
    plots_all[len(plots_all)-1].Add(plot)
    
    plotSF.Scale(yearSF)
    plots_wYearSF[len(plots_all)-1].Add(plotSF)


## Put all the plots together with the proper names
plots_process = []
plotsSF_process = []
plotNames_process = []

for cat in categories:
  idx = get_list_index(categories, cat)
  #print "index for cat = ", idx
  plots_process.append(plots_all[idx].Clone())
  plotsSF_process.append(plots_wYearSF[idx].Clone())
  if cat in ["Data"]:
    dataTitle = 'Data (JetHT)'
    plotNames_process.append(dataTitle)
  elif cat in category_names:
    plotNames_process.append(category_names[cat])
  else:
    plotNames_process.append(cat)

## Output the plots that use the scale factors year by year
canvas_name = pName + '_all'
full_output = output_directory + '/all/CR_SF/'

for i in range(0, len(plotsSF_process)):
  plotsSF_process[i].Rebin(10)

makeDataMCPlot(plotsSF_process, plotNames_process,
  canvas_name + '_combined', full_output,
  xA_title, xA_range, 'MC unc. (stat.)', False,
  logY=logY, lumi=lumiS[y])

## Scale the plots by the scale factor and output them.
for i in range(1, len(plots_process)):
  plots_process[i].Scale(CR_SF_all)

for plot in plots_process:
  plot.Rebin(10)

makeDataMCPlot(plots_process, plotNames_process,
    canvas_name, full_output,
    xA_title, xA_range, 'MC unc. (stat.)', False,
    logY=logY, lumi=lumiS[y])

## Notify the end of the program.
print "## ============================================= ##"
print "## END OF PROGRAM                                ##"
print "## ============================================= ##"

## == END OF FILE =============================================================
