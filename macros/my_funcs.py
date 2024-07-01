## == IMPORT STATEMENTS =======================================================

import ROOT
import sys,os
import math
from math import *
from array import array

## == COLORS ==================================================================
#colors = [ROOT.kBlack, ROOT.kBlue, ROOT.kRed]
#fill_colors = [16, 38, 46]
colors = [ROOT.kRed, ROOT.kBlack, ROOT.kAzure-4] #ROOT.kBlue
colors = [416+1, 632+1, 600+1, 400+1, 840+1, 860+1, 880+1, 900+1, 432+1, 616+1, 616+3, 800+7]
fill_colors = [46, 16, ROOT.kAzure + 1] #38
years = ["16", "17", "18"]

###############################################################################
## Distance from a Given Line
###############################################################################

## This assumes that the line is given in the form:
## a*x + b*y + c = 0
## and that the point we're interested in is:
## (x0, y0)

def distance_from_line(a, b, c, x0, y0):
  numerator = abs(a * x0 + b * y0 + c)
  denominator = sqrt(pow(a,2) + pow(b,2))
  return numerator / denominator


## Determine if we're in a distance from a given line:
def within_line_range(a, b, c, x0, y0, r):
  distance = distance_from_line(a, b, c, x0, y0)
  return distance < r

###############################################################################
## Is Point within Ellipse
###############################################################################

def isWithinEllipse(x, y, h, k, a, b):
  
  ## Calculate the components of our ellipse equation
  xbit = 1.0 * pow(x-h,2) / pow(a,2)
  ybit = 1.0 * pow(y-k,2) / pow(b,2)
  
  ## Determine the two sides of our equation and compare
  leftside = xbit + ybit
  rightside = 1.0
  
  return leftside <= rightside

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

def getHist(plotName, sample_names, hist_files, lumiScales, debug = True):
  
  hOut = {}
  
  ## Go through each year we're interested in.
  for y in years:
    
    ## Get the first sample and the appropriate histogram
    if debug: 
      print "Looking in ", sample_names[0], " for ", plotName, "(20",y,")"
    hOut[y] = hist_files[sample_names[0]][y][0].Get(plotName).Clone()
    if sample_names[0] not in ['JetHT']:
      hOut[y].Scale(lumiScales[sample_names[0]][y][0])
    
    ## Add the other samples
    for iS in range(len(sample_names)):
      for fi in range(len(hist_files[sample_names[iS]][y])):
        
        ## Skip the first sample (already grabbed)
        if iS == 0 and fi == 0: continue
        
        h = hist_files[sample_names[iS]][y][fi].Get(plotName).Clone()
        if sample_names[iS] not in ["JetHT"]:
          h.Scale(lumiScales[sample_names[iS]][y][fi])
        hOut[y].Add(h)
  
  return hOut

###############################################################################
## Get Histogram (OLD VERSION)
###############################################################################
'''
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
'''
###############################################################################
## My Text Function
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
## Gauss Fit Plot Function
###############################################################################
def makeGausFit(plot, plotName, canvasName, plotDir, fitRange, 
  xAxisTitle, xAxisRange, lumi, plot_color, fit_color):
  
  ## Make the canvas
  ROOT.gStyle.SetOptStat("neMRou")
  c = ROOT.TCanvas(canvasName, canvasName, 600, 600)
  c.SetLeftMargin(0.15)
  
  ## Prepare the legend
  x0 = 0.50; x1 = 0.89
  #l = ROOT.TLegend(x0, 0.70, x1, 0.87)
  l = ROOT.TLegend(x0, 0.40, x1, 0.57)
  l.SetLineWidth(2)
  l.SetBorderSize(0)
  l.SetTextFont(42)
  l.SetTextSize(0.035)
  c.cd()
  
  ## Make minor modifications to the plot
  plot.SetLineColor(plot_color)
  plot.GetXaxis().SetTitle(xAxisTitle)
  plot.Draw("hist")
  
  binW = plot.GetBinWidth(1)
  formatNum = ''
  aNum = floor(binW*pow(10,3))-floor(binW*pow(10,2))*10
  if aNum >= 1: formatNum = '0.3f'
  yTitle = "Event/" + format(binW, formatNum)
  if 'pt' in canvasName or 'mass' in canvasName or 'MET' in canvasName:
    yTitle += " GeV"
  plot.GetYaxis().SetTitle(yTitle)
  
  ## Add the gaussian fit in the region of interest
  ftot = ROOT.TF1("ftot", "gaus", fitRange[0], fitRange[1])
  plot.Fit("ftot", "", "", fitRange[0], fitRange[1])
  ftot.Draw("same")
  
  ## Make a legend discussing the information
  l.AddEntry(plot, plotName, "l")
  l.AddEntry(ftot, "Gaussian Fit", "l")
  rangeStr = "range = [" + str(fitRange[0]) + "," + str(fitRange[1]) + "] GeV"
  l.AddEntry("", rangeStr, "")
  
  mean = round(ftot.GetParameter(1),1)
  meanErr = round(ftot.GetParError(1), 1)
  meanStr = "#mu = " + str(mean) + "#pm" + str(meanErr) + " GeV"
  l.AddEntry("", meanStr, "")
  
  sigma = round(ftot.GetParameter(2),1)
  sigmaErr = round(ftot.GetParError(2),1)
  sigmaStr = "#sigma = " + str(sigma) + "#pm" + str(sigmaErr) + " GeV"
  l.AddEntry("", sigmaStr, "")
  
  s_mu = round(ftot.GetParameter(2) / ftot.GetParameter(1), 3)
  smu_str = "#sigma/#mu = " + str(s_mu)
  l.AddEntry("", smu_str, "")
  
  #l.AddEntry("","","")
  #underflow = plot.GetBinContent(0)
  #overflow = plot.GetBinContent(plot.GetNbinsX() + 1)
  #l.AddEntry("", "underflow = " + str(round(underflow,1)) + " evt", "")
  #l.AddEntry("", "overflow = " + str(round(overflow,1)) + " evt", "")
  l.Draw()
  
  ## Update the canvas & modify the y-axis if appropriate
  myText('CMS Work in Progress #sqrt{s} = 13 TeV, '+lumi+' fb^{-1}', 
    0.25, 0.937775, 0.8)
  c.Update()
  
  ## Check to make sure the directory exists &
  ## then print the proper files to the output
  dirExists = os.path.exists(plotDir)
  if not dirExists:
    print "Warning: output directory does not exist."
    os.makedirs(plotDir)
    print ">>> directory created."
  
  ## Print out the plot appropriately
  fullpath = plotDir + '/' + canvasName
  c.Print(fullpath + '.png')
  c.Print(fullpath + '.pdf')
  c.Print(fullpath + '.C')
  return c

