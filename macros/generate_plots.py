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
 "dPhi_H": "#Delta#phi_{H}", "H_pt_jet0": "p_{T,j0}^{H}",
 "H_eta_jet0": "#eta_{j0}^{H}", "H_phi_jet0": "#phi_{j0}^{H}",
 "H_pt_jet1": "p_{T,j1}^{H}", "H_eta_jet1": "#eta_{j1}^{H}", 
 "H_phi_jet1": "#phi_{j1}^{H}", "H_pt_jet2": "p_{T,j2}^{H}",
 "H_eta_jet2": "#eta_{j2}^{H}", "H_phi_jet2": "#phi_{j2}^{H}",
 "dR_Z": "#Delta R_{b#bar{b}}", "dPhi_Z": "#Delta#phi_{b#bar{b}}",
 "Z_pt_jet0": "p_{T,j0}^{Z}", "Z_eta_jet0": "#eta_{j0}^{Z}", 
 "Z_pZi_jet0": "#pZi_{j0}^{Z}", "Z_pt_jet1": "p_{T,j1}^{Z}", 
 "Z_eta_jet1": "#eta_{j1}^{Z}", "Z_pZi_jet1": "#pZi_{j1}^{Z}", 
 "Z_pt_jet2": "p_{T,j2}^{Z}", "Z_eta_jet2": "#eta_{j2}^{Z}", 
 "Z_pZi_jet2": "#pZi_{j2}^{Z}", "pt_jet": "p_{T}^{jet}",
 "eta_jet": "#eta^{jet}", "phi_jet": "#phi^{jet}",
 "mSV_jet": "m_{SV}^{jet}", "Njet": "N_{jet}",
}

gen_plots = ["Higgs_mass", "Higgs_pt", "Higgs_phi", "Z_mass", "Z_pt", "Z_phi",
"cjet_phi", "bjet_phi", "ljet_phi", "HZ_dPhi", "HZ_dR", "Hc_dR", "Zb_dR", 
"cc_dR", "bb_dR"]

## == Useful Methods ==========================================================

def getLumiStr(year):
  lumi_yr = lumi[year]
  lumi_fb = lumi_yr / 1000.0
  lumi_fb = round(lumi_fb, 1)
  return str(lumi_fb) + " fb^{-1} (13 TeV)"

def scaleToLumi(fName, xSec, lumi):
  f = ROOT.TFile.Open(fName, "read")
  hTmp = f.Get("Nevt")
  nP = hTmp.GetBinContent(3)
  nN = hTmp.GetBinContent(1)
  return float(lumi)*float(xSec)/float(nP-nN)

## == Files of Interest =======================================================

debug = False
fileloc = "../results/"
samples = ["ZH", "ggZH"]
xSec = {
 "ZH": { 16 : 0.554, 17 : 0.554, 18 : 0.554 },
 "ggZH": { 16 : 0.0432, 17 : 0.0432, 18 : 0.0423 },
}

colors = {
 "ZH": ROOT.kAzure,
 "ggZH": ROOT.kRed,
}

root_files = {
 "ZH": { 16 : "ZH_2016.root", 17 : "ZH_2017.root", 18 : "ZH_2018.root" },
 "ggZH": { 16 : "ggZH_2016.root", 17 : "ggZH_2017.root", 18 : "ggZH_2018.root"},
}

shouldScaleToLumi = True

## == Main Code ===============================================================

ROOT.gStyle.SetOptStat(0)
#ROOT.gROOT.SetBatch(ROOT.kFALSE)

## Go through each year
for yr in [18]:
  
  if debug: print "Checking for year " + str(yr) 
  
  ## Go through each plot/histogram
  for plt in plots:
    if debug: print ">> Checking for plot " + plt

    ## Create a stack on which we will stack the plots.
    hstack = ROOT.THStack("hs", "")
    legend = ROOT.TLegend(0.75, 0.7, 0.89, 0.89)
    legend.SetHeader("H#rightarrow cc Productions", "C")
    legend.SetBorderSize(0)

    ## Go through each sample & pull the proper plot.
    for sample in samples:
      
      ## Make sure we have the proper file path
      file_name = fileloc + sample + "_20" + str(yr) + ".root"
      if debug: print ">>>>", file_name   
      
      ## Open the file & pull out the desired plot
      f = ROOT.TFile.Open(file_name, "read")
      hist_name = "VbbHcc_" + plt
      hist_data = f.Get(hist_name)
      ROOT.gROOT.cd()
      hnew = hist_data.Clone()

      ## Modify the histogram (scale & rebin it)
      hnew.SetFillColor(colors[sample])
      if shouldScaleToLumi:
        scale = scaleToLumi(file_name, xSec[sample][yr], lumi[yr])
        hnew.Scale(scale)
      hnew.GetYaxis().SetTitle("Events")
      if plt in x_axis:
        hnew.GetXaxis().SetTitle(x_axis[plt])
     
      legend.AddEntry(hnew, sample, "f")
      ## Draw the histogram to the canvas
      hstack.Add(hnew)
   
    ## Make a canvas and add our stack to it.
    c = ROOT.TCanvas()
    c.cd()
    hstack.Draw("HIST")
    hstack.GetYaxis().SetTitle("Events")
    if plt in x_axis:
      hstack.GetXaxis().SetTitle(x_axis[plt])
    legend.Draw("same")
    
    ## Add some necessary labels
    t = ROOT.TLatex(); t.SetNDC()
    t.DrawLatex(0.1, 0.92, "CMS")
    
    t2 = ROOT.TLatex(); t2.SetNDC()
    t2.SetTextFont(42); t2.SetTextSize(0.04)
    t2.DrawLatex(0.7, 0.93, getLumiStr(yr))
    c.Update()
    
    ROOT.gPad.Modified()
    ROOT.gPad.Update()
    
    ## Add some necessary labels to our canvas
    ## == LABELS GO HERE ==
    savepath = "../saved_plots/" + plt + "_20" + str(yr) + ".pdf"
    c.SaveAs(savepath)
