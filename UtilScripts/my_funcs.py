import ROOT
import sys,os

## == COLORS ===================================================================
colors = [416+1, 632+1, 600+1, 400+1, 840+1, 860+1, 880+1, 900+1, 432+1, 616+1, 616+3, 800+7] 

colors = [ROOT.kBlack, ROOT.kBlue, ROOT.kRed]
fill_colors = [16, 38, 46]

###############################################################################
## Make Overlap Plots
###############################################################################
def makeOverlapPlot(plots, plotNames, cName, plotDir, xAxisTitle, xAxisRange, logY, lumi, fill=True):
  
  ## Make the canvas
  c = ROOT.TCanvas(cName, cName, 600, 600)
  #c.SetFillStyle(1000)
  #c.SetFrameFillStyle(1000)
  #c.SetFrameFillColor(0)
  c.cd()
  
  l = ROOT.TLegend(0.52, 0.55, 0.89, 0.87)
  l.SetLineWidth(2)
  l.SetBorderSize(0)
  l.SetFillColor(0)
  l.SetTextFont(42)
  l.SetTextSize(0.035)
  
  ## Overlap the plots (stack w/o stacking)
  allStack = ROOT.THStack('st', '')
  for i in range(0, len(plots)):
    if fill: 
      plots[i].SetFillColor(fill_colors[i])
    plots[i].SetLineColor(colors[i])
    #plots[i].Rebin(2)
    #plots[i].SetLineWidth(2)
    l.AddEntry(plots[i], plotNames[i], 'F')
    allStack.Add(plots[i])
    #plots[i].SetLineWidth(1)
  
  allStack.Draw("nostack,HIST")
  allStack.GetXaxis().SetTitle(xAxisTitle)
  allStack.GetYaxis().SetTitle("Events / 0.1")# 2 GeV")
  l.Draw()
  
  if logY: 
    c.SetLogy()
  
  ## Check to make sure the directory exists &
  ## then print the proper files to the output
  dirExists = os.path.exists(plotDir)
  if not dirExists:
    print "Warning: output directory did not exist."
    os.makedirs(plotDir)
    print ">>> directory created."
  
  extraName = ''
  if logY:
    extraName = '_logY'
  c.Print(plotDir + '/' + cName + extraName + '.png')
  c.Print(plotDir + '/' + cName + extraName + '.pdf')
  
  return c

###############################################################################
## Make Ratio Plots
###############################################################################

def makeRatioPlots(plots, plotNames, cName, plotDir, xAxisTitle, xAxisRange, logY):

  c = ROOT.TCanvas(cName, cName, 600, 600)
  c.cd()
  ROOT.gStyle.SetOptStat(0)
  
  #plots[0].SetFillColor(fill_colors[0])
  plots[0].SetLineColor(colors[0])
  #plots[1].SetFillColor(fill_colors[2])
  plots[1].SetLineColor(colors[2])
  rp = ROOT.TRatioPlot(plots[0], plots[1])
  
  plots[0].GetXaxis().SetTitle(xAxisTitle)
  rp.Draw()
  
  if logY: rp.GetUpperPad().SetLogy()
  
  #rp.GetUpperPad().SetStats(0)
  rp.GetLowerRefGraph().SetMinimum(0)
  rp.GetLowerRefGraph().SetMaximum(2)
  
  rp.GetUpperRefXaxis().SetRange(xAxisRange[0], xAxisRange[1])
  rp.GetLowerRefXaxis().SetRange(xAxisRange[0], xAxisRange[1])
  
  #rp.GetLowerRefXaxis().SetTitle("Title Goes Here.")
  rp.GetUpperRefYaxis().SetTitle("Data / MC")
  
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
  ## then print the proper files to the output
  dirExists = os.path.exists(plotDir)
  if not dirExists:
    print "Warning: output directory did not exist."
    os.makedirs(plotDir)
    print ">>> directory created."
  
  extraName = ''
  if logY:
    extraName = '_logY'
  c.Print(plotDir + '/' + cName + extraName + '.png')
  c.Print(plotDir + '/' + cName + extraName + '.pdf')
  
  return c


###############################################################################
## Make 2D Plots
###############################################################################
def make2DPlots(plot, plotName, cName, plotDir, xAxisTitle, yAxisTitle):

  ROOT.gStyle.SetOptStat(0)
  
  ## Make the canvas
  c = ROOT.TCanvas(cName, cName, 600, 600)
  #c.SetFillStyle(1000)
  #c.SetFrameFillStyle(1000)
  #c.SetFrameFillColor(0)
  c.cd()
  
  plot.Draw("colz")
  plot.GetXaxis().SetTitle(xAxisTitle)
  plot.GetYaxis().SetTitle(yAxisTitle)
  #l.Draw()
  
  ## Check to make sure the directory exists &
  ## then print the proper files to the output
  dirExists = os.path.exists(plotDir)
  if not dirExists:
    print "Warning: output directory did not exist."
    os.makedirs(plotDir)
    print ">>> directory created."
  
  c.Print(plotDir + '/' + cName + '.png')
  c.Print(plotDir + '/' + cName + '.pdf')
  
  return c

###############################################################################
## Make Plot
###############################################################################
def makePlot(plots, plotName, cName, plotDir, xAxisTitle, xAxisRange, yAxisTitle, logY, lumi, line_color, fill_color, fill=True):
  
  ## Make the canvas
  c = ROOT.TCanvas(cName, cName, 600, 600)
  #c.SetFillStyle(1000)
  #c.SetFrameFillStyle(1000)
  #c.SetFrameFillColor(0)
  c.cd()
  
  ## Overlap the plots (stack w/o stacking)
  allStack = ROOT.THStack('st', '')
  for i in range(0, len(plots)):
    if fill: 
      plots[i].SetFillColor(fill_color)
    plots[i].SetLineColor(line_color)
    #plots[i].SetLineWidth(2)
    allStack.Add(plots[i])
    #plots[i].SetLineWidth(1)
  
  allStack.Draw("nostack,HIST")
  allStack.GetXaxis().SetTitle(xAxisTitle)
  allStack.GetYaxis().SetTitle(yAxisTitle)
  
  latex = ROOT.TLatex()
  #t = ROOT.TText(.9, .9, "Hello world")
  latex.SetTextFont(42)
  latex.SetTextSize(0.035)
  #latex.DrawLatex(.9, .9, "Hello World!")
  
  c.Update()
  
  if logY: 
    c.SetLogy()
  
  ## Check to make sure the directory exists &
  ## then print the proper files to the output
  dirExists = os.path.exists(plotDir)
  if not dirExists:
    print "Warning: output directory did not exist."
    os.makedirs(plotDir)
    print ">>> directory created."
  
  extraName = ''
  if logY:
    extraName = '_logY'
  c.Print(plotDir + '/' + cName + extraName + '.png')
  c.Print(plotDir + '/' + cName + extraName + '.pdf')
  
  return c


