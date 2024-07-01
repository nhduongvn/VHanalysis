import ROOT
import os,sys
import math
import myutils
from array import array
from math import *

sys.path.append('/uscms_data/d3/duong/CMSSW/CMSSW_7_6_5/src/ZplusC/python/')

colors = [416+1, 632+1, 600+1, 400+1, 900-2, 432+1, 616+1, 616+3] #Red, green, blue, yellow, pink,cyan,magnetan 
colors_zj = [416+3, 416+2, 416+1] 

def pause():
   rep = ''
   while not rep in [ 'q', 'Q' ]:
     rep = raw_input( 'enter "q" to quit: ' )
     if len(rep) > 1:
       rep = rep[0]


def deltaPhi(phi1, phi2):
    '''result = phi1 - phi2
    if result > ROOT.TMath.Pi():
      result -= 2*ROOT.TMath.Pi()
    elif result <= -ROOT.TMath.Pi():
      result += 2*ROOT.TMath.Pi()
    return result
    '''    
    result = phi1 - phi2
    while (result > math.pi): result -= 2*math.pi
    while (result <= -math.pi): result += 2*math.pi
    return result

def deltaR(eta1, phi1, eta2, phi2):
    deta = eta1 - eta2
    dphi = deltaPhi(phi1, phi2)
    return ROOT.TMath.Sqrt(deta*deta + dphi*dphi);

def sortPt(idxs, pts): #idxs are the index in pts array. For example pts are pts of all jets and idxs is array contain selected jet idex in pts array(for example after pt, eta cut)
  for i in range(0, len(idxs)):
    for j in range(i+1, len(idxs)):
      idx_i = idxs[i]
      idx_j = idxs[j] 
      if pts[idx_j] > pts[idx_i]:
        idxs[i] = idx_j
        idxs[j] = idx_i

def sortPtFatjet(idxs, pts, nJet):
  idxTmps = []
  for i in range(0, nJet):
    idxTmps.append(idxs[i])
  sortPt(idxTmps,pts)
  for i in range(0,nJet):
    idxs[i] = idxTmps[i]

#this is used to get the folder from a text file containing a list of folder and sample indentifider
def getInputFolder(sampleList, identifier, addSubFolder=True):
  lines = open(sampleList).readlines()
  for l in lines:
    if '#' in l: continue
    if identifier in l:
      if addSubFolder: inFile_folder = l.split()[0] + '/' + identifier
      else: inFile_folder = l.split()[0] + '/'
      if 'root://cmseos.fnal.gov' in inFile_folder:
        inFile_folder = inFile_folder.split('root://cmseos.fnal.gov')[1]
        print '>>>>>>>>>>>>>>>>>>FOLDER of root file: ', inFile_folder
        return inFile_folder
  print 'No input folder found in ', sampleList, ' for ', identifier
  return ''



def findSubFolders(path, fileList,eos=True):
  if path.find('failed') != -1: return 1
  os.system('rm tmp.txt')
  if eos: os.system('xrdfs root://cmseos.fnal.gov ls -u ' + path + '/ > tmp.txt')
  else: os.system('ls ' + path + '/ > tmp.txt')
  
  f = open('tmp.txt')
  lines = f.readlines()
  f.close()
  #print lines
  if len(lines) == 0:
    return 0
  
  for line in lines:
    line = line.replace('\n','')
    if line.find('log.tar.gz') != -1: 
      continue
    if not eos: line = path + '/' + line
    if line.find('.root') != -1: 
      os.system('echo \'' + line + '\' >> ' + fileList)
    else:
      if eos:
        line = '/store' + line.split('/store')[1]
      findSubFolders(line,fileList)
     
  return 1

def getFileListUseGrep(path, fileName_prefix_forGrep, fileList, eos=True):
  os.system('rm tmp.txt')
  print 'xrdfs root://cmseos.fnal.gov ls -u ' + path + '/' + ' | grep ' + fileName_prefix_forGrep + ' > tmp.txt'
  if eos: os.system('xrdfs root://cmseos.fnal.gov ls -u ' + path + '/' + ' | grep ' + fileName_prefix_forGrep + ' > tmp.txt')
  else: os.system('ls ' + path + '/'  + ' | grep ' + fileName_prefix_forGrep + ' > tmp.txt' )
  
  f = open('tmp.txt')
  lines = f.readlines()
  f.close()
  #print lines
  if len(lines) == 0:
    return 0
  
  for line in lines:
    line = line.replace('\n','')
    if line.find('log.tar.gz') != -1: 
      continue
    if not eos: line = path + '/' + line
    if line.find('.root') != -1: 
      os.system('echo \'' + line + '\' >> ' + fileList)
  
  return 1



