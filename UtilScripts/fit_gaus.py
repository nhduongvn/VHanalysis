## == IMPORT STATEMENTS =======================================================

import ROOT
import os,sys

## == USEFUL METHODS ==========================================================

###############################################################################
## Main Code                                                                 ##
###############################################################################

ROOT.gStyle.SetOptStat(0)

filepath = "../new_condor_results/NONE/ZH_HToCC_ZToQQ_MC_2018.root"
outputdir = "../produced_plots/mediumWP/COMBINED/2018/"
plot = "VbbHcc_MCjet_H_mass"

# Pull the histogram from the file
f = ROOT.TFile.Open(filepath)
hist = f.Get(plot).Clone()
hist.Rebin(2)
hist.GetXaxis().SetTitle("m(H) [GeV]")
hist.GetYaxis().SetTitle("Events / 2 GeV")

# Draw it & fit it
c = ROOT.TCanvas(plot, plot)
hist.Draw("hist")

fit1 = ROOT.TF1("f1", "gaus", 0, 400)
hist.Fit("f1", "R")
fit1.Draw("same")

# Update & output everything
c.Update()
ROOT.gBenchmark.Show("gaus")

c.Print(outputdir + "FIT_" + plot + ".png")
