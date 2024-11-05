#!/bin/bash 
echo $SHELL 
source /cvmfs/cms.cern.ch/cmsset_default.sh 
export SCRAM_ARCH=el9_amd64_gcc12 
export X509_CERT_DIR=/cvmfs/grid.cern.ch/etc/grid-security/certificates/ 
#eval `scramv1 project CMSSW CMSSW_14_0_6` 
#cd CMSSW_14_0_6/src/ 
eval `scramv1 runtime -sh` 
echo "CMSSW: "$CMSSW_BASE 
#cd ${_CONDOR_SCRATCH_DIR} 
tar -xvf input.tar 
make FORMAT=MC_2016 SUBFORMAT=MC_2016 PROCESSING=NORMAL NANOAOD=NANOAODV9 INPUT=TCHAIN
./main -filelist sampleList_0.txt -out output_0.root -data 0 -year 2016 -syst JESU -xccEffFileName CalibData/xcc_eff_VH_looseWP.root -centralGenWeight 0 -lastentry 10000 
#xrdcp *.root root://cmseos.fnal.gov//store/user/peteryou/Output_VHcc/test//ZH_HToCC_ZToQQ_MC_2016/ 
#rm *.root 
#echo "xrdcp *.root root://cmseos.fnal.gov//store/user/peteryou/Output_VHcc/test//ZH_HToCC_ZToQQ_MC_2016/" 
