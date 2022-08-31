###############################################################################
## generate_plots.py - This takes the plots we want and converts them into    #
##                     nice formats for presentation & display.               #
##                                                                            #
## created 08/30/2022 - peteryou                                              #
##                                                                            #
###############################################################################

import ROOT

## == Global Variables ========================================================

lumi = { 16: 35862, 17 : 41529, 18 : 59710 } 

plots = [ "HMass", "dR_H", "dPhi_H", "H_pt_jet0", "H_eta_jet0", "H_phi_jet0", 
"H_pt_jet1", "H_eta_jet1", "H_phi_jet1", "H_pt_jet2", "H_eta_jet2", 
"H_phi_jet2", "ZMass", "dR_Z", "dPhi_Z", "Z_pt_jet0", "Z_eta_jet0", 
"Z_phi_jet0", "Z_pt_jet1", "Z_eta_jet1", "Z_phi_jet1", "Z_pt_jet2", 
"Z_eta_jet2", "Z_phi_jet2", "pt_jet", "eta_jet", "phi_jet", "mSV_jet", "Njet"]

x_axis = {
 "HMass": "m_{c#bar{c}}", "dR_H": "#Delta R_{c#bar{c}}",
 "dPhi_H": "#Delta#phi_H", "H_pt_jet0": "p_{T,j0}^{H}",
 "H_eta_jet0": "#eta_{j0}^{H}", "H_phi_jet0": "#phi_{j0}^{H}",
}

gen_plots = ["Higgs_mass", "Higgs_pt", "Higgs_phi", "Z_mass", "Z_pt", "Z_phi",
"cjet_phi", "bjet_phi", "ljet_phi", "HZ_dPhi", "HZ_dR", "Hc_dR", "Zb_dR", 
"cc_dR", "bb_dR"]

## == Files of Interest =======================================================

debug = False
fileloc = "../results/"
samples = ["ZH", "ggZH"]
xSec = {
 "ZH": { 16 : 0.554, 17 : 0.554, 18 : 0.554 },
 "ggZH": { 16 : 0.0432, 17 : 0.0432, 18 : 0.0423 },
}

colors = {
 "ZH": ROOT.kBlue, 
 "ggZH": ROOT.kAzure,
}

root_files = {
 "ZH": { 16 : "ZH_2016.root", 17 : "ZH_2017.root", 18 : "ZH_2018.root" },
 "ggZH": { 16 : "ggZH_2016.root", 17 : "ggZH_2017.root", 18 : "ggZH_2018.root"},
}

## == Main Code ===============================================================

ROOT.gStyle.SetOptStat(0)
ROOT.gROOT.SetBatch(ROOT.kFALSE)

## Go through each year
for yr in [18]:
  
  if debug: print "Checking for year 20" + str(yr) 
  
  ## Go through each plot/histogram
  for plt in plots:
    if debug: print ">> Checking for plot " + plt

    ## Create a stack on which we will stack the plots.
    hstack = ROOT.THStack()

    ## Go through each sample & pull the proper plot.
    for sample in samples:
      
      ## Make sure we have the proper file path
      file_name = fileloc + sample + "_20" + str(yr) + ".root"
      if debug: print ">>>>", file_name   
      
      ## Open the file & pull out the desired plot
      f = ROOT.TFile.Open(file_name, "read")
      hist_name = "VbbHcc_" + plt
      hist_data = f.Get(hist_name)

      ## Modify the histogram (scale & rebin it)
      hist_data.SetFillStyle(1001);
      hist_data.SetFillColor(colors[sample])
      hist_data.SetLineColor(colors[sample])
     
      ## Draw the histogram to the canvas
      hist_data.Draw()
   
    ## Make a canvas and add our stack to it.
    c = ROOT.TCanvas()
    hstack.Draw()
    
    ## Add some necessary labels to our canvas
    ## == LABELS GO HERE ==
    savepath = "../saved_plots/" + plt + "_20" + str(yr) + ".pdf"
    c.SaveAs(savepath)
