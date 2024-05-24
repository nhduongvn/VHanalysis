#this script makes preparation to perform limit setting for VbbHcc
#1. prepare data card
#2. prepare input file

import ROOT
import sys,os
import copy
import math
sys.path.append('/uscms_data/d3/duong/CMSSW/CMSSW_7_6_5/src/ZplusC/python/')
import ConfigParser
import myutils.util_funcs as utl_func
import myutils as utl

def makeline(words):
  tmp = '{0:30}'.format(words[0]) 
  for i in range(1,len(words)):
    tmp = tmp + '{0:20}'.format(words[i])
  return tmp

def getHist(pN,samName,fH,lS): #samName = ['Electron'],['DY_0J','DY_1J','DY_2J']...
  hOut = {}
  for y in years:
  #for y in ['17']:
    hOut[y] = fH[samName[0]][y][0].Get(pN).Clone() #first sample, first file
    if samName[0] not in ['JetHT']:
      hOut[y].Scale(lS[samName[0]][y][0])

    for iS in range(len(samName)):
      for fi in range(len(fH[samName[iS]][y])):
        if iS == 0 and fi == 0: continue #first sample and first file is already included above 
        h = fH[samName[iS]][y][fi].Get(pN).Clone()
        if samName[iS] not in ['JetHT']:
          h.Scale(lS[samName[iS]][y][fi])
        hOut[y].Add(h)
      
  return hOut

def getHistIntegral(h,v1=-1,v2=-1):
  tmp = [0,0]
  bBin = 0 #include underflow bin
  eBin = h.GetNbinsX()+1 #include overflow bin
  if v1 != -1: bBin = h.GetXaxis().FindFixBin(v1)
  if v2 != -1: eBin = h.GetXaxis().FindFixBin(v2)
  for iB in range(v1,v2+1):
    tmp[0] += h.GetBinContent(iB)
    tmp[1] += h.GetBinError(iB)*h.GetBinError(iB)
  tmp[1] = math.sqrt(tmp[1])
  return tmp

def Rebinning(histIn, xRange):
    nBin = int((xRange[1] - xRange[0])/histIn.GetBinWidth(1)) 
    #print '>>>nBin: ', nBin
    hist = ROOT.TH1D(histIn.GetName() + '_clone', '', nBin, xRange[0], xRange[1])
    for i in range(1,hist.GetNbinsX() + 1):
      #get bin number
      iBin = histIn.FindFixBin(hist.GetBinLowEdge(i))
      hist.SetBinContent(i, histIn.GetBinContent(iBin))
      hist.SetBinError(i, histIn.GetBinError(iBin))
    
    #get overflow
    ofBin = histIn.FindFixBin(xRange[1])
    nOf = 0
    nErrOf = 0
    for i in range(ofBin, histIn.GetNbinsX() + 2):
      nOf += histIn.GetBinContent(i)
      nErrOf += histIn.GetBinError(i)*histIn.GetBinError(i)
    nErrOf = math.sqrt(nErrOf)
    hist.SetBinContent(hist.GetNbinsX() + 1, nOf)
    hist.SetBinError(hist.GetNbinsX() + 1, nErrOf)

    #get underflow
    ufBin = histIn.FindFixBin(xRange[0]-histIn.GetBinWidth(1))
    nUf = 0
    nErrUf = 0
    for i in range(0, ufBin + 1):
      nUf += histIn.GetBinContent(i)
      nErrUf += histIn.GetBinError(i)*histIn.GetBinError(i)
    nErrUf = math.sqrt(nErrUf)
    hist.SetBinContent(0, nUf)
    hist.SetBinError(0, nErrUf)
    
    return hist


def getHisto(fIn, name, scale_factor=1,xRange=[-1,-1], xDiv=[-1,-1]):
  histIn = fIn.Get(name)
  #make a copy of histogram with the same bin width but with different range
  #print '>>>>>>>Hist name: ', name
  hist = None
  if xRange[0] != -1 and xRange[1] != -1:
    hist = Rebinning(histIn,xRange)
    hist.Scale(scale_factor)
  else:
    hist = histIn.Clone(name + '_clone')
    hist.Scale(scale_factor)
  
  hist1 = None
  if xDiv[0] != -1 and xDiv[1] != -1:
    hist1 = utl_func.customBin(hist,xDiv)
    return hist1

  return hist

