## == IMPORT STATEMENTS =======================================================

import ROOT
import sys,os
import copy
import math
import ConfigParser
from math import *
from array import array

## == MAIN CODE ===============================================================

x = array('d')
y = array('d')

n = 20

for i in range(n):
  x.append(i * 0.1)
  y.append(10*sin(x[i] + 0.2))
  
c = ROOT.TCanvas("","")

g = ROOT.TGraph(n, x, y)
g.SetTitle("Graph title; X title; Y title")
c.cd()
g.Draw("AC*")
c.Update()
c.SaveAs("test.png")
