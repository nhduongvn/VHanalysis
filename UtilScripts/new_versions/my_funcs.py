## == IMPORT STATEMENTS =======================================================

import ROOT
import sys,os

## == COLORS ==================================================================
colors = [ROOT.kBlack, ROOT.kBlue, ROOT.kRed]

###############################################################################
## Scale To Lumi
###############################################################################
def scaleToLumi1(fName, xSec, lumi):
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
## Make Plot Function
###############################################################################
def makePlot(plot, plotName, canvasName, plotDir, xAxisTitle, xAxisRange, 
  yAxisTitle, logY, lumi, line_color, fill_color, fill=True):
  
  ## Make the canvas
  c = ROOT.TCanvas(canvasName, canvasName, 600, 600)
  c.cd()
  
  ## Appropriately modify the plot
  if fill: plot.SetFillColor(fill_color)
  plot.SetLineColor(line_color)
  plot.Draw()
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
  return c

###############################################################################
## Make Overlap Plot Function
###############################################################################
def makeOverlapPlot(plots, plotNames, canvasName, plotDir, xAxisTitle, xAxisRange,
  yAxisTitle, logY, lumi, stack=False, normalize=False, fill=True, custom_colors=colors):
  
  ## Make the canvas
  c = ROOT.TCanvas(canvasName, canvasName, 600, 600)
  c.cd()
  
  ## Prepare the legend
  l = ROOT.TLegend(0.52, 0.55, 0.89, 0.87)
  l.SetLineWidth(2)
  l.SetBorderSize(0)
  l.SetTextFont(42)
  l.SetTextSize(0.035)
  
  ## Overlap the plots
  allStack = ROOT.THStack('st', '')
  for i in range(0, len(plots)):
    if fill: plots[i].SetFillColor(colors[i])
    plots[i].SetLineColor(colors[i])
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
  fullpath = plotDir + '/' + canvasName + extraName
  c.Print(fullpath + '.png')
  c.Print(fullpath + '.pdf')
  return c

###############################################################################
## Make Ratio Plots
###############################################################################
def makeRatioPlots(plots, plotNames, canvasName, plotDir, xAxisTitle, xAxisRange, logY):
  
  ## Make the canvas
  c = ROOT.TCanvas(canvasName, canvasName, 600, 600)
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
  
