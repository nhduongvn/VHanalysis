#ifndef Plots_cxx
#define Plots_cxx

//== Plots ====================================================================
// This is a class that lets us lump series of plots together so we can easily
// handle massive numbers of plots.
//=============================================================================

//== Include Statements =======================================================

#include "Obj.cxx"             // Custom Obj classses
#include "Global.h"            // Global instances
#include "TString.h"           // ROOT string class
#include "TH1.h"               // ROOT Histogram classes
#include "TH1D.h"
#include "TMath.h"             // ROOT Math class
#include "TLorentzVector.h"    // ROOT 4-vector
#include <TTreeReaderArray.h>  // ROOT Tree reader

//== Constants ================================================================

// These constants define the number of bins and
// pT ranges we want for different variables.
const unsigned NBIN_PT_JET = 2000;
const float X_PT_JET[2] = {0, 2000};

const unsigned NBIN_PT_Z = 2000;
const float X_PT_Z[2] = {0, 2000};

const unsigned NBIN_ETA = 500;
const float X_ETA[2] = {-2.5, 2.5};

const unsigned NBIN_PHI = 480;
const float X_PHI[2] = {-4.0, 4.0};

const unsigned NBIN_M_JET = 300;
const float X_M_JET[2] = {0, 300};

const unsigned NBIN_M = 400;
const float X_M[2] = {0, 400};

const unsigned NBIN_DR = 100;
const float X_DR[2] = {0, 10};

const unsigned NBIN_DPHI = 240;
const float X_DPHI[2] = {0, 4.0};

const unsigned NBIN_DH = 200;
const float X_DH[2] = {0, 200.0};

class BosonPlots
{
  public:

