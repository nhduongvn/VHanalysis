## == IMPORT STATEMENTS =======================================================

import ROOT
import sys,os
import math
from math import *

## == COLORS ==================================================================
#colors = [ROOT.kBlack, ROOT.kBlue, ROOT.kRed]
#fill_colors = [16, 38, 46]
colors = [ROOT.kRed, ROOT.kBlack, ROOT.kAzure-4] #ROOT.kBlue
colors = [416+1, 632+1, 600+1, 400+1, 840+1, 860+1, 880+1, 900+1, 432+1, 616+1, 616+3, 800+7]
fill_colors = [46, 16, ROOT.kAzure + 1] #38
years = ["16", "17", "18"]

###############################################################################
## Scale To Lumi
###############################################################################
def ScaleToLumi1(fName, xSec, lumi):
  f = ROOT.TFile.Open(fName, 'read')
  hTmp = f.Get('Nevt')
  nP = hTmp.GetBinContent(3)
  nN = hTmp.GetBinContent(1)
  return lumi*xSec/(nP-nN)

###############################################################################
## Get Histogram
###############################################################################
def getHist(pN, samList, fList, lS, selType, scale=True):
  hOut = {}
  plotName = 'VbbHcc'
  if selType != '':
    plotName = plotName + '_' + selType 
  plotName = plotName + '_' + pN
  for y in years:
    
    ## Get the appropriate file
    hOut[y] = fList[samList[0]][y].Get(plotName).Clone() ## first sample
    #hOut[y].Scale(lS[samList[0]][y])
    
    ## Add any other possible desired samples to the plot
    for iS in range(len(samList)):
      if iS == 0: continue ## first sample already covered
      
      h = fList[samList[iS]][y].Get(plotName).Clone()
      if scale: h.Scale(lS[samList[iS]][y])
      hOut[y].Add(h)
    
  return hOut

###############################################################################
## myText Function
###############################################################################
def myText(txt="CMS Preliminary", ndcX=0, ndcY=0, size=0.8):
  ROOT.gPad.Update()
  text = ROOT.TLatex()
  text.SetNDC()
  text.SetTextColor(ROOT.kBlack)
  text.SetTextSize(text.GetTextSize()*size)
  text.SetTextFont(42)
  text.DrawLatex(ndcX, ndcY, txt)
  return text

def formStr(value, nDecimals=0):
  return str(round(value, nDecimals))

###############################################################################
## Make Plot Function
###############################################################################
def makePlot(plot, plotName, canvasName, plotDir, xAxisTitle, xAxisRange, 
  yAxisTitle, rebin, logY, lumi, line_color, fill_color, fill=False, yRange=[],
  is2D = False):
  
  ## Make the canvas
  ROOT.gStyle.SetOptStat(0)
  c = ROOT.TCanvas(canvasName, canvasName, 600, 600)
  c.SetLeftMargin(0.15)
  c.cd()
  
  ## Adjust the axes if necessary
  if len(yRange) >= 2:
    print "<<< UPDATING Y-RANGE OF PLOT >>>"
    plot.GetYaxis().SetRange(yRange[0],yRange[1])
  
  ## Appropriately modify the plot
  if fill: plot.SetFillColor(fill_color)
  plot.SetLineColor(line_color)
  plot.Rebin(rebin)
  if is2D: plot.Draw("colz")
  else: plot.Draw("HIST")
  plot.GetXaxis().SetTitle(xAxisTitle)
  plot.GetYaxis().SetTitle(yAxisTitle)
  
  ## Update the canvas & modify the y-axis if appropriate
  c.Update()
  if logY: c.SetLogy()
  
  ## Check to make sure the directory exists &
  ## then print the proper files to the output
  dirExists = os.path.exists(plotDir)
  if not dirExists:
    print "Warning: output directory does not exist."
    os.makedirs(plotDir)
    print ">>> directory created."
  
  ## Print out the plot appropriately
  extraName = ''
  if logY: extraName = '_logY'
  fullpath = plotDir + '/' + canvasName + extraName
  c.Print(fullpath + '.png')
  c.Print(fullpath + '.pdf')
  c.Print(fullpath + '.C')
  return c

