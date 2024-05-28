import ROOT
import sys,os
from my_funcs import makeOverlapPlot

## == Settings ================================================================
outputDir  = '../plot_results/2024May/'
resultpath = '../condor_results/2024May/NONE/'

years = ['16', '17', '18']
variables = [ "H_mass", "Z_mass"]
xAxisTitles = [ "m_{cc} [GeV]", "m_{bb} [GeV]" ]
xAxisRanges = [[0,400],[0,400]]


regions = [ "tagOnly", "tagFirst", "DHZfirst" ]
regionNames = [ "Tagging Only", "Tagging Prioritized", "Mass Prioritized"]

colors = [ ROOT.kBlack, ROOT.kRed, ROOT.kBlue ]

## == Main Code ===============================================================

## Retrieve the file of interest
print("Pulling file from ", resultpath)
f = ROOT.TFile.Open(resultpath + "/ZH_HToCC_ZToQQ_MC_2018.root", "READ")

## Go through each year and variable
print("Going through each variable...")
for j in range(len(variables)): #v in variables:
  
  v = variables[j]
  
  plots = []
  for i in range(len(regions)):
    
    r = regions[i]
    hN = "VH_" + r + "_" + v
    plot = f.Get(hN)
    plots.append(plot)
  
  makeOverlapPlot(plots, regionNames, 
    "overlap_" + v, outputDir + "/MC_signal/", 
    xAxisTitles[j], [0,400], "Events/10 GeV", 10, False, "--", stack=False, 
    normalize=False, fill=False, custom_colors=colors, left=False)
  
  
