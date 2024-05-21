#define VH_selection_cxx

/******************************************************************************
 ######  ######## ##       ########  ######  ######## ####  #######  ##    ## 
##    ## ##       ##       ##       ##    ##    ##     ##  ##     ## ###   ## 
##       ##       ##       ##       ##          ##     ##  ##     ## ####  ## 
 ######  ######   ##       ######   ##          ##     ##  ##     ## ## ## ## 
      ## ##       ##       ##       ##          ##     ##  ##     ## ##  #### 
##    ## ##       ##       ##       ##    ##    ##     ##  ##     ## ##   ### 
 ######  ######## ######## ########  ######     ##    ####  #######  ##    ## 
 
*******************************************************************************

DESCRIPTION: This is the main .cxx file for the actual event selection.
             Within this code, we create all necessary objects and run
             our actual selection methods and analyses.
                
******************************************************************************/

// == [10] Included Libraries =================================================

// Standard C++ libraries
#include <math.h>
#include <bits/stdc++.h>

// ROOT libraries/classes
#include "TList.h"
#include "TParameter.h"

// Our custom classes
#include "Global.h" 		// our parameters
#include "Obj.cxx"		// particle object classes
#include "VH_selection.h"	// class header

// == [20] Deconstructor ======================================================

VH_selection::~VH_selection() { }

// == [30] Custom Methods =====================================================


/* ========================
 * [30.1] VECTOR TO STRING
 * ========================
 * This method converts a vector to a string for output. */ 
std::string vector_to_string(std::vector<int> list)
{
  std::string output = "{ ";
  for (size_t i = 0; i < list.size(); ++i)
  {
    output += std::to_string(list[i]) + ", ";
  }
  output += "}";
  
  return output;
}

/* ======================
 * [31] Get DAUGHTER IDS
 * ======================
 * We want to be able to determine in MC truth cases
 * which particles come directly from our bosons, i.e.
 * we want to get the proper b- and c-partons. */
#if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)
std::vector<std::vector<int>> VH_selection::getDaughterIdxs_ZH(Reader* r)
{

  // Store the indices of the Higgs and Z daughters
  std::vector<std::vector<int>> dauIdxs;
  std::vector<int> dauIdxs_Z;
  std::vector<int> dauIdxs_H;

  // Loop over the Gen particles
  for (unsigned i = 0; i < *(r->nGenPart); ++i)
  {
    int mIdx = (r->GenPart_genPartIdxMother)[i]; // mother index
    int mID  = (r->GenPart_pdgId)[mIdx];         // mother ID (PDG)
    int flav = (r->GenPart_pdgId)[i];            // ptcl ID (PDG)
    
    // b-quark/parton check (id = 5, mother ID = 23 [Z])
    if (abs(flav) == 5 && mIdx > -1 && abs(mID) == 23)
      dauIdxs_Z.push_back(i);

    // c-quark/parton check (id = 4, mother ID = 25 [H])
    if (abs(flav) == 4 && mIdx > -1 && abs(mID) == 25)
      dauIdxs_H.push_back(i);
  }

  // Push back and return the proper IDs
  dauIdxs.push_back(dauIdxs_Z);
  dauIdxs.push_back(dauIdxs_H);
  return dauIdxs;

}//end-getDaughter

#endif

/* ===================
 * [32] SORT BY SECOND
 * ====================
 * We will be storing indices and values as index & separation <int,float>,
 * and we want to be able to sort these pairs based on the float value. */
bool sort_by_second(const std::pair<int,float> &a, const std::pair<int,float> &b)
{ return a.second < b.second; }

bool sort_by_second_descend(const std::pair<int,float> &a, const std::pair<int,float> &b)
{ return a.second > b.second; }


/* ============================
 * [33] DETERMINE PROPER PAIRS
 * ============================
 * Given a series of gen-level objects, we want to match them with the best
 * options from a list of jets (tagging not considered in this method; any
 * tagging is done before the lists passed here). */
std::vector<std::pair<int,float>> determine_proper_pairs(std::vector<JetObj>& genObjs,
  std::vector<JetObj>& jets)
{
  std::vector<std::pair<int,float>> chosen_pairs;
  std::vector<int> used_idxs;
  
  // Go through each parton...
  for (size_t i = 0; i < genObjs.size(); ++i)
  {
    std::vector<std::pair<int,float>> combos;

    // ... and check separation with each jet
    for (size_t j = 0; j < jets.size(); ++j)
    {
      // If the jet's already been matched, skip it.
      if (std::count(used_idxs.begin(), used_idxs.end(), j)) continue;
      float dR = fabs(genObjs[i].m_lvec.DeltaR(jets[j].m_lvec));
      combos.push_back(std::make_pair(j,dR));
    }//end-jets-j

    // Sort the matches via the dR values (second value in pair). 
    // We sort in ascending order, so our proper choice will be first.
    std::sort(combos.begin(), combos.end(), sort_by_second);
    std::pair<int,float> proper_choice = combos[0];
    
    // Add the choice to our list
    chosen_pairs.push_back(proper_choice);
    used_idxs.push_back(proper_choice.first); 
  }//end-parton-i

  // Return the results
  return chosen_pairs;
}

/* ======================
 * [34] COLLECTION JETS
 * ======================
 * Given a series of gen-level objects, we want to match them with any jet
 * within a given dR cone (tagging not considered in this method; any tagging
 * is done before the lists passed here). */
JetObj collect_jets(JetObj& genObj, std::vector<JetObj>& jets, float dR_cut) 
{
  JetObj comb_jet(0, 0, 0, 0, 0, 0, 0);
  for (Int_t j = jets.size() - 1; j >= 0; --j)
  {
    float dR = fabs(genObj.m_lvec.DeltaR(jets[j].m_lvec));
    if (dR < dR_cut)
    { 
      comb_jet.m_lvec += jets[j].m_lvec; 
      jets.erase(jets.begin() + j);
    }
  }
  return comb_jet;
};

/* ====================
 * [35] COUNT JETS
 * ====================
 * Count how many jets are within a given dR range.*/
Int_t count_jets(JetObj& genObj, std::vector<JetObj>& jets, float dR_cut)
{
  Int_t count = 0;
  for (size_t i = 0; i < jets.size(); ++i)
  {
    float dR = fabs(genObj.m_lvec.DeltaR(jets[i].m_lvec));
    if (dR < dR_cut) count++;
  }
  return count;
}

/* ===================
 * [36] DHZ ALOGRITHM
 * ===================
 * Run our DHZ-diagonal method for jet pairing. */
DHZObj DHZ_algorithm(std::vector<JetObj>& jets)
{
  // Create the possible pairings and sort them via distance.
  DHZObj d0(jets, 0, 1, 2, 3);            // H(0,1) ; Z(2,3)
  DHZObj d1(jets, 0, 2, 1, 3);            // H(0,2) ; Z(1,3)
  DHZObj d2(jets, 0, 3, 1, 2);            // H(0,3) ; Z(1,2)
  std::vector<DHZObj> distObjs { d0, d1, d2};
  std::sort(distObjs.begin(), distObjs.end());

  // Determine the distance between the closet two. Then, based on this
  // distnace, determine which pair we want to use. If we are outside the
  // resolution window (30 GeV), we cna just choose the closest pair.
  // Otherwise, we need to make a logical choice between d0 and d1.
  float deltaD = fabs(distObjs[0].m_distance - distObjs[1].m_distance);
  DHZObj chosenPairings = distObjs[0];

  if (deltaD < 30) {
    float pt0 = distObjs[0].HPt();
    float pt1 = distObjs[1].HPt();
    int idx = 0;
    if (pt1 > pt0) idx = 1;
    chosenPairings = distObjs[idx];
  }
  return chosenPairings;
};