def VtxMassCorr( pv_x,  pv_y,  pv_z,  sv_x,  sv_y,  sv_z,  sv_px,  sv_py,  sv_pz,  sv_mass):
    #sqrt(vtxMass^2 + p_T_rel^2) + p_T_rel
    pv = ROOT.TVector3(pv_x, pv_y, pv_z)
    sv = ROOT.TVector3(sv_x, sv_y, sv_z)
    fl = ROOT.TVector3(sv - pv)
    sv_p = ROOT.TVector3(sv_px, sv_py, sv_pz)
    if fl.Mag2() > 0:
      sv_pt2 = fl.Cross(sv_p).Mag2()/fl.Mag2()
    else:
      sv_pt2 = 0
    return ROOT.TMath.Sqrt(sv_mass*sv_mass + sv_pt2) + ROOT.TMath.Sqrt(sv_pt2)
  
def scaleToLumi(fName, xSec, lumi):
  f = ROOT.TFile.Open(fName, 'read')
  hTmp = f.Get('CountPosWeight')
  hTmp1 = f.Get('CountNegWeight')
  return lumi*xSec/(hTmp.GetBinContent(1)-hTmp1.GetBinContent(1))
  #hTmp1 = f.Get('CountWeighted')
  #return lumi*xSec/(hTmp1.GetBinContent(1))

def getHisto(fName, histname, axis, varName, cut, scale = '1'):
  if fName == '':
    if len(varName) == 1:
      h = ROOT.TH1D(histname, histname, axis['x'][0], axis['x'][1], axis['x'][2])
    if len(varName) == 2:
      h = ROOT.TH2D(histname, histname, axis['x'][0], axis['x'][1], axis['x'][2], axis['y'][0], axis['y'][1], axis['y'][2])
    return h
  
  cut = '(' + cut + ')*(' + scale + ')'
  print '========================================================'
  print 'Input file: ', fName
  print 'Cut and scale: ', cut
  print 'Var: ',
  for i in range(len(varName)):
    print varName[i], ' '
  
  f = ROOT.TFile.Open(fName, 'read')
  tr = f.Get('tree')
  if len(varName) == 1:
    h = ROOT.TH1D(histname, histname, axis['x'][0], axis['x'][1], axis['x'][2])
  if len(varName) == 2:
    h = ROOT.TH2D(histname, histname, axis['x'][0], axis['x'][1], axis['x'][2], axis['y'][0], axis['y'][1], axis['y'][2])
  
  h.Sumw2()
  
  if len(varName) == 1:
    tr.Draw(varName[0] + '>>' + histname, cut)
  if len(varName) == 2:
    tr.Draw(varName[1] + ':' + varName[0] + '>>' + histname, cut)
  
  h.SetDirectory(0)

  return h


def PtReweight(h2D, hRat, svtType = 'incVtxMass'):
  
  h2D_reweight = h2D.Clone(h2D.GetName()+'_ptReweight')
  #h2D_reweight.Reset()

  pt_axis = h2D.GetYaxis()
  vtxMass_axis = h2D.GetXaxis()
  
  for iPt in range(1, hRat.GetNbinsX() + 1):
    pt = hRat.GetBinLowEdge(iPt)
    w = hRat.GetBinContent(iPt)
    if svtType == 'incVtxMass' and pt > 80: #60 
      print 'Skip reweight from ', pt
      continue 
    if svtType == 'vtxMass' and pt > 100: #100
      print 'Skip reweight from ', pt
      continue 
    iPt1 = pt_axis.FindFixBin(pt)
    for iVtxMass in range(1, vtxMass_axis.GetNbins()+1):
      binContent = h2D.GetBinContent(iVtxMass,iPt1)
      binError = h2D.GetBinError(iVtxMass,iPt1)
      h2D_reweight.SetBinContent(iVtxMass,iPt1,binContent*w)
      h2D_reweight.SetBinError(iVtxMass,iPt1,binError*w)
  
  return h2D_reweight

