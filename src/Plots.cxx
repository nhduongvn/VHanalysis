#ifndef Plots_cxx
#define Plots_cxx

#include "Obj.cxx"
#include "TString.h"
#include "TH1.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TH3D.h"
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

      h_pt_jet->Sumw2();
      h_eta_jet->Sumw2();
      h_phi_jet->Sumw2();
      h_mSV_jet->Sumw2();
      h_Njet->Sumw2();
      h_HMass->Sumw2();
      h_ZMass->Sumw2();
      h_dR_H->Sumw2();
      h_dR_Z->Sumw2();
      h_dPhi_H->Sumw2();
      h_dPhi_Z->Sumw2();
    } ;

    // Fill the general histograms.
    void Fill(HObj& H, ZObj& Z, float w=1) {

      h_HMass->Fill(H.m_lvec.M(), w);
      h_HPt->Fill(H.m_lvec.Pt(), w);
      h_HEta->Fill(H.m_lvec.Eta(), w);
      h_ZMass->Fill(Z.m_lvec.M(), w);
      h_ZPt->Fill(Z.m_lvec.Pt(), w);
      h_ZEta->Fill(Z.m_lvec.Eta(), w);
      
      if (H.nJets() >= 2) {
        h_dR_H->Fill(H.DeltaR(), w);
        h_dPhi_H->Fill(H.DPhi(), w);
      }
      if (Z.nJets() >= 2) {
        h_dR_Z->Fill(Z.DeltaR(), w);
        h_dPhi_Z->Fill(Z.DPhi(), w);
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

    // Return a list of all the histograms.
    std::vector<TH1*> returnHisto() {
      std::vector<TH1*> histolist;
 
      // Jet-Related Plots
      histolist.push_back(h_pt_jet);
      histolist.push_back(h_eta_jet);
      histolist.push_back(h_phi_jet);
      histolist.push_back(h_mSV_jet);
      histolist.push_back(h_Njet);
     
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

      return histolist;
    }

  protected:
    // Variables
    TString m_name;
    
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
      h_flav_jet = new TH1D(name + "_flav_jet", "", 10, 0, 10);
      
      h_pt_jet0 = new TH1D(name + "_pt_jet0", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_eta_jet0 = new TH1D(name + "_eta_jet0", "", NBIN_ETA, X_ETA[0], X_ETA[1]);
      h_phi_jet0 = new TH1D(name + "_phi_jet0", "", NBIN_PHI, X_PHI[0], X_PHI[1]);
      h_m_jet0 = new TH1D(name + "_m_jet0", "", NBIN_M_J, X_M_J[0], X_M_J[1]);
      h_flav_jet0 = new TH1D(name + "_flav_jet0", "", 10, 0, 10);
      
      h_pt_jet1 = new TH1D(name + "_pt_jet1", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_eta_jet1 = new TH1D(name + "_eta_jet1", "", NBIN_ETA, X_ETA[0], X_ETA[1]);
      h_phi_jet1 = new TH1D(name + "_phi_jet1", "", NBIN_PHI, X_PHI[0], X_PHI[1]);
      h_m_jet1 = new TH1D(name + "_m_jet1", "", NBIN_M_J, X_M_J[0], X_M_J[1]);
      h_flav_jet1 = new TH1D(name + "_flav_jet1", "", 10, 0, 10);

      h_bbTagDis_beforeCut = new TH1D(name + "_bbTagDis_beforeCut", "", 1000, 0, 1);
      h_ccTagDis_beforeCut = new TH1D(name + "_ccTagDis_beforeCut", "", 1000, 0, 1);
      h_bbTagDis = new TH1D(name + "_bbTagDis", "", 1000, 0, 1);
      h_ccTagDis = new TH1D(name + "_ccTagDis", "", 1000, 0, 1);
      h_NextraJet_beforeCut = new TH1D(name+"_NextraJet_beforeCut","",10,0,10);
      h_MET_beforeCut = new TH1D(name+"_MET_beforeCut","",1000,0,1000);
      h_MET_beforeCut_1 = new TH1D(name+"_MET_beforeCut_1","",1000,0,1000);
      h_MET = new TH1D(name+"_MET","",1000,0,1000);
      h_ccPN_TopvsQCD= new TH1D(name + "_ccPN_TopvsQCD", "", 1000, 0, 1);
      h_ccPN_WvsQCD= new TH1D(name + "_ccPN_WvsQCD", "", 1000, 0, 1);
      h_ccPN_ZvsQCD= new TH1D(name + "_ccPN_ZvsQCD", "", 1000, 0, 1);
      h_bbPN_TopvsQCD= new TH1D(name + "_bbPN_TopvsQCD", "", 1000, 0, 1);
      h_bbPN_WvsQCD= new TH1D(name + "_bbPN_WvsQCD", "", 1000, 0, 1);
      h_bbPN_ZvsQCD= new TH1D(name + "_bbPN_ZvsQCD", "", 1000, 0, 1);
      h_HPt = new TH1D(name + "_HPt", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_HEta = new TH1D(name + "_HEta", "", NBIN_ETA, X_ETA[0], X_ETA[1]);
      h_HMass = new TH1D(name + "_HMass", "", NBIN_M_H, X_M_H[0], X_M_H[1]);
      h_HFlav = new TH1D(name + "_HFlav", "", 10, 0, 10);
      h_ZPt = new TH1D(name + "_ZPt", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_ZEta = new TH1D(name + "_ZEta", "", NBIN_ETA, X_ETA[0], X_ETA[1]);
      h_ZMass = new TH1D(name + "_ZMass", "", NBIN_M_Z, X_M_Z[0], X_M_Z[1]);
      h_ZFlav = new TH1D(name + "_ZFlav", "", 10, 0, 10);
      h_HMassZMass = new TH2D(name + "_HMassZMass", "", NBIN_M_H, X_M_H[0], X_M_H[1], NBIN_M_Z, X_M_Z[0], X_M_Z[1]);
      h_DEta = new TH1D(name + "_DEtaZH", "", 1000, -5, 5);
      h_DPhi = new TH1D(name + "_DPhiZH", "", 314, 0, TMath::Pi());
      h_DR = new TH1D(name + "_DRZH", "", 500, 0, 5);

      h_pt_jet->Sumw2();
      h_eta_jet->Sumw2();
      h_phi_jet->Sumw2();
      h_m_jet->Sumw2();
      h_flav_jet->Sumw2();
      h_pt_jet0->Sumw2();
      h_eta_jet0->Sumw2();
      h_phi_jet0->Sumw2();
      h_m_jet0->Sumw2();
      h_flav_jet0->Sumw2();
      h_pt_jet1->Sumw2();
      h_eta_jet1->Sumw2();
      h_phi_jet1->Sumw2();
      h_m_jet1->Sumw2();
      h_flav_jet1->Sumw2();
      h_HPt->Sumw2();
      h_HEta->Sumw2();
      h_HMass->Sumw2();
      h_HFlav->Sumw2();
      h_ZPt->Sumw2();
      h_ZEta->Sumw2();
      h_ZMass->Sumw2();
      h_ZFlav->Sumw2();
      h_HMassZMass->Sumw2();
      h_DEta->Sumw2();
      h_DPhi->Sumw2();
      h_DR->Sumw2();
      h_bbTagDis_beforeCut->Sumw2();
      h_bbTagDis->Sumw2();
      h_ccTagDis_beforeCut->Sumw2();
      h_ccTagDis->Sumw2();
      h_NextraJet_beforeCut->Sumw2();
      h_MET_beforeCut->Sumw2();
      h_MET_beforeCut_1->Sumw2();
      h_MET->Sumw2();
      h_ccPN_TopvsQCD->Sumw2();
      h_ccPN_WvsQCD->Sumw2();
      h_ccPN_ZvsQCD->Sumw2();
      h_bbPN_TopvsQCD->Sumw2();
      h_bbPN_WvsQCD->Sumw2();
      h_bbPN_ZvsQCD->Sumw2();
    } ;

    // Fill the general histograms.
    void Fill(HObj& H, ZObj& Z, float w=1) {

      h_HMass->Fill(H.m_lvec.M(), w);
      h_HPt->Fill(H.m_lvec.Pt(), w);
      h_HEta->Fill(H.m_lvec.Eta(), w);
      h_HFlav->Fill(H.m_flav, w);
      h_ZMass->Fill(Z.m_lvec.M(), w);
      h_ZPt->Fill(Z.m_lvec.Pt(), w);
      h_ZEta->Fill(Z.m_lvec.Eta(), w);
      h_ZFlav->Fill(Z.m_flav, w);
      h_HMassZMass->Fill(H.m_lvec.M(),Z.m_lvec.M(), w);
      h_DR->Fill(H.m_lvec.DeltaR(Z.m_lvec), w);
      h_DPhi->Fill(fabs(H.m_lvec.DeltaPhi(Z.m_lvec)), w);
      h_DEta->Fill(H.m_lvec.Eta()-Z.m_lvec.Eta(), w);
    };

    // Fill stuff about jets.
    void FillJets(std::vector<JetObjBoosted>& jets, float w=1) {
      for (auto it : jets) {
        h_pt_jet->Fill(it.m_lvec.Pt(), w);
        h_eta_jet->Fill(it.m_lvec.Eta(), w);
        h_phi_jet->Fill(it.m_lvec.Phi(), w);
        h_m_jet->Fill(it.m_lvec.M(), w);
        h_flav_jet->Fill(it.m_flav, w);
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
        h_flav_jet0->Fill(jets[idx_0].m_flav, w); 
      }
      if (idx_1>=0) {
        h_pt_jet1->Fill(jets[idx_1].m_lvec.Pt(), w);
        h_eta_jet1->Fill(jets[idx_1].m_lvec.Eta(), w);
        h_phi_jet1->Fill(jets[idx_1].m_lvec.Phi(), w); 
        h_m_jet1->Fill(jets[idx_1].m_lvec.M(), w); 
        h_flav_jet1->Fill(jets[idx_1].m_flav, w); 
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
      histolist.push_back(h_flav_jet);
      histolist.push_back(h_pt_jet0);
      histolist.push_back(h_eta_jet0);
      histolist.push_back(h_phi_jet0);
      histolist.push_back(h_m_jet0);
      histolist.push_back(h_flav_jet0);
      histolist.push_back(h_pt_jet1);
      histolist.push_back(h_eta_jet1);
      histolist.push_back(h_phi_jet1);
      histolist.push_back(h_m_jet1);
      histolist.push_back(h_flav_jet1);
      histolist.push_back(h_bbTagDis_beforeCut);
      histolist.push_back(h_bbTagDis);
      histolist.push_back(h_ccTagDis_beforeCut);
      histolist.push_back(h_ccTagDis);
      histolist.push_back(h_NextraJet_beforeCut);
      histolist.push_back(h_MET_beforeCut);
      histolist.push_back(h_MET_beforeCut_1);
      histolist.push_back(h_MET);
      histolist.push_back(h_ccPN_TopvsQCD);
      histolist.push_back(h_ccPN_WvsQCD);
      histolist.push_back(h_ccPN_ZvsQCD);
      histolist.push_back(h_bbPN_TopvsQCD);
      histolist.push_back(h_bbPN_WvsQCD);
      histolist.push_back(h_bbPN_ZvsQCD);
     
      // V and H plots
      histolist.push_back(h_HMass);
      histolist.push_back(h_HPt);
      histolist.push_back(h_HEta);
      histolist.push_back(h_HFlav);
      histolist.push_back(h_ZMass);
      histolist.push_back(h_ZPt);
      histolist.push_back(h_ZEta);
      histolist.push_back(h_ZFlav);
      histolist.push_back(h_HMassZMass);
      histolist.push_back(h_DEta);
      histolist.push_back(h_DPhi);
      histolist.push_back(h_DR);

      return histolist;
    }
    
    TH1D* h_bbTagDis_beforeCut;
    TH1D* h_ccTagDis_beforeCut;
    TH1D* h_bbTagDis;
    TH1D* h_ccTagDis;
    TH1D* h_NextraJet_beforeCut;
    TH1D* h_MET_beforeCut;
    TH1D* h_MET_beforeCut_1;
    TH1D* h_MET;
    TH1D* h_ccPN_TopvsQCD;
    TH1D* h_ccPN_WvsQCD;
    TH1D* h_ccPN_ZvsQCD;
    TH1D* h_bbPN_TopvsQCD;
    TH1D* h_bbPN_WvsQCD;
    TH1D* h_bbPN_ZvsQCD;

  protected:
    // Variables
    TString m_name;
    
    //Higgs Plots
    TH1D* h_HPt;    
    TH1D* h_HEta;    
    TH1D* h_HMass;    
    TH1D* h_HFlav;    

    //Z Plots
    TH1D* h_ZPt;
    TH1D* h_ZEta;
    TH1D* h_ZMass;
    TH1D* h_ZFlav;
    
    TH2D* h_HMassZMass;
    TH1D* h_DEta;
    TH1D* h_DPhi;
    TH1D* h_DR;
    
    //VHBoosted Plots
    TH1D* h_pt_jet;
    TH1D* h_eta_jet;
    TH1D* h_phi_jet;
    TH1D* h_m_jet;
    TH1D* h_flav_jet;
    TH1D* h_pt_jet0;
    TH1D* h_eta_jet0;
    TH1D* h_phi_jet0;
    TH1D* h_m_jet0;
    TH1D* h_flav_jet0;
    TH1D* h_pt_jet1;
    TH1D* h_eta_jet1;
    TH1D* h_phi_jet1;
    TH1D* h_m_jet1;
    TH1D* h_flav_jet1;
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

// Main Plots class
class BoostedJetEffPlots 
{

  public:
    // Constructor
    BoostedJetEffPlots(TString name) : m_name(name) {
      h_pt_eta_m_pass = new TH3D(name + "_pt_eta_mass_pass", "", 100,200,1200,8,0,2.5,30,40,340); 
      h_pt_eta_m_tot = new TH3D(name + "_pt_eta_mass_tot", "", 100,200,1200,8,0,2.5,30,40,340);
      h_pt_eta_m_pass->Sumw2();
      h_pt_eta_m_tot->Sumw2();
    } ;

    // Fill stuff about jets.
    void Fill(JetObjBoosted& jet, bool doPass, float w=1) {
      h_pt_eta_m_tot->Fill(jet.m_lvec.Pt(), jet.m_lvec.Eta(), jet.m_lvec.M(), w);
      if (doPass) h_pt_eta_m_pass->Fill(jet.m_lvec.Pt(), jet.m_lvec.Eta(), jet.m_lvec.M(), w);
    }

    // Return a list of all the histograms.
    std::vector<TH1*> returnHisto() {
      std::vector<TH1*> histolist;
 
      // Jet-Related Plots
      histolist.push_back(h_pt_eta_m_pass);
      histolist.push_back(h_pt_eta_m_tot);

      return histolist;
    }

  protected:
    // Variables
    TString m_name;
    
    TH3D* h_pt_eta_m_pass;
    TH3D* h_pt_eta_m_tot;
} ;

#endif
