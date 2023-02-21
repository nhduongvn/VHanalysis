## == IMPORT STATEMENTS ==========================================

import ROOT
import os,sys

ROOT.gROOT.SetBatch(True)

##################################################################
## MAIN CODE
##################################################################

f = ROOT.TFile.Open("../test.root", "READ")

#hN = f.Get("nGenJet")
#hN.SetLineColor(ROOT.kRed)
#hN.SetLineWidth(2)

hL = f.Get("nGenL")
hL.SetLineColor(ROOT.kRed)
hL.SetLineWidth(2)

hC = f.Get("nGenC")
hC.SetLineColor(ROOT.kGreen+2)
hC.SetLineWidth(2)

hB = f.Get("nGenB")
hB.SetLineColor(ROOT.kBlue)
hB.SetLineWidth(2)

hGlu = f.Get("nGenGlu")
hGlu.SetLineColor(ROOT.kMagenta + 2)
hGlu.SetLineWidth(2)

canvas = ROOT.TCanvas("", "")
canvas.cd()

hStack = ROOT.THStack("stack", "stack")
#hStack.Add(hN)
hStack.Add(hL)
hStack.Add(hC)
hStack.Add(hB)
hStack.Add(hGlu)

hStack.Draw("nohist,HIST")

canvas.BuildLegend()
canvas.Update()
canvas.Show()

canvas.Print("temp_plots/genJet_multiplicity.png")
