## This script makes preparations to perform limit settings
## on our V(bb)H(cc) analysis. It does the following:

## 1. prepare data card
## 2. prepare input file

## == import statements =======================================================
import ROOT
import sys,os
import copy
import math
import ConfigParser
#import BetterConfigParser

from my_funcs import *

## == custom methods ==========================================================

## Scale a file properly to its luminosity
def scaleToLumi1(fName, xSec, lumi):
  f = ROOT.TFile.Open(fName, 'read')
  hTmp = f.Get('Nevt')
  nP = hTmp.GetBinContent(3)
  nN = hTmp.GetBinContent(1)
  return lumi*xSec/(nP-nN)


## Format a line of text so that the first label is properly spaced
## on the left side and then everything follows a special spacing
## to its right.
def makeline(words):
  tmp = '{0:30}'.format(words[0])          ## first gets 30 characters
  for i in range(1, len(words)):
    tmp = tmp + '{0:20}'.format(words[i])  ## all else get 20 characters
  return tmp


## Get the proper histogram(s) per year for a given sample. It scales
## to the lumi-scale as needed.
def getHist(plot_name, sampleNames, hist_files, lumi_scales):
  
  hOut = {}
  for y in years:
    ## Get the first sample, first file
    hOut[y] = hist_files[sampleNames[0]][y][0].Get(plot_name).Clone() 
    if sampleNames[0] not in ['JetHT', 'Data']:
      hOut[y].Scale(lumi_scales[sampleNames[0]][y][0])
    
    for iS in range(len(sampleNames)):
      for fi in range(len(hist_files[sampleNames[iS]][y])):
        ## Ignore the first sample, first file as we've already grabbed it.
        if iS == 0 and fi == 0: continue
        
        h = hist_files[sampleNames[iS]][y][fi].Get(plot_name).Clone()
        if sampleNames[iS] not in ['JetHT','Data']:
          h.Scale(lumi_scales[sampleNames[iS]][y][fi])
        hOut[y].Add(h)
  
  return hOut


## Get the integral of a histogram in a given range
def getHistIntegral(h, v1=-1, v2=-1):
  tmp = [0,0]
  bBin = 0                 # include underflow bin
  eBin = h.GetNbinsX() + 1 # include overflow bin
  
  ## If we want to take a specific range of bins that isn't all of them,
  ## re-adjust our beginning and end bin variables
  if v1 != -1: bBin = h.GetXaxis().FindFixBin(v1)
  if v2 != -1: eBin = h.GetXaxis().FindFixBin(v2)
  
  ## Add the contents
  for iB in range(v1, v2+1):
    tmp[0] += h.GetBinContent(iB)
    tmp[1] += h.GetBinContent(iB)*h.GetBinError(iB)
  tmp[1] = math.sqrt(tmp[1])
  return tmp


## Rebin the histogram to account for what we want
def Rebinning(hist, xRange):
  
  ## Determine the # of bins from our range
  nBin = int((xRange[1] - xRange[0])/hist.GetBinWidth(1))
  histNew = ROOT.TH1D(hist.GetName() + '_clone', '', nBin, xRange[0], xRange[1])
  for i in range(1, histNew.GetNbinsX() + 1):
    iBin = hist.FindFixBin(histNew.GetBinLowEdge(i))
    histNew.SetBinContent(i, hist.GetBinContent(iBin))
    histNew.SetBinError(i, hist.GetBinError(iBin))
  
  ## Get the overflow
  ofBin = hist.FindFixBin(xRange[1])
  nOf = 0
  nErrOf = 0
  for i in range(ofBin, hist.GetNbinsX() + 2):
    nOf += hist.GetBinContent(i)
    nErrOf += hist.GetBinError(i)*hist.GetBinError(i)
  nErrOf = math.sqrt(nErrOf)
  histNew.SetBinContent(histNew.GetNbinsX() + 1, nOf)
  histNew.SetBinError(histNew.GetNbinsX() + 1, nErrOf)
  
  ## Get the underflow
  ufBin = histNew.FindFixBin(xRange[0]-hist.GetBinWidth(1))
  nUf = 0
  nErrUf = 0
  for i in range(0, ufBin + 1):
    nUf += hist.GetBinContent(i)
    nErrUf += hist.GetBinError(i)*hist.GetBinError(i)
  nErrUf = math.sqrt(nErrUf)
  histNew.SetBinContent(0, nUf)
  histNew.SetBinError(0, nErrUf)

  return histNew


