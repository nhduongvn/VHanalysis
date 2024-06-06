//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Feb 14 16:02:21 2020 by ROOT version 6.14/09
// from TTree Events/Events
// found on file: 8F93A522-A364-BE4A-8A5D-26591CD081F1.root
//////////////////////////////////////////////////////////

#ifndef Reader_h
#define Reader_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <TTreeReader.h>
#include <TTreeReaderValue.h>
#include <TTreeReaderArray.h>

// Headers needed by this particular selector


class Reader : public TSelector {
public :
   TTreeReader     fReader;  //!the tree reader
   TTree          *fChain = 0;   //!pointer to the analyzed TTree or TChain
   
   // Readers to access the data (delete the ones you do not need).
#if defined(DATA_2016) || defined(DATA_2017) || defined(DATA_2018)
   TTreeReaderValue<UInt_t> run = {fReader, "run"};
   TTreeReaderValue<UInt_t> luminosityBlock = {fReader, "luminosityBlock"};
   TTreeReaderValue<ULong64_t> event = {fReader, "event"};
#endif

#if defined(MC_2016) || defined(MC_2017)
   TTreeReaderValue<Float_t> L1PreFiringWeight_Dn = {fReader, "L1PreFiringWeight_Dn"};
   TTreeReaderValue<Float_t> L1PreFiringWeight_Nom = {fReader, "L1PreFiringWeight_Nom"};
   TTreeReaderValue<Float_t> L1PreFiringWeight_Up = {fReader, "L1PreFiringWeight_Up"};
#endif
///////////////////////////////////////////////
//Trigger
///////////////////////////////////////////////
#if defined(MC_2016) || defined(DATA_2016)
   TTreeReaderValue<Bool_t> HLT_AK8DiPFJet280_200_TrimMass30_BTagCSV_p20 = {fReader, "HLT_AK8DiPFJet280_200_TrimMass30_BTagCSV_p20"};
   TTreeReaderValue<Bool_t> HLT_AK8PFJet360_TrimMass30 = {fReader, "HLT_AK8PFJet360_TrimMass30"};
   TTreeReaderValue<Bool_t> HLT_AK8PFJet450 = {fReader, "HLT_AK8PFJet450"};
   TTreeReaderValue<Bool_t> HLT_PFJet450 = {fReader, "HLT_PFJet450"};
   TTreeReaderValue<Bool_t> HLT_AK8PFHT700_TrimR0p1PT0p03Mass50 = {fReader, "HLT_AK8PFHT700_TrimR0p1PT0p03Mass50"};
   TTreeReaderValue<Bool_t> HLT_PFHT900 = {fReader, "HLT_PFHT900"};
   TTreeReaderValue<Bool_t> HLT_IsoMu24 = {fReader, "HLT_IsoMu24"};
   TTreeReaderValue<Bool_t> HLT_IsoTkMu24 = {fReader, "HLT_IsoTkMu24"};
   TTreeReaderValue<Bool_t> HLT_Mu50 = {fReader, "HLT_Mu50"};
   TTreeReaderValue<Bool_t> HLT_TkMu50 = {fReader, "HLT_TkMu50"};
  #if defined(MC_2016) || !defined(DATA_2016H)
   TTreeReaderValue<Bool_t> HLT_PFHT800 = {fReader, "HLT_PFHT800"};
  #endif
#endif
#if defined(MC_2017) || defined(DATA_2017)
   TTreeReaderValue<Bool_t> HLT_AK8PFJet500 = {fReader, "HLT_AK8PFJet500"};
   TTreeReaderValue<Bool_t> HLT_PFJet500 = {fReader, "HLT_PFJet500"};
   TTreeReaderValue<Bool_t> HLT_PFHT1050 = {fReader, "HLT_PFHT1050"};
   TTreeReaderValue<Bool_t> HLT_Mu27 = {fReader, "HLT_Mu27"};
   TTreeReaderValue<Bool_t> HLT_IsoMu27 = {fReader, "HLT_IsoMu27"};
   TTreeReaderValue<Bool_t> HLT_Mu50 = {fReader, "HLT_Mu50"};
//   TTreeReaderValue<Bool_t> HLT_OldMu100 = {fReader, "HLT_OldMu100"};
//   TTreeReaderValue<Bool_t> HLT_TkMu100 = {fReader, "HLT_TkMu100"};
  #if defined(MC_2017) || !defined(DATA_2017B)
   TTreeReaderValue<Bool_t> HLT_AK8PFJet400_TrimMass30 = {fReader, "HLT_AK8PFJet400_TrimMass30"};
   TTreeReaderValue<Bool_t> HLT_AK8PFHT800_TrimMass50 = {fReader, "HLT_AK8PFHT800_TrimMass50"};
  #endif
  #if defined(MC_2017) || defined(DATA_2017F)
   TTreeReaderValue<Bool_t> HLT_AK8PFJet330_PFAK8BTagCSV_p17 = {fReader, "HLT_AK8PFJet330_PFAK8BTagCSV_p17"};
  #endif
#endif
#if defined(MC_2018) || defined(DATA_2018)
   TTreeReaderValue<Bool_t> HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4 = {fReader, "HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4"};
   TTreeReaderValue<Bool_t> HLT_AK8PFJet400_TrimMass30 = {fReader, "HLT_AK8PFJet400_TrimMass30"};
   TTreeReaderValue<Bool_t> HLT_AK8PFJet500 = {fReader, "HLT_AK8PFJet500"};
   TTreeReaderValue<Bool_t> HLT_PFJet500 = {fReader, "HLT_PFJet500"};
   TTreeReaderValue<Bool_t> HLT_AK8PFHT800_TrimMass50 = {fReader, "HLT_AK8PFHT800_TrimMass50"};
   TTreeReaderValue<Bool_t> HLT_PFHT1050 = {fReader, "HLT_PFHT1050"};
   TTreeReaderValue<Bool_t> HLT_IsoMu24 = {fReader, "HLT_IsoMu24"};
   TTreeReaderValue<Bool_t> HLT_Mu50 = {fReader, "HLT_Mu50"};
   TTreeReaderValue<Bool_t> HLT_OldMu100 = {fReader, "HLT_OldMu100"};
   TTreeReaderValue<Bool_t> HLT_TkMu100 = {fReader, "HLT_TkMu100"};
#endif
   //Jet
   TTreeReaderValue<UInt_t> nJet = {fReader, "nJet"};
   TTreeReaderArray<Float_t> Jet_pt = {fReader, "Jet_pt"};
   TTreeReaderArray<Float_t> Jet_eta = {fReader, "Jet_eta"};
   TTreeReaderArray<Float_t> Jet_phi = {fReader, "Jet_phi"};
   TTreeReaderArray<Float_t> Jet_mass = {fReader, "Jet_mass"};
   TTreeReaderArray<Int_t> Jet_jetId = {fReader, "Jet_jetId"};
   TTreeReaderArray<Float_t> Jet_btagDeepB = {fReader, "Jet_btagDeepB"};
   TTreeReaderArray<Float_t> Jet_btagDeepFlavB = {fReader, "Jet_btagDeepFlavB"};
   TTreeReaderArray<Float_t> Jet_puIdDisc = {fReader, "Jet_puIdDisc"};

