import os,sys
import json
import time

#def write_condor_config(workDir,sample_format,sample_format_processing, data_name, name_output_dir, nJob, syst='none', compile_with_pdfscalesyst='NONE', compile_for_sherpa='NOTSHERPA', debug = False):
def write_condor_config(workDir, sample_format, sample_subformat, sample_format_processing, nanoaod_format, data_name, name_output_dir, nJob, syst='none', xccEffFileName='', centralGenWeight=0, debug = False):
  exe_fileName = 'exe_' + data_name + '.sh'
  if syst != 'none':
    exe_fileName = 'exe_' + syst + '_' + data_name + '.sh'

  f = open(workDir + '/condor_config.script', 'w')
  f.write('universe = vanilla \n')
  f.write('Executable = '+exe_fileName+' \n')
  f.write('Arguments = $(Process) \n') 
  f.write('Should_Transfer_Files = YES \n')
  f.write('WhenToTransferOutput = ON_EXIT \n')
  f.write('Transfer_Input_Files = input.tar \n')
  f.write('Output = ctagana_$(Cluster)_$(Process).stdout \n')
  f.write('Error = ctagana_$(Cluster)_$(Process).stderr \n')
  f.write('Log = ctagana_$(Cluster)_$(Process).log \n')
  f.write('notify_user = ${LOGNAME}@FNAL.GOV \n')
  f.write('+LENGTH="SHORT" \n')
  #f.write('x509userproxy = /tmp/x509up_u12772 \n')
  f.write('x509userproxy = $ENV(X509_USER_PROXY) \n')
  tmp = 'Queue ' + str(nJob) + '\n'
  f.write(tmp)
  f.close()

  f = open(workDir + '/' + exe_fileName, 'w')
  f.write('#!/bin/bash \n')
  f.write('echo $SHELL \n')
  f.write('source /cvmfs/cms.cern.ch/cmsset_default.sh \n')
  f.write('export X509_CERT_DIR=/cvmfs/grid.cern.ch/etc/grid-security/certificates/ \n')
  f.write('eval `scramv1 project CMSSW CMSSW_14_0_6` \n')
  f.write('cd CMSSW_14_0_6/src/ \n')
  f.write('eval `scramv1 runtime -sh` \n') # cmsenv is an alias not on the workers
  f.write('echo "CMSSW: "$CMSSW_BASE \n')
  f.write('cd ${_CONDOR_SCRATCH_DIR} \n')
  f.write('tar -xvf input.tar \n')
#  f.write('make clean \n')
#  f.write('make FORMAT='+sample_format+' FORMATPROCESSING='+sample_format_processing+' INPUT=TCHAIN'+' PDFSCALESYST='+compile_with_pdfscalesyst+' SHERPA='+compile_for_sherpa+'\n')
  f.write('make FORMAT='+sample_format+' SUBFORMAT='+sample_subformat+' PROCESSING='+sample_format_processing+' NANOAOD='+nanoaod_format+' INPUT=TCHAIN'+'\n')

  sampleType = '0'
  if 'DATA' in sample_format:
    sampleType = '1'
  year = sample_format.split('_')[1]
  if debug:
    f.write('./main -filelist sampleList_$1.txt -out output_$1.root -data ' + sampleType + ' -year ' + year + ' -syst ' + syst + ' -xccEffFileName ' + xccEffFileName + ' -centralGenWeight ' + str(centralGenWeight) + ' -lastentry 10000 \n')
  else:
    f.write('./main -filelist sampleList_$1.txt -out output_$1.root -data ' + sampleType + ' -year ' + year + ' -syst ' + syst + ' -xccEffFileName ' + xccEffFileName + ' -centralGenWeight ' + str(centralGenWeight) + ' \n')
  f.write('xrdcp *.root root://cmseos.fnal.gov/' + name_output_dir+ '/ \n')
  f.write('rm *.root \n')
  f.write('echo "xrdcp *.root root://cmseos.fnal.gov/' + name_output_dir + '/" \n')
 
  f.close()

def make_input_file_list(nFile, outDir_file_list, file_list_name):
  
  lines = open(file_list_name).readlines()
  nJob = len(lines)/nFile + 1
  if len(lines)%nFile == 0: nJob = len(lines)/nFile

  iFile = 0
  for line in range(0, len(lines), nFile):
    tmp = file_list_name.split('/')
    #newFile = open(outDir_file_list + '/' + tmp[len(tmp)-1] + '_' + str(iFile) + '.txt', 'w')  
    newFile = open(outDir_file_list + '/sampleList_' + str(iFile) + '.txt', 'w')  
    
    tmpFiles = lines[line:line+nFile]
    for i in range(0, len(tmpFiles)):
      newFile.write(tmpFiles[i])
    
    iFile = iFile + 1
  
  return nJob