def write_data_card(dc_name,fIn,systs='NONE'):
  f_dc = open(dc_name + '.txt','w')
  f_dc.write('imax 1 number of channels\n')
  f_dc.write('jmax * number of backgrounds (\'*\' = automatic)\n')
  f_dc.write('kmax * number of nuisance parameters (sources of systematical uncertainties)\n')
  st = 'shapes * * ' + fIn.GetName() + ' $PROCESS $PROCESS$SYSTEMATIC\n\n'
  f_dc.write(st)
  
  obs = (fIn.Get('data_obs')).Integral()
  ws = ['observation',str(obs)]
  st = makeline(ws)
  f_dc.write(st + '\n\n')
  
  ws = ['bin','SR']
  st = makeline(ws)
  f_dc.write(st + '\n\n')
  
  ws = ['bin','','SR','SR','SR','SR','SR','SR']
  st = makeline(ws)
  f_dc.write(st + '\n')

  ws = ['process','','ZHcc','ZHbb','QCD','Top','VJ','VV']
  st = makeline(ws)
  f_dc.write(st + '\n')
  
  ws = ['process','','0','1','2','3','4','5']
  st = makeline(ws)
  f_dc.write(st + '\n')
 
  #write rate
  ZHcc = str((fIn.Get('ZHcc')).Integral())
  ZHbb = str((fIn.Get('ZHbb')).Integral())
  QCD = str((fIn.Get('QCD')).Integral())
  Top = str((fIn.Get('Top')).Integral())
  VJ = str((fIn.Get('VJ')).Integral())
  VV = str((fIn.Get('VV')).Integral())
  ws = ['rate','',ZHcc,ZHbb,QCD,Top,VJ,VV]
  st = makeline(ws)
  f_dc.write(st + '\n')
  
  #lumi
  ws = ['lumi','lnN','1.026','1.026','1.026','1.026','1.026','1.026']
  st = makeline(ws)
  f_dc.write(st + '\n')
  
  #QCD_bkgr
  ws = ['QCD_bkgr','lnN','-','-','1.2','-','-','-']
  st = makeline(ws)
  f_dc.write(st + '\n')

  #TTbar_bkgr_xSec
  ws = ['Top_bkgr_xSec','lnN','-','-','-','1.055','-','-']
  st = makeline(ws)
  f_dc.write(st + '\n')
  
  #https://twiki.cern.ch/twiki/bin/viewauth/CMS/StandardModelCrossSectionsat13TeV
  ws = ['VJ_bkgr_xSec','lnN','-','-','-','-','1.05','-'] 
  st = makeline(ws)
  f_dc.write(st + '\n')

  ws = ['VV_bkgr_xSec','lnN','-','-','-','-','-','1.15'] #SMP-18-002 45.09+/-4.9% (NLO), 5% and 15% (NLO to NNLO)
  st = makeline(ws)
  f_dc.write(st + '\n')
  
  #TEMP
  #Statistical of MC shape
  #uncNames = {'Zb':[],'Zc':[],'Zl':[],'TT':[],'VV':[]}
  #for k,v in uncNames.items(): 
  #  for key in fIn.GetListOfKeys():
  #    hist = key.ReadObj()
  #    histName = hist.GetName()
  #    if k in histName and 'stat_bin' in histName and 'Up' in histName:
  #      histName = histName.replace('Up','')
  #      histName = histName.replace(k,'')
  #      histName = k + histName
  #      uncNames[k].append(histName)
  #  write_mc_stat_line(k, uncNames[k], f_dc)
  
  #define unc. group
  #MC_stat_systs = ''
  #for k,vs in uncNames.items():
  #  for v in vs:
  #    MC_stat_systs += ' ' + v
  ws = ['* autoMCStats 25 1 1']
  st = makeline(ws)
  f_dc.write(st + '\n')
  
  