def SVT_mass_correction(hIn,syst="",tagName='CSVM'):
  hOut = hIn.Clone(hIn.GetName() + '_corrected')
  for iBin in range(1, hIn.GetNbinsX() + 1):
    x = hIn.GetBinCenter(iBin)
    weight = 1.29204887679 -0.137256571892*x + 0.00397137662104*x*x -0.0669127644504/x
    if tagName == 'CtagT':
      weight = 1.51349285982 -0.323289359347*x + 0.0267369617725*x*x -0.113797075832/x
    if syst == 'JECUp':
      weight = 1.32396590778 -0.158421744478*x + 0.00644563525772*x*x -0.0704269235991/x
      if tagName == 'CtagT':
        weight = 1.54496178986 -0.347379776841*x + 0.0297502069206*x*x -0.11792213672/x 
    if syst == 'JECDown':
      weight = 1.27428457596 -0.126687231396*x + 0.00310477883054*x*x -0.0646743248746/x
      if tagName == 'CtagT':
        weight = 1.50286286848 -0.316774186141*x + 0.0263482939159*x*x -0.111245263127/x
    if syst == "gbbUp":
      weight = 1.3239757698 -0.164866263534*x + 0.0103106446217*x*x -0.0781314591651/x
      if tagName == 'CtagT':
        weight = 1.502352187 -0.320435587585*x + 0.0283932048926*x*x -0.111997161303/x
    if syst == "gbbDown":
      weight = 1.24735732663 -0.100051708613*x -0.00427028669725*x*x -0.0514925091229/x
      if tagName == 'CtagT':
        weight = 1.52297409634 -0.324405258875*x + 0.0245798808583*x*x -0.115073846588/x

    hOut.SetBinContent(iBin,weight*hOut.GetBinContent(iBin))
    hOut.SetBinError(iBin,weight*hOut.GetBinError(iBin))

  return hOut

def myText(txt="CMS Preliminary",ndcX=0,ndcY=0,size=0.8):
    ROOT.gPad.Update()
    text = ROOT.TLatex()
    text.SetNDC()
    text.SetTextColor(ROOT.kBlack)
    text.SetTextSize(text.GetTextSize()*size)
    text.SetTextFont(42)
    text.DrawLatex(ndcX,ndcY,txt)
    return text


