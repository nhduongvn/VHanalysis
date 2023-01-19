import os,sys
import json
import subprocess
import time
#########################################################
#samples_json = "../datasets_Nano25Oct2019_DY_madgraph_json.txt"
#samples_json = "../datasets_Nano02Apr2020_json_postPrep.txt"

#samples_json = "../datasets_Nano02Apr2020_data_json.txt"
#samples_json = "../datasets_Nano02Apr2020_json_MC.txt"
samples_json = "../datasets_Nano02Apr2020_data_json.txt" 

outDir = '../FileLists_tmp/'
os.system('mkdir ' + outDir)

samples_input = []
if len(sys.argv) > 1: 
  samples_input = sys.argv[1].split(',') #all, or DY_2J_amcatnlo_MC_2018

print samples_input

with open(samples_json) as json_file:
  samples = json.load(json_file)

if len(samples_input) > 0:
  samples_used = samples_input
else:
  samples_used = samples.keys()



#ss = ['/eos/uscms/store/user/lpcphys/noreplica/NanoAOD_postProcessing_peteryou',
#    '/eos/uscms/store/user/peteryou/Output_ZplusB/NanoAOD_postProcessing',
#    '/eos/uscms/store/user/hhsia/NanoAOD_postProcessing',
#    '/eos/uscms/store/user/lpcphys/noreplica/NanoAOD_postProcessing_st_fromAvto']
ss = ['/eos/uscms/store/user/lpcphys/duong/NanoAOD_postProcessing_secondRound'] #important, should not have '/' at the end

for k in samples_used:
  print k
  fOutN = outDir + '/' + k + '.txt'
  os.system('rm '+ fOutN)
  fOut = open(fOutN,'w')
  for s in ss:
    if k in ['DY_1J_amcatnlo_MC_2018','DY_2J_amcatnlo_MC_2018'] and 'hhsia' in s: continue
    os.system('rm tmp.txt')
    time.sleep(0.2)
    os.system('ls ' + s + '/' + k + '/*>tmp.txt')
    time.sleep(0.2)
    lines = open('tmp.txt').readlines()
    for l in lines:
      l = l.split('uscms')[1]
      l = 'root:://cmseos.fnal.gov//' + l
      fOut.write(l)