###############################################################################
## Make Plot Function
###############################################################################
def makePlot(plot, plotName, canvasName, outputDir = 'Test/',
  xAxisTitle = 'M [GeV]', xAxisRange = [0,10], logY = False,
  lumi = '35.9', blindSignal=False, signalRegion=[75,110]):
  
  ROOT.gStyle.SetOptStat(0)
  
  ## Make our canvas & modify it as possible
  c = ROOT.TCanvas(canvasName, canvasName, 800, 600)
  c.SetFillStyle(4000)
  c.SetFrameFillStyle(1000)
  c.SetFrameFillColor(0)
  c.SetLeftMargin(0.15)
  c.cd()
  
  if blindSignal:
    plot = blind_region(plot, signalRegion[0], signalRegion[1])
  
  ## Draw our plot onto the canvas & modify it as necessary
  plot.Draw("hist")
  plot.GetXaxis().SetRangeUser(xAxisRange[0], xAxisRange[1])
  plot.GetXaxis().SetTitle(xAxisTitle)
  binW = plot.GetBinWidth(1)
  
  formatNum = ''
  extra_bit = ""
  if "mass" in canvasName or "pt" in canvasName:
    extra_bit = " GeV"
  aNum = floor(binW*pow(10,3))-floor(binW*pow(10,2))*10
  if aNum >= 1: formatNum = '0.3f'
  plot.GetYaxis().SetTitle('Events/' + format(binW,formatNum) + extra_bit)
  
  plot.GetYaxis().SetTitleSize(0.057)
  plot.GetYaxis().SetTitleOffset(1.2)
  plot.GetYaxis().SetLabelSize(0.05)
  
  if logY:
    c.SetLogy()
  
  myText('CMS Work in Progress #sqrt{s} = 13 TeV, '+ lumi+' fb^{-1}', 0.25, 0.937775, 0.8)
  
  # Output the plot
  dirExists = os.path.exists(outputDir)
  if not dirExists:
    print "Warning: output directory does not exist."
    os.makedirs(outputDir)
    print ">>> directory created."
  
  extraBit = ''
  if logY: extraBit = '_logY'
  
  c.Print(outputDir + '/' + canvasName + extraBit + '.png')
  c.Print(outputDir + '/' + canvasName + extraBit + '.pdf')
  c.Print(outputDir + '/' + canvasName + extraBit + '.eps')
  c.Print(outputDir + '/' + canvasName + extraBit + '.C')
  
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
  else: allStack.Draw("nostack HIST")
  
  allStack.GetXaxis().SetTitle(xAxisTitle)
  allStack.GetYaxis().SetTitle(yAxisTitle)
  allStack.GetXaxis().SetRangeUser(xAxisRange[0], xAxisRange[1])
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
## Make Overlay Plots Function
###############################################################################
def makeOverlayPlots(signal_plots, bckg_plots, signal_names, bckg_names, 
  canvasName, plotDir, xAxis_title, xAxis_range, custom_colors, lumi='138', logY=True):
  
  ## Make the canvas
  ROOT.gStyle.SetOptStat(0)
  c = ROOT.TCanvas(canvasName, canvasName, 600, 600)
  c.SetLeftMargin(0.15)
  c.cd()
  
  ## Prepare the legend
  #x0 = 0.4; x1 = 0.89
  x0 = 0.4; x1 = 0.89
  if "jet" in canvasName:
    x0 = 0.6
  #if left: 
  #  x0 = 0.17
  #  x1 = 0.42
  l = ROOT.TLegend(x0, 0.70, x1, 0.87)
  l.SetLineWidth(2)
  l.SetBorderSize(0)
  l.SetTextFont(42)
  l.SetTextSize(0.025)
  
  ## Overlap the plots
  allStack = ROOT.THStack('st', '')
  
  for i in range(0, len(signal_plots)):
    signal_plots[i].SetLineColor(custom_colors[i])
    bckg_plots[i].SetLineColor(custom_colors[i])
    signal_plots[i].SetLineWidth(2)
    bckg_plots[i].SetLineWidth(2)
    signal_plots[i].SetLineStyle(ROOT.kSolid)
    bckg_plots[i].SetLineStyle(ROOT.kDashed)
    
    l.AddEntry(signal_plots[i], signal_names[i], 'L')
    l.AddEntry(bckg_plots[i], bckg_names[i], 'L')
    allStack.Add(signal_plots[i])
    allStack.Add(bckg_plots[i])
  
  ## Draw the plots (and legend) & modify the axes
  #if stack: allStack.Draw("HIST")
  #else: allStack.Draw("nostack,HIST")
  allStack.Draw("nostack,HIST")
  
  allStack.GetXaxis().SetTitle(xAxis_title)
  #allStack.GetYaxis().SetTitle(yAxisTitle)
  l.Draw()
  myText('CMS Work in Progress #sqrt{s} = 13 TeV, '+lumi+' fb^{-1}', 
    0.25, 0.937775, 0.8)
  
  ## Update the canvas & modify the y-axis if appropriate
  c.Update()
  if logY: c.SetLogy() 
  
    
  binW = signal_plots[0].GetBinWidth(1)
  formatNum = ''
  aNum = floor(binW*pow(10,3))-floor(binW*pow(10,2))*10
  if aNum >= 1: formatNum = '0.3f'
  allStack.GetYaxis().SetTitle('Events/' + format(binW, formatNum))
  
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
  #if normalize: extraName = extraName + '_NORM'
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
  plots[0].SetLineColor(ROOT.kBlack)
  plots[1].SetLineColor(ROOT.kRed)
  
  ## Create a RatioPlot to compare the two
  rp = ROOT.TRatioPlot(plots[0], plots[1])
  plots[0].GetXaxis().SetTitle(xAxisTitle)
  rp.SetH1DrawOpt("ape")
  rp.SetH2DrawOpt("ape")
  rp.Draw("ape")
  
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
  l = ROOT.TLegend(0.8, 0.8, 0.89, 0.87)
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
  #if normalize: preBit = 'NORM_'
  c.Print(preBit + plotDir + '/' + canvasName + extraName + '.png')
  c.Print(preBit + plotDir + '/' + canvasName + extraName + '.pdf')
  c.Print(preBit + plotDir + '/' + canvasName + extraName + '.C')
  return c

###############################################################################
## Make Efficiency Plot Function
###############################################################################
def makeEfficiencyPlot(plots, plotNames, canvasName, plotDir, 
  xAxisTitle, xAxisRange, yAxisTitle, textForPlot = "", yr='16',
  taggingStr = "", sampleName = "SingleMuon"):
  
  ## ===========================================
  ## Create the canvas & modify it as necessary
  ## ===========================================
  c = ROOT.TCanvas(canvasName, canvasName, 600, 600)
  c.SetFillStyle(4000)
  c.SetFrameFillStyle(1000)
  c.SetFrameFillColor(0)
  
  c.SetBottomMargin(0.12)
  c.SetLeftMargin(0.15709)
  c.SetRightMargin(0.1234783)
  
  ## ============================================
  ## Divide the plots to get the efficiency plot
  ## ============================================
  numerator = plots[0]
  denominator = plots[1]
  tgae = ROOT.TGraphAsymmErrors()
  tgae.Divide(numerator, denominator, "cl=0.683 b(1,1) mode")
  
  #tgae.SetMarkerSize(20)
  tgae.SetMarkerStyle(ROOT.kFullCircle)
  #tgae.SetLineColor(0)
  #tgae.SetLineWidth(0)
  #tgae.SetLineColor(ROOT.kWhite)
  tgae.Draw("ap")
  tgae.GetXaxis().SetTitle(xAxisTitle)
  tgae.GetYaxis().SetTitle(yAxisTitle)
  
  ## ===============================
  ## Handle a legend if we want one
  ## ===============================
  if textForPlot != "":
    myText(textForPlot, 0.15, 0.937775, 0.5)
    #myText("SingleMuon, 20" + yr, 0.15, 0.91, 0.5)
    #0.25, 0.937775
    x0 = 0.5
    x1 = 0.8
    l = ROOT.TLegend(x0, 0.2, x1, 0.3)
    l.SetLineWidth(2)
    l.SetBorderSize(0)
    l.SetTextFont(42)
    l.SetTextSize(0.025)
    l.AddEntry(tgae, sampleName + " 20" + yr, "L")
    if taggingStr != "":
      l.AddEntry("", taggingStr, "")
    l.Draw()
  
  ## =====================================================
  ## Update the canvas & modify the y-axis if appropriate
  ## =====================================================
  c.Update()
  ##if logY and not is2D: c.SetLogy()
  
  ## ==========================================
  ## Check to make sure the directory exists &
  ## then print the proper files to the output
  ## ==========================================
  dirExists = os.path.exists(plotDir)
  if not dirExists:
    print "Warning: output directory does not exist."
    os.makedirs(plotDir)
    print ">>> directory created."
  
  ## =================================
  ## Print out the plot appropriately
  ## =================================
  #extraName = ''
  #if logY: extraName = '_logY'
  fullpath = plotDir + '/' + canvasName #+ extraName
  c.Print(fullpath + '.png')
  c.Print(fullpath + '.pdf')
  #c.Print(fullpath + '.C')
  return c


