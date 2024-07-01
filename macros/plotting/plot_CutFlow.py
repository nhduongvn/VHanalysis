## == IMPORT STATEMENTS =======================================================

import ROOT
import sys,os
import copy
import math
import ConfigParser
from math import *

from my_funcs import makePlot

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
def getHist(pN, sample_name, fH, lS):
  hOut = {}
  
  ## Go through each year we're interested in.
  for y in years:
    ## Get the first sample
    print sample_name[0], pN, y
    hOut[y] = fH[sample_name[0]][y][0].Get(pN).Clone()
    if sample_name[0] not in ['JetHT']:
      hOut[y].Scale(lS[sample_name[0]][y][0])
    
    ## Add the other samples 
    for iS in range(len(sample_name)):
      for fi in range(len(fH[sample_name[iS]][y])):
        if iS == 0 and fi == 0: continue
        h = fH[sample_name[iS]][y][fi].Get(pN).Clone()
        if sample_name[iS] not in ['JetHT']:
          h.Scale(lS[sample_name[iS]][y][fi])
        hOut[y].Add(h)
    
  return hOut

###############################################################################
## MAIN CODE
###############################################################################

######################
## Editable Variables
######################
debug = True
years = ['16', '17', '18']

plotFolder = '../full_results/'        ## medium WP
resultpath = '../new_condor_results/NONE/'  
plotFolder = '../looseWP_results/'     ## loose WP
resultpath = '../newest_condor_results/NONE/'

useLogY = False

produceOneSidedROCs = True
produceJetROCs = True
produceGeneralROCs = True
produceIntervalROCs = True

## signal samples
ss_signal = ['ZH_HToCC_ZToQQ', 'ggZH_HToCC_ZToQQ']

## simplified background samples - QCD and ttbar
ss_bckg = [ 'QCD_HT100to200_v9', 'QCD_HT200to300_v9', 'QCD_HT300to500_v9', 
  'QCD_HT500to700_v9', 'QCD_HT700to1000_v9', 'QCD_HT1000to1500_v9',
  'QCD_HT1500to2000_v9', 'QCD_HT2000toInf_v9', 'TTToHadronic', 
  'TTToSemiLeptonic', 'TTTo2L2Nu']

## combined list containing both signal & background samples
ss = ['ZH_HToCC_ZToQQ', 'ggZH_HToCC_ZToQQ', 'QCD_HT100to200_v9', 
  'QCD_HT200to300_v9', 'QCD_HT300to500_v9', 'QCD_HT500to700_v9', 'QCD_HT700to1000_v9', 
  'QCD_HT1000to1500_v9', 'QCD_HT1500to2000_v9', 'QCD_HT2000toInf_v9', 
  'TTToHadronic', 'TTToSemiLeptonic', 'TTTo2L2Nu']

##################################################
## Do not edit below this point (without caution)
##################################################

## Load the config file
if debug: print "STEP 0: Loading necessary elements..."
if debug: print ">>>>>>> loading config files..."
config_file = '../Configs/config.ini'
cfg = ConfigParser.ConfigParser()
cfg.read(config_file)

## Get the lumi scales
if debug: print ">>>>>>> loading luminosities..."
lumiS = {}
for y in years:
  lumiTmp = float(cfg.get('General','lumi_'+y))/1000.
  lumiTmp = format("%.1f" % lumiTmp)
  lumiS[y] = str(lumiTmp)
print "lumi scales = ", lumiS

## Retrieve necessary information
## from the desired samples
if debug: print ">>>>>>> loading cross-sections..."
if debug: print ">>>>>>> loading appropriate files..."

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
    if s not in ['JetHT']:
      xSecTmps = cfg.get(s, 'xSec_'+y).split(',')
    
    fNames[s][y] = []
    xSecs[s][y] = []
    fHist[s][y] = []
    dirpath = resultpath
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
      if s not in ['JetHT']:
        print s, y, iN, fNames[s][y][iN]
        lumiScales[s][y][iN] = scaleToLumi1(fNames[s][y][iN], xSecs[s][y][iN], lumi)

## Get the cutflow for each year and each type
selection_types = ['tags', 'algo', 'both']
selection_colors = [ROOT.kGreen + 2, ROOT.kBlue, ROOT.kRed]

hSignals = {}
hBckgs = {}
for sType in selection_types:
  var_name = "VbbHcc_" + sType + "_CutFlow"
  hSignals[sType] = getHist(var_name, ss_signal, fHist, lumiScales)
  hBckgs[sType]   = getHist(var_name, ss_bckg,   fHist, lumiScales)

############################
## Stack plots for each year
#############################
for y in years:
  
  xAxis_title = "CutFlow"
  yAxis_title = "Events"
  nRebin = int(cfg.get("CutFlow", "rebin"))  

  signal_plots = [
    hSignals["tags"][y].Clone().Rebin(nRebin),
    hSignals["algo"][y].Clone().Rebin(nRebin),
    hSignals["both"][y].Clone().Rebin(nRebin)
  ]
    
  bckg_plots = [
    hBckgs["tags"][y].Clone().Rebin(nRebin),
    hBckgs["algo"][y].Clone().Rebin(nRebin),
    hBckgs["both"][y].Clone().Rebin(nRebin)
  ]
    
  plot_names = [ "Tagging Only", 
      "Mass-Matching Prioritized", "Tagging Prioritized"]
 
  for i in range(3):
    
    makePlot(signal_plots[i], "CutFlow_" + selection_types[i] + "_" + y,   ## plots & plot names
      "CutFlow_signal_" + selection_types[i] + "_" + y,                    ## canvas name
      plotFolder + "/20" + y + "_QCDv9/cutflow/",                          ## output folder
      xAxis_title, [], "Events", 1, True, lumiS[y], 	                   ## axes, rebin, logY, lumiS
      selection_colors[i], selection_colors[i])                            ## colors
    
    makePlot(bckg_plots[i], "CutFlow_" + selection_types[i] + "_" + y,     ## plots & plot names
      "CutFlow_bckg_" + selection_types[i] + "_" + y,                      ## canvas name
      plotFolder + "/20" + y + "_QCDv9/cutflow/",                          ## output folder
      xAxis_title, [], "Events", 1, True, lumiS[y],                        ## axes, rebin, logY, lumiS
      selection_colors[i], selection_colors[i])                            ## colors

















