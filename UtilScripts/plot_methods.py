## == IMPORT STATEMENTS =======================================================

import ROOT
import sys,os
import copy
import math
from my_funcs import makePlot

ROOT.gROOT.SetBatch(True)

## == USEFUL METHODS ==========================================================

def scaleToLumi1(fName, xSec, lumi):
  f = ROOT.TFile.Open(fName, 'read')
  hTmp = f.Get('Nevt')
  nP = hTmp.GetBinContent(3)
  nN = hTmp.GetBinContent(1)
  return lumi*xSec/(nP-nN)


def getHist(pN, samList, fList, lS, selType):
  hOut = {}
  plotName = 'VbbHcc'
  #if selType != 'MC':
  plotName = plotName + '_' + selType
  plotName = plotName + '_' + pN
  for y in years:
    
    ## Get the appropriate file
    hOut[y] = fList[samList[0]][y].Get(plotName).Clone() ## first sample
    #hOut[y].Scale(lS[samList[0]][y])
    
    ## Add any other possible desired samples to the plot
    for iS in range(len(samList)):
      if iS == 0: continue ## first sample already covered
      
      h = fList[samList[iS]][y].Get(plotName).Clone()
      #h.Scale(lS[samList[iS]][y])
      hOut[y].Add(h)
    
  return hOut

###############################################################################
## Main Code
###############################################################################

line_colors = [ROOT.kBlack, ROOT.kRed, ROOT.kBlue]
fill_colors = [16, 46, 38]

lumi = { '16': 35862, '17': 41529, '18':59710 }
sample_info = {
  'ZH_HToCC_ZToQQ': {
    'file_16': 'ZH_HToCC_ZToQQ_MC_2016.root',
    'file_17': 'ZH_HToCC_ZToQQ_MC_2017.root',
    'file_18': 'ZH_HToCC_ZToQQ_MC_2018.root',
    'xSec_16': 0.01785,
    'xSec_17': 0.01785,
    'xSec_18': 0.01785,
  },
  
  'ggZH_HToCC_ZToQQ': {
    'file_16': 'ggZH_HToCC_ZToQQ_MC_2016.root',
    'file_17': 'ggZH_HToCC_ZToQQ_MC_2017.root',
    'file_18': 'ggZH_HToCC_ZToQQ_MC_2018.root',
    'xSec_16': 0.00248,
    'xSec_17': 0.00248,
    'xSec_18': 0.00248,
  },
}

years = ['16', '17', '18']
years = ['18']

## These are all the plots we want to pull.
plot_names = ['CutFlow']

axis_titles = {
  'CutFlow': '',
}

filepath = '../new_condor_results/NONE/'
plotFolder = '../MC_plots/'

samples = ['ZH_HToCC_ZToQQ', 'ggZH_HToCC_ZToQQ']
logY = True

subfolder = ''
if len(samples) > 1:
  subfolder = 'COMBINED/'
else:
  subfolder = samples[0] + '/'

print "=============================="
print "Individual Comparison Plots"
print "=============================="

## Check to make sure the files are where we expect them to be.
filepathExists = os.path.exists(filepath)
if not filepathExists:
  print "ERROR: Filepath", filepath, "does NOT exist. Terminating macro."
  exit()

## Check to make sure the output does exist
plotFolderExists = os.path.exists(plotFolder)
if not plotFolderExists:
  print "WARNING:", plotFolder, " directory does NOT exist."
  os.makedirs(plotFolder)
  print ">>> directory created."

## Get the proper files & scales that we want.
files = {}
lumiScales = {}
for s in samples:
  files[s] = {}
  lumiScales[s] = {}
  for y in years:
    fName = sample_info[s]['file_' + y]
    files[s][y] = ROOT.TFile.Open(filepath + fName, 'READ')
    xSec = sample_info[s]['xSec_' + y]
    scale = scaleToLumi1(filepath + fName, xSec, lumi[y])
    lumiScales[s][y] = scale

## Go through each plot that we're interested in.
for plN in plot_names:
  
  print "plot: ", plN
  ## Get the appropriate histograms we want.
  hTags = getHist(plN, samples, files, lumiScales, 'tags')
  hAlgo = getHist(plN, samples, files, lumiScales, 'algo')
  hBoth = getHist(plN, samples, files, lumiScales, 'both')
  
  #############################
  ## Stack plots for each year.
  #############################
  
  for y in years:
    
    xAxis_title = axis_titles[plN]
    xAxis_range = [0,1000]
    
    makePlot([hTags[y].Clone()], "Tagging Only", plN + '_tags_' + y,
      plotFolder + '/20' + y + '/' + subfolder, xAxis_title, xAxis_range, 
      "Events", logY, lumi[y], line_colors[0], fill_colors[0])
    
    makePlot([hAlgo[y].Clone()], "D_{HZ} Prioritized", plN + '_algo_' + y,
      plotFolder + '/20' + y + '/' + subfolder, xAxis_title, xAxis_range, 
      "Events", logY, lumi[y], line_colors[1], fill_colors[1])
    
    makePlot([hBoth[y].Clone()], "Tagging Prioritized", plN + '_both_' + y,
      plotFolder + '/20' + y + '/' + subfolder, xAxis_title, xAxis_range, 
      "Events", logY, lumi[y], line_colors[2], fill_colors[2])
    
    