def makeEfficiencyPlotOld(plots, plotNames, canvasName, plotDir, 
  xAxisTitle, xAxisRange, yAxisTitle, textForPlot = ""):
  
  ## ===========================================
  ## Create the canvas & modify it as necessary
  ## ===========================================
  c = ROOT.TCanvas(canvasName, canvasName, 600, 600)
  c.SetFillStyle(4000)
  c.SetFrameFillStyle(1000)
  c.SetFrameFillColor(0)
  
  c.SetBottomMargin(0.12)
  c.SetLeftMargin(0.15709)
  c.SetRightMargin(0.1234783)
  
  ## ============================================
  ## Divide the plots to get the efficiency plot
  ## ============================================
  plots[0].Divide(plots[1])
  plots[0].Draw("HIST")
  
  plots[0].GetXaxis().SetTitle(xAxisTitle)
  plots[0].GetYaxis().SetTitle(yAxisTitle)
  
  ## ===============================
  ## Handle a legend if we want one
  ## ===============================
  if textForPlot != "":
    #0.25, 0.937775
    x0 = -0.1
    x1 = 0.8
    l = ROOT.TLegend(x0, 0.937775, x1, 1.0)
    l.SetLineWidth(2)
    l.SetBorderSize(0)
    l.SetTextFont(42)
    l.SetTextSize(0.025)
    l.AddEntry("", textForPlot, "")
    l.Draw()
  
  ## =====================================================
  ## Update the canvas & modify the y-axis if appropriate
  ## =====================================================
  c.Update()
  ##if logY and not is2D: c.SetLogy()
  
  ## ==========================================
  ## Check to make sure the directory exists &
  ## then print the proper files to the output
  ## ==========================================
  dirExists = os.path.exists(plotDir)
  if not dirExists:
    print "Warning: output directory does not exist."
    os.makedirs(plotDir)
    print ">>> directory created."
  
  ## =================================
  ## Print out the plot appropriately
  ## =================================
  #extraName = ''
  #if logY: extraName = '_logY'
  fullpath = plotDir + '/' + canvasName #+ extraName
  c.Print(fullpath + '.png')
  c.Print(fullpath + '.pdf')
  c.Print(fullpath + '.C')
  return c

###############################################################################
## Make Stack Plots
###############################################################################

def makeStackPlot(plots, plotNames, cName, plotDir = 'Test/', 
xAxisTitle = 'Jet M_{SV}[GeV]', xAxisRange = [0,10], normMC=True, logY=False, 
normBinWidth = -1, legendOrder = [], minY_forLog = 1.0, lumi = '35.9', 
custom_colors=colors, useStack=True, useFill=True, forceMin=True, modMaxY = False,
forceMaxY = False, forced_maxY = 0.3, legendColumns=2, legendOnLeft=False):

  ## ===========================================
  ## Create the canvas & modify it as necessary
  ## ===========================================
  c = ROOT.TCanvas(cName, cName, 600, 600)
  c.SetFillStyle(4000)
  c.SetFrameFillStyle(1000)
  c.SetFrameFillColor(0)
  
  c.SetBottomMargin(0.12)
  c.SetLeftMargin(0.15709)
  c.SetRightMargin(0.1234783)
  
  ## ===================================
  ## Create the stack plot & the legend
  ## ===================================
  allStack = ROOT.THStack('st','')
  
  y1_ndc = 0.7
  y2_ndc = 0.87
  x1_ndc = 0.48
  x2_ndc = 0.85
  if len(legendOrder) != 0:
    x1_ndc = 0.42
    y1_ndc = 0.5
  
  if legendOnLeft:
    x1_ndc = 0.2
    x2_ndc = 0.58
  
  l = ROOT.TLegend(x1_ndc, y1_ndc, x2_ndc, y2_ndc)
  l.SetNColumns(legendColumns)
  l.SetColumnSeparation(0.2)
  l.SetLineWidth(2)
  l.SetBorderSize(0)
  l.SetFillColor(0)
  l.SetTextFont(42)
  l.SetTextSize(0.035)
  
  ## =======================================
  ## Handle the MC plots & calculate scales
  ## =======================================
  MC_integral = 0
  for i in range(0, len(plots)):
    MC_integral += plots[i].Integral()
  
  normScale = 1
  if MC_integral > 0 and normMC:
    normScale = plots[0].Integral()/MC_integral
  else: print 'Scale MC by: ', normScale
  
  ## Print out the CutFlow information if necessary if necessary
  if len(legendOrder) != 0: l.AddEntry('','','')
  iColor = 0
  if "CutFlow" in cName:
    print "==> ", cName, " <=="
    print "Sample\t All Events \t MET cut\t Jet cut \t Tag cuts"
    print "======\t ========== \t =======\t ======= \t ========"
  for i in range(len(plots)-1, -1, -1):
    plots[i].Scale(normScale)
    if useFill:
      plots[i].SetFillColor(custom_colors[iColor])
      plots[i].SetLineColor(ROOT.kBlack)
    else:
      plots[i].SetLineColor(custom_colors[iColor])
    iColor = iColor + 1
    if len(legendOrder) == 0: l.AddEntry(plots[i], plotNames[i], 'F')
    if "CutFlow" in cName:
      print plotNames[i] + "\t" + formStr(plots[i].GetBinContent(1)) + \
       "\t" + formStr(plots[i].GetBinContent(2)) + "\t" + \
       formStr(plots[i].GetBinContent(3)) + "\t" + \
       formStr(plots[i].GetBinContent(plots[i].FindLastBinAbove()))
  
  ## ===========================================
  ## Add the plots to the legend & stack itself
  ## ===========================================
  for i in legendOrder:
    l.AddEntry(plots[i], plotNames[i], 'F')
  
  for i in range(0, len(plots)):
    allStack.Add(plots[i])

  ## ==============================
  ## Draw everything to the canvas
  ## ==============================
  if useStack:
    allStack.Draw("hist")
  else:
    allStack.Draw("hist,nostack")
  if len(xAxisRange) >= 2:
    allStack.GetXaxis().SetRangeUser(xAxisRange[0], xAxisRange[1])
  binW = plots[0].GetBinWidth(1)
  
  if logY: c.SetLogy()
  
  ## =================================================================
  ## Modify the Y axis label & determine a proper scaling for visuals
  ## =================================================================
  
  formatNum = ''
  aNum = floor(binW*pow(10,3))-floor(binW*pow(10,2))*10
  if aNum >= 1: formatNum = '0.3f'
  yTitle = "Event/" + format(binW, formatNum)
  if 'pt' in cName or 'mass' in cName or 'MET' in cName:
    yTitle += " GeV"
  
  allStack.GetYaxis().SetTitle(yTitle)
  if normBinWidth >= 0:
    allStack.GetYaxis().SetTitle('Events/' + str(normBinWidth))
  allStack.GetXaxis().SetTitle(xAxisTitle)
  allStack.GetYaxis().SetTitleSize(0.037)
  allStack.GetYaxis().SetLabelSize(0.035)
  allStack.GetXaxis().SetLabelSize(0.035)
  scaleTmp = 0.9 - (y2_ndc - y1_ndc)
  
  maxScaleFromPlots = ROOT.TMath.Max(plots[0].GetMaximum(), allStack.GetMaximum())
  maxY = 1./scaleTmp*maxScaleFromPlots
  
  #allStack.SetMaximum(maxY)
  
  ## (NOTE: this minimum may be too low and we want an auto adjust. Let's fix
  ## the scale based on an equation, i.e. if every bin hits a certain min, then
  ## let's ignore that range.
  if modMaxY:
    if logY:
      ## In the LogY format, set the maximum value at 1 factor
      ## of 10 above the maximum scale needed.
      maxLog = log10(maxScaleFromPlots)
      maxY = pow(10, maxLog + 1)
    else:
      ## In the linear scale, set the maximum value at 25% larger
      ## than the space needed. 
      maxLog = log(maxScaleFromPlots)
      maxY =  maxScaleFromPlots + pow(10, maxLog) * 0.5
  elif forceMaxY:
    maxY = forced_maxY
     
  allStack.SetMaximum(maxY)
  
  minY = 100000.0
  h = allStack.GetStack().Last()
  for i in range(h.GetNbinsX()):
    binContent = h.GetBinContent(i)
    if binContent < 1: continue
    logBin = log10(binContent)
    if logBin < minY: minY = logBin
  
  if logY:
    if minY <= 3: power = 1
    else: power = minY - 2
    power = min(power, 10)
    if forceMin:
      allStack.SetMinimum(pow(10, minY_forLog))
    #else:
    #  allStack.SetMinimum(pow(10,power))
  
  l.Draw()
  myText('CMS Work in Progress #sqrt{s} = 13 TeV, '+lumi+' fb^{-1}', 
    0.25, 0.937775, 0.7)
  
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