#///////////////////////////////////////////////////////////////////
runMode = 0 #0: submit, 1: check output and hadd output file
submit = True# for testing setup or executing submission 
#submit = False# for testing setup or executing submission 
debug = False   # just run on 10000 
haddData = False 
isPostProcessing = False 

data_name_prefix = 'JetHT_DATA' #SingleMuon

syst = 'NONE' #NONE,PUU,PUD,JESU,TAG_BBU,SCALE,PDFG0,PDFG1,PDFG2
if len(sys.argv) > 1:
  syst = sys.argv[1]
centralGenWeight = 0

sample_format_processing = 'NORMAL'
if isPostProcessing: sample_format_processing = 'POSTPROC'

skipSamples = ['ST_t-channel','QCD_Incl','QCD_bEnriched','BGenFilter']

#paths, locations (CHANGE THESE)
sourceDir = '/uscms_data/d3/duong/VH_working/Ana/' #directory for source code + file lists
condorRunDir = '/uscmst1b_scratch/lpc1/lpctrig/duong//Output_VH/' #directory to contain files to run jobs
outputDir_eos = '/store/user/lpcphys/duong/Output_VH/'+syst+'/'
outputDir_scratch = '/uscmst1b_scratch/lpc1/lpctrig/duong//Output_VH/'+syst+'/'
#outputDir_eos = '/store/user/duong/Output_VH/Test_prio_cc/'
#outputDir_scratch = '/uscmst1b_scratch/lpc1/lpctrig/duong//Output_VH/Test_prio_cc/'

if isPostProcessing:
  condorRunDir = '/uscmst1b_scratch/lpc1/lpctrig/duong//Output_VH_postProcessing/' #directory to contain files to run jobs
  outputDir_eos = '/store/group/lpcphys/duong/Output_VH_postProcessing/'+syst+'/'
  outputDir_scratch = '/uscmst1b_scratch/lpc1/lpctrig/duong//Output_VH_postProcessing/'+syst+'/'

#Input data sets
#dataSet_list = sourceDir+"/Dataset_lists/datasets_JetHT_combined.txt" #data
#dataSet_list = sourceDir+"/Dataset_lists/datasets_NANOAODv9_MC.txt" #all except Hcc
#dataSet_list = sourceDir+"/Dataset_lists/datasets_HToCC_NANOAODv7_MC.txt" #data
#dataSet_lists = [sourceDir+"/Dataset_lists/datasets_JetHT.txt",
#                 sourceDir+"/Dataset_lists/datasets_NANOAODv9_MC.txt",
#                 sourceDir+"/Dataset_lists/datasets_qcdPt.txt"]
#dataSet_lists = [sourceDir+"/Dataset_lists/datasets_JetHT.txt",
#                 sourceDir+"/Dataset_lists/datasets_NANOAODv9_MC.txt"]
dataSet_lists =   [sourceDir+"/Dataset_lists/datasets_NANOAODv9_MC.txt"]
#dataSet_lists = [sourceDir+"/Dataset_lists/datasets_JetHT.txt"]
#dataSet_lists =   [sourceDir+"/Dataset_lists/datasets_qcdPt.txt"]

if syst != "NONE":
    dataSet_lists = [sourceDir+"/Dataset_lists/datasets_NANOAODv9_MC.txt"]

nFile = 2
dir_file_list = sourceDir+'/FileLists/'
if isPostProcessing:
  dir_file_list = sourceDir+'/FileLists_nanoAOD_postProcessing/'

#Print setting
print( '=============================')
print( 'Run mode: ', runMode)
print( 'Submit:   ', submit)
print( 'Debug:    ', debug)
print( 'haddData: ', haddData)
print( 'Data name prefix: ', data_name_prefix)

print( 'Systematic:                                                 ', syst)
print( 'Sample list file (list of input samples):                   ')
for dataSet_list in dataSet_lists:
  print( '    ', dataSet_list)
print( 'Sample list folder (location of input file lists):          ', dir_file_list)
print( 'Number of file per jobs:                                    ', nFile)
print( 'Source dir:                                                 ', sourceDir)
print( 'Condor run dir:                                             ', condorRunDir)
print( 'Output location eos:                                        ', outputDir_eos) 
print( 'Output location scratch:                                    ', outputDir_scratch)
print( 'Skip samples:                                               ', skipSamples)

# Wait for user input
user_input = input("Press 'P' to proceed or 'E' to exit: ")

# Check user input and proceed or exit accordingly
if user_input.upper() == 'P':
   print("Continuing with the program.")
          # Your code for further program execution goes here
