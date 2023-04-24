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
    VHPlots *h_VH_tags_noMassCorr;
    VHPlots *h_VH_tags_noJEC;

    VHPlots *h_VH_algo;  // Mass-Matching Prioritized
    VHPlots *h_VH_algo_noMassCorr;
    VHPlots *h_VH_algo_noJEC;

    VHPlots *h_VH_both;  // Tagging Prioritized
    VHPlots *h_VH_both_noMassCorr;
    VHPlots *h_VH_both_noJEC;

    VHPlots *h_VH_all;   // Any plots related to ALL cut types
    VHPlots *h_VH_select; // Any plots related to ALL selection types (after our MET cut)

    VHPlots *h_VH_alljet; // Using just any jets
    VHPlots *h_VH_seljet; // Using selected jets

    // Trigger Efficiency Plots
    TriggerEffPlots *h_2016_QuadJet_TripleTag;    // trigger eff for first 2016 trigger
    TriggerEffPlots *h_2016_DoubleJet_TripleTag;  // trigger eff for second 2016 trigger
    TriggerEffPlots *h_2017_QuadJet_TripleTag;    // " " " 2017 trigger
    TriggerEffPlots *h_2018_QuadJet_TripleTag;    // " " " 2018 trigger

    TriggerEffPlots *h_2016_QuadJet_DoubleTag;
    TriggerEffPlots *h_2016_DoubleJet_DoubleTag;
    TriggerEffPlots *h_2017_QuadJet_noTag;
    TriggerEffPlots *h_2018_QuadJet_noTag;

    TriggerEffPlots *h_2016_QuadJet_TripleTag_tagged;
    TriggerEffPlots *h_2016_DoubleJet_TripleTag_tagged;
    TriggerEffPlots *h_2017_QuadJet_TripleTag_tagged;
    TriggerEffPlots *h_2018_QuadJet_TripleTag_tagged;

    TriggerEffPlots *h_2016_QuadJet_DoubleTag_tagged;
    TriggerEffPlots *h_2016_DoubleJet_DoubleTag_tagged;
    TriggerEffPlots *h_2017_QuadJet_noTag_tagged;
    TriggerEffPlots *h_2018_QuadJet_noTag_tagged;

    // Efficiency Plots
    EffPlots *h_eff_tags; // Efficiencies for Tagging Only
    EffPlots *h_eff_algo; // Efficiencies for Mass-Matching Prioritized
    EffPlots *h_eff_both; // Efficiencies for Tagging Prioritized

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

    TH1D* h_bRegCorr;
    TH1D* h_cRegCorr;
    TH1D* h_JetMass;

    TH1D* h_JetMassBefore;
    TH1D* h_JetMassAfter;

    GenPlots *h_genJet_all;
    GenPlots *h_genJet_cuts;
    GenPlots *h_genJet_VbbHcc;
};

#endif
