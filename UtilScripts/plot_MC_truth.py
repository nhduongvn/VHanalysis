## == IMPORT STATEMENTS =======================================================

import ROOT
import sys,os
import copy
import math
import ConfigParser
from math import *

from my_funcs import makeStackPlot

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

###############################
## These you can edit / change
###############################
years = ['16', '17', '18']
regions = ['tags', 'algo', 'both', 'alljet', 'seljet']
#regions = ['tags', 'algo', 'both']
#regions = ['jets', 'jets_all']
#regions = ['all']
plotCat = 'VbbHcc'
useLogY = False
summary_control_plot_name = 'summary_control_plot_zjet_zHFjet.txt'
plotFolder = '../full_results/'

## signal samples
ss_signal = ['ZH_HToCC_ZToQQ', 'ggZH_HToCC_ZToQQ']

## simplified background samples - QCD and ttbar
ss_bckg = [ 'QCD_HT100to200_v9', 'QCD_HT200to300_v9', 'QCD_HT300to500_v9','QCD_HT500to700_v9','QCD_HT700to1000_v9','QCD_HT1000to1500_v9','QCD_HT1500to2000_v9','QCD_HT2000toInf_v9', 'TTToHadronic', 'TTToSemiLeptonic', 'TTTo2L2Nu']

## combined list containing both signal & background samples
ss = ['ZH_HToCC_ZToQQ', 'ggZH_HToCC_ZToQQ', 'QCD_HT100to200_v9', 'QCD_HT200to300_v9', 'QCD_HT300to500_v9','QCD_HT500to700_v9','QCD_HT700to1000_v9','QCD_HT1000to1500_v9','QCD_HT1500to2000_v9','QCD_HT2000toInf_v9', 'TTToHadronic', 'TTToSemiLeptonic', 'TTTo2L2Nu']

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
    if s not in ['JetHT']:
      xSecTmps = cfg.get(s, 'xSec_'+y).split(',')
    
    fNames[s][y] = []
    xSecs[s][y] = []
    fHist[s][y] = []
    dirpath = '../new_condor_results/NONE/'
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


nums = {}

## Get the plots for each variable we're interested in.
variables = [ 'H_mass', 'H_dR', 'H_dR_Bj0', 'H_dR_Bj1', 
              'Z_mass', 'Z_dR', 'Z_dR_Bj0', 'Z_dR_Bj1', 'dR_HZ',
                  'H_pt', 'Z_pt', 'Aplanarity', 'Sphericity'] 

for plN in variables:
  
  var_name = "VbbHcc_MC_" + plN
  hZHcc   = getHist(var_name, ['ZH_HToCC_ZToQQ'],   fHist, lumiScales)
  hggZHcc = getHist(var_name, ['ggZH_HToCC_ZToQQ'], fHist, lumiScales)
  hQCD = getHist(var_name, ['QCD_HT100to200_v9','QCD_HT200to300_v9', 'QCD_HT300to500_v9','QCD_HT500to700_v9','QCD_HT700to1000_v9','QCD_HT1000to1500_v9','QCD_HT1500to2000_v9','QCD_HT2000toInf_v9'], fHist, lumiScales)
  hTT = getHist(var_name, ['TTToHadronic','TTToSemiLeptonic','TTTo2L2Nu'],fHist,lumiScales)
  
  #############################
  ## Stack plots for each year
  #############################
  for y in years:
    
    tmps = cfg.get(plN,'xAxisRange').split(',')
    xA_range = []
    if 'Pi' not in tmps[1]:
      xA_range = [float(tmps[0]), float(tmps[1])]
    else:
      xA_range = [0, ROOT.TMath.Pi()]
    xA_title = cfg.get(plN, 'xAxisTitle')
    nRebin = int(cfg.get(plN, 'rebin'))
    
    signal_plots = [
      hZHcc[y].Clone().Rebin(nRebin),
      hggZHcc[y].Clone().Rebin(nRebin)
    ]
    signal_names = [ "ZHcc", "ggZHcc" ]
    
    bckg_plots = [
       hQCD[y].Clone().Rebin(nRebin),
       hTT[y].Clone().Rebin(nRebin),
    ]
    bckg_names = [ "QCD", 't#bar{t}' ]

    makeStackPlot(signal_plots, signal_names, plN + '_' + y,
        plotFolder + '/20' + y + '_QCDv9' + '/MC_signal/', xA_title, xA_range, 'MC unc. (stat.)',
        False, logY=useLogY, lumi=lumiS[y], forceMin=True, modMaxX=False)
    
    makeStackPlot(bckg_plots, bckg_names, plN + '_' + y,
        plotFolder + '/20' + y + '_QCDv9' + '/MC_bckg/', xA_title, xA_range, 'MC unc. (stat.)',
        False, logY=useLogY, lumi=lumiS[y], forceMin=True, modMaxX=False)























