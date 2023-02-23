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
#include "TMatrixD.h"
#include "TMatrixDEigen.h"
#include "TVectorD.h"

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

const unsigned NBIN_DR = 60;
const float X_DR[2] = {0, 6.0};

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

      h_dR_Bj0 = new TH1D(name + "_dR_Bj0", "", NBIN_DR, X_DR[0], X_DR[1]);
      h_dR_Bj1 = new TH1D(name + "_dR_Bj1", "", NBIN_DR, X_DR[0], X_DR[1]);

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

      h_dR_Bj0->Fill(B.m_lvec.DeltaR(B.getJet(0).m_lvec));
      h_dR_Bj1->Fill(B.m_lvec.DeltaR(B.getJet(1).m_lvec));

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

      histolist.push_back(h_dR_Bj0); histolist.push_back(h_dR_Bj1);

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
    TH1D* h_dR_Bj0;
    TH1D* h_dR_Bj1;

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
      h_CvB = new TH1D(name + "_CvB", "", 100, 0, 1);

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
      h_nBoth_loose = new TH1D(name + "_nBoth_loose", "", 10, -0.5, 9.5);
      h_nBoth_medium = new TH1D(name + "_nBoth_medium", "", 10, -0.5, 9.5);

      h_pt_ljets = new TH1D(name + "_pt_ljets", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_pt_ljet0 = new TH1D(name + "_pt_ljet0", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_pt_ljet1 = new TH1D(name + "_pt_ljet1", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_pt_ljet2 = new TH1D(name + "_pt_ljet2", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_pt_ljet3 = new TH1D(name + "_pt_ljet3", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_pt_bjets = new TH1D(name + "_pt_bjets", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_pt_bjet0 = new TH1D(name + "_pt_bjet0", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_pt_bjet1 = new TH1D(name + "_pt_bjet1", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_pt_bjet2 = new TH1D(name + "_pt_bjet2", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_pt_bjet3 = new TH1D(name + "_pt_bjet3", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_pt_cjets = new TH1D(name + "_pt_cjets", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_pt_cjet0 = new TH1D(name + "_pt_cjet0", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_pt_cjet1 = new TH1D(name + "_pt_cjet1", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_pt_cjet2 = new TH1D(name + "_pt_cjet2", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_pt_cjet3 = new TH1D(name + "_pt_cjet3", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
    };

    // Methods - Fill all the histograms
    void Fill(std::vector<JetObj> jets, float w=1.) {

      h_nJet->Fill(jets.size(), w);
      
      // Fill the plots related to ALL jets
      int nBl = 0, nBm = 0;
      int nCl = 0, nCm = 0;
      int nBothL = 0, nBothM = 0;
      for (auto it : jets) {
        h_pt->Fill(it.Pt(), w);
        h_eta->Fill(it.Eta(), w);
        h_phi->Fill(it.Phi(), w);
  
        float csv = it.m_deepCSV; h_CSV->Fill(csv, w);
        float cvl = it.m_deepCvL; h_CvL->Fill(cvl, w);
        float cvb = it.m_deepCvB; h_CvB->Fill(cvb, w);
        int nL = 0, nM = 0;
        if (csv > CUTS.Get<float>("BvL_looseWP_deepJet")){ nBl++; nL++; }
        if (csv > CUTS.Get<float>("BvL_mediumWP_deepJet")){ nBm++; nM++; }
        if (cvl > CUTS.Get<float>("CvL_looseWP_deepJet") &&
           cvb > CUTS.Get<float>("CvB_looseWP_deepJet")){ nCl++; nL++; }
        if (cvl > CUTS.Get<float>("CvL_mediumWP_deepJet") &&
           cvb > CUTS.Get<float>("CvB_mediumWP_deepJet")){ nCm++; nM++; }

        if (nL >= 2) nBothL++;
        if (nM >= 2) nBothM++;

      }//end-for

      h_nB_loose->Fill(nBl, w); h_nB_medium->Fill(nBm, w);
      h_nC_loose->Fill(nCl, w); h_nC_medium->Fill(nCm, w);
      h_nBoth_loose->Fill(nBothL, w); h_nBoth_medium->Fill(nBothM, w);

      float BvL_CUT = CUTS.Get<float>("BvL_mediumWP_deepJet");
      float CvL_CUT = CUTS.Get<float>("CvL_mediumWP_deepJet");
      float CvB_CUT = CUTS.Get<float>("CvB_mediumWP_deepJet");

      // Fill the leading jet plots
      //std::sort(jets.begin(), jets.end(), std::greater<JetObj>());
      std::sort(jets.begin(), jets.end(), JetObj::JetCompPt());
      if (jets.size() > 0) {  // Leading Jet
        h_pt_jet0->Fill(jets[0].Pt(), w);
        h_eta_jet0->Fill(jets[0].Eta(), w);
        h_phi_jet0->Fill(jets[0].Phi(), w);
        
        // Check to see which tagging we pass.
        float bvl = jets[0].m_deepCSV; float cvl = jets[0].m_deepCvL;
        float cvb = jets[0].m_deepCvB; float jPT = jets[0].Pt();
        if (bvl > BvL_CUT) {  // b-jet
          h_pt_bjets->Fill(jPT, w);
          h_pt_bjet0->Fill(jPT, w);
        }
        else if (cvl > CvL_CUT && cvb > CvB_CUT) { // c-jet
          h_pt_cjets->Fill(jPT, w);
          h_pt_cjet0->Fill(jPT, w);
        }
        else { // l-jet
          h_pt_ljets->Fill(jPT, w);
          h_pt_ljet0->Fill(jPT, w);
        }
      }
      if (jets.size() > 1) {  // Sub-leading jet
        h_pt_jet1->Fill(jets[1].Pt(), w);
        h_eta_jet1->Fill(jets[1].Eta(), w);
        h_phi_jet1->Fill(jets[1].Phi(), w);

        // Check to see which tagging we pass.
        float bvl = jets[1].m_deepCSV; float cvl = jets[1].m_deepCvL;
        float cvb = jets[1].m_deepCvB; float jPT = jets[1].Pt();
        if (bvl > BvL_CUT) {  // b-jet
          h_pt_bjets->Fill(jPT, w);
          h_pt_bjet1->Fill(jPT, w);
        }
        else if (cvl > CvL_CUT && cvb > CvB_CUT) { // c-jet
          h_pt_cjets->Fill(jPT, w);
          h_pt_cjet1->Fill(jPT, w);
        }
        else { // l-jet
          h_pt_ljets->Fill(jPT, w);
          h_pt_ljet1->Fill(jPT, w);
        }

      }
      if (jets.size() > 2) {  // Sub-sub-leading jet
        h_pt_jet2->Fill(jets[2].Pt(), w);
        h_eta_jet2->Fill(jets[2].Eta(), w);
        h_phi_jet2->Fill(jets[2].Phi(), w);

        // Check to see which tagging we pass.
        float bvl = jets[2].m_deepCSV; float cvl = jets[2].m_deepCvL;
        float cvb = jets[2].m_deepCvB; float jPT = jets[2].Pt();
        if (bvl > BvL_CUT) {  // b-jet
          h_pt_bjets->Fill(jPT, w);
          h_pt_bjet2->Fill(jPT, w);
        }
        else if (cvl > CvL_CUT && cvb > CvB_CUT) { // c-jet
          h_pt_cjets->Fill(jPT, w);
          h_pt_cjet2->Fill(jPT, w);
        }
        else { // l-jet
          h_pt_ljets->Fill(jPT, w);
          h_pt_ljet2->Fill(jPT, w);
        }

      }
      if (jets.size() > 3) {  // Sub^(3) leading jet
        h_pt_jet3->Fill(jets[3].Pt(), w);
        h_eta_jet3->Fill(jets[3].Eta(), w);
        h_phi_jet3->Fill(jets[3].Phi(), w);

        // Check to see which tagging we pass.
        float bvl = jets[3].m_deepCSV; float cvl = jets[3].m_deepCvL;
        float cvb = jets[3].m_deepCvB; float jPT = jets[3].Pt();
        if (bvl > BvL_CUT) {  // b-jet
          h_pt_bjets->Fill(jPT, w);
          h_pt_bjet3->Fill(jPT, w);
        }
        else if (cvl > CvL_CUT && cvb > CvB_CUT) { // c-jet
          h_pt_cjets->Fill(jPT, w);
          h_pt_cjet3->Fill(jPT, w);
        }
        else { // l-jet
          h_pt_ljets->Fill(jPT, w);
          h_pt_ljet3->Fill(jPT, w);
        }

      }

    };

    // Methods - Return a list of all the histograms.
    std::vector<TH1*> returnHisto() {
      std::vector<TH1*> histolist;
     
      histolist.push_back(h_nJet); histolist.push_back(h_pt);
      histolist.push_back(h_eta);  histolist.push_back(h_phi);
      histolist.push_back(h_CSV);  histolist.push_back(h_CvL);
      histolist.push_back(h_CvB);

      histolist.push_back(h_pt_jet0); histolist.push_back(h_pt_jet1);
      histolist.push_back(h_pt_jet2); histolist.push_back(h_pt_jet3);
      histolist.push_back(h_eta_jet0); histolist.push_back(h_eta_jet1);
      histolist.push_back(h_eta_jet2); histolist.push_back(h_eta_jet3);
      histolist.push_back(h_phi_jet0); histolist.push_back(h_phi_jet1);
      histolist.push_back(h_phi_jet2); histolist.push_back(h_phi_jet3);

      histolist.push_back(h_nB_loose); histolist.push_back(h_nB_medium);
      histolist.push_back(h_nC_loose); histolist.push_back(h_nC_medium);      
      histolist.push_back(h_nBoth_loose); histolist.push_back(h_nBoth_medium);

      histolist.push_back(h_pt_ljets); histolist.push_back(h_pt_ljet0);
      histolist.push_back(h_pt_ljet1); histolist.push_back(h_pt_ljet2);
      histolist.push_back(h_pt_ljet3);
      histolist.push_back(h_pt_bjets); histolist.push_back(h_pt_bjet0);
      histolist.push_back(h_pt_bjet1); histolist.push_back(h_pt_bjet2);
      histolist.push_back(h_pt_bjet3);
      histolist.push_back(h_pt_cjets); histolist.push_back(h_pt_cjet0);
      histolist.push_back(h_pt_cjet1); histolist.push_back(h_pt_cjet2);
      histolist.push_back(h_pt_cjet3);

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
    TH1D* h_CvB;

    // Histograms - Leading jets
    TH1D* h_pt_jet0;  TH1D* h_pt_jet1;  TH1D* h_pt_jet2;  TH1D* h_pt_jet3;
    TH1D* h_eta_jet0; TH1D* h_eta_jet1; TH1D* h_eta_jet2; TH1D* h_eta_jet3;
    TH1D* h_phi_jet0; TH1D* h_phi_jet1; TH1D* h_phi_jet2; TH1D* h_phi_jet3;

    // Histograms - Tagging
    TH1D* h_nB_loose; TH1D* h_nB_medium;
    TH1D* h_nC_loose; TH1D* h_nC_medium;
    TH1D* h_nBoth_loose; TH1D* h_nBoth_medium;

    // Histograms - pT with tags
    TH1D* h_pt_ljets; TH1D* h_pt_bjets; TH1D* h_pt_cjets;
    TH1D* h_pt_ljet0; TH1D* h_pt_bjet0; TH1D* h_pt_cjet0;
    TH1D* h_pt_ljet1; TH1D* h_pt_bjet1; TH1D* h_pt_cjet1;
    TH1D* h_pt_ljet2; TH1D* h_pt_bjet2; TH1D* h_pt_cjet2;
    TH1D* h_pt_ljet3; TH1D* h_pt_bjet3; TH1D* h_pt_cjet3;
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
      h_DHZ = new TH1D(name + "_DHZ", "", NBIN_DH, X_DH[0], X_DH[1]);
      h_DHZ0 = new TH1D(name + "_DHZ0", "", NBIN_DH, X_DH[0], X_DH[1]);
      h_DHZ1 = new TH1D(name + "_DHZ1", "", NBIN_DH, X_DH[0], X_DH[1]);
      h_DHZ2 = new TH1D(name + "_DHZ2", "", NBIN_DH, X_DH[0], X_DH[1]);
      h_dH = new TH1D(name + "_dH", "", NBIN_DH, X_DH[0], X_DH[1]);
      h_MH_v_MZ = new TH2D(name + "_MH_v_MZ", "", 200, 0, 200, 200, 0, 200);
      h_MH_v_MZ_all = new TH2D(name + "_MH_v_MZ_all", "", 200, 0, 200, 200, 0, 200);

      h_MZ_v_flav = new TH2D(name + "_MZ_v_flav", "", 20, 0, 200, 15, 0, 15);
      h_dR_v_flav = new TH2D(name + "_dR_v_flav", "", 20, 0, 20, 15, 0, 15);

      h_MH_v_dR = new TH2D(name + "_MH_v_dR", "", 20, 0, 200, 60, 0, 6);
      h_MZ_v_dR = new TH2D(name + "_MZ_v_dR", "", 20, 0, 200, 60, 0, 6);

      h_Sphericity = new TH1D(name + "_Sphericity", "", 100, 0, 1);
      h_Aplanarity = new TH1D(name + "_Aplanarity", "", 100, 0, 1);
    };

    // Methods - Fill the histograms related to checking for g->bb
    void FillGluCheck(ZObj& Z, float w=1.) {
      
      // Get the values we're interested in.
      int sumFlav = Z.getJet(0).m_flav + Z.getJet(1).m_flav;
      int dR = Z.DeltaR();
      int mass = Z.M();
  
      // Fill the plots
      h_MZ_v_flav->Fill(mass, sumFlav, w);
      h_dR_v_flav->Fill(dR, sumFlav, w);
        
    };

    // Methods - Fill the histograms related to Z & H objects
    void FillVH(ZObj& Z, HObj& H, float w=1.) {

      // Fill the masses
      h_MH_v_MZ->Fill(H.M(), Z.M(), w);
 
      // Fill the histograms related to Z & H plots.
      h_Z->Fill(Z, w); h_H->Fill(H, w);
      h_dPhi_HZ->Fill(Z.m_lvec.DeltaPhi(H.m_lvec), w);
      h_dR_HZ->Fill(Z.m_lvec.DeltaR(H.m_lvec), w);

      h_MZ_v_dR->Fill(Z.M(), Z.DeltaR(), w);
      h_MH_v_dR->Fill(H.M(), H.DeltaR(), w);

      // Make a list of the jets and determine the sphericity.
      std::vector<JetObj> jets;
      jets.push_back(Z.getJet(0)); jets.push_back(Z.getJet(1));
      jets.push_back(H.getJet(0)); jets.push_back(H.getJet(1));
      DetermineSphericity(jets, w);
    };

    void DetermineSphericity(std::vector<JetObj>& jets, float w=1.) {

      // Convert the jet information into a useful format
      // for calculations and analysis.
      float jetVecs[jets.size()][3]; 
      float jetMags[jets.size()];
      for (size_t i = 0; i < jets.size(); i++) {
        jetVecs[i][0] = jets[i].GetPComp(0);
        jetVecs[i][1] = jets[i].GetPComp(1);
        jetVecs[i][2] = jets[i].GetPComp(2);
        jetMags[i] = jets[i].GetPComp(3);
      }

      // Calculate the Sphericity tensor.
      TMatrixD sTensor(3,3); TArrayD data(9);
      for (Int_t b = 0; b < 3; b++) {
        for (Int_t a = 0; a < 3; a++) {

          Int_t idx = a + b * 3;
          float num = 0., denom = 0.;

          // numerator = sum(p_i^a * p_i^b)
          // denominator = sum(p_i^2) 
          for (size_t i = 0; i < jets.size(); i++) {
            num += jetVecs[i][a] * jetVecs[i][b];
            denom += jetMags[i] * jetMags[i];
          } 

          float S_ab = num / denom;
          data[idx] = S_ab;
        }
      }
      sTensor.SetMatrixArray(data.GetArray());

      // Get the eigenvalues from this result
      // by diagonalizing the matrix.
      const TMatrixDEigen eigen(sTensor);
      const TVectorD eigenVal = eigen.GetEigenValuesRe();
      //Int_t nElements = eigenVal.GetNoElements();

      // NOTE: We need sphericity to be based on the smaller 
      // two eigenvalues and the aplanarity on the largest.
      std::vector<float> eigenvalues {
        (float)eigenVal[0], (float)eigenVal[1], (float)eigenVal[2]
      };
      std::sort(eigenvalues.begin(), eigenvalues.end(), std::greater<float>());      

      //float eigensum = eigenvalues[0] + eigenvalues[1] + eigenvalues[2];
      //std::cout << "l1 + l2 + l3 = " << eigensum << std::endl;

      // Determine the sphericity & aplanarity.
      float sphericity = 1.5 * (eigenvalues[1] + eigenvalues[2]);
      float aplanarity = 1.5 * (eigenvalues[2]);

      // Fill the proper histograms.
      h_Sphericity->Fill(sphericity, w);
      h_Aplanarity->Fill(aplanarity, w);
    }
   

    // Methods - Fill the histograms related to DHZ algorithm
    void FillAlgo(std::vector<DHZObj>& dObj, float w=1.) {

      // Fill plots related to all DHZ objects
      for (auto it : dObj) {
        h_DHZ->Fill(it.m_d, w); // Distances
        h_MH_v_MZ_all->Fill(it.HM(), it.ZM(), w); // Masses 
      }

      // Fill plots related to the leading pairs
      h_DHZ0->Fill(dObj[0].m_d, w);
      if (dObj.size() >= 2) {
        float dH = abs(dObj[0].m_d - dObj[1].m_d);
        h_dH->Fill(dH, w);
        h_DHZ1->Fill(dObj[1].m_d, w);
      }
      if (dObj.size() >= 3) h_DHZ2->Fill(dObj[2].m_d, w);

    }

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
      histolist.push_back(h_DHZ);
      histolist.push_back(h_DHZ0); histolist.push_back(h_DHZ1);
      histolist.push_back(h_DHZ2); histolist.push_back(h_dH);
      histolist.push_back(h_MH_v_MZ);
      histolist.push_back(h_MH_v_MZ_all);

      histolist.push_back(h_MZ_v_flav);
      histolist.push_back(h_dR_v_flav);

      histolist.push_back(h_MH_v_dR);
      histolist.push_back(h_MZ_v_dR);

      histolist.push_back(h_Sphericity);
      histolist.push_back(h_Aplanarity);

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
    TH1D* h_DHZ;     // All D values
    TH1D* h_DHZ0;    // D1 values (closest pair)
    TH1D* h_DHZ1;    // D2 values (middle pair)
    TH1D* h_DHZ2;    // D3 values (farthest pair)
    TH1D* h_dH;      // | D1 - D2 |
    TH2D* h_MH_v_MZ;
    TH2D* h_MH_v_MZ_all;

    TH2D* h_MZ_v_flav;
    TH2D* h_dR_v_flav;
    TH2D* h_MZ_v_dR;
    TH2D* h_MH_v_dR;

    // Sphericity Plots
    TH1D* h_Sphericity;
    TH1D* h_Aplanarity;
};

/******************************************************************************
* EffPlots - plotes related to efficiency of MC Truth matching                *
******************************************************************************/
class EffPlots
{
  public:

    // Constructor
    EffPlots(TString name) : m_name(name) {
    
      // Efficiency plot
      h_eff_cutflow = new TH1D(name + "_eff_CutFlow", "", 5, 0, 5);
      h_eff_cutflow->GetXaxis()->SetBinLabel(1, "Total");
      h_eff_cutflow->GetXaxis()->SetBinLabel(2, "b-match #1");
      h_eff_cutflow->GetXaxis()->SetBinLabel(3, "b-match #2");
      h_eff_cutflow->GetXaxis()->SetBinLabel(4, "c-match #1");
      h_eff_cutflow->GetXaxis()->SetBinLabel(5, "c-match #2");

      // Comparison plots
      h_dR_b = new TH1D(name + "_dR_bjets", "", 80, -0.5, 7.5);
      h_dR_c = new TH1D(name + "_dR_cjets", "", 80, -0.5, 7.5);
      //h_dR_c_all = new TH1D(name + "_dR_cjets_allCombo", 80, -0.5, 7.5);
      //h_dR_b_all = new TH1D(name + "_dR_bjets_allCombo", 80, -0.5, 7.5);
    }

    void Fill(ZObj& Z, HObj& H, std::vector<JetObj> bjets, std::vector<JetObj> cjets, float w=1.) {

      h_eff_cutflow->Fill(0.5, w);

      // Pull values so we have them for reference
      std::vector<JetObj> Hjets = H.m_jets;
      std::vector<JetObj> Zjets = Z.m_jets;
 
      // Fill the proper physics object histograms.
      // == General Jet Plots can go here ==

      // We do not know which b goes to which jet or which c goes to 
      // which jet, so we have to try each combination.    
      std::sort(Hjets.begin(), Hjets.end(), JetObj::JetCompPt());
      std::sort(Zjets.begin(), Zjets.end(), JetObj::JetCompPt());

      bool foundMatches_b[] = { false, false };
      bool foundMatches_c[] = { false, false };

      int idMatches_b[] = { -1, -1 };
      int idMatches_c[] = { -1, -1 };

      float separations_b[] = { 99999.0, 99999.0 };
      float separations_c[] = { 99999.0, 99999.0 };

      float lowestSep_b[] = { 99999.0, 99999.0 };
      float lowestSep_c[] = { 99999.0, 99999.0 };

      for (int i = 0; i < 2; ++i) {
 
        // get the i'th Z jet & compare it to both MC jets
        for (int j = 0; j < 2; ++j) {

          float dR = Zjets[i].m_lvec.DeltaR(bjets[j].m_lvec);

          // If our jets are separated by less than our cut and 
          // we have not found a match (OR it is closer than the
          // jet we already found), mark it as a match.
          if (dR < dR_cut) {
            if (!foundMatches_b[i] || dR < separations_b[i]) {
              idMatches_b[i] = j;
              separations_b[i] = dR;
              foundMatches_b[i] = true;
            }
          }
          if (dR < lowestSep_b[i]) lowestSep_b[i] = dR;

        }//end-j

        // Get the i'th H jet & compare it to both MC jets
        for (int j = 0; j < 2; ++j) {
        
          float dR = Hjets[i].m_lvec.DeltaR(cjets[j].m_lvec);

          // If our jets are separated by less than our cut and
          // we have not found a match (OR it is closer than the
          // jet we already found), mark it as a match.
          if (dR < dR_cut) {
            if (!foundMatches_c[i] || dR < separations_c[i]) {
              idMatches_c[i] = j;
              separations_c[i] = dR;
              foundMatches_c[i] = true;
            } 
          }
          if (dR < lowestSep_c[i]) lowestSep_c[i] = dR;

        }   

      }//end-i

      for (int i = 0; i < 2; ++i) {
        h_dR_b->Fill(lowestSep_b[i], w);
        h_dR_c->Fill(lowestSep_c[i], w);
      }

      // Use these values to say whether or not we've actually passed
      // the proper jet matches.
      if (foundMatches_b[0]) {
        
        h_eff_cutflow->Fill(1.5, w); // passed b-match #1
        
        // For the second jet, make sure we're not matching to the same jet.
        if (foundMatches_b[1] && idMatches_b[0] != idMatches_b[1]) {
          h_eff_cutflow->Fill(2.5, w); // passed b-match #2
        }        
      }

      if (foundMatches_c[0]) {
       
        h_eff_cutflow->Fill(3.5, w); // passed c-match #1
        
        // For the second jet, make sure we're not matching to the same jet.
        if (foundMatches_c[1] && idMatches_c[0] != idMatches_c[1]) {
          h_eff_cutflow->Fill(4.5, w); // passed c-match #2
        }

      }

    }//end-Fill

    // Methods - Return a list of all the histograms.
    std::vector<TH1*> returnHisto() {
      std::vector<TH1*> histolist;
      histolist.push_back(h_eff_cutflow);
      histolist.push_back(h_dR_b);
      histolist.push_back(h_dR_c); 
      return histolist;
    };


  protected:
    
    // Variables
    TString m_name;
    Float_t dR_cut = 0.5;

    // Plots
    TH1D* h_eff_cutflow;
    TH1D* h_dR_b;
    TH1D* h_dR_c;
};
#endif
