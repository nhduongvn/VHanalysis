#define VbbHcc_selector_cxx

#include <math.h>

#include "TList.h"
#include "TParameter.h"
#include "TLorentzVector.h"

#include "VbbHcc_selector.h"
#include "Global.h"
#include "Obj.cxx"

VbbHcc_selector::~VbbHcc_selector() {
  if(h_VbbHcc) delete h_VbbHcc;
  if(h_VbbHcc_twojets) delete h_VbbHcc_twojets;
  if(h_VbbHcc_select1) delete h_VbbHcc_select1;
  if(h_VbbHcc_select2) delete h_VbbHcc_select2;
  if(h_VbbHcc_select3) delete h_VbbHcc_select3;
  if(h_Hcc) delete h_Hcc;
} 

void VbbHcc_selector::SlaveBegin(Reader* r) {
  h_evt = new TH1D("Nevt_VbbHcc_boosted","",4,-1.5,2.5) ; //bin 1: total negative weight events, bin 2: total positive weight events, bin 3: total event weighted by genWeight (= bin2 - bin1, if genWeight are always -1,1
  h_cutFlow = new TH1D("CutFlow_VbbHcc_boosted","",4,0,4) ;
  h_cutFlow->GetXaxis()->SetBinLabel(1,"Total");
  h_cutFlow->GetXaxis()->SetBinLabel(2,"Lumi");
  h_cutFlow->GetXaxis()->SetBinLabel(3,"Two jets+MET");
  h_cutFlow->GetXaxis()->SetBinLabel(4,"BCvL");

  //cut flow to select a boosted jet targetting Hcc
  h_cutFlow_hcc = new TH1D("CutFlow_Hcc_boosted","",7,0,7) ;
  h_cutFlow_hcc->GetXaxis()->SetBinLabel(1,"Total");
  h_cutFlow_hcc->GetXaxis()->SetBinLabel(2,"Lumi");
  h_cutFlow_hcc->GetXaxis()->SetBinLabel(3,"Jet kin");
  h_cutFlow_hcc->GetXaxis()->SetBinLabel(4,"pT_miss");
  h_cutFlow_hcc->GetXaxis()->SetBinLabel(5,"Jet rho");
  h_cutFlow_hcc->GetXaxis()->SetBinLabel(6,"Jet n2b1");
  h_cutFlow_hcc->GetXaxis()->SetBinLabel(7,"Jet DDCvL");
  
  //cut flow to select a boosted jet targetting VbbHcc using CvL and BvL chosing max CvL first 
  h_cutFlow_VbbHcc_select1 = new TH1D("CutFlow_VbbHcc_boosted_select1","",8,0,8) ;
  h_cutFlow_VbbHcc_select1->GetXaxis()->SetBinLabel(1,"Total");
  h_cutFlow_VbbHcc_select1->GetXaxis()->SetBinLabel(2,"Lumi");
  h_cutFlow_VbbHcc_select1->GetXaxis()->SetBinLabel(3,"Jet kin");
  h_cutFlow_VbbHcc_select1->GetXaxis()->SetBinLabel(4,"pT_miss");
  h_cutFlow_VbbHcc_select1->GetXaxis()->SetBinLabel(5,"Jet rho");
  h_cutFlow_VbbHcc_select1->GetXaxis()->SetBinLabel(6,"Jet n2b1");
  h_cutFlow_VbbHcc_select1->GetXaxis()->SetBinLabel(7,"Jet CvL");
  h_cutFlow_VbbHcc_select1->GetXaxis()->SetBinLabel(8,"Jet BvL");

  //cut flow to select a boosted jet targetting Hcc
  h_cutFlow_VbbHcc_select2 = new TH1D("CutFlow_VbbHcc_boosted_select2","",8,0,8) ;
  h_cutFlow_VbbHcc_select2->GetXaxis()->SetBinLabel(1,"Total");
  h_cutFlow_VbbHcc_select2->GetXaxis()->SetBinLabel(2,"Lumi");
  h_cutFlow_VbbHcc_select2->GetXaxis()->SetBinLabel(3,"Jet kin");
  h_cutFlow_VbbHcc_select2->GetXaxis()->SetBinLabel(4,"pT_miss");
  h_cutFlow_VbbHcc_select2->GetXaxis()->SetBinLabel(5,"Jet rho");
  h_cutFlow_VbbHcc_select2->GetXaxis()->SetBinLabel(6,"Jet n2b1");
  h_cutFlow_VbbHcc_select2->GetXaxis()->SetBinLabel(7,"Jet DT_MD_ZHccvsQCD");
  h_cutFlow_VbbHcc_select2->GetXaxis()->SetBinLabel(8,"Jet DT_MD_ZbbvsQCD");

  h_VbbHcc_twojets = new VHBoostedPlots("VbbHcc_boosted_twojets");
  h_VbbHcc = new VHBoostedPlots("VbbHcc_boosted");
  h_Hcc = new HBoostedPlots("Hcc_boosted");
  h_VbbHcc_select1 = new VHBoostedPlots("VbbHcc_boosted_select1");
  h_VbbHcc_select2 = new VHBoostedPlots("VbbHcc_boosted_select2");
  h_VbbHcc_select3 = new VHBoostedPlots("VbbHcc_boosted_select3");
  
  //cut flow to select a boosted jet targetting VbbHcc using CvL and BvL, choosing max BvL first 
  h_cutFlow_VbbHcc_select3 = new TH1D("CutFlow_VbbHcc_boosted_select3","",8,0,8) ;
  h_cutFlow_VbbHcc_select3->GetXaxis()->SetBinLabel(1,"Total");
  h_cutFlow_VbbHcc_select3->GetXaxis()->SetBinLabel(2,"Lumi");
  h_cutFlow_VbbHcc_select3->GetXaxis()->SetBinLabel(3,"Jet kin");
  h_cutFlow_VbbHcc_select3->GetXaxis()->SetBinLabel(4,"pT_miss");
  h_cutFlow_VbbHcc_select3->GetXaxis()->SetBinLabel(5,"Jet rho");
  h_cutFlow_VbbHcc_select3->GetXaxis()->SetBinLabel(6,"Jet n2b1");
  h_cutFlow_VbbHcc_select3->GetXaxis()->SetBinLabel(7,"Jet BvL");
  h_cutFlow_VbbHcc_select3->GetXaxis()->SetBinLabel(8,"Jet CvL");
  
  //test H and Z mass from MC truth
  h_test_MZ = new TH1D("MZbb_MCtruth","",200,0,200);
  h_test_MH = new TH1D("MHcc_MCtruth","",200,0,200);
  //Add histograms to fOutput so they can be saved in Processor::SlaveTerminate
  std::vector<TH1*> tmp = h_VbbHcc->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_VbbHcc_twojets->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_VbbHcc_select1->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_VbbHcc_select2->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_VbbHcc_select3->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_Hcc->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  r->GetOutputList()->Add(h_evt) ;
  r->GetOutputList()->Add(h_cutFlow) ;
  r->GetOutputList()->Add(h_cutFlow_hcc) ;
  r->GetOutputList()->Add(h_cutFlow_VbbHcc_select1) ;
  r->GetOutputList()->Add(h_cutFlow_VbbHcc_select2) ;
  r->GetOutputList()->Add(h_cutFlow_VbbHcc_select3) ;
  r->GetOutputList()->Add(h_test_MZ);
  r->GetOutputList()->Add(h_test_MH);
}

