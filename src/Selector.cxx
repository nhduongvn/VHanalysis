#include "Selector.h"
#include "Global.h"
#include "math.h"

void Selector::Process(Reader* r) { 
} 

void Selector::SetRandom() {
  m_rand = new TRandom3() ;
}

void Selector::SetLumiMaskFilter(std::string fName_lumiMaskFilter) {
  m_lumiFilter.Set(fName_lumiMaskFilter) ;
}

void Selector::SetBtagCalib(std::string csvFileName, std::string taggerName, std::string effFileName, std::string btagUncType) {
  m_btagCal = BTagCalibration(taggerName, csvFileName) ;
  m_btagReader = BTagCalibrationReader(BTagEntry::OP_MEDIUM,  // operating point
                                       "central",            //central sys type
                                       {"up","down"});       //other sys type
  
  m_btagReader.load(m_btagCal,     // calibration instance
            BTagEntry::FLAV_B,    // btag flavour
            "comb") ;             // measurement type
  m_btagReader.load(m_btagCal,  
            BTagEntry::FLAV_C,    
            "comb") ;            
  m_btagReader.load(m_btagCal, 
            BTagEntry::FLAV_UDSG,
            "incl") ;           
  m_btagUncType = btagUncType;
  m_btagEffFile = new TFile(effFileName.c_str(),"READ") ;

}

void Selector::SetEleEffCorr(std::vector<std::string> fName_trig,std::string fName_recSF, std::string fName_IDSF, std::vector<float> w_trig, std::string eleUncType) {
  std::string trigN("EGamma_SF2D");
  TFile* fRec = new TFile(fName_recSF.c_str(),"READ") ;
  TFile* fID = new TFile(fName_IDSF.c_str(),"READ") ;
  m_hSF_eleRec = (TH2F*)fRec->Get("EGamma_SF2D") ;
  m_hSF_eleID = (TH2F*)fID->Get("EGamma_SF2D") ;
  for(std::string fN : fName_trig) {
    TFile* f = new TFile(fN.c_str(),"READ");
    m_hSF_eleTrig.push_back((TH2F*)f->Get(trigN.c_str()));
    m_hSF_eleTrig.back()->SetDirectory(0);
  }

  for(float w : w_trig) m_eleTrig_w.push_back(w) ;
  m_eleUncType = eleUncType;
}

void Selector::Setn2b1Cut(std::string fName_n2b1_cut) {
  TFile* fCut = new TFile(fName_n2b1_cut.c_str(),"READ");
  m_hn2b1 = (TH2D*)fCut->Get("Cut");
  m_hn2b1->SetDirectory(0);
}

float Selector::Getn2b1Cut(float rho_in, float pt_in) {
  
  double pt = pt_in;
  double rho = rho_in;
  if (pt > 1000) pt = 999;
  if (rho > -1.5) rho = -1.51;
  if (rho < -6) rho = -5.99;
  int iB = m_hn2b1->FindFixBin(rho,pt);
  return m_hn2b1->GetBinContent(iB);

}

