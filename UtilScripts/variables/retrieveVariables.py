import os, sys
import ROOT

## == Necessary variables =====================================================

## Data types we want to search
datatypes = [ "DATA_2016", "DATA_2017", "DATA_2018",
              "MC_2016",   "MC_2017",   "MC_2018"]

## Variables for each year
files = {
  "DATA_2016": "root:://cmsxrootd.fnal.gov///store/data/Run2016B/JetHT/NANOAOD/ver2_HIPM_UL2016_MiniAODv2_NanoAODv9-v2/2520000/E8D052D8-0446-A046-B45F-2882BF34D4DB.root",

  "DATA_2017": "root:://cmsxrootd.fnal.gov///store/data/Run2017B/JetHT/NANOAOD/UL2017_MiniAODv2_NanoAODv9-v1/120000/62E9EA6D-8AD2-CC42-B2FD-2817FECF47F0.root",

  "DATA_2018": "root:://cmsxrootd.fnal.gov///store/data/Run2018B/JetHT/NANOAOD/UL2018_MiniAODv2_NanoAODv9-v1/120000/A4258CED-A995-AC4E-B50C-50CD7FCA4A94.root",

  "MC_2016": "root:://cmsxrootd.fnal.gov///store/mc/RunIISummer20UL16NanoAODv9/ZH_HToCC_ZToQQ_M125_TuneCP5_13TeV-powheg-pythia8/NANOAODSIM/106X_mcRun2_asymptotic_v17-v1/2810000/45CCF319-7DC5-844F-B2E6-68A4215CE98D.root",

  "MC_2017": "root:://cmsxrootd.fnal.gov///store/mc/RunIISummer20UL17NanoAODv9/ZH_HToCC_ZToQQ_M125_TuneCP5_13TeV-powheg-pythia8/NANOAODSIM/106X_mc2017_realistic_v9-v1/70000/307C5497-83A7-1840-89FA-A72DF9D0ACFD.root",

  "MC_2018": "root:://cmsxrootd.fnal.gov///store/mc/RunIISummer20UL18NanoAODv9/ZH_HToCC_ZToQQ_M125_TuneCP5_13TeV-powheg-pythia8/NANOAODSIM/106X_upgrade2018_realistic_v16_L1v1-v1/80000/9DBFECCE-45AF-8148-8319-D9A557FE7B66.root",
}

## Directories
outputdir = "../VariableLists/"

## Debug options
debug = True

## == Main Code ===============================================================

## Header
print "======================================"
print "NOTE: Remember to make sure your grid"
print "certificate is valid before running  "
print "this script..."
print "======================================\n"

## For each file listed above...
for datatype in datatypes:

	## Output to let us know which file we're on
        print "Retrieving variable list for:", datatype
	filename = files[datatype]
	print "file:", filename
	
	## Retrieve the variables for this file.
	f = ROOT.TFile.Open(filename)
        tree = f.Get("Events")
	names = [b.GetName() for b in tree.GetListOfBranches()]
        nBranches = len(names)
	
	## Generate the selector so we have the code.
	tree.MakeSelector(outputdir + datatype)
	print "Created TSelector for ", datatype
	print ">>> ", outputdir + datatype + ".C"
	print ">>> ", outputdir + datatype + ".h"

	## Write these to a text file in the proper location
        outputfile = outputdir + datatype + ".txt"
	print nBranches, " variables found."
        print "Variables retrieved:", outputfile

	with open(outputfile, "w") as f:
		for i in range(nBranches):
			f.write(names[i] + "\n")
	f.close()	

	## End statements to let them know this file is completed.
	print "\n============================================================="

## Now, let them know where the files are located.
print "Variable lists created in ", outputdir