## Get a histogram and modify its range / rebinning
def getHisto(inFile, name, scale_factor=1, xRange=[-1,-1], xDiv=[-1,-1]):
  
  hist = inFile.Get(name)
  histNew = None
  if xRange[0] != -1 and xRange[1] != -1:
    histNew = Rebinning(hist, xRange)
    histNew.Scale(scale_factor)
  else:
    histNew = hist.Clone(name + '_clone')
    histNew.Scale(scale_factor)
  
  histNew1 = None
  if xDiv[0] != -1 and xDiv[1] != -1:
    hist1 = utl_func.customBin(hist,xDiv)
    return hist1
  return hist


## Create the HiggsCombine datacard based on our information
def write_data_card(dc_name, in_file, systs='NONE'):
  
  ## Produce the file & add the top consistent lines
  dc_file = open(dc_name + '.txt', 'w')
  dc_file.write('imax 1 number of channels\n')
  dc_file.write('jmax * number of backgrounds (\'*\' = automatic)\n')
  dc_file.write('kmax * number of nuisance parameters (sources of systematical uncertainties)\n')
  st = 'shapes * * ' + in_file.GetName() + ' $PROCESS $PROCESS$SYSTEMATIC\n\n'
  dc_file.write(st)

  obs = (in_file.Get('data_obs')).Integral()
  ws = ['observation', str(obs)]
  st = makeline(ws)
  dc_file.write(st + '\n\n')

  ws = ['bin','SR']
  st = makeline(ws)
  dc_file.write(st + '\n')

  ## Add all of our samples appropriately
  ws = ['bin','']
  for i in range(len(desired_samples)):
    ws.append('SR')
  st = makeline(ws)
  dc_file.write(st + '\n')

  ws = ['process','']
  ws1 = ['process','']
  for i in range(len(desired_samples)):
    ws.append(desired_samples[i])
    ws1.append(str(i))
  st = makeline(ws)
  st1 = makeline(ws1)
  dc_file.write(st + '\n')
  dc_file.write(st1 + '\n')

  ## Write in the appropriate rates
  ws = ['rate','']
  for i in range(len(desired_samples)):
    rate = str((in_file.Get(desired_samples[i])).Integral())
    ws.append(rate)
  st = makeline(ws)
  dc_file.write(st + '\n')

  ## Lumi-scales
  ws = ['lumi','lnN',]
  for i in range(len(desired_samples)):
    ws.append('1.026')
  st = makeline(ws)
  dc_file.write(st + '\n')
  
  ## Add the appropriate background rates
  for i in range(len(desired_samples)):
    xSec = bkgr_xSec[i]
    if xSec <= 0: continue
    ws = [desired_samples[i] + '_bkgr_xSec','lnN']
    for j in range(len(desired_samples)):
      if j == i: ws.append(str(xSec))
      else: ws.append('-')
    st = makeline(ws)
    dc_file.write(st + '\n')

  ## Add any remaining details
  ws = ['* autoMCStats 25 1 1']
  st = makeline(ws)
  dc_file.write(st + '\n')

## ============================================================================
## MAIN CODE
## ============================================================================

## == These values can be edited for the proper analysis ==
years = ['16', '17', '18']
regions = ['VH_tagFirst']

desired_samples = ['ZHcc', 'ZHbb', 'QCD', 'Top', 'VJ', 'VV']
bkgr_xSec = [-1, -1, 1.2, 1.055, 1.05, 1.15]

nRebin = 20
lowM = 40
highM = 200

doCustomBinning = False
xDiv = [40.,60.,80.,90.,100.,130.,160.,200.]

ss = [ 'Data', 'ZH_HToCC_ZToQQ', 'ggZH_HToCC_ZToQQ', ## Jet HT & ZH(H->CC)
  'ZH_HToBB_ZToQQ', 'ggZH_HToBB_ZToQQ',               ## ZH(H->BB)
  'QCD_HT100to200_v9',
  'QCD_HT200to300_v9', 'QCD_HT300to500_v9',           ## QCD (200-Inf)
  'QCD_HT500to700_v9', 'QCD_HT700to1000_v9', 'QCD_HT1000to1500_v9', 
  'QCD_HT1500to2000_v9', 'QCD_HT2000toInf_v9', 
  'WJetsToQQ_HT-200to400',
  'WJetsToQQ_HT-400to600', 'WJetsToQQ_HT-600to800',   ## WJ (400-Inf)
  'WJetsToQQ_HT-800toInf', 'WJetsToLNu_HT-400to600',
  'WJetsToLNu_HT-100to200', 'WJetsToLNu_HT-200to400',
  'WJetsToLNu_HT-600to800','WJetsToLNu_HT-800to1200', 
  'WJetsToLNu_HT-1200to2500','WJetsToLNu_HT-2500toInf',
  'ZJetsToQQ_HT-200to400',
  'ZJetsToQQ_HT-400to600', 'ZJetsToQQ_HT-600to800',   ## ZJ (400-Inf)
  'ZJetsToQQ_HT-800toInf',
  'TTToHadronic','TTToSemiLeptonic','TTTo2L2Nu',      ## Top (ttbar)
  'ST_t-channel_antitop','ST_t-channel_top',          ## Top (Single Top)
  'ST_tW-channel_antitop','ST_tW-channel_top',
  'WW','WZ','ZZ'                                      ## VV
]