###############################################################################
## Make ROC Curve
###############################################################################
def makeROCcurve(signal_plots, bckg_plots, plotNames, plotVar, canvasName,
  plotDir, colors, lumi='35.9', useLessThan=True, lowerLegend=True, useAllLabels=False):
  
  ## Make sure that the output folder exists.
  dirExists = os.path.exists(plotDir)
  if not dirExists:
    print "WARNING: Provided output directory does not exist."
    os.makedirs(plotDir)
    print ">>> " + plotDir + " has been created."
  
  ## Get the cut values (which are based on the bin centers)
  cut_values = []
  bins = signal_plots[0].GetNbinsX()
  
  if useLessThan: # We want to get the cuts in ascending order (if <)
    for i in range(1, bins + 1):
      cut_values.append(signal_plots[0].GetBinCenter(i))
  else:
    for i in range(bins, -1, -1):
      cut_values.append(signal_plots[0].GetBinCenter(i))
  
  ## Get the totals for each type of plot & calculate the percentages
  eff_signal = []
  eff_bckg = []
  
  for p in range(len(signal_plots)):
  
    sEff = array('d')
    bEff = array('d')
    
    for b in range(len(cut_values)):
    
      total = 0.0
      selected = 0.0
      for i in range(1, bins + 1):
        center = signal_plots[p].GetBinCenter(i)
        content = signal_plots[p].GetBinContent(i)
        if center < cut_values[b] and useLessThan:
          selected += content
        elif center > cut_values[b] and not useLessThan:
          selected += content
        total += content
    
      sEff.append(selected * 1.0 / total)
    
      total = 0.0
      selected = 0.0
      for i in range(1, bins + 1):
        center = bckg_plots[p].GetBinCenter(i)
        content = bckg_plots[p].GetBinContent(i)
        if center < cut_values[b] and useLessThan:
          selected += content
        elif center > cut_values[b] and not useLessThan:
          selected += content
        total += content
    
      bEff.append(selected * 1.0 / total)
    
    eff_signal.append(sEff)
    eff_bckg.append(bEff)
  
  #print(eff_signal)
  #print(eff_bckg)
  
  ## Now that we've got the percentages, we want
  ## to properly plot the TGraphs
  canv = ROOT.TCanvas(canvasName, canvasName, 600, 600)
  canv.SetBottomMargin(0.12)
  canv.SetLeftMargin(0.15709)
  canv.SetRightMargin(0.1234783)
  
  multigraph = ROOT.TMultiGraph("","")
  graphs = []
  for i in range(len(plotNames)):
    size = len(eff_signal[i])
    gI = ROOT.TGraph(size, eff_bckg[i], eff_signal[i])
    gI.SetTitle(plotNames[i])
    gI.SetMarkerColor(colors[i])
    gI.SetMarkerStyle(20)
    gI.SetLineColor(colors[i])
    gI.SetFillStyle(0)
    gI.SetLineWidth(2)
    
    graphs.append(gI)
  
  ## Add the cut labels to the plots before
  ## we put the plots together.
  for i in range(len(cut_values)):
    ytmp = -100
    idx = 0
    for j in range(len(graphs)):
      ybit = graphs[j].GetY()[i]
      #print ybit
      if ybit > ytmp: 
        ytmp = ybit
        idx = j
    #print "chose: " + str(idx)
    #print "=========="
    
    ybit = graphs[idx].GetY()[i]
    yoffset = 0.04 if ybit > 0.8 else 0.1
    y = ybit + yoffset
    x = graphs[idx].GetX()[i]
    
    bckg_percent = eff_bckg[idx][i]
    if (bckg_percent < 0.15 or bckg_percent >= 0.85) and not useAllLabels:
      continue
    
    lt = ROOT.TLatex(x, y, str(cut_values[i]))
    lt.SetTextSize(0.02)
    graphs[0].GetListOfFunctions().Add(lt)
  
  for i in range(len(plotNames)):
    multigraph.Add(graphs[i])
  
  multigraph.Draw("ALP")
  multigraph.GetXaxis().SetTitle("False Signal Rate (Bckg)")
  multigraph.GetXaxis().SetLabelSize(0.035)
  multigraph.GetYaxis().SetTitle("True Signal Rate")
  multigraph.GetYaxis().SetLabelSize(0.035)
  
  if len(plotNames) > 1:
    if not lowerLegend:
      canv.BuildLegend(0.2, 0.7, 0.5, 0.85)
    else:
      canv.BuildLegend(0.55, 0.15, 0.85, 0.3)
  
  myText('CMS Work in Progress #sqrt{s} = 13 TeV, ' + lumi + ' fb^{-1}',
    0.35, 0.927775, 0.6)
  canv.cd()
  canv.SetGrid()
  canv.Update()
  ROOT.gPad.Modified()
  ROOT.gPad.Update()
  
  ## Save our plots
  canv.Print(plotDir + '/' + canvasName + '.png')
  canv.Print(plotDir + '/' + canvasName + '.pdf')
  canv.Print(plotDir + '/' + canvasName + '.C')

###############################################################################
## Blind Region 
###############################################################################
def blind_region(original_plot, low_end, high_end):
  
  ## Make a copy of the plot
  plot = original_plot.Clone()
  
  ## Go through each bin and remove data from the desired region
  nBins = plot.GetNbinsX()
  for i in range(1, nBins):
    binContent = original_plot.GetBinContent(i)
    binCenter  = original_plot.GetBinCenter(i)
    if binCenter >= low_end and binCenter <= high_end:
      proper_value = 0
    else: proper_value = binContent
    plot.SetBinContent(i, proper_value)
  
  return plot


def blind_regions(original_plot, regionsToKeep):
  
  ## Make a copy of the plot
  plot = original_plot.Clone()
  
  ## Go through each bin and remove data from the desired region
  nBins = plot.GetNbinsX()
  for i in range(1, nBins):
    binContent = original_plot.GetBinContent(i)
    binCenter  = original_plot.GetBinCenter(i)
    
    keepValue = False
    for r in regionsToKeep:
      low = r[0]
      high = r[1]
      if low < binCenter < high:
        keepValue = True
        break
    
    if not keepValue: plot.SetBinContent(i, 0)
  
  return plot

###############################################################################
## Make DataMC Plot
###############################################################################