elif user_input.upper() == 'E':
   print("Exiting the program.")
   exit()
else:
   print("Invalid input. Please try again.")


#sys.exit()

#////////////////////////////////////////////////////////////////////
samples_input = []
if len(sys.argv) > 2: 
  samples_input = sys.argv[2].split(',') #all, or DY_2J_amcatnlo_MC_2018


#add all samples together
lines = []
for dataSet_list in dataSet_lists:
  json_file = open(dataSet_list)
  samples = json.load(json_file)
  #lines = samples.keys()
  lines = lines + list(samples.keys())

#for line in lines:
#  print( line
#sys.exit()

sample_format = ''
nanoaod_format= ''

dir_affix = 'test'


for line in lines:
  #TEMP
  #if "BGenFilter" not in line and "bEnriched" not in line: continue
  #if "QCD_Incl" not in line and "BGenFilter" not in line and "bEnriched" not in line: continue
  #if "QCD" not in line: continue
  #if "Incl" in line or "bEnriched" in line or "BGenFilter" in line: continue
  #if not ('preVFP' in line): continue
  #if '2016' in line or '2018' in line: continue
  #if 'ZH_HToCC_ZToQQ' in line: continue
  #if 'ZH_HToCC_ZToQQ' not in line: continue
  if "BGenFilter" in line or "bEnriched" in line: continue
  #if 'HToBB_WToQQ' not in line: continue
  #if 'DATA_2017' not in line: continue
  #TEMP
  #if '2018' not in line: continue
  #if 'TTTo' not in line: continue

  doSkipSample = False
  for skipSample in skipSamples:
      if skipSample in line:
        doSkipSample = True
        break
  if doSkipSample: continue

  if len(samples_input) > 0 and line not in samples_input: continue
  print( '=========================')
  print( 'Processing sample: ', line)
  
  data_name = line
  work_dir = condorRunDir+'/condor_run/' + data_name + '_' + dir_affix
  if syst != 'NONE':
    work_dir = condorRunDir+'/condor_run_'+syst+'/' + data_name + '_' + dir_affix
  
  if 'preVFP' in line:
    sample_subformat = data_name.split('_')[-3] + '_' + data_name.split('_')[-2]
  else:
    sample_subformat = data_name.split('_')[-2] + '_' + data_name.split('_')[-1]
  if 'DATA' in sample_subformat:
    sample_format = sample_subformat[:-1]
    preVFP = ['DATA_2016B','DATA_2016C','DATA_2016D','DATA_2016E']
    #postVFP = ['DATA_2016F','DATA_2016G','DATA_2016H']
    if sample_subformat in preVFP or ('HIPM_DATA_2016F' in line):
        sample_format = sample_format + "PRE"
  else:
    if 'preVFP' in line:
        sample_subformat= sample_subformat + 'PRE'
    sample_format = sample_subformat

  print( sample_format, sample_subformat)
  
  if 'BGenFilter' in data_name:
    sample_subformat = 'QCD_BGENFILTER'
  if 'bEnriched' in data_name:
    sample_subformat = 'QCD_BENRICHED'
  if 'QCD_Incl_Light' in data_name:
    sample_subformat = 'QCD_INCL_LIGHT'
  if 'QCD_Incl_Bottom' in data_name:
    sample_subformat = 'QCD_INCL_BOTTOM'

  nanoaod_format='NANOAODV9'
  #if 'HToCC' in data_name:
  #  nanoaod_format='NANOAODV7'
  
  #create output directories on eos
  dir_final_rootFile = outputDir_eos + '/' + data_name
  #dir_final_rootFile_scratch = outputDir_scratch + '/' + data_name

  #xccEffFileName
  xccEffFileName = 'NONE'
  if 'QCD' in line:
      xccEffFileName = "CalibData/xcc_eff_QCD_looseWP.root"
  if 'HToCC' in line:
      xccEffFileName = "CalibData/xcc_eff_ZHcc_looseWP.root"
  if 'HToBB' in line:
      xccEffFileName = "CalibData/xcc_eff_ZHbb_looseWP.root"
  if 'TT' in line or 'ST' in line:
      xccEffFileName = "CalibData/xcc_eff_Top_looseWP.root"
  if 'WJets' in line: 
      xccEffFileName = "CalibData/xcc_eff_Wjet_looseWP.root"
  if 'ZJets' in line: 
      xccEffFileName = "CalibData/xcc_eff_Zjet_looseWP.root"
  if 'WW' in line or 'WZ' in line or 'ZZ' in line:
      xccEffFileName = "CalibData/xcc_eff_VV_looseWP.root"
  
  if 'DATA' not in line and xccEffFileName == "":
      print("!!!!!!!!!!!!!!Missing xccEffFileName for sample: ",line, '. Will not submit!!!!')
      continue
  print("Use this xccEffFileName: ", xccEffFileName)
  
  #continue

