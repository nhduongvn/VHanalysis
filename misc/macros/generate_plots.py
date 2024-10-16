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
 "HMass": "m_{c#bar{c}} [GeV]", "dR_H": "#Delta R_{c#bar{c}}",
 "dPhi_H": "#Delta#phi_{c#bar{c}}", "H_pt_jet0": "p_{T,j0}^{H} [GeV]",
 "H_eta_jet0": "#eta_{j0}^{H}", "H_phi_jet0": "#phi_{j0}^{H}",
 "H_pt_jet1": "p_{T,j1}^{H} [GeV]", "H_eta_jet1": "#eta_{j1}^{H}", 
 "H_phi_jet1": "#phi_{j1}^{H}", "H_pt_jet2": "p_{T,j2}^{H} [GeV]",
 "H_eta_jet2": "#eta_{j2}^{H}", "H_phi_jet2": "#phi_{j2}^{H}",
 "ZMass": "m_{b#bar{b}} [GeV]",
 "dR_Z": "#Delta R_{b#bar{b}}", "dPhi_Z": "#Delta#phi_{b#bar{b}}",
 "Z_pt_jet0": "p_{T,j0}^{Z} [GeV]", "Z_eta_jet0": "#eta_{j0}^{Z}", 
 "Z_phi_jet0": "#phi_{j0}^{Z}", "Z_pt_jet1": "p_{T,j1}^{Z} [GeV]", 
 "Z_eta_jet1": "#eta_{j1}^{Z}", "Z_phi_jet1": "#phi_{j1}^{Z}", 
 "Z_pt_jet2": "p_{T,j2}^{Z} [GeV]", "Z_eta_jet2": "#eta_{j2}^{Z}", 
 "Z_phi_jet2": "#phi_{j2}^{Z}", "pt_jet": "p_{T}^{jet} [GeV]",
 "eta_jet": "#eta^{jet}", "phi_jet": "#phi^{jet}",
 "mSV_jet": "m_{SV}^{jet} [GeV]", "Njet": "N_{jet}",
}

y_axis = {
 "pt": "Events / 1.0 GeV", "eta": "Events / 0.02",
 "phi": "Events / 0.02", "mass": "Events / 1.0 GeV",
 "dR": "Events / 0.1",
}

gen_plots = ["Higgs_mass", "Higgs_pt", "Higgs_phi", "Z_mass", "Z_pt", "Z_phi",
"cjet_phi", "bjet_phi", "ljet_phi", "HZ_dPhi", "HZ_dR", "Hc_dR", "Zb_dR", 
"cc_dR", "bb_dR", "cc_dPhi", "bb_dPhi"]

gen_x_axis = {
 "Higgs_mass": "m_{H}^{gen} [GeV]", "Higgs_pt": "p_{T,H}^{gen} [GeV]",
 "Higgs_phi": "#phi_{H}^{gen}", "Z_mass": "m_{Z}^{gen} [GeV]", 
 "Z_pt": "p_{T,Z}^{gen} [GeV]", "Z_phi": "#phi_{Z}^{gen}",
 "cjet_phi": "#phi_{c-jet}^{gen}", "bjet_phi": "#phi_{b-jet}^{gen}",
 "ljet_phi": "#phi_{l-jet}^{gen}", "HZ_dPhi": "#Delta#phi_{HZ}",
 "HZ_dR": "#Delta R_{HZ}", "Hc_dR": "#Delta R_{Hc}", 
 "Zb_dR": "#Delta R_{Zb}", "cc_dR": "#Delta R_{cc}",
 "bb_dR": "#Delta R_{bb}", "cc_dPhi": "#Delta#phi_{cc}^{gen}",
 "bb_dPhi": "#Delta#phi_{bb}^{gen}",
}

legX0 = 0.75
legY0 = 0.65
legX1 = 0.89
legY1 = 0.89

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

def getYTitle(plt): 
  yTitle = "Events"
  if plt.find("pt") != -1: yTitle = y_axis["pt"]
  elif plt.find("eta") != -1: yTitle = y_axis["eta"]
  elif plt.find("phi") != -1 or plt.find("Phi") != -1: 
    yTitle = y_axis["phi"]
  elif plt.find("dR") != -1: yTitle = y_axis["dR"]
  elif plt.find("Mass") != -1 or plt.find("mSV") != -1:
    yTitle = y_axis["mass"]
  return yTitle

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
useLogScale = False

