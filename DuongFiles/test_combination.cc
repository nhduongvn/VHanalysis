#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;
bool sortbysecdesc(const pair<int,float> &a,
                   const pair<int,float> &b)
{
       return a.second>b.second;
}

/*
std::pair<int, float> findJet(int idx, const std::vector<pair<int, float>>& jets)
{
  for(auto jet : jets) {
    if (idx==jet.first) return jet;
  }
  return make_pair(-1,-1);
}*/

//find other jets in 2 leading BvsL or CvsL jets 
//0 --> 1, 1-->0
int findOtherJet(int i) {
  if (i==0) return 1;
  return 0;
}
//note x[0]=y[0]
std::vector<std::vector<int>> findCom_overlap(std::vector<int> x, std::vector<int>y) {
  std::vector<std::vector<int>> outs;
  int b0(x[0]),b1(x[1]),b2(x[2]),b3(x[3]);
  int c0(y[0]),c1(y[1]),c2(y[2]),c3(y[3]);
  if(b1 != c1 && b1 != c2) {
    outs.push_back({b0,b1,c1,c2});
  }
  if(b1==c1) {
    outs.push_back({b0,b1,c2,c3});
    if(b2!=c2) {
      outs.push_back({b0,b2,c1,c2});
    }
    if(b2==c2) {
      outs.push_back({b0,b2,c1,c3});
      outs.push_back({b0,b3,c1,c2});
    }
  }
  if(b1==c2) {
    outs.push_back({b0,b1,c1,c3});
    if(b2!=c1) {
      outs.push_back({b0,b2,c1,c2});
    }
    if(b2==c1) {
      outs.push_back({b0,b2,c2,c3});
      outs.push_back({b0,b3,c1,c2});
    }
  }
  return outs;
}

std::vector<std::vector<int>> find_combs(std::vector<int> bs,std::vector<int> cs) {
  int b0(-1),b1(-10),b2(-100),b3(-100);
  int c0(-2),c1(-20),c2(-200),c3(-2000);
  int b0_idx(-1);
  int c0_idx(-1);
  //just try to find an overlapping pair
  if(bs.size()>=2 && cs.size() >=2) {
    for(int i = 0 ; i < min(2,int(bs.size()));++i) {
      for(int j = 0 ; j < min(2,int(cs.size()));++j) {
        if (bs[i]==cs[j]) {
          b0_idx = i;
          c0_idx = j;
          break;
        }
      }
      //just need to find the first overlapping
      if(b0_idx>=0) break;
    }
  }
  if (b0_idx>=0) {
    b0 = bs[b0_idx];
    c0 = cs[c0_idx];
    b1 = bs[findOtherJet(b0_idx)];
    c1 = cs[findOtherJet(c0_idx)];
  }
  if(bs.size()>=3) b2 = bs[2];
  if(bs.size()>=4) b3 = bs[3];
  if(cs.size()>=3) c2 = cs[2];
  if(cs.size()>=4) c3 = cs[3];
  //now find combination
  std::vector<std::vector<int>> outs;
  if(b0_idx>=0) {//overlapping found
    outs = findCom_overlap({b0,b1,b2,b3},{c0,c1,c2,c3});
    //consider c1 as cjet, just swap b and c sets 
    std::vector<std::vector<int>> tmps = findCom_overlap({c0,c1,c2,c3},{b0,b1,b2,b3});
    //now swap b and c positioning again so that maintaining b first, c second order
    for(auto tmp:tmps) {
      outs.push_back({tmp[2],tmp[3],tmp[0],tmp[1]});
    }
  }
  //no overlapping found just return 2 bs and 2 cs
  else {
    outs.push_back({b0,b1,c0,c1});
  }
  //now remove dummy combination, which has a negative value
  std::vector<std::vector<int>> outs_final;
  for(auto tmp : outs) {
    bool removeIt(false);
    for (auto i:tmp) {
      if(i<0) {
        removeIt=true;
        break;
      }
    }
    if(!removeIt) outs_final.push_back(tmp);
  }
  
  return outs_final;

}

