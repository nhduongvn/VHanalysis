#define VH_selection_cxx

#include <math.h>

#include "TList.h"
#include "TParameter.h"

#include "VH_selection.h"
#include "Global.h"
#include "Obj.cxx"

//VH_selection::VH_selection(bool isData) : Selector(isData), h_zee_jet(0), h_zmm_jet(0) {}

VH_selection::~VH_selection() {
  //if (h_VH) delete h_VH;
} 

void VH_selection::SlaveBegin(Reader* r) {

  // Set up the plots we want
  h_evt = new TH1D("Nevt","",4,-1.5,2.5) ; //bin 1: total negative weight events
                                           // bin 2: total positive weight events
                                           // bin 3: total event weighted by genWeight
                                           // (= bin2 - bin1, if genWeight are always -1,1

  h_VH = new VHPlots("VbbHcc");
  h_VH_tags = new VHPlots("VbbHcc_tags");
  h_VH_algo = new VHPlots("VbbHcc_algo");
  h_VH_both = new VHPlots("VbbHcc_both");

  // Cut flow to select events for analysis
  h_evt_cutflow = new TH1D("VbbHcc_CutFlow", "", 7, 0, 7);
  h_evt_cutflow->GetXaxis()->SetBinLabel(1, "Total");
  h_evt_cutflow->GetXaxis()->SetBinLabel(2, "Passed jet requirements");
  h_evt_cutflow->GetXaxis()->SetBinLabel(3, "Passed b-tagging for Z candidate");
  h_evt_cutflow->GetXaxis()->SetBinLabel(4, "Passed c-tagging for H candidate");
  h_evt_cutflow->GetXaxis()->SetBinLabel(5, "Passed MET cut");
  h_evt_cutflow->GetXaxis()->SetBinLabel(6, "Passed V pT cut");
  h_evt_cutflow->GetXaxis()->SetBinLabel(7, "Passed dPhi cut");

  // Cut flow to select jets for event
  h_jet_cutflow = new TH1D("VbbHcc_CutFlow_jets", "", 4, 0, 4);
  h_jet_cutflow->GetXaxis()->SetBinLabel(1, "Total");
  h_jet_cutflow->GetXaxis()->SetBinLabel(2, "pT cut");
  h_jet_cutflow->GetXaxis()->SetBinLabel(3, "eta cut");
  h_jet_cutflow->GetXaxis()->SetBinLabel(4, "iso req");

  // Cut flow to select electrons
  h_elec_cutflow = new TH1D("VbbHcc_CutFlow_elec", "", 4, 0, 4);
  h_elec_cutflow->GetXaxis()->SetBinLabel(1, "Total");
  h_elec_cutflow->GetXaxis()->SetBinLabel(2, "Passed phase-space cut");
  h_elec_cutflow->GetXaxis()->SetBinLabel(3, "Passed SC cut");
  h_elec_cutflow->GetXaxis()->SetBinLabel(4, "Passed id cut");  

  // Cut flow to select muons
  h_muon_cutflow = new TH1D("VbbHcc_CutFlow_muon", "", 4, 0, 4);
  h_muon_cutflow->GetXaxis()->SetBinLabel(1, "Total");
  h_muon_cutflow->GetXaxis()->SetBinLabel(2, "Passed phase-space cut");
  h_muon_cutflow->GetXaxis()->SetBinLabel(3, "Passed looseID cut");
  h_muon_cutflow->GetXaxis()->SetBinLabel(4, "Passed iso cut");

  // Other Histograms we want
  h_CSV = new TH1D("VbbHcc_CSV", "", 200, 0, 1);
  h_CvL = new TH1D("VbbHcc_CvL", "", 200, 0, 1);

  h_Nselected = new TH1D("VbbHcc_Nselected", "", 10, -0.5, 9.5);
  h_Nbjet = new TH1D("VbbHcc_Nbjet", "", 10, -0.5, 9.5);
  h_Ncjet = new TH1D("VbbHcc_Ncjet", "", 10, -0.5, 9.5);
  h_Z_dM = new TH1D("VbbHcc_Z_dM", "", 100, 0, 100);
  h_H_dM = new TH1D("VbbHcc_H_dM", "", 100, 0, 100);

  h_HZ0 = new TH1D("VbbHcc_HZ0", "", 100, -50, 50);
  h_HZ1 = new TH1D("VbbHcc_HZ1", "", 100, -50, 50);
  h_HZ2 = new TH1D("VbbHcc_HZ2", "", 100, -50, 50);
  h_dH = new TH1D("VbbHcc_dH", "", 100, 0, 100);

  //Add histograms to fOutput so they can be saved in Processor::SlaveTerminate
  r->GetOutputList()->Add(h_evt) ;
  std::vector<TH1*> tmp = h_VH->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_VH_tags->returnHisto();
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_VH_algo->returnHisto();
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_VH_both->returnHisto();
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  
  r->GetOutputList()->Add(h_evt_cutflow);
  r->GetOutputList()->Add(h_jet_cutflow);
  r->GetOutputList()->Add(h_elec_cutflow);
  r->GetOutputList()->Add(h_muon_cutflow);
  r->GetOutputList()->Add(h_CvL);
  r->GetOutputList()->Add(h_CSV);
  r->GetOutputList()->Add(h_Nselected);
  r->GetOutputList()->Add(h_Nbjet);
  r->GetOutputList()->Add(h_Ncjet);
  r->GetOutputList()->Add(h_Z_dM);
  r->GetOutputList()->Add(h_H_dM);
  r->GetOutputList()->Add(h_HZ0);
  r->GetOutputList()->Add(h_HZ1);
  r->GetOutputList()->Add(h_HZ2);
  r->GetOutputList()->Add(h_dH);

}//end-SlaveBegin

