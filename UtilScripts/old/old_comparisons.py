## == IMPORT STATEMENTS =======================================================
import ROOT
import sys,os
import copy
import json
import math
from my_funcs import makeOverlapPlot

ROOT.gROOT.SetBatch(True)

## == USEFUL METHODS ==========================================================

def ScaleToLumi1(fName, xSec, lumi):
  f = ROOT.TFile.Open(fName, "READ")
  hTmp = f.Get("Nevt")
  nP = hTmp.GetBinContent(3)
  nN = hTmp.GetBinContent(1)
  return lumi*xSec/(nP-nN)


def getHist(pN, samList, fList, lS, selType):
  hOut = {}
  plotName = "VbbHcc" + "_" + selType + "_" + pN
  #if selType != "MC":
  #plotName = plotName + "_" + selType
  #plotName = plotName + "_" + pN
  for y in years:
    
    ## Get the appropriate file
    #plotName = "VbbHcc_MC_Z_mass"
    #print( "====================================================")
    #print( fList[samList[0]][y])
    #print( pN)
    #print( fList[samList[0]][y].Get(pN))
    hOut[y] = fList[samList[0]][y].Get(plotName).Clone() ## first sample
    #hOut[y].Scale(lS[samList[0]][y])
    
    ## Add any other possible desired samples to the plot
    for iS in range(len(samList)):
      if iS == 0: continue ## first sample already covered
      
      h = fList[samList[iS]][y].Get(plotName).Clone()
      #h.Scale(lS[samList[iS]][y])
      hOut[y].Add(h)
    
  return hOut


debug = False

## Load the json from file
f = open("configs.json")
configs_unicode = json.load(f)
configs = eval(json.dumps(configs_unicode))

if debug:
  print( "Loading json file...")
  for i in configs:
    print( i)
    print( ">>>", configs[i])

lumi = configs["lumi"]

###############################################################################
## Main Code
###############################################################################


## Variables we can change
years = ["16", "17", "18"]

filepath = "../newest_condor_results/NONE/"
plotFolder = "../produced_plots"

samples = ["ZH_HToCC_ZToQQ", "ggZH_HToCC_ZToQQ"]
fill_hist = True

## == DO NOT CHANGE FROM HERE ON ==
subfolder = ""
if len(samples) > 1:
  subfolder = "COMBINED/"
else:
  subfolder = samples[0] + "/"
## ================================

print( "=====================================")
print( "MC Comparison of Selection Methods")
print( "=====================================")

## Check to make sure the files are 
## where we expect them to be.
filepath_exists = os.path.exists(filepath)
if not filepath_exists:
  print( "ERROR: Filepath", filepath, "does NOT exist. Terminating macro.")
  exit()


## Check to make sure the output does exist.
## If not, create the proper directory.
plotfolder_exists = os.path.exists(plotFolder)
if not plotfolder_exists:
  print( "WARNING:", plotFolder, "directory does NOT exist.")
  os.makedirs(plotFolder)
  print( ">>> directory created.")

## Get the proper files & scales that we want.
files = {}
lumiScales = {}
for s in samples:
  files[s] = {}
  lumiScales[s] = {}
  for y in years:
    fName = configs["samples"][s]["file_" + y]
    #print( filepath + fName)
    files[s][y] = ROOT.TFile.Open(filepath + fName, "READ")
    xSec = configs["samples"][s]["xSec_" + y]
    scale = ScaleToLumi1(filepath + fName, xSec, lumi[y])
    lumiScales[s][y] = scale

############################################
## Go through each plot we"re interested in.
############################################
plot_names = configs["variables"].keys()

for plN in plot_names:

  print( "plot:", plN)
  variable_info = configs["variables"][plN]
  #plN = "Z_mass"
  ## Get the apporpriate histograms that we want.
  if variable_info["has_MC_truth"]:
    hMC = getHist(plN, samples, files, lumiScales, "MC")
    print( "MC printed.")
  hTags = getHist(plN, samples, files, lumiScales, "tags")
  print( "Tags printed.")
  hAlgo = getHist(plN, samples, files, lumiScales, "algo")
  print( "Algo printed.")
  hBoth = getHist(plN, samples, files, lumiScales, "duong")
  print( "Both printed.")

  #################################
  ## Stack the plots for each year.
  #################################
  for y in years:
  
    plot_process = [hTags[y].Clone(), hAlgo[y].Clone(), hBoth[y].Clone()]
    plotNames_process = ["Tagging Only", "D_{HZ} Prioritized", "Tagging Prioritized"]
    
    ## Properly stack the plots
    xAxis_title = variable_info["x_label"]
    yAxis_title = variable_info["y_label"]
    xAxis_range = variable_info["range"]
    rebin = variable_info["rebin"]
    
    for logY in [True, False]:
    
      ## Get the proper output directory
      output_dir = plotFolder + subfolder + "/20" + y + "/"
    
      ## Make the overlay version
      makeOverlapPlot(plot_process, plotNames_process, plN + "_" + y,
        output_dir, xAxis_title, xAxis_range, yAxis_title, rebin, logY, lumi[y])

      ## If we have a MC truth plot, plot it.
      if variable_info["has_MC_truth"]:
        makeOverlapPlot([hMC[y].Clone()], ["MC Truth"], plN + "_MCTruth_" + y,
          output_dir, xAxis_title, xAxis_range, yAxis_title, rebin, logY, lumi[y])


