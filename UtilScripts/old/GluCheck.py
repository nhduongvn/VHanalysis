## == IMPORT STATEMENTS =======================================================

import ROOT
import os,sys
from my_funcs import *

ROOT.gROOT.SetBatch(True)

###############################################################################
## MAIN CODE                                                                  #
###############################################################################

## Get the proper file
f = ROOT.TFile.Open("../test.root")

## Get the proper histograms
h_mistag_lead = f.Get("mistag_leading")
h_mistag_all  = f.Get("mistag_all")

regions = [ "algo", "both", "tags" ]

h_MZ_v_flav = {}
h_dR_v_flav = {}

for r in regions:
  
  path = "VbbHcc_" + r
  h_MZ_v_flav[r] = f.Get(path + "_MZ_v_flav")
  h_dR_v_flav[r] = f.Get(path + "_dR_v_flav")

## Do the analyses
rate_lead = 1.0*h_mistag_lead.GetBinContent(2) / h_mistag_lead.GetBinContent(1)
rate_all = 1.0*h_mistag_all.GetBinContent(2) / h_mistag_all.GetBinContent(1)

print "mistag rate (leading l-jet) = ", rate_lead
print "mistag rate (all l-jets)    = ", rate_all

for r in regions:
  
  path = "../full_results/GluCheck/"
  makePlot(h_MZ_v_flav[r], "MZ_v_flav_" + r, "MZ_v_flav_" + r, path + "MZ_v_flav_" + r,
    "m_{bb} [GeV]", [], "Hadron Flavor", 1, False, 0, ROOT.kBlack, ROOT.kBlack, is2D = True)

  makePlot(h_dR_v_flav[r], "dR_v_flav_" + r, "dR_v_flav_" + r, path + "dR_v_flav_" + r,
    "dR(b,b)", [], "Hadron Flavor", 1, False, 0, ROOT.kBlack, ROOT.kBlack, is2D = True)  
