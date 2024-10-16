#ifndef Plots_cxx
#define Plots_cxx

/******************************************************************************
########  ##        #######  ########  ######  
##     ## ##       ##     ##    ##    ##    ## 
##     ## ##       ##     ##    ##    ##       
########  ##       ##     ##    ##     ######  
##        ##       ##     ##    ##          ## 
##        ##       ##     ##    ##    ##    ## 
##        ########  #######     ##     ######  
*******************************************************************************

Description: This is a class that lets us lump plots together in useful groups
             so we can easily handle massive numbers of plots.

******************************************************************************/

// == [10] Included Libraries =================================================

// Standard C++ classes
#include <bits/stdc++.h>

// ROOT libraries/classes
#include "TString.h"          // ROOT string class
#include "TH1.h"              // ROOT histogram classes
#include "TH1D.h"             // " " "
#include "TMath.h"            // ROOT Math class
#include "TLorentzVector.h"   // ROOT 4-vector
#include <TTreeReaderArray.h> // ROOT Tree reader
#include "TMatrixD.h"         // classes for linear algebra
#include "TMatrixDEigen.h"
#include "TVectorD.h"

// Custom classes
#include "Obj.cxx"        // Particle object classes
#include "Global.h"       // Our custom parameters

// == [10] Constants ==========================================================

// These constants define the number of bins and 
// ranges we want for different variables.
const unsigned NBIN_PT_JET = 2000;
const float X_PT_JET[2] = {0.0, 2000.0};

const unsigned NBIN_WEIGHT = 500;
const float X_WEIGHT[2] = {-5.0, 5.0};

const unsigned NBIN_REGRESSION = 200;
const float X_REGRESSION[2] = {0, 2};

const unsigned NBIN_PT_Z = 2000;
const float X_PT_Z[2] = {0, 2000};

const unsigned NBIN_ETA = 500;
const float X_ETA[2] = {-2.5, 2.5};

const unsigned NBIN_PHI = 480;
const float X_PHI[2] = {-4.0, 4.0};

const unsigned NBIN_M_JET = 2000;
const float X_M_JET[2] = {0, 2000};

const unsigned NBIN_M = 2000;
const float X_M[2] = {0, 2000};

const unsigned NBIN_DR = 60;
const float X_DR[2] = {0, 6.0};

const unsigned NBIN_DPHI = 240;
const float X_DPHI[2] = {0, 4.0};

const unsigned NBIN_DH = 200;
const float X_DH[2] = {0, 200.0};

// == [20] Weight Plots =======================================================

/* This class holds a series of plots related to the different
 * event weights. */
class WeightPlots
{
  /* PUBLIC: elements we want easy access to */
  public:
    
    // ============================
    // Constructor & Deconstructor
    // ============================
    WeightPlots(TString name) : m_name(name) 
    {
      h_generator_weight = new TH1D(name + "_generator_weight",
        "", NBIN_WEIGHT, X_WEIGHT[0], X_WEIGHT[1]);
      h_pileup_SF = new TH1D(name + "_pileup_SF",
        "", NBIN_WEIGHT, X_WEIGHT[0], X_WEIGHT[1]);
      h_l1_prefire_weight = new TH1D(name + "_l1_prefire_weight",
        "", NBIN_WEIGHT, X_WEIGHT[0], X_WEIGHT[1]);
      h_trigger_SF = new TH1D(name + "_trigger_SF",
        "", NBIN_WEIGHT, X_WEIGHT[0], X_WEIGHT[1]);
      h_btag_calib = new TH1D(name + "_btag_calib",
        "", NBIN_WEIGHT, X_WEIGHT[0], X_WEIGHT[1]);
      h_ctag_calib = new TH1D(name + "_ctag_calib",
        "", NBIN_WEIGHT, X_WEIGHT[0], X_WEIGHT[1]);
      h_event_weight = new TH1D(name + "_event_weight",
        "", NBIN_WEIGHT, X_WEIGHT[0], X_WEIGHT[1]);
      
      h_generator_weight->Sumw2();
      h_pileup_SF->Sumw2();
      h_l1_prefire_weight->Sumw2(); 
      h_trigger_SF->Sumw2();
      h_btag_calib->Sumw2();
      h_ctag_calib->Sumw2();
      h_event_weight->Sumw2();
    };
    virtual ~WeightPlots() {};