def makeDataMCPlot(plots, plotNames, canvasName, outputDir = 'Test/', 
  xAxisTitle = 'M [GeV]', xAxisRange = [0,10], uncName = 'MC unc. (stat.)',
  normMC = True, logY = False, normBinWidth = -1, legendOrder = [],
  minY_forLog = 0.01, lumi = '35.9', blindMass=False, massRegion=[75,140],
  colors_to_use=colors, overlays=[]):
  
  ## Make our canvas & modify it as possible
  c = ROOT.TCanvas(canvasName, canvasName, 600, 600)
  c.SetFillStyle(4000)
  c.SetFrameFillStyle(1000)
  c.SetFrameFillColor(0)
  
  ## Modify the top pad
  topPad = ROOT.TPad('topPad', 'topPad', 0, 0.3, 1.0, 1.0)
  if logY: topPad.SetLogy()
  topPad.SetBottomMargin(0.001)
  topPad.SetLeftMargin(0.12709)
  topPad.SetRightMargin(0.0434783)
  topPad.Draw()

  ## Modify the bottom pad
  bottomPad = ROOT.TPad('bottomPad','bottomPad',0,0.0,1.0,0.3)
  bottomPad.SetTopMargin(0.)
  bottomPad.SetBottomMargin(0.35)
  bottomPad.Draw()

  topPad.cd()
  
  ## Make a StackPlot and legend for later
  allStack = ROOT.THStack('st','')
  y1_ndc = 0.42
  y2_ndc = 0.87
  x1_ndc = 0.58
  if len(legendOrder) != 0:
      x1_ndc = 0.42
      y1_ndc = 0.62
  l = ROOT.TLegend(x1_ndc, y1_ndc,0.89,y2_ndc)
  if len(legendOrder) != 0: l.SetNColumns(2)
  l.SetLineWidth(2)
  l.SetBorderSize(0)
  l.SetFillColor(0)
  l.SetTextFont(42)
  l.SetTextSize(0.035)
  
  ## Calculate the normalized MC scale (if desired)
  MC_integral = 0
  for i in range(1, len(plots)):
    MC_integral += plots[i].Integral()
  
  normScale = 1
  if MC_integral > 0 and normMC:
    normScale = plots[0].Integral()/MC_integral
  else: print "Scale MC by :", normScale
  
  ## == NORM BIN CODE GOES HERE ==
  
  ## Add the entries to the legend
  l.AddEntry(plots[0], plotNames[0], 'p')
  if len(legendOrder) != 0: l.AddEntry('','','')
  iColor = 0
  for i in range(len(plots)-1,0,-1):
    plots[i].Scale(normScale)
    plots[i].SetFillColor(colors_to_use[iColor])
    iColor = iColor + 1
    if len(legendOrder) == 0: l.AddEntry(plots[i], plotNames[i], 'F')
  
  for i in legendOrder:
    l.AddEntry(plots[i], plotNames[i], 'F')
  
  for i in range(len(overlays)):
    overlays[i]["plot"].SetLineColor(ROOT.kCyan-3)
    overlays[i]["plot"].SetLineWidth(4)
    l.AddEntry(overlays[i]["plot"], overlays[i]["name"], 'L')
  
  ## Create the stack
  for i in range(1, len(plots)):
    allStack.Add(plots[i])
  
  ## Handle to see if we want to blind the mass region
  if blindMass:
    mL = massRegion[0]
    mH = massRegion[1]
    ## Remove any data that's not in the range we want
    ## Basically, go through bin by bin and if it's contents
    ## don't meet the range we want, ignore it.
    dataPlot = blind_region(plots[0], mL, mH)
  else:
    dataPlot = plots[0]
    
  
  allMC = allStack.GetStack().Last().Clone()
  theErrorGraph = ROOT.TGraphErrors(allMC)
  theErrorGraph.SetFillColor(ROOT.kGray+3)
  theErrorGraph.SetFillStyle(3013)
  l.AddEntry(theErrorGraph, uncName, "fl")
  
  ## Modify it as necessary
  allStack.Draw("hist")
  allStack.GetXaxis().SetRangeUser(xAxisRange[0], xAxisRange[1])
  binW = dataPlot.GetBinWidth(1)
  
  formatNum = ''
  extra_bit = " GeV" if "mass" in canvasName else ""
  aNum = floor(binW*pow(10,3))-floor(binW*pow(10,2))*10
  if aNum >= 1: formatNum = '0.3f'
  allStack.GetYaxis().SetTitle('Events/' + format(binW,formatNum) + extra_bit)
  if normBinWidth >= 0:
    allStack.GetYaxis().SetTitle('Events/' + str(normBinWidth) + extra_bit)
  
  allStack.GetYaxis().SetTitleSize(0.057)
  allStack.GetYaxis().SetTitleOffset(1.2)
  allStack.GetYaxis().SetLabelSize(0.05)
  scaleTmp = 0.9 - (y2_ndc - y1_ndc)
  maxScaleFromPlots = ROOT.TMath.Max(dataPlot.GetMaximum(), allStack.GetMaximum())
  maxX = 1./scaleTmp*maxScaleFromPlots
  if logY and maxScaleFromPlots > 0:
    maxX = pow(10, 1./scaleTmp*log10(maxScaleFromPlots))
  allStack.SetMaximum(maxX)
  allStack.SetMinimum(minY_forLog)
  
  for i in range(len(overlays)):
    overlay_plot = overlays[i]["plot"]
    overlay_plot.Draw("same hist")
  
  dataPlot.Draw("same E")
  dataPlot.SetMarkerStyle(20)
  dataPlot.SetMarkerSize(1.2)
  dataPlot.SetLineWidth(2)
  theErrorGraph.Draw('SAME2')

  l.Draw()
  myText('CMS Work in Progress #sqrt{s} = 13 TeV, '+ lumi+' fb^{-1}', 0.25, 0.937775, 1.0)
  topPad.Update()
  
  #Handle the bottom pad
  bottomPad.cd()
  bottomPad.SetLeftMargin(0.12709)
  bottomPad.SetRightMargin(0.0434783)
  bottomPad.SetTopMargin(0.03)
  
  ROOT.gPad.SetTicks(1,1)
  
  l2 = ROOT.TLegend(0.7, 0.78, 0.93, 0.87)
  l2.SetLineWidth(2)
  l2.SetBorderSize(0)
  l2.SetFillColor(0)
  l2.SetTextSize(0.075)
  l2.SetNColumns(2)
  xL = allMC.GetXaxis().GetXmin()
  xH = allMC.GetXaxis().GetXmax()
  if len(xAxisRange) > 0:
    xL = xAxisRange[0]
    xH = xAxisRange[1]
  
  ## Handle the ratio
  allMC = allStack.GetStack().Last().Clone()
  ratio = dataPlot.Clone('data_mc_ratio')
  ratio.Divide(allMC)
  
  for i in range(1, ratio.GetNbinsX()+1):
    binErrTmp = 0
    if dataPlot.GetBinContent(i) > 0:
      binErrTmp = ratio.GetBinContent(i)*plots[0].GetBinError(i)/plots[0].GetBinContent(i)
    ratio.SetBinError(i, binErrTmp)
  error = allMC.Clone('mc_statistical_error')
  error.Reset()
  
  for i in range(1, error.GetNbinsX()+1):
    error.SetBinContent(i,1)
    error.SetBinError(i,0)
    if allMC.GetBinContent(i) > 0:
      error.SetBinError(i, allMC.GetBinError(i)/allMC.GetBinContent(i))
    if allMC.GetBinContent(i) < 0:
      print ">>>>>> Strange bin content in allMC histogram, set error to 0: ", allMC.GetBinLowEdge(i), allMC.GetBinContent(i)
  
  if ratio.GetNbinsX() != error.GetNbinsX():
    print "@@@@@@ Warning: ratio and ratio error histograms do not have the same number of bins: ", ratio.GetNbinsX(), " ", error.GetNbinsX()
  
  ksScore = dataPlot.KolmogorovTest(allMC)
  chiScore = dataPlot.Chi2Test(allMC, "UWCHI2/NDF")
  print 'ksScore:  ', ksScore
  print 'chiScore: ', chiScore
  
  ratio.SetStats(0)
  ratioError = ROOT.TGraphErrors(error)
  ratioError.SetFillColor(ROOT.kGray+3)
  ratioError.SetFillStyle(3013)
  ratio.Draw("E1")
  ratio.GetXaxis().SetRangeUser(xAxisRange[0], xAxisRange[1])
  
  l2.AddEntry(ratioError, "MC unc. (stat.)", "f")
  l2.SetTextFont(42)
  l2.SetTextSize(0.1) 
  
  ratioError.Draw('E2SAME')
  ratio.SetMarkerStyle(20)
  ratio.SetMarkerSize(1.2)
  ratio.SetLineWidth(2)
  ratio.SetTitle("")
  ratio.GetXaxis().SetTitle(xAxisTitle)
  ratio.GetXaxis().SetTitleSize(0.12)
  ratio.GetXaxis().SetLabelSize(0.12)
  ratio.GetXaxis().SetTitleOffset(1.1)
  ratio.GetYaxis().SetNdivisions(505)
  ratio.GetYaxis().SetTitle("Data/MC")
  ratio.GetYaxis().SetTitleSize(0.12)
  ratio.GetYaxis().SetTitleOffset(0.5)
  ratio.GetYaxis().SetLabelSize(0.12)
  ratio.GetYaxis().SetRangeUser(0.4,1.6)
  
  m_one_line = ROOT.TLine(xAxisRange[0], 1, xAxisRange[1], 1)
  m_one_line.SetLineStyle(ROOT.kSolid)
  m_one_line.Draw("same")
  bottomPad.Update()

  dirExists = os.path.exists(outputDir)
  if not dirExists:
    print "Warning: output directory does not exist."
    os.makedirs(outputDir)
    print ">>> directory created."

  extraBit = ''
  if logY: extraBit = '_logY'
  
  c.Print(outputDir + '/' + canvasName + extraBit + '.png')
  c.Print(outputDir + '/' + canvasName + extraBit + '.pdf')
  c.Print(outputDir + '/' + canvasName + extraBit + '.eps')
  c.Print(outputDir + '/' + canvasName + extraBit + '.C')
  
  return c

