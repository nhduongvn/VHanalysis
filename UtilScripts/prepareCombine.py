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

## == custom methods ==========================================================

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
    if sampleNames[0] not in ['JetHT']:
      hOut[y].Scale(lumi_scales[sampleNames[0]][y][0])
    
    for iS in range(len(sampleNames)):
      for fi in range(len(hist_files[sampleNames[iS]][y])):
        ## Ignore the first sample, first file as we've already grabbed it.
        if iS == 0 and fi == 0: continue
        
        h = hist_files[sampleNames[iS]][y][fi].Get(plot_name).Clone()
        if sampleNames[iS] not in ['JetHT']:
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
  if v2 != -1: eBin = h.GetXaxis().FindFixBin9v2)
  
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
  nErrUf = math.sqrt(0, nUf)
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

## ============================================================================
## MAIN CODE
## ============================================================================

ws = ['words','here','and','here']
line = makeline(ws)
print(line)
