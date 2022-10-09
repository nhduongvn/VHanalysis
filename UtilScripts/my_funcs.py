import ROOT
import sys,os

colors = [416+1, 632+1, 600+1, 400+1, 840+1, 860+1, 880+1, 900+1, 432+1, 616+1, 616+3, 800+7] 

colors = [ROOT.kBlack, ROOT.kRed, ROOT.kBlue]

def makeOverlapPlot(plots, plotNames, cName, plotDir, xAxisTitle, xAxisRange, logY, lumi):
  
  ## Make the canvas
  c = ROOT.TCanvas(cName, cName, 600, 600)
  #c.SetFillStyle(1000)
  #c.SetFrameFillStyle(1000)
  #c.SetFrameFillColor(0)
  c.cd()
  
  l = ROOT.TLegend(0.5, 0.5, 0.89, 0.87)
  l.SetLineWidth(2)
  l.SetBorderSize(0)
  l.SetFillColor(0)
  l.SetTextFont(42)
  l.SetTextSize(0.035)
  
  ## Overlap the plots (stack w/o stacking)
  allStack = ROOT.THStack('st', '')
  for i in range(0, len(plots)):
    #plots[i].SetFillColor(colors[i])
    plots[i].SetLineColor(colors[i])
    l.AddEntry(plots[i], plotNames[i], 'F')
    allStack.Add(plots[i])
    
  allStack.Draw("nostack,HIST")
  allStack.GetXaxis().SetTitle(xAxisTitle)
  allStack.GetYaxis().SetTitle("Events / x GeV")
  l.Draw()
  
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
