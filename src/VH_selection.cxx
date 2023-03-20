#define VH_selection_cxx

//== Include Statements =======================================================

#include <math.h>
#include "TList.h"
#include "TParameter.h"

#include "VH_selection.h"
#include "Global.h"
#include "Obj.cxx"

#include <bits/stdc++.h>

//== Deconstructor ============================================================

VH_selection::~VH_selection() { }

//== Custom Methods ===========================================================

//=========================================================
// DauIdxs_ZH - get the indices of the MC truth particles
//=========================================================

#if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)
std::vector<std::vector<int> > VH_selection::DauIdxs_ZH(Reader *r) {

  // Store the indices of the Higgs and Z daughters
  std::vector<std::vector<int>> dauIdxs;
  std::vector<int> dauIdxsZ;
  std::vector<int> dauIdxsH;

  // Loop over the gen particles
  for (unsigned i = 0; i < *(r->nGenPart); ++i) {

    int mIdx = (r->GenPart_genPartIdxMother)[i]; // mother index     
    int mID  = (r->GenPart_pdgId)[mIdx];         // mother ID (PDG)
    int flav = (r->GenPart_pdgId)[i];            // ptcl ID (PDG)

    // b quark check (id = 5, mother ID = 23 [Z])
    if (abs(flav) == 5 && mIdx > -1 && abs(mID) == 23)
      dauIdxsZ.push_back(i);

    // c quark check (id = 4, mother ID = 25 [H])
    if (abs(flav) == 4 && mIdx > -1 && abs(mID) == 25)
      dauIdxsH.push_back(i);

    //if (mIdx > -1 && abs(mID) == 23)
    //  std::cout << "from Z, we get flav = " << flav << std::endl;
  }

  // Push back and return the proper IDs
  dauIdxs.push_back(dauIdxsZ);
  dauIdxs.push_back(dauIdxsH);

  return dauIdxs;
}
#endif

//=========================================================
// sort_by_second - Sort a pair by the second option.
//=========================================================
bool sort_by_second(const std::pair<int,float> &a,
                    const std::pair<int,float> &b)
{ return a.second < b.second; }

bool sort_by_second_descend(const std::pair<int,float> &a,
                            const std::pair<int,float> &b)
{ return a.second > b.second; } 

//=========================================================
// list_contains - This tells us if a list contains a 
// given value.
//=========================================================
bool list_contains(std::vector<int> list, int value) {
  return std::count(list.begin(), list.end(), value);
}//end-list_contains


//=========================================================
// get_valid_ids - Check through a list of IDs and check 
// against a list of already used IDs to get the valid 
// ones.
//=========================================================

std::vector<int> get_valid_ids(std::vector<int> idxs, std::vector<int> invalid_idxs) {

  // Let's check for the top two valid idxs
  std::vector<int> valid_idxs;  
  for (size_t i = 0; i < idxs.size(); ++i) {

    // Check to see if idx #i is not already used.
    // If it's not used, let's add it to our list.
    if (!list_contains(invalid_idxs, idxs[i])) valid_idxs.push_back(idxs[i]);

    // If we've already found two valid idxs, let's break out
    if (valid_idxs.size() >= 2) break;

  }//end-for

  // If we have not found a valid index, return a fail-safe.
  return valid_idxs;

}

//=========================================================
// find_valid_combos - Check for all valid combinations 
// of the given jets 
//=========================================================
std::vector<std::vector<int> > find_valid_combos(std::vector<int> bIdxs,
  std::vector<int> cIdxs) {

  std::vector<std::vector<int>> outs;

  // Check to make sure we even have enough points to check.
  if (bIdxs.size() >= 2 && cIdxs.size() >= 2) {

    // Option #1 - choose the top two bIndices
    int b0(bIdxs[0]), b1(bIdxs[1]);
    std::vector<int> bs{b0, b1};
    
    // Get the top two c indices that are not in the bList.
    std::vector<int> clist = get_valid_ids(cIdxs, bs);

    // If we have a proper number of cIDs and none of them are -1,
    // create the proper combination.
    if (clist.size() >= 2 && !list_contains(clist,-1)) {
      int c2(clist[0]); int c3(clist[1]);
      outs.push_back({b0, b1, c2, c3});
    }

    // Option #2 - choose the top two cIndices
    int c0(cIdxs[0]), c1(cIdxs[1]);
    std::vector<int> cs{c0, c1};   
 
    // Only check this way if there's overlap with the indices.
    if (list_contains(cs, b0) || list_contains(cs, b1)) { 

      // Get the top two b indices that are not in the cList.
      std::vector<int> blist = get_valid_ids(bIdxs, cs);
    
      // If we have a proper number of bIDs and none of them are -1,
      // create the proper combination.
      if (blist.size() >= 2 && !list_contains(blist,-1)) {
        int b2(blist[0]); int b3(blist[1]);
        outs.push_back({b2, b3, c0, c1});
      }
    }
  }//end-check

  // Return our list.
  return outs;

}//end-find_valid_combos

//=========================================================
// passes_btag - checks that a jet is b-tagged
//=========================================================

bool passes_btag(JetObj& jet, float CSV_cut) {
  return jet.m_deepCSV > CSV_cut;
}

//=========================================================
// are_bjets - takes a list of jets and checks that they're
// all b-jets (given a certain cut).
//=========================================================

bool are_bjets(std::vector<JetObj>& jets, float CSV_cut) {
  for (auto it : jets) {
    if (!passes_btag(it, CSV_cut)) return false;
  }
  return true;
}

//=========================================================
// passes_ctag - checks that a jet is c-tagged
//========================================================= 
bool passes_ctag(JetObj& jet, float CvL_cut, float CvB_cut) {
  bool passes_CvL = jet.m_deepCvL > CvL_cut;
  bool passes_CvB = jet.m_deepCvB > CvB_cut;
  return passes_CvL && passes_CvB;
}

//=========================================================
// are_cjets - takes a list of jets and checks that they're
// all c-jets (given a certain cut).
//=========================================================
bool are_cjets(std::vector<JetObj>& jets, float CvL_cut, float CvB_cut) {
  for (auto it : jets) {
    if (!passes_ctag(it, CvL_cut, CvB_cut)) return false;
  }
  return true;
}

// == SlaveBegin ==============================================================

/*
 * This section is where we initialize all necessary plots
 * and then add all the plots to the output so we can use
 * them for analyses.
*/