//multiple inputs to deal with different SFs for different run periods 
void Selector::SetMuonEffCorr(std::vector<std::string> fName_trig, std::vector<std::string> fName_ID, std::vector<std::string> fName_iso, std::vector<float> w_trig, std::vector<float> w_ID, std::vector<float> w_iso, std::string muonUncType) {
  std::string trigN("IsoMu24_OR_IsoTkMu24_PtEtaBins/abseta_pt_ratio");
  //std::string idN("NUM_MediumID_DEN_genTracks_eta_pt_syst");
  //std::string isoN("NUM_TightRelIso_DEN_MediumID_eta_pt_syst");//FIXME tight iso?
  std::string idN("NUM_MediumID_DEN_genTracks_eta_pt");//use this to get total unc = stat + syst
  std::string isoN("NUM_TightRelIso_DEN_MediumID_eta_pt");//FIXME tight iso?
  std::string isoN1("NUM_TightRelIso_DEN_MediumID_eta_pt");//FIXME: only stat available for GH for 2016 legacy
#if defined(MC_2017)
  trigN = "IsoMu27_PtEtaBins/abseta_pt_ratio";
  //idN = "NUM_MediumID_DEN_genTracks_pt_abseta_syst";
  //isoN = "NUM_TightRelIso_DEN_MediumID_pt_abseta_syst";
  idN = "NUM_MediumID_DEN_genTracks_pt_abseta"; //use this to get total unc = stat + syst
  isoN = "NUM_TightRelIso_DEN_MediumID_pt_abseta";
#endif
#if defined(MC_2018)
  trigN = "IsoMu24_PtEtaBins/abseta_pt_ratio";
  //idN = "NUM_MediumID_DEN_TrackerMuons_pt_abseta_syst";
  //isoN = "NUM_TightRelIso_DEN_MediumID_pt_abseta_syst";
  idN = "NUM_MediumID_DEN_TrackerMuons_pt_abseta";
  isoN = "NUM_TightRelIso_DEN_MediumID_pt_abseta";
#endif
  for(std::string fN : fName_trig) {
    TFile* f = new TFile(fN.c_str(),"READ");
    m_hSF_muonTrig.push_back((TH2F*)f->Get(trigN.c_str()));
    m_hSF_muonTrig.back()->SetDirectory(0);
  }
  for(std::string fN : fName_ID) {
    TFile* f = new TFile(fN.c_str(),"READ");
    m_hSF_muonID.push_back((TH2F*)f->Get(idN.c_str()));
    m_hSF_muonID.back()->SetDirectory(0);
  }
  for(std::string fN : fName_iso) {
    TFile* f = new TFile(fN.c_str(),"READ");
    if (fN.find("RunGH") != std::string::npos) {
      m_hSF_muonIso.push_back((TH2F*)f->Get(isoN1.c_str()));
    }
    else {
      m_hSF_muonIso.push_back((TH2F*)f->Get(isoN.c_str()));
    }
    m_hSF_muonIso.back()->SetDirectory(0);
  }
  for(float w : w_trig) m_muonTrig_w.push_back(w) ;
  for(float w : w_iso) m_muonIso_w.push_back(w) ;
  for(float w : w_ID) m_muonID_w.push_back(w) ;

  m_muonUncType = muonUncType;
}

void Selector::SetPileupSF(std::string fName_puSF) {
  TFile* f = new TFile(fName_puSF.c_str(),"READ") ;
  m_hSF_pu = (TH1D*)f->Get("pileup_ratio") ;
  m_hSF_pu->SetDirectory(0);
}

void Selector::SetXbbXccEff(std::string fName_xbb_xcc_eff) {
  TFile* f = new TFile(fName_xbb_xcc_eff.c_str(),"READ") ;
  std::string y = "16"; //FIXME add 2016_preVFP and add xbb
  if (m_year == "2017") y = "17";
  if (m_year == "2018") y = "18";
  std::string hN = "xcc_bb_pt_mass_sf_" + y;
  std::vector<TH2D*> hTmps;
  hTmps.push_back((TH2D*)f->Get(hN.c_str())) ;
  hN = "xcc_cc_pt_mass_sf_" + y;
  hTmps.push_back((TH2D*)f->Get(hN.c_str())) ;
  hN = "xcc_light_pt_mass_sf_" + y;
  hTmps.push_back((TH2D*)f->Get(hN.c_str())) ;
  m_hEff_xbb_xcc["xcc"] = hTmps;
  for(auto h:m_hEff_xbb_xcc["xcc"]) h->SetDirectory(0);
}

float Selector::Get_xccbb_weight(std::vector<JetObjBoosted>& fatJets, int idx_excludedJet, std::string type="xcc") {
  float w = 1;
  for(unsigned iJ = 0; iJ < fatJets.size();++iJ) {
    float m = fatJets[iJ].m_lvec.M();
    float pt = fatJets[iJ].m_lvec.Pt(); 
    int iB = m_hEff_xbb_xcc[type][0]->FindFixBin(m,pt); //note m = x-axis, pt = y-axis
    if (iJ != idx_excludedJet) {
      int iFlav = 0;
      if (fatJets[iJ].m_flav == 4) iFlav = 1;
      if (fatJets[iJ].m_flav != 4 && fatJets[iJ].m_flav != 5) iFlav = 2;
      //std::cout << "\n" << iFlav << " " << m << " " << pt << " " << m_hEff_xbb_xcc[type][iFlav]->GetBinContent(iB);
      w *= 1-m_hEff_xbb_xcc[type][iFlav]->GetBinContent(iB);
    }
  }
  //std::cout << "\n w: " << 1-w << " " << fatJets.size();
  return 1-w;
}

void Selector::SetTriggerSF(std::string fName_triggerSF) {
  TFile* f = new TFile(fName_triggerSF.c_str(),"READ") ;
  std::string y = "16"; //FIXME add 2016_preVFP and add xbb
  if (m_year == "2017") y = "17";
  if (m_year == "2018") y = "18";
  std::string hN = "trig_SF_HLT_Soup_data_" + y;
  m_hTrig_SF = (TGraphAsymmErrors*)f->Get(hN.c_str());
}

