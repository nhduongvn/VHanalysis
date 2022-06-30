import os,sys
import ROOT

f = ROOT.TFile.Open("root:://cmsxrootd.fnal.gov///store/mc/RunIISummer16NanoAODv7/DY01234jets_13TeV-sherpa/NANOAODSIM/PUMoriond17_Nano02Apr2020_102X_mcRun2_asymptotic_v8-v1/110000/52841C5F-E537-824C-97E9-8683E8B768D4.root","READ")

tr = f.Get("Events")

tr.Print("Title")