int main() {
  /*
  std::vector<int> bs({0,1,2,3});
  std::vector<int> cs({0,1,5,6});
  std::cout << "\n b jets: ";
  for(auto i: bs) std::cout << " " << i;
  std::cout << "\n c jets: ";
  for(auto i: cs) std::cout << " " << i;
  std::vector<std::vector<int>> combs = find_combs(bs,cs);
  for(auto com:combs) {
    std::cout << "\n" ;
    for(auto i:com) {
      std::cout << " " << i;
    }
  }
  std::cout << std::endl;
  */
  
  vector<pair<int, float> > jets_idx_BvsL;
  vector<pair<int, float> > jets_idx_CvsL;
  //test cases
  jets_idx_BvsL.push_back(make_pair(0, 0.5));
  jets_idx_BvsL.push_back(make_pair(1, 0.3));
  jets_idx_BvsL.push_back(make_pair(2, 0.4));
  jets_idx_BvsL.push_back(make_pair(3, 0.2));
  jets_idx_CvsL.push_back(make_pair(2, 0.3));
  jets_idx_CvsL.push_back(make_pair(5, 0.2));
  jets_idx_CvsL.push_back(make_pair(0, 0.6));
  jets_idx_CvsL.push_back(make_pair(7, 0.8));
  jets_idx_CvsL.push_back(make_pair(6, 0.5));
  /*
  jets_idx_BvsL.push_back(make_pair(0, 0.5));
  jets_idx_BvsL.push_back(make_pair(7, 0.3));
  jets_idx_BvsL.push_back(make_pair(2, 0.4));
  jets_idx_BvsL.push_back(make_pair(3, 0.2));
  jets_idx_CvsL.push_back(make_pair(7, 0.3));
  jets_idx_CvsL.push_back(make_pair(3, 0.2));
  jets_idx_CvsL.push_back(make_pair(2, 0.6));
  jets_idx_CvsL.push_back(make_pair(0, 0.8));
  */
  /*
  jets_idx_BvsL.push_back(make_pair(0, 0.5));
  jets_idx_BvsL.push_back(make_pair(7, 0.3));
  jets_idx_BvsL.push_back(make_pair(2, 0.4));
  jets_idx_BvsL.push_back(make_pair(3, 0.2));
  jets_idx_CvsL.push_back(make_pair(0, 0.3));
  jets_idx_CvsL.push_back(make_pair(5, 0.2));
  jets_idx_CvsL.push_back(make_pair(2, 0.6));
  jets_idx_CvsL.push_back(make_pair(7, 0.8));
  */
  
  sort(jets_idx_BvsL.begin(), jets_idx_BvsL.end(),sortbysecdesc);
  sort(jets_idx_CvsL.begin(), jets_idx_CvsL.end(),sortbysecdesc);
  //create the vectors containing of b and c jets indexes
  std::vector<int> bs;
  std::vector<int> cs;
  cout << "\n BvL jets: ";
  for(auto p : jets_idx_BvsL) {
    cout << "\n" << p.first << " " << p.second;
    bs.push_back(p.first);
  }
  cout << "\n CvL jets: ";
  for(auto p : jets_idx_CvsL) {
    cout << "\n" << p.first << " " << p.second;
    cs.push_back(p.first);
  }
  
  std::cout << "\n b jets indexes: ";
  for(auto i: bs) std::cout << " " << i;
  std::cout << "\n c jets indexes: ";
  for(auto i: cs) std::cout << " " << i;
  std::vector<std::vector<int>> combs = find_combs(bs,cs);
  std::cout << "\n I found these combinations (bjets, cjets)";
  for(auto com:combs) {
    std::cout << "\n" ;
    for(auto i:com) {
      std::cout << " " << i;
    }
  }
  std::cout << std::endl;


  
  

  //extension to 4 jets cases
  //if (b1 # [c1,c2]) {
  //  if  (b2 # [c1, c2]) {
  //    idx_can.push_back([b1, b2, c1, c2]) //distinguishable case once choice only
  //  }
  //  else if (b2 == c1) {
  //    idx_can.push_back([b1,b2,c3,c2]) //consider b2 as b jet so need to replace c1 by another one, c3, if exist
  //    idx_can.push_back([b1,b3,c1,c2]) //consider c1 as c jetso b2 need to be replaced by another one, b3, if exist
  //  }
  //  else { //b2 == c2
  //    idx_can.push_back([b1,b2,c1,c3]) //consider b2 as b jet so need to replace c2 by another one, c3, if exist
  //    idx_can.push_back([b1,b3,c1,c2]) //consider c2 as c jetso b2 need to be replaced by another one, b3, if exist
  //  }
  //}
  //else if (b1 == c1) {
  //  if (b2 != c2) {
  //    idx_can.push_back([b1,b2,c3,c2]) //consider b1 as b jet so need to replace c1 by another one, c3, if exist
  //    idx_can.push_back([b3,b2,c1,c2]) //consider c1 as c jet so need to replace b1 by another one, b3, if exist
  //  }
  //  if (b2 == c2) {
  //    idx_can.push_back([b1,b2,c3,c4]) //consider b1, b2 as b jet so need to replace c1,c2 by another ones, c3, c4, if exist
  //    idx_can.push_back([b3,b4,c1,c2]) //consider c1 as c2 asc jet so need to replace b1,b2 by another ones, b3, b4, if exist
  //    idx_can.push_back([b1,b3,c3,c2]) //
  //    idx_can.push_back([b3,b2,c1,c3]) //
  //  }
  //}
  //else { //b1 == c2
  //  if (b2 != c1) {
  //    idx_can.push_back([b1,b2,c3,c4]) //consider b1, b2 as b jet so need to replace c1,c2 by another ones, c3, c4, if exist
  //  }
  //  else { //b2 == c1 //already repeated above!!!
  //    idx_can.push_back([b1,b2,c3,c4]) //consider b1, b2 as b jet so need to replace c1,c2 by another ones, c3, c4, if exist
  //    idx_can.push_back([b3,b4,c1,c2]) //consider c1 as c2 asc jet so need to replace b1,b2 by another ones, b3, b4, if exist
  //    idx_can.push_back([b1,b3,c1,c3]) //
  //    idx_can.push_back([b3,b2,c3,c2]) //
  //  }
  //}
  /*
  std::vector<std::vector<pair<int,float>>> vh_cands_com;
  if (jets_idx_BvsL.size() >=2 && jets_idx_CvsL.size() >=2){
    //b1 == c1 && b1 != c2
    if() {
      //b1b2c2c3
        //b2 == c3
          //b1b2c2c4
          //b1b3c2c3
            //b3==c2
                //b1b3c4c3
                //b1b4c2c3
    }
    //b1 == c2
    if() {
    }
    //b2 == c1
    if() {
    }
    //b2 == c2
    if() {
    }
  }*/

  /*
  std::vector<std::vector<pair<int,float>>> vh_cands_com;
  if (jets_idx_BvsL.size() >=2 && jets_idx_CvsL.size() >=2){
    //loop over two leading BvL jets
    int nOverlappingJet(0);
    for(unsigned i = 0 ; i < 2; ++i) {
      for(unsigned j = 0 ; j < 2; ++j) {
        //found overlapping b c jets
        if (jets_idx_BvsL[i].first == jets_idx_CvsL[j].first) {
          nOverlappingJet+=1;
          //overlapping jet is considered as b jet, pick the third leading CvsL jet
          if(jets_idx_CvsL.size()>=3) {
            //std::vector<pair<int,float>> bjets_tmp{jets_idx_BvsL[i],jets_idx_BvsL[findOtherJet(i)]};
            //sort(bjets_tmp.begin(),bjets_tmp.end(),sortbysecdesc);
            //no overlapping between third CvsL jet and jets_idx_BvsL[findOtherJet(i)] which is bjets_tmp[1]
            if (jets_idx_CvsL[2].first!=jets_idx_BvsL[findOtherJet(i)].first) {
              //std::vector<pair<int,float>> tmp1{bjets_tmp[0],bjets_tmp[1],jets_idx_CvsL[findOtherJet(j)],jets_idx_CvsL[2]};
              std::vector<pair<int,float>> tmp1{jets_idx_BvsL[i],jets_idx_BvsL[findOtherJet(i)],jets_idx_CvsL[findOtherJet(j)],jets_idx_CvsL[2]};
              vh_cands_com.push_back(tmp1);
            }
            //third CvL jet is actually jets_idx_BvsL[findOtherJet(i)] which is bjets_tmp[1], now needs to resolve confusion
            else {
              //jets_idx_BvsL[findOtherJet(i)] is bjet, pick the next CvsL if available
              if (jets_idx_CvsL.size()>=4) {
                std::vector<pair<int,float>> tmp1{jets_idx_BvsL[i],jets_idx_BvsL[findOtherJet(i)],jets_idx_CvsL[findOtherJet(j)],jets_idx_CvsL[3]};
                vh_cands_com.push_back(tmp1);
              }
              //jets_idx_BvsL[findOtherJet(i)] is cjet
              if (jets_idx_BvsL.size()>=3) {
                //pick the next BvsL if not jets_idx_CvsL[findOtherJet(j)]
                if (jets_idx_BvsL[2].first != jets_idx_CvsL[findOtherJet(j)].first) {
                  std::vector<pair<int,float>> tmp1{jets_idx_BvsL[i],jets_idx_BvsL[2],jets_idx_CvsL[findOtherJet(j)],jets_idx_CvsL[2]};
                  vh_cands_com.push_back(tmp1);
                }
                //third BvsL is jets_idx_CvsL[findOtherJet(j)] need to resolve confusion
                else {
                  //third BvsL is considered as bjet, pick next CvsL jet
                  if (jets_idx_CvsL.size()>=4) {
                    std::vector<pair<int,float>> tmp1{jets_idx_BvsL[i],jets_idx_BvsL[2],jets_idx_CvsL[2],jets_idx_CvsL[3]};
                    vh_cands_com.push_back(tmp1);
                  }
                  //third BvsL is considered cjet, pick next BvsL jet
                  else {
                    if (jets_idx_BvsL.size()>=4) {
                      std::vector<pair<int,float>> tmp1{jets_idx_BvsL[i],jets_idx_BvsL[3],jets_idx_CvsL[findOtherJet(j)],jets_idx_CvsL[2]};
                      vh_cands_com.push_back(tmp1);
                    }
                  }
                }
              }
            }
          }
          //overlapping jet is considered as c jet, pick the third leading BvsL jet
          if(jets_idx_BvsL.size()>=3) {
            std::vector<pair<int,float>> cjets_tmp{jets_idx_CvsL[j],jets_idx_CvsL[findOtherJet(j)]};
            sort(cjets_tmp.begin(),cjets_tmp.end(),sortbysecdesc);
            std::vector<pair<int,float>> tmp{jets_idx_BvsL[findOtherJet(i)],jets_idx_BvsL[2],cjets_tmp[0],cjets_tmp[1]};
            vh_cands_com.push_back(tmp);
          }
        }
      }
    }
    if(nOverlappingJet==0) {
      std::vector<pair<int,float>> tmp{jets_idx_BvsL[0],jets_idx_BvsL[1],jets_idx_CvsL[0],jets_idx_CvsL[1]};
      vh_cands_com.push_back(tmp);
    }
    if(nOverlappingJet==2) {
      //two overlapping jets are b jets
      if(jets_idx_CvsL.size() >= 4) {
        std::vector<pair<int,float>> tmp{jets_idx_BvsL[0],jets_idx_BvsL[1],jets_idx_CvsL[2],jets_idx_CvsL[3]};
        vh_cands_com.push_back(tmp);
      }
      //two overlapping jets are c jets
      if(jets_idx_BvsL.size() >= 4) {
        std::vector<pair<int,float>> tmp{jets_idx_BvsL[2],jets_idx_BvsL[3],jets_idx_CvsL[0],jets_idx_CvsL[1]};
        vh_cands_com.push_back(tmp);
      }
    }
  } */
 
  /*
  bool nOverlappingJet(0);
  for(unsigned i = 0; i < min(3,int(jets_idx_BvsL.size()));++i) {
    for(unsigned j = i+1; j < min(3,int(jets_idx_CvsL.size()));++j) {
      if(jets_idx_BvsL[i]==jets_idx_CvsL[j]) nOverlappingJet+=1;
    }
  }

  int nJet=3;
  if(nOverlappingJet>=2) nJet=4;
  
  std::vector<std::vector<pair<int,float>>> bjet_pairs;
  for(unsigned i = 0; i < min(nJet,int(jets_idx_BvsL.size()));++i) {
    for(unsigned j = i+1; j < min(nJet,int(jets_idx_BvsL.size()));++j) {
      std::vector<pair<int,float>> tmp{jets_idx_BvsL[i],jets_idx_BvsL[j]};
      bjet_pairs.push_back(tmp);
    }
  }

  std::vector<std::vector<pair<int,float>>> cjet_pairs;
  for(unsigned i = 0; i < min(nJet,int(jets_idx_CvsL.size()));++i) {
    for(unsigned j = i+1; j < min(nJet,int(jets_idx_CvsL.size()));++j) {
      if(i!=j) {
        std::vector<pair<int,float>> tmp{jets_idx_CvsL[i],jets_idx_CvsL[j]};
        cjet_pairs.push_back(tmp);
      }
    }
  }

  std::vector<std::vector<pair<int,float>>> vh_cands_com;
  for(auto bjet_pair : bjet_pairs) {
    for(auto cjet_pair : cjet_pairs) {
      bool hasDuplication(false);
      for(unsigned i = 0 ; i < 2 ; ++i) {
        for(unsigned j = 0 ; j < 2 ; ++j) {
          if(bjet_pair[i].first==cjet_pair[j].first) {
            hasDuplication=true;
            break;
          }
        }
        if(hasDuplication) break;
      }
      if(!hasDuplication) vh_cands_com.push_back({bjet_pair[0],bjet_pair[1],cjet_pair[0],cjet_pair[1]});
    }
  }

  std::cout <<"\n I found these combinations";
  for (auto vh : vh_cands_com) {
    std::cout << "\n" ;
    for (unsigned i = 0 ; i < 4 ; ++i) {
      std::cout << "(" << vh[i].first << ", " << vh[i].second << "), ";
    }
  }

  std::cout << std::endl;
  */
  
  /*
  std::vector<pair<int,float>> bjets;
  std::vector<pair<int,float>> cjets;
  std::vector<int> bc_jets;
  for (unsigned i = 0; i < min(4,int(jets_idx_BvsL.size())); ++i) {
    bool also_cjet(false);
    //only check overlapping for two leading BvsL jets
    if (i < 2) {
      for (unsigned j = 0; j < min(2,int(jets_idx_CvsL.size())); ++j) {
        if (jets_idx_BvsL[i].first == jets_idx_CvsL[j].first) {
          also_cjet = true;
          bc_jets.push_back(jets_idx_BvsL[i].first);
          break;
        }
      }
    }
    if (!also_cjet) bjets.push_back(jets_idx_BvsL[i]);
  }

  for (unsigned i = 0; i < min(4,int(jets_idx_CvsL.size())); ++i) {
    bool also_bjet(false);
    //only check overlapping for two leading CvsL jets
    if(i<2) {
      for (unsigned j = 0; j < min(2,int(jets_idx_BvsL.size())); ++j) {
        if (jets_idx_CvsL[i].first == jets_idx_BvsL[j].first) {
          also_bjet = true;
          break;
        }
      }
    }
    if (!also_bjet) cjets.push_back(jets_idx_CvsL[i]);
  }


  cout << "\n c jets: ";
  for(auto p : cjets) cout << "\n" << p.first << " " << p.second;
  cout << "\n b jets: ";
  for(auto p : bjets) cout << "\n" << p.first << " " << p.second;
  cout << "\n bc jets: ";
  for(auto p : bc_jets) cout << "\n" << p ; 
  
  std::vector<std::vector<pair<int,float>>> vh_cands_com;
  //no overlapping
  if (bc_jets.size()==0 && bjets.size()>=2 && cjets.size()>=2) {
    std::vector<pair<int,float>> tmp{bjets[0],bjets[1],cjets[0],cjets[1]};
    vh_cands_com.push_back(tmp);
  }
  //one jet goes to b or c jet at a time
  for (unsigned i=0;i<bc_jets.size();++i) {
    //overlapping jet goes to bjets
    std::vector<pair<int,float>> bjets_tmp = bjets;
    bjets_tmp.push_back(findJet(bc_jets[i],jets_idx_BvsL));
    sort(bjets_tmp.begin(),bjets_tmp.end(),sortbysecdesc);
    //the rest of bc_jets goes to cjets
    std::vector<pair<int,float>> cjets_tmp = cjets;
    for (unsigned j=0;j<bc_jets.size();++j) {
      if (j!=i) cjets_tmp.push_back(findJet(bc_jets[j],jets_idx_CvsL));
    }
    sort(cjets_tmp.begin(),cjets_tmp.end(),sortbysecdesc);
    if(bjets_tmp.size()>=2&&cjets_tmp.size()>=2) {
      std::vector<pair<int,float>> tmp{bjets_tmp[0],bjets_tmp[1],cjets_tmp[0],cjets_tmp[1]};
      vh_cands_com.push_back(tmp);
    }
    
    //overlapping jet goes to cjets
    cjets_tmp = cjets;
    cjets_tmp.push_back(findJet(bc_jets[i],jets_idx_CvsL));
    sort(cjets_tmp.begin(),cjets_tmp.end(),sortbysecdesc);
    //the rest of bc_jets goes to bjets
    bjets_tmp = bjets;
    for (unsigned j=0;j<bc_jets.size();++j) {
      if (j!=i) bjets_tmp.push_back(findJet(bc_jets[j],jets_idx_BvsL));
    }
    sort(bjets_tmp.begin(),bjets_tmp.end(),sortbysecdesc);
    if(bjets_tmp.size()>=2&&cjets_tmp.size()>=2) {
      std::vector<pair<int,float>> tmp{bjets_tmp[0],bjets_tmp[1],cjets_tmp[0],cjets_tmp[1]};
      vh_cands_com.push_back(tmp);
    }
  }
  
  //two bc_jets goes to b or c jets at a time. Note that bc_jets has maximum 2 elements
  if (bc_jets.size()==2) {
    //two bc_jets goes to b
    if (cjets.size()>=2) {
      std::vector<pair<int,float>> tmp{findJet(bc_jets[0],jets_idx_BvsL),findJet(bc_jets[1],jets_idx_BvsL),cjets[0],cjets[1]};
      vh_cands_com.push_back(tmp);
    }
    //two bc_jets goes to c
    if (bjets.size()>=2) {
      std::vector<pair<int,float>> tmp{bjets[0],bjets[1],findJet(bc_jets[0],jets_idx_CvsL),findJet(bc_jets[1],jets_idx_CvsL)};
      vh_cands_com.push_back(tmp);
    }
  }

  if(bc_jets.size()>2) {
    std::cout << "\n Impossible! Can't have more than 2 overlapping jets";
  }

  std::cout <<"\n I found these combinations";
  for (auto vh : vh_cands_com) {
    std::cout << "\n" ;
    for (unsigned i = 0 ; i < 4 ; ++i) {
      std::cout << "(" << vh[i].first << ", " << vh[i].second << "), ";
    }
  }

  std::cout << std::endl;
  */


  // bjets = []
  // cjets = []
  // bcjets = []
  //loop over two leading BvsL jets to see if any of them also ctagged
  //iPick = 3
  //for jet in [b1,b2] {
  //  if jet != [c1,c2] { //no b c confusion
  //    bjets.push_back(jet)
  //  }
  //  else {
  //    bjets.push_back(iPick) //pick the jet after 2 leading bvsL jet if exist
  //    bcjets.push_back(jet)
  //    iPick = iPick + 1 //iPick is already picked so increase iPick to the next jet
  //  }
  //}
  //loop over two leading CvsL jets to build cjet
  //iPick = 3
  //for jet in [c1,c2] {
  //  if jet != [b1,b2] { //no b c confusion
  //    cjets.push_back(jet)
  //  else {
  //    cjets.push_back(iPick) //pick the jet after 2 leading CvsL jet if exists
  //    iPick = iPick + 1 //iPick is already picked so increase iPick to the next jet
  //  }
  //}
  //overlap jet goes to bjet or cjet one at a time
  //for jet in bcjets {
    //jet goes to b jet --> jet,bjets[0],cjets[0],cjets[1]
    //jet goes to c jet --> bjets[0],bjets[1],jet,cjets[0]
  //}
  //two overlap jet goes to b --> bcjets[0],bcjets[1],cjets[0],cjets[1]
  //two overlap jet goes to c --> bjets[0],bjets[1],bcjets[0],bcjets[1]

  //find b and c jet indexes that overlap 00,01,10,11 or (01,01) (01,10)
  //if there is on overlapping jet 00, ... check the third b and c jets
  /*
  std::vector<std::vector<pair<int,float>>> vh_cands_com;
  std::vector<pair<int,int>> idx_bcjets;
  if (jets_idx_BvsL.size() >=2 && jets_idx_CvsL.size() >=2){
    for(unsigned i = 0; i < min(2,int(jets_idx_BvsL.size()));++i) {
      for(unsigned j = 0; j < min(2,int(jets_idx_CvsL.size()));++j) {
         if(jets_idx_BvsL[i].first == jets_idx_CvsL[j].first) {
              idx_bcjets.push_back(make_pair(i,j));
        }
      }
    }
    std::cout << "\n overlapping jets: ";
    for(auto idx_pair:idx_bcjets) {
      std::cout << "\n " << idx_pair.first << ", " << idx_pair.second;
    }

    //no overlapping
    if(idx_bcjets.size()==0) {
      vh_cands_com.push_back({jets_idx_BvsL[0],jets_idx_BvsL[1],jets_idx_CvsL[0],jets_idx_CvsL[1]});
    }
    //there is one overlapping
    if(idx_bcjets.size()==1) {
      //these are non-overlapping b and c
      int idx_b = findOtherJet(idx_bcjets[0].first);
      int idx_c = findOtherJet(idx_bcjets[0].second);
      //////////////////////////////////////////
      //consider overlapping jet is b jet
      //////////////////////////////////////////
      //pick third c-jet
      if(jets_idx_CvsL.size()>=3) {
        //check if third CvsL jet overlaps with other b jet ,idx 
        //no overlapping so third CvsL can be used
        if(jets_idx_CvsL[2].first != jets_idx_BvsL[idx_b].first) {
          vh_cands_com.push_back({jets_idx_BvsL[idx_b],jets_idx_BvsL[idx_bcjets[0].first],jets_idx_CvsL[idx_c],jets_idx_CvsL[2]});
        }
        //third CvsL is also b jet idx_b:
        //  use idx_b and 4th CvsL
        //  use 3rd BvsL instead of idx_b and third CvsL
        else {
          //use idx_b and 4th CvsL
          if(jets_idx_CvsL.size()>=4) vh_cands_com.push_back({jets_idx_BvsL[idx_b],jets_idx_BvsL[idx_bcjets[0].first],jets_idx_CvsL[idx_c],jets_idx_CvsL[3]}) ;
          //use 3rd BvsL, but need to check overlapping with idx_c 
          if(jets_idx_BvsL.size()>=3) {
            if(jets_idx_BvsL[2].first!=jets_idx_CvsL[idx_c].first) {
              if(jets_idx_BvsL[2].first!=jets_idx_CvsL[2].first) { 
              vh_cands_com.push_back({jets_idx_BvsL[2],jets_idx_BvsL[idx_bcjets[0].first],jets_idx_CvsL[idx_c],jets_idx_CvsL[2]}) ;
              }
              else {
                if(jets_idx_CvsL.size()>=4) vh_cands_com.push_back({jets_idx_BvsL[2],jets_idx_BvsL[idx_bcjets[0].first],jets_idx_CvsL[idx_c],jets_idx_CvsL[3]}) ;
                if(jets_idx_BvsL.size()>=4) vh_cands_com.push_back({jets_idx_BvsL[3],jets_idx_BvsL[idx_bcjets[0].first],jets_idx_CvsL[idx_c],jets_idx_CvsL[2]}) ;
              }
            }
            //use forth BvsL
            else {
              if(jets_idx_BvsL.size()>=3) {
                vh_cands_com.push_back({jets_idx_BvsL[3],jets_idx_BvsL[idx_bcjets[0].first],jets_idx_CvsL[idx_c],jets_idx_CvsL[2]}) ;
              }
            }
          }
        }
      }
    }
  }
  
  std::cout <<"\n I found these combinations";
  for (auto vh : vh_cands_com) {
    std::cout << "\n" ;
    for (unsigned i = 0 ; i < 4 ; ++i) {
      std::cout << "(" << vh[i].first << ", " << vh[i].second << "), ";
    }
  }
  
  */
  
  /* 
  std::vector<pair<int,int>> bpair;
  std::vector<pair<int,int>> cpair;

  for(int i=1;i<5;++i) {
    for(int j=i+1;j<5;++j) {
      bpair.push_back(make_pair(i,j));
      cpair.push_back(make_pair(i,j));
    }
  }
  
  std::vector<std::vector<int>> bcpairs;
  for(unsigned i = 0; i<bpair.size();++i) {
    for(unsigned j = 0; j<cpair.size();++j) {
      bcpairs.push_back({bpair[i].first,bpair[i].second,cpair[j].first,cpair[j].second});
    }
  }

  std::cout << "\n I found these combinations: " << bcpairs.size();
  for(unsigned i = 0 ; i < bcpairs.size();++i) {
    std::cout << "\n" ;
    for(unsigned j = 0 ; j<4;++j) {
      std::cout << bcpairs[i][j] << " ";
    }
  }
  */
  return 0;
}

