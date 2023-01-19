import os,sys
import json

#dataSet_list = "../datasets_Nano02Apr2020_json.txt"
#dataSet_list = "../tmp_json_DY.txt"
#dataSet_list = "../datasets_Nano02Apr2020_json_Peter.txt"
#dataSet_list = "../datasets_Nano02Apr2020_data_json.txt"
dataSet_list = "../datasets_Nano02Apr2020_json_Peter_secondRound_set1.txt"

dir_file_list = '../FileLists_Nano02Apr2020/'
#dir_file_list_unprocessed = 'FileLists_Nano02Apr2020_unprocessed_Peter/'
#dir_file_list_unprocessed = 'FileLists_Nano02Apr2020_unprocessed_Hsin_Wei/'
dir_file_list_unprocessed = 'FileLists_checkMissing/'

#outputDir_eos = '/eos/uscms//store/user/peteryou/Output_ZplusB/NanoAOD_postProcessing/'
#outputDir_eos = '/eos/uscms/store/user/hhsia/NanoAOD_postProcessing/'
outputDir_eos = '/eos/uscms/store/user/lpcphys/noreplica/NanoAOD_postProcessing_secondRound/'
 

print '============================='
print 'Sample list file (list of input samples):                   ', dataSet_list
print 'Sample list folder (location of input file lists):          ', dir_file_list
print 'Output location eos:                                        ', outputDir_eos 


#sys.exit()

#////////////////////////////////////////////////////////////////////
samples_input = []
if len(sys.argv) > 1: 
  samples_input = sys.argv[1].split(',') #all, or DY_2J_amcatnlo_MC_2018


json_file = open(dataSet_list)

samples = json.load(json_file)

lines = samples.keys() 

sample_format = ''
dir_affix = 'test'

for line in lines:
  if len(samples_input) > 0 and line not in samples_input: continue
  print '========================='
  print 'Processing sample: ', line
  
  data_name = line
  os.system('rm tmp.txt')
  os.system('ls ' + outputDir_eos + '/' + data_name + '>tmp.txt')
  processedFiles = []
  for fN in open('tmp.txt').readlines():
    processedFiles.append(fN.replace('\n','').replace('_Skim',''))
  #print processedFiles
  
  tmp = open(dir_file_list+'/'+data_name+'.txt').readlines()
  sourceFiles = {}
  for sF in tmp:
    sF = sF.replace('\n','')
    sourceFiles[sF.split('/')[-1]] = sF

  #print sourceFiles
  
  fOut = open(dir_file_list_unprocessed + '/' + data_name + '.txt','w') 
  for sF in sourceFiles.keys():
    if sF not in processedFiles:
      fOut.write(sourceFiles[sF]+'\n')
  fOut.close()


  

