import ROOT

print "Testing ROOT w/ filling random histogram..."
h = ROOT.TH1D("hist", "hist", 20, 0, 20)
for i in range(0,3):
  h.Fill(i)

print str(h.GetBinContent(1))
print "END OF OUTPUT"