float Selector::GetTrigSF(float jetPt) {
  unsigned iB = m_hTrig_SF->GetXaxis()->FindFixBin(jetPt);
  //std::cout << "\n " << m_hTrig_SF->GetName() << " " << jetPt << " " << iB << " " << m_hTrig_SF->GetPointY(iB);
  return m_hTrig_SF->GetPointY(iB);
}

float Selector::PileupSF(int nTrueInt) {
  int iBin = m_hSF_pu->FindFixBin(nTrueInt) ;
  return m_hSF_pu->GetBinContent(iBin); 
}

void Selector::SetPUjetidCalib(std::string fName_PUjetID_SF,std::string fName_PUjetID_eff,std::string jetPUidUncType){
  //get files
  PUjetID_SF = new TFile(fName_PUjetID_SF.c_str(),"READ") ;
  PUjetID_eff = new TFile(fName_PUjetID_eff.c_str(),"READ") ;
  m_jetPUidUncType = jetPUidUncType ;
}

float Selector::PUjetWeight(std::vector<JetObj>& jets){
  //get SF
  std::string effSF = "h2_eff_sf"+m_year+"_M";
  TH2D* heffSF = (TH2D*)PUjetID_SF->Get(effSF.c_str()) ;

  //h2_eff_sf2016_M_Systuncty
  std::string effSFunc = "h2_eff_sf"+m_year+"_M_Systuncty";
  TH2D* heffSFunc = (TH2D*)PUjetID_SF->Get(effSFunc.c_str()) ;
  
  //get eff
  std::string effMC = "h2_eff_mc"+m_year+"_M";
  TH2D* heffMC = (TH2D*)PUjetID_eff->Get(effMC.c_str()) ;

  float pMC(1.0);
  float pData(1.0);
  float weight(1.) ;
  for (std::vector<JetObj>::iterator jetIt = jets.begin() ; jetIt != jets.end() ; ++jetIt) {
  float jetPt = (jetIt->m_lvec).Pt() ;
  float jetEta = (jetIt->m_lvec).Eta() ;
  float PUjet = jetIt->m_puid;
  if (fabs(jetEta) > CUTS.Get<float>("jet_eta") || jetPt < CUTS.Get<float>("jet_pt"))continue;

  int iBin = heffSF->FindFixBin(jetPt,jetEta) ; 
  float sf = heffSF->GetBinContent(iBin); 
  float sf_unc = heffSFunc->GetBinContent(iBin);
  if (m_jetPUidUncType == "up") sf = sf + sf_unc;
  if (m_jetPUidUncType == "down") sf = sf - sf_unc;
  if (sf < 0.5) sf = 0.5;
  if (sf > 1.5) sf = 1.5;

  int bin = heffMC->FindFixBin(jetPt,jetEta) ; 
  float eff = heffMC->GetBinContent(bin); 

   if (jetPt < 50){
      if (PUjet > 0.61){
      pData = pData*sf*eff ;
      pMC = pMC*eff ;
    }
    else {
      pData = pData*(1-sf*eff) ;
      pMC = pMC*(1-eff) ;
     }
   }//end jet pt > 50 GeV
  }// end jet loop
  if (pMC > 0) weight = pData/pMC ;
   return weight ;
}

