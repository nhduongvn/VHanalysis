#ifndef VH_selection_h
#define VH_selection_h

//== Include Statements =======================================================

#include "Reader.h"
#include "Selector.h"
#include "Obj.cxx"
#include "Plots.cxx"

//== Class Definition =========================================================

class VH_selection : public Selector {

  public:
  
    // Constructor & Deconstructor
    VH_selection() {};
    virtual ~VH_selection();
    
    // Methods
    virtual void SlaveBegin(Reader* r);
    virtual void Process(Reader* r);
    virtual void SlaveTerminate(Reader* r) {};
    virtual void Terminate(TList* mergedList, std::string outFileName);
  
    //std::vector<std::vector<int> > DauIdxs_ZH(Reader* r);
  
  private:
  
    // Histograms to go here...
}

#endif
