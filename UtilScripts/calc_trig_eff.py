## == IMPORT STATEMENTS =======================================================

import ROOT
import sys,os
import copy
import math
import ConfigParser
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
years = ['16', '17', '18']
years = ['16']
regions = ['tags', 'algo', 'both']#, 'alljet', 'seljet']
regions = [
  'tags', 'tags_noMassCorr', 'tags_noJEC',
  'algo', 'algo_noMassCorr', 'algo_noJEC',
  'both', 'both_noMassCorr', 'both_noJEC'
]
plotCat = 'VbbHcc'
useLogY = False

plotFolder = '../plot_results/trig_eff_new/'
resultpath = '../condor_results/trigger_efficiency_NEW/'

## Samples
ss = [ "SingleMuon" ]


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
## Go through each variable and year.
##############################################################

regions = ["", "_tagged", "_ideal"]

## Go through each plot of interest
categories = {
  '16': ["2016_QuadJet_TripleTag", "2016_QuadJet_DoubleTag",
         "2016_DoubleJet_TripleTag", "2016_DoubleJet_DoubleTag"],
  '17': ["2017_QuadJet_TripleTag", "2017_QuadJet_noTag"],
  '18': ["2018_QuadJet_TripleTag", "2018_QuadJet_noTag"],
}

trigger_names = {
  '16': ["HLT_QuadJet45_TripleBTagCSV_p087", "HLT_QuadJet45_TripleBTagCSV_p087",
         "HLT_DoubleJet90_Double30_TripleBTagCSV_p087",
         "HLT_DoubleJet90_Double30_DoubleBTagCSV_p087"],
  '17': ["HLT_PFHT300PT30_QuadPFJet_75_60_45_40_TriplePFBTagCSV_3p0",
         "HLT_PFHT300PT30_QuadPFJet_75_60_45_40"],
  '18': ["HLT_PTHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5",
         "HLT_PTHT330PT30_QuadPFJet_75_60_45_40"],
}

variables = ["pt_jet0", "pt_jet1", "pt_jet2", "pt_jet3", "HT", "HTmod", "BvL", "CvL", "CvB"]

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
        nRebin = 10#int(cfg.get(plN, 'rebin'))
        
        plots = [
          hProbe[y].Clone().Rebin(nRebin),
          hRef[y].Clone().Rebin(nRebin)
        ]
      
        ## Make the canvas name and output directory
        regionName = r[1:] if r != "" else "noTag"
        canvas_name = v + "_" + categories[y][i] + "_" + y + r
        outputdir = plotFolder + '/20' + y + '_QCDv9/' + regionName + '/'
        
        print "canvas_name = ", canvas_name
        print "outputdir   = ", outputdir
        
        makeEfficiencyPlot(plots, "", canvas_name,
          outputdir, xA_title, xA_range, "Efficiency")
        
        makePlot(hProbe[y].Clone().Rebin(nRebin),
          "", canvas_name, outputdir + "/solo/",
          xA_title, xA_range, "Events", 1, True,
          lumiS[y], ROOT.kBlue, ROOT.kBlue, showStats=True)
        
        makePlot(hRef[y].Clone().Rebin(nRebin),
          "", canvas_name + "_ref", outputdir + "/solo/",
          xA_title, xA_range, "Events", 1, True,
          lumiS[y], ROOT.kBlue, ROOT.kBlue, showStats=True)


