def makeStackPlot(plots, plotNames_new, cName, plotDir = 'Test/', xAxisTitle = 'Jet M_{SV} [GeV]', xAxisRange = [0,10], uncName = 'MC unc. (stat.)', normMC=True, logY=False, normBinWidth = -1):
  
  #app = ROOT.TApplication("App", 0, 0)
  
  #colors = [3,2,4,5,6]

  c = ROOT.TCanvas(cName,cName, 600, 600)
  c.SetFillStyle(4000)
  c.SetFrameFillStyle(1000)
  c.SetFrameFillColor(0)

  topPad = ROOT.TPad('topPad','topPad',0,0.3 ,1.0,1.0)
  if logY: topPad.SetLogy()
  topPad.SetBottomMargin(0)
  topPad.SetLeftMargin(0.12709)
  topPad.SetRightMargin(0.0434783)
  topPad.Draw()

  bottomPad = ROOT.TPad('bottomPad','bottomPad',0,0.0,1.0,0.3)
  bottomPad.SetTopMargin(0.)
  bottomPad.SetBottomMargin(0.35)
  bottomPad.Draw()

  topPad.cd()

  allStack = ROOT.THStack('st','')
  l = ROOT.TLegend(0.57, 0.52,0.9,0.87)
  l.SetLineWidth(2)
  l.SetBorderSize(0)
  l.SetFillColor(0)
  #l.SetFillStyle(4000) #seems causing problem why this doesn't work?????
  l.SetTextFont(42)
  l.SetTextSize(0.05)


  MC_integral=0

  for i in range(1, len(plots)):
      #lastBin = plots[i].GetNbinsX()
      #plots[i].SetBinContent(lastBin, plots[i].GetBinContent(lastBin) + plots[i].GetBinContent(lastBin + 1))
      MC_integral += plots[i].Integral()

  normScale = plots[0].Integral()/MC_integral
  if not normMC: normScale = 1
  else: print 'Scale MC by: ', normScale

  l.AddEntry(plots[0], plotNames_new[0],'p')
  iColor = 0
  for i in range(len(plots)-1, 0, -1):
      plots[i].Scale(normScale)
      plots[i].SetFillColor(colors[iColor])
      l.AddEntry(plots[i], plotNames_new[i],'F')
      iColor = iColor + 1


  #rebin
  #for i in range(0, len(plots)):
  #    plots[i].Rebin(2)

  #create stack
  for i in range(1, len(plots)):
      allStack.Add(plots[i])

  allMC=allStack.GetStack().Last().Clone()
  theErrorGraph = ROOT.TGraphErrors(allMC)
  theErrorGraph.SetFillColor(ROOT.kGray+3)
  theErrorGraph.SetFillStyle(3013)
  l.AddEntry(theErrorGraph,uncName,"fl")
  
  allStack.Draw("hist")
  allStack.GetXaxis().SetRangeUser(xAxisRange[0],xAxisRange[1])
  allStack.GetYaxis().SetTitle('Events/' + str(plots[0].GetBinWidth(1)))
  if normBinWidth >= 0:
    allStack.GetYaxis().SetTitle('Events/' + str(normBinWidth))
  allStack.GetYaxis().SetTitleSize(0.057)
  allStack.GetYaxis().SetTitleOffset(1.2) #the more the more distance from axis
  allStack.GetYaxis().SetLabelSize(0.05)
  allStack.SetMaximum(1.2*ROOT.TMath.Max(plots[0].GetMaximum(),allStack.GetMaximum()))
  allStack.SetMinimum(0.001)
  plots[0].Draw("same E")
  plots[0].SetMarkerStyle(20)
  plots[0].SetMarkerSize(1.2)
  plots[0].SetLineWidth(2)
  theErrorGraph.Draw('SAME2')

  l.Draw()

  myText('CMS Internal #sqrt{s} = 13 TeV, 35.9 fb^{-1}',0.5,0.937775,1.0)

  topPad.Update()
  
  ##############################
  #bottom pad
  ##############################
  bottomPad.cd()
  
  bottomPad.SetLeftMargin(0.12709)
  bottomPad.SetRightMargin(0.0434783)
  bottomPad.SetTopMargin(0.03)

  ROOT.gPad.SetTicks(1,1)

  l2 = ROOT.TLegend(0.7, 0.8,0.93,0.87)
  l2.SetLineWidth(2)
  l2.SetBorderSize(0)
  l2.SetFillColor(0)
  #l2.SetFillStyle(4000)
  l2.SetTextSize(0.075)
  l2.SetNColumns(2)


  allMC=allStack.GetStack().Last().Clone()
  ratio, error = myutils.Ratio.getRatio(plots[0],allMC,allMC.GetXaxis().GetXmin(),allMC.GetXaxis().GetXmax(),"",100, True)
  ksScore = plots[0].KolmogorovTest( allMC )
  chiScore = plots[0].Chi2Test( allMC , "UWCHI2/NDF")
  print 'ksScore:  ', ksScore
  print 'chiScore: ', chiScore
  ratio.SetStats(0)
  ratio.GetXaxis().SetTitle(xAxisTitle)
  ratio.GetXaxis().SetRangeUser(xAxisRange[0],xAxisRange[1])
  ratioError = ROOT.TGraphErrors(error)
  ratioError.SetFillColor(ROOT.kGray+3)
  ratioError.SetFillStyle(3013)
  ratio.Draw("E1")

  l2.AddEntry(ratioError,"MC unc. (stat.)","f")
  l2.SetTextFont(42)
  l2.SetTextSize(0.1)
  #l2.Draw()

  ratioError.Draw('SAME2')
  ratio.Draw("E1SAME")
  ratio.SetMarkerStyle(20)
  ratio.SetMarkerSize(1.2)
  ratio.SetLineWidth(2)
  ratio.SetTitle("")
  ratio.GetXaxis().SetTitleSize(0.12)
  ratio.GetXaxis().SetLabelSize(0.12)
  ratio.GetXaxis().SetTitleOffset(1.1)
  ratio.GetYaxis().SetTitleSize(0.12)
  ratio.GetYaxis().SetLabelSize(0.12)
  ratio.GetYaxis().SetRangeUser(0.4,1.6)
  #m_one_line = ROOT.TLine(allMC.GetXaxis().GetXmin(),1,allMC.GetXaxis().GetXmax(),1)
  m_one_line = ROOT.TLine(xAxisRange[0],1,xAxisRange[1],1)
  m_one_line.SetLineStyle(ROOT.kSolid)
  m_one_line.Draw("same")
  
  bottomPad.Update()

  #c.ForceUpdate()
  
  #input('hit something')
  
  #pause()
  c.Print(plotDir + '/' + cName + '.png')
  c.Print(plotDir + '/' + cName + '.pdf')
  c.Print(plotDir + '/' + cName + '.eps')
  c.Print(plotDir + '/' + cName + '.C')

  
  return c 
  
  

  #app.Run()