###############################################################################
## Make ROC interval
###############################################################################

def makeROCinterval(signal_plots, bckg_plots, plotNames, plotVar, canvasName,
  plotDir, colors, lumi='35.9'):
  
  ## Make sure that the output folder exists.
  dirExists = os.path.exists(plotDir)
  if not dirExists:
    print "WARNING: Provided output directory does not exist."
    os.makedirs(plotDir)
    print ">>> " + plotDir + " has been created."
  
  ## Handle this algorithm for each plot combination we have.
  binMaxima = []
  binCenterMaxima = []
  binWidths = []
  eff_signal = []
  eff_bckg = []
  
  for p in range(len(signal_plots)):
    
    ## What we need to do is record the size for each bin and 
    ## the peak value in the algorithm. NOTE: If the signals
    ## are not properly handled, this might not appear where 
    ## you expect, e.g. peak of m_Z ~ 91 GeV might differ slightly.
    binMax = signal_plots[p].GetMaximumBin()
    binCenterMax = signal_plots[p].GetBinCenter(binMax) 
    binWidth = signal_plots[p].GetBinCenter(binMax) - signal_plots[p].GetBinCenter(binMax-1)
    
    binMaxima.append(binMax)
    binCenterMaxima.append(binCenterMax)
    binWidths.append(binWidth)
    
    ## We now want to determine how many possible intervals we can have.
    ## We will have a total of N bins, with x bins to the left and 
    ## N - x - 1 bins to the right. We probably only want to go for 
    ## which ever is smaller = min(x, N - x - 1). We could allow for 
    ## asymmetric intervals, but let's go with symmetric for now.
    nBins = signal_plots[p].GetNbinsX()
    x = binMax - 1
    N_x_1 = nBins - x - 1
    n_intervals = min(x, N_x_1)
    
    ## Now that we know how many intervals we can take, we want to 
    ## determine the amount of events kept in each interval.
    sEff = array('d')
    bEff = array('d')
    
    ## Step 1 - get the signal total
    total = 0.0
    for i in range(1, nBins + 1):
      total += signal_plots[p].GetBinContent(i)
    
    ## Step 2 - get the percentage for each interval for signal
    for i in range(n_intervals):
      selected = 0.0
      for j in range(-i,i + 1):
        selected += signal_plots[p].GetBinContent(binMax + j)
      sEff.append(selected * 1.0 / total)
    
    ## Step 3 - get the bckg total
    total = 0.0
    for i in range(1, nBins + 1):
      total += bckg_plots[p].GetBinContent(i)
    
    ## Step 4 - get the percentage for each interval for bckg
    for i in range(n_intervals):
      selected = 0.0
      for j in range(-i,i + 1):
        selected += bckg_plots[p].GetBinContent(binMax + j)
      bEff.append(selected * 1.0 / total)
    
    eff_signal.append(sEff)
    eff_bckg.append(bEff)
  
  ## Now that we've got the data, let's properly build the graphs,
  ## legends, canvases, and so on.
  canv = ROOT.TCanvas(canvasName, canvasName, 600, 600)
  canv.SetBottomMargin(0.12)
  canv.SetLeftMargin(0.15709)
  canv.SetRightMargin(0.1234783)
  
  multigraph = ROOT.TMultiGraph("","")
  graphs = []
  sizes = []
  for i in range(len(plotNames)):
    size = len(eff_signal[i])
    sizes.append(size)
    gI = ROOT.TGraph(size, eff_bckg[i], eff_signal[i])
    gI.SetTitle(plotNames[i])
    gI.SetMarkerColor(colors[i])
    gI.SetMarkerStyle(20)
    gI.SetLineColor(colors[i])
    gI.SetFillStyle(0)
    gI.SetLineWidth(2)
    
    graphs.append(gI)
  
  ## Add the labels
  bin_size = binWidths[0]
  for i in range(n_intervals):
    ytmp = -100
    idx = 0
    for j in range(len(graphs)):
      if i >= sizes[j]: continue
      ybit = graphs[j].GetY()[i]
      #print ybit
      if ybit > ytmp: 
        ytmp = ybit
        idx = j
    #print "chose: " + str(idx)
    #print "=========="
    
    ybit = graphs[idx].GetY()[i]
    yoffset = 0.04 if ybit > 0.8 else 0.1
    y = ybit + yoffset
    x = graphs[idx].GetX()[i]
    
    bckg_percent = eff_bckg[idx][i]
    if bckg_percent < 0.15 or bckg_percent >= 0.85:
      continue
    
    lt = ROOT.TLatex(x, y, "#pm" + str(i*bin_size))
    lt.SetTextSize(0.02)
    graphs[0].GetListOfFunctions().Add(lt)
  
  for i in range(len(plotNames)):
    multigraph.Add(graphs[i])
  
  multigraph.Draw("ALP")
  multigraph.GetXaxis().SetTitle("False Signal Rate (Bckg)")
  multigraph.GetXaxis().SetLabelSize(0.035)
  multigraph.GetYaxis().SetTitle("True Signal Rate")
  multigraph.GetYaxis().SetLabelSize(0.035)
  
  if len(plotNames) > 1:
    leg = canv.BuildLegend(0.50, 0.15, 0.85, 0.3)
    centerVal = binCenterMaxima[0]
    binSize = binWidths[0]
    addl_info = "Intervals centered around " + str(centerVal)
    if "pt" in plotVar or "mass" in plotVar or "MET" in plotVar:
      addl_info += " GeV"
    addl_info2 = "bin size = " + str(binSize)
    if "pt" in plotVar or "mass" in plotVar or "MET" in plotVar:
      addl_info2 += " GeV"
    leg.AddEntry("l", addl_info)
    #leg.AddEntry("l", addl_info2)
  
  myText('CMS Work in Progress #sqrt{s} = 13 TeV, ' + lumi + ' fb^{-1}',
    0.35, 0.927775, 0.6)
  canv.cd()
  canv.SetGrid()
  canv.Update()
  ROOT.gPad.Modified()
  ROOT.gPad.Update()
  
  ## Save our plots
  canv.Print(plotDir + '/' + canvasName + '.png')
  canv.Print(plotDir + '/' + canvasName + '.pdf')
  canv.Print(plotDir + '/' + canvasName + '.C')

