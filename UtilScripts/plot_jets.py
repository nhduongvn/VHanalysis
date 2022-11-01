#== IMPORT STATEMENTS =========================================================
import ROOT
import os,sys

###############################################################################
## Main Code
###############################################################################

path_to_file = "../test.root"
output_dir = "../mult_plots/"

plots = [ 
  "nJet", "nBjet_loose", "nCjet_loose", "nBjet_medium", "nCjet_medium",
  "bScore", "cScore"
]

xAxisTitles = [
  "n_{jets}", "n_{bjets} (loose)", "n_{cjets} (loose)", 
  "n_{bjets} (medium)", "n_{cjets} (medium)", "b-tag score",
  "c-tag score"
]

yAxisTitles = [
  "Events", "Events", "Events", "Events", "Events",
  "Events / 0.05", "Events / 0.05"
]

## Make sure the output directory exists
outExists = os.path.exists(output_dir)
if not outExists:
  print "Warning: output directory", output_dir, " does not exist."
  os.makedirs(output_dir)
  print ">>> Directory created."

## Get the file that we want to use
ROOT.gStyle.SetOptStat(0)
f = ROOT.TFile.Open(path_to_file)

## Go through each interested plot
for i in range(len(plots)):

  for region in ["", "all"]:
    
    ## Get the plot from the file
    extra_bit = ""
    if region != "": extra_bit = "_" + region
    plot_name = "VbbHcc_" + plots[i] + extra_bit
    plot = f.Get(plot_name)

    c = ROOT.TCanvas(plot_name, plot_name)
    plot.GetXaxis().SetTitle(xAxisTitles[i])
    plot.GetYaxis().SetTitle(yAxisTitles[i])
    plot.Draw("hist")

    fullpath = output_dir + plots[i] + extra_bit
    c.Print(fullpath + '.png')
    c.Print(fullpath + '.pdf')

