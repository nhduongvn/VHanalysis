# Util Scripts
The following scripts are all useful for analyzing data and plotting results. Because there are so many scripts here, we have this README file to keep a listing of all the files and what they do.

## Useful Scripts & Macros
- **background_estimation.py**

  This macro calculates the transfer functions (TF) for our background estimation. This method uses the entire 2D background region and just uses signal (SR), control (CR), and validation (VR) regions. For plotting the results, use *plot_background_estimation.py*.

- **background_estimation_sectors.py**

  This macro calculates the transfer functions (TF) AND plots the results for our background estimation that uses the diagonal sectors (I and II).

- **background_subtraction.py**

  This method takes the results from the full region background estimation and subtracts off the non-QCD backgrounds to see if the remaining data-driven background matches QCD. It also plots the entire stack with the QCD MC sample replaced by the data-driven QCD.

- **background_subtraction_sectors.py**

  This method does the same as *background_subtraction.py* but does it for the results using the sector background estimation.

- **calculate_CR_SF.py**

  This method determines the SF between the data and MC in our control region. It also checks to see if the results also match what we see in the validation region.

- **calculate_trigger_efficiency.py**

  Plot the trigger efficiencies as a function of HT and print out the values for each bin. This can be used for SingleMuon (Data) or ttbar (MC).

- **compare_JEC_corrections.py**

  Our algorithm wanted to use different types of JEC corrections to see what worked best and what was appropriate - 1) no corrections, 2) correction to pT, 3) corrections to pT and mass. This method takes those results and compares them.

- **draw_regions.py**

  This takes the desired 2D plots and draws the signal (SR), control (CR), and validation (VR) regions over them. It also determines how many events are in each region.

- **draw_sectors.py**

  This method does the same as *draw_regions.py* but with the sectors. The drawing of the actual sectors is not yet done.

- **fit_gaus.py**

  This macro takes in a histogram as input and fits its peak with a gaussian distribution.

- **h2proj.py**

  Take a 2D plot and plot its base and the projections of each axis. **NOTE: This is a sample given by ROOT. It is not actually useful for our cases. It is just a reference. For an actual use of this, check the histogram plot_mass_pairings.py.**

- **my_funcs.py**

  This contains all the special methods we want to use for formatting and plotting. For example, if we want a ratio of data and MC, we call upon the *makeDataMCPlot* method in this class.

- **optimize_SR.py**

  This method tries to figure out the best ways to optimize the signal region, either by growing it or elongating it. It is a slow method but does work.

- **plot2D.py**

  This plots 2D histograms appropriately.

- **plot_background_estimation.py**

  This takes our results from *background_estimation.py* and plots them as needed.

- **plot_CutFlow.py**

  Plot the cutflow histograms for our analysis.

- **plot_dataMC.py**

  This plots the full stack plots for our analysis, comparing data to the MC results for each year of Run 2.

- **plot_mass_pairings.py**

  Plot the 2D histograms with their projections. 

- **plot_ROC.py**

  This plots the ROC curves for given variables.

- **plot_weights.py**

  This plots the weights and scale factors we're interested in for our analysis.

- **prepareCombine.py**

  This method helps take the results we want and will put them into the Higgs Combine tool for statistical analysis.

- **printBranches.py**

  This prints all the different branches/variables we have available for NanoAODv9.

- **print_variable_declaration.py**

  It checks for variables that match the one we give as input and it prints out the NanoAODv9 declaration for them in the TSelector.

- **proper_background_estimation.py**

  We want a method that checks purely the QCD background. This method does so by subtracting the MC backgrounds from the data and then determining a QCD scale factor.

## Ignorable
You can ignore the following folders:
- myutils
- old
- temp_plots
- tests