   //FatJet
   TTreeReaderValue<UInt_t> nFatJet = {fReader, "nFatJet"};
   TTreeReaderArray<Float_t> FatJet_pt = {fReader, "FatJet_pt"};
   TTreeReaderArray<Float_t> FatJet_eta = {fReader, "FatJet_eta"};
   TTreeReaderArray<Float_t> FatJet_phi = {fReader, "FatJet_phi"};
   TTreeReaderArray<Float_t> FatJet_mass = {fReader, "FatJet_mass"};
   TTreeReaderArray<Float_t> FatJet_n2b1 = {fReader, "FatJet_n2b1"};
#if defined(NANOAODV7)
   TTreeReaderArray<Float_t> FatJet_btagDDCvB = {fReader, "FatJet_btagDDCvB"};
   TTreeReaderArray<Float_t> FatJet_btagDDCvL = {fReader, "FatJet_btagDDCvL"};
   TTreeReaderArray<Float_t> FatJet_btagDDBvL = {fReader, "FatJet_btagDDBvL"};
#endif
#if defined(NANOAODV9)
   TTreeReaderArray<Float_t> FatJet_btagDDCvB = {fReader, "FatJet_btagDDCvBV2"};
   TTreeReaderArray<Float_t> FatJet_btagDDCvL = {fReader, "FatJet_btagDDCvLV2"};
   TTreeReaderArray<Float_t> FatJet_btagDDBvL = {fReader, "FatJet_btagDDBvLV2"};
   TTreeReaderArray<Float_t> FatJet_particleNetMD_QCD = {fReader, "FatJet_particleNetMD_QCD"};
   TTreeReaderArray<Float_t> FatJet_particleNetMD_Xbb = {fReader, "FatJet_particleNetMD_Xbb"};
   TTreeReaderArray<Float_t> FatJet_particleNetMD_Xcc = {fReader, "FatJet_particleNetMD_Xcc"};
   TTreeReaderArray<Float_t> FatJet_particleNetMD_Xqq = {fReader, "FatJet_particleNetMD_Xqq"};
   TTreeReaderArray<Float_t> FatJet_particleNet_TvsQCD = {fReader, "FatJet_particleNet_TvsQCD"};
   TTreeReaderArray<Float_t> FatJet_particleNet_WvsQCD = {fReader, "FatJet_particleNet_WvsQCD"};
   TTreeReaderArray<Float_t> FatJet_particleNet_ZvsQCD = {fReader, "FatJet_particleNet_ZvsQCD"};
#endif
   TTreeReaderArray<Float_t> FatJet_deepTagMD_ZHccvsQCD = {fReader, "FatJet_deepTagMD_ZHccvsQCD"};
   TTreeReaderArray<Float_t> FatJet_deepTagMD_ZbbvsQCD = {fReader, "FatJet_deepTagMD_ZbbvsQCD"};

#if defined(POSTPROC) && (defined(MC_2016) || defined(MC_2017) || defined(MC_2018))
  TTreeReaderArray<Float_t> FatJet_pt_raw = {fReader, "FatJet_pt_raw"};
  TTreeReaderArray<Float_t> FatJet_pt_nom = {fReader, "FatJet_pt_nom"};
  TTreeReaderArray<Float_t> FatJet_mass_raw = {fReader, "FatJet_mass_raw"};
  TTreeReaderArray<Float_t> FatJet_mass_nom = {fReader, "FatJet_mass_nom"};
  TTreeReaderArray<Float_t> FatJet_corr_JEC = {fReader, "FatJet_corr_JEC"};
  TTreeReaderArray<Float_t> FatJet_corr_JER = {fReader, "FatJet_corr_JER"};
  TTreeReaderArray<Float_t> FatJet_corr_JMS = {fReader, "FatJet_corr_JMS"};
  TTreeReaderArray<Float_t> FatJet_corr_JMR = {fReader, "FatJet_corr_JMR"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_raw = {fReader, "FatJet_msoftdrop_raw"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_nom = {fReader, "FatJet_msoftdrop_nom"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_corr_JMR = {fReader, "FatJet_msoftdrop_corr_JMR"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_corr_JMS = {fReader, "FatJet_msoftdrop_corr_JMS"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_corr_PUPPI = {fReader, "FatJet_msoftdrop_corr_PUPPI"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_tau21DDT_nom = {fReader, "FatJet_msoftdrop_tau21DDT_nom"};
  TTreeReaderArray<Float_t> FatJet_pt_jesTotalUp = {fReader, "FatJet_pt_jesTotalUp"};
  TTreeReaderArray<Float_t> FatJet_pt_jesTotalDown = {fReader, "FatJet_pt_jesTotalDown"};
  TTreeReaderArray<Float_t> FatJet_pt_jer0Up = {fReader, "FatJet_pt_jer0Up"};
  TTreeReaderArray<Float_t> FatJet_pt_jer0Down = {fReader, "FatJet_pt_jer0Down"};
  TTreeReaderArray<Float_t> FatJet_pt_jer1Up = {fReader, "FatJet_pt_jer1Up"};
  TTreeReaderArray<Float_t> FatJet_pt_jer1Down = {fReader, "FatJet_pt_jer1Down"};
  TTreeReaderArray<Float_t> FatJet_pt_jer2Up = {fReader, "FatJet_pt_jer2Up"};
  TTreeReaderArray<Float_t> FatJet_pt_jer2Down = {fReader, "FatJet_pt_jer2Down"};
  TTreeReaderArray<Float_t> FatJet_pt_jer3Up = {fReader, "FatJet_pt_jer3Up"};
  TTreeReaderArray<Float_t> FatJet_pt_jer3Down = {fReader, "FatJet_pt_jer3Down"};
  TTreeReaderArray<Float_t> FatJet_pt_jer4Up = {fReader, "FatJet_pt_jer4Up"};
  TTreeReaderArray<Float_t> FatJet_pt_jer4Down = {fReader, "FatJet_pt_jer4Down"};
  TTreeReaderArray<Float_t> FatJet_mass_jesTotalUp = {fReader, "FatJet_mass_jesTotalUp"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_jesTotalUp = {fReader, "FatJet_msoftdrop_jesTotalUp"};
  TTreeReaderArray<Float_t> FatJet_mass_jesTotalDown = {fReader, "FatJet_mass_jesTotalDown"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_jesTotalDown = {fReader, "FatJet_msoftdrop_jesTotalDown"};
  TTreeReaderArray<Float_t> FatJet_mass_jer0Up = {fReader, "FatJet_mass_jer0Up"};
  TTreeReaderArray<Float_t> FatJet_mass_jer1Up = {fReader, "FatJet_mass_jer1Up"};
  TTreeReaderArray<Float_t> FatJet_mass_jer2Up = {fReader, "FatJet_mass_jer2Up"};
  TTreeReaderArray<Float_t> FatJet_mass_jer3Up = {fReader, "FatJet_mass_jer3Up"};
  TTreeReaderArray<Float_t> FatJet_mass_jer4Up = {fReader, "FatJet_mass_jer4Up"};
  TTreeReaderArray<Float_t> FatJet_mass_jer5Up = {fReader, "FatJet_mass_jer5Up"};
  TTreeReaderArray<Float_t> FatJet_mass_jmrUp = {fReader, "FatJet_mass_jmrUp"};
  TTreeReaderArray<Float_t> FatJet_mass_jmsUp = {fReader, "FatJet_mass_jmsUp"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_jer0Up = {fReader, "FatJet_msoftdrop_jer0Up"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_tau21DDT_jer0Up = {fReader, "FatJet_msoftdrop_tau21DDT_jer0Up"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_jer1Up = {fReader, "FatJet_msoftdrop_jer1Up"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_tau21DDT_jer1Up = {fReader, "FatJet_msoftdrop_tau21DDT_jer1Up"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_jer2Up = {fReader, "FatJet_msoftdrop_jer2Up"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_tau21DDT_jer2Up = {fReader, "FatJet_msoftdrop_tau21DDT_jer2Up"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_jer3Up = {fReader, "FatJet_msoftdrop_jer3Up"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_tau21DDT_jer3Up = {fReader, "FatJet_msoftdrop_tau21DDT_jer3Up"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_jer4Up = {fReader, "FatJet_msoftdrop_jer4Up"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_tau21DDT_jer4Up = {fReader, "FatJet_msoftdrop_tau21DDT_jer4Up"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_jer5Up = {fReader, "FatJet_msoftdrop_jer5Up"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_tau21DDT_jer5Up = {fReader, "FatJet_msoftdrop_tau21DDT_jer5Up"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_jmrUp = {fReader, "FatJet_msoftdrop_jmrUp"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_jmsUp = {fReader, "FatJet_msoftdrop_jmsUp"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_tau21DDT_jmrUp = {fReader, "FatJet_msoftdrop_tau21DDT_jmrUp"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_tau21DDT_jmsUp = {fReader, "FatJet_msoftdrop_tau21DDT_jmsUp"};
  TTreeReaderArray<Float_t> FatJet_mass_jer0Down = {fReader, "FatJet_mass_jer0Down"};
  TTreeReaderArray<Float_t> FatJet_mass_jer1Down = {fReader, "FatJet_mass_jer1Down"};
  TTreeReaderArray<Float_t> FatJet_mass_jer2Down = {fReader, "FatJet_mass_jer2Down"};
  TTreeReaderArray<Float_t> FatJet_mass_jer3Down = {fReader, "FatJet_mass_jer3Down"};
  TTreeReaderArray<Float_t> FatJet_mass_jer4Down = {fReader, "FatJet_mass_jer4Down"};
  TTreeReaderArray<Float_t> FatJet_mass_jer5Down = {fReader, "FatJet_mass_jer5Down"};
  TTreeReaderArray<Float_t> FatJet_mass_jmrDown = {fReader, "FatJet_mass_jmrDown"};
  TTreeReaderArray<Float_t> FatJet_mass_jmsDown = {fReader, "FatJet_mass_jmsDown"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_jer0Down = {fReader, "FatJet_msoftdrop_jer0Down"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_tau21DDT_jer0Down = {fReader, "FatJet_msoftdrop_tau21DDT_jer0Down"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_jer1Down = {fReader, "FatJet_msoftdrop_jer1Down"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_tau21DDT_jer1Down = {fReader, "FatJet_msoftdrop_tau21DDT_jer1Down"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_jer2Down = {fReader, "FatJet_msoftdrop_jer2Down"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_tau21DDT_jer2Down = {fReader, "FatJet_msoftdrop_tau21DDT_jer2Down"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_jer3Down = {fReader, "FatJet_msoftdrop_jer3Down"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_tau21DDT_jer3Down = {fReader, "FatJet_msoftdrop_tau21DDT_jer3Down"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_jer4Down = {fReader, "FatJet_msoftdrop_jer4Down"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_tau21DDT_jer4Down = {fReader, "FatJet_msoftdrop_tau21DDT_jer4Down"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_jer5Down = {fReader, "FatJet_msoftdrop_jer5Down"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_tau21DDT_jer5Down = {fReader, "FatJet_msoftdrop_tau21DDT_jer5Down"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_jmrDown = {fReader, "FatJet_msoftdrop_jmrDown"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_jmsDown = {fReader, "FatJet_msoftdrop_jmsDown"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_tau21DDT_jmrDown = {fReader, "FatJet_msoftdrop_tau21DDT_jmrDown"};
  TTreeReaderArray<Float_t> FatJet_msoftdrop_tau21DDT_jmsDown = {fReader, "FatJet_msoftdrop_tau21DDT_jmsDown"};
#endif

#if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)
  TTreeReaderValue<Float_t> Pileup_nTrueInt = {fReader, "Pileup_nTrueInt"};
  TTreeReaderValue<Float_t> genWeight = {fReader, "genWeight"};
  TTreeReaderArray<Int_t> Jet_hadronFlavour = {fReader, "Jet_hadronFlavour"};
  TTreeReaderArray<Int_t> FatJet_hadronFlavour = {fReader, "FatJet_hadronFlavour"};
  TTreeReaderValue<UInt_t> nGenPart = {fReader, "nGenPart"};
  TTreeReaderArray<Float_t> GenPart_eta = {fReader, "GenPart_eta"};
  TTreeReaderArray<Float_t> GenPart_mass = {fReader, "GenPart_mass"};
  TTreeReaderArray<Float_t> GenPart_phi = {fReader, "GenPart_phi"};
  TTreeReaderArray<Float_t> GenPart_pt = {fReader, "GenPart_pt"};
  TTreeReaderArray<Int_t> GenPart_genPartIdxMother = {fReader, "GenPart_genPartIdxMother"};
  TTreeReaderArray<Int_t> GenPart_pdgId = {fReader, "GenPart_pdgId"};
  //TTreeReaderArray<Int_t> GenPart_status = {fReader, "GenPart_status"};
  //TTreeReaderArray<Int_t> GenPart_statusFlags = {fReader, "GenPart_statusFlags"};
  //TTreeReaderValue<UInt_t> nGenJet = {fReader, "nGenJet"};
  //TTreeReaderArray<Float_t> GenJet_eta = {fReader, "GenJet_eta"};
  //TTreeReaderArray<Float_t> GenJet_pt = {fReader, "GenJet_pt"};
#endif

   // Electron
   TTreeReaderValue<UInt_t> nElectron = {fReader, "nElectron"};
   TTreeReaderArray<Float_t> Electron_pt = {fReader, "Electron_pt"};
   TTreeReaderArray<Float_t> Electron_eta = {fReader, "Electron_eta"};
   TTreeReaderArray<Float_t> Electron_phi = {fReader, "Electron_phi"};
   TTreeReaderArray<Float_t> Electron_mass = {fReader, "Electron_mass"};
   TTreeReaderArray<Int_t> Electron_charge = {fReader, "Electron_charge"};
   TTreeReaderArray<Float_t> Electron_deltaEtaSC = {fReader, "Electron_deltaEtaSC"};
   TTreeReaderArray<Int_t> Electron_cutBased = {fReader, "Electron_cutBased"};
   TTreeReaderArray<Float_t> Electron_dz = {fReader, "Electron_dz"};
   TTreeReaderArray<Float_t> Electron_dxy = {fReader, "Electron_dxy"};

   // Muon
   TTreeReaderValue<UInt_t> nMuon = {fReader, "nMuon"};
   TTreeReaderArray<Float_t> Muon_pt = {fReader, "Muon_pt"};
   TTreeReaderArray<Float_t> Muon_eta = {fReader, "Muon_eta"};
   TTreeReaderArray<Float_t> Muon_phi = {fReader, "Muon_phi"};
   TTreeReaderArray<Float_t> Muon_mass = {fReader, "Muon_mass"};
   TTreeReaderArray<Int_t> Muon_charge = {fReader, "Muon_charge"};
   TTreeReaderArray<Float_t> Muon_pfRelIso04_all = {fReader, "Muon_pfRelIso04_all"};
   TTreeReaderArray<Bool_t> Muon_mediumId = {fReader, "Muon_mediumId"};
   TTreeReaderArray<Bool_t> Muon_looseId = {fReader, "Muon_looseId"};

   //MET
   TTreeReaderValue<Float_t> MET_pt = {fReader, "MET_pt"};

   Reader(TTree * /*tree*/ =0) {}

   virtual ~Reader() { }
   virtual Int_t   Version() const { return 2; }
   virtual void    Begin(TTree *tree);
   virtual void    SlaveBegin(TTree *tree);
   virtual void    Init(TTree *tree);
   virtual Bool_t  Notify();
   virtual Bool_t  Process(Long64_t entry);
   virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) { return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; }
   virtual void    SetOption(const char *option) { fOption = option; }
   virtual void    SetObject(TObject *obj) { fObject = obj; }
   virtual void    SetInputList(TList *input) { fInput = input; }
   virtual TList  *GetOutputList() const { return fOutput; }
   virtual void    SlaveTerminate();
   virtual void    Terminate();

   ClassDef(Reader,0);

};

#endif

#ifdef Reader_cxx
void Reader::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the reader is initialized.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   fReader.SetTree(tree);
}

Bool_t Reader::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}


#endif // #ifdef Reader_cxx