/* ===========================
 * [37] TAGGING-CHECK METHODS
 * ===========================
 * The following methods check against our tagging requirements.*/

/* == passes_btag == */
bool passes_btag(JetObj& jet, float CSV_cut) {
  return jet.m_deepCSV > CSV_cut;
}

/* == are_bjets == */
bool are_bjets(std::vector<JetObj>& jets, float CSV_cut) {
  for (auto it : jets) {     
    if (!passes_btag(it, CSV_cut)) return false;
  }
  return true;
}

/* == passes_ctag == */ 
bool passes_ctag(JetObj& jet, float CvL_cut, float CvB_cut) {
  bool passes_CvL = jet.m_deepCvL > CvL_cut;
  bool passes_CvB = jet.m_deepCvB > CvB_cut;
  return passes_CvL && passes_CvB;
}

/* == are_cjets == */
bool are_cjets(std::vector<JetObj>& jets, float CvL_cut, float CvB_cut) {
  for (auto it : jets) {
    if (!passes_ctag(it, CvL_cut, CvB_cut)) return false;
  }
  return true;
}

/* ==============================
 * [38] FILL TRIGGER EFFICIENCY
 * ==============================
 * The following method fills our trigger efficiency plots.*/
void fill_trigger_efficiency(TriggerEffPlots* plots, std::vector<JetObj>& jets,
  bool pass_reference, bool pass_trigger, float HTmod, float w=1.0)
{
  //std::cout << "Trying to fill..." << std::endl;
  if (pass_reference) {
    plots->Fill(jets, true, HTmod, w);
    if (pass_trigger) plots->Fill(jets, false, HTmod, w);
  } 
}


bool list_contains(std::vector<int> list, int value)
{ return std::count(list.begin(), list.end(), value); }

std::vector<int> get_valid_ids(std::vector<int> idxs, std::vector<int> invalid_idxs)
{
  std::vector<int> valid_idxs;
  for (size_t i = 0; i < idxs.size(); ++i)
  {
    if (!list_contains(invalid_idxs, idxs[i])) valid_idxs.push_back(idxs[i]);
    if (valid_idxs.size() >= 2) break;
  }
  return valid_idxs;
}

/* =======================
 * [39] FIND VALID COMBOS
 * =======================
 * Find the proper combinations of jets that are allowed.*/
std::vector<std::vector<int>> find_valid_combos(std::vector<int> bIdxs,
  std::vector<int> cIdxs)
{

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
  }
  return outs;
};

/* =======================
 * [39b] TRIGGER SF
 * =======================
 * Find the proper trigger SF for each year.*/
float determine_trigger_SF(std::vector<JetObj>& jets, int year) {
  float HT = 0.0;
  for (auto it : jets) HT += it.Pt();

  if (year == 16) {
    if (HT < 100) return 1.0;
    else if (HT < 200) return 4.655;//1.0;//4.707;
    else if (HT < 250) return 0.549;//1.0;//0.554;
    else if (HT < 300) return 0.601;//0.584;//0.613;
    else if (HT < 350) return 0.625;//0.638;//0.639;
    else if (HT < 400) return 0.643;//0.644;//0.641;
    else if (HT < 450) return 0.631;//0.629;//0.624;
    else if (HT < 500) return 0.722;//0.718;//0.698;
    else if (HT < 550) return 0.688;//0.673;//0.676;
    else if (HT < 600) return 0.742;//0.733;//0.735;
    else if (HT < 800) return 0.755;//0.772;//0.775;
    else if (HT < 1000) return 0.763;//0.754;//0.767;
    else if (HT < 2000) return 0.813;//0.800;//0.804;
  }
  else if (year == 17) {
    if (HT < 100) return 1.0;
    else if (HT < 200) return 1.0;
    else if (HT < 250) return 1.0;
    else if (HT < 300) return 0.440;
    else if (HT < 350) return 0.568;//0.562;
    else if (HT < 400) return 0.730;//0.716;
    else if (HT < 450) return 0.718;//0.701;
    else if (HT < 500) return 0.842;//0.827;
    else if (HT < 550) return 0.867;//0.846;
    else if (HT < 600) return 0.816;//0.803;
    else if (HT < 800) return 0.884;//0.867;
    else if (HT < 1000) return 0.969;//0.951;
    else if (HT < 2000) return 0.963;//0.944;
  }
  else if (year == 18) {
    if (HT < 100) return 1.0;
    else if (HT < 200) return 1.0;
    else if (HT < 250) return 0.498;//0.476;
    else if (HT < 300) return 0.494;//0.498;
    else if (HT < 350) return 0.706;//0.682;
    else if (HT < 400) return 0.977;//0.924;
    else if (HT < 450) return 1.069;//1.019;
    else if (HT < 500) return 1.108;//1.052;
    else if (HT < 550) return 1.022;//0.989;
    else if (HT < 600) return 1.149;//1.115;
    else if (HT < 800) return 1.068;//1.027;
    else if (HT < 1000) return 1.101;//1.057;
    else if (HT < 2000) return 1.078;//1.014;
  }

  return 1.0;
}

// == [40] ROOT Selector Methods ==============================================

