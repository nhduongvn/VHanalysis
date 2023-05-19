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

    // Trigger Efficiency Plots - original triggers
    TriggerEffPlots *h_2016_QuadJet_TripleTag;    // HLT_QuadJet45_Triple...
    TriggerEffPlots *h_2016_DoubleJet_TripleTag;  // HLT_DoubleJet90_Double30_Triple...
    TriggerEffPlots *h_2017_QuadJet_TripleTag;    // HLT_PFHT300PT30_QuadJet...
    TriggerEffPlots *h_2018_QuadJet_TripleTag;    // HLT_PFHT330PT30_QuadJet...

    TriggerEffPlots *h_2016_QuadJet_DoubleTag;    // 2016 but w/ DoubleBTag
    TriggerEffPlots *h_2016_DoubleJet_DoubleTag;  // 2016 but w/ DoubleBTag
    TriggerEffPlots *h_2017_QuadJet_noTag;        // 2017 but w/ no tagging requirement
    TriggerEffPlots *h_2018_QuadJet_noTag;        // 2018 but w/ no tagging requirement

    /*TriggerEffPlots *h_2017_QuadJet_noTagV2;      // HLT_QuadPFJet98_83_71_15
    TriggerEffPlots *h_2017_QuadJet_noTagV3;      // HLT_QuadPFJet103_88_75_15
    TriggerEffPlots *h_2017_QuadJet_noTagV4;      // HLT_QuadPFJet105_88_76_15
    TriggerEffPlots *h_2017_QuadJet_noTagV5;      // HLT_QuadPFJet111_90_80_15

    TriggerEffPlots *h_2018_QuadJet_noTagV2;      // same triggers for 2018
    TriggerEffPlots *h_2018_QuadJet_noTagV3;
    TriggerEffPlots *h_2018_QuadJet_noTagV4;
    TriggerEffPlots *h_2018_QuadJet_noTagV5;*/

    // Versions that pass tagging requirements
    TriggerEffPlots *h_2016_QuadJet_TripleTag_tagged;
    TriggerEffPlots *h_2016_DoubleJet_TripleTag_tagged;
    TriggerEffPlots *h_2017_QuadJet_TripleTag_tagged;
    TriggerEffPlots *h_2018_QuadJet_TripleTag_tagged;

    TriggerEffPlots *h_2016_QuadJet_DoubleTag_tagged;
    TriggerEffPlots *h_2016_DoubleJet_DoubleTag_tagged;
    TriggerEffPlots *h_2017_QuadJet_noTag_tagged;
    TriggerEffPlots *h_2018_QuadJet_noTag_tagged;

    /*TriggerEffPlots *h_2017_QuadJet_noTagV2_tagged;      
    TriggerEffPlots *h_2017_QuadJet_noTagV3_tagged;      
    TriggerEffPlots *h_2017_QuadJet_noTagV4_tagged;      
    TriggerEffPlots *h_2017_QuadJet_noTagV5_tagged;      

    TriggerEffPlots *h_2018_QuadJet_noTagV2_tagged;     
    TriggerEffPlots *h_2018_QuadJet_noTagV3_tagged;
    TriggerEffPlots *h_2018_QuadJet_noTagV4_tagged;
    TriggerEffPlots *h_2018_QuadJet_noTagV5_tagged;*/

    // Versions that pass all requirements in tagging names
    TriggerEffPlots *h_2016_QuadJet_TripleTag_ideal;
    TriggerEffPlots *h_2016_DoubleJet_TripleTag_ideal;
    TriggerEffPlots *h_2017_QuadJet_TripleTag_ideal;
    TriggerEffPlots *h_2017_QuadJet_TripleTag_RunB_ideal;
    TriggerEffPlots *h_2018_QuadJet_TripleTag_ideal;

    TriggerEffPlots *h_2016_QuadJet_DoubleTag_ideal;
    TriggerEffPlots *h_2016_DoubleJet_DoubleTag_ideal;
    TriggerEffPlots *h_2017_QuadJet_noTag_ideal;
    TriggerEffPlots *h_2018_QuadJet_noTag_ideal;

    TriggerEffPlots *h_2017_QuadJet_noTagV2_ideal;      
    TriggerEffPlots *h_2017_QuadJet_noTagV3_ideal;      
    TriggerEffPlots *h_2017_QuadJet_noTagV4_ideal;      
    TriggerEffPlots *h_2017_QuadJet_noTagV5_ideal;      

    TriggerEffPlots *h_2018_QuadJet_noTagV2_ideal;     
    TriggerEffPlots *h_2018_QuadJet_noTagV3_ideal;
    TriggerEffPlots *h_2018_QuadJet_noTagV4_ideal;
    TriggerEffPlots *h_2018_QuadJet_noTagV5_ideal;

    // Versions where the tagging requirement is 3b
    TriggerEffPlots *h_2016_QuadJet_TripleTag_3B;
    TriggerEffPlots *h_2016_DoubleJet_TripleTag_3B;
    TriggerEffPlots *h_2017_QuadJet_TripleTag_3B;
    TriggerEffPlots *h_2017_QuadJet_TripleTag_RunB_3B;
    TriggerEffPlots *h_2018_QuadJet_TripleTag_3B;

    // Versions where the tagging requirement is 2b2c
    TriggerEffPlots *h_2016_QuadJet_TripleTag_2b2c;
    TriggerEffPlots *h_2016_DoubleJet_TripleTag_2b2c;
    TriggerEffPlots *h_2017_QuadJet_TripleTag_2b2c;
    TriggerEffPlots *h_2017_QuadJet_TripleTag_RunB_2b2c;
    TriggerEffPlots *h_2018_QuadJet_TripleTag_2b2c;

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
