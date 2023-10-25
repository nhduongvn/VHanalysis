#ifndef VH_selection_h
#define VH_selection_h

/******************************************************************************
 ######  ######## ##       ########  ######  ######## ####  #######  ##    ## 
##    ## ##       ##       ##       ##    ##    ##     ##  ##     ## ###   ## 
##       ##       ##       ##       ##          ##     ##  ##     ## ####  ## 
 ######  ######   ##       ######   ##          ##     ##  ##     ## ## ## ## 
      ## ##       ##       ##       ##          ##     ##  ##     ## ##  #### 
##    ## ##       ##       ##       ##    ##    ##     ##  ##     ## ##   ### 
 ######  ######## ######## ########  ######     ##    ####  #######  ##    ## 
 
*******************************************************************************

DESCRIPTION: This is the main header file for the actual event selection.
             Within this code, we define the class (from our ROOT Selector),
             methods we'll want to have, and instances of other classes
             and variables.
                
******************************************************************************/

// == [10] Included Libraries =================================================

// ROOT libraries/classes
#include "Reader.h"
#include "Selector.h"

// Our custom classes
#include "Obj.cxx"	// particle object classes
#include "Plots.cxx"	// classes that hold groupings of plots

// == [20] Class Definition ===================================================

class VH_selection : public Selector 
{

  /* PUBLIC: These are the methods, variables, and constructors
  we want to have access to anywhere in the code.*/
  public:
  
    // ============================
    // Constructor & Deconstructor
    // ============================
    VH_selection() {};
    virtual ~VH_selection();
    
    // ==============================
    // Default ROOT Selector Methods
    // ==============================
    virtual void SlaveBegin(Reader* r);
    virtual void Process(Reader* r);
    virtual void SlaveTerminate(Reader* r) {};
    virtual void Terminate(TList* mergedList, std::string outFileName);
    
    // ===============
    // Custom Methods
    // ===============
    
  
  /* PRIVATE: These are the objects that we want to keep restricted 
  to within our class and we need special accessors to reach them.*/
  private:
    
    // ======================
    // Individual Histograms
    // ======================
    
    TH1D* h_evt;  // # events (accountint for generator weight)
    

};

// == [  ] END OF FILE ========================================================

#endif