float Selector::CalBtagWeight(std::vector<JetObj>& jets, std::string jet_main_btagWP, std::string uncType) {
  //get calibration file
  std::string bN = "b_pt_eff_"+m_year;
  std::string cN = "c_pt_eff_"+m_year;
  std::string lN = "l_pt_eff_"+m_year;
  if (jet_main_btagWP.find("deepJet") != std::string::npos) {
    bN = "bdj_pt_eff_"+m_year;
    cN = "cdj_pt_eff_"+m_year;
    lN = "ldj_pt_eff_"+m_year;
  }
  TH1D* hEff_b = (TH1D*)m_btagEffFile->Get(bN.c_str());
  TH1D* hEff_c = (TH1D*)m_btagEffFile->Get(cN.c_str());
  TH1D* hEff_l = (TH1D*)m_btagEffFile->Get(lN.c_str());
  float pMC(1.);
  float pData(1.);
  for (std::vector<JetObj>::iterator jetIt = jets.begin() ; jetIt != jets.end() ; ++jetIt) {
    float jetPt = (jetIt->m_lvec).Pt() ;
    int iBin = hEff_b->FindFixBin(jetPt) ; //return overflow bin if jetPt > max pt range
    unsigned flav = jetIt->m_flav ;
    std::string uncTypeInput = "central";
    float eff = hEff_l->GetBinContent(iBin); //jet with pt > max pt range of efficinecy histogram will get the eff of overflow bins
    if (eff <= 0) std::cout << "\n Warning: Efficiency <=0, " << eff ; //we do not want eff = 0 
    BTagEntry::JetFlavor flavCode(BTagEntry::FLAV_UDSG) ;
    if (flav == 5) {
      eff = hEff_b->GetBinContent(iBin);
      flavCode = BTagEntry::FLAV_B;
    }
    if (flav == 4) {
      eff = hEff_c->GetBinContent(iBin);
      flavCode = BTagEntry::FLAV_C;
    }

    if (uncType == "up" || uncType == "down") uncTypeInput = uncType; //all bc and light are up together
    if (uncType == "light_up" && flav != 4 && flav != 5) uncTypeInput = "up";
    if (uncType == "light_down" && flav != 4 && flav != 5) uncTypeInput = "down";
    if (uncType == "bc_up" && (flav == 4 || flav == 5)) uncTypeInput = "up";
    if (uncType == "bc_down" && (flav == 4 || flav == 5)) uncTypeInput = "down";

    float sf = m_btagReader.eval_auto_bounds(
                 uncTypeInput, 
                 flavCode, 
                 fabs((jetIt->m_lvec).Eta()), // absolute value of eta
                 jetPt
    );
    //pass b-tagging requirement
    if (jetIt->m_deepCSV > CUTS.Get<float>("jet_"+jet_main_btagWP+"_" + m_year)) {
      pData = pData*sf*eff ;
      pMC = pMC*eff ;
    }
    else {
      pData = pData*(1-sf*eff) ;
      pMC = pMC*(1-eff) ;
    }
  } //end loop over jet 
  float sf(1.) ;
  if (pMC > 0) sf = pData/pMC ;
  return sf ;
}

float Selector::CalBtagWeightBoosted(std::pair<float,bool> jet_bb, std::pair<float,bool> jet_cc, std::string uncType) {
   //Table 18 and 22
   std::vector<std::vector<float>> sf_bb_all = {{1.029,1.070,1.077},{1.006,1.051,0.991},{0.966,1.033,1.010}};
   std::vector<std::vector<float>> sf_cc_all = {{1.005,1.130,0.982},{1.464,1.198,1.203},{1.098,1.003,1.031}};
   std::vector<std::vector<float>> sf_bb_eru_all = {{0.051,0.066,0.067},{0.052,0.056,0.038},{0.056,0.030,0.030}};
   std::vector<std::vector<float>> sf_bb_erd_all = {{0.045,0.062,0.059},{0.052,0.055,0.043},{0.057,0.025,0.035}};
   std::vector<std::vector<float>> sf_cc_eru_all = {{0.182,0.185,0.181},{0.426,0.268,0.230},{0.234,0.131,0.126}};
   std::vector<std::vector<float>> sf_cc_erd_all = {{0.157,0.196,0.148},{0.422,0.262,0.227},{0.188,0.119,0.107}};
   int yearBin(0);
   if(m_year == "2017") yearBin = 1;
   if(m_year == "2018") yearBin = 2;
   float sf_bb(1.0);
   float sf_cc(1.0);
   int ptbin(0);
   if(jet_bb.first >= 500 && jet_bb.first < 600) ptbin = 1;
   if(jet_bb.first >= 600) ptbin = 2;
   float eff_bb(0.5); //FIXME
   float sf_bb_tmp = sf_bb_all[yearBin][ptbin];
   if(uncType=="bbup") sf_bb_tmp += sf_bb_eru_all[yearBin][ptbin];
   if(uncType=="bbdown") sf_bb_tmp -= sf_bb_erd_all[yearBin][ptbin];
   if(jet_bb.second) sf_bb = sf_bb_tmp;
   else sf_bb = (1-eff_bb*sf_bb_tmp)/(1-eff_bb);
   
   if(jet_cc.first >= 500 && jet_cc.first < 600) ptbin = 1;
   if(jet_cc.first >= 600) ptbin = 2;
   float eff_cc(0.5); //FIXME
   float sf_cc_tmp = sf_cc_all[yearBin][ptbin];
   if(uncType=="ccup") sf_cc_tmp += sf_cc_eru_all[yearBin][ptbin];
   if(uncType=="ccdown") sf_cc_tmp -= sf_cc_erd_all[yearBin][ptbin];
   if(jet_cc.second) sf_cc = sf_cc_tmp;
   else sf_cc = (1-eff_cc*sf_cc_tmp)/(1-eff_cc);
   
   //std::cout << "\n" << uncType << " " << sf_bb_tmp << " " << sf_cc_tmp;

   return sf_bb*sf_cc;

}

