## == IMPORT STATEMENTS =======================================================

import ROOT
import os,sys

## == USEFUL METHODS ==========================================================

###############################################################################
## Main Code                                                                 ##
###############################################################################

ROOT.gStyle.SetOptStat(0)

filepath = "../new_condor_results/NONE/ZH_HToCC_ZToQQ_MC_2018.root"
filepath2 = "../new_condor_results/NONE/ggZH_HToCC_ZToQQ_MC_2018.root"

outputdir = "../produced_plots/mediumWP/fits/"
plots = ["nCombos"]
rLow = [25, 16]
rHigh = [200, 166]

# Pull the histogram from the file
for i in range(len(plots)):

  plot = plots[i]
  f = ROOT.TFile.Open(filepath)
  hist = f.Get(plot).Clone()
  f2 = ROOT.TFile.Open(filepath2)
  hist2 = f2.Get(plot).Clone()
  hist.Add(hist2)
  
  combo1 = hist.GetBinContent(2)
  combo2 = hist.GetBinContent(3)
  misID_rate = combo2 / (combo1 + combo2)
  
  print "misidentification rate = ", misID_rate