    // ===============
    // Custom Methods
    // ===============

    /* FILL - this method fills our histograms given a particular weight
     *        name and a value to go with it.*/
    void Fill(std::string weight_name, float weight) 
    {
      if (weight_name == "generator")
        h_generator_weight->Fill(weight);
      else if (weight_name == "pileup")
        h_pileup_SF->Fill(weight);
      else if (weight_name == "l1_prefire")
        h_l1_prefire_weight->Fill(weight);
      else if (weight_name == "trigger")
        h_trigger_SF->Fill(weight);
      else if (weight_name == "btag")
        h_btag_calib->Fill(weight);
      else if (weight_name == "ctag")
        h_ctag_calib->Fill(weight);
      else if (weight_name == "event")
        h_event_weight->Fill(weight);
    };
    
    /* RETURN HISTO - return a list of all the histograms in the class.*/
    std::vector<TH1*> returnHisto() 
    {
      std::vector<TH1*> histolist;
      histolist.push_back(h_generator_weight);
      histolist.push_back(h_pileup_SF);
      histolist.push_back(h_l1_prefire_weight);
      histolist.push_back(h_trigger_SF);
      histolist.push_back(h_btag_calib);
      histolist.push_back(h_ctag_calib);
      histolist.push_back(h_event_weight);
      return histolist;
    };    
  
  /* PRIVATE: elements we want kept with access limited */
  protected:
    
    // ==========
    // Variables
    // ==========
    TString m_name;
    
    // ===========
    // Histograms
    // ===========
    TH1D* h_generator_weight;
    TH1D* h_pileup_SF;   
    TH1D* h_l1_prefire_weight;
    TH1D* h_trigger_SF;
    TH1D* h_btag_calib;
    TH1D* h_ctag_calib;
    TH1D* h_event_weight;
};// end WeightPlots class

// == [30] Regression Plots ===================================================

/* This class holds plots related to our regression values. */
class RegressionPlots
{
  
  /* PUBLIC: elements we want easy access to. */
  public:

    // ============================
    // Constructor & Deconstructor
    // ============================
    RegressionPlots(TString name) : m_name(name)
    {
      // Initialize our plots
      h_correction_bJet = new TH1D(name + "_correction_bJet", "",
        NBIN_REGRESSION, X_REGRESSION[0], X_REGRESSION[1]);
      h_correction_cJet = new TH1D(name + "_correction_cJet", "",
        NBIN_REGRESSION, X_REGRESSION[0], X_REGRESSION[1]);
      h_resolution_bJet = new TH1D(name + "_resolution_bJet", "",
        NBIN_REGRESSION, X_REGRESSION[0], X_REGRESSION[1]);
      h_resolution_cJet = new TH1D(name + "_resolution_cJet", "",
        NBIN_REGRESSION, X_REGRESSION[0], X_REGRESSION[1]);
      
      h_correction_bJet->Sumw2();
      h_correction_cJet->Sumw2();
      h_resolution_bJet->Sumw2();
      h_resolution_cJet->Sumw2();
    };
    virtual ~RegressionPlots() {};
    
    // ===============
    // Custom Methods
    // ===============
    /* FILL - this method fills our histograms given a particular weight
     *        name and a value to go with it.*/
    void Fill(std::string weight_name, float weight)
    {
      if (weight_name == "correction_bJet")
        h_correction_bJet->Fill(weight);
      else if (weight_name == "correction_cJet")
        h_correction_cJet->Fill(weight);
      else if (weight_name == "resolution_bJet")
        h_resolution_bJet->Fill(weight);
      else if (weight_name == "resolution_cJet")
        h_resolution_cJet->Fill(weight);
    };

