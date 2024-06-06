#ifndef Global_h
#define Global_h

#include <iostream>
#include <algorithm>
#include <vector>
//#include "boost/variant.hpp"

namespace glob {
  
  class Parameters {
    
    public:
      
      Parameters() {
        parameterNames.push_back("jet_pt") ;
        parameterNames.push_back("jet_eta") ;
        parameterNames.push_back("jet_main_btagWP") ;
        parameterNames.push_back("jet_pt_ak08") ;
        parameterNames.push_back("jet_eta_ak08") ;
        parameterNames.push_back("ele_dz_b") ;
        parameterNames.push_back("ele_d0_b") ;
        parameterNames.push_back("ele_dz_e") ;
        parameterNames.push_back("ele_d0_e") ;
        parameterNames.push_back("lep_jetOverlap_pt");
        parameterNames.push_back("lep_jetOverlap_eta");
        parameterNames.push_back("lep_pt") ;
        parameterNames.push_back("lep_eta") ;
        parameterNames.push_back("muon_iso");
        parameterNames.push_back("muon_iso_0p25");
      } ;
      
      //passing a constant string https://stackoverflow.com/questions/4475634/c-pass-a-string
      //template<class T> T Get(const std::string& name) ;
      //template<class T> void Set(const std::string& name, T val) ;
      template<class T> T Get(const std::string& name) {
      //float Get(const std::string& name) {
        if (std::count(parameterNames.begin(),parameterNames.end(),name)) {
          if (name == "jet_pt") return jet_pt ;
          else if (name == "jet_eta") return jet_eta ;
          else if (name == "jet_pt_ak08") return jet_pt_ak08 ;
          else if (name == "jet_eta_ak08") return jet_eta_ak08 ;
          else if (name == "ele_dz_b") return ele_dz_b;
          else if (name == "ele_d0_b") return ele_d0_b;
          else if (name == "ele_dz_e") return ele_dz_e;
          else if (name == "ele_d0_e") return ele_d0_e;
          else if (name == "lep_jetOverlap_pt") return lep_jetOverlap_pt;
          else if (name == "lep_jetOverlap_eta") return lep_jetOverlap_eta;
          else if (name == "lep_pt") return lep_pt ;
          else if (name == "lep_eta") return lep_eta ;
          else if (name == "muon_iso") return muon_iso;
          else if (name == "muon_iso_0p25") return muon_iso_0p25;
          else {
            std::cout << "\n The parameter, " << name << ", is in the parameter list but found no value for it." << std::endl ;
            exit(1) ;
          }
        }
        else {
          std::cout << "\n There is no parameter " << name << ". Will terminate" << std::endl ;
          exit(1) ; 
        }
        return 0 ;
      } ;
      
      std::string GetStr(const std::string& name) {
        if (std::count(parameterNames.begin(),parameterNames.end(),name)) {
          if (name == "jet_main_btagWP") return jet_main_btagWP;
          else {
            std::cout << "\n The parameter, " << name << ", is in the parameter list but found no value for it." << std::endl ;
            exit(1) ;
          }
        }
        else {
          std::cout << "\n There is no parameter " << name << ". Will terminate" << std::endl ;
          exit(1) ; 
        }
        return "" ;
      } ;

      void SetStr(const std::string& name, std::string val) {
        if (std::count(parameterNames.begin(),parameterNames.end(),name)) {
          if (name == "jet_main_btagWP") jet_main_btagWP = val;
        }
        else std::cout << "\n Can not set value for parameter named: " << name << ". Not exist in list of parameters " << std::endl; 
      };

      template<class T> void Set(const std::string& name, T val) {
        if (std::count(parameterNames.begin(),parameterNames.end(),name)) {
            if (name == "jet_pt")
              jet_pt = val;
            else if(name=="jet_eta")
              jet_eta = val;
            else if(name=="jet_main_btagWP")
              jet_main_btagWP = val;
            else if(name=="jet_pt_ak08")
              jet_pt_ak08 = val;
            else if(name=="jet_eta_ak08")
              jet_eta_ak08 = val;
            else if(name=="ele_dz_b")
              ele_dz_b = val;
            else if(name=="ele_d0_b")
              ele_d0_b = val;
            else if(name=="ele_dz_e")
              ele_dz_e = val;
            else if(name=="ele_d0_e")
              ele_d0_e = val;
            else if(name=="lep_jetOverlap_pt")
              lep_jetOverlap_pt = val;
            else if(name=="lep_jetOverlap_eta")
              lep_jetOverlap_eta = val;
            else if(name=="lep_pt")
              lep_pt = val;
            else if(name=="lep_eta")
              lep_eta = val;
            else if(name=="muon_iso")
              muon_iso = val;
            else if(name=="muon_iso_0p25")
              muon_iso_0p25 = val;
            else {  
              std::cout << "\n The parameter, " << name << ", is in the list of parameters but it's values is not set." << std::endl; 
              exit(1);
            }
        }
        else std::cout << "\n Can not set value for parameter named: " << name << ". Not exist in list of parameters " << std::endl; 
      } ;


    private:
      float jet_pt ;
      float jet_eta ;
      std::string jet_main_btagWP ;
      float jet_pt_ak08;
      float jet_eta_ak08; 
      float ele_dz_b;
      float ele_d0_b;
      float ele_dz_e;
      float ele_d0_e;
      float lep_jetOverlap_pt;
      float lep_jetOverlap_eta;
      float lep_pt;
      float lep_eta;
      float muon_iso;
      float muon_iso_0p25;
      std::vector<std::string> initializedVars ;
      std::vector<std::string> parameterNames ;

  } ;
  
}


//http://www.cplusplus.com/forum/unices/5784/
extern glob::Parameters CUTS ;

#endif