###############################################################################
## Make Overlap Plot Function
###############################################################################
def makeOverlapPlot(plots, plotNames, canvasName, plotDir, xAxisTitle, xAxisRange,
  yAxisTitle, rebin, logY, lumi, stack=False, normalize=False, fill=False, custom_colors=colors, left=False):
  
  ## Make the canvas
  ROOT.gStyle.SetOptStat(0)
  c = ROOT.TCanvas(canvasName, canvasName, 600, 600)
  c.SetLeftMargin(0.15)
  c.cd()
  
  ## Prepare the legend
  x0 = 0.53; x1 = 0.89
  if left: 
    x0 = 0.17
    x1 = 0.42
  l = ROOT.TLegend(x0, 0.70, x1, 0.87)
  l.SetLineWidth(2)
  l.SetBorderSize(0)
  l.SetTextFont(42)
  l.SetTextSize(0.035)
  
  ## Overlap the plots
  allStack = ROOT.THStack('st', '')
  
  for i in range(0, len(plots)):
    if fill: plots[i].SetFillColor(fill_colors[i])
    if normalize: plots[i].Scale(1./plots[i].Integral())
    plots[i].SetLineColor(custom_colors[i])
    plots[i].Rebin(rebin)
    plots[i].SetLineWidth(2)
    l.AddEntry(plots[i], plotNames[i], 'F')
    allStack.Add(plots[i])
  
  ## Draw the plots (and legend) & modify the axes
  if stack: allStack.Draw("HIST")
  else: allStack.Draw("nostack,HIST")
  
  allStack.GetXaxis().SetTitle(xAxisTitle)
  allStack.GetYaxis().SetTitle(yAxisTitle)
  l.Draw()
  
  ## Update the canvas & modify the y-axis if appropriate
  c.Update()
  if logY: c.SetLogy() 
  
  ## Check to make sure the directory exists &
  ## then print the proper files to the output
  dirExists = os.path.exists(plotDir)
  if not dirExists:
    print "Warning: output directory does not exist."
    os.makedirs(plotDir)
    print ">>> directory created."
  
  ## Print out the plot appropriately
  extraName = ''
  if logY: extraName = '_logY'
  preBit = ''
  if normalize: extraName = extraName + '_NORM'
  fullpath = preBit + plotDir + '/' + canvasName + extraName
  c.Print(fullpath + '.png')
  c.Print(fullpath + '.pdf')
  c.Print(fullpath + '.C')
  return c

