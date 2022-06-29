#ifndef Plots_cxx
#define Plots_cxx

#include "Obj.cxx"
#include "TString.h"
#include "TH1.h"
#include "TH1D.h"
#include "TMath.h"
#include "TLorentzVector.h"
#include <TTreeReaderArray.h>

const unsigned NBIN_PT_JET = 2000; 
const float X_PT_JET[2] = {0,2000};
const unsigned NBIN_PT_Z = 2000;
const float X_PT_Z[2] = {0,2000};
const unsigned NBIN_ETA = 480;
const float X_ETA[2] = {-2.4,2.4};

class VHPlots 
{
  
  public:
    VHPlots(TString name) : m_name(name) {
      h_pt_jet = new TH1D(name + "_pt_jet","",NBIN_PT_JET,X_PT_JET[0],X_PT_JET[1]) ;
      h_eta_jet = new TH1D(name + "_eta_jet","",NBIN_ETA,X_ETA[0],X_ETA[1]) ;
      h_Njet = new TH1D(name + "_Njet","",15,0,15) ;
      h_pt_jet->Sumw2() ;
      h_eta_jet->Sumw2() ;
      h_Njet->Sumw2() ;
    } ;
    
    void Fill(JetObj& J, float w=1) {
  
      h_pt_jet->Fill(J.m_lvec.Pt(), w) ;
      h_eta_jet->Fill(J.m_lvec.Eta(), w) ;

    } ;

    void FillNjet(size_t nJet, float w=1) {
      h_Njet->Fill(nJet,w) ;
    } ;

    std::vector<TH1*> returnHisto(){
      std::vector<TH1*> histolist ;
      
      histolist.push_back(h_pt_jet) ;
      histolist.push_back(h_eta_jet) ;   
      histolist.push_back(h_Njet) ;
      
      return histolist ; 
    }

  protected:
    TString m_name ;
    TH1D* h_pt_jet ;
    TH1D* h_eta_jet ;
    TH1D* h_Njet ;
} ;


#endif