## == Main Code ===============================================================

ROOT.gStyle.SetOptStat(0)
#ROOT.gROOT.SetBatch(ROOT.kFALSE)

## Go through each year
for yr in [18]:
  
  if debug: print "Checking for year " + str(yr) 
  
  ## == Go through each plot/histogram (Standard Plots) ==
  for plt in plots:
    if debug: print ">> Checking for plot " + plt

    ## Create a stack on which we will stack the plots.
    hstack = ROOT.THStack("hs", "")
    legend = ROOT.TLegend(legX0, legY0, legX1, legY1)
    legend.SetTextSize(0.04)
    legend.SetHeader("Samples", "C")
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
      
      legend.AddEntry(hnew, sample, "f")
      ## Draw the histogram to the canvas
      hstack.Add(hnew)
   
    ## Make a canvas and add our stack to it.
    c = ROOT.TCanvas()
    c.cd()
    hstack.Draw("HIST")
    
    yTitle = getYTitle(plt)
    hstack.GetYaxis().SetTitle(yTitle)
    if plt in x_axis:
      hstack.GetXaxis().SetTitle(x_axis[plt])
    legend.Draw("same")
    
    scale = "linear"
    if useLogScale:
      scale = "log"
      ROOT.gPad.SetLogy()
    
    ## Add some necessary labels
    t = ROOT.TLatex(); t.SetNDC()
    t.DrawLatex(0.1, 0.92, "CMS")
    
    t2 = ROOT.TLatex(); t2.SetNDC()
    t2.SetTextFont(42); t2.SetTextSize(0.04)
    t2.DrawLatex(0.7, 0.93, getLumiStr(yr))
    
    t3 = ROOT.TLatex(); t3.SetNDC()
    t3.SetTextFont(42); t3.SetTextSize(0.04)
    t3.DrawLatex(0.4, 0.93, "Work in Progress")
    c.Update()
    
    ROOT.gPad.Modified()
    ROOT.gPad.Update()
    
    ## Add some necessary labels to our canvas
    ## == LABELS GO HERE ==
    savepath = "../saved_plots/" + scale + "/" + plt + "_20" + str(yr) + ".png"
    c.SaveAs(savepath)
  
  ## == Go through each plot/histogram (Generator Object Plots) ==
  for plt in gen_plots:
    
    ## Create a stack on which we will stack the plots.
    hstack = ROOT.THStack("hs", "")
    legend = ROOT.TLegend(legX0, legY0, legX1, legY1)
    legend.SetTextSize(0.04)
    legend.SetHeader("Samples", "C")
    legend.SetBorderSize(0)

    ## Go through each sample & pull the proper plot.
    for sample in samples:
      
      ## Make sure we have the proper file path
      file_name = fileloc + sample + "_20" + str(yr) + ".root"
      if debug: print ">>>>", file_name   
      
      ## Open the file & pull out the desired plot
      f = ROOT.TFile.Open(file_name, "read")
      hist_name = "GenObj_" + plt
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
    yTitle = getYTitle(plt)
    hstack.GetYaxis().SetTitle(yTitle)
    if plt in gen_x_axis:
      hstack.GetXaxis().SetTitle(gen_x_axis[plt])
    legend.Draw("same")
    
    scale = "linear"
    if useLogScale:
      scale = "log"
      ROOT.gPad.SetLogy()
    
    ## Add some necessary labels
    t = ROOT.TLatex(); t.SetNDC()
    t.DrawLatex(0.1, 0.92, "CMS")
    
    t2 = ROOT.TLatex(); t2.SetNDC()
    t2.SetTextFont(42); t2.SetTextSize(0.04)
    t2.DrawLatex(0.7, 0.93, getLumiStr(yr))
    
    t3 = ROOT.TLatex(); t3.SetNDC()
    t3.SetTextFont(42); t3.SetTextSize(0.04)
    t3.DrawLatex(0.4, 0.93, "Work in Progress")
    c.Update()
    
    ROOT.gPad.Modified()
    ROOT.gPad.Update()
    
    ## Add some necessary labels to our canvas
    ## == LABELS GO HERE ==
    savepath = "../saved_plots/" + scale + "/generator_" + plt + "_20" + str(yr) + ".png"
    c.SaveAs(savepath)
  
  ## == Make sure to get the event cutflow too ==
  
