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
years = ['18']
regions = ['tagFirst']
useLogY = False
outputDir = '../plot_results/forRupul/'
filepath = '../plots_for_Rupul.root'
plotCats = ['VbbHcc_plot', 'VbbHcc_jet_plot']

#regions = ['']
#plotCat = 'Weight_plot'

debug = True

################################
## Do not edit below this point
################################

## Load the config
if debug: print ">>> Loading config file..."
config_file = '../Configs/config.ini'
cfg = ConfigParser.ConfigParser()
cfg.read(config_file)

f = ROOT.TFile.Open(filepath, 'READ')

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
      if r != '': hN = 'VH_' + r + '_' + plN
      else: hN = plN
      
      tmps = cfg.get(plN, 'xAxisRange').split(',')
      xA_range = []
      if 'Pi' not in tmps[1]:
        xA_range = [float(tmps[0]), float(tmps[1])]
      else:
        xA_range = [0, ROOT.TMath.Pi()]
      
      xA_title = cfg.get(plN, 'xAxisTitle')
      nRebin = int(cfg.get(plN, 'rebin'))
      
      plot = f.Get(hN)
      print "hist = ", hN 
      #print(xA_range)
      
      makePlot(plot, hN, plN, outputDir, 
        xA_title, [], "Events/" + str(nRebin) + " GeV",
        nRebin, False, "lumi", ROOT.kBlack, ROOT.kBlue, 
        fill=True)
    
    


