from math import *
import json
import csv

## Get the GoldenJSON file with the good runs
json_path = "../GoldenJson/Cert_294927-306462_13TeV_UL2017_Collisions17_GoldenJSON.txt"
fJson = open(json_path)
json_dict = json.load(fJson)

keys = json_dict.keys()
for i in range(len(keys)):
  keys[i] = int(keys[i])

## Get the data from the simplified CSV file
lumi_path = "../lumi_checks/2017C_F_simplified.csv"
lumi_data = []
with open(lumi_path) as csv_file:
  csv_reader = csv.reader(csv_file, delimiter=',')
  line_count = 0
  for row in csv_reader:
    if line_count > 0: lumi_data.append(row)
    line_count += 1

## Compare all the entries with the list of good runs
total_lumi = 0.0
nRunsIgnored = 0
for i in range(len(lumi_data)):
  run = int(lumi_data[i][0])
  fb = float(lumi_data[i][1])
  
  if run in keys: total_lumi += fb
  else: nRunsIgnored += 1

print nRunsIgnored, " lines ignored..."
print "total lumi = ", total_lumi, " /fb"
