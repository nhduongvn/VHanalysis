import ROOT

f = ROOT.TFile.Open("/home/peteryou/Documents/Research/VHanalysis/newest_condor_results/NONE/ZH_HToCC_ZToCC_MC_2016.root", "READ")
plot = f.Get("VbbHcc_MC_Z_mass")
plot.Draw()