def shapeComparePlot(hOri, plotLegends, plotName, xAxisTitle = 'Jet M_{SV} [GeV]', xAxisRange = [0,10], showStatBoxes = False, setLogY=False, newBinning=[]):

  #xAxisRange = [0,10]
  if len(hOri) != 2:
    print 'Error: exact 2 histogram needed but ', len(hOri), ' provided'
    return 0
  hIn = []
  for hTmp in hOri:
    hIn.append(hTmp.Clone(hTmp.GetName() + '_clone_for_plotting'))

  bins = array('d',newBinning)
  h = []
  nBin = len(newBinning) - 1
  if len(newBinning) == 0:
    h.append(hIn[0])
    h.append(hIn[1])
  else:
    h.append(hIn[0].Rebin(nBin,hIn[0].GetName() + '_rebin',bins))
    h.append(hIn[1].Rebin(nBin,hIn[1].GetName() + '_rebin',bins))

  if not showStatBoxes:
    h[0].SetStats(0)
    h[1].SetStats(0)

  print 'Normalize the shape'
  h[0].Scale(1./h[0].Integral())
  h[1].Scale(1./h[1].Integral())
  
  yAxis_scale = 1.6*(h[0].GetMaximum())
  for i in range(1,len(h)):
    scale = 1.6*(h[i].GetMaximum())
    if scale > yAxis_scale:
      yAxis_scale = scale

  hR = h[0].Clone('Ratio')
  hR.Divide(h[1])
  
  ksScore = h[0].KolmogorovTest( h[1] )
  chiScore = h[0].Chi2Test( h[1] , "UWCHI2/NDF")
  print 'KS score: ', ksScore
  print 'Chi2:     ', chiScore

  c = ROOT.TCanvas('c_' + plotName,'', 600, 600)
  c.SetFillStyle(4000)
  c.SetFrameFillStyle(1000)
  c.SetFrameFillColor(0)

  topPad = ROOT.TPad('topPad','topPad',0,0.3 ,1.0,1.0)
  topPad.SetBottomMargin(0)
  topPad.SetLeftMargin(0.12709)
  topPad.SetRightMargin(0.0434783)
  
  topPad.Draw()

  bottomPad = ROOT.TPad('bottomPad','bottomPad',0,0.0,1.0,0.3)
  bottomPad.SetLeftMargin(0.12709)
  bottomPad.SetRightMargin(0.0434783)
  bottomPad.SetTopMargin(0.04)
  bottomPad.SetBottomMargin(0.35)
  bottomPad.Draw()

  topPad.cd()
  if setLogY: topPad.SetLogy()
  l = ROOT.TLegend(0.4, 0.6, 0.9, 0.87)
  #l = ROOT.TLegend(0.57, 0.6,0.9,0.87)
  #l = ROOT.TLegend(0.5, 0.6,0.8,0.9)
  l.SetLineWidth(2)
  l.SetBorderSize(0)
  l.SetFillColor(0)
  l.SetTextFont(42)
  l.SetTextSize(0.05)


  h[1].SetMarkerStyle(21)
  h[1].SetMarkerSize(1.5)
  h[1].SetMarkerColor(4)
  h[1].SetLineColor(4)
  h[1].SetFillColor(4)
  h[1].SetFillStyle(3002)
  h[1].Draw('hist')
  h[1].SetTitle('')
  h[1].GetYaxis().SetRangeUser(0.001,yAxis_scale)
  h[1].GetXaxis().SetRangeUser(xAxisRange[0],xAxisRange[1])
  h[1].GetYaxis().SetTitleSize(0.057)
  h[1].GetYaxis().SetTitleOffset(1.2) #the more the more distance from axis
  h[1].GetYaxis().SetLabelSize(0.05)
  h[1].GetYaxis().SetTitle('Normalized scale')

  #theErrorGraph = ROOT.TGraphErrors(h[1])
  #theErrorGraph.SetFillColor(ROOT.kGray+3)
  #theErrorGraph.SetFillStyle(3013)
  #theErrorGraph.Draw('SAME2')
  
  #l.AddEntry(theErrorGraph,uncName,"fl")

  if not showStatBoxes: h[0].Draw('ep same')
  if showStatBoxes: h[0].Draw('ep sames')
  h[0].SetMarkerStyle(20)
  h[0].SetMarkerSize(1.5)

  l.AddEntry(h[0], plotLegends[0], 'lp')
  l.AddEntry(h[1], plotLegends[1], 'lf')
  l.Draw()
  
  ROOT.gPad.Update()

  if showStatBoxes:  
    st1 = (h[0].GetListOfFunctions()).FindObject("stats")
    print '>>>>', st1
    st1.SetX1NDC(.8)
    st1.SetY1NDC(.7)
    st1.SetX2NDC(.95)
    st1.SetY2NDC(.9)
    st1.SetOptStat(111110)
    st1.SetTextSize(0.03)
    st1.Draw()
    st2 = (h[1].GetListOfFunctions()).FindObject("stats")
    st2.SetX1NDC(.8)
    st2.SetY1NDC(.5)
    st2.SetX2NDC(.95)
    st2.SetY2NDC(.7)
    st2.SetOptStat(111110)
    st2.SetTextSize(0.03)
    st2.SetTextColor(4) 
    st2.Draw()

  myText('CMS Internal #sqrt{s} = 13 TeV, 35.9 fb^{-1}',0.5,0.937775,1.0)
  
  topPad.Update()
  c.Update()

  bottomPad.cd()
  ROOT.gPad.SetTicks(1,1)
  #ratio, error = myutils.Ratio.getRatio(h[0],h[1],h[1].GetXaxis().GetXmin(),h[1].GetXaxis().GetXmax(),"",100, True)
  hR.Draw('E')
  hR.SetTitle('')
  hR.SetStats(0)
  #ROOT.gPad.Update()
  #st = (hR.GetListOfFunctions()).FindObject("stats")
  #print '>>>>', st
  #st.SetOptStat(0)
  #st.Draw()
  hR.SetMarkerStyle(20)
  hR.SetMarkerSize(1.5)
  hR.GetXaxis().SetLabelSize(0.12)
  hR.GetXaxis().SetTitleSize(0.12)
  hR.GetXaxis().SetTitleOffset(1.1)
  hR.GetXaxis().SetTitle(xAxisTitle)
  hR.GetXaxis().SetRangeUser(xAxisRange[0],xAxisRange[1])
  hR.GetYaxis().SetLabelSize(0.12)
  hR.GetYaxis().SetTitleSize(0.12)
  hR.GetYaxis().SetTitleOffset(0.5)
  hR.GetYaxis().SetTitle('Data/MC')
  hR.GetYaxis().SetNdivisions(505)

  #ratioError = ROOT.TGraphErrors(error)
  #ratioError.SetFillColor(ROOT.kGray+3)
  #ratioError.SetFillStyle(3013)
  #ratioError.Draw('SAME2')
  
  hR.GetYaxis().SetRangeUser(0.4,1.6)
  #hR.GetYaxis().SetRangeUser(0.7,1.3)
  #hR.GetYaxis().SetRangeUser(0.8,1.2)
  line = ROOT.TLine(xAxisRange[0],1,xAxisRange[1],1)
  line.Draw('same')

  myText('KS test: %0.3f' % ksScore, 0.7, 0.85, 2)
   
  bottomPad.Update()

  c.Update()
  ''' 
  rep = ''
  while not rep in [ 'q', 'Q' ]:
     rep = raw_input( 'enter "q" to quit: ' )
     if 1 < len(rep):
       rep = rep[0]
  '''

  c.Print('Test/'+plotName+'.C')
  c.Print('Test/'+plotName+'.png')
  c.Print('Test/'+plotName+'.pdf')
  c.Print('Test/'+plotName+'.eps')

