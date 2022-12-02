import ROOT
import sys,os
import copy
import math
sys.path.append('/uscms_data/d3/duong/CMSSW/CMSSW_7_6_5/src/ZplusC/python/')
import ConfigParser
import myutils.util_funcs as utl_func
import myutils as utl

ROOT.gROOT.Macro(os.path.expanduser('~/rootLogOn_forPyROOT.C' ))
ROOT.gROOT.SetBatch(True)

def scaleToLumi1(fName, xSec, lumi):
  f = ROOT.TFile.Open(fName, 'read')
  hTmp = f.Get('Nevt')
  nP = hTmp.GetBinContent(3)
  nN = hTmp.GetBinContent(1)
  return lumi*xSec/(nP-nN)


def getHist(pN,samName,fH,lS): #samName = ['Electron'],['DY_0J','DY_1J','DY_2J']...
  hOut = {}
  #print pN
  for y in years:
  #for y in ['17']:
    print samName[0], pN, y
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

##########################
#Main
##########################

years = ['16','17','18']

#regions = ['VbbHcc_boosted_twojets']
#regions = ['VbbHcc_boosted_select1','VbbHcc_boosted_select2']
regions = ['VbbHcc_other']

summary_control_plot_name = 'summary_control_plot_zjet_zHFjet.txt'

cfg = utl.BetterConfigParser()
cfg.read('../Configs/config.ini')

plotFolder = '../full_results/other/'
#plotFolder = '../condor_results/NONE/'

lumiS = {}
for y in years:
  lumiTmp = float(cfg.get('General','lumi_'+y))/1000.
  lumiTmp = format("%.1f" % lumiTmp)
  lumiS[y] = str(lumiTmp)
print lumiS 

#ss = ['JetHT','ZH_HToCC_ZToQQ','ggZH_HToCC_ZToQQ','ZH_HToBB_ZToQQ','ggZH_HToBB_ZToQQ','QCD_HT500to700','QCD_HT700to1000','QCD_HT1000to1500','QCD_HT1500to2000','QCD_HT2000toInf']

## Boosted Analysis
ss = ['JetHT','ZH_HToCC_ZToQQ','ggZH_HToCC_ZToQQ','ZH_HToBB_ZToQQ','ggZH_HToBB_ZToQQ','QCD_HT300to500_v9','QCD_HT500to700_v9','QCD_HT700to1000_v9','QCD_HT1000to1500_v9','QCD_HT1500to2000_v9','QCD_HT2000toInf_v9','WJetsToQQ_HT-400to600','WJetsToQQ_HT-600to800','WJetsToQQ_HT-800toInf','WJetsToLNu_HT-400to600','WJetsToLNu_HT-600to800','WJetsToLNu_HT-800to1200','WJetsToLNu_HT-1200to2500','WJetsToLNu_HT-2500toInf','ZJetsToQQ_HT-400to600','ZJetsToQQ_HT-600to800','ZJetsToQQ_HT-800toInf','TTToHadronic','TTToSemiLeptonic','TTTo2L2Nu','ST_t-channel_antitop','ST_t-channel_top','ST_tW-channel_antitop','ST_tW-channel_top','WW','WZ','ZZ']

## Resolved Analysis
ss = [#'JetHT',
'ZH_HToCC_ZToQQ', 'ggZH_HToCC_ZToQQ', 'ZH_HToBB_ZToQQ', 'ggZH_HToBB_ZToQQ', 'QCD_HT200to300_v9', 'WJetsToQQ_HT-400to600', 'WJetsToLNu_HT-400to600', 'ZJetsToQQ_HT-400to600', 'TTToHadronic', 'TTToSemiLeptonic', 'TTTo2L2Nu', 'ST_t-channel_antitop', 'ST_t-channel_top', 'ST_tW-channel_antitop', 'ST_tW-channel_top', 'WW', 'WZ', 'ZZ']

fNames = {}
xSecs = {}
lumiScales = {}
fHist = {}

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
        lumiScales[s][y][iN] = scaleToLumi1(fNames[s][y][iN],xSecs[s][y][iN],lumi)
 

