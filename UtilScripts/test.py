import ROOT

print "Hello, world!"
print "Check to see if ROOT is fine right now..."

h = ROOT.TH1D("test_hist", "test_hist", 200, 0, 200)
h.Fill(100)
#h.Draw()
print str(h.GetBinContent(3))

print "END OF TEST"
