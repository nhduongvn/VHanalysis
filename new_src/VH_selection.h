#ifndef VH_SELECTION_H
#define VH_SELECTION_H

/**
File Name: VH_selection.h
Description: This is the main header file for the actual evetn selection.
*            Within this code, we define the class (from our ROOT Selector),
*            methods we'll want to have, and instances of other classes
*            and variables. */

/******************************************************************************
* [10] - Included Libraries
******************************************************************************/

// ROOT Libraries/Classes
#include "Reader.h"
#include "Selector.h"

// Our custom classes

/******************************************************************************
* [20] - Class Definition
******************************************************************************/

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
    //std::vector<std::vector<int>> getDaughterIdxs_ZH(Reader* r);    
    //bool sort_by_second(const std::pair<int,float> &a, const std::pair<int,float> &b);  
  
  /* PRIVATE: These are the objects that we want to keep restricted 
  to within our class and we need special accessors to reach them.*/
  
};
//end-of-class

//EOF//////////////////////////////////////////////////////////////////////////
#endif
