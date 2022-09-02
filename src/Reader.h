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
   
   //Jet
   TTreeReaderValue<UInt_t> nJet = {fReader, "nJet"};
   TTreeReaderArray<Float_t> Jet_pt = {fReader, "Jet_pt"};
   TTreeReaderArray<Float_t> Jet_eta = {fReader, "Jet_eta"};
   TTreeReaderArray<Float_t> Jet_phi = {fReader, "Jet_phi"};
   TTreeReaderArray<Float_t> Jet_mass = {fReader, "Jet_mass"};
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
#endif
   TTreeReaderArray<Float_t> FatJet_deepTagMD_ZHccvsQCD = {fReader, "FatJet_deepTagMD_ZHccvsQCD"};
   TTreeReaderArray<Float_t> FatJet_deepTagMD_ZbbvsQCD = {fReader, "FatJet_deepTagMD_ZbbvsQCD"};
   

#if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)
   TTreeReaderValue<Float_t> Pileup_nTrueInt = {fReader, "Pileup_nTrueInt"};
   TTreeReaderValue<Float_t> genWeight = {fReader, "genWeight"};
   TTreeReaderArray<Int_t> Jet_hadronFlavour = {fReader, "Jet_hadronFlavour"};
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

   // Muon
   TTreeReaderValue<UInt_t> nMuon = {fReader, "nMuon"};
   TTreeReaderArray<Float_t> Muon_pt = {fReader, "Muon_pt"};
   TTreeReaderArray<Float_t> Muon_eta = {fReader, "Muon_eta"};
   TTreeReaderArray<Float_t> Muon_phi = {fReader, "Muon_phi"};
   TTreeReaderArray<Float_t> Muon_mass = {fReader, "Muon_mass"};
   TTreeReaderArray<Int_t> Muon_charge = {fReader, "Muon_charge"};
   TTreeReaderArray<Float_t> Muon_pfRelIso04_all = {fReader, "Muon_pfRelIso04_all"};
   TTreeReaderArray<Bool_t> Muon_mediumId = {fReader, "Muon_mediumId"};

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
