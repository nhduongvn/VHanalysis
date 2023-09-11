import os,sys

if len(sys.argv) < 3:
  print "ERROR: Not enough arguments provided."
  print "Example: python percent_loss.py 1000 999"
  exit()

count0 = int(sys.argv[1])
count1 = int(sys.argv[2])

percent_loss = (count0 - count1) * 1.0 / count0 * 100
print "percent loss = ", percent_loss, "%"
