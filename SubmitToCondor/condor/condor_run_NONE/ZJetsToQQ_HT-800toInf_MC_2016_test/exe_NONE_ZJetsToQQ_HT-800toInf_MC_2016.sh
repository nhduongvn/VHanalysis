#!/bin/bash 
echo $SHELL 
source /cvmfs/cms.cern.ch/cmsset_default.sh 
export SCRAM_ARCH=slc7_amd64_gcc820 
eval `scramv1 project CMSSW CMSSW_10_6_4` 
cd CMSSW_10_6_4/src/ 
eval `scramv1 runtime -sh` 
echo "CMSSW: "$CMSSW_BASE 
cd ${_CONDOR_SCRATCH_DIR} 
tar -xvf input.tar 
make FORMAT=MC_2016 NANOAOD=NANOAODV9 INPUT=TCHAIN
./main -filelist sampleList_$1.txt -out output_$1.root -data 0 -year 2016 -syst NONE -centralGenWeight 0 
xrdcp *.root root://cmseos.fnal.gov//store/user/peteryou/Output_VH/NONE//ZJetsToQQ_HT-800toInf_MC_2016/ 
rm *.root 
echo "xrdcp *.root root://cmseos.fnal.gov//store/user/peteryou/Output_VH/NONE//ZJetsToQQ_HT-800toInf_MC_2016/" 
