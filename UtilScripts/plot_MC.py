## ============================================================================
## plot_dataMC.py - This macro is used to plot the various samples and compare
##                  them with the data we're using.
## ============================================================================

## == IMPORT STATEMENTS =======================================================

import ROOT
import sys,os
import copy
import math
import ConfigParser
from math import *
from my_funcs import makeDataMCPlot, makePlot, blind_region

ROOT.gROOT.SetBatch(True)

## == Useful Methods ==========================================================

## Scale a histogram to the proper luminosity
def scaleToLumi1(fName, xSec, lumi):
  f = ROOT.TFile.Open(fName, 'read')  ## Read the file
  hTmp = f.Get('Nevt')                ## Get the histogram
  nP = hTmp.GetBinContent(3)          ## Calculate the scale
  nN = hTmp.GetBinContent(1)
  return lumi*xSec/(nP-nN)            ## Return it


## Get the histograms for a given sample and variable
def getHist(plotName, sample_names, hist_files, lumiScales):
  
  hOut = {}
  
  ## Go through each year we're interested in.
  for y in years:
    
    ## Get the first sample & the appropriate histogram
    print sample_names[0], plotName, y
    hOut[y] = hist_files[sample_names[0]][y][0].Get(plotName).Clone()
    if sample_names[0] not in ['JetHT', 'BTagCSV', 'Data']:
      hOut[y].Scale(lumiScales[sample_names[0]][y][0])

    ## Add the other samples
    for iS in range(len(sample_names)):
      for fi in range(len(hist_files[sample_names[iS]][y])):
        
        ## Skip the first sample (already done)
        if iS == 0 and fi == 0: continue
                
        h = hist_files[sample_names[iS]][y][fi].Get(plotName).Clone()
        if sample_names[iS] not in ['JetHT', 'BTagCSV', 'Data']:
          h.Scale(lumiScales[sample_names[iS]][y][fi])
        hOut[y].Add(h)
  
  return hOut

## == Main Code ===============================================================

print "Pulling settings and preferences..."

## Edit / change the following options as needed:
years = ['16','17','18']
regions = ['tagFirst', 'tagOnly', 'DHZfirst']
#regions = ['MCjet_ideal']
useLogY = False
outputDir = '../plot_results/2024Apr/MCsignal/'
dirpath = '../condor_results/2024Apr/NONE/'
#dirpath = '../'
plotCats = ['VbbHcc_plot', 'VbbHcc_jet_plot']
regionSpecific = [ True, False ]

debug = True

## Normal List of Samples 
ss = [ 'ZH_HToCC_ZToQQ' ]

################################
## Do not edit below this point
################################

## Load the config
if debug: print ">>> Loading config file..."
config_file = '../Configs/config.ini'
cfg = ConfigParser.ConfigParser()
cfg.read(config_file)

## Get the lumi scales
if debug: print ">>> Loading lumi scales..."
lumiS = {}
for y in years:
  lumiTmp = float(cfg.get('General','lumi_'+y))/1000.0
  lumiTmp = float("%.1f" % lumiTmp)
  lumiS[y] = str(lumiTmp)
print "lumi scales = ", lumiS

## Retrieve necessary information from the desired samples
print ">>> Retrieving file information..."
fileNames = {}
xSecs = {}
lumiScales = {}
histFiles = {}

for s in ss:
  
  fileNames[s] = {}
  xSecs[s] = {}
  lumiScales[s] = {}
  histFiles[s] = {}
  
  for y in years:
    
    lumi = float(cfg.get('General','lumi_'+y))
    names = cfg.get(s,'file_'+y).split(',')
    print '>>>>>>>>>: ', len(names)
    xSecTmps = ['1']*len(names)
    kfactor = ['1']*len(names)
    if s not in ['JetHT','BTagCSV', 'Data']:
      xSecTmps = cfg.get(s, 'xSec_'+y).split(',')
    
    fileNames[s][y] = []
    xSecs[s][y] = []
    histFiles[s][y] = []
    
    for iN in names:
      fileNames[s][y].append(dirpath + '/' + iN)
      histFiles[s][y].append(ROOT.TFile.Open(fileNames[s][y][-1],'READ'))
    
    print xSecTmps
    for iS in xSecTmps:
      if '*' in iS: iS = iS.split('*')
      if len(iS) == 2:
        xSecs[s][y].append(float(iS[0])*float(iS[1]))
      else:
        xSecs[s][y].append(float(iS))
    
    lumiScales[s][y] = [1]*len(names)
    for iN in range(len(fileNames[s][y])):
      if s not in ['JetHT','BTagCSV', 'Data']:
        print s, y, iN, fileNames[s][y][iN]
        lumiScales[s][y][iN] = scaleToLumi1(fileNames[s][y][iN], xSecs[s][y][iN], lumi)

nums = {}
print "All files retrieved..."

## Go through each plot category of interest
for i in range(len(plotCats)):
  
  plotCat = plotCats[i]

  print "\nChecking plotCat = ", plotCat
  
  ## Go through each region of interest
  for r in regions:
    
    print ">>> Checking region r = ", r
    plotNames = cfg.get('Plots', plotCat).split(',')
    
    for plN in plotNames:
      
      plN = plN.strip(' ')
      print ">>>>>> Checking plot plN = ", plN
      if r != '' or regionSpecific[i]: hN = 'VH_' + r + '_' + plN
      else: hN = plN
      if not regionSpecific[i]: hN = "Jets_cut_" + plN
      
      plots = getHist(hN, ['ZH_HToCC_ZToQQ'], histFiles, lumiScales)
      
      for y in years:
      
        plot = plots[y]
        
        tmps = cfg.get(plN, 'xAxisRange').split(',')
        xA_range = []
        if 'Pi' not in tmps[1]:
          xA_range = [float(tmps[0]), float(tmps[1])]
        else:
          xA_range = [0, ROOT.TMath.Pi()]
        
        xA_title = cfg.get(plN, 'xAxisTitle')
        nRebin = int(cfg.get(plN, 'rebin'))
        
        print "hist = ", hN 
        #print(xA_range)
      
        logY = False
        if "pT" in plN or "pt" in plN:
          logY = True
      
        makePlot(plot.Clone().Rebin(nRebin), hN, plN + "_" + r + "_" + y,
          outputDir + "/20" + y + "/" + r, xA_title, xA_range, logY, lumi=lumiS[y])
      #makePlot(plot, hN, plN, outputDir, 
      #  xA_title, [], "Events/" + str(nRebin) + " GeV",
      #  nRebin, logY, "--", ROOT.kBlack, ROOT.kBlue, 
      # fill=True)
    
    