//Get scale factors from a list of calibration histograms h (each histo corresponds to a run periods, for example muon in 2016 has scale factors for B->F and G->H sets. w are weights for each sets 
std::vector<float> Selector::GetSF_2DHist(float x, float y, std::vector<TH2F*> h, std::vector<float> w) {
  std::vector<float> o{1,0,0}; //value, absolute error, relative error
  unsigned nX = h[0]->GetNbinsX() ;
  unsigned nY = h[0]->GetNbinsY() ;
  unsigned iX = h[0]->GetXaxis()->FindFixBin(x) ;
  unsigned iY = h[0]->GetYaxis()->FindFixBin(y) ;
  if (iX == 0 || iY == 0 || iX > nX || iY > nY) { //underflow and overflow bins
    return o ;
  }
  float sf(0) ;
  float e_sf(0) ;
  for (unsigned i = 0 ; i < h.size() ; ++i) {
    sf += w[i]*h[i]->GetBinContent(iX,iY);
    e_sf += w[i]*w[i]*h[i]->GetBinError(iX,iY)*h[i]->GetBinError(iX,iY);
  }
  e_sf = sqrt(e_sf) ;
  o[0] = sf ;
  o[1] = e_sf ;
  if(sf!=0) o[2] = e_sf/sf; //relative error
  else o[2] = 0.;

  return o ;
}

float Selector::CalEleSF(LepObj e1, LepObj e2) {
  std::vector<float> w{1.0};
  float sf = 1;
  float err = 0; //relative error treated as uncorrelated = (dy/y)^2 = sum[(dxi/xi)^2]
  float errRec = 0.0;
  float errID = 0.0;
  //reconstruction
  std::vector<TH2F*> h{m_hSF_eleRec};
  //first lepton
  std::vector<float> sfs = GetSF_2DHist(e1.m_lvec.Eta(),e1.m_lvec.Pt(),h,w) ;
  sf = sfs[0]; 
  err += sfs[2]*sfs[2]; //2=relative error
  errRec += sfs[2]*sfs[2]; //2=relative error
  //second lepton
  sfs = GetSF_2DHist(e2.m_lvec.Eta(),e2.m_lvec.Pt(),h,w);
  sf *= sfs[0] ;
  err += sfs[2]*sfs[2]; //2=relative error
  errRec += sfs[2]*sfs[2]; //2=relative error
  
  //ID
  h[0] = m_hSF_eleID;
  //first lepton
  sfs = GetSF_2DHist(e1.m_lvec.Eta(),e1.m_lvec.Pt(),h,w);
  sf *= sfs[0] ;
  err += sfs[2]*sfs[2];
  errID += sfs[2]*sfs[2];
  //second lepton
  sfs = GetSF_2DHist(e2.m_lvec.Eta(),e2.m_lvec.Pt(),h,w);
  sf *= sfs[0] ; 
  err += sfs[2]*sfs[2];
  errID += sfs[2]*sfs[2];

  err = sqrt(err);
  errRec = sqrt(errRec);
  errID = sqrt(errID);

  if (m_eleUncType == "up") sf = sf*(1+err);
  if (m_eleUncType == "down") sf = sf*(1-err);
  if (m_eleUncType == "idup") sf = sf*(1+errID);
  if (m_eleUncType == "iddown") sf = sf*(1-errID);
  if (m_eleUncType == "recup") sf = sf*(1+errRec);
  if (m_eleUncType == "recdown") sf = sf*(1-errRec);

  return sf; 
}

float Selector::CalSingleEleSF(LepObj e1) {
  std::vector<float> w{1.0};
  float sf = 1;
  float err = 0; //relative error treated as uncorrelated = (dy/y)^2 = sum[(dxi/xi)^2]
  float errRec = 0.0;
  float errID = 0.0;
  //reconstruction
  std::vector<TH2F*> h{m_hSF_eleRec};
  //first lepton
  std::vector<float> sfs = GetSF_2DHist(e1.m_lvec.Eta(),e1.m_lvec.Pt(),h,w) ;
  sf = sfs[0]; 
  err += sfs[2]*sfs[2]; //2=relative error
  errRec += sfs[2]*sfs[2]; //2=relative error
  
  //ID
  h[0] = m_hSF_eleID;
  //first lepton
  sfs = GetSF_2DHist(e1.m_lvec.Eta(),e1.m_lvec.Pt(),h,w);
  sf *= sfs[0] ;
  err += sfs[2]*sfs[2];
  errID += sfs[2]*sfs[2];

  err = sqrt(err);
  errRec = sqrt(errRec);
  errID = sqrt(errID);
  if (m_eleUncType == "up") sf = sf*(1+err);
  if (m_eleUncType == "down") sf = sf*(1-err);
  if (m_eleUncType == "recup") sf = sf*(1+errRec);
  if (m_eleUncType == "recdown") sf = sf*(1-errRec);
  if (m_eleUncType == "idup") sf = sf*(1+errID);
  if (m_eleUncType == "iddown") sf = sf*(1-errID);

  return sf; 
}