/* =================
 * [41] SLAVE BEGIN
 * =================
 * This section is where we initialize all necessary plots
 * and then add all the plots to the output so we can use
 * them for analyses. 
*/
void VH_selection::SlaveBegin(Reader *r) 
{
  //TH1::SetDefaultSumw2();

  // =================================
  // [41a] Initialize our event plots
  // =================================

  /* The bins are defined by the following:
  bin 1 = total negative weight
  bin 2 = total positive weight
  bin 3 = total event weight
  genWeight (= bin2 - bin1)*/
  h_evt = new TH1D("Nevt", "", 4, -1.5, 2.5);
  h_MET = new TH1D("MET", "", 2000, 0, 2000);
  h_HT = new TH1D("HT", "", 2000, 0, 2000);  
  h_evt->Sumw2();
  h_MET->Sumw2();
  h_HT->Sumw2();

  // == CutFlows will be set up here ==

  // Cutflow for electrons (useless?)
  h_cutflow_elec = new TH1D("CutFlow_elec", "", 5, 0, 5); 
  h_cutflow_elec->GetXaxis()->SetBinLabel(1, "Total");
  h_cutflow_elec->GetXaxis()->SetBinLabel(2, "pT cut");
  h_cutflow_elec->GetXaxis()->SetBinLabel(3, "eta cut");
  h_cutflow_elec->GetXaxis()->SetBinLabel(4, "etaSC cut");
  h_cutflow_elec->GetXaxis()->SetBinLabel(5, "loose ID cut");

  // Cutflow for muons (useless?)
  h_cutflow_muon = new TH1D("CutFlow_muon", "", 5, 0, 5); 
  h_cutflow_muon->GetXaxis()->SetBinLabel(1, "Total");
  h_cutflow_muon->GetXaxis()->SetBinLabel(2, "pT cut");
  h_cutflow_muon->GetXaxis()->SetBinLabel(3, "eta cut");
  h_cutflow_muon->GetXaxis()->SetBinLabel(4, "loose ID cut");
  h_cutflow_muon->GetXaxis()->SetBinLabel(5, "iso cut");

  // Cutflow for jets (useful!!!)
  h_cutflow_jet = new TH1D("CutFlow_jet", "", 5, 0, 5); 
  h_cutflow_jet->GetXaxis()->SetBinLabel(1, "Total");
  h_cutflow_jet->GetXaxis()->SetBinLabel(2, "pT cut");
  h_cutflow_jet->GetXaxis()->SetBinLabel(3, "eta cut");
  h_cutflow_jet->GetXaxis()->SetBinLabel(4, "puID req");
  h_cutflow_jet->GetXaxis()->SetBinLabel(5, "iso req");

  // Cutflow for MC (feels useless)
  h_cutflow_evt_MC = new TH1D("CutFlow_evt_MC", "", 2, 0, 2);
  h_cutflow_evt_MC->GetXaxis()->SetBinLabel(1, "Total");
  h_cutflow_evt_MC->GetXaxis()->SetBinLabel(2, "Passed daughter selection");

  // Cutflow for Tagging Only (useful!!!)
  h_cutflow_evt_tagOnly = new TH1D("CutFlow_evt_tagOnly", "", 8, 0, 8);
  h_cutflow_evt_tagOnly->GetXaxis()->SetBinLabel(1, "Total");
  h_cutflow_evt_tagOnly->GetXaxis()->SetBinLabel(2, "MET cut");
  h_cutflow_evt_tagOnly->GetXaxis()->SetBinLabel(3, "Jet Mult.");
  h_cutflow_evt_tagOnly->GetXaxis()->SetBinLabel(4, "Triggers");
  h_cutflow_evt_tagOnly->GetXaxis()->SetBinLabel(5, "b-tag #1");
  h_cutflow_evt_tagOnly->GetXaxis()->SetBinLabel(6, "b-tag #2");
  h_cutflow_evt_tagOnly->GetXaxis()->SetBinLabel(7, "c-tag #1");
  h_cutflow_evt_tagOnly->GetXaxis()->SetBinLabel(8, "c-tag #2");

  // Cutflow for Mass-Prioritized (useful!!!)
  h_cutflow_evt_DHZfirst = new TH1D("CutFlow_evt_DHZfirst", "", 8, 0, 8);
  h_cutflow_evt_DHZfirst->GetXaxis()->SetBinLabel(1, "Total");
  h_cutflow_evt_DHZfirst->GetXaxis()->SetBinLabel(2, "MET cut");
  h_cutflow_evt_DHZfirst->GetXaxis()->SetBinLabel(3, "Jet Mult.");
  h_cutflow_evt_DHZfirst->GetXaxis()->SetBinLabel(4, "Triggers");
  h_cutflow_evt_DHZfirst->GetXaxis()->SetBinLabel(5, "b-tag #1");
  h_cutflow_evt_DHZfirst->GetXaxis()->SetBinLabel(6, "b-tag #2");
  h_cutflow_evt_DHZfirst->GetXaxis()->SetBinLabel(7, "c-tag #1");
  h_cutflow_evt_DHZfirst->GetXaxis()->SetBinLabel(8, "c-tag #2");

  // Cutflow for Tagging Prioritized (useful!!!)
  h_cutflow_evt_tagFirst = new TH1D("CutFlow_evt_tagFirst", "", 5, 0, 5);
  h_cutflow_evt_tagFirst->GetXaxis()->SetBinLabel(1, "Total");
  h_cutflow_evt_tagFirst->GetXaxis()->SetBinLabel(2, "MET cut");
  h_cutflow_evt_tagFirst->GetXaxis()->SetBinLabel(3, "Jet Mult.");
  h_cutflow_evt_tagFirst->GetXaxis()->SetBinLabel(4, "triggers");
  h_cutflow_evt_tagFirst->GetXaxis()->SetBinLabel(5, "tags cut");

  // Make sure the Sumw2 is on (should be by default)
  h_cutflow_elec->Sumw2();
  h_cutflow_muon->Sumw2();
  h_cutflow_jet->Sumw2();
  h_cutflow_evt_MC->Sumw2();
  h_cutflow_evt_tagOnly->Sumw2();
  h_cutflow_evt_DHZfirst->Sumw2();
  h_cutflow_evt_tagFirst->Sumw2();
  
  // These store our object weights
  h_event_weights = new WeightPlots("EventWeights");

  // These store our jet regression values
  h_jet_regressions = new RegressionPlots("JetRegression");

  // == These store the event results ==
  h_VH_MC = new VHPlots("VH_MC");                 // MC

  h_VH_tagOnly = new VHPlots("VH_tagOnly");       // Assignment Methods
  h_VH_DHZfirst = new VHPlots("VH_DHZfirst");     // (Typical Signal)
  h_VH_tagFirst = new VHPlots("VH_tagFirst");

  h_VH_tagOnly_2b1c = new VHPlots("VH_tagOnly_2b1c");   // Assignment Methods
  h_VH_DHZfirst_2b1c = new VHPlots("VH_DHZfirst_2b1c"); // (Background Estimation)
  h_VH_tagFirst_2b1c = new VHPlots("VH_tagFirst_2b1c");

  h_VH_tagFirst_2combo = new VHPlots("VH_tagFirst_2combo"); // Assignment Methods
  h_VH_tagFirst_1combo = new VHPlots("VH_tagFirsT_1combo"); // (Sanity Checks)
  h_VH_DHZfirst_noTag = new VHPlots("VH_DHZfirst_noTag");
  h_VH_DHZfirst_2b = new VHPlots("VH_DHZfirst_2b");

  // == These store information on jets ==
  h_jets_gen_all = new JetPlots("Jets_gen_all");
  h_jets_gen_cut = new JetPlots("Jets_gen_cut");
  h_jets_gen_l = new JetPlots("Jets_gen_l");
  h_jets_gen_c = new JetPlots("Jets_gen_c");
  h_jets_gen_b = new JetPlots("Jets_gen_b");
  h_jets_all = new JetPlots("Jets_all");
  h_jets_cut = new JetPlots("Jets_cut");

  // == These are used for tests on Tagging Prioritized ==
  h_nCombos = new TH1D("VH_tagFirst_nCombos", "", 4, -0.5, 3.5);
  h_pt_cand_b0 = new TH1D("VH_tagFirst_pt_cand_b0", "", 2000, 0, 2000); 
  h_pt_cand_b1 = new TH1D("VH_tagFirst_pt_cand_b1", "", 2000, 0, 2000); 
  h_pt_cand_c0 = new TH1D("VH_tagFirst_pt_cand_c0", "", 2000, 0, 2000); 
  h_pt_cand_c1 = new TH1D("VH_tagFirst_pt_cand_c1", "", 2000, 0, 2000); 
  h_pt_cand_Z = new TH1D("VH_tagFirst_pt_cand_Z", "", 2000, 0, 2000); 
  h_pt_cand_H = new TH1D("VH_tagFirst_pt_cand_H", "", 2000, 0, 2000); 
  h_pt_cand_H_vs_Z = new TH2D("VH_tagFirst_pt_cand_H_vs_Z", "", 2000,0,2000, 2000,0,2000); 
  
  h_nCombos->Sumw2();
  h_pt_cand_b0->Sumw2();
  h_pt_cand_b1->Sumw2();
  h_pt_cand_c0->Sumw2();
  h_pt_cand_c1->Sumw2();
  h_pt_cand_Z->Sumw2();
  h_pt_cand_H->Sumw2();
  h_pt_cand_H_vs_Z->Sumw2();
  
  // ===========================================
  // [41b] Return all of our plots for analysis
  // ===========================================
  
  // Add our individual histograms.
  r->GetOutputList()->Add(h_evt);
  r->GetOutputList()->Add(h_MET);
  r->GetOutputList()->Add(h_HT);
  r->GetOutputList()->Add(h_cutflow_elec);
  r->GetOutputList()->Add(h_cutflow_muon);
  r->GetOutputList()->Add(h_cutflow_jet);
 
  r->GetOutputList()->Add(h_cutflow_evt_MC);
  r->GetOutputList()->Add(h_cutflow_evt_tagOnly);
  r->GetOutputList()->Add(h_cutflow_evt_DHZfirst);
  r->GetOutputList()->Add(h_cutflow_evt_tagFirst);

  r->GetOutputList()->Add(h_nCombos);
  r->GetOutputList()->Add(h_pt_cand_b0);
  r->GetOutputList()->Add(h_pt_cand_b1);
  r->GetOutputList()->Add(h_pt_cand_c0);
  r->GetOutputList()->Add(h_pt_cand_c1);
  r->GetOutputList()->Add(h_pt_cand_Z);
  r->GetOutputList()->Add(h_pt_cand_H);
  r->GetOutputList()->Add(h_pt_cand_H_vs_Z);
  
  // Add our WeightPlots instances
  std::vector<TH1*> tmp = h_event_weights->returnHisto();
  for (size_t i = 0; i < tmp.size(); ++i) r->GetOutputList()->Add(tmp[i]);

  // Add our RegressionPlots instancess
  tmp = h_jet_regressions->returnHisto();
  for (size_t i = 0; i < tmp.size(); ++i) r->GetOutputList()->Add(tmp[i]);

  // == Add our VHPlots instances ==

  // General MC Selection
  tmp = h_VH_MC->returnHisto();
  for (size_t i = 0; i < tmp.size(); ++i) r->GetOutputList()->Add(tmp[i]);

  // Actual Data Algorithms
  tmp = h_VH_tagOnly->returnHisto();
  for (size_t i = 0; i < tmp.size(); ++i) r->GetOutputList()->Add(tmp[i]);
  tmp = h_VH_DHZfirst->returnHisto();
  for (size_t i = 0; i < tmp.size(); ++i) r->GetOutputList()->Add(tmp[i]);
  tmp = h_VH_tagFirst->returnHisto();
  for (size_t i = 0; i < tmp.size(); ++i) r->GetOutputList()->Add(tmp[i]);
  tmp = h_VH_tagOnly_2b1c->returnHisto();
  for (size_t i = 0; i < tmp.size(); ++i) r->GetOutputList()->Add(tmp[i]);
  tmp = h_VH_DHZfirst_2b1c->returnHisto();
  for (size_t i = 0; i < tmp.size(); ++i) r->GetOutputList()->Add(tmp[i]);
  tmp = h_VH_tagFirst_2b1c->returnHisto();
  for (size_t i = 0; i < tmp.size(); ++i) r->GetOutputList()->Add(tmp[i]);

  tmp = h_VH_tagFirst_2combo->returnHisto();
  for (size_t i = 0; i < tmp.size(); ++i) r->GetOutputList()->Add(tmp[i]);
  tmp = h_VH_tagFirst_1combo->returnHisto();
  for (size_t i = 0; i < tmp.size(); ++i) r->GetOutputList()->Add(tmp[i]);
  tmp = h_VH_DHZfirst_noTag->returnHisto();
  for (size_t i = 0; i < tmp.size(); ++i) r->GetOutputList()->Add(tmp[i]);
  tmp = h_VH_DHZfirst_2b->returnHisto();
  for (size_t i = 0; i < tmp.size(); ++i) r->GetOutputList()->Add(tmp[i]);

  // Add our JetPlots instances
  tmp = h_jets_gen_all->returnHisto();
  for (size_t i = 0; i < tmp.size(); ++i) r->GetOutputList()->Add(tmp[i]);
  tmp = h_jets_gen_cut->returnHisto();
  for (size_t i = 0; i < tmp.size(); ++i) r->GetOutputList()->Add(tmp[i]);
  tmp = h_jets_gen_l->returnHisto();
  for (size_t i = 0; i < tmp.size(); ++i) r->GetOutputList()->Add(tmp[i]);
  tmp = h_jets_gen_c->returnHisto();
  for (size_t i = 0; i < tmp.size(); ++i) r->GetOutputList()->Add(tmp[i]);
  tmp = h_jets_gen_b->returnHisto();
  for (size_t i = 0; i < tmp.size(); ++i) r->GetOutputList()->Add(tmp[i]);
  tmp = h_jets_all->returnHisto();
  for (size_t i = 0; i < tmp.size(); ++i) r->GetOutputList()->Add(tmp[i]);
  tmp = h_jets_cut->returnHisto();
  for (size_t i = 0; i < tmp.size(); ++i) r->GetOutputList()->Add(tmp[i]);
  
};// end slaveBegin



