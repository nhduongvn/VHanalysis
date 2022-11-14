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
plots = ["VbbHcc_MCjet_H_mass", "VbbHcc_MCjet_Z_mass"]
xAxis = [ "m(H) [GeV]", "m(Z) [GeV]" ]
rLow = [100, 70]
rHigh = [150, 110]

# Pull the histogram from the file
for i in range(len(plots)):

  plot = plots[i]
  f = ROOT.TFile.Open(filepath)
  hist = f.Get(plot).Clone()
  f2 = ROOT.TFile.Open(filepath2)
  hist2 = f2.Get(plot).Clone()
  hist.Add(hist2)
  hist.Rebin(2)
  hist.GetXaxis().SetTitle(xAxis[i])
  hist.GetYaxis().SetTitle("Events / 2 GeV")

  # Draw it & fit it
  c = ROOT.TCanvas(plot, plot)
  hist.Draw("hist")

  fit1 = ROOT.TF1("f1", "gaus", rLow[i], rHigh[i])
  hist.Fit("f1", "R")
  fit1.Draw("same")

  # pull the statistics 
  ndf = fit1.GetNDF()
  chi2 = fit1.GetChisquare() / ndf
  p0 = fit1.GetParameter(0)
  p1 = fit1.GetParameter(1)
  p2 = fit1.GetParameter(2)

  legend = ROOT.TLegend(0.6,0.7,0.9,0.9)
  legend.AddEntry(hist, "MC jets", "l")
  legend.AddEntry(fit1, "Gaussian fit", "l")
  legend.AddEntry(0, "#chi^{2}/ndf = " + str(chi2), "")
  legend.AddEntry(0, "constant = " + str(p0), "")
  legend.AddEntry(0, "mean = " + str(p1), "")
  legend.AddEntry(0, "sigam = " + str(p2), "")
  legend.Draw()

  # Update & output everything
  c.Update()
  c.Print(outputdir + "FIT_" + plot + ".png")
