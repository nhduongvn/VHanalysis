#ifndef Global_h
#define Global_h

//== Global class =============================================================
// This is a class that handles global variables we want to use in our analysis.
// The main point of the class is to handle cuts.
//=============================================================================

//== Include statements =======================================================

#include <iostream>   // Std input/output
#include <algorithm>  // Functions designed to be used on ranges of elements
#include <vector>     // Vector lists
#include "boost/variant.hpp"

//== Main namespace ===========================================================
namespace glob {

  /********************************************************************
  * Parameters class - This handles all the cuts we desire            *
  ********************************************************************/
  class Parameters {
  
    public:
    
      // Constructors & Deconstructors
      Parameters() {
        // Add to the list any parameters we want to have.
        parameterNames.push_back("jet_pt");
        parameterNames.push_back("jet_eta");
        parameterNames.push_back("jet_main_btagWP");
        parameterNames.push_back("lep_eta");
        parameterNames.push_back("lep_pt0");
        parameterNames.push_back("lep_pt1");
        parameterNames.push_back("lep_jetOverlap_pt");
        parameterNames.push_back("lep_jetOverlap_eta");
        parameterNames.push_back("muon_iso");
        parameterNames.push_back("ZMassL");
        parameterNames.push_back("ZMassH");
        parameterNames.push_back("MET");
        parameterNames.push_back("btag_looseWP");
        parameterNames.push_back("btag_mediumWP");
        parameterNames.push_back("ctag_looseWP");
        parameterNames.push_back("ctag_mediumWP");
      };
      
      // Get method
      template<class T> T Get(const std::string& name) {
      
        // If the name exists within our list, return the proper value.
        if (std::count(parameterNames.begin(), parameterNames.end(), name)) {
        
          if (name == "jet_pt") return jet_pt;
          if (name == "jet_eta") return jet_eta;
          //if (name == "jet_main_btagWP") return jet_main_btagWP;
          
          if (name == "lep_eta") return lep_eta;
          if (name == "lep_pt0") return lep_pt0;
          if (name == "lep_pt1") return lep_pt1;
          if (name == "lep_jetOverlap_pt") return lep_jetOverlap_pt;
          if (name == "lep_jetOverlap_eta") return lep_jetOverlap_eta;
          if (name == "muon_iso") return muon_iso;
          
          if (name == "ZMassL") return ZMassL;
          if (name == "ZMassH") return ZMassH;
          if (name == "MET") return MET;
          
          if (name == "btag_looseWP") return btag_looseWP;
          if (name == "btag_mediumWP") return btag_mediumWP;
          if (name == "ctag_looseWP") return ctag_looseWP;
          if (name == "ctag_mediumWP") return ctag_mediumWP;
          
          // If we somehow miss one of the cases, return -1.
          return -1;
        
        }
        // Otherwise, return an error message.
        else {
          std::cout << "\nThere is no parameter " << name;
          std::cout << ". Will terminate." << std::endl;
          exit(1);
        }
        // If somehow we pass both checks, return 0.
        return 0;
      };

      // GetStr method
      std::string GetStr(const std::string& name) {
        // If the name exists within our list, get the parameter.
        if (std::count(parameterNames.begin(), parameterNames.end(), name)) {
          if (name == "jet_main_btagWP") return jet_main_btagWP;
        }
        // Otherwies, return an error message.
        else {
          std::cout << "\nThere is no parameter " << name;
          std::cout << ". Will terminate." << std::endl;
          exit(1);
        }
        // If somehow we pass both checks, return 0.
      };
      
      // Set method
      template<class T> void Set(const std::string& name, T val) {
      
        // If the name exists within our list, set the parameter.
        if (std::count(parameterNames.begin(), parameterNames.end(), name)) {
        
          if (name == "jet_pt") jet_pt = val;
          if (name == "jet_eta") jet_eta = val;
          //if (name == "jet_main_btagWP") jet_main_btagWP = val;

          if (name == "lep_eta") lep_eta = val;
          if (name == "lep_pt0") lep_pt0 = val;
          if (name == "lep_pt1") lep_pt1 = val;
          if (name == "lep_jetOverlap_pt") lep_jetOverlap_pt = val;
          if (name == "lep_jetOverlap_eta") lep_jetOverlap_eta = val;
          if (name == "muon_iso") muon_iso = val;

          if (name == "ZMassL") ZMassL = val;
          if (name == "ZMassH") ZMassH = val;
          if (name == "MET") MET = val;
 
          if (name == "btag_looseWP") btag_looseWP = val; 
          if (name == "btag_mediumWP") btag_mediumWP = val;
          if (name == "ctag_looseWP") ctag_looseWP = val;
          if (name == "ctag_mediumWP") ctag_mediumWP = val;
        
        }
        // Otherwise, return an "error"/warning message.
        else {
          std::cout << "\nCan NOT set value for parameter named: " << name;
          std::cout << ". Does NOT exist in list of parameters." << std::endl;
        }
      };

      // SetStr method
      void SetStr(const std::string& name, std::string val) {
        // If the name exists within our list, set the parameter.
        if (std::count(parameterNames.begin(), parameterNames.end(), name)) {
          if (name == "jet_main_btagWP") jet_main_btagWP = val;
        } 
        else {
          std::cout << "\nCan NOT set value for parameter named: " << name;
          std::cout << ". Does NOT exist in list of parameters." << std::endl;
        }
      };
    
    private:
    
      // Variables - Jets
      float jet_pt;
      float jet_eta;
      std::string jet_main_btagWP;
      
      // Variables - Leptons
      float lep_eta;
      float lep_pt0;
      float lep_pt1;
      float lep_jetOverlap_pt;
      float lep_jetOverlap_eta;
      float muon_iso;
      
      // Variables - Bosons
      float ZMassL;
      float ZMassH;
      
      // Variables - General
      float MET;
      
      // Variables - Tagging
      float btag_looseWP;
      float btag_mediumWP;
      float ctag_looseWP;
      float ctag_mediumWP;
      
      std::vector<std::string> initializedVars;
      std::vector<std::string> parameterNames;
  };

}

//http://www.cplusplus.com/forum/unices/5784/
extern glob::Parameters CUTS;

#endif
