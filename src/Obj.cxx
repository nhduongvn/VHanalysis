#ifndef Obj_cxx
#define Obj_cxx

//== Obj class ================================================================
// This file handles multiple classes that allow us to reconstruct objects. 
// In the general form, each was its own object, but we have some common items
// between each, so I'm rewriting this to have a base Obj class.
//=============================================================================

//== Include statements =======================================================

#include "TLorentzVector.h" // ROOT object for four-vectors
#include <math.h>           // General math functions

/******************************************************************************
* General Object                                                              *
******************************************************************************/
class GenObj {

  public:
  
    // Constructor & Deconstructor
    GenObj(float pt, float eta, float phi, float mass) {
      m_lvec.SetPtEtaPhiM(pt, eta, phi, mass);
      std::cout << "GenObj created." << std::endl;
    };
    virtual ~GenObj() { };
    
    // Methods
    float Pt() { return m_lvec.Pt(); }
    float Eta() { return m_lvec.Eta(); }
    float M() { return m_lvec.M(); }
  
  private:
  
    // Variables
    TLorentzVector m_lvec; //4-vector

};

/******************************************************************************
* Lepton Object                                                               *
******************************************************************************/
class LepObj : public GenObj {

  public:
  
    // Constructor & Deconstructor
    LepObj(float pt, float eta, float scEta, float phi, float mass, unsigned idx,
      int charge, float iso) : m_scEta(scEta), m_idx(idx), m_charge(charge), 
      m_iso(iso) {
      std::cout << "Lep Obj created." << std::endl;
    };
    virtual ~LepObj() {};
 
    // Methods
    float SCEta() { return m_scEta; }
    float Idx() { return m_idx; }
    float Charge() { return m_charge; }
    float Iso() { return m_iso; }
  
  private:
  
    // Variables
    float m_scEta;  // SC eta value
    unsigned m_idx; // index
    int m_charge;   // charge
    float m_iso;    // isolation
    int m_objIdx = 1;
  

};

/******************************************************************************
* Jet Object                                                                  *
******************************************************************************/
class JetObj {

};

/******************************************************************************
* Z boson Object                                                              *
******************************************************************************/
class ZObj {

};

/******************************************************************************
* Higgs boson Object                                                          *
******************************************************************************/
class HObj {

};

/******************************************************************************
* D_HZ Algorithm Object                                                       *
******************************************************************************/
class DHZObj {

};

#endif