    // Constructor
    BosonPlots(TString name) : m_name(name) {

      // Plots related to the reconstructed Boson object
      h_pt = new TH1D(name + "_pt", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);    
      h_eta = new TH1D(name + "_eta", "", NBIN_ETA, X_ETA[0], X_ETA[1]);
      h_phi = new TH1D(name + "_phi", "", NBIN_PHI, X_PHI[0], X_PHI[1]);
      h_mass = new TH1D(name + "_mass", "", NBIN_M, X_M[0], X_M[1]);
      h_dR = new TH1D(name + "_dR", "", NBIN_DR, X_DR[0], X_DR[1]);
      h_dPhi = new TH1D(name + "_dPhi", "", NBIN_DPHI, X_DPHI[0], X_DPHI[1]);

      // Plots related to the jets that reconstruct the object
      h_pt_jet0 = new TH1D(name + "_pt_jet0", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_pt_jet1 = new TH1D(name + "_pt_jet1", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_pt_jet2 = new TH1D(name + "_pt_jet2", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_eta_jet0 = new TH1D(name + "_eta_jet0", "", NBIN_ETA, X_ETA[0], X_ETA[1]);
      h_eta_jet1 = new TH1D(name + "_eta_jet1", "", NBIN_ETA, X_ETA[0], X_ETA[1]);
      h_eta_jet2 = new TH1D(name + "_eta_jet2", "", NBIN_ETA, X_ETA[0], X_ETA[1]);
      h_phi_jet0 = new TH1D(name + "_phi_jet0", "", NBIN_PHI, X_PHI[0], X_PHI[1]);
      h_phi_jet1 = new TH1D(name + "_phi_jet1", "", NBIN_PHI, X_PHI[0], X_PHI[1]);
      h_phi_jet2 = new TH1D(name + "_phi_jet2", "", NBIN_PHI, X_PHI[0], X_PHI[1]);
    };

    // Methods - Fill our histograms
    void Fill(BosonObj& B, float w=1.) {

      // Fill the plots related to the reconstructed objects.
      h_pt->Fill(B.Pt(), w); h_eta->Fill(B.Eta(), w); h_phi->Fill(B.Phi(), w);
      h_mass->Fill(B.M(), w);
      h_dR->Fill(B.DeltaR(), w); h_dPhi->Fill(B.DPhi(), w);

      // Fill the plots related to the jets.
      h_pt_jet0->Fill(B.getJet(0).Pt(), w);
      h_pt_jet1->Fill(B.getJet(1).Pt(), w);
      h_eta_jet0->Fill(B.getJet(0).Eta(), w);
      h_eta_jet1->Fill(B.getJet(1).Eta(), w);
      h_phi_jet0->Fill(B.getJet(0).Phi(), w);
      h_phi_jet1->Fill(B.getJet(1).Phi(), w); 
    };

    // Methods - Return a list of all the histograms
    std::vector<TH1*> returnHisto() {
      std::vector<TH1*> histolist;

      // Reconstructed object plots
      histolist.push_back(h_pt); 
      histolist.push_back(h_eta);
      histolist.push_back(h_phi);
      histolist.push_back(h_mass);
      histolist.push_back(h_dR);
      histolist.push_back(h_dPhi);
      
      // Jet plots
      histolist.push_back(h_pt_jet0); histolist.push_back(h_pt_jet1);
      histolist.push_back(h_eta_jet0); histolist.push_back(h_eta_jet1);
      histolist.push_back(h_phi_jet0); histolist.push_back(h_phi_jet1);
      return histolist;
    }
    
  protected:
    
    // Variables
    TString m_name;
    
    // Histograms - Reconstructed Object
    TH1D* h_pt;
    TH1D* h_eta;
    TH1D* h_phi;
    TH1D* h_mass;
    TH1D* h_dR;
    TH1D* h_dPhi;

    // Histograms - Jets used for Reconstruction
    TH1D* h_pt_jet0; TH1D* h_pt_jet1; TH1D* h_pt_jet2;
    TH1D* h_eta_jet0; TH1D* h_eta_jet1; TH1D* h_eta_jet2;
    TH1D* h_phi_jet0; TH1D* h_phi_jet1; TH1D* h_phi_jet2;
};

/******************************************************************************
* JetPlots - all plots related to jets                                        *
******************************************************************************/
class JetPlots
{
  public:
    
    // Constructor
    JetPlots(TString name) : m_name(name) {
      
      // Initialize the general plots
      h_nJet = new TH1D(name + "_nJet", "", 14, -0.5, 13.5);
      h_pt = new TH1D(name + "_pt", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_eta = new TH1D(name + "_eta", "", NBIN_ETA, X_ETA[0], X_ETA[1]);
      h_phi = new TH1D(name + "_phi", "", NBIN_PHI, X_PHI[0], X_PHI[1]);
      h_CSV = new TH1D(name + "_CSV", "", 100, 0, 1);
      h_CvL = new TH1D(name + "_CvL", "", 100, 0, 1);

      // Initialize the leading jet plots
      h_pt_jet0 = new TH1D(name + "_pt_jet0", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_pt_jet1 = new TH1D(name + "_pt_jet1", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_pt_jet2 = new TH1D(name + "_pt_jet2", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_pt_jet3 = new TH1D(name + "_pt_jet3", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_eta_jet0 = new TH1D(name + "_eta_jet0", "", NBIN_ETA, X_ETA[0], X_ETA[1]);
      h_eta_jet1 = new TH1D(name + "_eta_jet1", "", NBIN_ETA, X_ETA[0], X_ETA[1]);
      h_eta_jet2 = new TH1D(name + "_eta_jet2", "", NBIN_ETA, X_ETA[0], X_ETA[1]);
      h_eta_jet3 = new TH1D(name + "_eta_jet3", "", NBIN_ETA, X_ETA[0], X_ETA[1]);
      h_phi_jet0 = new TH1D(name + "_phi_jet0", "", NBIN_PHI, X_PHI[0], X_PHI[1]);
      h_phi_jet1 = new TH1D(name + "_phi_jet1", "", NBIN_PHI, X_PHI[0], X_PHI[1]);
      h_phi_jet2 = new TH1D(name + "_phi_jet2", "", NBIN_PHI, X_PHI[0], X_PHI[1]);
      h_phi_jet3 = new TH1D(name + "_phi_jet3", "", NBIN_PHI, X_PHI[0], X_PHI[1]);

      // Initialize the tagging plots
      h_nB_loose = new TH1D(name + "_nB_loose", "", 10, -0.5, 9.5);
      h_nB_medium = new TH1D(name + "_nB_medium", "", 10, -0.5, 9.5);
      h_nC_loose = new TH1D(name + "_nC_loose", "", 10, -0.5, 9.5);
      h_nC_medium = new TH1D(name + "_nC_medium", "", 10, -0.5, 9.5);
    };

    // Methods - Fill all the histograms
    void Fill(std::vector<JetObj> jets, float w=1.) {

      h_nJet->Fill(jets.size(), w);
      
      // Fill the plots related to ALL jets
      int nBl = 0, nBm = 0;
      int nCl = 0, nCm = 0;

      for (auto it : jets) {
        h_pt->Fill(it.Pt(), w);
        h_eta->Fill(it.Eta(), w);
        h_phi->Fill(it.Phi(), w);
  
        float csv = it.m_deepCSV; h_CSV->Fill(csv, w);
        float cvl = it.m_deepCvL; h_CvL->Fill(cvl, w);
        
        if (csv > CUTS.Get<float>("btag_looseWP")) nBl++;
        if (csv > CUTS.Get<float>("btag_mediumWP")) nBm++;
        if (cvl > CUTS.Get<float>("ctag_looseWP")) nCl++;
        if (cvl > CUTS.Get<float>("ctag_mediumWP")) nCm++;
      }//end-for

      h_nB_loose->Fill(nBl, w); h_nB_medium->Fill(nBm, w);
      h_nC_loose->Fill(nCl, w); h_nC_medium->Fill(nCm, w);

      // Fill the leading jet plots
      //std::sort(jets.begin(), jets.end(), std::greater<JetObj>());
      std::sort(jets.begin(), jets.end(), JetObj::JetCompPt());
      if (jets.size() > 0) {  // Leading Jet
        h_pt_jet0->Fill(jets[0].Pt(), w);
        h_eta_jet0->Fill(jets[0].Eta(), w);
        h_phi_jet0->Fill(jets[0].Phi(), w);
      }
      if (jets.size() > 1) {  // Sub-leading jet
        h_pt_jet1->Fill(jets[1].Pt(), w);
        h_eta_jet1->Fill(jets[1].Eta(), w);
        h_phi_jet1->Fill(jets[1].Phi(), w);
      }
      if (jets.size() > 2) {  // Sub-sub-leading jet
        h_pt_jet2->Fill(jets[2].Pt(), w);
        h_eta_jet2->Fill(jets[2].Eta(), w);
        h_phi_jet2->Fill(jets[2].Phi(), w);
      }
      if (jets.size() > 3) {  // Sub^(3) leading jet
        h_pt_jet3->Fill(jets[3].Pt(), w);
        h_eta_jet3->Fill(jets[3].Eta(), w);
        h_phi_jet3->Fill(jets[3].Phi(), w);
      }

    };

    // Methods - Return a list of all the histograms.
    std::vector<TH1*> returnHisto() {
      std::vector<TH1*> histolist;
     
      histolist.push_back(h_nJet); histolist.push_back(h_pt);
      histolist.push_back(h_eta);  histolist.push_back(h_phi);
      histolist.push_back(h_CSV);  histolist.push_back(h_CvL);

      histolist.push_back(h_pt_jet0); histolist.push_back(h_pt_jet1);
      histolist.push_back(h_pt_jet2); histolist.push_back(h_pt_jet3);
      histolist.push_back(h_eta_jet0); histolist.push_back(h_eta_jet1);
      histolist.push_back(h_eta_jet2); histolist.push_back(h_eta_jet3);
      histolist.push_back(h_phi_jet0); histolist.push_back(h_phi_jet1);
      histolist.push_back(h_phi_jet2); histolist.push_back(h_phi_jet3);

      histolist.push_back(h_nB_loose); histolist.push_back(h_nB_medium);
      histolist.push_back(h_nC_loose); histolist.push_back(h_nC_medium);      

      return histolist;
    };

  protected:
  
    // Variables
    TString m_name;

    // Histograms - General
    TH1D* h_nJet;
    TH1D* h_pt;
    TH1D* h_eta;
    TH1D* h_phi;
    TH1D* h_CSV;
    TH1D* h_CvL;

    // Histograms - Leading jets
    TH1D* h_pt_jet0;  TH1D* h_pt_jet1;  TH1D* h_pt_jet2;  TH1D* h_pt_jet3;
    TH1D* h_eta_jet0; TH1D* h_eta_jet1; TH1D* h_eta_jet2; TH1D* h_eta_jet3;
    TH1D* h_phi_jet0; TH1D* h_phi_jet1; TH1D* h_phi_jet2; TH1D* h_phi_jet3;

    // Histograms - Tagging
    TH1D* h_nB_loose; TH1D* h_nB_medium;
    TH1D* h_nC_loose; TH1D* h_nC_medium;
};
 
/******************************************************************************
* VH Plots - all plots related to VH (ZH) events                              *
******************************************************************************/
class VHPlots
{
  public:
    
    // Constructor
    VHPlots(TString name) : m_name(name) {

      // Plots related to MET
      h_MET = new TH1D(name + "_MET", "", 300, 0, 300);

      // Plots related to jets
      
      // Plots related to bosons / reconstructed object
      h_Z = new BosonPlots(name + "_Z");
      h_H = new BosonPlots(name + "_H");
      h_dPhi_HZ = new TH1D(name + "_dPhi_HZ", "", NBIN_PHI, X_PHI[0], X_PHI[1]);
      h_dR_HZ = new TH1D(name + "_dR_HZ", "", NBIN_DR, X_DR[0], X_DR[1]);

      // Plots related to Mass-Matching
      h_DHZ0 = new TH1D(name + "_DHZ0", "", NBIN_DH, X_DH[0], X_DH[1]);
      h_DHZ1 = new TH1D(name + "_DHZ1", "", NBIN_DH, X_DH[0], X_DH[1]);
      h_DHZ2 = new TH1D(name + "_DHZ2", "", NBIN_DH, X_DH[0], X_DH[1]);
      h_dH = new TH1D(name + "_dH", "", NBIN_DH, X_DH[0], X_DH[1]);
      h_MH_v_MZ = new TH2D(name + "_MH_v_MZ", "", 200, 0, 200, 200, 0, 200);
    };

    // Methods - Fill the histograms related to Z & H objects
    void FillVH(ZObj& Z, HObj& H, float w=1.) {

      // Fill the masses
      h_MH_v_MZ->Fill(H.M(), Z.M(), w);
 
      // Fill the histograms related to Z & H plots.
      h_Z->Fill(Z, w); h_H->Fill(H, w);
      h_dPhi_HZ->Fill(Z.m_lvec.DeltaPhi(H.m_lvec), w);
      h_dR_HZ->Fill(Z.m_lvec.DeltaR(H.m_lvec), w);

    };

    // Methods - Fill the histograms related to MET
    void FillMET(float MET, float w=1.) {
      h_MET->Fill(MET, w);
    };

    // Methods - Return a list of all the histograms.
    std::vector<TH1*> returnHisto() {
      std::vector<TH1*> histolist;

      // MET-related plots
      histolist.push_back(h_MET);

      // Jet-related plots
      
      // Boson-related plots
      histolist.push_back(h_dPhi_HZ); histolist.push_back(h_dR_HZ);
      std::vector<TH1*> Zlist = h_Z->returnHisto();
      for (size_t i=0; i<Zlist.size();i++) histolist.push_back(Zlist[i]);
      std::vector<TH1*> Hlist = h_H->returnHisto();
      for (size_t i=0; i<Hlist.size();i++) histolist.push_back(Hlist[i]);
      
      // Mass-Matching-Related plots
      histolist.push_back(h_DHZ0); histolist.push_back(h_DHZ1);
      histolist.push_back(h_DHZ2); histolist.push_back(h_dH);
      histolist.push_back(h_MH_v_MZ);

      return histolist;
    };

  protected:

    // Variables
    TString m_name;

    // MET Plots
    TH1D* h_MET;

    // Reconstructed Boson Plots
    BosonPlots *h_Z;
    BosonPlots *h_H;
    TH1D* h_dPhi_HZ;
    TH1D* h_dR_HZ;

    // Mass-Matching Plots
    TH1D* h_DHZ0;    // D1 values (closest pair)
    TH1D* h_DHZ1;    // D2 values (middle pair)
    TH1D* h_DHZ2;    // D3 values (farthest pair)
    TH1D* h_dH;      // | D1 - D2 |
    TH2D* h_MH_v_MZ;

};

#endif