def shapeComparePlot_many(hOri, plotLegends, plotName, xAxisTitle = 'Jet M_{SV} [GeV]', xAxisRange = [0,10], showStatBoxes = False, doNorm = True):
  
  h = []
  for hTmp in hOri:
    h.append(hTmp.Clone(hTmp.GetName() + '_clone_for_plotting'))

  for i in range(len(h)):
    if doNorm: h[i].Scale(1./h[i].Integral())
    if not showStatBoxes: h[i].SetStats(0)
  yAxis_scale = 1.2*(h[0].GetMaximum())
  
  for i in range(1,len(h)):
    scale = 1.2*(h[i].GetMaximum())
    if scale > yAxis_scale:
      yAxis_scale = scale
  
  c = ROOT.TCanvas('c_' + plotName)
  h[0].SetTitle(plotName)
  h[0].SetLineColor(colors[0])
  h[0].Draw('hist e')
  h[0].GetXaxis().SetRangeUser(xAxisRange[0],xAxisRange[1])
  h[0].GetXaxis().SetTitle(xAxisTitle)
  h[0].GetYaxis().SetTitle('Events')
  if doNorm:
    h[0].GetYaxis().SetTitle('Normalized scale')

  h[0].SetLineWidth(2)
  h[0].GetYaxis().SetRangeUser(0,yAxis_scale)
  for i in range(1,len(h)):
      h[i].Draw("hist e sames")
      h[i].SetLineWidth(2)
      h[i].SetLineColor(colors[i])
   
  ROOT.gPad.Update()
  
  l = ROOT.TLegend(0.4, 0.73,0.6,0.9)
  l.SetBorderSize(0)
  l.SetFillColor(0)
  l.SetTextFont(62)
  l.SetTextSize(0.035)
  for i in range(0,len(h)):
      l.AddEntry(h[i], plotLegends[i], 'l')
  l.Draw()
 
  width = 0.15
  height = 0.2
  x1 = 0.8
  y1 = 0.7
  

  if showStatBoxes:
    st1 = (h[0].GetListOfFunctions()).FindObject("stats")
    st1.SetX1NDC(x1)
    st1.SetY1NDC(y1)
    st1.SetX2NDC(x1+width)
    st1.SetY2NDC(y1+height)
    st1.SetOptStat(111110)
    st1.SetTextSize(0.03)
    st1.SetTextColor(colors[0])
    st1.Draw()
    iPlot = 0
    for i in range(1,len(h)):
        st2 = (h[i].GetListOfFunctions()).FindObject("stats")
        st2.SetX1NDC(x1)
        st2.SetY1NDC(y1-(iPlot+1)*height)
        st2.SetX2NDC(x1+width)
        st2.SetY2NDC(y1-iPlot*height)
        st2.SetOptStat(111110)
        st2.SetTextSize(0.03)
        st2.SetTextColor(colors[i]) 
        st2.Draw()
        iPlot = iPlot + 1
  
   
  c.Update()
  
  rep = ''
  while not rep in [ 'q', 'Q' ]:
     rep = raw_input( 'enter "q" to quit: ' )
     if 1 < len(rep):
       rep = rep[0]
  
  c.Print('Test/'+plotName+'.C')
  c.Print('Test/'+plotName+'.png')
  c.Print('Test/'+plotName+'.pdf')
  c.Print('Test/'+plotName+'.eps')

