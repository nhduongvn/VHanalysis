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
def makePlot(plot, plotName, canvasName, plotDir, xAxisTitle, xAxisRange, 
  yAxisTitle, rebin, logY, lumi, line_color, fill_color, fill=False, yRange=[],
  is2D = False, showStats=False):
  
  ## Make the canvas
  if not showStats: ROOT.gStyle.SetOptStat(0)
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
  if is2D:
    plot.RebinX(rebin)
    plot.RebinY(rebin)
  else: plot.Rebin(rebin)
  if is2D: plot.Draw("colz")
  else: plot.Draw("HIST")
  plot.GetXaxis().SetTitle(xAxisTitle)
  plot.GetYaxis().SetTitle(yAxisTitle)
  
  ## Update the canvas & modify the y-axis if appropriate
  c.Update()
  if logY and not is2D: c.SetLogy()
  
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
    #plots[i].Rebin(rebin)
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
## Make Efficiency Plot Function
###############################################################################
def makeEfficiencyPlot(plots, plotNames, canvasName, plotDir, 
  xAxisTitle, xAxisRange, yAxisTitle):
  
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
forceMaxY = False, forced_maxY = 0.3, legendColumns=2):

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
  
  y1_ndc = 0.8
  y2_ndc = 0.87
  x1_ndc = 0.48
  if len(legendOrder) != 0:
    x1_ndc = 0.42
    y1_ndc = 0.5
  
  l = ROOT.TLegend(x1_ndc, y1_ndc, 0.85, y2_ndc)
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

