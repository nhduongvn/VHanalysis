import os,sys
import json

def write_condor_config(workDir, name_output_dir, data_name, nJob, debug = False):
  #print ">>>> ", name_output_dir
  f = open(workDir + '/condor_config.script', 'w')
  f.write('universe = vanilla \n')
  f.write('Executable = '+data_name+'.sh \n')
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

  f = open(workDir + '/' + data_name + '.sh', 'w')
  f.write('#!/bin/bash \n')
  f.write('echo $SHELL \n')
  f.write('source /cvmfs/cms.cern.ch/cmsset_default.sh \n')
  f.write('export SCRAM_ARCH=slc7_amd64_gcc820 \n')
  f.write('eval `scramv1 project CMSSW CMSSW_10_6_27` \n')
  f.write('cd CMSSW_10_6_27/src/ \n')
  f.write('eval `scramv1 runtime -sh` \n') # cmsenv is an alias not on the workers
  f.write('echo "CMSSW: "$CMSSW_BASE \n')
  f.write('git clone https://github.com/cms-nanoAOD/nanoAOD-tools.git PhysicsTools/NanoAODTools \n')
  f.write('scram b \n')
  f.write('cd ${_CONDOR_SCRATCH_DIR} \n')
  f.write('tar -xvf input.tar \n')
  f.write('chmod +x sampleList_$1.sh \n')
  f.write('./sampleList_$1.sh \n')
  f.write('xrdcp *.root root://cmseos.fnal.gov/' + name_output_dir+ '/ \n')
  f.write('rm *.root \n')
  f.write('echo "xrdcp *.root root://cmseos.fnal.gov/' + name_output_dir + '/" \n')
 
  f.close()

def make_input_file_list(nFile, isMC, year, period, sourceDir, outDir_file_list, file_list_name):
  
  ###############
  #make nano_postproc file
  ###############
  os.system('rm '+outDir_file_list+'/nano_postproc.py')
  #isMC=False, dataYear="2018", runPeriod="D", jesUncert="Total",applyHEMfix=True
  #True, "2018", "D", "Total",applyHEMfix=True
  option_ak4 = 'isMC='+isMC+', dataYear="'+year+'", runPeriod="'+period+'",applyHEMfix=True,jesUncert="All",splitJER=True'
  option_ak8 = 'isMC='+isMC+', dataYear="'+year+'", runPeriod="'+period+'",jetType="AK8PFPuppi",applyHEMfix=True,jesUncert="All",splitJER=True'
  cmd = 'sed -e \'s/JMECORRECTOROPTIONAK4/'+option_ak4+'/g\' -e \'s/JMECORRECTOROPTIONAK8/'+option_ak8+'/g\' '+sourceDir+'/nano_postproc_template.py > '+outDir_file_list+'/nano_postproc.py'
  print(cmd)
  os.system(cmd)

  lines = open(file_list_name).readlines()
  nJob = len(lines)/nFile + 1

  iFile = 0
  for line in range(0, len(lines), nFile):
    tmp = file_list_name.split('/')
    #newFile = open(outDir_file_list + '/' + tmp[len(tmp)-1] + '_' + str(iFile) + '.txt', 'w')  
    newFile = open(outDir_file_list + '/sampleList_' + str(iFile) + '.sh', 'w')  
    
    tmpFiles = lines[line:line+nFile]
    for i in range(0, len(tmpFiles)):
      newFile.write('python nano_postproc.py --bo keep_and_drop.txt ./ ' + tmpFiles[i])
    
    iFile = iFile + 1
  
  return nJob


#///////////////////////////////////////////////////////////////////
runMode = 0 #0: submit
submit = True# for executing submission 

debug = False 

dataSet_list = "../Dataset_lists/test.txt"
#dataSet_list = "tmp_json_DY.txt"
#dataSet_list = "test_json.txt"

nFile = 10

dir_file_list = '/uscms_data/d3/duong/VH_working/Ana/FileLists/'

outputDir_eos = '/store/user/lpcphys/duong/NanoAOD_postProcessing/'
outputDir_scratch = '/uscmst1b_scratch/lpc1/lpctrig/duong//Output_VH/NanoAOD_postProcessing/' 
 
sourceDir = '/uscms_data/d3/duong/VH_working/Ana/SubmitToCondor_nanoAOD_postprocessing/' #directory for source code + file lists
condorRunDir = '/uscmst1b_scratch/lpc1/lpctrig/duong//Output_VH/condor_run_NanoAOD_postProcessing/' #directory to contain files to run jobs

#Print setting
print '============================='
print 'Sample list file (list of input samples):                   ', dataSet_list
print 'Sample list folder (location of input file lists):          ', dir_file_list
print 'Number of file per jobs:                                    ', nFile
print 'Output location eos:                                        ', outputDir_eos 
print 'Output location scratch:                                    ', outputDir_scratch


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
  #TEMP
  print '========================='
  print 'Processing sample: ', line
  
  data_name = line

  work_dir = condorRunDir+ '/' + data_name + '_' + dir_affix

  sample_format = data_name.split('_')[-2] + '_' + data_name.split('_')[-1] 
  
  #create output directories on eos
  dir_final_rootFile = outputDir_eos + '/' + data_name
  #dir_final_rootFile_scratch = outputDir_scratch + '/' + data_name

#####################################################
  if runMode == 0:
    os.system('eos root://cmseos.fnal.gov rm -r ' + dir_final_rootFile)
    os.system('eos root://cmseos.fnal.gov mkdir -p ' + dir_final_rootFile)

    os.system('mkdir ' + work_dir)
    os.system('rm -r ' + work_dir + '/*')
    
    file_list_name = dir_file_list + '/' + data_name + '.txt' 
    print '>>>>>>> Use this file list: ', file_list_name
 
    #copy codes, ....
    print ">>>>>line: ", line
    period = ''
    #DY_2J_amcatnlo_MC_2017.txt
    if '_MC_' in line: 
      isMC = 'True'
      strTmp = line.split('_MC_')
      year = strTmp[1].replace('.txt','')
    #SingleMuon_DATA_2017C.txt
    if '_DATA_' in line: 
      isMC = 'False'
      strTmp = line.split('_DATA_')[1].replace('.txt','')
      year = strTmp[:-1]
      period = strTmp[-1]

    print ">>>> ", isMC, " ", year, " ", period
    
    
    os.chdir(work_dir)
    #break list of files to a set of input file list and estimate total jobs, njob
    nJob = make_input_file_list(nFile, isMC,year,period,sourceDir, work_dir, file_list_name)
    
    #prepare condor job configuration
    write_condor_config(work_dir, dir_final_rootFile, data_name,nJob, debug)
    
    os.system('cp ' + sourceDir + '/keep_and_drop_1.txt ' + work_dir)

    os.system('tar -cf input.tar nano_postproc.py keep_and_drop_1.txt sampleList_*.sh')
    
    #submit jobs
    if submit: 
        os.system('condor_submit condor_config.script')