#######################
def plotSyst(h, cName = '', xAxisTitle = 'Jet M_{SV} [GeV]', xAxisRange = [0,10]): #central, Up, Down
  hC = h[0].Clone('Central')
  hU = h[1].Clone('Up')
  hD = h[2].Clone('Down')
  hRU = hU.Clone('hRU')
  hRU.Divide(hC)
  hRD = hD.Clone('hRD')
  hRD.Divide(hC)
 
  yAxis_scale = 1.2*(hU.GetMaximum())

  c = ROOT.TCanvas('c_' + cName,'', 600, 600)
  c.SetFillStyle(4000)
  c.SetFrameFillStyle(1000)
  c.SetFrameFillColor(0)

  topPad = ROOT.TPad('topPad','topPad',0,0.3 ,1.0,1.0)
  topPad.SetBottomMargin(0.005)
  topPad.SetLeftMargin(0.12709)
  topPad.SetRightMargin(0.0434783)
  topPad.Draw()

  bottomPad = ROOT.TPad('bottomPad','bottomPad',0,0.0,1.0,0.3)
  bottomPad.SetLeftMargin(0.12709)
  bottomPad.SetRightMargin(0.0434783)
  bottomPad.SetTopMargin(0.04)
  bottomPad.SetBottomMargin(0.35)
  bottomPad.Draw()

  topPad.cd()
  l = ROOT.TLegend(0.5, 0.6,0.9,0.87)
  #l = ROOT.TLegend(0.5, 0.6,0.8,0.9)
  l.SetLineWidth(2)
  l.SetBorderSize(0)
  l.SetFillColor(0)
  l.SetTextFont(42)
  l.SetTextSize(0.05)

  hC.SetLineColor(4)
  hC.Draw('hist')
  hC.SetTitle('')
  hC.GetYaxis().SetRangeUser(0.001,yAxis_scale)
  hC.GetXaxis().SetRangeUser(xAxisRange[0],xAxisRange[1])
  hC.GetYaxis().SetTitleSize(0.057)
  hC.GetYaxis().SetTitleOffset(1.2) #the more the more distance from axis
  hC.GetYaxis().SetLabelSize(0.05)
  hC.GetYaxis().SetTitle('Events/'+str(hC.GetBinWidth(1)))

  hU.SetLineColor(3)
  hU.SetLineStyle(2)
  hRU.SetLineColor(3)
  hRU.SetLineStyle(2)
  hU.Draw('hist sames')
  
  hD.SetLineColor(2)
  hD.SetLineStyle(2)
  hRD.SetLineColor(2)
  hRD.SetLineStyle(2)
  hD.Draw('hist sames')


  l.AddEntry(hU, 'Syst. Up', 'l')
  l.AddEntry(hC, 'Central', 'l')
  l.AddEntry(hD, 'Syst. Down', 'l')
  l.Draw()
  
  myText(cName, 0.2, 0.937775, 1.0)
  
  ROOT.gPad.Update()
  st1 = (hU.GetListOfFunctions()).FindObject("stats")
  print '>>>>', st1
  st1.SetX1NDC(.8)
  st1.SetY1NDC(.7)
  st1.SetX2NDC(.95)
  st1.SetY2NDC(.9)
  st1.SetOptStat(111110)
  st1.SetTextSize(0.03)
  st1.SetTextColor(4)
  st1.Draw()
  st2 = (hC.GetListOfFunctions()).FindObject("stats")
  st2.SetX1NDC(.8)
  st2.SetY1NDC(.5)
  st2.SetX2NDC(.95)
  st2.SetY2NDC(.7)
  st2.SetOptStat(111110)
  st2.SetTextSize(0.03)
  st2.SetTextColor(2) 
  st2.Draw()
  st3 = (hD.GetListOfFunctions()).FindObject("stats")
  st3.SetX1NDC(.8)
  st3.SetY1NDC(.3)
  st3.SetX2NDC(.95)
  st3.SetY2NDC(.5)
  st3.SetOptStat(111110)
  st3.SetTextSize(0.03)
  st3.SetTextColor(3) 
  st3.Draw()
  
  topPad.Update()
  c.Update()
  
  bottomPad.cd()
  ROOT.gPad.SetTicks(1,1)
  hRU.Draw('hist')
  hRU.SetTitle('')
  hRU.SetStats(0)
  hRU.GetXaxis().SetLabelSize(0.12)
  hRU.GetXaxis().SetTitleSize(0.12)
  hRU.GetXaxis().SetTitleOffset(1.1)
  hRU.GetXaxis().SetTitle(xAxisTitle)
  hRU.GetXaxis().SetRangeUser(xAxisRange[0],xAxisRange[1])
  hRU.GetYaxis().SetLabelSize(0.12)
  hRU.GetYaxis().SetTitleSize(0.12)
  hRU.GetYaxis().SetTitleOffset(0.5)
  hRU.GetYaxis().SetTitle('Syst. fluc.')
  hRU.GetYaxis().SetNdivisions(505)

  hRD.Draw('hist same')

  hRU.GetYaxis().SetRangeUser(0.8,1.2)
  line = ROOT.TLine(xAxisRange[0],1,xAxisRange[1],1)
  line.Draw('same')
   
  bottomPad.Update()
  c.Update()
  
  #pause()

  c.Print('Test/Syst1/' + c.GetName() + '.C')
  c.Print('Test/Syst1/' + c.GetName() + '.png')
  c.Print('Test/Syst1/' + c.GetName() + '.pdf')
  c.Print('Test/Syst1/' + c.GetName() + '.eps')



