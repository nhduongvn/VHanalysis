#ifndef Plots_cxx
#define Plots_cxx

#include "Obj.cxx"
#include "TString.h"
#include "TH1.h"
#include "TH1D.h"
#include "TMath.h"
#include "TLorentzVector.h"
#include <TTreeReaderArray.h>

// These constants define the number of bins
// & pT ranges we want for different variables.
const unsigned NBIN_PT_JET = 2000;
const float X_PT_JET[2] = {0, 2000};
const unsigned NBIN_PT_Z = 2000;
const float X_PT_Z[2] = {0, 2000};
const unsigned NBIN_ETA = 500;
const float X_ETA[2] = {-2.5, 2.5};
const unsigned NBIN_PHI = 480;
const float X_PHI[2] = {-4.0, 4.0};

const float NBIN_M_J = 300;
const float X_M_J[2] = {0, 300};
const float NBIN_M_H = 300;
const float X_M_H[2] = {0, 300};
const float NBIN_M_Z = 300;
const float X_M_Z[2] = {0, 300};

// Main Plots class
class VHPlots
{

  public:
    // Constructor
    VHPlots(TString name) : m_name(name) {
 
      h_pt_jet = new TH1D(name + "_pt_jet", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_eta_jet = new TH1D(name + "_eta_jet", "", NBIN_ETA, X_ETA[0], X_ETA[1]);
      h_phi_jet = new TH1D(name + "_phi_jet", "", NBIN_PHI, X_PHI[0], X_PHI[1]);
      h_mSV_jet = new TH1D(name + "_mSV_jet", "", 100, 0, 10);
      h_Njet = new TH1D(name + "_Njet", "", 15, 0, 15);   
 
      h_pt_jet_selected = new TH1D(name + "_pt_jet_selected", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_eta_jet_selected = new TH1D(name + "_eta_jet_selected", "", NBIN_ETA, X_ETA[0], X_ETA[1]);
      h_eta_jet_selected = new TH1D(name + "_phi_jet_selected", "", NBIN_PHI, X_PHI[0], X_PHI[1]);
      h_mSV_jet_selected = new TH1D(name + "_mSV_jet_selected", "", 100, 0, 10);
      h_Njet_selected = new TH1D(name + "_Njet_selected", "", 15, 0, 15);     

      h_HPt = new TH1D(name + "_HPt", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_HEta = new TH1D(name + "_HEta", "", NBIN_ETA, X_ETA[0], X_ETA[1]);
      h_HMass = new TH1D(name + "_HMass", "", NBIN_M_H, X_M_H[0], X_M_H[1]);
      h_ZPt = new TH1D(name + "_ZPt", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_ZEta = new TH1D(name + "_ZEta", "", NBIN_ETA, X_ETA[0], X_ETA[1]);
      h_ZMass = new TH1D(name + "_ZMass", "", NBIN_M_Z, X_M_Z[0], X_M_Z[1]);

      h_dR_H = new TH1D(name + "_dR_H", "", 100, 0, 10);
      h_dR_Z = new TH1D(name + "_dR_Z", "", 100, 0, 10);
      h_dPhi_H = new TH1D(name + "_dPhi_H", "", 60, -TMath::Pi(), TMath::Pi());
      h_dPhi_Z = new TH1D(name + "_dPhi_Z", "", 60, -TMath::Pi(), TMath::Pi());

      h_Z_pt_jet0 = new TH1D(name + "_Z_pt_jet0", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_Z_pt_jet1 = new TH1D(name + "_Z_pt_jet1", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_Z_pt_jet2 = new TH1D(name + "_Z_pt_jet2", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_Z_eta_jet0 = new TH1D(name + "_Z_eta_jet0", "", NBIN_ETA, X_ETA[0], X_ETA[1]);
      h_Z_eta_jet1 = new TH1D(name + "_Z_eta_jet1", "", NBIN_ETA, X_ETA[0], X_ETA[1]);
      h_Z_eta_jet2 = new TH1D(name + "_Z_eta_jet2", "", NBIN_ETA, X_ETA[0], X_ETA[1]);
      h_Z_phi_jet0 = new TH1D(name + "_Z_phi_jet0", "", NBIN_PHI, X_PHI[0], X_PHI[1]);
      h_Z_phi_jet1 = new TH1D(name + "_Z_phi_jet1", "", NBIN_PHI, X_PHI[0], X_PHI[1]);
      h_Z_phi_jet2 = new TH1D(name + "_Z_phi_jet2", "", NBIN_PHI, X_PHI[0], X_PHI[1]);
 
      h_H_pt_jet0 = new TH1D(name + "_H_pt_jet0", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_H_pt_jet1 = new TH1D(name + "_H_pt_jet1", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_H_pt_jet2 = new TH1D(name + "_H_pt_jet2", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_H_eta_jet0 = new TH1D(name + "_H_eta_jet0", "", NBIN_ETA, X_ETA[0], X_ETA[1]);
      h_H_eta_jet1 = new TH1D(name + "_H_eta_jet1", "", NBIN_ETA, X_ETA[0], X_ETA[1]);
      h_H_eta_jet2 = new TH1D(name + "_H_eta_jet2", "", NBIN_ETA, X_ETA[0], X_ETA[1]);
      h_H_phi_jet0 = new TH1D(name + "_H_phi_jet0", "", NBIN_PHI, X_PHI[0], X_PHI[1]);
      h_H_phi_jet1 = new TH1D(name + "_H_phi_jet1", "", NBIN_PHI, X_PHI[0], X_PHI[1]);
      h_H_phi_jet2 = new TH1D(name + "_H_phi_jet2", "", NBIN_PHI, X_PHI[0], X_PHI[1]);

      h_pt_jet->Sumw2();   h_pt_jet_selected->Sumw2();
      h_eta_jet->Sumw2();  h_eta_jet_selected->Sumw2();
      h_phi_jet->Sumw2();  h_phi_jet_selected->Sumw2();
      h_mSV_jet->Sumw2();  h_mSV_jet_selected->Sumw2();
      h_Njet->Sumw2();     h_Njet_selected->Sumw2();
      h_HMass->Sumw2();
      h_ZMass->Sumw2();
      h_dR_H->Sumw2();
      h_dR_Z->Sumw2();
      h_dPhi_H->Sumw2();
      h_dPhi_Z->Sumw2();
    } ;

    // Fill the general histograms.
    void Fill(HObj& H, ZObj& Z, float w=1) {

      // Fill in histograms related to Z & H objects
      h_HMass->Fill(H.m_lvec.M(), w);
      h_HPt->Fill(H.m_lvec.Pt(), w);
      h_HEta->Fill(H.m_lvec.Eta(), w);
      h_ZMass->Fill(Z.m_lvec.M(), w);
      h_ZPt->Fill(Z.m_lvec.Pt(), w);
      h_ZEta->Fill(Z.m_lvec.Eta(), w);

      // Each object will have at least one jet. Fill the
      // distributions for those objects here.
      TLorentzVector zjet0 = Z.getJet(0).m_lvec;
      h_Z_pt_jet0->Fill(zjet0.Pt());
      h_Z_eta_jet0->Fill(zjet0.Eta());
      h_Z_phi_jet0->Fill(zjet0.Phi());

      TLorentzVector hjet0 = H.getJet(0).m_lvec;
      h_H_pt_jet0->Fill(hjet0.Pt());
      h_H_eta_jet0->Fill(hjet0.Eta());
      h_H_phi_jet0->Fill(hjet0.Phi());     

      // If we have two (or more) jets, we need to 
      // check the separation of the jets and fill
      // the appropriate distributions.
      if (H.nJets() >= 2) {
        h_dR_H->Fill(H.DeltaR(), w);
        h_dPhi_H->Fill(H.DPhi(), w);

        TLorentzVector hjet1 = H.getJet(1).m_lvec;
        h_H_pt_jet1->Fill(hjet1.Pt());
        h_H_eta_jet1->Fill(hjet1.Eta());
        h_H_phi_jet1->Fill(hjet1.Phi());
      }

      if (Z.nJets() >= 2) {
        h_dR_Z->Fill(Z.DeltaR(), w);
        h_dPhi_Z->Fill(Z.DPhi(), w);

        TLorentzVector zjet1 = Z.getJet(1).m_lvec;
        h_Z_pt_jet1->Fill(zjet1.Pt());
        h_Z_eta_jet1->Fill(zjet1.Eta());
        h_Z_phi_jet1->Fill(zjet1.Phi());
      }
    };

    // Fill stuff about jets.
    void FillJets(std::vector<JetObj>& jets, float w=1) {
      for (auto it : jets) {
        h_pt_jet->Fill(it.m_lvec.Pt(), w);
        h_eta_jet->Fill(it.m_lvec.Eta(), w);
        h_phi_jet->Fill(it.m_lvec.Phi(), w);
        h_mSV_jet->Fill(it.m_mSV, w);
      }
    }

    void FillNjet(size_t nJet, float w=1) {
      h_Njet->Fill(nJet, w);
    }

    void FillJets_selected(std::vector<JetObj>& jets, float w=1) {
      for (auto it : jets) {
        h_pt_jet_selected->Fill(it.m_lvec.Pt(), w);
        h_eta_jet_selected->Fill(it.m_lvec.Eta(), w);
        h_phi_jet_selected->Fill(it.m_lvec.Phi(), w);
        h_mSV_jet_selected->Fill(it.m_mSV, w);
      }
    }

    void FillNjet_selected(size_t nJet, float w=1) {
     h_Njet_selected->Fill(nJet, w);
    }

    // Return a list of all the histograms.
    std::vector<TH1*> returnHisto() {
      std::vector<TH1*> histolist;
 
      // Jet-Related Plots
      histolist.push_back(h_pt_jet);
      histolist.push_back(h_eta_jet);
      histolist.push_back(h_phi_jet);
      histolist.push_back(h_mSV_jet);
      histolist.push_back(h_Njet);
     
      histolist.push_back(h_pt_jet_selected);
      histolist.push_back(h_eta_jet_selected);
      histolist.push_back(h_phi_jet_selected);
      histolist.push_back(h_mSV_jet_selected);
      histolist.push_back(h_Njet_selected);      

      // V and H plots
      histolist.push_back(h_HMass);
      histolist.push_back(h_HPt);
      histolist.push_back(h_HEta);
      histolist.push_back(h_ZMass);
      histolist.push_back(h_ZPt);
      histolist.push_back(h_ZEta);

      // VH-Related Plots
      histolist.push_back(h_dR_H);
      histolist.push_back(h_dR_Z);
      histolist.push_back(h_dPhi_H);
      histolist.push_back(h_dPhi_Z);

      histolist.push_back(h_Z_pt_jet0); histolist.push_back(h_Z_eta_jet0); histolist.push_back(h_Z_phi_jet0);
      histolist.push_back(h_Z_pt_jet1); histolist.push_back(h_Z_eta_jet1); histolist.push_back(h_Z_phi_jet1);
      histolist.push_back(h_Z_pt_jet2); histolist.push_back(h_Z_eta_jet2); histolist.push_back(h_Z_phi_jet2);
 
      histolist.push_back(h_H_pt_jet0); histolist.push_back(h_H_eta_jet0); histolist.push_back(h_H_phi_jet0);
      histolist.push_back(h_H_pt_jet1); histolist.push_back(h_H_eta_jet1); histolist.push_back(h_H_phi_jet1);
      histolist.push_back(h_H_pt_jet2); histolist.push_back(h_H_eta_jet2); histolist.push_back(h_H_phi_jet2);

      return histolist;
    }

  protected:
    // Variables
    TString m_name;

    //Jet Plots
    TH1D* h_pt_jet0;
    TH1D* h_eta_jet0;
    TH1D* h_phi_jet0;
    TH1D* h_pt_jet1;
    TH1D* h_eta_jet1;
    TH1D* h_phi_jet1;
    TH1D* h_pt_jet2;
    TH1D* h_eta_jet2;
    TH1D* h_phi_jet2;

    TH1D* h_Z_pt_jet0;
    TH1D* h_Z_eta_jet0;
    TH1D* h_Z_phi_jet0;
    TH1D* h_Z_pt_jet1;
    TH1D* h_Z_eta_jet1;
    TH1D* h_Z_phi_jet1;
    TH1D* h_Z_pt_jet2;
    TH1D* h_Z_eta_jet2;
    TH1D* h_Z_phi_jet2;

    TH1D* h_H_pt_jet0;
    TH1D* h_H_eta_jet0;
    TH1D* h_H_phi_jet0;
    TH1D* h_H_pt_jet1;
    TH1D* h_H_eta_jet1;
    TH1D* h_H_phi_jet1;
    TH1D* h_H_pt_jet2;
    TH1D* h_H_eta_jet2;
    TH1D* h_H_phi_jet2;
        
    //Higgs Plots
    TH1D* h_HPt;    
    TH1D* h_HEta;    
    TH1D* h_HMass;    
    TH1D* h_dR_H;
    TH1D* h_dPhi_H;

    //Z Plots
    TH1D* h_ZPt;
    TH1D* h_ZEta;
    TH1D* h_ZMass;
    TH1D* h_dR_Z;
    TH1D* h_dPhi_Z;
    
    //VH Plots
    TH1D* h_pt_jet;
    TH1D* h_eta_jet;
    TH1D* h_phi_jet;
    TH1D* h_mSV_jet;
    TH1D* h_Njet;

    TH1D* h_pt_jet_selected;
    TH1D* h_eta_jet_selected;
    TH1D* h_phi_jet_selected;
    TH1D* h_mSV_jet_selected;
    TH1D* h_Njet_selected;

} ;

// Main Plots class
class VHBoostedPlots
{

  public:
    // Constructor
    VHBoostedPlots(TString name) : m_name(name) {
 
      h_pt_jet = new TH1D(name + "_pt_jet", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_eta_jet = new TH1D(name + "_eta_jet", "", NBIN_ETA, X_ETA[0], X_ETA[1]);
      h_phi_jet = new TH1D(name + "_phi_jet", "", NBIN_PHI, X_PHI[0], X_PHI[1]);
      h_m_jet = new TH1D(name + "_m_jet", "", NBIN_M_J, X_M_J[0], X_M_J[1]);
      
      h_pt_jet0 = new TH1D(name + "_pt_jet0", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_eta_jet0 = new TH1D(name + "_eta_jet0", "", NBIN_ETA, X_ETA[0], X_ETA[1]);
      h_phi_jet0 = new TH1D(name + "_phi_jet0", "", NBIN_PHI, X_PHI[0], X_PHI[1]);
      h_m_jet0 = new TH1D(name + "_m_jet0", "", NBIN_M_J, X_M_J[0], X_M_J[1]);
      
      h_pt_jet1 = new TH1D(name + "_pt_jet1", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_eta_jet1 = new TH1D(name + "_eta_jet1", "", NBIN_ETA, X_ETA[0], X_ETA[1]);
      h_phi_jet1 = new TH1D(name + "_phi_jet1", "", NBIN_PHI, X_PHI[0], X_PHI[1]);
      h_m_jet1 = new TH1D(name + "_m_jet1", "", NBIN_M_J, X_M_J[0], X_M_J[1]);

      h_HPt = new TH1D(name + "_HPt", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_HEta = new TH1D(name + "_HEta", "", NBIN_ETA, X_ETA[0], X_ETA[1]);
      h_HMass = new TH1D(name + "_HMass", "", NBIN_M_H, X_M_H[0], X_M_H[1]);
      h_ZPt = new TH1D(name + "_ZPt", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_ZEta = new TH1D(name + "_ZEta", "", NBIN_ETA, X_ETA[0], X_ETA[1]);
      h_ZMass = new TH1D(name + "_ZMass", "", NBIN_M_Z, X_M_Z[0], X_M_Z[1]);

      h_pt_jet->Sumw2();
      h_eta_jet->Sumw2();
      h_phi_jet->Sumw2();
      h_m_jet->Sumw2();
      h_pt_jet0->Sumw2();
      h_eta_jet0->Sumw2();
      h_phi_jet0->Sumw2();
      h_m_jet0->Sumw2();
      h_pt_jet1->Sumw2();
      h_eta_jet1->Sumw2();
      h_phi_jet1->Sumw2();
      h_m_jet1->Sumw2();
      h_HMass->Sumw2();
      h_ZMass->Sumw2();
    } ;

    // Fill the general histograms.
    void Fill(HObj& H, ZObj& Z, float w=1) {

      h_HMass->Fill(H.m_lvec.M(), w);
      h_HPt->Fill(H.m_lvec.Pt(), w);
      h_HEta->Fill(H.m_lvec.Eta(), w);
      h_ZMass->Fill(Z.m_lvec.M(), w);
      h_ZPt->Fill(Z.m_lvec.Pt(), w);
      h_ZEta->Fill(Z.m_lvec.Eta(), w);
    };

    // Fill stuff about jets.
    void FillJets(std::vector<JetObjBoosted>& jets, float w=1) {
      for (auto it : jets) {
        h_pt_jet->Fill(it.m_lvec.Pt(), w);
        h_eta_jet->Fill(it.m_lvec.Eta(), w);
        h_phi_jet->Fill(it.m_lvec.Phi(), w);
        h_m_jet->Fill(it.m_lvec.M(), w);
      }
      //sorting jets according to pT
      int idx_0(-1);
      int idx_1(-1);
      if (jets.size()>0) idx_0=0;
      if (jets.size()>1) {
        if(jets[0].m_lvec.Pt()>=jets[1].m_lvec.Pt()) {idx_0=0;idx_1=1;}
        else{idx_0=1;idx_1=0;};
      }
      if (idx_0>=0) {
        h_pt_jet0->Fill(jets[idx_0].m_lvec.Pt(), w);
        h_eta_jet0->Fill(jets[idx_0].m_lvec.Eta(), w);
        h_phi_jet0->Fill(jets[idx_0].m_lvec.Phi(), w); 
        h_m_jet0->Fill(jets[idx_0].m_lvec.M(), w); 
      }
      if (idx_1>=0) {
        h_pt_jet1->Fill(jets[idx_1].m_lvec.Pt(), w);
        h_eta_jet1->Fill(jets[idx_1].m_lvec.Eta(), w);
        h_phi_jet1->Fill(jets[idx_1].m_lvec.Phi(), w); 
        h_m_jet1->Fill(jets[idx_1].m_lvec.M(), w); 
      }
    }

    // Return a list of all the histograms.
    std::vector<TH1*> returnHisto() {
      std::vector<TH1*> histolist;
 
      // Jet-Related Plots
      histolist.push_back(h_pt_jet);
      histolist.push_back(h_eta_jet);
      histolist.push_back(h_phi_jet);
      histolist.push_back(h_m_jet);
      histolist.push_back(h_pt_jet0);
      histolist.push_back(h_eta_jet0);
      histolist.push_back(h_phi_jet0);
      histolist.push_back(h_m_jet0);
      histolist.push_back(h_pt_jet1);
      histolist.push_back(h_eta_jet1);
      histolist.push_back(h_phi_jet1);
      histolist.push_back(h_m_jet1);
     
      // V and H plots
      histolist.push_back(h_HMass);
      histolist.push_back(h_HPt);
      histolist.push_back(h_HEta);
      histolist.push_back(h_ZMass);
      histolist.push_back(h_ZPt);
      histolist.push_back(h_ZEta);

      return histolist;
    }

  protected:
    // Variables
    TString m_name;
    
    //Higgs Plots
    TH1D* h_HPt;    
    TH1D* h_HEta;    
    TH1D* h_HMass;    

    //Z Plots
    TH1D* h_ZPt;
    TH1D* h_ZEta;
    TH1D* h_ZMass;
    
    //VHBoosted Plots
    TH1D* h_pt_jet;
    TH1D* h_eta_jet;
    TH1D* h_phi_jet;
    TH1D* h_m_jet;
    TH1D* h_pt_jet0;
    TH1D* h_eta_jet0;
    TH1D* h_phi_jet0;
    TH1D* h_m_jet0;
    TH1D* h_pt_jet1;
    TH1D* h_eta_jet1;
    TH1D* h_phi_jet1;
    TH1D* h_m_jet1;
} ;

class HBoostedPlots
{

  public:
    // Constructor
    HBoostedPlots(TString name) : m_name(name) {
      h_pt_jet = new TH1D(name + "_pt_jet", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_eta_jet = new TH1D(name + "_eta_jet", "", NBIN_ETA, X_ETA[0], X_ETA[1]);
      h_phi_jet = new TH1D(name + "_phi_jet", "", NBIN_PHI, X_PHI[0], X_PHI[1]);
      h_m_jet = new TH1D(name + "_m_jet", "", NBIN_M_J, X_M_J[0], X_M_J[1]);
      
      h_pt_jet->Sumw2();
      h_eta_jet->Sumw2();
      h_phi_jet->Sumw2();
      h_m_jet->Sumw2();
    } ;

    // Fill stuff about jets.
    void FillJet(JetObjBoosted& jet, float w=1) {
      h_pt_jet->Fill(jet.m_lvec.Pt(), w);
      h_eta_jet->Fill(jet.m_lvec.Eta(), w);
      h_phi_jet->Fill(jet.m_lvec.Phi(), w);
      h_m_jet->Fill(jet.m_lvec.M(), w);
    }

    // Return a list of all the histograms.
    std::vector<TH1*> returnHisto() {
      std::vector<TH1*> histolist;
 
      // Jet-Related Plots
      histolist.push_back(h_pt_jet);
      histolist.push_back(h_eta_jet);
      histolist.push_back(h_phi_jet);
      histolist.push_back(h_m_jet);

      return histolist;
    }

  protected:
    // Variables
    TString m_name;
    
    //HBoosted Plots
    TH1D* h_pt_jet;
    TH1D* h_eta_jet;
    TH1D* h_phi_jet;
    TH1D* h_m_jet;
} ;
#endif