###############################################################################
## customBin
###############################################################################
def customBin(hist, xDiv):
  hOut = ROOT.TH1D(hist.GetName() + '_customBinning','',len(xDiv)-1,array('f',xDiv))
  for i in range(1, hOut.GetNbinsX()+1):
    eL = hOut.GetBinLowEdge(i) - 0.000001
    eH = hOut.GetBinLowEdge(i) + hOut.GetBinWidth(i) + 0.000001
    
    contS = 0
    errS = 0
    for j in ranger(1, hist.GetNbinsX()+1):
      eL1 = hist.GetBinLowEdge(j)
      eH1 = eL1 + hist.GetBinWidth(j)
      if eL1 >= eL and eH1 <= eH:
        contS += hist.GetBinContent(j)
        errS += hist.GetBinError(j)*hist.GetBinError(j)
    errS = ROOT.TMath.Sqrt(errS)
    
    hOut.SetBinContent(i, contS)
    hOut.SetBinError(i, errS)
  
  hOut.SetBinError(0, hist.GetBinError(0))
  hOut.SetBinContent(0, hist.GetBinContent(0))
  hOut.SetBinError(hOut.GetNbinsX()+1,hist.GetBinError(hist.GetNbinsX()+1))
  hOut.SetBinContent(hOut.GetNbinsX()+1,h.GetBinContent(hist.GetNbinsX()+1))
  
  return hOut

###############################################################################
## Plot 2D with Projections
###############################################################################
def make2DplotWithProjections(plot, canvasName, plotDir, xAxis_title, 
  yAxis_title, debug=False, xRange = [], yRange = []):
  
  ## Make our canvas & modify it as possible
  c = ROOT.TCanvas(canvasName, canvasName, 600, 600)
  c.SetFillStyle(4000)
  c.SetFrameFillStyle(1000)
  c.SetFrameFillColor(0)
  
  ## Create the pads
  if debug: print "Creating the center pad..."
  center_pad = ROOT.TPad("center_pad", "center_pad", 0.0, 0.0, 0.6, 0.6)
  center_pad.Draw()
  
  if debug: print "Creating the right pad..."
  right_pad = ROOT.TPad("right_pad", "right_pad", 0.55, 0.0, 1.0, 0.6)
  right_pad.Draw()
  
  if debug: print "Creating the top pad..."
  top_pad = ROOT.TPad("top_pad", "top_pad", 0.0, 0.55, 0.6, 1.0)
  top_pad.Draw()

  plot.RebinX(2)
  plot.RebinY(2)
  
  ## Pull the projection plots from the main TH2
  projh2X = plot.ProjectionX()
  projh2X.SetStats(0)
  projh2Y = plot.ProjectionY()
  projh2Y.SetStats(0)
  
  ## Draw the 2D plot in the center pad
  if debug: "Drawing TH2 to the center pad..."
  center_pad.cd()
  ROOT.gStyle.SetPalette(1)
  if len(xRange) >= 2:
    print "xRange: ", xRange[0], ", ", xRange[1]
    plot.GetXaxis().SetLimits(0,50)
    plot.GetXaxis().SetRangeUser(0,25)
  if len(yRange) >= 2:
    print "yRange: ", yRange[0], ", ", yRange[1]
    plot.GetYaxis().SetLimits(0,300)
    plot.GetYaxis().SetRangeUser(0,200)
  plot.GetYaxis().SetTitle(yAxis_title)
  plot.GetXaxis().SetTitle(xAxis_title)
  plot.SetStats(0)
  plot.Draw("COL")
  center_pad.ForceUpdate()
  
  ## Draw the X-projection on the top pad
  if debug: "Drawing X-projection to the top pad..."
  top_pad.cd()
  binWidth = projh2X.GetBinWidth(1)
  projh2X.SetFillColor(ROOT.kBlue+1)
  projh2X.GetXaxis().SetTitle("m_{H} [GeV]")
  projh2X.GetYaxis().SetTitle("Events / " + str(binWidth) + " GeV")
  if len(xRange) >= 2:
    plot.GetXaxis().SetRange(xRange[0], xRange[1])
  projh2X.Draw("bar")
  
  ## Draw the Y-projection on the right pad
  if debug: "Drawing Y-projection to the top pad..."
  right_pad.cd()
  binWidth = projh2Y.GetBinWidth(1)
  projh2Y.SetFillColor(ROOT.kBlue-2)
  projh2Y.GetXaxis().SetTitle("m_{Z} [GeV]")
  projh2Y.GetYaxis().SetTitle("Events / " + str(binWidth) + " GeV")
  if len(yRange) >= 2:
    plot.GetXaxis().SetRange(yRange[0], yRange[1])
  projh2Y.Draw("hbar")
  
  ## Check to make sure the directory exists &
  ## then print the proper files to the output
  dirExists = os.path.exists(plotDir)
  if not dirExists:
    print "Warning: output directory does not exist."
    os.makedirs(plotDir)
    print ">>> directory created."
  
  c.Print(plotDir + '/' + canvasName + '.png')
  c.Print(plotDir + '/' + canvasName + '.pdf')
  c.Print(plotDir + '/' + canvasName + '.C')
  