#######################  
def makeLatexLine(wordIns, numFormat='%s'):
  
  words = []
  words.append(wordIns[0])
  word_formats = []
  word_formats.append('%s')

  for i in range(1, len(wordIns)):
    if numFormat != '%s':
      if float(wordIns[i]) < 0.03: 
        words.append('$\sim 0$')
        word_formats.append('%s')
      else: 
        words.append(float(wordIns[i]))
        #if float(wordIns[i]) >= 0.03 and float(wordIns[i])
        word_formats.append(numFormat)
    else:
      words.append(wordIns[i])
      word_formats.append('%s')

  #print '>>>>', words[0]
  tmp = '{0:50}'.format(words[0] + ' & ')
  
  for i in range(1,len(words)):
    st = word_formats[i] + ' & '
    if i == len(words) - 1:
      st = word_formats[i] + '\\\\'

    tmp = tmp + '{0:20}'.format(st % words[i])

  tmp = '  ' + tmp + '\n'
  #print tmp
  return tmp

def getErrors(h, includeOverFlow=False):
  err = 0
  for i in range(1, h.GetNbinsX() + 1):
    err += h.GetBinError(i)*h.GetBinError(i)
  if includeOverFlow:
    err += h.GetBinError(h.GetNbinsX() + 1)*h.GetBinError(h.GetNbinsX() + 1)
  return sqrt(err)

def getRatioErrors(num, deno, correlation = 0):
  r = num[0]/deno[0]
  return r*sqrt(num[1]*num[1]/(num[0]*num[0]) + deno[1]*deno[1]/(deno[0]*deno[0]) + 2*correlation*num[1]/num[0]*deno[1]/deno[0])

def getNumbers(nums,plots,includeOverFlow = True):
  for k,v in nums.items():
    for iPlot in range(len(plots)):
      if plots[iPlot].GetName() == k:
        nums[k].append(plots[iPlot].Integral())
        nums[k].append(getErrors(plots[iPlot]))
        if includeOverFlow:
          nums[k].append(plots[iPlot].Integral() + plots[iPlot].GetBinContent(plots[iPlot].GetNbinsX() + 1))
          nums[k].append(getErrors(plots[iPlot], True))
        
        break
  num_mc = [0,0,0,0]
  for k,v in nums.items():
    if 'Data' not in k and 'MC' not in k and 'DMCratio' not in k:
      print k, v
      num_mc[0] += v[0]
      num_mc[1] += v[1]*v[1]
      num_mc[2] += v[2]
      num_mc[3] += v[3]*v[3]
  
  num_mc[1] = sqrt(num_mc[1])
  num_mc[3] = sqrt(num_mc[3])

  nums['MC'] = num_mc

  num_ratios = [0,0,0,0]
  num_ratios[0] = nums['Data1D'][0]/nums['MC'][0]
  num_ratios[1] = getRatioErrors([nums['Data1D'][0],nums['Data1D'][1]], [nums['MC'][0],nums['MC'][1]])
  num_ratios[2] = nums['Data1D'][2]/nums['MC'][2]
  num_ratios[3] = getRatioErrors([nums['Data1D'][2],nums['Data1D'][3]], [nums['MC'][2],nums['MC'][3]])

  nums['DMCratio'] = num_ratios


'''import random
a = []
for i in range(1,11): a.append(random.uniform(1,100))

print a

idxs = [3,4,8,9]

print "Before: "
for i in range(0,len(idxs)): print a[idxs[i]]

sortPt(idxs,a)

print "After: "

for i in range(0,len(idxs)): print a[idxs[i]]
'''