    /* RETURN HISTO - return a list of all the histograms in the class.*/
    std::vector<TH1*> returnHisto()
    {
      std::vector<TH1*> histolist;
      histolist.push_back(h_correction_bJet);
      histolist.push_back(h_correction_cJet);
      histolist.push_back(h_resolution_bJet);
      histolist.push_back(h_resolution_cJet);
      return histolist;
    };


  /* PRIVATE: elements we want to keep with access limited */
  protected:
    
    // ==========
    // Variables
    // ==========
    TString m_name;
    
    // ===========
    // Histograms
    // ===========
    TH1D* h_correction_bJet;
    TH1D* h_correction_cJet;
    TH1D* h_resolution_bJet;
    TH1D* h_resolution_cJet;

};

// == [40] Boson Plots class ==================================================

class BosonPlots
{

  public:
    
    // ===========================
    // Constructor & Deconstrutor
    // ===========================
    BosonPlots(TString name) : m_name(name)
    {
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
      h_jetpt_noJEC = new TH1D(name + "_jetpt_noJEC", "", 300, 0, 300);
      h_jetpt_JEC = new TH1D(name + "_jetpt_JEC", "", 300, 0, 300);
      h_jetmass_noJEC = new TH1D(name + "_jetmass_noJEC", "", 300, 0, 300);
      h_jetmass_JEC = new TH1D(name + "_jetmass_JEC", "", 300, 0, 300);
      
      h_pt->Sumw2();
      h_eta->Sumw2();
      h_phi->Sumw2();
      //h_mass->Sumw2();
      h_dR->Sumw2();
      h_dPhi->Sumw2();
      h_dR_Bj0->Sumw2();
      h_dR_Bj1->Sumw2();
      
      h_pt_jet0->Sumw2();  h_pt_jet1->Sumw2();  h_pt_jet2->Sumw2();
      h_eta_jet0->Sumw2(); h_eta_jet1->Sumw2(); h_eta_jet2->Sumw2();
      h_phi_jet0->Sumw2(); h_phi_jet1->Sumw2(); h_phi_jet2->Sumw2();
      h_jetpt_noJEC->Sumw2();
      h_jetpt_JEC->Sumw2();
      h_jetmass_noJEC->Sumw2();
      h_jetmass_JEC->Sumw2();
    };
    virtual ~BosonPlots() {};

    // ===============
    // Custom Methods
    // ===============
    void Fill(BosonObj& B, float w=1.0) 
    {

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

      // Fill the plots related to jet regression.
      h_jetpt_noJEC->Fill(B.getJet(0).m_pt, w);
      h_jetpt_JEC->Fill(B.getJet(0).m_ptJEC, w);
      h_jetmass_noJEC->Fill(B.getJet(0).m_mass, w);
      h_jetmass_JEC->Fill(B.getJet(0).m_massJEC, w);
 
    };

    std::vector<TH1*> returnHisto()
    {
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

      histolist.push_back(h_jetpt_noJEC);   histolist.push_back(h_jetpt_JEC);
      histolist.push_back(h_jetmass_noJEC); histolist.push_back(h_jetmass_JEC);

      return histolist;
    }
  
  protected:
  
    // ==========
    // Variables
    // ==========
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

    // Histograms - Jet Regressions
    TH1D* h_jetpt_noJEC;
    TH1D* h_jetpt_JEC;
    TH1D* h_jetmass_noJEC;
    TH1D* h_jetmass_JEC;

};//end-BosonPlot

// == [50] VH Plots class =====================================================

class VHPlots
{

  public:
    