##############################################
# Main program
##############################################

years = ['16','17','18']

#getting histograms, rates etc.
#regions = ['VbbHcc_boosted_PN_med_CR1_qcd']
regions = ['VbbHcc_boosted_PN_med_VR_qcd']

nRebin=20
lowM = 40
highM = 200

doCustomBinning = False
xDiv = [40.,60.,80.,90.,100.,130.,160.,200.] 

cfg = utl.BetterConfigParser()
cfg.read('../Configs/config.ini')

use_bEnriched_BGenFilter = False 

#file to store histograms for limit settings
#fOut = ROOT.TFile("../ForLimitSetting/histos_PN_med_CR1_pt350_tmp.root","RECREATE") 
#dc_name = "../ForLimitSetting/tmp"
fOut = ROOT.TFile("../ForLimitSetting/histos_PN_med_VR_pt350_tmp.root","RECREATE") 
dc_name = "../ForLimitSetting/tmp"
#fOut = ROOT.TFile("../ForLimitSetting/histos_PN_med_CR1_pt350.root","RECREATE") 
#dc_name = "../ForLimitSetting/dataCard_PN_med_CR1_pt350"
#fOut = ROOT.TFile("../ForLimitSetting/histos_PN_med_VR_pt350.root","RECREATE") 
#dc_name = "../ForLimitSetting/dataCard_PN_med_VR_pt350"

lumiS = {}
for y in years:
  lumiTmp = float(cfg.get('General','lumi_'+y))/1000.
  lumiTmp = format("%.1f" % lumiTmp)
  lumiS[y] = str(lumiTmp)
print lumiS 

#ss = ['JetHT','ZH_HToCC_ZToQQ','ggZH_HToCC_ZToQQ','ZH_HToBB_ZToQQ','ggZH_HToBB_ZToQQ','QCD_HT500to700','QCD_HT700to1000','QCD_HT1000to1500','QCD_HT1500to2000','QCD_HT2000toInf']
ss = ['JetHT','ZH_HToCC_ZToQQ','ggZH_HToCC_ZToQQ','ZH_HToBB_ZToQQ','ggZH_HToBB_ZToQQ','QCD_HT300to500_v9','QCD_HT500to700_v9','QCD_HT700to1000_v9','QCD_HT1000to1500_v9','QCD_HT1500to2000_v9','QCD_HT2000toInf_v9','QCD_bEnriched_HT300to500','QCD_bEnriched_HT500to700','QCD_bEnriched_HT700to1000','QCD_bEnriched_HT1000to1500','QCD_bEnriched_HT1500to2000','QCD_bEnriched_HT2000toInf','QCD_HT300to500_BGenFilter','QCD_HT500to700_BGenFilter','QCD_HT700to1000_BGenFilter','QCD_HT1000to1500_BGenFilter','QCD_HT1500to2000_BGenFilter','QCD_HT2000toInf_BGenFilter','WJetsToQQ_HT-400to600','WJetsToQQ_HT-600to800','WJetsToQQ_HT-800toInf','WJetsToLNu_HT-400to600','WJetsToLNu_HT-600to800','WJetsToLNu_HT-800to1200','WJetsToLNu_HT-1200to2500','WJetsToLNu_HT-2500toInf','ZJetsToQQ_HT-400to600','ZJetsToQQ_HT-600to800','ZJetsToQQ_HT-800toInf','TTToHadronic','TTToSemiLeptonic','TTTo2L2Nu','ST_t-channel_antitop','ST_t-channel_top','ST_tW-channel_antitop','ST_tW-channel_top','WW','WZ','ZZ']