nums = {}
#print fNames

for r in regions:
  
  nums[r] = {}
  
  plotNames = cfg.get('Plots',r + '_plot').split(',')

  for plN in plotNames:
    #hN = r + '_' + plN
    hN = 'VbbHcc_' + plN
    #if plN == 'CutFlow':
    #  hN = plN + '_' + r

    #print hN, plN # (Histogram Name, Plot Name)
    
    #hDat = getHist(hN,['JetHT'],fHist,lumiScales)
    hZHcc = getHist(hN,['ZH_HToCC_ZToQQ'],fHist,lumiScales)
    hZHbb = getHist(hN,['ZH_HToBB_ZToQQ'],fHist,lumiScales)
    hggZHcc = getHist(hN,['ggZH_HToCC_ZToQQ'],fHist,lumiScales)
    hggZHbb = getHist(hN,['ggZH_HToBB_ZToQQ'],fHist,lumiScales)
    #hQCD = getHist(hN,['QCD_HT500to700','QCD_HT700to1000','QCD_HT1000to1500','QCD_HT1500to2000','QCD_HT2000toInf'],fHist,lumiScales)
    #hQCD = getHist(hN,['QCD_HT300to500_v9','QCD_HT500to700_v9','QCD_HT700to1000_v9','QCD_HT1000to1500_v9','QCD_HT1500to2000_v9','QCD_HT2000toInf_v9'],fHist,lumiScales)
    hQCD = getHist(hN, ['QCD_HT200to300_v9'], fHist, lumiScales)
    hWJ = getHist(hN, ['WJetsToQQ_HT-400to600'], fHist, lumiScales)
    hZJ = getHist(hN, ['ZJetsToQQ_HT-400to600'], fHist, lumiScales)
    #hWJ = getHist(hN,['WJetsToQQ_HT-400to600','WJetsToQQ_HT-600to800','WJetsToQQ_HT-800toInf','WJetsToLNu_HT-400to600','WJetsToLNu_HT-600to800','WJetsToLNu_HT-800to1200','WJetsToLNu_HT-1200to2500','WJetsToLNu_HT-2500toInf'],fHist,lumiScales)
    #hZJ = getHist(hN,['ZJetsToQQ_HT-400to600','ZJetsToQQ_HT-600to800','ZJetsToQQ_HT-800toInf'],fHist,lumiScales)
    hTT = getHist(hN,['TTToHadronic','TTToSemiLeptonic','TTTo2L2Nu'],fHist,lumiScales)
    hST = getHist(hN,['ST_t-channel_antitop','ST_t-channel_top','ST_tW-channel_antitop','ST_tW-channel_top'],fHist,lumiScales)
    hWW = getHist(hN,['WW'],fHist,lumiScales)
    hWZ = getHist(hN,['WZ'],fHist,lumiScales)
    hZZ = getHist(hN,['ZZ'],fHist,lumiScales)

    ##########################
    #stack plots for each year 
    ##########################

    for y in years:
      #for y in ['17']:
      tmps = cfg.get(plN,'xAxisRange').split(',')
      xA_range = []
      if 'Pi' not in tmps[1]:
        xA_range = [float(tmps[0]),float(tmps[1])]
      else:
        #xA_range = [-ROOT.TMath.Pi(),ROOT.TMath.Pi()]
        xA_range = [0,ROOT.TMath.Pi()]
      xA_title = cfg.get(plN,'xAxisTitle')
      nRebin = int(cfg.get(plN,'rebin'))
      
      plots_process = [#hDat[y].Clone().Rebin(nRebin),
      hQCD[y].Clone().Rebin(nRebin),hST[y].Clone().Rebin(nRebin),hTT[y].Clone().Rebin(nRebin),hZJ[y].Clone().Rebin(nRebin),hWJ[y].Clone().Rebin(nRebin),hWW[y].Clone().Rebin(nRebin),hWZ[y].Clone().Rebin(nRebin),hZZ[y].Clone().Rebin(nRebin),hZHbb[y].Clone().Rebin(nRebin),hggZHbb[y].Clone().Rebin(nRebin),hZHcc[y].Clone().Rebin(nRebin),hggZHcc[y].Clone().Rebin(nRebin)]
      #plots_process = [hDat[y].Clone().Rebin(nRebin),hZHbb[y].Clone().Rebin(nRebin),hggZHbb[y].Clone().Rebin(nRebin),hZHcc[y].Clone().Rebin(nRebin),hggZHcc[y].Clone().Rebin(nRebin)]
      
      plotNames_process = []
      dataTitle = 'Data (JetHT, 20'+y+')' 
      #plotNames_process = [dataTitle, 'ZHbb', 'ggZHbb', 'ZHcc', 'ggZHcc']
      plotNames_process = [#dataTitle, 
       'QCD', 'Single top', 't#bar{t}','Z + jets', 'W + jets', 'WW', 'WZ', 'ZZ', 'ZHbb', 'ggZHbb', 'ZHcc', 'ggZHcc']
      #plotNames_process = ['QCD', 'Single top', 't#bar{t}','Z + jets', 'W + jets', 'WW', 'WZ', 'ZZ', 'ZHbb', 'ggZHbb', 'ZHcc', 'ggZHcc']


      #utl_func.makeStackPlot(plots_process, plotNames_process, plN + '_' + r +'_'+y, plotFolder + '/20'+y, xA_title, xA_range, 'MC unc. (stat.)', False, lumi=lumiS[y])
      logY=False
      if 'CutFlow' in plN: logY=True
      utl_func.makeStackPlot(plots_process, plotNames_process, plN + '_' + r +'_'+y, plotFolder + '/20'+y+'_QCDv9', xA_title, xA_range, 'MC unc. (stat.)', False, logY=logY, lumi=lumiS[y])
    
    ############################
    #Plot control plot for all years
    ############################
    #print ">>>>>>>>>>>>>>"
    #print hDat
      
    #hDatA = hDat['16'].Clone(hDat['16'].GetName()+'_all')
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

    for y in ['16','17']:
      #hDatA.Add(hDat[y])
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

    
    plots_process = [#hDatA.Clone().Rebin(nRebin),
        hQCDA.Clone().Rebin(nRebin),
        hSTA.Clone().Rebin(nRebin),
        hTTA.Clone().Rebin(nRebin),
        hZJA.Clone().Rebin(nRebin),
        hWJA.Clone().Rebin(nRebin),
        hWWA.Clone().Rebin(nRebin),
        hWZA.Clone().Rebin(nRebin),
        hZZA.Clone().Rebin(nRebin),
        hZHbbA.Clone().Rebin(nRebin),
        hggZHbbA.Clone().Rebin(nRebin),
        hZHccA.Clone().Rebin(nRebin),
        hggZHccA.Clone().Rebin(nRebin)]
    
    plotNames_process = []
    dataTitle = 'Data (JetHT)' 
    #plotNames_process = [dataTitle, 'ZHbb', 'ggZHbb', 'ZHcc', 'ggZHcc']
    #plotNames_process = [dataTitle, 'QCD', 'ZHbb', 'ggZHbb', 'ZHcc', 'ggZHcc']
    plotNames_process = [#dataTitle, 
     'QCD', 'Single top', 't#bar{t}','Z + jets', 'W + jets', 'WW', 'WZ', 'ZZ', 'ZHbb', 'ggZHbb', 'ZHcc', 'ggZHcc']
    #plotNames_process = ['QCD', 'Single top', 't#bar{t}','Z + jets', 'W + jets', 'WW', 'WZ', 'ZZ', 'ZHbb', 'ggZHbb', 'ZHcc', 'ggZHcc']


    logY=False
    if 'CutFlow' in plN: logY=True
    utl_func.makeStackPlot(plots_process, plotNames_process, plN + '_' + r +'_all', plotFolder + 'All_QCDv9', xA_title, xA_range, 'MC unc. (stat.)', False, logY=logY, lumi='138',minY_forLog = 0.3)