###############################################################################
## Make Ratio Plots
###############################################################################
def makeRatioPlots(plots, plotNames, canvasName, plotDir, xAxisTitle, xAxisRange, logY):
  
  ## Make the canvas
  c = ROOT.TCanvas(canvasName, canvasName, 600, 600)
  c.SetLeftMargin(0.15)
  c.cd()
  ROOT.gStyle.SetOptStat(0)
  
  ## Set the colors appropriately so we can 
  ## differentiate between the two plots
  plots[0].SetLineColor(colors[0])
  plots[1].SetLineColor(colors[2])
  
  ## Create a RatioPlot to compare the two
  rp = ROOT.TRatioPlot(plots[0], plots[1])
  plots[0].GetXaxis().SetTitle(xAxisTitle)
  rp.Draw()
  
  ## Update the canvas & modify the y-axis if appropriate
  c.Update()
  if logY: rp.GetUpperPad().SetLogy()
  
  ## Set the ranges of the axes to be appropriately
  rp.GetLowerRefGraph().SetMinimum(0)
  rp.GetLowerRefGraph().SetMaximum(2)
  
  rp.GetUpperRefXaxis().SetRange(xAxisRange[0], xAxisRange[1])
  rp.GetLowerRefXaxis().SetRange(xAxisRange[0], xAxisRange[1])
  rp.GetUpperRefYaxis().SetTitle("Data / MC")
  
  ## Create the legend & add our entries to it
  p = rp.GetUpperPad()
  l = ROOT.TLegend(0.52, 0.55, 0.89, 0.87)
  l.SetLineWidth(2)
  l.SetBorderSize(0)
  l.SetFillColor(0)
  l.SetTextFont(42)
  l.SetTextSize(0.035)
  
  for i in range(len(plots)):
    l.AddEntry(plots[i], plotNames[i], 'L')
  
  l.Draw()
  p.Modified()
  p.Update()
  
  ## Check to make sure the directory exists & 
  ## then print the proper fiels to the output
  dirExists = os.path.exists(plotDir)
  if not dirExists:
    print "Warning: output directory did not exist."
    os.makedirs(plotDir)
    print ">>> directory created."
  
  extraName = ''
  if logY: extraName = '_logY'
  preBit = ''
  if normalize: preBit = 'NORM_'
  c.Print(preBit + plotDir + '/' + cName + extraName + '.png')
  c.Print(preBit + plotDir + '/' + cName + extraName + '.pdf')
  c.Print(preBit + plotDir + '/' + cName + extraName + '.C')
  return c