if use_bEnriched_BGenFilter: 
  ss = ['JetHT','ZH_HToCC_ZToQQ','ggZH_HToCC_ZToQQ','ZH_HToBB_ZToQQ','ggZH_HToBB_ZToQQ','QCD_bEnriched_HT300to500','QCD_bEnriched_HT500to700','QCD_bEnriched_HT700to1000','QCD_bEnriched_HT1000to1500','QCD_bEnriched_HT1500to2000','QCD_bEnriched_HT2000toInf','QCD_HT300to500_BGenFilter','QCD_HT500to700_BGenFilter','QCD_HT700to1000_BGenFilter','QCD_HT1000to1500_BGenFilter','QCD_HT1500to2000_BGenFilter','QCD_HT2000toInf_BGenFilter','WJetsToQQ_HT-400to600','WJetsToQQ_HT-600to800','WJetsToQQ_HT-800toInf','WJetsToLNu_HT-400to600','WJetsToLNu_HT-600to800','WJetsToLNu_HT-800to1200','WJetsToLNu_HT-1200to2500','WJetsToLNu_HT-2500toInf','ZJetsToQQ_HT-400to600','ZJetsToQQ_HT-600to800','ZJetsToQQ_HT-800toInf','TTToHadronic','TTToSemiLeptonic','TTTo2L2Nu','ST_t-channel_antitop','ST_t-channel_top','ST_tW-channel_antitop','ST_tW-channel_top','WW','WZ','ZZ']

fNames = {}
xSecs = {}
lumiScales = {}
fHist = {}

#prepare for sample info
for s in ss:

  fNames[s] = {}
  xSecs[s] = {}
  lumiScales[s] = {}
  fHist[s] = {}

  for y in years:
    lumi = float(cfg.get('General','lumi_'+y))
    names = cfg.get(s,'file_'+y).split(',') #multiple names is possible, for example: Single top = t-channels, s-channels ...
    print '>>>>>>>: ', len(names)
    xSecTmps = ['1']*len(names) #each name corresponds to a cross section
    kfactor = ['1']*len(names) #each name corresponds to a cross section
    if s not in ['JetHT']:
      xSecTmps = cfg.get(s,'xSec_'+y).split(',')

    fNames[s][y] = []
    xSecs[s][y] = []
    fHist[s][y] = []
    for iN in names:
      fNames[s][y].append(cfg.get('Paths','path') + '/' + iN)
      fHist[s][y].append(ROOT.TFile.Open(fNames[s][y][-1],'READ'))
    
    print xSecTmps
    for iS in xSecTmps:
      #in case there is kfactor in cross section
      if '*' in iS:
        iS = iS.split('*')
      if len(iS) == 2:
        xSecs[s][y].append(float(iS[0])*float(iS[1]))
      else:
        xSecs[s][y].append(float(iS))

    lumiScales[s][y] = [1]*len(names)
    for iN in range(len(fNames[s][y])):
      if s not in ['JetHT']:
        print s, y, iN, fNames[s][y][iN]
        lumiScales[s][y][iN] = utl_func.scaleToLumi1(fNames[s][y][iN],xSecs[s][y][iN],lumi,'Nevt_VbbHcc_boosted')
 

nums = {}
plN = 'HMass' 