###############################################################################
## Plot 2D with Regions
###############################################################################
def make2DplotWithRegions(plot, canvasName, plotDir, xAxis_title, 
  yAxis_title, debug=False, xRange = [], yRange = [], CR_width=20,
  VR_width=10, SR_width=20):
  
  ## Make our canvas & modify it as possible
  c = ROOT.TCanvas(canvasName, canvasName, 600, 600)
  c.SetFillStyle(4000)
  c.SetFrameFillStyle(1000)
  c.SetFrameFillColor(0)
  
  ## Draw the 2D plot in the center pad
  if debug: "Drawing TH2 to the center pad..."
  ROOT.gStyle.SetPalette(1)
  plot.GetXaxis().SetTitle(xAxis_title)
  if len(xRange) >= 2:
    plot.GetXaxis().SetRange(xRange[0], xRange[1])
  plot.GetYaxis().SetTitle(yAxis_title)
  if len(yRange) >= 2:
    plot.GetYaxis().SetRange(yRange[0], yRange[1])
  plot.SetStats(0)
  plot.Draw("COL")
  
  ## ===========================
  ## Draw the 2D regions on top
  ## ===========================
  
  ## Ellipse #1 - Signal Region
  if type(SR_width) == list:
    SR_x = SR_width[0]
    SR_y = SR_width[1]
  else:
    SR_x = SR_width
    SR_y = SR_width
  el1 = ROOT.TEllipse(125, 91, SR_x, SR_y)
  el1.SetFillColorAlpha(ROOT.kWhite, 0)
  el1.SetFillStyle(1001)
  el1.SetLineColor(ROOT.kRed)
  el1.SetLineWidth(2)
  el1.Draw("same")
  
  ## Ellipse #2 - Validation Region
  if type(VR_width) == list:
    VR_x = SR_x + VR_width[0]
    VR_y = SR_y + VR_width[1]
  else:
    VR_x = SR_x + VR_width
    VR_y = SR_y + VR_width
  el2 = ROOT.TEllipse(125, 91, VR_x, VR_y)
  el2.SetFillColorAlpha(ROOT.kWhite, 0)
  el2.SetFillStyle(1001)
  el2.SetLineColor(ROOT.kRed)
  el2.SetLineWidth(2)
  el2.Draw("same")
  
  ## Ellipse #3 - Control Region
  if type(CR_width) == list:
    CR_x = VR_x + CR_width[0]
    CR_y = VR_y + CR_width[1]
  else:
    CR_x = VR_x + CR_width
    CR_y = VR_y + CR_width
  el3 = ROOT.TEllipse(125, 91, CR_x, CR_y)
  el3.SetFillColorAlpha(ROOT.kWhite, 0)
  el3.SetFillStyle(1001)
  el3.SetLineColor(ROOT.kRed)
  el3.SetLineWidth(2)
  el3.Draw("same")
  
  ## We want to determine how many events are in each given
  ## region
  nBinsX = plot.GetNbinsX()
  nBinsY = plot.GetNbinsY()
  
  event_multiplicity = {
    "SR": 0, "VR": 0,
    "CR": 0, "total": 0,
    "other": 0 }
  
  ## Go through each bin in each direction
  for y in range(1, nBinsY+1):
    
    cY = plot.GetYaxis().GetBinCenter(y)
    for x in range(1, nBinsX+1):
      cX = plot.GetXaxis().GetBinCenter(x)
      
      evts = plot.GetBinContent(x,y)
      event_multiplicity["total"] += evts
      
      ## Check against each of our regions
      region = "other"
      if isWithinEllipse(cX, cY, 125.0, 91.0, SR_x, SR_y):
        region = "SR"
      elif isWithinEllipse(cX, cY, 125.0, 91.0, VR_x, VR_y):
        region = "VR"
      elif isWithinEllipse(cX, cY, 125.0, 91.0, CR_x, CR_y):
        region = "CR"
      
      event_multiplicity[region] += evts
  
  ## Now, determine the percentages
  total = event_multiplicity["total"] * 1.0
  percentages = { 
    "SR": event_multiplicity["SR"] / total,
    "VR": event_multiplicity["VR"] / total,
    "CR": event_multiplicity["CR"] / total,
    "other": event_multiplicity["other"] / total
  }
  
  ## Print out all this information
  print "Total Events: ", total
  print "============================="
  for key in percentages:
    print key, ": events = ", event_multiplicity[key], " | ", '{:,.3f}'.format(percentages[key]), "%"
  
  ## Check to make sure the directory exists &
  ## then print the proper files to the output
  dirExists = os.path.exists(plotDir)
  if not dirExists:
    print "Warning: output directory does not exist."
    os.makedirs(plotDir)
    print ">>> directory created."
  
  c.Print(plotDir + '/' + canvasName + '.png')
  c.Print(plotDir + '/' + canvasName + '.pdf')
  c.Print(plotDir + '/' + canvasName + '.C')

###############################################################################
## Make Graph Overlays
###############################################################################
def makeGraphOverlays(canvasName, plotDir, x_data, y_data_series, 
  xTitle, yTitle, legend_position=[0.7, 0.7, 0.9, 0.9]):
  
  ## Make our canvas & modify it as possible
  c = ROOT.TCanvas(canvasName, canvasName, 600, 600)
  c.SetFillStyle(4000)
  c.SetFrameFillStyle(1000)
  c.SetFrameFillColor(0)
  
  ## Make a TGraph using the data for each case
  colors = [ROOT.kRed, ROOT.kBlue, ROOT.kBlack, ROOT.kGreen]
  mg = ROOT.TMultiGraph()
  legend = ROOT.TLegend(legend_position[0],
    legend_position[1], legend_position[2],
    legend_position[3])
  legend.SetFillColor(0)
  
  graphs = {}
  dict_items = list(y_data_series.items())
  
  for k in range(0, len(dict_items)):
  
    key, value = dict_items[k]
  
    ## For the TGraph instances to work, we must convert our
    ## lists into arrays
    n = len(x_data)
    xarr,yarr = array('d'), array('d')
    for i in range(0,n):
      xarr.append(x_data[i])
      yarr.append(y_data_series[key][i])
    
    g = ROOT.TGraph(n, xarr, yarr)
    g.SetTitle(key)
    legend.AddEntry(g, key, "lp")
    g.SetLineColor(colors[k])
    g.SetLineWidth(2)
    mg.Add(g)
  
  mg.SetTitle("Percentages of Events inside Regions")
  mg.GetXaxis().SetTitle(xTitle)
  mg.GetYaxis().SetTitle(yTitle)
  mg.Draw("AC")
  legend.Draw()
  
  ## Check to make sure the directory exists &
  ## then print the proper files to the output
  dirExists = os.path.exists(plotDir)
  if not dirExists:
    print "Warning: output directory does not exist."
    os.makedirs(plotDir)
    print ">>> directory created."
  
  c.Print(plotDir + '/' + canvasName + '.png')
  c.Print(plotDir + '/' + canvasName + '.pdf')
  c.Print(plotDir + '/' + canvasName + '.C')

###############################################################################
## Make 2D Plots with overlayed shapes
###############################################################################
def make2DplotWithShapes(plot, canvasName, plotDir, xAxis_title,
  yAxis_title, debug=False, xRange = [], yRange = [], shapes = []):
  
  ## Make our canvas & modify it as possible
  c = ROOT.TCanvas(canvasName, canvasName, 600, 600)
  c.SetFillStyle(4000)
  c.SetFrameFillStyle(1000)
  c.SetFrameFillColor(0)
  
  ## Draw the 2D plot in the center pad
  ROOT.gStyle.SetPalette(1)
  plot.GetXaxis().SetTitle(xAxis_title)
  if len(xRange) >= 2:
    plot.GetXaxis().SetRange(xRange[0], xRange[1])
  plot.GetYaxis().SetTitle(yAxis_title)
  if len(yRange) >= 2:
    plot.GetYaxis().SetRange(yRange[0], yRange[1])
  plot.SetStats(0)
  plot.Draw("COL")
  
  ## Draw each region based on the options given in the 'shapes' dictionary
  for i in len(shapes):
    shape_dict = shapes[i]
    if not "shape" in shape_dict:
      print "ERROR: 'shape' not given for shape #", i 
      print ">>> shape #", i, " skipped..."
      continue
    
    shape_name = shape_dict["shape"]
    if not shape_name in ["circle", "line"]:
      print "ERROR: ", shape_name, " not supported as a shape."
      print ">>> shape #", i, " skipped..."
      continue
    
    if shape_name == "circle":
    
      ## Get the parameters we need for a circle.
      if not "center_x" in shape_dict:
        print "ERROR: 'center_x' not found for this shape."
        print ">>> shape #", i, "skipped..."
        continue
      center_x = shape_dict["center_x"]
      
      if not "center_y" in shape_dict:
        print "ERROR: 'center_y' not found for this shape."
        print ">>> shape #", i, "skipped..."
        continue
      center_y = shape_dict["center_y"]
      
      if not "radius" in shape_dict:
        print "ERROR: 'radius' not found for this shape."
        print ">>> shape #", i, "skipped..."
        continue
      radius = shape_dict["radius"]
      
      ## Build the shape that we want.
      el = ROOT.TEllipse(center_x, center_y, radius, radius)
      el.SetFillColorAlpha(ROOT.kWhite, 0)
      el.SetFillStyle(1001)
      el.SetLineColor(ROOT.kRed)
      el.SetLineWidth(2)
      el.Draw("same")
      
    elif shape_name == "line":
      
      li = ROOT.TLine(x0, y0, x1, y1)
      li.Draw("same")
    
    
