## == IMPORT STATEMENTS =======================================================
import ROOT
import sys,os
import copy
import math
from my_funcs import makeOverlapPlot

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
#years = ['18']

## These are all the plots we want to pull from.
plot_names = ['H_mass', 'Z_mass', 'H_pt', 'Z_pt', 'Z_dR', 'H_dR']

#plot_names = ['DHZ0', 'DHZ1', 'DHZ2', 'dH']

## If the plot does not have a direct copy in the MC truth run, make sure to note it here.
no_truth_plots = []
#no_truth_plots = ['DHZ0', 'DHZ1', 'DHZ2', 'dH']

axis_titles = {
  'Z_mass': 'm_{bb} [GeV]',
  'H_mass': 'm_{cc} [GeV]',
  'Z_dR': '#Delta R_{bb}',
  'H_dR': '#Delta R_{cc}',
  'H_pt': 'p_{T}(H)',
  'Z_pt': 'p_{T}(Z)',
  'CutFlow': '',
  'dR_cjets': '#Delta R{c,c-jet}',
  'dR_cjets_all': '#Delta R{c,c-jet} (all combo)',
  'dR_bjets': '#Delta R{b,b-jet}',
  'dR_bjets_all': '#Delta R{b,b-jet} (all combo)',
  'eff': '',
  'pT_c': 'p_{T}(c^{MC}) [GeV]',
  'pT_b': 'p_{T}(b^{MC}) [GeV]',
  'pT_cjet': 'p_{T}(c-jet) [GeV]',
  'pT_bjet': 'p_{T}(b-jet) [GeV]',
  'DHZ0': 'D_{HZ1} [GeV]',
  'DHZ1': 'D_{HZ2} [GeV]',
  'DHZ2': 'D_{HZ3} [GeV]',
  'dH': '|D_{HZ1} - D_{HZ2} | [GeV]',
}

filepath = '../newest_condor_results/NONE/'
plotFolder = '../MC_comparison_plots/loose/'

samples = ['ZH_HToCC_ZToQQ', 'ggZH_HToCC_ZToQQ']
#samples = ['ZH_HToCC_ZToQQ']
#samples = ['ggZH_HToCC_ZToQQ']
fill = False

subfolder = ''
if len(samples) > 1:
  subfolder = 'COMBINED/'
else:
  subfolder = samples[0] + '/'

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
    print files[s][y]
    xSec = sample_info[s]['xSec_' + y]
    scale = scaleToLumi1(filepath + fName, xSec, lumi[y])
    lumiScales[s][y] = scale

## Go through each plot we're interested in.
for plN in plot_names:
 
  print "plot:", plN 
  ## Get the appropriate histograms we want.
  if not plN in no_truth_plots:
    hMC = getHist(plN, samples, files, lumiScales, 'MC')
  hTags = getHist(plN, samples, files, lumiScales, 'tags')
  hAlgo = getHist(plN, samples, files, lumiScales, 'algo')
  hBoth = getHist(plN, samples, files, lumiScales, 'duong')
  
  #############################
  ## Stack plots for each year.
  #############################
  
  for y in years:
    
    plots_process = [hTags[y].Clone(), hBoth[y].Clone(), hAlgo[y].Clone()]
    plotNames_process = ['Tagging Only','Tagging Prioritized', 'D_{HZ} Prioritized']
    
    ## Properly stack the plots
    for logY in [True, False]:
      xAxis_title = axis_titles[plN]
      xAxis_range = [0,1000]
      makeOverlapPlot(plots_process, plotNames_process, plN + '_' + y, 
        plotFolder + subfolder + '/20' + y + '/', xAxis_title, xAxis_range, logY, lumi[y], fill)
    
      ## Output the MC Truth Versions
      if plN in no_truth_plots: continue
      makeOverlapPlot([hMC[y].Clone()], ['MC Truth'], plN + '_MCTruth_' + y,
        plotFolder + subfolder + '/20' + y + '/', xAxis_title, xAxis_range, logY, lumi[y], fill)
    
  ##################################
  ## Plot control plot for all years
  ##################################  
