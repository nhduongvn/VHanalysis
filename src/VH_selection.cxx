#define VH_selection_cxx

/******************************************************************************
 ######  ######## ##       ########  ######  ######## ####  #######  ##    ## 
##    ## ##       ##       ##       ##    ##    ##     ##  ##     ## ###   ## 
##       ##       ##       ##       ##          ##     ##  ##     ## ####  ## 
 ######  ######   ##       ######   ##          ##     ##  ##     ## ## ## ## 
      ## ##       ##       ##       ##          ##     ##  ##     ## ##  #### 
##    ## ##       ##       ##       ##    ##    ##     ##  ##     ## ##   ### 
 ######  ######## ######## ########  ######     ##    ####  #######  ##    ## 
 
*******************************************************************************

DESCRIPTION: This is the main .cxx file for the actual event selection.
             Within this code, we create all necessary objects and run
             our actual selection methods and analyses.
                
******************************************************************************/

// == [10] Included Libraries =================================================

// Standard C++ libraries
#include <math.h>
#include <bits/stdc++.h>

// ROOT libraries/classes
#include "TList.h"
#include "TParameter.h"

// Our custom classes
#include "Global.h" 		// our parameters
#include "Obj.cxx"		// particle object classes
#include "VH_selection.h"	// class header

// == [20] Deconstructor ======================================================

VH_selection::~VH_selection() { }

// == [30] Custom Methods =====================================================

// == [40] ROOT Selector Methods ==============================================

/* =================
 * [41] SLAVE BEGIN
 * =================
 * This section is where we initialize all necessary plots
 * and then add all the plots to the output so we can use
 * them for analyses. 
*/
void VH_selection::SlaveBegin(Reader *r) 
{

};// end slaveBegin



/* =============
 * [42] PROCESS
 * =============
 * This is where we do the actual analysis. We need to do the 
 * following steps for each event:
 *
 * 1. determine the weights for the event
 * 2. reconstruct the physics objects(leptons, jets, etc.)
 * 3. analyze them as desired.
 * 4. pray that nothing fails
*/
void VH_selection::Process(Reader *r)
{
  // ==================================
  // [42a] Determine the Event Weights
  // ==================================
  
  // Determine the general weights we need for every case.
  // The weights we're interested in are:
  // 1. Generator Weight (from Pythia8, Madgraph, etc.)
  // 2. Pile-Up Scale Factor
  // 3. L1 Pre-Firing Weight (2016-17 only)
  // NOTE: These three are only applied for MC
  float generator_weight = 1.0;
  float pileup_SF = 1.0;
  float l1_prefire_weight = 1.0;
  
#if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)

  // Generator weight

#endif

};// end Process



/* ===============
 * [43] TERMINATE
 * ===============
 * This is where we terminate and delete any necessary elements
 * of the code (if so deemed necessary).
*/
void VH_selection::Terminate(TList* mergedList, std::string outFileName) {}

// == [99] END OF FILE ========================================================