#if defined(MC_2016) || defined(MC_2017) || defined(MC_2018) 
std::vector<std::vector<int> > VbbHcc_selector::DauIdxs_ZH(Reader* r) {
  //vector to store indexes of H and Z daughters
  std::vector<std::vector<int> > dauIdxs;
  std::vector<int> dauIdxsZ;
  std::vector<int> dauIdxsH;
  //loop over genpart
  for(unsigned i = 0; i < *(r->nGenPart); ++i) {
    int mIdx = (r->GenPart_genPartIdxMother)[i];
    //if(mIdx>-1) {
      //std::cout << "\n" << (r->GenPart_pdgId)[mIdx] ;
    //}
    //b quarks from Z
    if(fabs((r->GenPart_pdgId)[i])==5 && mIdx>-1 && (r->GenPart_pdgId)[mIdx]==23) dauIdxsZ.push_back(i);
    //c quarks from H
    if(fabs((r->GenPart_pdgId)[i])==4 && mIdx>-1 && (r->GenPart_pdgId)[mIdx]==25) dauIdxsH.push_back(i);
  }
  dauIdxs.push_back(dauIdxsZ);
  dauIdxs.push_back(dauIdxsH);
  return dauIdxs;
}
#endif

void VbbHcc_selector::Process(Reader* r) {
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
  
  //test ZbbHcc events
  std::vector<std::vector<int> > dauIdxs = DauIdxs_ZH(r);
  if(dauIdxs[0].size()==2 && dauIdxs[1].size()==2) {
    int idx1_Z = dauIdxs[0][0];
    int idx2_Z = dauIdxs[0][1];
    int idx1_H = dauIdxs[1][0];
    int idx2_H = dauIdxs[1][1];
    TLorentzVector p1;
    TLorentzVector p2;
    p1.SetPtEtaPhiM((r->GenPart_pt)[idx1_Z],(r->GenPart_eta)[idx1_Z],(r->GenPart_phi)[idx1_Z],(r->GenPart_mass)[idx1_Z]);
    p2.SetPtEtaPhiM((r->GenPart_pt)[idx2_Z],(r->GenPart_eta)[idx2_Z],(r->GenPart_phi)[idx2_Z],(r->GenPart_mass)[idx2_Z]);
    h_test_MZ->Fill((p1+p2).M(),genWeight);
    p1.SetPtEtaPhiM((r->GenPart_pt)[idx1_H],(r->GenPart_eta)[idx1_H],(r->GenPart_phi)[idx1_H],(r->GenPart_mass)[idx1_H]);
    p2.SetPtEtaPhiM((r->GenPart_pt)[idx2_H],(r->GenPart_eta)[idx2_H],(r->GenPart_phi)[idx2_H],(r->GenPart_mass)[idx2_H]);
    h_test_MH->Fill((p1+p2).M(),genWeight);
  }

#endif

  h_evt->Fill(2,genWeight);
  h_cutFlow->Fill(0.5,genWeight);
  h_cutFlow_hcc->Fill(0.5,genWeight);
  h_cutFlow_VbbHcc_select1->Fill(0.5,genWeight);
  h_cutFlow_VbbHcc_select2->Fill(0.5,genWeight);
  h_cutFlow_VbbHcc_select3->Fill(0.5,genWeight);

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
  
  h_cutFlow->Fill(1.5,genWeight);
  h_cutFlow_hcc->Fill(1.5,genWeight);
  h_cutFlow_VbbHcc_select1->Fill(1.5,genWeight);
  h_cutFlow_VbbHcc_select2->Fill(1.5,genWeight);
  h_cutFlow_VbbHcc_select3->Fill(1.5,genWeight);

  float evtW = 1. ;

  if (!m_isData) evtW *= genWeight*puSF*l1preW;

  //std::cout << "\n Data type: " << m_isData ;
  //std::cout << "\n Number of jets: " << *(r->nJet) ;
  //if (*(r->nJet)>0) std::cout << "\n First jet: " << (r->Jet_eta)[0] ;
  //=============Get objects============= 
  std::vector<JetObjBoosted> jets ;
  for (unsigned int i = 0 ; i < *(r->nFatJet) ; ++i) {
    int jetFlav = -1 ;
#if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)
    jetFlav = (r->Jet_hadronFlavour)[i];
#endif
    JetObjBoosted jet((r->FatJet_pt)[i],(r->FatJet_eta)[i],(r->FatJet_phi)[i],(r->FatJet_mass)[i],jetFlav,
        (r->FatJet_btagDDCvB)[i],(r->FatJet_btagDDCvL)[i], (r->FatJet_btagDDBvL)[i], 
        (r->FatJet_deepTagMD_ZHccvsQCD)[i],(r->FatJet_deepTagMD_ZbbvsQCD)[i],-1,
        (r->FatJet_n2b1)[i], -1) ;
    if((r->FatJet_pt)[i] > 400 && fabs((r->FatJet_eta)[i]) < 2.5) jets.push_back(jet) ;
  }
  
  //HBoosted
  //see page. 29 of AN-2019-048 for details
  //find a jet with highest CvL and with pt > 450
  //jet pt and eta cut
  std::vector<unsigned> idx_tmps;
  for(unsigned i = 0; i < jets.size();++i) {
    if (jets[i].m_lvec.Pt()>400 && jets[i].m_lvec.M()>40) idx_tmps.push_back(i);
  }
  //jet rho cut
  std::vector<unsigned> idx_tmps_1;
  //consider jets passing kinematic cuts
  if (idx_tmps.size()>0) {
    h_cutFlow_hcc->Fill(2.5,genWeight);
    h_cutFlow_VbbHcc_select1->Fill(2.5,genWeight);
    h_cutFlow_VbbHcc_select2->Fill(2.5,genWeight);
    h_cutFlow_VbbHcc_select3->Fill(2.5,genWeight);
    for (auto i:idx_tmps) {
      if(jets[i].m_rho > -6 && jets[i].m_rho < -2.1) idx_tmps_1.push_back(i);
    }
  }
  
  //MET cut///////////////////////////////////////////////// 
  if (*(r->MET_pt)>140) return;
  
  //pass jet kine and met
  if (idx_tmps.size()>0) {
    h_cutFlow_hcc->Fill(3.5,genWeight);
    h_cutFlow_VbbHcc_select1->Fill(3.5,genWeight);
    h_cutFlow_VbbHcc_select2->Fill(3.5,genWeight);
    h_cutFlow_VbbHcc_select3->Fill(3.5,genWeight);
  }
  //jet n2b1 cut 
  std::vector<unsigned> idx_tmps_2;
  //consider jets passing kine met and rho
  if (idx_tmps_1.size()>0) {
    h_cutFlow_hcc->Fill(4.5,genWeight);
    h_cutFlow_VbbHcc_select1->Fill(4.5,genWeight);
    h_cutFlow_VbbHcc_select2->Fill(4.5,genWeight);
    h_cutFlow_VbbHcc_select3->Fill(4.5,genWeight);
    for (auto i:idx_tmps_1) {
      if(jets[i].m_n2b1<0.3) idx_tmps_2.push_back(i);
    }
  }
  
  ////////////////////////
  //find jets with maximum CvL among jet passing kine, rho and n2b1
  ////////////////////////
  int idx_cc(-1);
  float max_ddCvL = -10;
  bool filled(false);
  for(auto i:idx_tmps_2) {
    //fill cut flow for jet passing kine, met, rho and n2b1
    if(!filled) {
      h_cutFlow_hcc->Fill(5.5,genWeight);
      h_cutFlow_VbbHcc_select1->Fill(5.5,genWeight);
      h_cutFlow_VbbHcc_select2->Fill(5.5,genWeight);
      filled=true;
    }
    if(jets[i].m_DDCvL>max_ddCvL) {
      max_ddCvL = jets[i].m_DDCvL;
      idx_cc=i;
    }
  }

  //make CvL cut 
  if(idx_cc>=0 && jets[idx_cc].m_DDCvL > 0.45) {
    h_cutFlow_hcc->Fill(6.5,genWeight);
    h_Hcc->FillJet(jets[idx_cc]);
  }

  //find second jets with maximum BvL
  float max_ddBvL = -10;
  int idx_bb(-1);
  for(auto i:idx_tmps_2) {
    if (i!=idx_cc) {
      if(jets[i].m_DDBvL > max_ddBvL) {
        max_ddBvL = jets[i].m_DDBvL;
        idx_bb = i;
      }
    }
  }
  
  /////////////////////////
  //fill VHboosted selection 1
  /////////////////////////
  if(idx_cc>=0&&jets[idx_cc].m_DDCvL>0.45&&jets[idx_cc].m_DDCvB>0.03) {
    h_cutFlow_VbbHcc_select1->Fill(6.5,genWeight);
    if(idx_bb>=0&&jets[idx_bb].m_DDBvL>0.3) {
      h_cutFlow_VbbHcc_select1->Fill(7.5,genWeight);
      //now fill histograms
      ZObj Z(jets[idx_bb]);
      HObj H(jets[idx_cc]);
      h_VbbHcc_select1->Fill(H,Z,evtW);
      std::vector<JetObjBoosted> jet_VbbZcc{jets[idx_bb], jets[idx_cc]};
      h_VbbHcc_select1->FillJets(jet_VbbZcc,evtW);
    }
  }

  ////////////////////////////////////
  //fill VHboosted selection 2
  //now find idx_cc and idx_bb based on FatJet_deepTagMD_ZHccvsQCD and FatJet_deepTagMD_ZbbvsQCD
  ////////////////////////////////////
  idx_cc = -1;
  float max_DT = -10;
  for(auto i:idx_tmps_2) {
    if(jets[i].m_DT_ZHccvsQCD > max_DT) {
      max_DT = jets[i].m_DT_ZHccvsQCD;
      idx_cc = i;
    }
  }
  idx_bb = -1;
  max_DT = -10;
  for(auto i:idx_tmps_2) {
    if(i!=idx_cc&&jets[i].m_DT_ZbbvsQCD > max_DT) {
      max_DT = jets[i].m_DT_ZbbvsQCD;
      idx_bb = i;
    }
  }
  if(idx_cc>=0&&jets[idx_cc].m_DT_ZHccvsQCD>0.7&&jets[idx_cc].m_DDCvB>0.5) {
    h_cutFlow_VbbHcc_select2->Fill(6.5,genWeight);
    if(idx_bb>=0&&jets[idx_bb].m_DT_ZbbvsQCD>0.5) {
      h_cutFlow_VbbHcc_select2->Fill(7.5,genWeight);
      //now fill histograms
      ZObj Z(jets[idx_bb]);
      HObj H(jets[idx_cc]);
      h_VbbHcc_select2->Fill(H,Z,evtW);
      std::vector<JetObjBoosted> jet_VbbZcc{jets[idx_bb], jets[idx_cc]};
      h_VbbHcc_select2->FillJets(jet_VbbZcc,evtW);
    }
  }
  
  ///////////////////////////////
  //selection 3
  ///////////////////////////////
  //find jets with maximum BvL among jet passing kine, met, rho, and n2b1
  idx_bb = -1;
  max_ddBvL = -10;
  filled = false;
  for(auto i:idx_tmps_2) {
    if(!filled) {
      h_cutFlow_VbbHcc_select3->Fill(5.5,genWeight);
      filled=true;
    }
    if(jets[i].m_DDBvL>max_ddBvL) {
      max_ddBvL = jets[i].m_DDBvL;
      idx_bb=i;
    }
  }

  //find second jets with maximum CvL
  max_ddCvL = -10;
  idx_cc = -1;
  for(auto i:idx_tmps_2) {
    if (i!=idx_bb) {
      if(jets[i].m_DDCvL > max_ddCvL) {
        max_ddCvL = jets[i].m_DDCvL;
        idx_cc = i;
      }
    }
  }

  if(idx_bb>=0&&jets[idx_bb].m_DDBvL>0.3) {
    h_cutFlow_VbbHcc_select3->Fill(6.5,genWeight);
    if(idx_cc>=0&&jets[idx_cc].m_DDCvL>0.45&&jets[idx_cc].m_DDCvB>0.03) {
      h_cutFlow_VbbHcc_select3->Fill(7.5,genWeight);
      //now fill histograms
      ZObj Z(jets[idx_bb]);
      HObj H(jets[idx_cc]);
      h_VbbHcc_select3->Fill(H,Z,evtW);
      std::vector<JetObjBoosted> jet_VbbZcc{jets[idx_bb], jets[idx_cc]};
      h_VbbHcc_select3->FillJets(jet_VbbZcc,evtW);
    }
  }

  //use these?
  //FatJet_deepTagMD_ZHccvsQCD
  //FatJet_deepTagMD_ZbbvsQCD
  //FatJet_particleNet_HccvsQCD-->not available in NANOAODV7
  //FatJet_particleNet_ZvsQCD
  //ZccHcc?
  //find jets passing CvL or BvL and chose the highest pT
  //find jets passing CvL or BvL and chosing the one that maximum CvL
  //find jets passing CvL or BvL and chosing the one that maximum CvL
  //find jets with maximum ZbbvsQCD
  
  //VHboosted
  if (jets.size()>=2) {

    h_cutFlow->Fill(2.5,genWeight);
    
    h_VbbHcc_twojets->FillJets(jets,evtW);
    
    //compare 
    //which jets are more likely to be B or C
    unsigned idx_cc;
    unsigned idx_bb;
    if (jets[0].m_DDCvB >= jets[1].m_DDCvB) {idx_cc = 0; idx_bb = 1;}
    if (jets[0].m_DDCvB < jets[1].m_DDCvB) {idx_cc = 1; idx_bb = 0;}
    //distinguish both jets with light jets
    //std::cout << "\n cc: " << jets[idx_cc].m_DDCvB << " " << jets[idx_cc].m_DDCvL << " " << jets[idx_cc].m_DDBvL;
    //std::cout << "\n bb: " << jets[idx_bb].m_DDCvB << " " << jets[idx_bb].m_DDCvL << " " << jets[idx_bb].m_DDBvL;
    if (jets[idx_cc].m_DDCvB > 0.1 && jets[idx_cc].m_DDCvL > 0.45 && jets[idx_bb].m_DDBvL > 0.45) {

      h_cutFlow->Fill(3.5,genWeight);

      //now fill histograms
      ZObj Z(jets[idx_bb]);
      HObj H(jets[idx_cc]);
      h_VbbHcc->Fill(H,Z,evtW);
      std::vector<JetObjBoosted> jet_VbbZcc{jets[idx_bb], jets[idx_cc]};
      h_VbbHcc->FillJets(jet_VbbZcc,evtW);
    }
  }
} //end Process



void VbbHcc_selector::Terminate(TList* mergedList, std::string outFileName) {
  
  /*TList* aList = new TList() ;
  TParameter<double>* a = new TParameter<double>("lep_eta",CUTS.Get<float>("lep_eta")) ;
  aList->Add(a) ;
  a = new TParameter<double>("lep_pt",CUTS.Get<float>("lep_pt")) ;
  aList->Add(a) ;
  
  TFile* f = new TFile(outFileName.c_str(), "UPDATE") ;
  aList->Write("VbbHcc_selectorCuts",TObject::kSingleKey) ;

  f->Close() ;
  */
}