###############################################################################
## Make Stack Plots
###############################################################################
def makeStackPlot(plots, plotNames, cName, plotDir = 'Test/', 
xAxisTitle = 'Jet M_{SV}[GeV]', xAxisRange = [0,10], uncName = 'MC unc. (stat.)',
normMC=True, logY=False, normBinWidth = -1, legendOrder = [], minY_forLog = 1.0,
lumi = '35.9'):

  ## Create the canvas & modify it as necessary
  c = ROOT.TCanvas(cName, cName, 600, 600)
  c.SetFillStyle(4000)
  c.SetFrameFillStyle(1000)
  c.SetFrameFillColor(0)
  
  c.SetBottomMargin(0.12)
  c.SetLeftMargin(0.15709)
  c.SetRightMargin(0.1234783)
  
  ## Create the stack plot & the legend
  allStack = ROOT.THStack('st','')
  
  y1_ndc = 0.62
  y2_ndc = 0.87
  x1_ndc = 0.48
  if len(legendOrder) != 0:
    x1_ndc = 0.42
    y1_ndc = 0.62
  
  l = ROOT.TLegend(x1_ndc, y1_ndc, 0.85, y2_ndc)
  #if len(legendOrder) != 0: l.SetNColumns(2)
  l.SetNColumns(2)
  l.SetColumnSeparation(0.2)
  l.SetLineWidth(2)
  l.SetBorderSize(0)
  l.SetFillColor(0)
  l.SetTextFont(42)
  l.SetTextSize(0.035)
  
  ## Handle the MC plots & calculate scales
  MC_integral = 0
  for i in range(0, len(plots)):
    MC_integral += plots[i].Integral()
  
  normScale = 1
  if MC_integral > 0 and normMC:
    normScale = plots[0].Integral()/MC_integral
  else: print 'Scale MC by: ', normScale
  
  #l.AddEntry(plots[0], plotNames[0], 'F')
  if len(legendOrder) != 0: l.AddEntry('','','')
  iColor = 0
  if "CutFlow" in cName:
    print "==> ", cName, " <=="
    print "Sample\t All Events \t MET cut\t Jet cut \t Tag cuts"
    print "======\t ========== \t =======\t ======= \t ========"
  for i in range(len(plots)-1, -1, -1):
    plots[i].Scale(normScale)
    plots[i].SetFillColor(colors[iColor])
    iColor = iColor + 1
    if len(legendOrder) == 0: l.AddEntry(plots[i], plotNames[i], 'F')
    if "CutFlow" in cName:
      print plotNames[i] + "\t" + formStr(plots[i].GetBinContent(1)) + "\t" + formStr(plots[i].GetBinContent(2)) + "\t" + formStr(plots[i].GetBinContent(3)) + "\t" + formStr(plots[i].GetBinContent(plots[i].FindLastBinAbove()))
  
  for i in legendOrder:
    l.AddEntry(plots[i], plotNames[i], 'F')
  
  
  ## Fill the stack
  for i in range(0, len(plots)):
    allStack.Add(plots[i])
  
  #allMC = allStack.GetStack().Last().Clone()
  #theErrorGraph = ROOT.TGraphErrors(allMC)
  #theErrorGraph.SetFillColor(ROOT.kGray+3)
  #theErrorGraph.SetFillStyle(3013)
  #l.AddEntry(theErrorGraph,uncName,"fl")
  
  ## Draw everything to the canvas
  allStack.Draw("hist")
  allStack.GetXaxis().SetRangeUser(xAxisRange[0], xAxisRange[1])
  binW = plots[0].GetBinWidth(1)
  
  if logY: c.SetLogy()
  
  formatNum = ''
  aNum = floor(binW*pow(10,3))-floor(binW*pow(10,2))*10
  if aNum >= 1: formatNum = '0.3f'
  allStack.GetYaxis().SetTitle('Events/' + format(binW, formatNum))
  if normBinWidth >= 0:
    allStack.GetYaxis().SetTitle('Events/' + str(normBinWidth))
  allStack.GetXaxis().SetTitle(xAxisTitle)
  allStack.GetYaxis().SetTitleSize(0.037)
  #allStack.GetYaxis().SetTitleOffset(1.2)
  allStack.GetYaxis().SetLabelSize(0.035)
  allStack.GetXaxis().SetLabelSize(0.035)
  scaleTmp = 0.9 - (y2_ndc - y1_ndc)
  maxScaleFromPlots = ROOT.TMath.Max(plots[0].GetMaximum(), allStack.GetMaximum())
  maxX = 1./scaleTmp*maxScaleFromPlots
  #if logY and maxScaleFromPlots > 0:
  #   maxX = pow(10,1./scaleTmp*log10(maxScaleFromPlots)) 
  #allStack.SetMaximum(maxX)
  
  ## (NOTE: this minimum may be too low and we want an auto adjust. Let's fix
  ## the scale based on an equation, i.e. if every bin hits a certain min, then
  ## let's ignore that range.
  if logY:
    maxX = pow(10, log10(maxScaleFromPlots) + 2)
  else:
    maxX =  maxScaleFromPlots + pow(10, log10(maxScaleFromPlots)) * 0.5
  
  allStack.SetMaximum(maxX)
  
  minY = 100000.0
  h = allStack.GetStack().Last()
  for i in range(h.GetNbinsX()):
    binContent = h.GetBinContent(i)
    if binContent < 1: continue
    logBin = log10(binContent)
    if logBin < minY: minY = logBin
  
  if logY:
    if minY <= 3: power = 1
    else: power = minY - 3
    allStack.SetMinimum(pow(10,power))
  #allStack.SetMaximum(pow(10,12))
  #allStack.SetMinimum(pow(10,11))
  
  #allStack.SetMinimum(minY_forLog)
  
  l.Draw()
  myText('CMS Work in Progress #sqrt{s} = 13 TeV, '+lumi+' fb^{-1}', 
    0.25, 0.937775, 0.8)
  
  c.cd()
  
  ## Output the plots
  isExist = os.path.exists(plotDir)
  if not isExist:
    print "WARNING: output directory did not exist."
    os.makedirs(plotDir)
    print ">>> output directory created."
  
  extraBit = ""
  if logY: extraBit = "_logY"
  
  c.Print(plotDir + '/' + cName + extraBit + '.png')
  c.Print(plotDir + '/' + cName + extraBit + '.pdf')
  c.Print(plotDir + '/' + cName + extraBit + '.C')
  
  return c
  
