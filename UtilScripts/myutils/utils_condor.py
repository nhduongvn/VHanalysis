def make_input_file_list(nFile, outDir_file_list, file_list_name, prefix_file_list_for_condor):
  
  lines = open(file_list_name).readlines()
  tmp = len(lines)
  nJob = tmp/nFile + 1 
  if tmp%nFile == 0: nJob = tmp/nFile
  print '>>>>>>>>Total file, number of file per job, nJobs: ', tmp, nFile, nJob

  iFile = 0 
  for line in range(0, len(lines), nFile):
    tmp = file_list_name.split('/')
    #newFile = open(outDir_file_list + '/' + tmp[len(tmp)-1] + '_' + str(iFile) + '.txt', 'w')  
    newFile = open(outDir_file_list + '/' + prefix_file_list_for_condor + '_' + str(iFile) + '.txt', 'w')  #sampleList_1.txt for example
        
    tmpFiles = lines[line:line+nFile]
    for i in range(0, len(tmpFiles)):
      newFile.write(tmpFiles[i])
    
    iFile = iFile + 1 
  
  return nJob


def write_condor_config(workDir, name_script_to_run, argv_of_script_to_run, name_output_subdir, nJob, exe_type = 0, cmssw='8_0_25', arch='slc6_amd64_gcc530'):
  f = open(workDir + '/condor_config.script', 'w')
  f.write('universe = vanilla \n')
  f.write('request_memory = 4200 \n')
  f.write('Executable = condor_executable.sh \n')
  f.write('Arguments = $(Process) ' + name_output_subdir + ' \n') 
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

  f = open(workDir + '/condor_executable.sh', 'w')
  f.write('#!/bin/bash \n')
  f.write('echo $SHELL \n')
  f.write('echo $2 \n')
  
  #setup CMSSW environment
  f.write('source /cvmfs/cms.cern.ch/cmsset_default.sh \n')
  #f.write('cd /uscms_data/d3/duong/CMSSW/CMSSW_' + cmssw + '/src \n')
  #f.write('eval `scramv1 runtime -sh` \n')
  if exe_type == 0:
    f.write('export SCRAM_ARCH='+arch+'\n')
    f.write('eval `scramv1 project CMSSW CMSSW_'+cmssw+'` \n')
    f.write('cd CMSSW_'+cmssw+'/src/ \n')
    f.write('eval `scramv1 runtime -sh` \n') # cmsenv is an alias not on the workers
    f.write('echo "CMSSW: "$CMSSW_BASE \n')
    
    f.write('cd ${_CONDOR_SCRATCH_DIR} \n')
    f.write('tar -xvf input.tar \n')
    f.write('python ' + name_script_to_run + ' ' + argv_of_script_to_run + '\n')
    if '/store/group' in name_output_subdir or '/store/user' in name_output_subdir:
      f.write('xrdcp *.root root://cmseos.fnal.gov/$2/ \n')
      f.write('echo "xrdcp *.root root://cmseos.fnal.gov/$2/" \n')
      f.write('rm *.root \n')
  
  if exe_type == 1:
    f.write('cd ${_CONDOR_SCRATCH_DIR} \n')
    '''f.write('export SCRAM_ARCH=slc6_amd64_gcc493\n')
    f.write('eval `scramv1 project CMSSW CMSSW_'+cmssw+'` \n')
    f.write('cd CMSSW_'+cmssw+'/src \n')
    f.write('eval `scramv1 runtime -sh` \n')
    f.write('echo "CMSSW: "$CMSSW_BASE \n')
    '''
    #f.write('export SCRAM_ARCH=slc6_amd64_gcc493\n')
    f.write('export SCRAM_ARCH='+arch+'\n')
    f.write('tar -xvf input.tar \n')
    f.write('scramv1 project CMSSW CMSSW_'+cmssw+'\n')
    f.write('mv HiggsAnalysis/ CMSSW_'+cmssw+'/src/\n')
    f.write('mv CombineHarvester/ CMSSW_'+cmssw+'/src/\n')
    #f.write('mv myutils/ ' + argv_of_script_to_run + '\n')
    f.write('cd CMSSW_'+cmssw+'/src/\n')
    f.write('eval `scramv1 runtime -sh` \n')
    f.write('scramv1 b clean \n')
    #f.write('scramv1 b ProjectRename \n')
    f.write('scramv1 b \n')
    f.write('echo "CMSSW: "$CMSSW_BASE \n')
    f.write('cd ../../ \n')
    tmp =  argv_of_script_to_run.split()
    folder = tmp[0]
    argv = ''
    for iT in range(1,len(tmp)):
      argv = argv + ' ' + tmp[iT]

    f.write('cd ' + folder + '/\n')
    f.write('python ' + name_script_to_run + ' ' + argv +'\n')
    f.write('cd ../\n')
    f.write('tar -cvf ' + folder + '.tar ' + folder + '\n')
    if '/store/group' in name_output_subdir or '/store/user' in name_output_subdir:
      f.write('xrdcp ' + folder+'.tar root://cmseos.fnal.gov/$2/ \n')
      f.write('echo "xrdcp '+folder+'.tar '+' root://cmseos.fnal.gov/$2/" \n')
    f.write('rm *.tar')
  
  f.close()
  
def write_ana_macro(workDir, nJob, treename):
  for i in range(0, nJob):
    f = open(workDir + '/run_' + str(i) + '.py', 'w')
    f.write('import os,sys \n')
    f.write('from myutils import addMoreInfo \n')
    f.write('lines = open("sampleList_' + str(i) + '.txt").readlines() \n')
    f.write('for line in lines: \n')
    f.write('  line = line.replace("\\n","") \n')
    f.write('  outFile = line.split("/")[-1] \n')
    f.write('  addMoreInfo.fillTree(line,outFile,"' + treename + '") \n')
    f.close()
