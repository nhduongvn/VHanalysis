#define VH_selection_cxx

/*/////////////////////////////////////////////////////////////////////////////
IMPORT STATEMENTS
/////////////////////////////////////////////////////////////////////////////*/
#include <math.h>

#include "TList.h"
#include "TParameter.h"

#include "VH_selection.h"
#include "Global.h"
#include "Obj.cxx"

/*/////////////////////////////////////////////////////////////////////////////
MAIN SELECTOR METHODS
/////////////////////////////////////////////////////////////////////////////*/

VH_selection::~VH_selection() { }

///////////////////////////////////////////
// Slave Begin
///////////////////////////////////////////
void VH_selection::SlaveBegin(Reader *r) {

  // Set up the event plot
  h_evt = new TH1D("Nevt", "", 4, -1.5, 2.5);	// bin 1 - total negative w evt
  						// bin 2 - total positive w evt
  						// bin 3 - total event weight by
  						// genWeight (= bin2 - bin1)
  
  // Set up the VHPlots instances
  h_VH = new VHPlots("VbbHcc_MC");
  h_VH_tags = new VHPlots("VbbHcc_tags");
  h_VH_algo = new VHPlots("VbbHcc_algo");
  h_VH_both = new VHPlots("VbbHcc_both");
  
  // Set up the EffPlots instances
  h_eff_tags = new EffPlots("VbbHcc_tags");
  h_eff_algo = new EffPlots("VbbHcc_algo");
  h_eff_both = new EffPlots("VbbHcc_both");
  
  // Set up the CutFlows (for events)
  h_evt_MC_cutflow = new TH1D("VbbHcc_MC_CutFlow", "" 2, 0, 2);
  h_evt_MC_cutflow->GetXaxis()->SetBinLabel(1, "Total");
  h_evt_MC_cutflow->GetXaxis()->SetBinLabel(2, "Passed daughter selection");
  
  h_evt_tags_cutflow = new TH1D("VbbHcc_tags_CutFlow", "", 7, 0, 7);
  h_evt_tags_cutflow->GetXaxis()->SetBinLabel(1, "Total");
  h_evt_tags_cutflow->GetXaxis()->SetBinLabel(2, "jet cuts");
  h_evt_tags_cutflow->GetXaxis()->SetBinLabel(3, "b-tags");
  h_evt_tags_cutflow->GetXaxis()->SetBinLabel(4, "c-tags");
  h_evt_tags_cutflow->GetXaxis()->SetBinLabel(5, "MET cut");
  h_evt_tags_cutflow->GetXaxis()->SetBinLabel(6, "pT(Z) cut");
  h_evt_tags_cutflow->GetXaxis()->SetBinLabel(7, "dPhi cut");
  
  h_evt_algo_cutflow = new TH1D("VbbHcc_algo_CutFlow", "", 7, 0, 7);
  h_evt_algo_cutflow->GetXaxis()->SetBinLabel(1, "Total");
  h_evt_algo_cutflow->GetXaxis()->SetBinLabel(2, "jet cuts");
  h_evt_algo_cutflow->GetXaxis()->SetBinLabel(3, "b-tags");
  h_evt_algo_cutflow->GetXaxis()->SetBinLabel(4, "c-tags");
  h_evt_algo_cutflow->GetXaxis()->SetBinLabel(5, "MET cut");
  h_evt_algo_cutflow->GetXaxis()->SetBinLabel(6, "pT(Z) cut");
  h_evt_algo_cutflow->GetXaxis()->SetBinLabel(7, "dPhi cut");
  
  h_evt_both_cutflow = new TH1D("VbbHcc_both_CutFlow", "", 7, 0, 7);
  h_evt_both_cutflow->GetXaxis()->SetBinLabel(1, "Total");
  h_evt_both_cutflow->GetXaxis()->SetBinLabel(2, "jet cuts");
  h_evt_both_cutflow->GetXaxis()->SetBinLabel(3, "b-tags");
  h_evt_both_cutflow->GetXaxis()->SetBinLabel(4, "c-tags");
  h_evt_both_cutflow->GetXaxis()->SetBinLabel(5, "MET cut");
  h_evt_both_cutflow->GetXaxis()->SetBinLabel(6, "pT(Z) cut");
  h_evt_both_cutflow->GetXaxis()->SetBinLabel(7, "dPhi cut");
  
  // Set up the CutFlows (for selections)
  h_jet_cutflow = new TH1D("VbbHcc_CutFlow_jets", "", 4, 0, 4);
  h_jet_cutflow->GetXaxis()->SetBinLabel(1, "Total");
  h_jet_cutflow->GetXaxis()->SetBinLabel(2, "pT cut");
  h_jet_cutflow->GetXaxis()->SetBinLabel(3, "eta cut");
  h_jet_cutflow->GetXaxis()->SetBinLabel(4, "iso req");
  
  h_elec_cutflow = new TH1D("VbbHcc_CutFlow_elec", "", 5, 0, 5);
  h_elec_cutflow->GetXaxis()->SetBinLabel(1, "Total");
  h_elec_cutflow->GetXaxis()->SetBinLabel(2, "pT cut");
  h_elec_cutflow->GetXaxis()->SetBinlabel(3, "eta cut");
  h_elec_cutflow->GetXaxis()->SetBinLabel(4, "etaSC cut");
  h_elec_cutflow->GetXaxis()->SetBinLabel(5, "loose ID cut");
  
  h_muon_cutflow = new TH1D("VbbHcc_CutFlow_muon", "", 5, 0, 5);
  h_muon_cutflow->GetXaxis()->SetBinLabel(1, "Total");
  h_muon_cutflow->GetXaxis()->SetBinLabel(2, "pT cut");
  h_muon_cutflow->GetXaxis()->SetBinlabel(3, "eta cut");
  h_muon_cutflow->GetXaxis()->SetBinLabel(4, "loose ID cut");
  h_muon_cutflow->GetXaxis()->SetBinLabel(5, "iso cut");
  
  // Set up Miscellaneous Histograms
  h_CSV = new TH1D("VbbHcc_CSV", "", 200, 0, 1);
  h_CvL = new TH1D("VbbHcc_CvL", "", 200, 0, 1);
  
  // Add histograms to fOutput so they can be saved in Processor::SlaveTerminate
  r->GetOutputList()->Add(h_evt);
  
  std::vector<TH1*> tmp = h_VH_MC->returnHisto();
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_VH_tags->returnHisto();
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_VH_algo->returnHisto();
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_VH_both->returnHisto();
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  
  tmp = h_eff_tags->returnHisto();
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_eff_algo->returnHisto();
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_eff_both->returnHisto();
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  
  r->GetOutputList()->Add(h_evt_MC_cutflow);
  r->GetOutputList()->Add(h_evt_tags_cutflow);
  r->GetOutputList()->Add(h_evt_algo_cutflow);
  r->GetOutputList()->Add(h_evt_both_cutflow);
  r->GetOutputList()->Add(h_jet_cutflow);
  r->GetOutputList()->Add(h_elec_cutflow);
  r->GetOutputList()->Add(h_muon_cutflow);
  
  r->GetOutputList()->Add(h_CvL);
  r->GetOutputList()->Add(h_CSV);
  
} // end SlaveBegin

