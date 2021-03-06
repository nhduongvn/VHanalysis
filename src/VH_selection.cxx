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
  h_VH_Zcc = new VHPlots("VH_Zcc") ;
  h_VH_Zbb = new VHPlots("VH_Zbb") ;
  h_VH_Zqq = new VHPlots("VH_Zqq") ;

  h_Nbjet = new TH1D("Nbjet", "", 13, 0, 13);
  h_Ncjet = new TH1D("Ncjet", "", 13, 0, 13);
  h_Nljet = new TH1D("Nljet", "", 13, 0, 13);

  h_evtCC_cutflow = new TH1D("evtCC_cutflow", "", 13, -0.5, 12.5);
  h_evtBB_cutflow = new TH1D("evtBB_cutflow", "", 13, -0.5, 12.5);
  h_elec_cutflow = new TH1D("elec_cutflow", "", 10, -0.5, 9.5);
  h_muon_cutflow = new TH1D("muon_cutflow", "", 10, -0.5, 9.5);

  //Add histograms to fOutput so they can be saved in Processor::SlaveTerminate
  r->GetOutputList()->Add(h_evt) ;
  std::vector<TH1*> tmp = h_VH->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  
  tmp = h_VH_Zqq->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_VH_Zcc->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  
  tmp = h_VH_Zbb->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  
  r->GetOutputList()->Add(h_evtCC_cutflow);
  r->GetOutputList()->Add(h_evtBB_cutflow);
  r->GetOutputList()->Add(h_elec_cutflow);
  r->GetOutputList()->Add(h_muon_cutflow);

  r->GetOutputList()->Add(h_Nbjet);
  r->GetOutputList()->Add(h_Ncjet);
  r->GetOutputList()->Add(h_Nljet);
  
  const Int_t nevt = 12;
  const Int_t nx = 4, nx1 = 4;
  const char *evt_cut[nevt] = { "All Events", "Pass Lepton Selection",
    "Jet requirements", "p_{T}^{miss} filter", "Jet ID", "Pass b-tag selection", 
    "N_2^{DDT}", "Trigger", "Golden JSON", "CvB", "CvL"};
  const char *elec_cut[nx] = { "all", "ip", "kine", "ID" };
  const char *muon_cut[nx1] = { "all", "kine", "medium muon ID", "iso" };

  for (int i=1;i<=nx;i++) h_elec_cutflow->GetXaxis()->SetBinLabel(i+1.5, elec_cut[i-1]);
  for (int i=1;i<=nx1;i++) h_muon_cutflow->GetXaxis()->SetBinLabel(i+1.5, muon_cut[i-1]);
  //for (int i=1;i<=nevt;i++) h_evt_cutflow->GetXaxis()->SetBinLabel(i+1.5, evt_cut[i-1]);

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
  h_VH_Zqq->FillJets(jets);
  h_VH_Zqq->FillNjet(jets.size());
  


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
  //h_evt_cutflow->Fill(1);  // all events
  
  // Select the types of jets
  std::vector<JetObj> bjets, cjets, ljets;
  for (auto it : jets) {
    if (it.m_flav == 5) bjets.push_back(it);
    else if (it.m_flav == 4) cjets.push_back(it);
    else if (it.m_flav > 0) ljets.push_back(it);
  } 

  h_Nbjet->Fill(bjets.size());
  h_Ncjet->Fill(cjets.size());
  h_Nljet->Fill(ljets.size());

  //====== Scenario #1 ======
  // We need at least four c-jets - two for Higgs, two for Z

  if (cjets.size() >= 4) 
  {
    //h_evt_cutflow->Fill(2); // passed jet cut

    // Reconstruct the Higgs mass from the jets
    JetObj c0 = cjets.at(0), c1 = cjets.at(1);
    std::vector<JetObj> higgs_jets;
    higgs_jets.push_back(c0);  higgs_jets.push_back(c1);
    HObj H(higgs_jets);

    // Reconstruct the Z mass from the jets
    JetObj c2 = cjets.at(2), c3 = cjets.at(3);
    std::vector<JetObj> z_jets;
    z_jets.push_back(c2); z_jets.push_back(c3);
    ZObj Z(z_jets);

    // Fill our plots.
    h_VH_Zqq->Fill(H, Z);
    h_VH_Zcc->Fill(H, Z);

  }//end-cjet-selection

  
  //====== Scenario #2 ======
  // We need two c-jets for Higgs, two b-jets for Z
  if (cjets.size() >= 2)
  {
    if (bjets.size() >= 2)
    {
      // Reconstruct the Higgs mass from the jets
      JetObj c0 = cjets.at(0), c1 = cjets.at(1);
      std::vector<JetObj> higgs_jets;
      higgs_jets.push_back(c0);  higgs_jets.push_back(c1);
      HObj H(higgs_jets);
      
      // Reconstruct the Z mass from the jets
      JetObj b0 = bjets.at(0), b1 = bjets.at(1);
      std::vector<JetObj> z_jets;
      z_jets.push_back(b0); z_jets.push_back(b1);
      ZObj Z(z_jets);

      // Fill our plots.
      h_VH_Zqq->Fill(H, Z);
      h_VH_Zbb->Fill(H, Z);
    }
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
