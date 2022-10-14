## == IMPORT STATEMENTS =======================================================
import ROOT
import sys,os
import copy
import math
from my_funcs import *
import ConfigParser

ROOT.gROOT.SetBatch(True)

## == USEFUL METHODS ==========================================================
def calculate_eff(hist):
  nTotal = hist.GetBinContent(1)
  nPassed = hist.GetBinContent(4)
  return nPassed * 1.0 / nTotal

def scaleToLumi1(fName, xSec, lumi):
  f = ROOT.TFile.Open(fName, 'read')
  hTmp = f.Get('Nevt')
  nP = hTmp.GetBinContent(3)
  nN = hTmp.GetBinContent(1)
  return lumi*xSec/(nP-nN)

def getHist(pN, samList, fList, lS, selType):
  hOut = {}
  plotName = 'VbbHcc'
  if selType != 'MC':
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

lumi = { '16' : 35862, '17' : 41529, '18': 59710 }
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

filepath = '../new_condor_results/NONE/'
plotFolder = '../MC_comparison_plots/'

samples = ['ggZH_HToCC_ZToQQ', 'ZH_HToCC_ZToQQ']
logY = True

if len(samples) > 1:
  plotFolder = plotFolder + 'COMBINED/'
else:
  plotFolder = plotFolder + samples[0] + '/'

plots_MC = ['pT_c', 'pT_b']
plots = ['pT_cjet', 'pT_bjet']
xAxisTitles = ["p_{T}(c)", "p_{T}(b)"]

print "========================================="
print "Calculating efficiency of event selection"
print "=========================================\n"


## Check to make sure the files are where we expect them to be.
filepathExists = os.path.exists(filepath)
if not filepathExists:
  print "ERROR: Filepath", filepath, "does NOT exist. Terminating macro."
  exit()


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

## Get the appropriate histograms we want.
for i in range(len(plots)):
  hTags = getHist(plots[i], samples, files, lumiScales, 'tags')
  hAlgo = getHist(plots[i], samples, files, lumiScales, 'algo')
  hBoth = getHist(plots[i], samples, files, lumiScales, 'both')
  
  hTags_MC = getHist(plots_MC[i], samples, files, lumiScales, 'tags')
  hAlgo_MC = getHist(plots_MC[i], samples, files, lumiScales, 'algo')
  hBoth_MC = getHist(plots_MC[i], samples, files, lumiScales, 'both')
  
  for y in years:
    plotName = 'tags_ratio_' + plots[i] + '_' + y
    makeRatioPlots([hTags[y].Clone(), hTags_MC[y].Clone()], 
      ["Tagging Only", "MC Truth"], plotName, 
      plotFolder + '/20' + y, xAxisTitles[i], [0, 1000], logY)
    
    plotName = 'algo_ratio_' + plots[i] + '_' + y
    makeRatioPlots([hAlgo[y].Clone(), hAlgo_MC[y].Clone()],
      ["DHZ Prioritized", "MC Truth"], plotName,
      plotFolder + '/20' + y, xAxisTitles[i], [0, 1000], logY)
    
    plotName = 'both_ratio_' + plots[i] + '_' + y
    makeRatioPlots([hBoth[y].Clone(), hBoth_MC[y].Clone()],
      ["Tagging Prioritized", "MC Truth"], plotName,
      plotFolder + '/20' + y, xAxisTitles[i], [0, 1000], logY)
