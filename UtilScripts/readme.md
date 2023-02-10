# Util Scripts Directory

The following macros are contained within this folder and are useful for the following tasks:

- **fit_gaus.py**

  This macro takes in a histogram as input and fits its peak with a gaussian distribution.

- **my_funcs.py**

  This is a style guide that handles general plot-creation systems, such as making stack plots, overlays, etc.

- **percent_loss.py**

  A basic Python script that calculates percent loss.

- **plot_2D.py**

  This macro produces 2D plots for the mass distributions comparing m(H) and m(Z).

- **plot_MC.py**

  This takes all the possible background samples for our analysis and creates a plot that combines them all. This needs to be updated to include the proper samples.

- **plot_MC_bckg.py**

  This plots the sample distributions we're interested in for MC background samples.

- **plot_MC_signal.py**

  This plots the sample distributions we're interested in for MC signal samples.

- **plot_pt_jetFlavor.py**

  We have three different jet flavors and want to know how the distributions for different flavors compare. This macro will create overlays of the distributions for each jet flavor (light vs. b vs. c).

- **plot_ROC.py**

  Creates ROC curves for various types of distributions. The types of ROC curves generated are for one-sided cuts, interval cuts, jet-related variables (i.e. transverse momentum), and other general variables.

- **printBranches.py**

  This file prints the branches of a typical NanoAODv9 file so we know the variables we can use.

- **print_variable_declaration.py**

  This macro takes in a (partial) variable name as input and outputs the declarations for any variables in the NanoAODv9 format fitting that input.

- **readme.md**

  That's this file. It does nothing but provide information.

- **retrieveVariables.py**

  Seems to be the same as printBranches.py, but can't remember the difference.