    // ============================
    // Constructor & Deconstructor
    // ============================
    VHPlots(TString name) : m_name(name) 
    {
      // Plots related to MET
      h_MET = new TH1D(name + "_MET", "", 300, 0, 300);

      // Plots related to bosons / reconstructed object
      h_Z = new BosonPlots(name + "_Z"); //h_Z->Sumw2();
      h_H = new BosonPlots(name + "_H"); //h_H->Sumw2();
      h_dPhi_HZ = new TH1D(name + "_dPhi_HZ", "", NBIN_PHI, X_PHI[0], X_PHI[1]);
      h_dR_HZ = new TH1D(name + "_dR_HZ", "", NBIN_DR, X_DR[0], X_DR[1]);

      // Plots related to Mass-Matching
      h_DHZ = new TH1D(name + "_DHZ", "", NBIN_DH, X_DH[0], X_DH[1]);
      h_DHZ0 = new TH1D(name + "_DHZ0", "", NBIN_DH, X_DH[0], X_DH[1]);
      h_DHZ1 = new TH1D(name + "_DHZ1", "", NBIN_DH, X_DH[0], X_DH[1]);
      h_DHZ2 = new TH1D(name + "_DHZ2", "", NBIN_DH, X_DH[0], X_DH[1]);
      h_dH = new TH1D(name + "_dH", "", NBIN_DH, X_DH[0], X_DH[1]);
      h_MH_v_MZ = new TH2D(name + "_MH_v_MZ", "", 2000, 0, 2000, 2000, 0, 2000);
      h_MH_v_MZ_all = new TH2D(name + "_MH_v_MZ_all", "", 2000, 0, 2000, 2000, 0, 2000);
      h_MZ_v_flav = new TH2D(name + "_MZ_v_flav", "", 20, 0, 200, 15, 0, 15);
      h_dR_v_flav = new TH2D(name + "_dR_v_flav", "", 20, 0, 20, 15, 0, 15);
      h_MH_v_dR = new TH2D(name + "_MH_v_dR", "", 20, 0, 200, 60, 0, 6);
      h_MZ_v_dR = new TH2D(name + "_MZ_v_dR", "", 20, 0, 200, 60, 0, 6);
      h_Sphericity = new TH1D(name + "_Sphericity", "", 100, 0, 1);
      h_Aplanarity = new TH1D(name + "_Aplanarity", "", 100, 0, 1);
      h_HT = new TH1D(name + "_HT", "", 2000, 0, 2000);
      h_HTmod = new TH1D(name + "_HTmod", "", 2000, 0, 2000);

      h_MET->Sumw2();
      h_dPhi_HZ->Sumw2();
      h_dR_HZ->Sumw2();
      
      h_DHZ->Sumw2(); h_DHZ0->Sumw2(); h_DHZ1->Sumw2(); h_DHZ2->Sumw2();
      h_dH->Sumw2();
      h_MH_v_MZ->Sumw2(); h_MH_v_MZ_all->Sumw2();
      h_MZ_v_flav->Sumw2(); h_dR_v_flav->Sumw2();
      h_MH_v_dR->Sumw2(); h_MZ_v_dR->Sumw2();
      h_Sphericity->Sumw2();
      h_Aplanarity->Sumw2();
      h_HT->Sumw2();
      h_HTmod->Sumw2();
      
    };

    virtual ~VHPlots(){};

