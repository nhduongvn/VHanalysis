#!/bin/bash 
make FORMAT=MC_2016 SUBFORMAT=MC_2016 PROCESSING=POSTPROC NANOAOD=NANOAODV9 INPUT=TCHAIN
#./main -filelist sampleList_testUnc.txt -out Tmp/output_testTAG_CCU.root -data 0 -year 2016 -syst TAG_CCU -centralGenWeight 0 
./main -filelist sampleList_testUnc.txt -out Tmp/output_testNONE.root -data 0 -year 2016 -syst NONE -centralGenWeight 0 
./main -filelist sampleList_testUnc.txt -out Tmp/output_testNONE_JESU.root -data 0 -year 2016 -syst JESU -centralGenWeight 0 
./main -filelist sampleList_testUnc.txt -out Tmp/output_testNONE_JESD.root -data 0 -year 2016 -syst JESD -centralGenWeight 0 
