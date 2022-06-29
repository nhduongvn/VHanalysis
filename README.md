# VHanalysis
## Compile:
make FORMAT=sample_format INPUT=input_type
sample_format: MC_YEAR, DATA_YEAR (YEAR: 2016,2017,2018)
input_type: TCHAIN, TFILE (TCHAIN: uses TChain to open files, TFILE: uses TFile to open a file)
## Run
./main -filelist FileLists_test/JetHT_DATA_2016C_test.txt -out test.root -data 1 -year 2016 -lastentry 100
##Use scripts inside SubmitToCondor to launch jobs to Condor