    // ===============
    // Custom Methods
    // ===============
    void FillVH(ZObj& Z, HiggsObj& H, float w=1.0)
    {
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

    void DetermineSphericity(std::vector<JetObj>& jets, float w=1.0)
    {
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
    };

    // Methods - Fill the histograms related to MET
    void FillMET(float MET, float w=1.) {
      h_MET->Fill(MET, w);
    };

    void FillHT(float HT, float HTmod=0., float w=1.) {
      h_HT->Fill(HT, w);
      h_HTmod->Fill(HT+HTmod, w);
    }

    // Methods - Return a list of all the histograms.
    std::vector<TH1*> returnHisto() {
      std::vector<TH1*> histolist;

      // MET-related plots
      histolist.push_back(h_MET);
      histolist.push_back(h_HT);
      histolist.push_back(h_HTmod);

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
    TH1D* h_HT;
    TH1D* h_HTmod;

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

};//end-VHPlots

// == [60] JetPlots class =====================================================

class JetPlots
{
  public:
    
    // ============================
    // Constructor & Deconstructor
    // ============================
    JetPlots(TString name) : m_name(name)
    {
      // Initialize the general plots
      h_nJet = new TH1D(name + "_nJet", "", 14, -0.5, 13.5);
      h_pt = new TH1D(name + "_pt", "", NBIN_PT_JET, X_PT_JET[0], X_PT_JET[1]);
      h_eta = new TH1D(name + "_eta", "", NBIN_ETA, X_ETA[0], X_ETA[1]);
      h_phi = new TH1D(name + "_phi", "", NBIN_PHI, X_PHI[0], X_PHI[1]);
      h_CSV = new TH1D(name + "_CSV", "", 100, 0, 1);
      h_CvL = new TH1D(name + "_CvL", "", 100, 0, 1);
      h_CvB = new TH1D(name + "_CvB", "", 100, 0, 1);
      
      h_nJet->Sumw2(); h_pt->Sumw2(); h_eta->Sumw2();
      h_phi->Sumw2(); h_CSV->Sumw2(); h_CvL->Sumw2(); h_CvB->Sumw2();

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
      
      h_pt_jet0->Sumw2(); h_eta_jet0->Sumw2(); h_phi_jet0->Sumw2();
      h_pt_jet1->Sumw2(); h_eta_jet1->Sumw2(); h_phi_jet1->Sumw2();
      h_pt_jet2->Sumw2(); h_eta_jet2->Sumw2(); h_phi_jet2->Sumw2();
      h_pt_jet3->Sumw2(); h_eta_jet3->Sumw2(); h_phi_jet3->Sumw2();

      // Initialize the tagging plots
      //h_nL_loose = new TH1D(name + "_nL_loose", "", 10, -0.5, 9.5);
      //h_nL_medium = new TH1D(name + "_nL_medium", "", 10, -0.5, 9.5);
      h_nB_loose = new TH1D(name + "_nB_loose", "", 10, -0.5, 9.5);   
      h_nB_medium = new TH1D(name + "_nB_medium", "", 10, -0.5, 9.5); 
      h_nC_loose = new TH1D(name + "_nC_loose", "", 10, -0.5, 9.5);   
      h_nC_medium = new TH1D(name + "_nC_medium", "", 10, -0.5, 9.5); 
      h_nBoth_loose = new TH1D(name + "_nBoth_loose", "", 10, -0.5, 9.5); 
      h_nBoth_medium = new TH1D(name + "_nBoth_medium", "", 10, -0.5, 9.5); 
      
      h_nB_loose->Sumw2(); h_nB_medium->Sumw2();
      h_nC_loose->Sumw2(); h_nC_medium->Sumw2();
      h_nBoth_loose->Sumw2(); h_nBoth_medium->Sumw2();

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
      
      h_pt_ljets->Sumw2(); h_pt_ljet0->Sumw2(); h_pt_ljet1->Sumw2(); 
      h_pt_ljet2->Sumw2(); h_pt_ljet3->Sumw2();
      h_pt_bjets->Sumw2(); h_pt_bjet0->Sumw2(); h_pt_bjet1->Sumw2(); 
      h_pt_bjet2->Sumw2(); h_pt_bjet3->Sumw2();
      h_pt_cjets->Sumw2(); h_pt_cjet0->Sumw2(); h_pt_cjet1->Sumw2(); 
      h_pt_cjet2->Sumw2(); h_pt_cjet3->Sumw2();

      h_bRegCorr = new TH1D(name + "_bRegCorr", "", 200, 0, 2); 
      h_cRegCorr = new TH1D(name + "_cRegCorr", "", 200, 0, 2); 
      h_bRegRes  = new TH1D(name + "_bRegRes", "", 200, 0, 2);  
      h_cRegRes  = new TH1D(name + "_cRegRes", "", 200, 0, 2);
      
      h_bRegCorr->Sumw2(); h_cRegCorr->Sumw2();
      h_bRegRes->Sumw2();  h_cRegRes->Sumw2();

    };
    virtual ~JetPlots() {};

    // ===============
    // Custom Methods
    // ===============
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

        h_bRegCorr->Fill(it.m_bRegCorr, w);
        h_cRegCorr->Fill(it.m_cRegCorr, w);
        h_bRegRes->Fill(it.m_bRegRes, w);
        h_cRegRes->Fill(it.m_cRegRes, w);  

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

      histolist.push_back(h_bRegCorr); histolist.push_back(h_bRegRes);
      histolist.push_back(h_cRegCorr); histolist.push_back(h_cRegRes);

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

    // Histograms - regression
    TH1D* h_bRegCorr; TH1D* h_bRegRes;
    TH1D* h_cRegCorr; TH1D* h_cRegRes;

};//end-JetPlots

// == [70] Reco Plots class ===================================================

class RecoPlots 
{

  public:
    
    // Constructor
    RecoPlots(TString name) : m_name(name) {
      
      h_dR_b_v_bjets = new TH1D(name + "_dR_b_v_bjets", "", 700, 0, 7);
      h_dR_b_v_bjet0 = new TH1D(name + "_dR_b_v_bjet0", "", 700, 0, 7);
      h_dR_b_v_bjet1 = new TH1D(name + "_dR_b_v_bjet1", "", 700, 0, 7);    
      
      h_dR_b_v_bjets->Sumw2(); 
      h_dR_b_v_bjet0->Sumw2();
      h_dR_b_v_bjet1->Sumw2(); 

      h_dR_c_v_cjets = new TH1D(name + "_dR_c_v_cjets", "", 700, 0, 7);
      h_dR_c_v_cjet0 = new TH1D(name + "_dR_c_v_cjet0", "", 700, 0, 7);
      h_dR_c_v_cjet1 = new TH1D(name + "_dR_c_v_cjet1", "", 700, 0, 7);
      
      h_dR_c_v_cjets->Sumw2();
      h_dR_c_v_cjet0->Sumw2();
      h_dR_c_v_cjet1->Sumw2();

      h_pTratio_all  = new TH1D(name + "_pTratio_all", "", 400, -2, 2);
      h_pTratio_bjets = new TH1D(name + "_pTratio_bjets", "", 400, -2, 2);
      h_pTratio_bjet0 = new TH1D(name + "_pTratio_bjet0", "", 400, -2, 2);
      h_pTratio_bjet1 = new TH1D(name + "_pTratio_bjet1", "", 400, -2, 2);
      h_pTratio_cjets = new TH1D(name + "_pTratio_cjets", "", 400, -2, 2);
      h_pTratio_cjet0 = new TH1D(name + "_pTratio_cjet0", "", 400, -2, 2);
      h_pTratio_cjet1 = new TH1D(name + "_pTratio_cjet1", "", 400, -2, 2);
      
      h_pTratio_all->Sumw2();
      h_pTratio_bjets->Sumw2(); h_pTratio_bjet0->Sumw2(); h_pTratio_bjet1->Sumw2();
      h_pTratio_cjets->Sumw2(); h_pTratio_cjet0->Sumw2(); h_pTratio_cjet1->Sumw2();
    };

    // Methods
    void Fill(std::vector<JetObj> blist, std::vector<JetObj> bjets,
    std::vector<JetObj> clist, std::vector<JetObj> cjets, float w=1.0) {
    
      // Reconstruct the Z and H objects
      ZObj Z(bjets); HiggsObj H(cjets);
      
      // Calculate the dR between the objects
      for (int i = 0; i < 2; ++i){
        
        // First between the b's
        float dR = blist[i].m_lvec.DeltaR(bjets[i].m_lvec);
        h_dR_b_v_bjets->Fill(dR, w);
        if (i == 0) h_dR_b_v_bjet0->Fill(dR, w);
        else h_dR_b_v_bjet1->Fill(dR, w);
        
        // First between the c's
        dR = clist[i].m_lvec.DeltaR(cjets[i].m_lvec);
        h_dR_c_v_cjets->Fill(dR, w);
        if (i == 0) h_dR_c_v_cjet0->Fill(dR, w);
        else h_dR_c_v_cjet1->Fill(dR, w);
        
        // Now, determine the ratio between the pT of the partons and jets.
        // First, let's do the b's.
        float pT_parton = blist[i].Pt();
        float pT_jet = bjets[i].Pt();
        float ratio = pT_jet / pT_parton;
        h_pTratio_all->Fill(ratio, w);
        h_pTratio_bjets->Fill(ratio, w);
        if (i == 0) h_pTratio_bjet0->Fill(ratio, w);
        else h_pTratio_bjet1->Fill(ratio, w);
        
        // Now, let's do the c's.
        pT_parton = clist[i].Pt();
        pT_jet = cjets[i].Pt();
        ratio = pT_jet / pT_parton;
        h_pTratio_all->Fill(ratio, w);
        h_pTratio_cjets->Fill(ratio, w);
        if (i == 0) h_pTratio_cjet0->Fill(ratio, w);
        else h_pTratio_cjet1->Fill(ratio, w);
      }
    
    };

    // Return Histograms
    std::vector<TH1*> returnHisto() {
      std::vector<TH1*> histolist;
      
      histolist.push_back(h_dR_b_v_bjets);
      histolist.push_back(h_dR_b_v_bjet0);
      histolist.push_back(h_dR_b_v_bjet1);
      
      histolist.push_back(h_dR_c_v_cjets);
      histolist.push_back(h_dR_c_v_cjet0);
      histolist.push_back(h_dR_c_v_cjet1);
      
      histolist.push_back(h_pTratio_all);
      histolist.push_back(h_pTratio_bjets);
      histolist.push_back(h_pTratio_bjet0);
      histolist.push_back(h_pTratio_bjet1);
      
      histolist.push_back(h_pTratio_cjets);
      histolist.push_back(h_pTratio_cjet0);
      histolist.push_back(h_pTratio_cjet1);
      
      return histolist;
    };

  protected:
    
    // Variables
    TString m_name;
    
    // Plots
    TH1D* h_dR_b_v_bjets;   // dR between b-partons and b-jets
    TH1D* h_dR_b_v_bjet0;   // dR between b0 and b-jet 0
    TH1D* h_dR_b_v_bjet1;   // dR between b1 and b-jet 1
    TH1D* h_dR_c_v_cjets;   // dR between c-partons and c-jets
    TH1D* h_dR_c_v_cjet0;   // dR between c0 and c-jet 0
    TH1D* h_dR_c_v_cjet1;   // dR between c1 and c-jet 1
    TH1D* h_pTratio_all;      // pT "loss" for all cases
    TH1D* h_pTratio_bjets;    // pT "loss" for b-jets
    TH1D* h_pTratio_bjet0;    // pT "loss" for b-jet 0
    TH1D* h_pTratio_bjet1;    // pT "loss" for b-jet 1
    TH1D* h_pTratio_cjets;    // pT "loss" for c-jets
    TH1D* h_pTratio_cjet0;    // pT "loss" for c-jet 0
    TH1D* h_pTratio_cjet1;    // pT "loss" for c-jet 1
};
// == [80] Trigger Efficiency Plots class ====================================

class TriggerEffPlots
{
  public:
    
    // Constructor
    TriggerEffPlots(TString name) : m_name(name) {

      for (int i = 0; i < 4; ++i) {
        TString hName = name + "_pt_jet" + std::to_string(i);
        h_pt_jets[i] = new TH1D(hName, "", 500, 0, 500);
        h_pt_jets_ref[i] = new TH1D(hName + "_ref", "", 500, 0, 500);   
        
        h_pt_jets[i]->Sumw2();
        h_pt_jets_ref[i]->Sumw2();
      }

      h_HT = new TH1D(name + "_HT", "", 2000, 0, 2000); 
      h_HT_ref = new TH1D(name + "_HT_ref", "", 2000, 0, 2000);
      h_HTmod = new TH1D(name + "_HTmod", "", 2000, 0, 2000); 
      h_HTmod_ref = new TH1D(name + "_HTmod_ref", "", 2000, 0, 2000);
      
      h_HT->Sumw2(); h_HT_ref->Sumw2();
      h_HTmod->Sumw2(); h_HTmod_ref->Sumw2();

      h_BvL = new TH1D(name + "_BvL", "", 100, 0, 1);
      h_BvL_ref = new TH1D(name + "_BvL_ref", "", 100, 0, 1); 
      h_CvL = new TH1D(name + "_CvL", "", 100, 0, 1); 
      h_CvL_ref = new TH1D(name + "_CvL_ref", "", 100, 0, 1);
      h_CvB = new TH1D(name + "_CvB", "", 100, 0, 1); 
      h_CvB_ref = new TH1D(name + "_CvB_ref", "", 100, 0, 1);
      
      h_BvL->Sumw2(); h_BvL_ref->Sumw2();
      h_CvL->Sumw2(); h_CvL_ref->Sumw2();
      h_CvB->Sumw2(); h_CvB_ref->Sumw2();
    };

    // Fill the appropriate histograms
    void Fill(std::vector<JetObj> jetlist, bool isRef, 
         float HTmod=0., float w=1.) {

      // Add the pT values to the plots. At the same time,
      // calculate the HT. Also handle the jet score ones.
      float HT = 0.;
      for (int i = 0; i < 4; ++i) {
        // pT values
        float pTi = jetlist[i].Pt(); HT += pTi;
        if (isRef) h_pt_jets_ref[i]->Fill(pTi, w);
        else h_pt_jets[i]->Fill(pTi, w);

        // DeepJet scores
        float bvl = jetlist[i].m_deepCSV;
        float cvl = jetlist[i].m_deepCvL;
        float cvb = jetlist[i].m_deepCvB;

        if (isRef) {
          h_BvL_ref->Fill(bvl, w); h_CvL_ref->Fill(cvl, w);
          h_CvB_ref->Fill(cvb, w);
        } 
        else {
          h_BvL->Fill(bvl, w); h_CvL->Fill(cvl, w);
          h_CvB->Fill(cvb, w);
        }
      } 

      // Add the HT value to the proper histogram.
      if (isRef) {
        h_HT_ref->Fill(HT, w);
        h_HTmod_ref->Fill(HT+HTmod, w);
      }
      else {
        h_HT->Fill(HT, w);
        h_HTmod->Fill(HT+HTmod, w);
      }
    };

    // Return all the histograms in this class.
    std::vector<TH1*> returnHisto() {
      std::vector<TH1*> histolist;
      for (int i = 0; i < 4; ++i) {
        histolist.push_back(h_pt_jets[i]);
        histolist.push_back(h_pt_jets_ref[i]);
      }
      //histolist.push_back(h_pt_jet0); histolist.push_back(h_pt_jet0_ref);
      //histolist.push_back(h_pt_jet1); histolist.push_back(h_pt_jet1_ref);
      //histolist.push_back(h_pt_jet2); histolist.push_back(h_pt_jet2_ref);
      //histolist.push_back(h_pt_jet3); histolist.push_back(h_pt_jet3_ref); 
      histolist.push_back(h_HT);      histolist.push_back(h_HT_ref);
      histolist.push_back(h_HTmod);   histolist.push_back(h_HTmod_ref);
      histolist.push_back(h_BvL);     histolist.push_back(h_BvL_ref);
      histolist.push_back(h_CvL);     histolist.push_back(h_CvL_ref);
      histolist.push_back(h_CvB);     histolist.push_back(h_CvB_ref);
      return histolist;
    };

  protected:
    
    // Variables
    TString m_name;

    // Plots
    TH1D* h_pt_jets[4]; TH1D* h_pt_jets_ref[4];
    //TH1D* h_pt_jet0; TH1D* h_pt_jet0_ref;
    //TH1D* h_pt_jet1; TH1D* h_pt_jet1_ref;
    //TH1D* h_pt_jet2; TH1D* h_pt_jet2_ref;
    //TH1D* h_pt_jet3; TH1D* h_pt_jet3_ref;
    TH1D* h_HT;      TH1D* h_HT_ref;
    TH1D* h_HTmod;   TH1D* h_HTmod_ref;
    TH1D* h_BvL;     TH1D* h_BvL_ref;
    TH1D* h_CvL;     TH1D* h_CvL_ref;
    TH1D* h_CvB;     TH1D* h_CvB_ref;
};

// == [  ] END OF FILE ========================================================
#endif