float Selector::CalMuonSF_id_iso(LepObj e1, LepObj e2) {
  float sf(1.0);
  float err(0.0);
  float errID(0.0);
  float errIso(0.0);
#ifdef MC_2016
  //////////////
  //ID
  //////////////
  //first lepton
  std::vector<float> sfs = GetSF_2DHist(e1.m_lvec.Eta(),e1.m_lvec.Pt(), m_hSF_muonID, m_muonID_w);
  sf *= sfs[0];
  err += sfs[2]*sfs[2]; //relative error
  errID += sfs[2]*sfs[2]; //relative error
  //second lepton
  sfs = GetSF_2DHist(e2.m_lvec.Eta(),e2.m_lvec.Pt(), m_hSF_muonID, m_muonID_w);
  sf *= sfs[0];
  err += sfs[2]*sfs[2];
  errID += sfs[2]*sfs[2];
  
  /////////////////
  //Iso
  /////////////////
  //first muon
  sfs = GetSF_2DHist(e1.m_lvec.Eta(),e1.m_lvec.Pt(), m_hSF_muonIso, m_muonIso_w);
  sf *= sfs[0];
  err += sfs[2]*sfs[2];
  errIso += sfs[2]*sfs[2];
  //second lepton
  sfs = GetSF_2DHist(e2.m_lvec.Eta(),e2.m_lvec.Pt(), m_hSF_muonIso, m_muonIso_w);
  sf *= sfs[0];
  err += sfs[2]*sfs[2];
  errIso += sfs[2]*sfs[2];
#endif
#if defined(MC_2017) || defined(MC_2018)
  ///////////
  //ID
  ///////////
  //first muon
  std::vector<float> sfs = GetSF_2DHist(e1.m_lvec.Pt(),fabs(e1.m_lvec.Eta()), m_hSF_muonID, m_muonID_w);
  sf *= sfs[0];
  err += sfs[2]*sfs[2];
  errID += sfs[2]*sfs[2];
  //second muon
  sfs = GetSF_2DHist(e2.m_lvec.Pt(),fabs(e2.m_lvec.Eta()), m_hSF_muonID, m_muonID_w);
  sf *= sfs[0];
  err += sfs[2]*sfs[2];
  errID += sfs[2]*sfs[2];
  
  ///////////
  //Iso
  ///////////
  //first muon
  sfs = GetSF_2DHist(e1.m_lvec.Pt(),fabs(e1.m_lvec.Eta()), m_hSF_muonIso, m_muonIso_w);
  sf *= sfs[0];
  err += sfs[2]*sfs[2];
  errIso += sfs[2]*sfs[2];
  //second muon
  sfs = GetSF_2DHist(e2.m_lvec.Pt(),fabs(e2.m_lvec.Eta()), m_hSF_muonIso, m_muonIso_w);
  sf *= sfs[0];
  err += sfs[2]*sfs[2];
  errIso += sfs[2]*sfs[2];
#endif
  err = sqrt(err);
  errID = sqrt(errID);
  errIso = sqrt(errIso);
  if (m_muonUncType == "up") sf = sf*(1+err);
  if (m_muonUncType == "down") sf = sf*(1-err);
  if (m_muonUncType == "idup") sf = sf*(1+errID);
  if (m_muonUncType == "iddown") sf = sf*(1-errID);
  if (m_muonUncType == "isoup") sf = sf*(1+errIso);
  if (m_muonUncType == "isodown") sf = sf*(1-errIso);

  return sf ;
}

