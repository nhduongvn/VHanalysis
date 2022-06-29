#ifndef Obj_cxx
#define Obj_cxx

//The objects are wrapper so that the analysis is independent on variable name on the ntuple, only when the objects are created such dependences occur 

#include "TLorentzVector.h"

//-------------------------------objs------------------------------
class LepObj {

  public:
    
    LepObj(float pt, float eta, float scEta, float phi, float mass, unsigned idx, int charge, 
           float iso) : m_scEta(scEta), m_idx(idx), m_charge(charge), m_iso(iso) { 
             m_lvec.SetPtEtaPhiM(pt, eta, phi, mass) ; 
    } ;

    virtual ~LepObj() {} ;

    TLorentzVector m_lvec ; 
    
    float m_scEta ;
    unsigned m_idx ;
    int m_charge ;
    float m_iso ;
    
} ;

class JetObj {
  
  public:
    
    JetObj(float pt, float eta, float phi, float mass, unsigned flav, 
           float deepCSV, float deepJet, float PUjetID) : m_flav(flav), m_deepCSV(deepCSV), m_deepJet(deepJet), m_puid(PUjetID)  {
              m_lvec.SetPtEtaPhiM(pt, eta, phi, mass) ; 
    } ;

    virtual ~JetObj() {} ;

    bool IsLepton(std::vector<LepObj>& leps) {
      float minDr = 1000 ;
      for (std::vector<LepObj>::iterator it = leps.begin() ; it != leps.end() ; ++it) {
        float dRtmp = m_lvec.DeltaR(it->m_lvec) ;
        if (dRtmp < minDr) minDr = dRtmp ;
      }
      return minDr <= 0.4 ;
    }

    void SetSV(std::vector<TLorentzVector>& sv) {
      float maxPt = -1;
      m_svIdx = -1;
      m_mSV = -1;
      for (unsigned isv = 0 ; isv < sv.size() ; ++isv) {
        float dRtmp = m_lvec.DeltaR(sv[isv]);
        if (dRtmp <= 0.4 && sv[isv].Pt() > maxPt) {
          m_svIdx = isv; 
          m_mSV = sv[isv].M();
        }
      }
    } ;

    TLorentzVector m_lvec ;
    unsigned m_flav ;
    float m_deepCSV ;
    float m_deepJet ;
    unsigned m_svIdx ;
    float m_mSV;
    float m_puid;

} ;

#endif
