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
  
  h_evt = new TH1D("Nevt","",4,-1.5,2.5) ; //bin 1: total negative weight events, bin 2: total positive weight events, bin 3: total event weighted by genWeight (= bin2 - bin1, if genWeight are always -1,1

  h_VH = new VHPlots("VH") ;
  h_VH_Zll = new VHPlots("VH_Zll") ;
  h_VH_Zqq = new VHPlots("VH_Zqq") ;
  h_VH_Znn = new VHPlots("VH_Znn") ;

  h_evt_cutflow = new TH1D("evt_cutflow", "", 13, -0.5, 12.5);
  h_elec_cutflow = new TH1D("elec_cutflow", "", 10, -0.5, 9.5);
  h_muon_cutflow = new TH1D("muon_cutflow", "", 10, -0.5, 9.5);

  //Add histograms to fOutput so they can be saved in Processor::SlaveTerminate
  r->GetOutputList()->Add(h_evt) ;
  std::vector<TH1*> tmp = h_VH->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  
  tmp = h_VH_Zll->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_VH_Zqq->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  
  tmp = h_VH_Znn->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  
  r->GetOutputList()->Add(h_evt_cutflow);
  r->GetOutputList()->Add(h_elec_cutflow);
  r->GetOutputList()->Add(h_muon_cutflow);
  
  const Int_t nevt = 12;
  const Int_t nx = 4, nx1 = 4;
  const char *evt_cut[nevt] = { "All Events", "Pass Lepton Selection",
    "Jet requirements", "p_{T}^{miss} filter", "Jet ID", "Pass b-tag selection", 
    "N_2^{DDT}", "Trigger", "Golden JSON", "CvB", "CvL"};
  const char *elec_cut[nx] = { "all", "ip", "kine", "ID" };
  const char *muon_cut[nx1] = { "all", "kine", "medium muon ID", "iso" };

  for (int i=1;i<=nx;i++) h_elec_cutflow->GetXaxis()->SetBinLabel(i+1.5, elec_cut[i-1]);
  for (int i=1;i<=nx1;i++) h_muon_cutflow->GetXaxis()->SetBinLabel(i+1.5, muon_cut[i-1]);
  for (int i=1;i<=nevt;i++) h_evt_cutflow->GetXaxis()->SetBinLabel(i+1.5, evt_cut[i-1]);

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
    JetObj jet((r->Jet_pt)[i],(r->Jet_eta)[i],(r->Jet_phi)[i],(r->Jet_mass)[i],jetFlav,(r->Jet_btagDeepB)[i],(r->Jet_btagDeepFlavB)[i],(r->Jet_puIdDisc)[i]) ;
    jets.push_back(jet) ;
  }

  //Make selection and fill histograms
  
  for (auto it : jets) {
    h_VH->Fill(it);
  }
  h_VH->FillNjet(jets.size());
  


  // Electrons
  std::vector<LepObj> elecs;
  std::vector<LepObj> elecs_jetOverlap;
  for (unsigned int i = 0; i < *(r->nElectron); ++i) {

    h_elec_cutflow->Fill(1); // All electrons

    // Reconstruct a lepton from the information in the file.
    float etaSC = (r->Electron_eta)[i] - (r->Electron_deltaEtaSC)[i];
    LepObj elec((r->Electron_pt)[i], (r->Electron_eta)[i], etaSC,
                (r->Electron_phi)[i], (r->Electron_mass)[i], i, 
                (r->Electron_charge)[i], 0);
    h_elec_cutflow->Fill(2);
    
    // Check for electron jet overlamp removal
    int elecID = r->Electron_cutBased[i];      // (0:fail, 1:veto, 2:loose, 3:medium, 4:tight)
    if (elec.m_lvec.Pt() > CUTS.Get<float>("lep_jetOverlap_pt") && 
        fabs(elec.m_lvec.Eta()) < CUTS.Get<float>("lep_jetOverlap_eta"))
    {
      if (elecID >= 4) { // tight ID for jet removal
        elecs_jetOverlap.push_back(elec);
      }
    }

    // Use lower pT threshold to select both.
    if (elec.m_lvec.Pt() < CUTS.Get<float>("lep_pt1") || fabs(elec.m_lvec.Eta()) > CUTS.Get<float>("lep_eta")) continue;
    if (fabs(elec.m_scEta) < 1.566 && fabs(elec.m_scEta) > 1.442) continue;  //EB-EE gap removal
    h_elec_cutflow->Fill(3);

    // Use tight ID to be consistent with single electron trigger
    if (elecID < 4) continue;
    h_elec_cutflow->Fill(4);

    elecs.push_back(elec);

  }//end-elec-loop

  
  //Muons
  std::vector<LepObj> muons;
  std::vector<LepObj> muons_jetOverlap;
  for (unsigned int i = 0; i < *(r->nMuon); ++i) {

    h_muon_cutflow->Fill(1);

    // Reconstruct a muon from the information given.
    LepObj muon((r->Muon_pt)[i], (r->Muon_eta)[i], -1, (r->Muon_phi)[i], 
                (r->Muon_mass)[i], i, (r->Muon_charge)[i], 
                (r->Muon_pfRelIso04_all)[i]);
 
    // -- Rochester correction goes here --
    
    // Muon for muon jet overlap removal
    if (muon.m_lvec.Pt() > CUTS.Get<float>("lep_jetOverlap_pt")
        && fabs(muon.m_lvec.Eta()) < CUTS.Get<float>("lep_jetOverlap_eta"))
    {
      if ((r->Muon_mediumId)[i] > 0 && (r->Muon_pfRelIso04_all)[i] < CUTS.Get<float>("muon_iso")) {
        muons_jetOverlap.push_back(muon);
      } 
    }  

    // Make sure the muons meet our cuts
    if (muon.m_lvec.Pt() < CUTS.Get<float>("lep_pt1") || 
        fabs(muon.m_lvec.Eta()) < CUTS.Get<float>("lep_eta")) continue;
    h_muon_cutflow->Fill(2) ;

    if (r->Muon_mediumId[i] <= 0) continue;
    h_muon_cutflow->Fill(3);

    if (muon.m_iso > CUTS.Get<float>("muon_iso")) continue;
    h_muon_cutflow->Fill(4);

    muons.push_back(muon);

  }//end-muon-loop


  //== Event Selection ========================================================
  h_evt_cutflow->Fill(1);  // all events

  
  // Select the types of jets
  std::vector<JetObj> bjets, cjets, ljets;
  for (auto it : jets) {
    if (it.m_flav == 5) bjets.push_back(it);
    else if (it.m_flav == 4) cjets.push_back(it);
    else if (it.m_flav > 0) ljets.push_back(it);
  } 

  h_VH->FillNjet_flav(bjets.size(), 5);
  h_VH->FillNjet_flav(cjets.size(), 4);
  h_VH->FillNjet_flav(ljets.size(), 1);

  // We need at least two c-jets
  if (cjets.size() >= 2) 
  {
    h_evt_cutflow->Fill(2); // passed jet cut

    // Reconstruct the Higgs mass from the jets
    JetObj c0 = cjets.at(0), c1 = cjets.at(1);
    Float_t h_mass = (c0.m_lvec + c1.m_lvec).M();
    h_VH->FillHmass(h_mass, 1);

  }//end-cjet-selection

  

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