float Selector::CalSingleMuonSF_id_iso(LepObj e1) {
  float sf(1.0);
  float err(0.0);
  float errID(0.0);
  float errIso(0.0);
#ifdef MC_2016
  //////////////
  //ID
  //////////////
  //first lepton
  std::vector<float> sfs = GetSF_2DHist(e1.m_lvec.Eta(),e1.m_lvec.Pt(), m_hSF_muonID, m_muonID_w);
  sf *= sfs[0];
  err += sfs[2]*sfs[2]; //relative error
  errID += sfs[2]*sfs[2]; //relative error
  
  /////////////////
  //Iso
  /////////////////
  //first muon
  sfs = GetSF_2DHist(e1.m_lvec.Eta(),e1.m_lvec.Pt(), m_hSF_muonIso, m_muonIso_w);
  sf *= sfs[0];
  err += sfs[2]*sfs[2];
  errIso += sfs[2]*sfs[2];
#endif
#if defined(MC_2017) || defined(MC_2018)
  ///////////
  //ID
  ///////////
  //first muon
  std::vector<float> sfs = GetSF_2DHist(e1.m_lvec.Pt(),fabs(e1.m_lvec.Eta()), m_hSF_muonID, m_muonID_w);
  sf *= sfs[0];
  err += sfs[2]*sfs[2];
  errID += sfs[2]*sfs[2];
  
  ///////////
  //Iso
  ///////////
  //first muon
  sfs = GetSF_2DHist(e1.m_lvec.Pt(),fabs(e1.m_lvec.Eta()), m_hSF_muonIso, m_muonIso_w);
  sf *= sfs[0];
  err += sfs[2]*sfs[2];
  errIso += sfs[2]*sfs[2];
#endif
  err = sqrt(err);
  errID = sqrt(errID);
  errIso = sqrt(errIso);
  if (m_muonUncType == "up") sf = sf*(1+err);
  if (m_muonUncType == "down") sf = sf*(1-err);
  if (m_muonUncType == "idup") sf = sf*(1+errID);
  if (m_muonUncType == "iddown") sf = sf*(1-errID);
  if (m_muonUncType == "isoup") sf = sf*(1+errIso);
  if (m_muonUncType == "isodown") sf = sf*(1-errIso);

  return sf ;
}
/*
TLorentzVector Selector::GetTrigObj(Reader* r, unsigned id, unsigned bits, float ptThresh) { 

  int id_trigObj = -1 ;
  float maxPt = ptThresh ;

  for (unsigned i = 0 ; i < *(r->nTrigObj) ; ++i) {
    if ((abs(r->TrigObj_id[i]) == id) && ((r->TrigObj_filterBits)[i] & bits)) { //has correct id, bits
      //std::cout << "\n" << (r->TrigObj_id)[i] << " " << (r->TrigObj_filterBits)[i] << "  " << bits ;
      if ((r->TrigObj_pt)[i] > maxPt) { //choose maximum pt trigger object > threshold
        id_trigObj = i ;
        maxPt = (r->TrigObj_pt)[i] ;
      }
    }
  }
  
  TLorentzVector tl_out(0,0,0,0) ;
  float mass(0.1) ;
  if (id == 11) mass = 0.0005 ;
  if (id_trigObj>=0) tl_out.SetPtEtaPhiM((r->TrigObj_pt)[id_trigObj],(r->TrigObj_eta)[id_trigObj],(r->TrigObj_phi)[id_trigObj],mass) ;
  return tl_out ;
}
*/

float Selector::CalTrigSF(int id, LepObj lep1, LepObj lep2, TLorentzVector trigObj, TH1D* h_dR1_trig, TH1D* h_dR2_trig, TH1D* h_pt1_trig, TH1D* h_pt2_trig) {
  
  float trigSF = 1.0 ;
  if (trigObj.Pt() < 0.01) return trigSF ; //empty trigger object
  float dR1 = lep1.m_lvec.DeltaR(trigObj) ;
  float dR2 = lep2.m_lvec.DeltaR(trigObj) ;
  h_dR1_trig->Fill(dR1) ;
  h_dR2_trig->Fill(dR2) ;
  if ((dR1 < dR2) && (dR1 < 0.2)) {
    h_pt1_trig->Fill(lep1.m_lvec.Pt()) ;
    if (id == 13) {
      std::vector<float> sfTmp = GetSF_2DHist(fabs(lep1.m_lvec.Eta()),lep1.m_lvec.Pt(), m_hSF_muonTrig, m_muonTrig_w) ;
      trigSF = sfTmp[0];
      if (m_muonUncType == "trigup") trigSF = sfTmp[0]*(1+sfTmp[2]);
      if (m_muonUncType == "trigdown") trigSF = sfTmp[0]*(1-sfTmp[2]);
    }
    if (id == 11) {
      //SC eta
      std::vector<float> sfTmp = GetSF_2DHist(lep1.m_scEta,lep1.m_lvec.Pt(), m_hSF_eleTrig, m_eleTrig_w);
      trigSF = sfTmp[0];
      if (m_eleUncType == "trigup") trigSF = sfTmp[0]*(1+sfTmp[2]);
      if (m_eleUncType == "trigdown") trigSF = sfTmp[0]*(1-sfTmp[2]);
    }
  }    
  if ((dR2 < dR1) && (dR2 < 0.2)) {
    h_pt2_trig->Fill(lep2.m_lvec.Pt()) ;
    if (id == 13) {
      std::vector<float> sfTmp = GetSF_2DHist(fabs(lep2.m_lvec.Eta()),lep2.m_lvec.Pt(), m_hSF_muonTrig, m_muonTrig_w) ;
      trigSF = sfTmp[0];
      if (m_muonUncType == "trigup") trigSF = sfTmp[0]*(1+sfTmp[2]);
      if (m_muonUncType == "trigdown") trigSF = sfTmp[0]*(1-sfTmp[2]);
    }
    if (id == 11) {
      std::vector<float> sfTmp = GetSF_2DHist(lep2.m_scEta,lep2.m_lvec.Pt(), m_hSF_eleTrig, m_eleTrig_w) ;
      trigSF = sfTmp[0];
      if (m_eleUncType == "trigup") trigSF = sfTmp[0]*(1+sfTmp[2]);
      if (m_eleUncType == "trigdown") trigSF = sfTmp[0]*(1-sfTmp[2]);
    }
  }
  
  return trigSF ;
}

