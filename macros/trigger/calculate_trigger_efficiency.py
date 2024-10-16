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
#years = ['16', '18']
#years = ['18']

## Regions to go through
regions = [ "_4b", "_3b", "_2b2c" ]
region_name = {
  "_4b": "Tagging: 4 b-jets",
  "_3b": "Tagging: at least 3 b-jets",
  "_2b2c": "Tagging: 2 b-jets, 2 c-jets"
}

useLogY = False

## Input & Output
#resultpath = '../condor_results/trigger_efficiency_NEWEST/' ## Single Muon (2016,18)
resultpath = '../condor_results/Nov2023_updated/' ## Single Muon (2017) + MC
plotFolder = '../plot_results/trigger_results_Nov2023/'

#plotFolder = '../plot_results/trig_eff_better/'                ## SingleMuon
#resultpath = '../condor_results/trigger_efficiency_NEWEST/'    ## SingleMuon
#plotFolder = '../plot_results/trig_eff_2017fix/'
#resultpath = '../condor_results/trigger_efficiency_2017fix/'
#plotFolder = '../plot_results/trig_eff_ZH/'                    ## ZH
#resultpath = '../condor_results/trigger_efficiency_ZH/'        ## ZH
#plotFolder = '../plot_results/trig_eff_aug2023/'
#resultpath = '../condor_results/updatedResults_july2023_w_Weight/'

## Samples
ss = [ "SingleMuon" ]  ## SingleMuon
#ss = [ "TTTo2L2Nu", "TTToHadronic", "TTToSemiLeptonic"]
#ss = [ ""]
#ss = [ "ZH_HToCC_ZToQQ"]#, "ggZH_HToCC_ZToQQ" ]
sampleName = "SingleMuon DATA"
#sampleName = "ttbar MC"
#sampleName = "ZH HToCC ZToQQ MC"

## Triggers we're interested in
categories = {
  '16': ["trigger_2016_QuadJet", "trigger_2016_DoubleJet"],
  '17': ["trigger_2017_QuadJet", "trigger_2017B_QuadJet"],
  '18': ["trigger_2018_QuadJet"],
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

HT_binning = [0, 100]
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
        outputdir = plotFolder + '/20' + y + '/' + regionName + '/' + sampleName
        
        print "canvas_name = ", canvas_name
        print "outputdir   = ", outputdir
        
        makeEfficiencyPlot(plots, "", canvas_name,
          outputdir, xA_title, xA_range, "Efficiency",
          triggers[i], y, region_name[r], sampleName)

        ## We want to record the appropriate efficiencies into a text file
        ## Go through bin by bin and store the values
        
        bin_str = "bins: "
        ## For each bin...
        for i in range(0, len(bins)):
          
          ## Add the bin value to a string for output
          bin_str += str(bins[i])
          if i < len(bins)-1:
            bin_str += ", "
        
        eff_str = "\neff: "
        ## For each of the n bins...
        for i in range(1, nBins+1):
          
          ## Calculate the efficiency for this bin
          trig_content = plots[0].GetBinConteSnt(i)
          ref_content = plots[1].GetBinContent(i)
          print (">>>>>>>> ", trig_content, "/", ref_content)
          if ref_content <= 0.0:
            iEff = 1.0
          else: 
            iEff = 1.0 * trig_content / ref_content
          eff_str += str(iEff)
          if i < nBins: eff_str += ", "
        
        ## Output the strings to text
        output_file = outputdir + '/efficiency_per_bin.txt'
        print ">>> Printing out the efficiencies to ", output_file
        with open(output_file, 'w') as f:
          f.writelines([bin_str, eff_str])
          
          
