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
    std::vector<std::vector<int>> getDaughterIdxs_ZH(Reader* r);    
    bool sort_by_second(const std::pair<int,float> &a, const std::pair<int,float> &b);  
    //bool sort_by_second_descend(const std::pair<int,float> &a, const std::pair<int,float> &b);
    //std::vector<std::pair<int,float>> determine_proper_pairs(std::vector<JetObj>& genObjs, std::vector<JetObj>& jets); 

  /* PRIVATE: These are the objects that we want to keep restricted 
  to within our class and we need special accessors to reach them.*/
  private:
    
    // ======================
    // Individual Histograms
    // ======================
    
    TH1D* h_evt;  // # events (accounting for generator weight)
    TH1D* h_MET;     
    TH1D* h_HT;

    // CUTFLOWS
    TH1D* h_cutflow_elec;
    TH1D* h_cutflow_muon;   
    TH1D* h_cutflow_jet;

    TH1D* h_cutflow_evt_MC;
    TH1D* h_cutflow_evt_MCjet_DHZ;

    TH1D* h_cutflow_evt_tagOnly;
    TH1D* h_cutflow_evt_DHZfirst;
    TH1D* h_cutflow_evt_tagFirst;

    TH1D* h_evt_trig_2016;
    TH1D* h_evt_trig_2016_post;

    // Test Plots
    TH1D* h_nCombos;
    TH1D* h_pt_cand_b0;
    TH1D* h_pt_cand_b1;
    TH1D* h_pt_cand_c0;
    TH1D* h_pt_cand_c1;
    TH1D* h_pt_cand_Z;
    TH1D* h_pt_cand_H;
    TH2D* h_pt_cand_H_vs_Z;

    // ======================
    // WeightPlot Instances
    // ======================
    WeightPlots* h_event_weights;
    RegressionPlots* h_jet_regressions;

    // =================
    // VHPlot instances
    // =================

    VHPlots* h_VH_MC;         // plots for MC truth selection    
    VHPlots *h_VH_tagOnly;   // plots for selection methods
    VHPlots *h_VH_DHZfirst;
    VHPlots *h_VH_tagFirst;

    VHPlots *h_VH_tagOnly_2b1c; // plots for versions with 2b1c tagging
    VHPlots *h_VH_DHZfirst_2b1c;
    VHPlots *h_VH_tagFirst_2b1c;

    VHPlots *h_VH_tagFirst_2combo; 
    VHPlots *h_VH_tagFirst_1combo;
    VHPlots *h_VH_DHZfirst_noTag;
    VHPlots *h_VH_DHZfirst_2b;

    // ====================
    // RecoPlots instances
    // ====================
    RecoPlots* h_reco_minDR;
    RecoPlots* h_reco_minDR_under30;
    RecoPlots* h_reco_minDR_noTag;
    RecoPlots* h_reco_minDR_noTag_under30;
    RecoPlots* h_reco_dRcollect;
    RecoPlots* h_reco_dRcollect_under30;
    RecoPlots* h_reco_dRcollect_noTag;
    RecoPlots* h_reco_dRcollect_noTag_under30;
    RecoPlots* h_reco_ideal;
    RecoPlots* h_reco_ideal_under30;
    RecoPlots *h_reco_DHZ;
    RecoPlots *h_reco_DHZ_under30;
    RecoPlots* h_reco_DHZ_noTag;
    RecoPlots *h_reco_DHZ_noTag_under30;

    // ===================
    // JetPlots instances
    // ===================
    JetPlots* h_jets_all;
    JetPlots* h_jets_cut;
    JetPlots* h_jets_gen_all;
    JetPlots* h_jets_gen_cut;
    JetPlots* h_jets_gen_l;
    JetPlots* h_jets_gen_b;
    JetPlots* h_jets_gen_c;

};

// == [  ] END OF FILE ========================================================

#endif