float D_HZ(float mH, float mZ) {
  float x0 = 125.0, y0 = 91.0;
  float k = x0 / y0;
  float m0 = std::max(mH, mZ);
  float m1 = std::min(mH, mZ);
  return fabs(m0 - k * m1) / sqrt(1 + pow(k,2));
}


float get_mass_from_indices(std::vector<JetObj>& jets, int idx0, int idx1) {
  TLorentzVector vec0 = jets.at(idx0).m_lvec;
  TLorentzVector vec1 = jets.at(idx1).m_lvec;
  TLorentzVector vec_total = vec0 + vec1;
  return vec_total.M(); 
}


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
      jetFlav, (r->Jet_btagDeepFlavB)[i],(r->Jet_puIdDisc)[i]) ;

#if defined(NANOAODV9)
    jet.m_deepCvL = (r->Jet_btagDeepFlavCvL)[i];
#endif

#if defined(NANOAODV7)
    jet.m_deepCvL = (r->FatJet_btagDDCvL)[i];
#endif

    jets.push_back(jet) ;
  }

  // Electrons
  std::vector<LepObj> elecs;
  for (unsigned int i = 0; i < *(r->nElectron); ++i) {
    
    // Produce an electron from the information.
    h_elec_cutflow->Fill(0.5, genWeight); // All electrons

    float etaSC = (r->Electron_eta)[i] - (r->Electron_deltaEtaSC)[i];
    LepObj elec((r->Electron_pt)[i], (r->Electron_eta)[i], etaSC,
           (r->Electron_phi)[i], (r->Electron_mass)[i], i,
           (r->Electron_charge)[i], 0);

    // Cut #1 - check phase space /////////////////////
    // We want electrons with high enough pT and within
    // the eta limit of the tracker.
    if (elec.m_lvec.Pt() < CUTS.Get<float>("lep_pt1") || 
       fabs(elec.m_lvec.Eta()) > CUTS.Get<float>("lep_eta"))
       continue;

    h_elec_cutflow->Fill(1.5, genWeight); // passed phase cut

    // Cut #2 - make a cut based on SC /////////////////
    if (fabs(etaSC) < 1.566 && fabs(etaSC) > 1.442) continue;

    h_elec_cutflow->Fill(2.5, genWeight); // passed SC cut

    // Cut #3 - make sure to only keep proper electrons ////
    int elecID = r->Electron_cutBased[i];
    if (elecID < 2) continue; // loose electron ID
    h_elec_cutflow->Fill(3.5, genWeight); // passed ID cut

    elecs.push_back(elec);
  }

  // Muons
  std::vector<LepObj> muons;
  for (unsigned int i = 0; i < *(r->nMuon); ++i) {
  
    h_muon_cutflow->Fill(0.5, genWeight); // All muons
    LepObj muon((r->Muon_pt)[i], (r->Muon_eta)[i], -1, (r->Muon_phi)[i],
           (r->Muon_mass)[i], i, (r->Muon_charge)[i],
           (r->Muon_pfRelIso04_all)[i]);
 
    // Cut #1 - check phase space /////////////////////////
    if (muon.m_lvec.Pt() > CUTS.Get<float>("lep_pt1") ||
       fabs(muon.m_lvec.Eta()) > CUTS.Get<float>("lep_eta"))
       continue;

    h_muon_cutflow->Fill(1.5, genWeight); // passed phase cut
    
    // Cut #2 - check loose ID /////////////////////////////
    if (r->Muon_looseId[i] <= 0) continue;
    h_muon_cutflow->Fill(2.5, genWeight); // passed ID cut

    // Cut #3 - isolation cut //////////////////////////////
    if (muon.m_iso > CUTS.Get<float>("muon_iso")) continue;
    h_muon_cutflow->Fill(3.5, genWeight); // passed iso cut

    muons.push_back(muon);
  }
   

  // All cut flows need to show the total events //
  h_evt_cutflow->Fill(0.5, genWeight);

  // So we have them for reference (in terms of making cuts),
  // make sure to place ALL jets into distributions.
  h_VH->FillJets(jets, evtW);
  h_VH->FillNjet(jets.size(), evtW);

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
   
    // Check the electrons & muons for overlap with the jets.
    // If dR(jet, lepton) < 0.4, discard the jet.
    bool should_discard = false;
    for (unsigned int j = 0; j < elecs.size(); ++j) {
      float dR = vec.DeltaR(elecs.at(j).m_lvec);
      if (dR < 0.4) { should_discard = true; break; }
    };

    if (should_discard) continue;

    should_discard = false;
    for (unsigned int j = 0; j < muons.size(); ++j) {
      float dR = vec.DeltaR(muons.at(j).m_lvec);
      if (dR < 0.4) { should_discard = true; break; }
    };

    if (should_discard) continue;
    
    h_jet_cutflow->Fill(3.5, genWeight); // Passed iso

    selected_jets.push_back(jets.at(i));
  } 

  // We want to be able to plot the distributions of the
  // jets that survive our selections.
  h_Nselected->Fill(selected_jets.size(), genWeight);

  // Remember, we want at least 4 jets.
  if (selected_jets.size() >= 4) {

    h_evt_cutflow->Fill(1.5, genWeight); // passed jet selection

    // CASE #1 - MC TRUTH /////////////////////////////////////////////////////
    
    // CASE #2 - TAGGING //////////////////////////////////////////////////////
    
    // Select two jets with the largest btag value and then 
    // make pass ~medium WP (Jet_btagDeepFlavB > 0.3)
    std::vector<JetObj> jets2 = selected_jets;
    std::vector<JetObj> bjets;
    float csv0 = -2000.0, csv1 = -2000.0; int bIdx0 = -1, bIdx1 = -1;

    for (unsigned int i = 0; i < jets2.size(); ++i) {
      float jet_csv = jets2.at(i).m_deepCSV;    
      if (jet_csv > csv0) { csv0 = jet_csv; bIdx0 = i; }  
    }
    bjets.push_back(jets2[bIdx0]);
    jets2.erase(jets2.begin() + bIdx0);
    
    for (unsigned int i = 0; i < jets2.size(); ++i) {
      float jet_csv = jets2.at(i).m_deepCSV;
      if (jet_csv > csv1) { csv1 = jet_csv; bIdx1 = i; }
    }
    bjets.push_back(jets2[bIdx1]);
    jets2.erase(jets2.begin() + bIdx0);

    if (csv0 > 0.3 && csv1 > 0.3)
    {
       ZObj Z(bjets);
       std::vector<JetObj> cjets;

       // Do the same matching process but with c-jets
       float cvl0 = -2000.0, cvl1 = -2000.0; int cIdx0 = -1, cIdx1 = -1;
       for (unsigned int i = 0; i < jets2.size(); ++i) {
         float jet_cvl = jets2.at(i).m_deepCvL;
         if (jet_cvl > cvl0) { cvl0 = jet_cvl; cIdx0 = i; }
       }
       cjets.push_back(jets2[cIdx0]);
       jets2.erase(jets2.begin() + cIdx0);

       for (unsigned int i = 0; i < jets2.size(); ++i) {
         float jet_cvl = jets2.at(i).m_deepCvL;
         if (jet_cvl > cvl1) { cvl1 = jet_cvl; cIdx1 = i; }
       }
       cjets.push_back(jets2[cIdx1]);
       jets2.erase(jets2.begin() + cIdx1);
       
       if (cvl0 > 0.37 && cvl1 > 0.37) {

         HObj H(cjets);
         if (*(r->MET_pt) < 140) {
           if (Z.m_lvec.Pt() > 50) {
             float dPhi = Z.m_lvec.DeltaPhi(H.m_lvec);
             if (fabs(dPhi) > 2.5) {

               h_VH_tags->Fill(H, Z, evtW);

             }//end-dPhi-cut
           }//end-pt(V)-cut
         }//end-met-cut          

       }//end-cjet-selection
    }//end-bjet-selection

    // CASE #3 - D_HZ ALGORITHM ///////////////////////////////////////////////

    // Make sure we have our jets properly sorted by pT(j)
    std::vector<JetObj> jets3 = selected_jets;
    std::sort(jets3.begin(), jets3.end(), std::greater<JetObj>());    
  
    // Create the objects for the distance calculations & make sure we sort
    // them in ascending order. NOTE: The algorithm for calculating the distance
    // is contained within the DObj class and is done immediately upon creation.
    // Additionally, the operators > and < within the class are designed to sort
    // the objects based on the distance calculated.
    DObj d0(jets3, 0, 1, 2, 3); // H(0,1) ; Z(2,3)
    DObj d1(jets3, 0, 2, 1, 3); // H(0,2) ; Z(1,3)
    DObj d2(jets3, 0, 3, 1, 2); // H(0,3) ; Z(1,2)
    std::vector<DObj> distances{ d0, d1, d2 };
    std::sort(distances.begin(), distances.end());

    // Determine the difference between the closest two.
    float deltaD = fabs(distances[0].m_d - distances[1].m_d);
    
    // Determine which pairing we want to use based on this deltaD.
    // If we are outside the resolution window (30 GeV), we can 
    // just choose the closest pair.
    DObj chosenPair = distances[0];
    if (deltaD >= 30) { chosenPair = distances[0];}
    // Otherwise, we want to choose the pairing of the lowest two
    // that has the largest pT(H).
    else {
      float pt0 = distances[0].HPt();
      float pt1 = distances[1].HPt();
      int idx;
      if (pt0 > pt1) idx = 0;
      else idx = 1;
      chosenPair = distances[idx];
    }

    // Now that we've passed the algorithm for matching, let's check the 
    // tagging for the b- and c-jets. The tagging will be taken care of
    // inside the DObj class.
    if (chosenPair.Z_has_bjets()) {

      if (chosenPair.H_has_cjets()) {

        if (*(r->MET_pt) < 140) {
          if (chosenPair.ZPt() > 50) {
            float dPhi = fabs(chosenPair.DPhi());
            if (dPhi > 2.5) {
              // We need to build the objects to fill our histograms.
              std::vector<JetObj> bjets;
              bjets.push_back(jets3[chosenPair.m_zIdx0]);
              bjets.push_back(jets3[chosenPair.m_zIdx1]);
              ZObj Z(bjets);
              
              std::vector<JetObj> cjets;
              cjets.push_back(jets3[chosenPair.m_hIdx0]);
              cjets.push_back(jets3[chosenPair.m_hIdx1]);
              HObj H(cjets);

              h_VH_algo->Fill(H, Z, evtW);
         
            }//end-dPhi-cut 
          }//end-pt(V)-cut
        }//end-MET-cut        

      }//end-b-tag

    }//end-c-tag

    // CASE #4 - TAGGING & ALGORITHM //////////////////////////////////////////

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