/* =============
 * [42] PROCESS
 * =============
 * This is where we do the actual analysis. We need to do the 
 * following steps for each event:
 *
 * 1. determine the weights for the event
 * 2. reconstruct the physics objects(leptons, jets, etc.)
 * 3. analyze them as desired.
 * 4. pray that nothing fails
*/
void VH_selection::Process(Reader *r)
{
  
  // ==================================
  // [42a] Determine the Event Weights
  // ==================================
  
  // Determine the general weights we need for every case.
  // The weights we're interested in are:
  // 1. Generator Weight (from Pythia8, Madgraph, etc.)
  // 2. Pile-Up Scale Factor
  // 3. L1 Pre-Firing Weight (2016-17 only)
  // NOTE: These three are only applied for MC
  float generator_weight = 1.0;
  float pileup_SF = 1.0;
  float l1_prefire_weight = 1.0;
  
#if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)

  // Generator weight
  //generator_weight = *(r->genWeight);
  if (generator_weight < 0) generator_weight = -1;
  if (generator_weight > 0) h_evt->Fill(1);
  else if (generator_weight < 0) h_evt->Fill(-1);
  else { h_evt->Fill(0); generator_weight = 0.0; }
  h_event_weights->Fill("generator", generator_weight);
  
  // Use central general weights to normalize generator weights.
  if (m_centralGenWeight != 0)
    generator_weight *= *(r->genWeight)/m_centralGenWeight;

  // Pile-Up Scale Factor
  pileup_SF = PileupSF(*(r->Pileup_nTrueInt));
  h_event_weights->Fill("pileup", pileup_SF);

#endif

  h_evt->Fill(2, generator_weight);

#if defined(MC_2016) || defined(MC_2017)

  // Handle the L1 pre-firing weight for 2016-2017 only
  l1_prefire_weight = *(r->L1PreFiringWeight_Nom);
  if (m_l1prefiringType == "l1prefiringu") l1_prefire_weight = *(r->L1PreFiringWeight_Up);
  if (m_l1prefiringType == "l1prefiringd") l1_prefire_weight = *(r->L1PreFiringWeight_Dn);
  h_event_weights->Fill("prefire", l1_prefire_weight);

#endif

  // Check to make sure we pass our lumi filter and 
  // if so, determine our event weight based on all
  // these other skills.
#if defined(DATA_2016) || defined(DATA_2017) || defined(DATA_2018)

  h_evt->Fill(-1);
  if (!m_lumiFilter.Pass(*(r->run), *(r->luminosityBlock))) return;
  h_evt->Fill(1);

#endif

  float event_weight = 1.;

#if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)
  event_weight *= generator_weight * pileup_SF * l1_prefire_weight;
#endif
  
  // ==================================
  // [42b] Determine our working point
  // ==================================

  /* We don't want to change the working point in several spots,
   * so we choose here and then we can use these variables wherever.
   * In this case, we're using the MEDIUM working point (WP). */
  float desired_cut_BvL = CUTS.Get<float>("BvL_mediumWP_deepJet");
  float desired_cut_CvL = CUTS.Get<float>("CvL_mediumWP_deepJet");
  float desired_cut_CvB = CUTS.Get<float>("CvB_mediumWP_deepJet");
  
  // ======================================
  // [42c] Reconstruct the Jets
  // ======================================

  /* Start with the jets. Here, we get all of the jets,
   * and we do not worry about kinematic cuts. This is
   * simply putitng them all into a list. */
  std::vector<JetObj> jets;
  
  // For each jet in the list...
  for (unsigned int i = 0; i < *(r->nJet); ++i) 
  {

    // 1. Get the flavor of the jets
    int jet_flavor = -1;
#if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)
    jet_flavor = (r->Jet_hadronFlavour)[i];
#endif
    
    // 2. Get the kinematic & regression values
    Float_t pt = (r->Jet_pt)[i];
    Float_t mass = (r->Jet_mass)[i];
    Float_t phi = (r->Jet_phi)[i];
    Float_t eta = (r->Jet_eta)[i];    

    Float_t bRegCorr = (r->Jet_bRegCorr)[i];
    Float_t cRegCorr = (r->Jet_cRegCorr)[i];
    Float_t bRegRes = (r->Jet_bRegRes)[i];
    Float_t cRegRes = (r->Jet_cRegRes)[i];
    h_jet_regressions->Fill("correction_bJet", bRegCorr);
    h_jet_regressions->Fill("correction_cJet", cRegCorr);
    h_jet_regressions->Fill("resolution_bJet", bRegRes);
    h_jet_regressions->Fill("resolution_cJet", cRegRes); 
    
    // 3. Reconstruct the jet, store the information,
    // and add it to our list.
    JetObj jet(pt, eta, phi, mass, jet_flavor,
      (r->Jet_btagDeepFlavB)[i], (r->Jet_puId)[i]);
    jet.StoreRegInfo(bRegCorr, bRegRes, cRegCorr, cRegRes);

    jet.m_deepCvL = (r->Jet_btagDeepFlavCvL)[i];
    jet.m_deepCvB = (r->Jet_btagDeepFlavCvB)[i];

    // If we're in a MC file, let's note which gen jet
    // is associated with this reco jet.
#if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)
    jet.m_genJetIdx = (r->Jet_genJetIdx)[i];
#endif

    jet.SetIdxAll(i);
    jets.push_back(jet);
  
  }//end-jet-loop
  
  h_jets_all->Fill(jets, event_weight);

  // =========================================
  // [42d] Determine the trigger scale factor
  // =========================================
  int year = 0;
#if defined(MC_2016)
  year = 16;
#endif
#if defined(MC_2017)
  year = 17;
#endif
#if defined(MC_2018)
  year = 18;
#endif


#if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)

  float trigger_SF = determine_trigger_SF(jets, year);
  h_event_weights->Fill("trigger", trigger_SF);

  // ====================================
  // [42e] Determine the tagging weights
  // ====================================
  float btag_calib = CalBtagWeight(jets, CUTS.GetStr("jet_main_btagWP"), m_btagUncType); 
  float ctag_calib = CalCtagWeight(jets, CUTS.GetStr("jet_main_btagWP"), m_ctagUncType);
  // == ACTUAL CODE WILL GO HERE LATER ==
  h_event_weights->Fill("btag", btag_calib);
  h_event_weights->Fill("ctag", ctag_calib);

  event_weight *= trigger_SF * btag_calib * ctag_calib;

#endif

  h_event_weights->Fill("event", event_weight);

  // ================================================
  // [42f] Reconstruct the remaining physics objects
  // ================================================
  std::vector<LepObj> electrons;
  for (unsigned int i = 0; i < *(r->nElectron); ++i)
  {
    // Build an electron from the stored variables
    h_cutflow_elec->Fill(0.5, generator_weight); // all electrons

    float etaSC = (r->Electron_eta)[i] - (r->Electron_deltaEtaSC)[i];
    LepObj elec((r->Electron_pt)[i], (r->Electron_eta)[i], etaSC,
           (r->Electron_phi)[i], (r->Electron_mass)[i], i,
           (r->Electron_charge)[i], 0);

    // Cut based on the pT and eta values
    if (elec.Pt() < CUTS.Get<float>("lep_pt1")) continue;
    h_cutflow_elec->Fill(1.5, generator_weight); // Passed pT cut
    
    if (fabs(elec.Eta()) > CUTS.Get<float>("lep_eta")) continue;
    h_cutflow_elec->Fill(2.5, generator_weight); // Passed eta cut

    // Cut based on SC value
    if (fabs(etaSC) < 1.566 && fabs(etaSC) > 1.442) continue;
    h_cutflow_elec->Fill(3.5, generator_weight); // passed SC cut

    // Cut based on the isolation
    int elecID = r->Electron_cutBased[i];
    if (elecID < 2) continue; // loose electron ID
    h_cutflow_elec->Fill(4.5, generator_weight); // pass ID cut

    electrons.push_back(elec);
  }

  std::vector<LepObj> muons;
  for (unsigned int i = 0; i < *(r->nMuon); ++i)
  {
    // Build a muon from the stored variables
    h_cutflow_muon->Fill(0.5, generator_weight); // all muons
    LepObj muon((r->Muon_pt)[i], (r->Muon_eta)[i], -1, (r->Muon_phi)[i],
           (r->Muon_mass)[i], i, (r->Muon_charge)[i],
           (r->Muon_pfRelIso04_all)[i]);

    // Cut based on the pT and eta values
    if (muon.Pt() < CUTS.Get<float>("lep_pt0")) continue;
    h_cutflow_muon->Fill(1.5, generator_weight); // passed pT cut
    
    if (fabs(muon.Eta()) > CUTS.Get<float>("lep_eta")) continue;
    h_cutflow_muon->Fill(2.5, generator_weight); // passed eta cut

    // Cut based on the loose ID
    if (r->Muon_looseId[i] <= 0) continue;
    h_cutflow_muon->Fill(3.5, generator_weight); // passed ID cut
    
    // Cut based on an isolation value
    if (muon.m_iso > CUTS.Get<float>("muon_iso")) continue;
    h_cutflow_muon->Fill(4.5, generator_weight); // passed iso cut
    
    muons.push_back(muon);  
  }

  // ==================================
  // [42g] Select our appropriate jets
  // ==================================

  std::vector<JetObj> analysis_jets; int nJets = 0;
  for (unsigned int i = 0; i < jets.size(); ++i) 
  {
    h_cutflow_jet->Fill(0.5, generator_weight); // all jets
    TLorentzVector vec = jets[i].Vec4();

    // Check to make sure the jet passes our pT cuts.
    // NOTE: we have an extra cut for the leading jet.
    if (vec.Pt() < CUTS.Get<float>("jet_pt")) continue;
    if (i == 0 && vec.Pt() < CUTS.Get<float>("jet_pt0")) continue;
    h_cutflow_jet->Fill(1.5, generator_weight); // passed pT cuts

    // Check to make sure we pass the eta cuts.
    if (fabs(vec.Eta()) > CUTS.Get<float>("jet_eta")) continue;
    h_cutflow_jet->Fill(2.5, generator_weight); // passed eta cut

    // Make sure they pass the pileup ID requirement if jet pT < 50 GeV.
    // There are different requirements for 2016 vs 2017-2018.
    if (vec.Pt() < 50.0) 
    {
#if defined(MC_2016) || defined(DATA_2016)
      if (jets[i].m_puid < 1) continue;
#endif
#if defined(MC_2017) || defined(MC_2018) || defined(DATA_2017) || defined(DATA_2018)
      if (jets[i].m_puid < 4) continue;
#endif 
    }
    h_cutflow_jet->Fill(3.5, generator_weight); // passed puID req
    
    // Check to make sure our jet isn't an overlap with a lepton
    bool isElectron = jets[i].IsLepton(electrons);
    bool isMuon     = jets[i].IsLepton(muons);
    if (isElectron || isMuon) continue;
    h_cutflow_jet->Fill(4.5, generator_weight); // passed iso req
    
    // Add jet to our selected jet list
    jets[i].SetIdx(nJets); nJets++;
    analysis_jets.push_back(jets[i]);

  }//end-jets

  h_jets_cut->Fill(analysis_jets, event_weight);

  // ===================================
  // [42h] Start our MC Truth selection
  // ===================================

  bool is_VbbHcc_event = false;
  std::vector<std::vector<int>> daughter_idxs;
  std::vector<JetObj> genObjs_b;
  std::vector<JetObj> genObjs_c;

#if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)

  h_cutflow_evt_MC->Fill(0.5, generator_weight); // all MC Truth

  // Make sure we have two daughters for 
  // each particle of the proper type.
  int id_Z = 0 , id_H = 1;
  daughter_idxs = getDaughterIdxs_ZH(r);
  
  if (daughter_idxs[id_Z].size() == 2 && daughter_idxs[id_H].size() == 2)
  {
    is_VbbHcc_event = true;
    h_cutflow_evt_MC->Fill(1.5, generator_weight); // passed # daughters
    int idx1_Z = daughter_idxs[id_Z][0];
    int idx2_Z = daughter_idxs[id_Z][1];
    int idx1_H = daughter_idxs[id_H][0];
    int idx2_H = daughter_idxs[id_H][1];

    // Reconstruct from the 'GenPart' data.
    JetObj b0((r->GenPart_pt)[idx1_Z], (r->GenPart_eta)[idx1_Z],
      (r->GenPart_phi)[idx1_Z], (r->GenPart_mass)[idx1_Z], 5, 0., 0.);
    JetObj b1((r->GenPart_pt)[idx2_Z], (r->GenPart_eta)[idx2_Z],
      (r->GenPart_phi)[idx2_Z], (r->GenPart_mass)[idx2_Z], 5, 0., 0.);
    
    std::vector<JetObj> MC_bjets{b0,b1};
    genObjs_b.push_back(b0); genObjs_b.push_back(b1);
    ZObj MC_Z(MC_bjets);

    JetObj c0((r->GenPart_pt)[idx1_H], (r->GenPart_eta)[idx1_H],
      (r->GenPart_phi)[idx1_H], (r->GenPart_mass)[idx1_H], 4, 0., 0.);
    JetObj c1((r->GenPart_pt)[idx2_H], (r->GenPart_eta)[idx2_H],
      (r->GenPart_phi)[idx2_H], (r->GenPart_mass)[idx2_H], 4, 0., 0.);

    std::vector<JetObj> MC_cjets{c0,c1};
    genObjs_c.push_back(c0); genObjs_c.push_back(c1);
    HiggsObj MC_H(MC_cjets);
 
    h_VH_MC->FillVH(MC_Z, MC_H, event_weight);
  }

#endif 

  // ===================================
  // NOTE: MC jet selection methods have
  // been moved to its own selector to
  // save space.
  // ===================================
  
  /* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  * All the actual analyses start below this point. They will use
  * our selected jets. The area below will house the trigger studies
  * as well as the event selections.
  * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

  // All cutflows need to show the total events
  h_cutflow_evt_tagOnly->Fill(0.5, generator_weight);
  h_cutflow_evt_DHZfirst->Fill(0.5, generator_weight);
  h_cutflow_evt_tagFirst->Fill(0.5, generator_weight);
  
  h_MET->Fill(*(r->MET_pt), event_weight);
  if (*(r->MET_pt) >= CUTS.Get<float>("MET")) return;

  // Show that we pass the MET cut.
  h_cutflow_evt_tagOnly->Fill(1.5, generator_weight);
  h_cutflow_evt_DHZfirst->Fill(1.5, generator_weight);
  h_cutflow_evt_tagFirst->Fill(1.5, generator_weight);
  
  if (analysis_jets.size() >= 4)
  {
    
    // ==================================
    // [42j] Start the actual analyses
    // ==================================
    h_cutflow_evt_tagOnly->Fill(2.5, generator_weight);
    h_cutflow_evt_DHZfirst->Fill(2.5, generator_weight);
    h_cutflow_evt_tagFirst->Fill(2.5, generator_weight);
     
    // For our cases where we make it this far,
    // check what our MET is and check the HT
    // (both versions - sum pT and sum "all").
    float HT = 0.0;
    for (size_t i = 0; i < analysis_jets.size(); ++i)
      HT += analysis_jets[i].m_lvec.Pt();
    float HTmod = *(r->MET_pt);

    // ======================================
    // NOTE: Trigger efficiency calculations
    // has been removed from this file and
    // moved into its own file for saving
    // space.
    // ======================================

    
    // =====================================
    // [42l] Make sure we pass our triggers
    // =====================================
    // We want to only keep going with our selections if we trigger properly.
    // We need to check each year of the analysis properly.
    bool trigger = false;

#if defined(MC_2016) || defined(DATA_2016)
    trigger = (*(r->HLT_QuadJet45_TripleBTagCSV_p087) || 
     *(r->HLT_DoubleJet90_Double30_TripleBTagCSV_p087));

    h_evt_trig_2016->Fill(0.5, event_weight);
    if (trigger) h_evt_trig_2016->Fill(1.5, event_weight);
    if (*(r->HLT_QuadJet45_TripleBTagCSV_p087))
      h_evt_trig_2016->Fill(2.5, event_weight);
    if (*(r->HLT_DoubleJet90_Double30_TripleBTagCSV_p087))
      h_evt_trig_2016->Fill(3.5, event_weight);
    //std::cout << "Checking the 2016 trigger!!!" << std::endl;
#endif

#if defined(MC_2017) || defined(DATA_2017) 
  /*if !defined(DATA_2017B)
    trigger = *(r->HLT_PFHT300PT30_QuadPFJet_75_60_45_40_TriplePFBTagCSV_3p0);
  #endif
  #if defined(DATA_2017B)
    trigger = *(r->HLT_HT300PT30_QuadJet_75_60_45_40_TripeCSV_p07);
  #endif*/
  
  trigger = *(r->HLT_PFHT300PT30_QuadPFJet_75_60_45_40_TriplePFBTagCSV_3p0);
  //std::cout << "Checking the 2017 trigger!!!" << std::endl;
#endif

#if defined(MC_2018) || defined(DATA_2018)
    trigger = *(r->HLT_PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5);
    //std::cout << "Checking the 2018 trigger!!!" << std::endl;
#endif

    // Do not continue if we haven't triggered properly.
    if (!trigger) return;
    h_cutflow_evt_tagOnly->Fill(3.5, generator_weight);
    h_cutflow_evt_DHZfirst->Fill(3.5, generator_weight);
    h_cutflow_evt_tagFirst->Fill(3.5, generator_weight);

    // ==================================
    // [42m] Tagging Only Jet Assignment
    // ==================================
    bool force_pass_tagging = false;
    std::vector<JetObj> jets2 = analysis_jets;
    
    // Select two jets with the largest btag values and then
    // check against our working point of interest. (NOTE: when
    // we sort by btag (descending order), the largest two will
    // automatically be in the first two indices.) We have three
    // different versions for our versions of JEC.
    std::sort(jets2.begin(), jets2.end(), JetObj::JetCompBtag());
    std::vector<JetObj> bjets2 { jets2[0], jets2[1] };
    std::vector<JetObj> bjets22 { jets2[0], jets2[1] };
    std::vector<JetObj> bjets23 { jets2[0], jets2[1] };
    jets2.erase(jets2.begin() + 1); jets2.erase(jets2.begin() + 0);
    
    bool btag1 = passes_btag(bjets2[0], desired_cut_BvL);
    bool btag2 = passes_btag(bjets2[1], desired_cut_BvL);
    
    if (btag1 || force_pass_tagging)
    {
      h_cutflow_evt_tagOnly->Fill(4.5, generator_weight);
      if (btag2 || force_pass_tagging)
      {
        h_cutflow_evt_tagOnly->Fill(5.5, generator_weight); 

        // Full JEC version
        bjets2[0].ApplyRegression(5); bjets2[1].ApplyRegression(5);
        ZObj Z2(bjets2);

        // No Mass Correction
        bjets22[0].ApplyRegression(5, false); bjets22[1].ApplyRegression(5, false);
        ZObj Z22(bjets22);

        // No JEC at all
        ZObj Z23(bjets23);

        // Select two jets with the largest c-tag values and then check
        // against our working point of interest.
        std::sort(jets2.begin(), jets2.end(), JetObj::JetCompCtag());
        std::vector<JetObj> cjets2 { jets2[0], jets2[1] };
        std::vector<JetObj> cjets22 { jets2[0], jets2[1] };
        std::vector<JetObj> cjets23 { jets2[0], jets2[1] };
        std::vector<JetObj> cjets_2b1c { jets2[0], jets2[1] };
        jets2.erase(jets2.begin() + 1); jets2.erase(jets2.begin() + 0);
        
        bool ctag1 = passes_ctag(cjets2[0], desired_cut_CvL, desired_cut_CvB);
        bool ctag2 = passes_ctag(cjets2[1], desired_cut_CvL, desired_cut_CvB);

        if (ctag1 || force_pass_tagging)
        {
          h_cutflow_evt_tagOnly->Fill(6.5, generator_weight); // c-cut #1
          if (ctag2 || force_pass_tagging)
          {
            h_cutflow_evt_tagOnly->Fill(7.5, generator_weight); // c-cut #2

            // Full JET version
            cjets2[0].ApplyRegression(4); cjets2[1].ApplyRegression(4);
            HiggsObj H2(cjets2);

            // No Mass Correction
            cjets22[0].ApplyRegression(4,false); cjets22[1].ApplyRegression(4,false);
            HiggsObj H22(cjets22);

            // No JEC at all
            HiggsObj H23(cjets23);

            // Fill our plots
            h_VH_tagOnly->FillVH(Z2, H2, event_weight);
          }//end-ctag-2
        }//end-ctag-1

        // Check the 2b1c version
        if (ctag1 || ctag2)
        {
          cjets_2b1c[0].ApplyRegression(4);
          cjets_2b1c[1].ApplyRegression(4);
          HiggsObj H2b1c(cjets_2b1c);
          h_VH_tagOnly_2b1c->FillVH(Z2, H2b1c, event_weight);       
        }//end-2b1c-version

      }//end-btag-2
    }//end-tagOnly-Checks (btag1)

    // ==================================
    // [42n] DHZ Algorithm Assignment
    // ==================================
    std::vector<JetObj> jets3 = analysis_jets;
    std::sort(jets3.begin(), jets3.end(), JetObj::JetCompPt());
    DHZObj chosenPairings = DHZ_algorithm(jets3);

    // Reconstruct the options from this choice
    std::vector<JetObj> bjets, cjets;
    for (int i = 0; i < 2; ++i) {
      bjets.push_back(jets3[chosenPairings.Hidx(i)]);
      cjets.push_back(jets3[chosenPairings.Zidx(i)]);
      bjets[i].ApplyRegression(5);
      cjets[i].ApplyRegression(4);
    }
    ZObj Z3(bjets); HiggsObj H3(cjets); 

    // Check our jets against tagging.  
    //bool passes_btags = true;
    std::vector<bool> btag_passes;
    for (int i = 0; i < 2; ++i) {
      bool passes = passes_btag(bjets[i], desired_cut_BvL);
      btag_passes.push_back(passes);
      //if (!passes) passes_btags = false;
    }

    //bool passes_ctags = true;
    std::vector<bool> ctag_passes;
    for (int i = 0; i < 2; ++i) {
      bool passes = passes_ctag(cjets[i], desired_cut_CvL, desired_cut_CvB);
      ctag_passes.push_back(passes);
      //if (!passes) passes_ctags = false;
    } 

    h_VH_DHZfirst_noTag->FillVH(Z3, H3, event_weight);

    if (btag_passes[0] || force_pass_tagging) {
      h_cutflow_evt_DHZfirst->Fill(4.5, generator_weight); // b-tag 1
      if (btag_passes[1] || force_pass_tagging) {
        h_cutflow_evt_DHZfirst->Fill(5.5, generator_weight); // b-tag 2
        
        h_VH_DHZfirst_2b->FillVH(Z3, H3, event_weight);
        
        if (ctag_passes[0] || force_pass_tagging) {
          h_cutflow_evt_DHZfirst->Fill(6.5, generator_weight); // c-tag 1
          if (ctag_passes[1] || force_pass_tagging) {
            h_cutflow_evt_DHZfirst->Fill(7.5, generator_weight); // c-tag 2
            h_VH_DHZfirst->FillVH(Z3, H3, event_weight);
            //std::cout << "HERE we are..." << std::endl;
          }//end-ctag-2
        }//end-ctag-1

        // Check the 2b1c version
        if (ctag_passes[0] || ctag_passes[1]) {
          h_VH_DHZfirst_2b1c->FillVH(Z3, H3, event_weight);
        }//end-2b1c
      }
    }//end-checks-DHZfirst

    // ====================================
    // [42o] Tagging Prioritized Algorithm
    // ====================================
    std::vector<JetObj> jets4; jets4 = analysis_jets;
    
    // Check our jets and push them to the appropriate lists by
    // checking if the tagging scores meet our desired cuts.
    std::vector<std::pair<int,float> > jets_idx_BvL;
    std::vector<std::pair<int,float> > jets_idx_CvL;
    std::vector<std::pair<int,float> > jets_idx_CvL_2b1c;
    bool already_tagged_c = false;    

    for (size_t i = 0; i < jets4.size(); ++i)
    {

      // Check the tagging requirements
      bool btagged = passes_btag(jets4[i], desired_cut_BvL);
      bool ctagged = passes_ctag(jets4[i], desired_cut_CvL, desired_cut_CvB);
      
      // If they pass our tagging requirements, add to the list
      float csv = jets4[i].m_deepCSV;
      float cvl = jets4[i].m_deepCvL; 
      
      if (btagged || force_pass_tagging) {
        std::pair<int,float> pair0(i,csv);
        jets_idx_BvL.push_back(pair0);
      }
      
      if (ctagged || force_pass_tagging) {
        std::pair<int,float> pair1(i,cvl);
        jets_idx_CvL.push_back(pair1);
        already_tagged_c = true;
      }
      
      if (ctagged || already_tagged_c) {
        std::pair<int,float> pair2(i,cvl);
        jets_idx_CvL_2b1c.push_back(pair2);
      }

    }//end-for 

    // We want to check for every valid combo of the jets that have
    // passed the tagging. If there's only the one pairing, we will
    // choose that pairing. Otherwise, we use the DHZ algorithm to
    // select the proper pairing of jets.
    std::sort(jets_idx_BvL.begin(), jets_idx_BvL.end(), sort_by_second_descend);
    std::sort(jets_idx_CvL.begin(), jets_idx_CvL.end(), sort_by_second_descend);
    std::sort(jets_idx_CvL_2b1c.begin(), jets_idx_CvL_2b1c.end(),
      sort_by_second_descend);
    
    // Create the vectors containing of b- and c-jet indices
    std::vector<int> bIndices;
    std::vector<int> cIndices;
    std::vector<int> cIndices_2b1c;
    
    for (auto p : jets_idx_BvL){ bIndices.push_back(p.first); }
    for (auto p : jets_idx_CvL){ cIndices.push_back(p.first); }
    for (auto p : jets_idx_CvL_2b1c){ cIndices_2b1c.push_back(p.first); }

    // Find the appropriate combinations of jets.
    std::vector<std::vector<int>> combos = find_valid_combos(bIndices, cIndices);  
 
    h_nCombos->Fill(combos.size(), event_weight);
    if (combos.size() > 0)
    {      
      // Set the default to be our first option & fill the temp plots
      // that we're interested in.
      std::vector<int> idx = combos[0];
      int Zidx0 = 0, Zidx1 = 1, Hidx0 = 2, Hidx1 = 3;
      
      DHZObj proper_pairings(jets4, idx[Hidx0], idx[Hidx1], idx[Zidx0], idx[Zidx1]);
      if (combos.size() > 1) proper_pairings = DHZ_algorithm(jets4);
      h_cutflow_evt_tagFirst->Fill(4.5, generator_weight);

      // Temporary Check: Candidates check
      h_pt_cand_b0->Fill(jets4[proper_pairings.Zidx(0)].Pt());
      h_pt_cand_b1->Fill(jets4[proper_pairings.Zidx(1)].Pt());
      h_pt_cand_c0->Fill(jets4[proper_pairings.Hidx(0)].Pt());
      h_pt_cand_c1->Fill(jets4[proper_pairings.Hidx(1)].Pt());      
      
      TLorentzVector Zvec = jets4[proper_pairings.Zidx(0)].m_lvec + jets4[proper_pairings.Zidx(1)].m_lvec;      
      TLorentzVector Hvec = jets4[proper_pairings.Hidx(0)].m_lvec + jets4[proper_pairings.Hidx(1)].m_lvec;
      h_pt_cand_Z->Fill(Zvec.Pt());
      h_pt_cand_H->Fill(Hvec.Pt());
      h_pt_cand_H_vs_Z->Fill(Hvec.Pt(), Zvec.Pt());

      std::vector<std::vector<int>> proper_indices;
      if (combos.size() > 1)
      {
        std::vector<int> bIDs{proper_pairings.Zidx(0), proper_pairings.Zidx(1)};
        std::vector<int> cIDs{proper_pairings.Hidx(0), proper_pairings.Hidx(1)};
        proper_indices.push_back(bIDs);
        proper_indices.push_back(cIDs);
      }
      else
      {
        std::vector<int> bIDs{idx[Zidx0], idx[Zidx1]};
        std::vector<int> cIDs{idx[Hidx0], idx[Hidx1]};
        proper_indices.push_back(bIDs);
        proper_indices.push_back(cIDs);
      }

      // Reconstruct the Z and Higgs bosons from the pairs
      std::vector<JetObj> bjets, cjets;
      for (int i = 0; i < 2; ++i) {
        bjets.push_back(jets4[proper_indices[0][i]]);
        bjets[i].ApplyRegression(5);

        cjets.push_back(jets4[proper_indices[1][i]]);
        cjets[i].ApplyRegression(4);
      }  
      ZObj Z4(bjets); HiggsObj H4(cjets);
      h_VH_tagFirst->FillVH(Z4, H4, event_weight);
      if (combos.size() > 1)
      {
        h_VH_tagFirst_2combo->FillVH(Z4, H4, event_weight);
      }
      else
      {
        h_VH_tagFirst_1combo->FillVH(Z4, H4, event_weight);
      }
    }//end-if

    // Now, do the 2b1c version
    std::vector<std::vector<int>> combos_2b1c = find_valid_combos(bIndices, cIndices_2b1c);
    if (combos_2b1c.size() > 0)
    {
      std::vector<int> idx = combos_2b1c[0];
      int Zidx0 = 0, Zidx1 = 1, Hidx0 = 2, Hidx1 = 3;
      DHZObj proper_pairings(jets4, idx[Hidx0], idx[Hidx1], idx[Zidx0], idx[Zidx1]);
      if (combos_2b1c.size() > 1) proper_pairings = DHZ_algorithm(jets4);
      //h_cutflow_evt_tagFirst->Fill(4.5, generator_weight);
      
      // Reconstruct the Z and Higgs bosons from the pairs
      std::vector<JetObj> bjets, cjets;
      for(int i = 0; i < 2; ++i) {
        bjets.push_back(jets4[proper_pairings.Hidx(i)]);
        bjets[i].ApplyRegression(5);
        
        cjets.push_back(jets4[proper_pairings.Zidx(i)]);
        cjets[i].ApplyRegression(4);
      }
      ZObj Z4(bjets); HiggsObj H4(cjets);
      h_VH_tagFirst_2b1c->FillVH(Z4, H4, event_weight);
    }//end-if
    
  }//end-analysis-area (jets >= 4)
  
  
};// end Process

/* ===============
 * [43] TERMINATE
 * ===============
 * This is where we terminate and delete any necessary elements
 * of the code (if so deemed necessary).
*/
void VH_selection::Terminate(TList* mergedList, std::string outFileName) {}

// == [99] END OF FILE ========================================================
