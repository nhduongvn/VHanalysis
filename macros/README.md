# Macros

The following macros are useful for analyzing data and plotting results. There are so many scripts and subfolders that we have this README file to keep a listing of all the files and what they do.

## Subdirectories

- **background_estimations**
  
  This contains outdated scripts that were once used for background estimation. Some of the submethods might still be valid, but we do not necessarily want to use all of them.

- **combine**
  
  This contains a set of scripts all used to prepare the datacard needed to push our analysis through the Combine analyzer.
  
- **myutils**
  
  This is a set of utilities used in an old analysis by Duong. They are more for reference rather than use with the switching of the analysis from sl7 and Python2.7 to el9 and Python3.

- **others**
  
  This contains any random macros that may be of use or are demonstrations taken directly from ROOT/pyROOT.

- **plotting**
  
  This contains a series of macros designed for specific plotting - data/MC, signal checks, etc.
 
- **trigger**
  
  This directory contains macros for calculating trigger efficiencies. There's an additional macro for going through the cutflow of elements of each trigger to see where we lose the most events.

## Descriptions
The following are all included outside the subdirectories and we provide descriptions of them here.

- **estimate_S_sqrtB.py**
  
  This is a macro designed to print the S/sqrt(B) estimate for the analysis and it provides the output in a latex format that can be put into an editor/document for use.

- **my_funcs.py**
  
  This is a file that is passed into other macros to make specific types of plots - overlays, Data/MC, etc. This file can be called in other macros to use the functions defined within it. (NOTE: They might be outdated or need to be cleaned up for use in Python3.)


- **plot_MC_signal.py**
  
  This takes the variables we're interested in and overlays the results for the three different Jet assignments we use for signal event selection. (This runs over ZH and ggZH files.)


- **proper_background_estimation.py**
  
This uses our modified 2D alphabet method to dtermine the transfer function between our control and fail regions.

- **plot_proper_estimation.py**
  
 Add the transfer function values determined by the other function and store them here. This macro plots the data/MC plots for the data-driven background estimation.
