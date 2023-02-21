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
  
    std::vector<std::vector<int> > DauIdxs_ZH(Reader* r);
    //bool passes_btag(JetObj& jet, float CSV_cut);
    //bool passes_ctag(JetObj& jet, float CvL_cut, float CvB_cut);

  private:
  
    // Histograms
    TH1D* h_evt;

    // Jet Plots
    JetPlots *h_VH_jets;     // Selected jets
    JetPlots *h_VH_jets_all; // All jets captured
    JetPlots *h_VH_MC_jets;

    JetPlots *h_VH_4b;    // Leading b-jets
    JetPlots *h_VH_2b2c;  // 

    // VH Plots
    VHPlots *h_VH_MC;    // MC Truth events (GenObj)
    VHPlots *h_VH_MCjet; // MC Truth events (jets)
    VHPlots *h_VH_tags;  // Tagging Only
    VHPlots *h_VH_algo;  // Mass-Matching Prioritized
    VHPlots *h_VH_both;  // Tagging Prioritized
    VHPlots *h_VH_all;   // Any plots related to ALL cut types

    VHPlots *h_VH_alljet; // Using just any jets
    VHPlots *h_VH_seljet; // Using selected jets

    // CutFlows for event selections
    TH1D* h_evt_VbbHcc;
    TH1D* h_evt_MC_cutflow;
    TH1D* h_evt_tags_cutflow;
    TH1D* h_evt_algo_cutflow;
    TH1D* h_evt_both_cutflow;

    // CutFlows for reconstruction
    TH1D* h_jet_cutflow;
    TH1D* h_elec_cutflow;
    TH1D* h_muon_cutflow;

    // Miscellaneous
    TH1D* h_nCombos;
    TH1D* h_dR_ccjet;
    TH1D* h_dR_bbjet;
    TH1D* h_dPhi_ccjet;
    TH1D* h_dPhi_bbjet;

    TH1D* h_mistag_leading;
    TH1D* h_mistag_all;

    TH1D* h_nGenJet;
    TH1D* h_nGenL;
    TH1D* h_nGenC;
    TH1D* h_nGenB;
    TH1D* h_nGenGlu;
};

#endif