float Selector::CalTrigSF_singleLepton(int id, LepObj lep1, TLorentzVector trigObj) {
  
  float trigSF = 1.0 ;
  if (trigObj.Pt() < 0.01) return trigSF ; //empty trigger object
  float dR1 = lep1.m_lvec.DeltaR(trigObj) ;
  if ((dR1 < 0.2)) {
    if (id == 13) {
      std::vector<float> sfTmp = GetSF_2DHist(fabs(lep1.m_lvec.Eta()),lep1.m_lvec.Pt(), m_hSF_muonTrig, m_muonTrig_w) ;
      trigSF = sfTmp[0];
      if (m_muonUncType == "trigup") trigSF = sfTmp[0]*(1+sfTmp[2]);
      if (m_muonUncType == "trigdown") trigSF = sfTmp[0]*(1-sfTmp[2]);
    }
    if (id == 11) {
      //SC eta
      std::vector<float> sfTmp = GetSF_2DHist(lep1.m_scEta,lep1.m_lvec.Pt(), m_hSF_eleTrig, m_eleTrig_w);
      trigSF = sfTmp[0];
      if (m_eleUncType == "trigup") trigSF = sfTmp[0]*(1+sfTmp[2]);
      if (m_eleUncType == "trigdown") trigSF = sfTmp[0]*(1-sfTmp[2]);
    }
  }    
  
  return trigSF ;
}

/*
#if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)
unsigned Selector::MatchGenLep(Reader* r, LepObj lep, int pdgId) {
  float dRmin(1000) ;
  int indO(-1) ;
  for (unsigned i = 0 ; i < *(r->nGenDressedLepton) ; ++i) {
    if (pdgId == fabs((r->GenDressedLepton_pdgId)[i])) {
      TLorentzVector gLep_lvec ;
      gLep_lvec.SetPtEtaPhiM((r->GenDressedLepton_pt)[i], (r->GenDressedLepton_eta)[i], (r->GenDressedLepton_phi)[i], (r->GenDressedLepton_mass)[i]) ;
      float dRtmp = lep.m_lvec.DeltaR(gLep_lvec) ;
      if (dRtmp < dRmin) {
        dRmin = dRmin ;
        indO = i ;
      }
    }
  }
  return indO ;
}
#endif

float Selector::MuonRcSF(Reader* r, LepObj lep, int pdgId) {
  float sf(1.) ;
  sf = m_rc.kScaleDT(lep.m_charge, lep.m_lvec.Pt(), lep.m_lvec.Eta(), lep.m_lvec.Phi());
#if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)
  sf = 1 ;
  //int gLepInd = MatchGenLep(r, lep, 13) ;
  int gLepInd = r->Muon_genPartIdx[lep.m_idx] ;
  if(gLepInd >= 0) {
    sf = m_rc.kSpreadMC(lep.m_charge, lep.m_lvec.Pt(), lep.m_lvec.Eta(), lep.m_lvec.Phi(),(r->GenPart_pt[gLepInd]));
  }
  else {
    sf = m_rc.kSmearMC(lep.m_charge, lep.m_lvec.Pt(), lep.m_lvec.Eta(), lep.m_lvec.Phi(), (r->Muon_nTrackerLayers)[lep.m_idx], m_rand->Rndm());
  }
#endif
  return sf ;
}
*/

