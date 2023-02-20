## == IMPORT STATEMENTS =======================================================
import ROOT
import sys,os
import copy
import ConfigParser
import math

from my_funcs import makeStackPlot

ROOT.gROOT.SetBatch(True)

## == USEFUL METHODS ==========================================================

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
## INPUT VARIABLES (Editable)
###############################################################################

## The following are variables that you are allowed to change.
years = ['16', '17', '18']

filepath = '../new_condor_results/NONE/'
plotFolder = '../full_results/'
useLogY = True

## List with just Signal Samples
ss = ['ZH_HToCC_ZToQQ', 'ggZH_HToCC_ZToQQ']

## List with just Background Samples
ss = [ 'QCD_HT100to200_v9', 'QCD_HT200to300_v9', 'QCD_HT300to500_v9','QCD_HT500to700_v9','QCD_HT700to1000_v9','QCD_HT1000to1500_v9','QCD_HT1500to2000_v9','QCD_HT2000toInf_v9', 'TTToHadronic', 'TTToSemiLeptonic', 'TTTo2L2Nu']

sample_type = 'signal'
sample_type = 'bckg'

line_colors = [ROOT.kGreen + 2, ROOT.kBlue, ROOT.kRed]

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


## Go through each variable of interest
varList = ['s','0','1','2','3']
varNames = ['all', 'leading', 'subleading', 'subsubleading', 'subsubsubleading']
xAxes = ['p_{T} (all jets) [GeV]', 'p_{T} (leading jets) [GeV]',
  'p_{T} (subleading jets) [GeV]', 'p_{T} (subsubleading jets) [GeV]',
  'p_{T} (sub^{3}leading jets) [GeV]']
canvNames = ['all', 'lead', 'sub', 'sub2', 'sub3']

for i in range(len(varList)):
  
  ## Get the appropriate 
  variable = varList[i]
  varName = varNames[i]
  canvName = canvNames[i]
  
  ## We need to get the appropriate plot for light jets, b-jets, and c-jets
  hName_l = 'VbbHcc_jets_pt_ljet' + variable
  hName_b = 'VbbHcc_jets_pt_bjet' + variable
  hName_c = 'VbbHcc_jets_pt_cjet' + variable
  
  hL = getHist(hName_l, ss, fHist, lumiScales)
  hB = getHist(hName_b, ss, fHist, lumiScales)
  hC = getHist(hName_c, ss, fHist, lumiScales)
  
  #############################
  ## Stack plots for each year
  #############################
  
  cfgN = 'pt_ljet' + variable
  
  for y in years:
    tmps = cfg.get(cfgN, 'xAxisRange').split(',')
    xA_range = []
    if 'Pi' not in tmps[1]:
      xA_range = [float(tmps[0]), float(tmps[1])]
    else:
      xA_range = [0, ROOT.TMath.Pi()]
    #xA_title = cfg.get(hName_l, 'xAxisTitle')
    xA_title = xAxes[i]
    nRebin = int(cfg.get(cfgN, 'rebin'))
    
    plots_process = [
      hL[y].Clone().Rebin(nRebin),
      hB[y].Clone().Rebin(nRebin),
      hC[y].Clone().Rebin(nRebin)
    ]
      
    plotNames_process = [
      "l-jets", "b-jets", "c-jets"
    ]
    
    output_dir = plotFolder + '/20' + y + '_QCDv9' + '/' + sample_type + '/jets/'
    yA_title = 'Events/' + str(plots_process[0].GetBinWidth(1)) + 'GeV'
    
    logY = useLogY
    canvasName = 'overlap_pt_jets_' + canvName
    makeStackPlot(plots_process, plotNames_process, canvasName,
      output_dir, xA_title, xA_range, logY=logY,lumi=lumiS[y],
      custom_colors=line_colors, useStack=False, useFill=False,
      minY_forLog = 0.01, forceMin=True)
  
  continue
  ###################################
  ## Plot control plot for all years
  ###################################
  hLA = hL['16'].Clone(hL['16'].GetName() + '_all')
  hBA = hB['16'].Clone(hB['16'].GetName() + '_all')
  hCA = hC['16'].Clone(hC['16'].GetName() + '_all')
  
  for y in ['17','18']:
    hLA.Add(hL[y])
    hBA.Add(hB[y])
    hCA.Add(hC[y])
  
  plots_process = [
      hLA[y].Clone().Rebin(nRebin),
      hBA[y].Clone().Rebin(nRebin),
      hCA[y].Clone().Rebin(nRebin)
  ]

  plotNames_process = [
      "l-jets", "b-jets", "c-jets"
  ]
  
  output_dir = plotFolder + '/All_QCDv9/' + sample_type + '/jets/'
  yA_title = 'Events/' + str(plots_process[0].GetBinWidth(1)) + 'GeV'
    
  logY = useLogY
  canvasName = 'overlap_pt_jets_' + canvName
  makeStackPlot(plots_process, plotNames_process, canvasName,
    output_dir, xA_title, xA_range, logY=logY,lumi=lumiS[y],
    custom_colors=line_colors, useStack=False, useFill=False,
    minY_forLog = 0.1)




