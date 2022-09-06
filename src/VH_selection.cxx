#define VH_selection_cxx

#include <math.h>

#include "TList.h"
#include "TParameter.h"

#include "VH_selection.h"
#include "Global.h"
#include "Obj.cxx"

//VH_selection::VH_selection(bool isData) : Selector(isData), h_zee_jet(0), h_zmm_jet(0) {}

VH_selection::~VH_selection() {
  if (h_VH) delete h_VH;
} 

void VH_selection::SlaveBegin(Reader* r) {
  
  // Set up the plots we want
  h_evt = new TH1D("Nevt_VbbHcc","",4,-1.5,2.5) ; //bin 1: total negative weight events
                                                  // bin 2: total positive weight events
                                                  // bin 3: total event weighted by genWeight
                                                  // (= bin2 - bin1, if genWeight are always -1,1

  h_VH = new VHPlots("VbbHcc");

  // Cut flow to select events for analysis
  h_evt_cutflow = new TH1D("CutFlow_VbbHcc", "", 7, 0, 7);
  h_evt_cutflow->GetXaxis()->SetBinLabel(1, "Total");
  h_evt_cutflow->GetXaxis()->SetBinLabel(2, "Passed jet requirements");
  h_evt_cutflow->GetXaxis()->SetBinLabel(3, "Passed b-tagging for Z candidate");
  h_evt_cutflow->GetXaxis()->SetBinLabel(4, "Passed c-tagging for H candidate");
  h_evt_cutflow->GetXaxis()->SetBinLabel(5, "Passed MET cut");
  h_evt_cutflow->GetXaxis()->SetBinLabel(6, "Passed V pT cut");
  h_evt_cutflow->GetXaxis()->SetBinLabel(7, "Passed dPhi cut");

  // Cut flow to select jets for event
  h_jet_cutflow = new TH1D("CutFlow_jets", "", 4, 0, 4);
  h_jet_cutflow->GetXaxis()->SetBinLabel(1, "Total");
  h_jet_cutflow->GetXaxis()->SetBinLabel(2, "pT cut");
  h_jet_cutflow->GetXaxis()->SetBinLabel(3, "eta cut");
  h_jet_cutflow->GetXaxis()->SetBinLabel(4, "iso req");
  
  //Add histograms to fOutput so they can be saved in Processor::SlaveTerminate
  r->GetOutputList()->Add(h_evt) ;
  std::vector<TH1*> tmp = h_VH->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  
  r->GetOutputList()->Add(h_evt_cutflow);
  r->GetOutputList()->Add(h_jet_cutflow);
}//end-SlaveBegin


