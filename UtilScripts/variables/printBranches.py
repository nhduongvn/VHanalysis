import os,sys
import ROOT

#f = ROOT.TFile.Open("root:://cmsxrootd.fnal.gov///store/mc/RunIISummer16NanoAODv7/DY01234jets_13TeV-sherpa/NANOAODSIM/PUMoriond17_Nano02Apr2020_102X_mcRun2_asymptotic_v8-v1/110000/52841C5F-E537-824C-97E9-8683E8B768D4.root","READ")

f = ROOT.TFile.Open("root://cmsxrootd.fnal.gov///store/mc/RunIISummer20UL18NanoAODv9/ZH_HToCC_ZToQQ_M125_TuneCP5_13TeV-powheg-pythia8/NANOAODSIM/106X_upgrade2018_realistic_v16_L1v1-v1/80000/DA0DDDD9-C643-CB42-AA66-F8BE79D5BE8A.root", "READ")

tr = f.Get("Events")

tr.Print("Title")
