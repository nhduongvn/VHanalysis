## == IMPORT STATEMENTS =======================================================

import ROOT
import sys,os
import copy
import math
import ConfigParser
import array
from math import *

from my_funcs import makeEfficiencyPlot, makePlot

ROOT.gROOT.SetBatch(True)

## == Useful Methods ==========================================================

##############################################
## Scale a histogram to the proper luminosity
##############################################
def scaleToLumi1(fName, xSec, lumi):
  f = ROOT.TFile.Open(fName, 'read')
  hTmp = f.Get('Nevt')
  nP = hTmp.GetBinContent(3)
  nN = hTmp.GetBinContent(1)
  return lumi*xSec/(nP-nN)

####################################################
## Get the histograms for a given sample & variable
####################################################
def getHist(pN, sample_name, fH, lS, printSamples=True):
  hOut = {}
  
  ## Go through each year we're interested in.
  for y in years:
    ## Get the first sample
    if printSamples: print sample_name[0], pN, y
    hOut[y] = fH[sample_name[0]][y][0].Get(pN).Clone()
    if sample_name[0] not in ['JetHT', 'SingleMuon']:
      hOut[y].Scale(lS[sample_name[0]][y][0])
    
    ## Add the other samples 
    for iS in range(len(sample_name)):
      for fi in range(len(fH[sample_name[iS]][y])):
        if iS == 0 and fi == 0: continue
        h = fH[sample_name[iS]][y][fi].Get(pN).Clone()
        if sample_name[iS] not in ['JetHT', 'SingleMuon']:
          h.Scale(lS[sample_name[iS]][y][fi])
        hOut[y].Add(h)
    
  if printSamples: 
    print "==============================================="
    
  return hOut

###############################################################################
## MAIN CODE
###############################################################################

###############################
## These you can edit / change
###############################

## Years to run over
years = ['16', '17', '18']
years = ['16']

## Regions to go through
regions = [ "_ideal", "_3B", "_2b2c" ]
region_name = {
  "_ideal": "Tagging: 4 b-jets",
  "_3B": "Tagging: at least 3 b-jets",
  "_2b2c": "Tagging: 2 b-jets, 2 c-jets"
}

useLogY = False

## Input & Output
plotFolder = '../plot_results/trig_eff_better/'
resultpath = '../condor_results/trigger_efficiency_NEWEST/'

## Samples
ss = [ "SingleMuon" ]

## Triggers we're interested in
categories = {
  '16': ["2016_QuadJet_TripleTag", "2016_DoubleJet_TripleTag"],
  '17': ["2017_QuadJet_TripleTag"],
  '18': ["2018_QuadJet_TripleTag"],
}

trigger_names = {
  '16': ["HLT_QuadJet45_TripleBTagCSV_p087",
         "HLT_DoubleJet90_Double30_TripleBTagCSV_p087"],
  '17': ["HLT_PFHT300PT30_QuadPFJet_75_60_45_40_TriplePFBTagCSV_3p0"],
  '18': ["HLT_PTHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5"],
}

## Variables of interest
variables = ["pt_jet0", "pt_jet1", "pt_jet2", "pt_jet3", 
	"HT", "HTmod", "BvL", "CvL", "CvB"]
variables = [ "HT" ]


################################
## Do not edit below this point
################################

## Load the config
config_file = '../Configs/config.ini'
cfg = ConfigParser.ConfigParser()
cfg.read(config_file)

## Get the lumi scales
lumiS = {}
for y in years:
  lumiTmp = float(cfg.get('General','lumi_'+y))/1000.
  lumiTmp = format("%.1f" % lumiTmp)
  lumiS[y] = str(lumiTmp)
print "lumi scales = ", lumiS

## Retrieve necessary information 
## from the desired samples
fNames = {}
xSecs = {}
lumiScales = {}
fHist = {}

