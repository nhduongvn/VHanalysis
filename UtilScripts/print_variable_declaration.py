import sys

varNames = sys.argv[1].split(',')
print varNames
#loop over input variable
for var in varNames:
  #open the file and read line by line to found matching variable name
  found = False
  f = open("../VariableLists/DATA_2016.h")
  for l in f.readlines():
    if var in l:
      print f.name, " ", l
      found = True
  if not found:
    print 'Variable ', var, ' not found in ', f.name
