import sys, os
import ROOT
import ConfigParser
from math import *
from my_funcs import ScaleToLumi1, make2DplotWithProjections, makePlot

## Set this so we don't have issues with outputting so many plots
ROOT.gROOT.SetBatch(True)
ROOT.gStyle.SetOptStat(0)

## Get the proper file
_file = ROOT.TFile.Open("../condor_results/Oct2023_updated/NONE/JetHT_DATA_2018.root", "READ")

## Get the proper histograms & modify them
hist2D = _file.Get("VbbHcc_tagOnly_MH_v_MZ")


h_projX = hist2D.ProjectionX()
h_projX.GetXaxis().SetTitle("m_{H} [GeV]")
h_projX.GetYaxis().SetTitle("Events / 2.0 GeV")

## Make canvases to plot/save these
canvasName = "tagOnly_MH_v_MZ"
canvas = ROOT.TCanvas("", "", 600, 600)
canvas.cd()

hist2D.GetXaxis().SetTitle("m_{H} [GeV]")
hist2D.GetXaxis().SetRangeUser(0,300)
hist2D.GetYaxis().SetTitle("m_{Z} [GeV]")
hist2D.GetYaxis().SetRangeUser(0,300)
hist2D.RebinX(2)
hist2D.RebinY(2)
hist2D.Draw("colz")

plotDir = '../plot_results/Oct2023_updated/for_presentation'
dirExists = os.path.exists(plotDir)
if not dirExists:
  print "Warning: output directory does not exist."
  os.makedirs(plotDir)
  print ">>> directory created."

canvas.Print(plotDir + '/' + canvasName + '.png')
canvas.Print(plotDir + '/' + canvasName + '.pdf')
canvas.Print(plotDir + '/' + canvasName + '.C')