///////////////////////////////////////////
// Custom Methods
///////////////////////////////////////////

// Determine the IDs needed for identifying the MC truth particles.
#if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)
std::vector<std::vector<int> > VH_selection::DauIdxs_ZH(Reader* r) {
  
  // store the indices of the H and Z daughters
  std::vector<std::vector<int> > dauIdxs;
  std::vector<int> dauIdxsZ, dauIdxsH;
  
  // Loop over the gen particles
  for (unsigned i = 0; i < *(r->nGenPart); ++i) {
  
    int mIdx = (r->GenPart_genPartIdxMother)[i]; // mother index
    int mId  = (r->GenPart_pdgId)[mIdx];         // mother pdg ID
    int flav = (r->GenPart_pdgId)[i];            // ptcl pdg ID
    
    // b quark check (id = 5, and mother id = 23 (Z))
    if (abs(flav) == 5 && mIdx > -1 && mId == 23) dauIdxsZ.push_back(i);
    
    // c quark check (id = 4, and mother id = 25 (H))
    if (abs(flav) == 4 && mIdx > -1 && mId == 25) dauIdxsH.push_back(i);
  }
  
  // Push back and return the proper IDs
  dauIdxs.push_back(dauIdxsZ);
  dauIdxs.push_back(dauIdxsH);
  return dauIdxs;
  
} // end DauIdxs_ZH
#endif

///////////////////////////////////////////
// Process
///////////////////////////////////////////
void VH_selection::Process(Reader *r) {
  
  // Weights
  float genWeight = 1.;
  float puSF = 1.;
  float l1preW = 1.;

} // end Process


///////////////////////////////////////////
// Terminate
///////////////////////////////////////////
void VH_selection::Terminate(TList* mergedList, std::string outFileName) { }
