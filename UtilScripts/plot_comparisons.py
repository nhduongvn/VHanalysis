## == IMPORT STATEMENTS =======================================================
import ROOT
import sys,os
import copy
import math
from my_funcs import makeOverlapPlot
import ConfigParser

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
plot_names = ['ZMass', 'HMass', 'dR_Z', 'dR_H', 'HPt', 'ZPt']
axis_titles = {
  'ZMass': 'm_{bb} [GeV]',
  'HMass': 'm_{cc} [GeV]',
  'dR_Z': '#Delta R_{bb}',
  'dR_H': '#Delta R_{cc}',
  'HPt': 'p_{T}(H)',
  'ZPt': 'p_{T}(Z)',
}

filepath = '../new_condor_results/NONE/'
plotFolder = '../MC_comparison_plots/'

samples = ['ZH_HToCC_ZToQQ', 'ggZH_HToCC_ZToQQ']

print "===================================="
print "MC comparison of selection methods"
print "====================================\n"

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

## Go through each plot we're interested in.
for plN in plot_names:
  
  ## Get the appropriate histograms we want.
  hMC = getHist(plN, samples, files, lumiScales, 'MC')
  hTags = getHist(plN, samples, files, lumiScales, 'tags')
  hAlgo = getHist(plN, samples, files, lumiScales, 'algo')
  hBoth = getHist(plN, samples, files, lumiScales, 'both')
  
  #############################
  ## Stack plots for each year.
  #############################
  
  for y in years:
    
    plots_process = [hTags[y].Clone(), hBoth[y].Clone(), hAlgo[y].Clone()]
    plotNames_process = ['Tagging Only','Tagging Prioritized', 'DHH Prioritized']
    logY = False
    
    ## Properly stack the plots
    xAxis_title = axis_titles[plN]
    xAxis_range = [0,1000]
    makeOverlapPlot(plots_process, plotNames_process, plN + '_' + y, 
      plotFolder + '/20' + y, xAxis_title, xAxis_range, logY, lumi[y])
    
    ## Output the MC Truth Versions
    makeOverlapPlot([hMC[y].Clone()], ['MC Truth'], plN + '_MCTruth_' + y,
      plotFolder + '/20' + y, xAxis_title, xAxis_range, logY, lumi[y])
    
  ##################################
  ## Plot control plot for all years
  ##################################  