out_file = ROOT.TFile("../histos_tags_2024.root", "RECREATE")
dc_name = '../tmp/dataCard_tags_2024'

## ====================================
## == DO NOT MODIFY BELOW THIS POINT ==
## ====================================

#cfg = BetterConfigParser()
#cfg.read('../Configs/config.ini')
config_file = '../Configs/config.ini'
cfg = ConfigParser.ConfigParser()
cfg.read(config_file)

lumiS = {}
for y in years:
  lumiTmp = float(cfg.get('General','lumi_'+y))/1000.0
  lumiTmp = float("%.1f" % lumiTmp)
  lumiS[y] = str(lumiTmp)
print lumiS

fileNames = {}
xSecs = {}
lumiScales = {}
histFiles = {}

## Prepare the same info
for s in ss:
  
  fileNames[s] = {}
  xSecs[s] = {}
  lumiScales[s] = {}
  histFiles[s] = {}
  
  for y in years:
    lumi = float(cfg.get('General', 'lumi_'+y))
    names = cfg.get(s,'file_'+y).split(',')     ## multiple names possible
    print '>>>>>>>: ', len(names)
    xSecTmps = ['1']*len(names)   ## each name corresponds to a cross section
    kfactor = ['1']*len(names)
    if s not in ['JetHT', 'Data']:
      xSecTmps = cfg.get(s, 'xSec_'+y).split(',')
    
    fileNames[s][y] = []
    xSecs[s][y] = []
    histFiles[s][y] = []
    for iN in names:
      fileNames[s][y].append(cfg.get('Paths','path') + '/' + iN)
      histFiles[s][y].append(ROOT.TFile.Open(fileNames[s][y][-1],'READ'))
    
    print xSecTmps
    for iS in xSecTmps:
      
      ## Check if there is a kfactor in cross section
      if '*' in iS: iS = iS.split('*')
      if len(iS) == 2:
        xSecs[s][y].append(float(iS[0])*float(iS[1]))
      else:
        xSecs[s][y].append(float(iS))
    
    lumiScales[s][y] = [1]*len(names)
    for iN in range(len(fileNames[s][y])):
      if s not in ['JetHT','Data']:
        print s, y, iN, fileNames[s][y][iN]
        lumiScales[s][y][iN] = scaleToLumi1(fileNames[s][y][iN],
          xSecs[s][y][iN], lumi)


nums = {}
plN = 'H_mass'

