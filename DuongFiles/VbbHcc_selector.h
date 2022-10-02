#ifndef VbbHcc_selector_h
#define VbbHcc_selector_h

//Template for creating new selection

#include "Reader.h"
#include "Selector.h"
#include "Plots.cxx"

//The Selection does not have Begin, since we do not have anything to do at the begining (overall) at client
//The histograms, ..., are booked and added to output list at SlaveBegin
//We need to have terminate since we might want to do overall tasks related to this selection only. At termination, all inforamtion from slaves is added. Example task is cutflow for this selection, which need information from all slaves.
//SlaveTerminate and Terminate are here for reservation now. histograms are written back in SlaveTerminate of Processor class

class VbbHcc_selector : public Selector {
public:
  VbbHcc_selector() {};
  virtual ~VbbHcc_selector() ;
    // These methods are called at the corresponding stage of processing of TSelector
  virtual void SlaveBegin(Reader* r) ;
  virtual void Process(Reader* r) ;
  virtual void SlaveTerminate(Reader* r) {} ;
  virtual void Terminate(TList* mergedList, std::string outFileName) ;
  //index of daughters from H and Z
  std::vector<std::vector<int> > DauIdxs_ZH(Reader* r);

private:
  //histograms
  
  TH1D* h_evt;
  TH1D* h_cutFlow;
  TH1D* h_cutFlow_hcc;
  TH1D* h_cutFlow_VbbHcc_select1;
  TH1D* h_cutFlow_VbbHcc_select2;
  TH1D* h_cutFlow_VbbHcc_select3;
  TH1D* h_test_MH;
  TH1D* h_test_MZ;
  VHBoostedPlots* h_VbbHcc;
  VHBoostedPlots* h_VbbHcc_twojets;
  VHBoostedPlots* h_VbbHcc_select1;
  VHBoostedPlots* h_VbbHcc_select2;
  VHBoostedPlots* h_VbbHcc_select3;
  HBoostedPlots* h_Hcc;
} ;

#endif