void VH_selection::SlaveBegin(Reader *r) {

  // Set up all the necessary plots
  h_evt = new TH1D("Nevt", "", 4, -1.5, 2.5); // bin 1 = total negative w evt
                                              // bin 2 = total positive w evt
                                              // bin 3 = total event weight
                                              // genWeight (=bin2 - bin1)

  h_evt_VbbHcc = new TH1D("Nevt_VbbHcc", "", 4, 0, 4);
  h_evt_VbbHcc->GetXaxis()->SetBinLabel(1, "total");
  h_evt_VbbHcc->GetXaxis()->SetBinLabel(2, "VbbHcc MC");
  h_evt_VbbHcc->GetXaxis()->SetBinLabel(3, "found MC jets");

  // Set up the VHPlot instances
  h_VH_all = new VHPlots("VbbHcc_all");
  h_VH_MC = new VHPlots("VbbHcc_MC");
  h_VH_MCjet = new VHPlots("VbbHcc_MCjet");
  h_VH_tags = new VHPlots("VbbHcc_tags");
  h_VH_algo = new VHPlots("VbbHcc_algo");
  h_VH_both = new VHPlots("VbbHcc_both");

  h_VH_alljet = new VHPlots("VbbHcc_alljet");
  h_VH_seljet = new VHPlots("VbbHcc_seljet");

  // Set up the EffPlot instances
  h_eff_tags = new EffPlots("VbbHcc_eff_tags");
  h_eff_algo = new EffPlots("VbbHcc_eff_algo");
  h_eff_both = new EffPlots("VbbHcc_eff_both");

  // Set up the JetPlots instances
  h_VH_jets = new JetPlots("VbbHcc_jets");
  h_VH_jets_all = new JetPlots("VbbHcc_jets_all");
  h_VH_MC_jets = new JetPlots("VbbHcc_MC_jets");

  h_VH_4b = new JetPlots("VbbHcc_4b");
  h_VH_2b2c = new JetPlots("VbbHcc_2b2c");

  // Set up the GenPlots instances
  h_genJet_all = new GenPlots("GenJet_all");
  h_genJet_cuts = new GenPlots("GenJet_cuts");
  h_genJet_VbbHcc = new GenPlots("GenJet_VbbHcc");
  
  // Set up the CutFlows (for events) 
  h_evt_MC_cutflow = new TH1D("VbbHcc_MC_CutFlow", "", 2, 0, 2);
  h_evt_MC_cutflow->GetXaxis()->SetBinLabel(1, "Total");
  h_evt_MC_cutflow->GetXaxis()->SetBinLabel(2, "Passed daughter selection");
  
  h_evt_tags_cutflow = new TH1D("VbbHcc_tags_CutFlow", "", 7, 0, 7);
  h_evt_tags_cutflow->GetXaxis()->SetBinLabel(1, "Total");
  h_evt_tags_cutflow->GetXaxis()->SetBinLabel(2, "MET cut");
  h_evt_tags_cutflow->GetXaxis()->SetBinLabel(3, "jet cuts");
  h_evt_tags_cutflow->GetXaxis()->SetBinLabel(4, "b-tag #1");
  h_evt_tags_cutflow->GetXaxis()->SetBinLabel(5, "b-tag #2");
  h_evt_tags_cutflow->GetXaxis()->SetBinLabel(6, "c-tag #1");
  h_evt_tags_cutflow->GetXaxis()->SetBinLabel(7, "c-tag #2");
  
  h_evt_algo_cutflow = new TH1D("VbbHcc_algo_CutFlow", "", 7, 0, 7);
  h_evt_algo_cutflow->GetXaxis()->SetBinLabel(1, "Total");
  h_evt_algo_cutflow->GetXaxis()->SetBinLabel(2, "MET cut");
  h_evt_algo_cutflow->GetXaxis()->SetBinLabel(3, "jet cuts");
  h_evt_algo_cutflow->GetXaxis()->SetBinLabel(4, "b-tag #1");
  h_evt_algo_cutflow->GetXaxis()->SetBinLabel(5, "b-tag #2");
  h_evt_algo_cutflow->GetXaxis()->SetBinLabel(6, "c-tag #1");
  h_evt_algo_cutflow->GetXaxis()->SetBinLabel(7, "c-tag #2");
  
  h_evt_both_cutflow = new TH1D("VbbHcc_both_CutFlow", "", 4, 0, 4);
  h_evt_both_cutflow->GetXaxis()->SetBinLabel(1, "Total");
  h_evt_both_cutflow->GetXaxis()->SetBinLabel(2, "MET cut");
  h_evt_both_cutflow->GetXaxis()->SetBinLabel(3, "jet cuts");
  h_evt_both_cutflow->GetXaxis()->SetBinLabel(4, "tags cut");

  // Set up the CutFlows (for obj selections)
  h_jet_cutflow = new TH1D("VbbHcc_CutFlow_jets", "", 4, 0, 4);
  h_jet_cutflow->GetXaxis()->SetBinLabel(1, "Total");
  h_jet_cutflow->GetXaxis()->SetBinLabel(2, "pT cut");
  h_jet_cutflow->GetXaxis()->SetBinLabel(3, "eta cut");
  h_jet_cutflow->GetXaxis()->SetBinLabel(4, "iso req");
  
  h_elec_cutflow = new TH1D("VbbHcc_CutFlow_elec", "", 5, 0, 5);
  h_elec_cutflow->GetXaxis()->SetBinLabel(1, "Total");
  h_elec_cutflow->GetXaxis()->SetBinLabel(2, "pT cut");
  h_elec_cutflow->GetXaxis()->SetBinLabel(3, "eta cut");
  h_elec_cutflow->GetXaxis()->SetBinLabel(4, "etaSC cut");
  h_elec_cutflow->GetXaxis()->SetBinLabel(5, "loose ID cut");
  
  h_muon_cutflow = new TH1D("VbbHcc_CutFlow_muon", "", 5, 0, 5);
  h_muon_cutflow->GetXaxis()->SetBinLabel(1, "Total");
  h_muon_cutflow->GetXaxis()->SetBinLabel(2, "pT cut");
  h_muon_cutflow->GetXaxis()->SetBinLabel(3, "eta cut");
  h_muon_cutflow->GetXaxis()->SetBinLabel(4, "loose ID cut");
  h_muon_cutflow->GetXaxis()->SetBinLabel(5, "iso cut");

  // Set up miscellaneous histograms
  h_nCombos = new TH1D("nCombos", "", 5, -0.5, 4.5);
  h_dR_ccjet = new TH1D("ccjet_dR", "", 100, 0, 10);
  h_dPhi_ccjet = new TH1D("ccjet_dPhi", "", 240, 0, 4.0);
  h_dR_bbjet = new TH1D("bbjet_dR", "", 100, 0, 10);
  h_dPhi_bbjet = new TH1D("bbjet_dPhi", "", 240, 0, 4.0); 

  h_mistag_leading = new TH1D("mistag_leading", "", 3, 0, 3);
  h_mistag_leading->GetXaxis()->SetBinLabel(1, "Total");
  h_mistag_leading->GetXaxis()->SetBinLabel(2, "mistag");
  h_mistag_leading->GetXaxis()->SetBinLabel(3, "proper");
  h_mistag_all = new TH1D("mistag_all", "", 3, 0, 3);
  h_mistag_all->GetXaxis()->SetBinLabel(1, "Total");
  h_mistag_all->GetXaxis()->SetBinLabel(2, "mistag");
  h_mistag_all->GetXaxis()->SetBinLabel(3, "proper");

  h_bRegCorr = new TH1D("bRegCorr", "", 200, 0, 2);
  h_cRegCorr = new TH1D("cRegCorr", "", 200, 0, 2);
  h_JetMass = new TH1D("JetMass", "", 300, 0, 300);  

  // Add them to the return list so we can use them in our analyses.
  r->GetOutputList()->Add(h_evt);

  r->GetOutputList()->Add(h_bRegCorr);
  r->GetOutputList()->Add(h_cRegCorr);
  r->GetOutputList()->Add(h_JetMass);

  std::vector<TH1*> tmp = h_VH_MC->returnHisto();
  for(size_t i=0; i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_VH_MCjet->returnHisto();
  for(size_t i=0; i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);

  tmp = h_VH_tags->returnHisto();
  for(size_t i=0; i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_VH_algo->returnHisto();
  for(size_t i=0; i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_VH_both->returnHisto();
  for(size_t i=0; i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_VH_all->returnHisto();
  for(size_t i=0; i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_VH_alljet->returnHisto();
  for(size_t i=0; i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_VH_seljet->returnHisto();
  for(size_t i=0; i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);

  tmp = h_VH_jets->returnHisto();
  for(size_t i=0; i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_VH_jets_all->returnHisto();
  for(size_t i=0; i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_VH_MC_jets->returnHisto();
  for(size_t i=0; i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_VH_4b->returnHisto();
  for(size_t i=0; i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_VH_2b2c->returnHisto();
  for(size_t i=0; i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);

  tmp = h_eff_tags->returnHisto();
  for(size_t i=0; i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_eff_algo->returnHisto();
  for(size_t i=0; i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_eff_both->returnHisto();
  for(size_t i=0; i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);

  tmp = h_genJet_all->returnHisto();
  for(size_t i=0; i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_genJet_cuts->returnHisto();
  for(size_t i=0; i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_genJet_VbbHcc->returnHisto();
  for(size_t i=0; i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);

  r->GetOutputList()->Add(h_evt_VbbHcc);
  r->GetOutputList()->Add(h_evt_MC_cutflow);
  r->GetOutputList()->Add(h_evt_tags_cutflow);
  r->GetOutputList()->Add(h_evt_algo_cutflow);
  r->GetOutputList()->Add(h_evt_both_cutflow);

  r->GetOutputList()->Add(h_jet_cutflow);
  r->GetOutputList()->Add(h_elec_cutflow);
  r->GetOutputList()->Add(h_muon_cutflow);  
  r->GetOutputList()->Add(h_nCombos);
  r->GetOutputList()->Add(h_dR_ccjet);
  r->GetOutputList()->Add(h_dPhi_ccjet);
  r->GetOutputList()->Add(h_dR_bbjet);
  r->GetOutputList()->Add(h_dPhi_bbjet);

  r->GetOutputList()->Add(h_mistag_leading);
  r->GetOutputList()->Add(h_mistag_all);
}// end SlaveBegin

// == Process =================================================================

/*
 * This is where we do the actual analysis. We need to do the 
 * following steps for each event:
 *
 * 1. determine the events for the weight
 * 2. reconstruct the Physics objects
 * 3. analyze them as desired
 * 4. pray that nothing fails
*/

void VH_selection::Process(Reader* r) { 

  //=================================================================
  // WEIGHTS & GEN INFORMATION
  //=================================================================

  float genWeight = 1.;
  float puSF = 1.;
  float l1preW = 1.;

#if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)

  // Determine the generator weights
  if (*(r->genWeight) < 0) genWeight = -1.;
  if (*(r->genWeight) == 0) {
    genWeight = 0;
    h_evt->Fill(0);
  }
  if (*(r->genWeight) < 0) h_evt->Fill(-1);
  if (*(r->genWeight) > 0) h_evt->Fill(1);

  // Use central general weights to normalize generator weights
  if (m_centralGenWeight != 0) genWeight *= *(r->genWeight)/m_centralGenWeight;
  puSF = PileupSF(*(r->Pileup_nTrueInt));

#endif

  h_evt->Fill(2, genWeight); 

#if defined(MC_2016) || defined(MC_2017)

  // Handle the L1 Pre-Firing weight for 2016-2017
  l1preW = *(r->L1PreFiringWeight_Nom);

  if (m_l1prefiringType == "l1prefiringu") l1preW = *(r->L1PreFiringWeight_Up);
  if (m_l1prefiringType == "l1prefiringd") l1preW = *(r->L1PreFiringWeight_Dn);

#endif

#if defined(DATA_2016) || defined(DATA_2017) || defined(DATA_2018)

  h_evt->Fill(-1);
  if (!m_lumiFilter.Pass(*(r->run), *(r->luminosityBlock))) return;
  h_evt->Fill(1);

#endif

  float evtW = 1.;
  if (!m_isData) evtW *= genWeight * puSF * l1preW;

  //=================================================================
  // RECONSTRUCT PHYSICS OBJECTS
  //=================================================================
  
  // ==== JETS (NO KINEMATIC CUTS) ====
  std::vector<JetObj> jets;
  for (unsigned int i = 0; i < *(r->nJet); ++i) {

    // Get the flavor of the jets
    int jetFlav = -1;
#if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)
    jetFlav = (r->Jet_hadronFlavour)[i];
#endif

    // Make sure to properly correct the jet energy
    Float_t pt = (r->Jet_pt)[i];
    Float_t jet_mass = (r->Jet_mass)[i];
    Float_t bRegCorr = (r->Jet_bRegCorr)[i];
    Float_t cRegCorr = (r->Jet_cRegCorr)[i];
    Float_t bRegRes  = (r->Jet_bRegRes)[i];
    Float_t cRegRes  = (r->Jet_cRegRes)[i];

    h_bRegCorr->Fill(bRegCorr, evtW);
    h_cRegCorr->Fill(cRegCorr, evtW);
    h_JetMass->Fill(jet_mass, evtW);

    // Reconstruct the jet
    JetObj jet(pt, (r->Jet_eta)[i], (r->Jet_phi)[i], jet_mass,
      jetFlav, (r->Jet_btagDeepFlavB)[i], (r->Jet_puId)[i]);

    jet.StoreRegInfo(bRegCorr, bRegRes, cRegCorr, cRegRes);   

    // Handle getting the c-tag value which is different
    // depending on the version of NanoAOD.
#if defined(NANOAODV9)
    jet.m_deepCvL = (r->Jet_btagDeepFlavCvL)[i];
    jet.m_deepCvB = (r->Jet_btagDeepFlavCvB)[i];
#endif

#if defined(NANOAODV7)
    jet.m_deepCvL = (r->Jet_btagDeepFlavC)[i];
    jet.m_deepCvB = (r->FatJet_btagDDCvB)[i];
#endif

    // If we're in a MC file, let's note which gen jet
    // is associated with thsi reco jet.
#if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)
    jet.m_genJetIdx = (r->Jet_genJetIdx)[i];
#endif

    // Add the jet to our overall list.
    jet.SetIdxAll(i);
    jets.push_back(jet);

  }//end-jets
   
  // ==== ELECTRONS ====
  std::vector<LepObj> elecs;
  for (unsigned int i = 0; i < *(r->nElectron); ++i) {

    // Produce an electron from the information.
    h_elec_cutflow->Fill(0.5, genWeight); // all electrons

    float etaSC = (r->Electron_eta)[i] - (r->Electron_deltaEtaSC)[i];
    LepObj elec((r->Electron_pt)[i], (r->Electron_eta)[i], etaSC,
           (r->Electron_phi)[i], (r->Electron_mass)[i], i,
           (r->Electron_charge)[i], 0);

    // Cut based on the pT & eta values
    if (elec.Pt() < CUTS.Get<float>("lep_pt1")) continue;
    h_elec_cutflow->Fill(1.5, genWeight); // pass pT cut
    if (fabs(elec.Eta()) > CUTS.Get<float>("lep_eta")) continue;
    h_elec_cutflow->Fill(2.5, genWeight); // pass eta cut

    // Cut based on SC value
    if (fabs(etaSC) < 1.566 && fabs(etaSC) > 1.442) continue;
    h_elec_cutflow->Fill(3.5, genWeight); // pass SC cut

    // Cut based on the isolation
    int elecID = r->Electron_cutBased[i];
    if (elecID < 2) continue; // loose electron ID
    h_elec_cutflow->Fill(4.5, genWeight); // pass ID cut

    // Add the electrons to the list
    elecs.push_back(elec);

  }//end-elecs

  // ==== MUONS ====
  std::vector<LepObj> muons;
  for (unsigned int i = 0; i < *(r->nMuon); ++i) {

    // Produce a muon from the information
    h_muon_cutflow->Fill(0.5, genWeight); // all muons
    LepObj muon((r->Muon_pt)[i], (r->Muon_eta)[i], -1, (r->Muon_phi)[i],
           (r->Muon_mass)[i], i, (r->Muon_charge)[i],
           (r->Muon_pfRelIso04_all)[i]);

    // Cut based on the pT & eta values
    if (muon.Pt() < CUTS.Get<float>("lep_pt1")) continue;
    h_muon_cutflow->Fill(1.5, genWeight); // pass pT cut
    if (fabs(muon.Eta()) > CUTS.Get<float>("lep_eta")) continue;
    h_muon_cutflow->Fill(2.5, genWeight); // pass eta cut

    // Cut based on the loose ID
    if (r->Muon_looseId[i] <= 0) continue;
    h_muon_cutflow->Fill(3.5, genWeight); // pass ID cut

    // Cut based on an isolation value
    if (muon.m_iso > CUTS.Get<float>("muon_iso")) continue;
    h_muon_cutflow->Fill(4.5, genWeight); // pass iso cut

    // Add the muon to the list.
    muons.push_back(muon);

  }//end-muons

  //=================================================================
  // START EVENT SELECTION
  //=================================================================
 
  // All CutFlows need to show the total events.
  h_evt_MC_cutflow->Fill(0.5, genWeight);   // MC Truth
  h_evt_tags_cutflow->Fill(0.5, genWeight); // Tagging Only
  h_evt_algo_cutflow->Fill(0.5, genWeight); // Matching Prioritized
  h_evt_both_cutflow->Fill(0.5, genWeight); // Tagging Prioritized

  h_VH_all->FillMET(*(r->MET_pt), evtW);
  if (*(r->MET_pt) >= CUTS.Get<float>("MET")) return;

  // Show that we pass the MET cut.
  h_evt_MC_cutflow->Fill(1.5, genWeight);
  h_evt_tags_cutflow->Fill(1.5, genWeight);
  h_evt_algo_cutflow->Fill(1.5, genWeight);
  h_evt_both_cutflow->Fill(1.5, genWeight);

  /********************************************************
  * MONTE CARLO TRUTH - we want to have the MC truth      *
  * values to get an idea of how well we are selecting    *
  * events. We should have several delta-like functions   *
  * in this case (mass specifically).                     *
  ********************************************************/
  
  bool is_VbbHcc_event = false;
  std::vector<std::vector<int> > dauIdxs;
  std::vector<JetObj> gen_bs;
  std::vector<JetObj> gen_cs;

  h_evt_VbbHcc->Fill(0.5, evtW);

#if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)

  // Make sure we have two daughters for each particle of the proper type.
  int idZ = 0, idH = 1;
  dauIdxs = DauIdxs_ZH(r);
  
  if (dauIdxs[idZ].size() == 2 && dauIdxs[idH].size() == 2) {
    is_VbbHcc_event = true;
    h_evt_MC_cutflow->Fill(1.5, genWeight); // pass # daughters
    int idx1_Z = dauIdxs[idZ][0];
    int idx2_Z = dauIdxs[idZ][1];
    int idx1_H = dauIdxs[idH][0];
    int idx2_H = dauIdxs[idH][1];

    // Reconstruct from the GenPart data.
    // Two b quarks --> ZObj
    JetObj b0((r->GenPart_pt)[idx1_Z], (r->GenPart_eta)[idx1_Z],
      (r->GenPart_phi)[idx1_Z], (r->GenPart_mass)[idx1_Z], 5, 0., 0.);
    JetObj b1((r->GenPart_pt)[idx2_Z], (r->GenPart_eta)[idx2_Z],
      (r->GenPart_phi)[idx2_Z], (r->GenPart_mass)[idx2_Z], 5, 0., 0.);
    std::vector<JetObj> MC_bjets{b0, b1};
    gen_bs.push_back(b0); gen_bs.push_back(b1);
    ZObj MC_Z(MC_bjets);

    // Two c quarks --> HObj
    JetObj c0((r->GenPart_pt)[idx1_H], (r->GenPart_eta)[idx1_H],
      (r->GenPart_phi)[idx1_H], (r->GenPart_mass)[idx1_H], 4, 0., 0.);
    JetObj c1((r->GenPart_pt)[idx2_H], (r->GenPart_eta)[idx2_H],
      (r->GenPart_phi)[idx2_H], (r->GenPart_mass)[idx2_H], 4, 0., 0.);
    std::vector<JetObj> MC_cjets{c0, c1};
    gen_cs.push_back(c0); gen_cs.push_back(c1);
    HObj MC_H(MC_cjets);

    // Fill the histograms
    h_VH_MC->FillVH(MC_Z, MC_H, evtW);

    is_VbbHcc_event = true;
    h_evt_VbbHcc->Fill(1.5, evtW);

  }//end-MC-truth

#endif

  /********************************************************
  * MONTE CARLO TRUTH JETS - In the previous MC truth, we *
  * only have the quarks. Here, we want to find the jets  *
  * that match the MC quarks.                             *    
  ********************************************************/

  std::vector<JetObj> gen_bjets;
  std::vector<JetObj> gen_cjets;
  bool found_MCjets = false;

#if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)

  // Go through all the gen jets
  std::vector<JetObj> genJet_all;
  std::vector<JetObj> genJet_cut;
  for (unsigned int i = 0; i < *(r->nGenJet); ++i) {
    
    // Build a jet from the information.
    Int_t flavor = (r->GenJet_partonFlavour)[i];
    Float_t eta = (r->GenJet_eta)[i], pt = (r->GenJet_pt)[i];
    JetObj gjet(pt, eta, (r->GenJet_phi)[i],
      (r->GenJet_mass)[i], flavor, 0, 0);

    genJet_all.push_back(gjet);
    
    // Check the cuts we're interested in for jets.
    if (pt > CUTS.Get<float>("jet_pt") && fabs(eta) < CUTS.Get<float>("jet_eta")) {
      genJet_cut.push_back(gjet);
    }
  }

  h_genJet_all->Fill(genJet_all, evtW);
  h_genJet_cuts->Fill(genJet_cut, evtW);
  
  if (is_VbbHcc_event) {
    
    // Make a copy of the jets
    std::vector<JetObj> jetlist; jetlist = jets;
    std::vector<JetObj> genJet_list;  
    std::vector<JetObj> genCjet_list;
    std::vector<JetObj> genBjet_list;

    // Make a list of the GenJets
    int nL = 0, nC = 0, nB = 0, nGlu = 0;
    for (unsigned int i = 0; i < *(r->nGenJet); ++i) {
  
      // Build a jet from the information
      Int_t flavor = (r->GenJet_partonFlavour)[i];
      JetObj gjet((r->GenJet_pt)[i], (r->GenJet_eta)[i], (r->GenJet_phi)[i], 
        (r->GenJet_mass)[i], flavor, 0, 0);

      genJet_list.push_back(gjet);
      if (abs(flavor) <= 3) nL++;
      else if (abs(flavor) == 4){ 
        genCjet_list.push_back(gjet); nC++;
      }
      else if (abs(flavor) == 5){
        genBjet_list.push_back(gjet); nB++;
      }
      else if (abs(flavor) == 21) nGlu++;
    }
    
    h_genJet_VbbHcc->Fill(genJet_list, evtW);

    // Get the c-jets
    if (genCjet_list.size() >= 2 && genBjet_list.size() >= 2) {      

      found_MCjets = true;
      
      // Find how the b-jets match the b-quarks.
      std::vector<std::pair<int,float>> jets_idx_dR;
      for (size_t i = 0; i < gen_bs.size(); ++i) {
        for (size_t j = 0; j < genBjet_list.size(); ++j) {
          float dR = fabs(gen_bs[i].m_lvec.DeltaR(genBjet_list[j].m_lvec));
          //std::cout << "b[" << i << "] | bjet[" << j << "] = " << dR << "\n";
          jets_idx_dR.push_back(std::make_pair(j,dR));
        }

        // Get the closest one
        std::sort(jets_idx_dR.begin(), jets_idx_dR.end(), sort_by_second);
        std::pair<int, float> proper_pair = jets_idx_dR[0];

        int idx = proper_pair.first;
        gen_bjets.push_back(genBjet_list[idx]);
        genBjet_list.erase(genBjet_list.begin() + idx);

      }//end-i
      
      // Find how the c-jets match the c-quarks.
      std::vector<std::pair<int,float>> jets_idx_dR2;
      for (size_t i = 0; i < gen_cs.size(); ++i) {
        for (size_t j = 0; j < genCjet_list.size(); ++j) {
          float dR = fabs(gen_cs[i].m_lvec.DeltaR(genCjet_list[j].m_lvec));
          //std::cout << "c[" << i << "] | cjet[" << j << "] = " << dR << "\n";
          jets_idx_dR2.push_back(std::make_pair(j,dR));
        }//end-j

        // Get the closest one
        std::sort(jets_idx_dR2.begin(), jets_idx_dR2.end(), sort_by_second);
        std::pair<int, float> proper_pair = jets_idx_dR2[0];

        int idx2 = proper_pair.first;
        gen_cjets.push_back(genCjet_list[idx2]);
        genCjet_list.erase(genCjet_list.begin() + idx2);
      }//end-i
      
      h_evt_VbbHcc->Fill(2.5, evtW);

    }//end-found-jets
    
    /*if (genCjet_list.size() == 1) {
      std::cout << "only ONE cjet found" << std::endl;
      std::cout << ">>> pt = " << genCjet_list[0].Pt() << "\n";
      std::cout << ">>> m  = " << genCjet_list[0].M() << "\n";
    }
    if (genBjet_list.size() == 1) {
      std::cout << "only ONE bjet found" << std::endl;
      std::cout << ">>> pt = " << genBjet_list[0].Pt() << "\n";
      std::cout << ">>> m  = " << genBjet_list[0].M() << "\n";
    }*/
  }//end-VbbHcc-check
#endif

  /********************************************************
  * JET ANALYSIS/SELECTION - we want to make sure we only *
  * select jets that are  useful for our analysis.        *
  ********************************************************/

  // For the remainder of the selections, we want to only have jets
  // that meet our criteria. Let's make sure we have enough jets to
  // meet our requirements.
  std::vector<JetObj> analysis_jets;
  int nJets = 0;
  for (unsigned int i = 0; i < jets.size(); ++i) {

    h_jet_cutflow->Fill(0.5, genWeight); // all jets
    TLorentzVector vec = jets[i].m_lvec;

    // Check to make sure that the jet pass our pT cuts.
    // NOTE: we have an extra cut for the leading jet.
    if (vec.Pt() < CUTS.Get<float>("jet_pt")) continue;
    if (i == 0 and vec.Pt() < CUTS.Get<float>("jet_pt0")) continue;
    h_jet_cutflow->Fill(1.5, genWeight); 

    // Check to make sure our jets are in the eta region we want.
    if (fabs(vec.Eta()) > CUTS.Get<float>("jet_eta")) continue;
    h_jet_cutflow->Fill(2.5, genWeight); 

    // NEW: Make sure they pass the pileup ID requirement
    // if the jet pT < 50 GeV. NOTE: There will be different
    // values for 2016 vs. 2017-2018. In either case, we're
    // checking if it passes the medium WP.
    if (vec.Pt() < 50.0) {
#if defined(MC_2016) || defined(DATA_2016)
      if (jets[i].m_puid < 1) continue;
#endif 

#if defined(MC_2017) || defined(MC_2018) || defined(DATA_2017) || defined(DATA_2018)
      if (jets[i].m_puid < 4) continue;
#endif
    }

    // Check if the electrons & muons overlap with the jets.
    // If dR(jet, lepton) < 0.4, discard the jet.
    bool isElectron = jets[i].IsLepton(elecs);
    bool isMuon     = jets[i].IsLepton(muons);
    if (isElectron || isMuon) continue;
    h_jet_cutflow->Fill(3.5, genWeight); // passed iso cut

    // Add jet to our selected jet list
    jets[i].SetIdx(nJets); nJets++;
    analysis_jets.push_back(jets.at(i));

  }//end-for-jets

  // Fill the proper jet plots with the jets we're interested in.
  h_VH_jets->Fill(analysis_jets, evtW);
  h_VH_jets_all->Fill(jets, evtW);

  //===========================================================================
  // Any analysis after this point should be using only our selected jets which
  // pass our selection criteria. There should be at least four of them.
  //===========================================================================
  if (analysis_jets.size() >= 4) {

    h_evt_tags_cutflow->Fill(2.5, genWeight); // passed jet selection
    h_evt_algo_cutflow->Fill(2.5, genWeight); 
    h_evt_both_cutflow->Fill(2.5, genWeight); 

    /***************************************************************************
    * Check what we get for H and Z candidates by just using the leading pT    *
    * jets after any cuts (but before ANY tagging.                             *
    ***************************************************************************/
     
    // Make a copy of the jets and select/sort by pT.
    std::vector<JetObj> afterjets; afterjets = analysis_jets;
    std::sort(afterjets.begin(), afterjets.end(), JetObj::JetCompPt());
    
    // Reconstruct the Higgs boson with the highest two.
    std::vector<JetObj> acjets { afterjets[0], afterjets[1] };
    HObj Hafter(acjets);
    
    // Reconstruct the Z boson with the next highest two.
    std::vector<JetObj> abjets { afterjets[2], afterjets[3] };
    ZObj Zafter(abjets);
    
    // Fill the proper plots
    h_VH_seljet->FillVH(Zafter, Hafter, evtW); 

    /**************************************************************************
    * GET THE PROPER TAGGING CUTS THAT WE WANT TO USE                         *
    **************************************************************************/

    // We don't want to have to change the working point in several spots,
    // so we choose here and then we can use these variables wherever needed.
    float desired_BvL = CUTS.Get<float>("BvL_mediumWP_deepJet");
    float desired_CvL = CUTS.Get<float>("CvL_mediumWP_deepJet");
    float desired_CvB = CUTS.Get<float>("CvB_mediumWP_deepJet");

    /**************************************************************************
    * MISTAG RATE ANALYSIS                                                    *
    **************************************************************************/
    
#if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)
    std::vector<JetObj> jetlistCopy; jetlistCopy = analysis_jets;
    std::sort(jetlistCopy.begin(), jetlistCopy.end(), JetObj::JetCompPt());
    
    bool found_leading = false;
    for (size_t i = 0; i < jetlistCopy.size(); ++i) {

      // check the leading light jet (if we haven't yet)
      if (!found_leading) {
        JetObj leadingJet = jetlistCopy[i];
        if (leadingJet.m_flav < 4) {
          found_leading = true;
          h_mistag_leading->Fill(0.5, evtW);
          if (leadingJet.m_deepCSV > desired_BvL)
            h_mistag_leading->Fill(1.5, evtW);
          else h_mistag_leading->Fill(2.5, evtW);
        }        
      }//end-leading

      // Check all the light jets we have
      if (jetlistCopy[i].m_flav < 4) {
        h_mistag_all->Fill(0.5, evtW);
        if (jetlistCopy[i].m_deepCSV > desired_BvL)
          h_mistag_all->Fill(1.5, evtW);
        else h_mistag_all->Fill(2.5, evtW);
      }
    }
#endif

    /**************************************************************************
    * JET ANALYSIS - 4B vs 2b2c                                               *
    **************************************************************************/
    
    // Go through the jets and get the distributions
    // for when we have 4b jets in the final state.
    std::vector<JetObj> jetsB; jetsB = analysis_jets;
    std::sort(jetsB.begin(), jetsB.end(), JetObj::JetCompBtag());
    std::vector<JetObj> bjetsB { jetsB[0], jetsB[1], jetsB[2], jetsB[3] };
    if (are_bjets(bjetsB, desired_BvL)) {
      h_VH_4b->Fill(bjetsB, evtW);
    }

    // Go through the jets and get the distirbutions
    // for when we have 2b 2c jets in the final state.
    std::vector<JetObj> jetsBC; jetsBC = analysis_jets;
    std::sort(jetsBC.begin(), jetsBC.end(), JetObj::JetCompBtag());
    std::vector<JetObj> bjetsBC { jetsBC[0], jetsBC[1] };
    jetsBC.erase(jetsBC.begin() + 1); jetsBC.erase(jetsBC.begin() + 0);
    if (are_bjets(bjetsBC, desired_BvL)) {

      std::sort(jetsBC.begin(), jetsBC.end(), JetObj::JetCompCtag());
      std::vector<JetObj> cjetsBC { jetsBC[0], jetsBC[1] };
      jetsBC.erase(jetsBC.begin() + 1); jetsBC.erase(jetsBC.begin() + 0);
      if (are_cjets(cjetsBC, desired_CvL, desired_CvB)) {
        h_VH_2b2c->Fill(bjetsBC, evtW);
        h_VH_2b2c->Fill(cjetsBC, evtW);
      }
 
    }

    /**************************************************************************
    * Selection Method #1 - TAGGING ONLY                                      *
    **************************************************************************/

    // Make an appropriate copy of the jets to use for this analysis.
    std::vector<JetObj> jets2; jets2 = analysis_jets;

    // Select two jets with the largest btag values and then
    // check against our working point of interest. (NOTE: when
    // we sort by btag (descending order), the largest two will
    // automatically be in the first two indices.)
    std::sort(jets2.begin(), jets2.end(), JetObj::JetCompBtag());
    std::vector<JetObj> bjets2 { jets2[0], jets2[1] };
    jets2.erase(jets2.begin() + 1); jets2.erase(jets2.begin() + 0);

    if (passes_btag(bjets2[0], desired_BvL)) {

      h_evt_tags_cutflow->Fill(3.5, genWeight); // pass b-cut #1
      if (passes_btag(bjets2[1], desired_BvL)) {

        // Since we passed the cut, adjust our jets with the proper
        // JEC for b-tagged jets and reconstruct the Z boson
        h_evt_tags_cutflow->Fill(4.5, genWeight); // pass b-cut #2

        bjets2[0].ApplyRegression(5); // flav = 5 (b-quark)
        bjets2[1].ApplyRegression(5);
        ZObj Z2(bjets2);
      
        // Select two jets with the largest ctag values and then
        // check against our working point of interest.
        std::sort(jets2.begin(), jets2.end(), JetObj::JetCompCtag());
        std::vector<JetObj> cjets2 { jets2[0], jets2[1] };
        jets2.erase(jets2.begin() + 1); jets2.erase(jets2.begin() + 0);

        if (passes_ctag(cjets2[0], desired_CvL, desired_CvB)) {

          h_evt_tags_cutflow->Fill(5.5, genWeight); // pass c-cut #1
          if (passes_ctag(cjets2[1], desired_CvL, desired_CvB)) {
          
            // Since we passed the cuts, adjust our jets with the proper
            // JEC for c-tagged jets and reconstruct the Higgs boson
            h_evt_tags_cutflow->Fill(6.5, genWeight); // pass c-cut #2

            cjets2[0].ApplyRegression(4); // flav = 4 (c-quark)
            cjets2[1].ApplyRegression(4);
            HObj H2(cjets2);

            h_VH_tags->FillVH(Z2, H2, evtW);         

#if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)
            h_VH_tags->FillGluCheck(Z2, evtW);
            
            // If we have a proper VbbHcc event and we've found the 
            // proper MC truth objects, check the efficiency.
            if (is_VbbHcc_event) {
              h_eff_tags->Fill(Z2, H2, gen_bs, gen_cs, true, evtW);
            }
#endif 

          }//end-c-cut-2
        }//end-c-cut-1
      }//end-b-cut-2
    }//end-b-cut-1
   
    /**************************************************************************
    * Selection Method #2 -  MASS-MATCHING PRIORITIZED                        *
    **************************************************************************/

    // Make an appropriate copy of the jets to use for this analysis.
    std::vector<JetObj> jets3; jets3 = analysis_jets;
    std::sort(jets3.begin(), jets3.end(), JetObj::JetCompPt());
    
    // Create the objects for the distance calculations and make sure we sort
    // them in ascending order. (All necessary calculations for algorithms
    // are handled within the DObj class.)
    DHZObj d0(jets3, 0, 1, 2, 3);          // H(0,1) ; Z(2,3)
    DHZObj d1(jets3, 0, 2, 1, 3);          // H(0,2) ; Z(1,3)
    DHZObj d2(jets3, 0, 3, 1, 2);          // H(0,3) ; Z(1,2)
    std::vector<DHZObj> distances {d0, d1, d2};
    std::sort(distances.begin(), distances.end());

    // Determine the distance between the closest two. Then, based on this
    // distance, determine which pair we want to use. If we are outside the
    // resolution window (30 GeV), we can just choose the closest pair. 
    // Otherwise, we need to make a logical choice between d0 and d1.
    float deltaD = fabs(distances[0].m_d - distances[1].m_d);
    DHZObj chosenPair = distances[0];

    if (deltaD < 30) {
      float pt0 = distances[0].HPt();
      float pt1 = distances[1].HPt();
      int idx = 0;
      if (pt1 > pt0) idx = 1;
      chosenPair = distances[idx];
    }

    // Reconstruct the objects here for various uses.
    h_VH_algo->FillAlgo(distances, evtW);
    std::vector<JetObj> bjets3;
    bjets3.push_back(jets3[chosenPair.m_zIdx0]);
    bjets3.push_back(jets3[chosenPair.m_zIdx1]);
    bjets3[0].ApplyRegression(5);
    bjets3[1].ApplyRegression(5);
    ZObj Z3(bjets3);

    std::vector<JetObj> cjets3;
    cjets3.push_back(jets3[chosenPair.m_hIdx0]);
    cjets3.push_back(jets3[chosenPair.m_hIdx1]);
    cjets3[0].ApplyRegression(4);
    cjets3[1].ApplyRegression(4);
    HObj H3(cjets3);

    // Now check our tagging requirements and other cuts.
    if (chosenPair.Z_has_bjet0(desired_BvL)) {  
      h_evt_algo_cutflow->Fill(3.5, genWeight); // pass b-tag #1
      if (chosenPair.Z_has_bjet1(desired_BvL)) {
        h_evt_algo_cutflow->Fill(4.5, genWeight); // pass b-tag #2

        if (chosenPair.H_has_cjet0(desired_CvL, desired_CvB)) {
          h_evt_algo_cutflow->Fill(5.5, genWeight); // pass c-tag #1
          if (chosenPair.H_has_cjet1(desired_CvL, desired_CvB)) {
            h_evt_algo_cutflow->Fill(6.5, genWeight); // pass c-tag #2
            
            // Fill our histograms appropriately.
            h_VH_algo->FillVH(Z3, H3, evtW);

#if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)
            h_VH_algo->FillGluCheck(Z3, evtW);

            // If we have a proper VbbHcc event and we've found the 
            // proper MC truth objects, check the efficiency.
            if (is_VbbHcc_event) {
              h_eff_algo->Fill(Z3, H3, gen_bs, gen_cs, true, evtW);
            }
#endif

          }//end-c-cut-2
        }//end-c-cut-1
      }//end-b-cut-2
    }//end-b-cut-1 

    /**************************************************************************
    * Selection Method #3 - TAGGING PRIORITIZED                               *
    **************************************************************************/
  
    // Make an appropriate copy of the jets to use for this analysis.
    std::vector<JetObj> jets4; jets4 = analysis_jets;
    
    // Check our jets and push them to the appropriate lists by 
    // checking if the tagging scores meet our desired cuts.
    std::vector<std::pair<int,float> > jets_idx_BvL;
    std::vector<std::pair<int,float> > jets_idx_CvL;
    for (size_t i = 0; i < jets4.size(); ++i) {

      float csv = jets4[i].m_deepCSV;
      float cvl = jets4[i].m_deepCvL;

      if (passes_btag(jets4[i], desired_BvL)) {
        std::pair<int,float> pair0(i,csv);
        jets_idx_BvL.push_back(pair0); 
      }
      if (passes_ctag(jets4[i], desired_CvL, desired_CvB)){
        std::pair<int,float> pair1(i,cvl);
        jets_idx_CvL.push_back(pair1);
      }
    }

    // Sort the jets so that the largest tagging-scores
    // are at the top of our lists.
    std::sort(jets_idx_BvL.begin(), jets_idx_BvL.end(), sort_by_second_descend);
    std::sort(jets_idx_CvL.begin(), jets_idx_CvL.end(), sort_by_second_descend);

    // Create the vectors containing of b- and c-jets indices
    std::vector<int> bIndices;
    std::vector<int> cIndices;

    for (auto p : jets_idx_BvL){ bIndices.push_back(p.first); }
    for (auto p : jets_idx_CvL){ cIndices.push_back(p.first); }
 
    // Find appropriate combinations of jets.
    std::vector<std::vector<int>> combos = find_valid_combos(bIndices, cIndices);
    h_nCombos->Fill(combos.size(), evtW);
    
    // If there are possible combos, let's check them.
    if (combos.size() > 0) {

      h_evt_both_cutflow->Fill(3.5, genWeight); // passed tags

      // From the combos we've found, run the DHZ algorithm and
      // determine which is the best combination.
      std::vector<DHZObj> DHZ_values;
      for (size_t i = 0; i < combos.size(); ++i) {

        std::vector<int> idxs = combos[i];

        // Create a DHZ Object & add it to the list.
        DHZObj D(jets4, idxs[2], idxs[3], idxs[0], idxs[1]);
        DHZ_values.push_back(D);
      }

      // Sort the values by their distance. Then, determine the distance
      // between the closest two. Based on this distance, determine which
      // pair we want to use. (NOTE: we might only have one combination.)
      std::sort(DHZ_values.begin(), DHZ_values.end());
      DHZObj chosenPair = DHZ_values[0];

      if (DHZ_values.size() >= 2) {
        float deltaD = fabs(DHZ_values[0].m_d - DHZ_values[1].m_d);
        if (deltaD < 30) {
          float pt0 = DHZ_values[0].HPt();
          float pt1 = DHZ_values[1].HPt();
          int idx = 0;
          if (pt1 > pt0) idx = 1;
          chosenPair = DHZ_values[idx];
        }
      }

      // Reconstruct the objects for use.
      h_VH_both->FillAlgo(DHZ_values, evtW);
      std::vector<JetObj> bjets4;
      bjets4.push_back(jets4[chosenPair.m_zIdx0]);
      bjets4.push_back(jets4[chosenPair.m_zIdx1]);
      bjets4[0].ApplyRegression(5);
      bjets4[1].ApplyRegression(5); 
      ZObj Z4(bjets4);

      std::vector<JetObj> cjets4;
      cjets4.push_back(jets4[chosenPair.m_hIdx0]);
      cjets4.push_back(jets4[chosenPair.m_hIdx1]);
      cjets4[0].ApplyRegression(4);
      cjets4[1].ApplyRegression(4);
      HObj H4(cjets4);

      // Fill our histograms appropriately.
      h_VH_both->FillVH(Z4, H4, evtW);

#if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)
        h_VH_both->FillGluCheck(Z4, evtW);

        // If we have a proper VbbHcc event and we've found the 
        // proper MC truth objects, check the efficiency.
        if (is_VbbHcc_event) {
          h_eff_both->Fill(Z4, H4, gen_bs, gen_cs, true, evtW);
        }
#endif

    }//end-tagging

  }//end-analysis-jets
}// end Process

//== TERMINATE ================================================================

void VH_selection::Terminate(TList* mergedList, std::string outFileName) { }

//== END OF FILE ==============================================================

