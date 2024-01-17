## ============================================================================
## plot_2017.py - This macro is used to check plots related to the different
##                run eras of 2017 to see if there's an issue with a particular
##                one.
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

## == USEFUL METHODS ==========================================================

## == MAIN CODE ===============================================================

## Get the file for each bit
input_directory = "../condor_results/Oct2023_updated/NONE/"
output_directory = "../plot_results/Oct2023_updated/"
file_name_prefix = 'BTagCSV_DATA_2017'

files = []
file_names = []
for suffix in ['B','C','D','E','F']:
  
  file_name = file_name_prefix + suffix
  file_names.append(file_name)
  file_path = input_directory + file_name + '.root'
  print "Pulling file: ", file_name
  files.append(ROOT.TFile.Open(file_path, "READ"))
  print ">>> File retrieved."

## Get the histograms we desire for each era
selections = ["tagOnly", "tagFirst", "algoFirst"]
variables = ["Z_mass", "H_mass"]
xAxes = { "Z_mass": "m_{Z} [GeV]", "H_mass": "m_{H} [GeV]" }
yAxes = { "Z_mass": "Events/10 GeV", "H_mass": "Events/10 GeV"}

for i in range(len(file_names)):
  
  print "Checking era ", file_names[i]
  file_name = file_names[i]
  iFile = files[i]
  
  for sel in selections:
    
    print "\n\n==============================================="
    print "Checking for selection method: ", sel
    print "==============================================="
  
    for var in variables:
      
      print "\nChecking histogram for ", var, "..."
      hName = "VbbHcc_" + sel + "_" + var 
      print ">>> histogram name: ", hName
    
      hist =  iFile.Get(hName)
      
      canvas_name = hName
      output_path = output_directory + "/" + file_name
      makePlot(hist, hName, canvas_name, output_path,
        xAxes[var], [], yAxes[var], 10, False, '',
        ROOT.kBlack, ROOT.kBlack)
      
        
      
  
  