void VH_selection::Process(Reader* r) {

  //Weights
  float genWeight = 1.;
  float puSF = 1.;
  float l1preW = 1.;
#if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)
  if (*(r->genWeight) < 0) genWeight = -1. ;
  if (*(r->genWeight) == 0) {
    genWeight = 0;
    h_evt->Fill(0) ;
  }
  if (*(r->genWeight) < 0) h_evt->Fill(-1) ;
  if (*(r->genWeight) > 0) h_evt->Fill(1) ;
  if (m_centralGenWeight != 0)  genWeight = *(r->genWeight)/m_centralGenWeight; //use central gen weight to normalize gen weight
  puSF = PileupSF(*(r->Pileup_nTrueInt));
#endif

  h_evt->Fill(2,genWeight);

#if defined(MC_2016) || defined(MC_2017)
  l1preW = *(r->L1PreFiringWeight_Nom);
  //std::cout << "\nPrefiring: " << l1preW;
  if (m_l1prefiringType == "l1prefiringu") l1preW = *(r->L1PreFiringWeight_Up);
  if (m_l1prefiringType == "l1prefiringd") l1preW = *(r->L1PreFiringWeight_Dn);
#endif

#if defined(DATA_2016) || defined(DATA_2017) || defined(DATA_2018)
  h_evt->Fill(-1) ;
  if (!m_lumiFilter.Pass(*(r->run),*(r->luminosityBlock))) return;
  h_evt->Fill(1) ;
#endif

  float evtW = 1. ;

  if (!m_isData) evtW *= genWeight*puSF*l1preW;

  //=============Get objects============= 
  
  // Jets
  std::vector<JetObj> jets ;
  for (unsigned int i = 0 ; i < *(r->nJet) ; ++i) {
    int jetFlav = -1 ;
#if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)
    jetFlav = (r->Jet_hadronFlavour)[i];
#endif
    JetObj jet((r->Jet_pt)[i],(r->Jet_eta)[i],(r->Jet_phi)[i],(r->Jet_mass)[i],
      jetFlav,(r->Jet_btagDeepB)[i],(r->Jet_btagDeepFlavB)[i],(r->Jet_puIdDisc)[i]) ;
    jet.m_deepCvL = (r->Jet_btagDeepFlavCvL)[i];

    jets.push_back(jet) ;
  }

  // Electrons
  std::vector<LepObj> elecs;
  for (unsigned int i = 0; i < *(r->nElectron); ++i) {

  }
   

  // All cut flows need to show the total events //
  h_evt_cutflow->Fill(0.5, genWeight);

  // Cut #1 - Proper Jets /////////////////////////
  // We want to keep jets that meet the following criteria:
  // pT(j) > 30 GeV, |eta| < 2.5
  // dR(small-R jet, lepton) < 0.4 = discard
  std::vector<JetObj> selected_jets;
  for (unsigned int i = 0; i < jets.size(); ++i) {
  
    TLorentzVector vec = jets.at(i).m_lvec;
    h_jet_cutflow->Fill(0.5, genWeight); // All jets
    if (vec.Pt() < 30) continue; 
    h_jet_cutflow->Fill(1.5, genWeight); // Passed pT cut
    if (fabs(vec.Eta()) > 2.5) continue;
    h_jet_cutflow->Fill(2.5, genWeight); // Passed eta cut
   
    // == Iso Cut to Go Here ==
    
    h_jet_cutflow->Fill(3.5, genWeight); // Passed iso
    selected_jets.push_back(jets.at(i));
  } 

  // Remember, we want at least 4 jets.
  if (selected_jets.size() >= 4) {

    h_evt_cutflow->Fill(1.5, genWeight); // passed jet selection
    
    // Cut #2 - b-tagging ///////////////////////////////
    // Pick two jets with the largest btag value and then
    // make pass ~medium WP (Jet_btagDeepFlavB > 0.3)
    JetObj bjet0, bjet1;

    // Determine jet #1
    float maxCSV = -2000.; int maxIdx = -1;
    for (unsigned int i = 0; i < selected_jets.size(): ++i) {
    
      float jet_csv = selected_jets.at(i).m_deepCSV;
      if (jet_csv > maxCSV) {
        maxCSV = jet_csv;
        maxIdx = i;
      }
    }
    bjet0 = selected_jets.at(maxIdx);
    selected_jets.erase(bjet0);

    // Determine jet #2
    maxCSV = -2000.; maxIdx = -1;
    for (unsigned int i = 0; i < selected_jets.size(); ++i) {

      float jet_csv = selected_jets.at(i).m_deepCSV;
      if (jet_csv > maxCSV) {
        maxCSV = jet_csv;
        maxIdx = i;
      }
    }
    bjet1 = selected_jets.at(maxIdx);
    selected_jets.erase(bjet1);

    // Now that we've selected the jets, make sure they
    // meet the working point we're interested in.
    if (bjet0.m_deepCSV > 0.3 and bjet1.m_deepCSV > 0.3) 
    {

      h_evt_cutflow->Fill(2.5, genWeight); // passed bjet selection

      // Cut #3 - c-tagging ////////////////////////////////////
      // We want to take the two remaining jets with the highest
      // CvL and pass two working points.
      float maxCvL = -2000.; maxIdx = -1;

    }//end-bjet-selection


  }//end-jet-selection
   
} //end Process



void VH_selection::Terminate(TList* mergedList, std::string outFileName) {
  
  /*TList* aList = new TList() ;
  TParameter<double>* a = new TParameter<double>("lep_eta",CUTS.Get<float>("lep_eta")) ;
  aList->Add(a) ;
  a = new TParameter<double>("lep_pt",CUTS.Get<float>("lep_pt")) ;
  aList->Add(a) ;
  */

  //TFile* f = new TFile(outFileName.c_str(), "UPDATE") ;
  //aList->Write("VH_selectionCuts",TObject::kSingleKey) ;

  //f->Close() ;
}