#####################################################
  if runMode == 0:
    #if 'sherpa' in line:
    #  compile_for_sherpa = 'SHERPA'
    #else:
    #  compile_for_sherpa = 'NOTSHERPA'
    if 'sherpa' in line:
      centralGenWeight = 124598120.
    else:
      centralGenWeight = 0
    
    os.system('eos root://cmseos.fnal.gov rm -r ' + dir_final_rootFile)
    os.system('eos root://cmseos.fnal.gov mkdir -p ' + dir_final_rootFile)

    os.system('mkdir -p ' + work_dir)
    os.system('rm -r ' + work_dir + '/*')
    
    os.chdir(work_dir)
    
    file_list_name = dir_file_list + '/' + data_name + '.txt' 
    print( '>>>>>>> Use this file list: ', file_list_name)
 
    #break list of files to a set of input file list and estimate total jobs, njob
    nJob = make_input_file_list(nFile, work_dir, file_list_name)
    
    #prepare condor job configuration
    write_condor_config(work_dir, sample_format, sample_subformat, sample_format_processing, nanoaod_format, data_name, dir_final_rootFile, nJob, syst, xccEffFileName, centralGenWeight, debug)
    
    #copy codes, ....
    os.system('cp '+sourceDir+'/Makefile ' + work_dir)
    os.system('cp '+sourceDir+'/Ana.cxx ' + work_dir)
    os.system('cp '+sourceDir+'/StdArg.hpp ' + work_dir)
    os.system('cp -r '+sourceDir+'/src/ ' + work_dir)
    os.system('cp -r '+sourceDir+'/Configs/ ' + work_dir)
    os.system('cp -r '+sourceDir+'/CalibData/ ' + work_dir)
    os.system('cp -r '+sourceDir+'/yaml-cpp/ ' + work_dir)
    time.sleep(1)

    os.system('tar -cf input.tar Makefile *.cxx *.hpp src/ Configs/ CalibData/ yaml-cpp/ sampleList_*.txt')
    
    #submit jobs
    if submit: 
        os.system('condor_submit condor_config.script')
    
    #os.chdir(sourceDir)

########################################################
  if runMode == 1:
    os.chdir(work_dir)
    #calculate how many jobs submitted
    os.system('ls sampleList_*.txt >| tmp.txt')
    time.sleep(1)
    lines_tmp = open('tmp.txt', 'r').readlines()
    nJob = len(lines_tmp)
    #get list of output root files
    nameTmp = 'outFileListTmp.txt'
    cmd_tmp = 'xrdfs root://cmseos.fnal.gov/ ls -u ' + dir_final_rootFile + '/ | grep ".root" >| ' + nameTmp
    os.system(cmd_tmp)
    ############check total number of root file###################
    lines_tmp = open(nameTmp).readlines()
    nJob_current = len(lines_tmp)
    if nJob_current != nJob:
      print( '============================================')
      print( 'Warning: MISSING OUTPUT ROOT FILES, found ', nJob_current, ' files but ', nJob, ' files expected')
      print( work_dir)

    #############hadd output root files###########
    os.system('mkdir ' + outputDir_scratch)
    os.system('rm ' + outputDir_scratch + '/' + data_name + '.root')
    cmd_hadd = 'hadd -f -k ' + outputDir_scratch + '/' + data_name + '.root @' + nameTmp 
    print( cmd_hadd)
    os.system(cmd_hadd)
         
    #os.chdir('../../')
#now hadd data
if haddData:
  peds = {'2016_preVFP':['B','C','D','E','F'],'2016':['F','G','H']}
  if runMode == 1:
    for y in ['2016_preVFP','2016','2017','2018']:
      #data_name = 'JetHT_DATA_'+y
      data_name = data_name_prefix + '_'+y
      os.system('rm ' + outputDir_scratch + '/' + data_name + '.root')
      cmd_hadd = 'hadd -f -k ' + outputDir_scratch + '/' + data_name + '.root ' 
      if y in ['2017','2018']:
          cmd_hadd = cmd_hadd + ' ' + outputDir_scratch + '/' + data_name + '*.root'
          print( cmd_hadd)
      if y in ['2016_preVFP','2016']: #check this
          for ped in peds[y]:
            data_name1 = data_name.replace('2016_preVFP','2016') + ped
            if ped is 'F' and y is '2016_preVFP':
              data_name1 = data_name1.replace('DATA','HIPM_DATA')
            cmd_hadd = cmd_hadd + ' ' + outputDir_scratch + '/' + data_name1 + '.root'
      os.system(cmd_hadd)