for s in ss:
  
  fNames[s] = {}
  xSecs[s] = {}
  lumiScales[s] = {}
  fHist[s] = {}
  
  for y in years:
    
    lumi = float(cfg.get('General', 'lumi_'+y))
    names = cfg.get(s, 'file_'+y).split(',')
    print '>>>>>>>>>: ', len(names)
    xSecTmps = ['1']*len(names)
    kfactor = ['1']*len(names)
    if s not in ['JetHT', 'SingleMuon']:
      xSecTmps = cfg.get(s, 'xSec_'+y).split(',')
    
    fNames[s][y] = []
    xSecs[s][y] = []
    fHist[s][y] = []
    dirpath = resultpath + '/NONE/'
    for iN in names:
      #fNames[s][y].append(cfg.get('Paths', 'path') + '/' + iN)
      fNames[s][y].append(dirpath + '/' + iN)
      fHist[s][y].append(ROOT.TFile.Open(fNames[s][y][-1],'READ'))
    
    print xSecTmps
    for iS in xSecTmps:
      if '*' in iS: iS = iS.split('*')
      if len(iS) == 2:
        xSecs[s][y].append(float(iS[0])*float(iS[1]))
      else:
        xSecs[s][y].append(float(iS))
        
    lumiScales[s][y] = [1]*len(names)
    for iN in range(len(fNames[s][y])):
      if s not in ['JetHT', 'SingleMuon']:
        print s, y, iN, fNames[s][y][iN]
        lumiScales[s][y][iN] = scaleToLumi1(fNames[s][y][iN], xSecs[s][y][iN], lumi)


nums = {}

##############################################################
## Develop the special binning we want for each variable
##############################################################

HT_binning = [0]
for i in range(200, 610, 50):
  HT_binning.append(i)
#for i in range(700, 2100, 100):
#  HT_binning.append(i)
HT_binning.append(800)
HT_binning.append(1000)
HT_binning.append(2000)
HT_array = array.array('d', HT_binning)

binning_per_var = {
  "HT": HT_array,
  "HTmod": HT_array
}

nBins_per_var = {
  "HT": len(HT_binning)-1,
  "HTmod": len(HT_binning)-1
}

##############################################################
## Go through each variable and year.
##############################################################

## Go through each region
for r in regions:
  
  ## Go through each variable of interest
  for v in variables:
    
    ## Go through each year
    for y in years:
      
      ## Get the triggers we're interested in.
      triggers = trigger_names[y]
      
      for i in range(len(triggers)):
        
        ## Combine the parts to get the histogram name
        ## and then get the appropriate histograms
        histName = categories[y][i] + r + "_" + v
        histName_ref = histName + "_ref"
        hProbe = getHist(histName, ss, fHist, lumiScales)
        hRef   = getHist(histName_ref, ss, fHist, lumiScales)
        
        plN = v
        if v == "BvL": plN = "CSV"
        if v == "HTmod": plN = "HT"
        
        ## Get the plot information from the config file
        tmps = cfg.get(plN, 'xAxisRange').split(',')
        xA_range = []
        if 'Pi' not in tmps[1]:
          xA_range = [float(tmps[0]), float(tmps[1])]
        else:
          xA_range = [0, ROOT.TMath.Pi()]
        xA_title = cfg.get(plN, 'xAxisTitle')
        
        ## Get the rebinning information from above
        nBins = nBins_per_var[plN]
        bins = binning_per_var[plN]
        plots = [
          hProbe[y].Clone().Rebin(nBins, "probeNew", bins),
          hRef[y].Clone().Rebin(nBins, "refNew", bins)
        ]
        
        ## Make the canvas name & output directory
        regionName = r[1:] if r != "" else "noTag"
        canvas_name = v + "_" + categories[y][i] + "_" + y + r
        outputdir = plotFolder + '/20' + y + '_QCDv9/' + regionName + '/'
        
        print "canvas_name = ", canvas_name
        print "outputdir   = ", outputdir
        
        makeEfficiencyPlot(plots, "", canvas_name,
          outputdir, xA_title, xA_range, "Efficiency",
          triggers[i], y, region_name[r])






