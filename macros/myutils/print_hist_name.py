from ROOT import *

#temp = Root.TFile.Open(RootFileList[0])
#DirKeys = temp.GetListOfKeys()

#HistKeys = [ (dir.ReadObj()).GetListOfKeys() for dir in DirKeys]
#HistNames = [ [k.GetName() for k in D] for D in HistKeys]
#Loops though all the histograms that have been read from the first input file, this is done by histogram name


fIn = TFile.Open('/uscms_data/d3/duong/CMSSW/CMSSW_7_6_5/src/ZplusHF_dy_nj/Test/test_histo_all_regions_lepPt_25_exclude_eleEtaGap_dy_nj_st.root')
print fIn

#DirKeys = fIn.GetListOfKeys()

#print DirKeys

#HistKeys = [(dir.ReadObj()).GetListOfKeys() for dir in DirKeys] # List of histogram

#HistNames = [ [k.GetName() for k in D] for D in HistKeys]

#print HistNames

#dirNames = ['zHFjet/Ele/jet_pt_60_80','emu/Muon/jet_pt_60_80']
#dirNames = ['zHFjet/Ele/All','emu/Muon/All']
dirNames = ['zjet/Ele/All']

for dirName in dirNames:
  fIn.cd(dirName)
  histKeys = gDirectory.GetListOfKeys()
  histNames = []
  for histKey in histKeys:
    histNames.append(histKey.GetName())
  histNames.sort()
  print '>>>>>>>>>>>>>', dirName, '>>>>>>>>>>>>>>>'
  for histName in histNames:
    print histName


  fIn.cd()
