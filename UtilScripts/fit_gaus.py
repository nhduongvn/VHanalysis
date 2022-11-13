## == IMPORT STATEMENTS =======================================================

import ROOT
import os,sys

## == USEFUL METHODS ==========================================================

###############################################################################
## Main Code                                                                 ##
###############################################################################

filepath = "../newest_condor_results/NONE/ZH_HToCC_ZToQQ_MC_2018.root"
plot = "VbbHcc_MCjet_H_mass"

# Pull the histogram from the file
f = ROOT.TFile.Open(filepath)
hist = f.Get(plot).Clone()

# Fit it with a gaussian
hist.Fit("gaus")

# Draw it
hist.Draw("hist")
