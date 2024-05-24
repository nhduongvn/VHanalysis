###############################################################################
## h2proj.py - This is a test of getting a 2D plot and its projections.
###############################################################################

## == Import Statements =======================================================

import ROOT
import random

## == Main Code ===============================================================

fillRandom = False

## Produce the canvas & pads we're interested in
print "Creating the main canvas..."
c1 = ROOT.TCanvas("c1", "c1", 900, 900)
ROOT.gStyle.SetOptStat(0)

print "Creating the center pad..."
center_pad = ROOT.TPad("center_pad", "center_pad", 0.0, 0.0, 0.6, 0.6)
center_pad.Draw()

print "Creating the right pad..."
right_pad = ROOT.TPad("right_pad", "right_pad", 0.55, 0.0, 1.0, 0.6)
right_pad.Draw()

print "Creating the top pad..."
top_pad = ROOT.TPad("top_pad", "top_pad", 0.0, 0.55, 0.6, 1.0)
top_pad.Draw()

## Create a 2D plot and fill it randomly
print "Creating 2D plot and filling it randomly..."
if fillRandom:
  h2 = ROOT.TH2F("h2", "", 40, -4, 4, 40, -20, 20)
  for i in range(0,25000):
    px = random.gauss(0.0, 2.0)
    py = random.gauss(0.0, 10.0)
    h2.Fill(px, py)
else:
  f = ROOT.TFile.Open("../condor_results/Aug2023_addedTagSF/NONE/ZH_HToCC_ZToQQ_MC_2018.root")
  h2 = f.Get("VbbHcc_both_MH_v_MZ")

print ">>> retrieving the axis projections..."
projh2X = h2.ProjectionX()
projh2Y = h2.ProjectionY()

## Draw the 2D plot in the center pad
print "Drawing the plots to the proper pads..."
print ">>> h2 to center pad..."
center_pad.cd()
ROOT.gStyle.SetPalette(1)
h2.Draw("COL")

## Draw the X-projection on the top pad
print ">>> X-projection to top pad..."
top_pad.cd()
projh2X.SetFillColor(ROOT.kBlue+1)
projh2X.Draw("bar")

## Draw the Y-projection on the right pad
print ">>> Y-projection to right pad..."
right_pad.cd()
projh2Y.SetFillColor(ROOT.kBlue-2)
projh2Y.Draw("hbar")

## Print out the canvas
c1.Print("tests/h2proj.png")

## == END OF FILE =============================================================
