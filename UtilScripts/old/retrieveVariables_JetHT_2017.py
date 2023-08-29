import os, sys
import ROOT

## == Necessary variables =====================================================

files = {
  "DATA_2017B": "root:://cmsxrootd.fnal.gov///store/data/Run2017B/JetHT/NANOAOD/UL2017_MiniAODv2_NanoAODv9-v1/120000/62E9EA6D-8AD2-CC42-B2FD-2817FECF47F0.root",
  "DATA_2017C": "root:://cmsxrootd.fnal.gov///store/data/Run2017C/JetHT/NANOAOD/UL2017_MiniAODv2_NanoAODv9-v1/130000/E7FDF0DC-5BC8-FA43-AA00-CB5E36D1C035.root",
  "DATA_2017D": "root:://cmsxrootd.fnal.gov///store/data/Run2017D/JetHT/NANOAOD/UL2017_MiniAODv2_NanoAODv9-v1/120000/F611A508-2426-4544-A824-98BA66C79966.root",
  "DATA_2017E": "root:://cmsxrootd.fnal.gov///store/data/Run2017E/JetHT/NANOAOD/UL2017_MiniAODv2_NanoAODv9-v1/70000/C53BE643-D1A6-4D45-9BA0-4156436423DF.root",
  "DATA_2017F": "root:://cmsxrootd.fnal.gov///store/data/Run2017F/JetHT/NANOAOD/UL2017_MiniAODv2_NanoAODv9-v1/120000/30C498A7-4C8A-C748-B290-F108392AD8EE.root",
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

for datatype in files:
  
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
  print "\n==================================================================="

## Now, let them know where the files are located.
print "Variable lists created in ", outputdir