for r in regions:
  
  nums[r] = {}
  hN = r + '_' + plN
  print hN, plN

  ## Get the appropriate histograms (Data, Signal, Bckg)
  hData = getHist(hN, ['Data'], histFiles, lumiScales)
  hZHcc = getHist(hN, ['ZH_HToCC_ZToQQ'], histFiles, lumiScales)
  hZHbb = getHist(hN, ['ZH_HToBB_ZToQQ'], histFiles, lumiScales)
  hggZHcc = getHist(hN, ['ggZH_HToCC_ZToQQ'], histFiles, lumiScales)
  hggZHbb = getHist(hN, ['ggZH_HToBB_ZToQQ'], histFiles, lumiScales)
  
  hQCD = getHist(hN, ['QCD_HT100to200_v9', 'QCD_HT200to300_v9',
    'QCD_HT300to500_v9','QCD_HT500to700_v9',
    'QCD_HT700to1000_v9','QCD_HT1000to1500_v9','QCD_HT1500to2000_v9',
    'QCD_HT2000toInf_v9'], histFiles, lumiScales)
  
  hWJ = getHist(hN, ['WJetsToQQ_HT-200to400', 'WJetsToQQ_HT-400to600',
    'WJetsToQQ_HT-600to800', 'WJetsToQQ_HT-800toInf',
    'WJetsToLNu_HT-100to200', 'WJetsToLNu_HT-200to400',
    'WJetsToLNu_HT-400to600','WJetsToLNu_HT-600to800',
    'WJetsToLNu_HT-800to1200','WJetsToLNu_HT-1200to2500',
    'WJetsToLNu_HT-2500toInf'], histFiles, lumiScales)

  hZJ = getHist(hN, ['ZJetsToQQ_HT-200to400',
    'ZJetsToQQ_HT-400to600','ZJetsToQQ_HT-600to800',
    'ZJetsToQQ_HT-800toInf'], histFiles, lumiScales)

  hTT = getHist(hN, ['TTToHadronic','TTToSemiLeptonic','TTTo2L2Nu'],
    histFiles, lumiScales)

  hST = getHist(hN, ['ST_t-channel_antitop', 'ST_t-channel_top', 
    'ST_tW-channel_antitop', 'ST_tW-channel_top'], histFiles, lumiScales)

  hWW = getHist(hN, ['WW'], histFiles, lumiScales)
  hWZ = getHist(hN, ['WZ'], histFiles, lumiScales)
  hZZ = getHist(hN, ['ZZ'], histFiles, lumiScales)
  
  ################################  
  ## Add plots for all the years
  ################################

  print "Combining plots for all years..."
  
  ## We do this by first cloning all the 2016 histograms...
  hDataA = hData['16'].Clone(hData['16'].GetName()+'_all')
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
  
  ## ...and then we add the 2017-18 data onto it
  for y in ['17','18']:
    hDataA.Add(hData[y])
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

  ## Group our processes together by the appropriate
  ## categories. Because of the small numbers of certain
  ## background signals, it is more useful to clump them
  ## togther, rather than having 20 signals to deal with.
  print "Grouping common processes..."  

  ## Combine ZH + ggZH (ZHqq)
  hZHcc_comb = hZHccA.Clone("ZHcc")
  hZHcc_comb.Add(hggZHccA)
  hZHbb_comb = hZHbbA.Clone("ZHbb")
  hZHbb_comb.Add(hggZHbbA)

  ## Combine Single Top + ttbar (Top)
  hTop = hTTA.Clone("Top")
  hTop.Add(hSTA)
  
  ## Combine WJ + ZJ (VJ)
  hVJ = hZJA.Clone("VJ")
  hVJ.Add(hWJA)
  
  ## Combine WW + WZ + ZZ (VV)
  hVV = hWWA.Clone("VV")
  hVV.Add(hWZA)
  hVV.Add(hZZA)

  ## Get the number of events per sample (integrated)
  print "Getting the no. events per sample..."
  nums[r]['All'] = {}
  nums[r]['All']['Data'] = getHistIntegral(hDataA,lowM,highM)
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

  ## Rebin our histograms
  print "Rebinning our histograms..."

  hDataA.Rebin(nRebin)
  hDataA_rebin = Rebinning(hDataA, [lowM,highM])
  hQCDA.Rebin(nRebin)
  hQCDA_rebin = Rebinning(hQCDA, [lowM,highM])

  hZHcc_comb.Rebin(nRebin)
  hZHcc_rebin = Rebinning(hZHcc_comb, [lowM,highM])
  hZHbb_comb.Rebin(nRebin)
  hZHbb_rebin = Rebinning(hZHbb_comb, [lowM,highM])
  
  hTop.Rebin(nRebin)
  hTop_rebin = Rebinning(hTop,[lowM,highM])
  hVJ.Rebin(nRebin)
  hVJ_rebin = Rebinning(hVJ,[lowM,highM])
  hVV.Rebin(nRebin)
  hVV_rebin = Rebinning(hVV,[lowM,highM])
  
  ## Save our histograms
  print "Saving the histograms..."
  
  out_file.cd()
  hDataA_rebin.SetName("data_obs")
  hDataA_rebin.Write()
  hQCDA_rebin.SetName("QCD")
  hQCDA_rebin.Write()
  hZHcc_rebin.SetName("ZHcc")
  hZHcc_rebin.Write()
  hZHbb_rebin.SetName("ZHbb")
  hZHbb_rebin.Write()
  hTop_rebin.SetName("Top")
  hTop_rebin.Write()
  hVJ_rebin.SetName("VJ")
  hVJ_rebin.Write()
  hVV_rebin.SetName("VV")
  hVV_rebin.Write()

## Now prepare the data card
write_data_card(dc_name, out_file)