for r in regions:
  
  nums[r] = {}
  
  hN = r + '_' + plN
    
  print hN, plN
  
  #get histograms
  hDat = getHist(hN,['JetHT'],fHist,lumiScales)
  hZHcc = getHist(hN,['ZH_HToCC_ZToQQ'],fHist,lumiScales)
  hZHbb = getHist(hN,['ZH_HToBB_ZToQQ'],fHist,lumiScales)
  hggZHcc = getHist(hN,['ggZH_HToCC_ZToQQ'],fHist,lumiScales)
  hggZHbb = getHist(hN,['ggZH_HToBB_ZToQQ'],fHist,lumiScales)
  #hQCD = getHist(hN,['QCD_HT500to700','QCD_HT700to1000','QCD_HT1000to1500','QCD_HT1500to2000','QCD_HT2000toInf'],fHist,lumiScales)
  if not use_bEnriched_BGenFilter:
    hQCD = getHist(hN,['QCD_HT300to500_v9','QCD_HT500to700_v9','QCD_HT700to1000_v9','QCD_HT1000to1500_v9','QCD_HT1500to2000_v9','QCD_HT2000toInf_v9'],fHist,lumiScales)
  else:
    hQCD = getHist(hN,['QCD_bEnriched_HT300to500','QCD_bEnriched_HT500to700','QCD_bEnriched_HT700to1000','QCD_bEnriched_HT1000to1500','QCD_bEnriched_HT1500to2000','QCD_bEnriched_HT2000toInf'],fHist,lumiScales)
    hQCD_BGenFilter = getHist(hN,['QCD_HT300to500_BGenFilter','QCD_HT500to700_BGenFilter','QCD_HT700to1000_BGenFilter','QCD_HT1000to1500_BGenFilter','QCD_HT1500to2000_BGenFilter','QCD_HT2000toInf_BGenFilter'],fHist,lumiScales)
    #hQCD = getHist(hN,['QCD_HT300to500_BGenFilter','QCD_HT500to700_BGenFilter','QCD_HT700to1000_BGenFilter','QCD_HT1000to1500_BGenFilter','QCD_HT1500to2000_BGenFilter','QCD_HT2000toInf_BGenFilter'],fHist,lumiScales)
    for y in years:
      hQCD[y].Add(hQCD_BGenFilter[y])
  
  hWJ = getHist(hN,['WJetsToQQ_HT-400to600','WJetsToQQ_HT-600to800','WJetsToQQ_HT-800toInf','WJetsToLNu_HT-400to600','WJetsToLNu_HT-600to800','WJetsToLNu_HT-800to1200','WJetsToLNu_HT-1200to2500','WJetsToLNu_HT-2500toInf'],fHist,lumiScales)
  hZJ = getHist(hN,['ZJetsToQQ_HT-400to600','ZJetsToQQ_HT-600to800','ZJetsToQQ_HT-800toInf'],fHist,lumiScales)
  hTT = getHist(hN,['TTToHadronic','TTToSemiLeptonic','TTTo2L2Nu'],fHist,lumiScales)
  hST = getHist(hN,['ST_t-channel_antitop','ST_t-channel_top','ST_tW-channel_antitop','ST_tW-channel_top'],fHist,lumiScales)
  hWW = getHist(hN,['WW'],fHist,lumiScales)
  hWZ = getHist(hN,['WZ'],fHist,lumiScales)
  hZZ = getHist(hN,['ZZ'],fHist,lumiScales)

  ############################
  #Add plots for all years
  ############################
  
  hDatA = hDat['16'].Clone(hDat['16'].GetName()+'_all')
  hZHccA = hZHcc['16'].Clone(hZHcc['16'].GetName()+'_all')
  hZHbbA = hZHbb['16'].Clone(hZHbb['16'].GetName()+'_all')
  hggZHccA = hggZHcc['16'].Clone(hggZHcc['16'].GetName()+'_all')
  hggZHbbA = hggZHbb['16'].Clone(hggZHbb['16'].GetName()+'_all')
  hQCDA = hQCD['16'].Clone(hQCD['16'].GetName()+'_all')
  hSTA = hST['16'].Clone(hST['16'].GetName()+'_all')
  hTTA = hTT['16'].Clone(hTT['16'].GetName()+'_all')
  hZJA = hZJ['16'].Clone(hZJ['16'].GetName()+'_all')
  hWJA = hWJ['16'].Clone(hWJ['16'].GetName()+'_all')
  hWWA = hWW['16'].Clone(hWW['16'].GetName()+'_all')
  hWZA = hWZ['16'].Clone(hWZ['16'].GetName()+'_all')
  hZZA = hZZ['16'].Clone(hZZ['16'].GetName()+'_all')
  
  #sum up all years
  for y in ['17','18']:
    hDatA.Add(hDat[y])
    hZHccA.Add(hZHcc[y])
    hZHbbA.Add(hZHbb[y])
    hggZHccA.Add(hggZHcc[y])
    hggZHbbA.Add(hggZHbb[y])
    hQCDA.Add(hQCD[y])
    hSTA.Add(hST[y])
    hTTA.Add(hTT[y])
    hZJA.Add(hZJ[y])
    hWJA.Add(hWJ[y])
    hWWA.Add(hWW[y])
    hWZA.Add(hWZ[y])
    hZZA.Add(hZZ[y])
  
  #group processes
  hZHcc = hZHccA.Clone("ZHcc")
  hZHcc.Add(hggZHccA)
  hZHbb = hZHbbA.Clone("ZHbb")
  hZHbb.Add(hggZHbbA)
  hTop = hTTA.Clone("Top")
  hTop.Add(hSTA)
  hVJ = hZJA.Clone("VJ")
  hVJ.Add(hWJA)
  hVV = hWWA.Clone("VV")
  hVV.Add(hWZA)
  hVV.Add(hZZA)

  nums[r]['All'] = {}
  nums[r]['All']['JetHT'] = getHistIntegral(hDatA,lowM,highM)
  nums[r]['All']['ZH_HToCC_ZToQQ'] = getHistIntegral(hZHccA,lowM,highM)
  nums[r]['All']['ZH_HToBB_ZToQQ'] = getHistIntegral(hZHbbA,lowM,highM)
  nums[r]['All']['ggZH_HToCC_ZToQQ'] = getHistIntegral(hggZHccA,lowM,highM)
  nums[r]['All']['ggZH_HToBB_ZToQQ'] = getHistIntegral(hggZHbbA,lowM,highM)
  nums[r]['All']['QCD'] = getHistIntegral(hQCDA,lowM,highM)
  nums[r]['All']['WJ'] = getHistIntegral(hWJA,lowM,highM)
  nums[r]['All']['ZJ'] = getHistIntegral(hZJA,lowM,highM)
  nums[r]['All']['TT'] = getHistIntegral(hTTA,lowM,highM)
  nums[r]['All']['ST'] = getHistIntegral(hSTA,lowM,highM)
  nums[r]['All']['WW'] = getHistIntegral(hWWA,lowM,highM)
  nums[r]['All']['WZ'] = getHistIntegral(hWZA,lowM,highM)
  nums[r]['All']['ZZ'] = getHistIntegral(hZZA,lowM,highM)
  
  #rebinning
  hDatA.Rebin(nRebin)
  hDatA = Rebinning(hDatA,[lowM,highM])
  hQCDA.Rebin(nRebin)
  hQCDA = Rebinning(hQCDA,[lowM,highM])
  hZHcc.Rebin(nRebin)
  hZHcc = Rebinning(hZHcc,[lowM,highM])
  hZHbb.Rebin(nRebin)
  hZHbb = Rebinning(hZHbb,[lowM,highM])
  hTop.Rebin(nRebin)
  hTop = Rebinning(hTop,[lowM,highM])
  hVJ.Rebin(nRebin)
  hVJ = Rebinning(hVJ,[lowM,highM])
  hVV.Rebin(nRebin)
  hVV = Rebinning(hVV,[lowM,highM])
  if doCustomBinning:
    hDatA = utl_func.customBin(hDatA,xDiv)
    hQCDA = utl_func.customBin(hQCDA,xDiv)
    hZHcc = utl_func.customBin(hZHccA,xDiv)
    hZHbb = utl_func.customBin(hZHbbA,xDiv)
    hTop = utl_func.customBin(hTop,xDiv)
    hVJ = utl_func.customBin(hVJ,xDiv)
    hVV = utl_func.customBin(hVV,xDiv)
  #save histograms
  fOut.cd()
  hDatA.SetName("data_obs")
  hQCDA.SetName("QCD")
  hZHcc.SetName("ZHcc")
  hZHbb.SetName("ZHbb")
  hTop.SetName("Top")
  hVJ.SetName("VJ")
  hVV.SetName("VV")
  hQCDA.Write()
  hDatA.Write()
  hZHcc.Write()
  hZHbb.Write()
  hTop.Write()
  hVJ.Write()
  hVV.Write()

#now prepare data card
write_data_card(dc_name,fOut)
  



