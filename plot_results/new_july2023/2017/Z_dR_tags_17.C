void Z_dR_tags_17()
{
//=========Macro generated from canvas: Z_dR_tags_17/Z_dR_tags_17
//=========  (Fri Jul 14 13:37:56 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_tags_17 = new TCanvas("Z_dR_tags_17", "Z_dR_tags_17",0,0,600,600);
   Z_dR_tags_17->SetHighLightColor(2);
   Z_dR_tags_17->Range(0,0,1,1);
   Z_dR_tags_17->SetFillColor(0);
   Z_dR_tags_17->SetFillStyle(4000);
   Z_dR_tags_17->SetBorderMode(0);
   Z_dR_tags_17->SetBorderSize(2);
   Z_dR_tags_17->SetFrameFillStyle(1000);
   Z_dR_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-397.8247,6.314516,397436.8);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(340622.2);
   
   TH1F *st_stack_18 = new TH1F("st_stack_18","",30,0,6);
   st_stack_18->SetMinimum(0.01);
   st_stack_18->SetMaximum(357653.4);
   st_stack_18->SetDirectory(0);
   st_stack_18->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_18->SetLineColor(ci);
   st_stack_18->GetXaxis()->SetRange(1,30);
   st_stack_18->GetXaxis()->SetLabelFont(42);
   st_stack_18->GetXaxis()->SetLabelSize(0.035);
   st_stack_18->GetXaxis()->SetTitleSize(0.035);
   st_stack_18->GetXaxis()->SetTitleFont(42);
   st_stack_18->GetYaxis()->SetTitle("Events/0.2");
   st_stack_18->GetYaxis()->SetLabelFont(42);
   st_stack_18->GetYaxis()->SetLabelSize(0.05);
   st_stack_18->GetYaxis()->SetTitleSize(0.057);
   st_stack_18->GetYaxis()->SetTitleOffset(1.2);
   st_stack_18->GetYaxis()->SetTitleFont(42);
   st_stack_18->GetZaxis()->SetLabelFont(42);
   st_stack_18->GetZaxis()->SetLabelSize(0.035);
   st_stack_18->GetZaxis()->SetTitleSize(0.035);
   st_stack_18->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_18);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(2,39.29334);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,139603.5);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,142996);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,105065);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,85350.37);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,61126.52);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,60756.3);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,56951.63);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,55280.74);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,48491.8);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,49094.69);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,61814.1);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,60451.21);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,76295.43);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,82400.66);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,71822.76);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,57984.03);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,56144.87);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,43548.43);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,37000.04);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,47292.67);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,29021.39);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,18917.27);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,15518.62);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(26,16870.75);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,18388.77);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(28,16866.16);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(29,13800.7);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(30,10650.91);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(31,5564.592);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(2,13.96522);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,3625.995);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,4333.932);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,4255.292);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,3439.846);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,2660.72);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,3180.617);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,3349.37);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,3097.538);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,2880.65);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,2697.441);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,3714.623);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,3802.505);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,14064.63);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,15398.35);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,11043.83);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,3116.443);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,3209.068);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,2995.748);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,2953.108);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,17764.03);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,2562.996);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,2012.46);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,1270.261);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(26,2139.583);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,1731.34);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(28,1570.855);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(29,1202.411);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(30,1108.169);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(31,721.9266);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(158509);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(2,0.05375503);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,267.2604);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,483.5009);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,542.36);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,622.6084);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,688.7769);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,727.9566);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,801.0444);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,826.4439);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,886.1193);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,977.3829);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,1022.889);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,1034.559);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,1054.463);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,1076.411);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,966.1267);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,896.1832);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,803.1533);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,702.695);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,576.2093);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,488.999);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,399.0586);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,329.0318);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,254.6447);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,228.6324);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,165.0981);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(28,123.9153);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(29,93.80014);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(30,57.8804);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(31,55.54467);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(2,0.09934472);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,7.378983);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,9.737905);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,10.43899);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,11.18763);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,11.79709);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,12.22024);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,12.82046);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,12.88558);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,13.33482);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,14.02361);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,14.28083);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,14.30664);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,14.4497);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,14.69887);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,13.79611);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,13.31693);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,12.57706);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,11.81532);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,10.71887);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,9.859061);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,8.994482);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,8.292443);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,7.117907);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,6.855855);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,5.804831);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(28,5.098778);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(29,4.393619);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(30,3.477115);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(31,3.474608);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(208682);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_3 = new TH1D("VbbHcc_tags_Z_dR_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(2,2.172961);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(3,4036.352);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(4,7660.442);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(5,8948.439);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(6,10227.7);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(7,11162);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(8,11916.84);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(9,12811.41);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(10,13940.39);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(11,15333.63);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(12,16938.78);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(13,18721.04);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(14,20301.03);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(15,21444.72);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(16,21797.84);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(17,20794);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(18,19338.4);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(19,17015.44);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(20,14501.1);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(21,11811.8);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(22,9395.27);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(23,7310.89);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(24,5592.077);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(25,4264.977);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(26,3280.844);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(27,2471.288);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(28,1850.406);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(29,1316.803);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(30,775.1515);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(31,640.4445);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(2,0.388602);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(3,17.45313);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(4,24.12122);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(5,26.10245);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(6,27.88993);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(7,29.14306);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(8,30.1007);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(9,31.21353);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(10,32.59252);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(11,34.21868);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(12,36.02699);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(13,37.94792);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(14,39.60099);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(15,40.76242);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(16,41.1572);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(17,40.24702);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(18,38.83979);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(19,36.42523);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(20,33.56756);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(21,30.27675);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(22,26.94846);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(23,23.72181);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(24,20.72605);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(25,18.05634);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(26,15.82513);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(27,13.70272);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(28,11.84485);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(29,9.971118);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(30,7.648502);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(31,6.906429);
   VbbHcc_tags_Z_dR_stack_3->SetEntries(4592799);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_4 = new TH1D("VbbHcc_tags_Z_dR_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(2,0.3841611);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(3,946.3278);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(4,1382.635);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(5,1254.353);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(6,1009.412);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(7,709.4429);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(8,513.9851);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(9,427.9954);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(10,373.566);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(11,358.6122);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(12,388.7478);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(13,394.3109);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(14,428.2723);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(15,464.5504);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(16,465.9914);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(17,443.8206);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(18,395.0934);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(19,356.4632);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(20,294.7552);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(21,250.9003);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(22,217.2213);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(23,190.5145);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(24,154.7569);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(25,155.2263);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(26,141.6427);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(27,153.5035);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(28,141.0036);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(29,123.0384);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(30,73.70384);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(31,49.0967);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(2,0.1950005);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(3,14.65883);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(4,18.47061);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(5,23.01445);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(6,24.28461);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(7,19.8678);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(8,17.50746);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(9,16.92625);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(10,15.00034);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(11,12.93006);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(12,16.15617);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(13,15.60648);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(14,15.88319);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(15,16.10148);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(16,15.0372);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(17,15.03061);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(18,14.45636);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(19,14.52542);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(20,12.67347);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(21,10.40932);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(22,11.75579);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(23,9.701375);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(24,8.858871);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(25,9.378921);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(26,7.345805);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(27,9.826858);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(28,8.014584);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(29,7.734802);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(30,5.140151);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(31,5.029237);
   VbbHcc_tags_Z_dR_stack_4->SetEntries(91213);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_5 = new TH1D("VbbHcc_tags_Z_dR_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(2,0.2919522);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(3,699.6983);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(4,711.6204);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(5,453.5764);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(6,363.1856);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(7,330.9565);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(8,260.1768);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(9,263.0158);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(10,215.7246);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(11,262.0107);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(12,240.8752);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(13,230.2292);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(14,295.444);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(15,324.7574);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(16,330.1271);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(17,318.0508);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(18,222.1189);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(19,249.5549);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(20,218.1659);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(21,189.6957);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(22,143.8001);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(23,114.7572);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(24,119.2646);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(25,81.39618);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(26,61.12087);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(27,71.89555);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(28,76.90322);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(29,80.63545);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(30,52.39672);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(31,37.11715);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(2,0.1686598);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(3,24.77706);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(4,28.65109);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(5,21.91627);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(6,20.76809);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(7,22.21604);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(8,12.58029);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(9,20.59791);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(10,15.68422);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(11,21.85152);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(12,17.69619);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(13,18.25792);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(14,22.93827);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(15,20.82748);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(16,24.49772);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(17,23.93842);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(18,15.58414);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(19,22.27362);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(20,18.79135);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(21,17.47377);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(22,12.09823);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(23,14.60402);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(24,15.42684);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(25,9.898693);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(26,5.687288);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(27,10.50587);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(28,7.406388);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(29,13.76505);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(30,5.606988);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(31,5.323546);
   VbbHcc_tags_Z_dR_stack_5->SetEntries(43154);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_6 = new TH1D("VbbHcc_tags_Z_dR_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(3,2.90714);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(4,2.605);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(5,2.508153);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(6,1.357257);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(7,2.712274);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(8,1.799893);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(9,1.933542);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(10,1.466611);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(11,0.6751878);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(12,3.085885);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(13,1.155247);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(14,3.16666);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(15,2.511828);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(16,1.57454);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(17,3.73356);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(18,1.356753);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(19,1.712958);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(20,1.603321);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(21,0.2358588);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(22,1.569652);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(23,0.9559977);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(24,0.6207499);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(25,0.235084);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(26,0.3661473);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(27,0.09739163);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(28,0.1369744);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(29,0.3203499);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(31,0.255946);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(3,0.7999334);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(4,0.7869386);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(5,0.7671197);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(6,0.5567161);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(7,0.7756423);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(8,0.6120095);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(9,0.6613851);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(10,0.5318909);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(11,0.3913121);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(12,0.8647996);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(13,0.5240104);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(14,0.8405931);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(15,0.7676018);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(16,0.5654074);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(17,0.9449063);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(18,0.5889204);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(19,0.6208612);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(20,0.6203007);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(21,0.2358588);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(22,0.5971543);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(23,0.4855152);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(24,0.3593624);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(25,0.235084);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(26,0.2729713);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(27,0.07023776);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(28,0.1138058);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(29,0.2267219);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(31,0.255946);
   VbbHcc_tags_Z_dR_stack_6->SetEntries(198);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_7 = new TH1D("VbbHcc_tags_Z_dR_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(3,11.45156);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(4,18.52011);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(5,14.2094);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(6,10.07378);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(7,4.633825);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(8,3.412885);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(9,1.846554);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(10,1.139339);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(11,2.485481);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(12,1.803128);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(13,0.7943885);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(14,1.389786);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(15,3.405756);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(16,3.228395);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(17,1.792522);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(18,2.127043);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(19,1.385666);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(20,2.604222);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(21,0.9659052);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(22,1.275641);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(23,0.4266189);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(24,1.680728);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(25,1.45911);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(26,1.200671);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(27,1.163189);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(28,0.874288);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(29,0.8456489);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(30,0.1211595);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(31,0.4010693);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(3,1.395978);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(4,1.762564);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(5,1.551627);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(6,1.327501);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(7,0.8663446);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(8,0.7560647);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(9,0.604599);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(10,0.4459586);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(11,0.6648193);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(12,0.5746025);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(13,0.3637991);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(14,0.4731843);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(15,0.7579528);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(16,0.7412308);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(17,0.5614596);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(18,0.5872434);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(19,0.491257);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(20,0.642759);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(21,0.3976808);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(22,0.4340146);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(23,0.2655956);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(24,0.5439626);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(25,0.4907552);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(26,0.4581181);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(27,0.4358608);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(28,0.3920416);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(29,0.3609804);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(30,0.1211595);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(31,0.2845854);
   VbbHcc_tags_Z_dR_stack_7->SetEntries(598);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_8 = new TH1D("VbbHcc_tags_Z_dR_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(3,8.889029);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(4,14.47481);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(5,13.31898);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(6,6.913561);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(7,4.636284);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(8,3.694983);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(9,2.320295);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(10,1.419425);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(11,1.630924);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(12,2.114927);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(13,2.558445);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(14,2.851587);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(15,3.311988);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(16,4.392258);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(17,2.241706);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(18,4.392098);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(19,2.947135);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(20,1.287198);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(21,1.979929);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(22,0.7838744);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(23,0.4850214);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(24,0.4163601);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(25,1.224851);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(26,0.6686421);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(27,1.414462);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(28,1.516696);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(29,1.380338);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(31,0.1416166);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(3,1.405778);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(4,1.801408);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(5,1.703057);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(6,1.223618);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(7,1.046237);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(8,0.8635326);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(9,0.740728);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(10,0.5424509);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(11,0.6208592);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(12,0.6536379);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(13,0.7443533);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(14,0.7738374);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(15,0.8206534);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(16,0.9721498);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(17,0.6875018);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(18,0.9940612);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(19,0.8018924);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(20,0.5279863);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(21,0.6682807);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(22,0.4107978);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(23,0.2843617);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(24,0.2972862);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(25,0.5322661);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(26,0.3876784);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(27,0.5424131);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(28,0.5828729);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(29,0.563696);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(31,0.1416166);
   VbbHcc_tags_Z_dR_stack_8->SetEntries(445);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_9 = new TH1D("VbbHcc_tags_Z_dR_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(3,2.224266);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(4,5.19697);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(5,6.505091);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(6,6.42191);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(7,5.652181);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(8,3.641337);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(9,2.433627);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(10,1.962899);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(11,1.75404);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(12,1.71136);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(13,1.922066);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(14,2.168144);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(15,2.420875);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(16,2.620294);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(17,2.384669);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(18,2.094213);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(19,1.746431);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(20,1.38487);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(21,1.022125);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(22,0.7907699);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(23,0.6561342);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(24,0.7387686);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(25,0.8233837);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(26,0.8930821);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(27,0.8562187);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(28,0.812284);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(29,0.5508368);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(30,0.2948162);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(31,0.1449464);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(3,0.06496498);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(4,0.09976835);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(5,0.112105);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(6,0.1108559);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(7,0.1040063);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(8,0.08316932);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(9,0.06744644);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(10,0.06077625);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(11,0.05709109);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(12,0.05674091);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(13,0.06062726);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(14,0.06390718);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(15,0.06848356);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(16,0.0706671);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(17,0.06803388);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(18,0.06289025);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(19,0.05741037);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(20,0.05191377);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(21,0.04383431);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(22,0.03850348);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(23,0.03524573);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(24,0.03714147);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(25,0.03948171);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(26,0.04104232);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(27,0.04038827);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(28,0.03944451);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(29,0.03240328);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(30,0.02335944);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(31,0.01664106);
   VbbHcc_tags_Z_dR_stack_9->SetEntries(35311);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_10 = new TH1D("VbbHcc_tags_Z_dR_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(2,0.001325534);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(3,2.223939);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(4,4.563393);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(5,5.594231);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(6,5.849876);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(7,5.128188);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(8,3.732737);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(9,2.538584);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(10,1.824706);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(11,1.610048);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(12,1.574758);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(13,1.591614);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(14,1.608119);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(15,1.731916);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(16,1.799898);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(17,1.677403);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(18,1.491953);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(19,1.300443);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(20,1.093208);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(21,0.9234999);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(22,0.7881369);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(23,0.7096744);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(24,0.7803624);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(25,0.8014943);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(26,0.834338);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(27,0.812384);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(28,0.6760578);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(29,0.52115);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(30,0.3112077);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(31,0.1972199);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(2,0.0007695877);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(3,0.03130022);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(4,0.04485374);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(5,0.04972202);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(6,0.05090605);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(7,0.04771278);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(8,0.04071382);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(9,0.03353014);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(10,0.02841336);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(11,0.02670969);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(12,0.0264061);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(13,0.02654931);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(14,0.02668648);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(15,0.02768861);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(16,0.02826262);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(17,0.02730887);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(18,0.02573861);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(19,0.02403323);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(20,0.02201136);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(21,0.02018493);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(22,0.01865261);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(23,0.01773316);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(24,0.01860248);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(25,0.01885951);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(26,0.01924291);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(27,0.0189566);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(28,0.0173015);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(29,0.01519794);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(30,0.01170441);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(31,0.009346854);
   VbbHcc_tags_Z_dR_stack_10->SetEntries(124885);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_11 = new TH1D("VbbHcc_tags_Z_dR_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(3,0.1805851);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(4,0.3019293);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(5,0.2888045);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(6,0.2267422);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(7,0.07823843);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(8,0.07111359);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(9,0.03619383);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(10,0.03835648);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(11,0.02798746);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(12,0.05178952);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(13,0.04343278);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(14,0.03797823);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(15,0.04399539);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(16,0.04731544);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(17,0.05965172);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(18,0.04588247);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(19,0.03988531);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(20,0.03439383);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(21,0.0153381);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(22,0.0287424);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(23,0.01352968);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(24,0.01457658);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(25,0.0156702);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(26,0.01858057);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(27,0.03127273);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(28,0.03731781);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(29,0.02627172);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(30,0.01747956);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(31,0.003806854);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(3,0.0188499);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(4,0.02385909);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(5,0.02339091);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(6,0.02060948);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(7,0.01189892);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(8,0.01157242);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(9,0.008050875);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(10,0.008287241);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(11,0.007350035);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(12,0.009847059);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(13,0.008630926);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(14,0.008185684);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(15,0.009030848);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(16,0.009237967);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(17,0.01037178);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(18,0.009215362);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(19,0.008877083);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(20,0.008104536);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(21,0.00520082);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(22,0.007500118);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(23,0.005051367);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(24,0.005188601);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(25,0.005310281);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(26,0.005902196);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(27,0.007669852);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(28,0.008299169);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(29,0.006923254);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(30,0.005836748);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(31,0.002770122);
   VbbHcc_tags_Z_dR_stack_11->SetEntries(1088);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_12 = new TH1D("VbbHcc_tags_Z_dR_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(3,0.07700846);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(4,0.1577877);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(5,0.1624273);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(6,0.1162674);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(7,0.05058196);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(8,0.02820247);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(9,0.01440095);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(10,0.01580239);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(11,0.01342528);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(12,0.01820754);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(13,0.02363006);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(14,0.02048408);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(15,0.02195258);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(16,0.02293888);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(17,0.02235842);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(18,0.020417);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(19,0.01660486);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(20,0.01743547);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(21,0.01362649);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(22,0.01035442);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(23,0.006995197);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(24,0.006668838);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(25,0.006974469);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(26,0.01229448);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(27,0.01178376);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(28,0.01518922);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(29,0.0137575);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(30,0.005610164);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(31,0.004488039);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(3,0.004262063);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(4,0.006151585);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(5,0.006239143);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(6,0.005294606);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(7,0.003501975);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(8,0.002617349);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(9,0.001880891);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(10,0.001930273);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(11,0.001791063);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(12,0.002082994);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(13,0.002404251);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(14,0.00221271);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(15,0.002264243);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(16,0.002330112);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(17,0.002265371);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(18,0.002225912);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(19,0.00199916);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(20,0.002059179);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(21,0.001821798);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(22,0.001594811);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(23,0.00132216);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(24,0.001237574);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(25,0.001264515);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(26,0.001755627);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(27,0.001669273);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(28,0.00192186);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(29,0.00182223);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(30,0.001168639);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(31,0.001046995);
   VbbHcc_tags_Z_dR_stack_12->SetEntries(4044);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR__35 = new TH1D("VbbHcc_tags_Z_dR__35","",30,0,6);
   VbbHcc_tags_Z_dR__35->SetBinContent(2,14);
   VbbHcc_tags_Z_dR__35->SetBinContent(3,38786);
   VbbHcc_tags_Z_dR__35->SetBinContent(4,42146);
   VbbHcc_tags_Z_dR__35->SetBinContent(5,29761);
   VbbHcc_tags_Z_dR__35->SetBinContent(6,25328);
   VbbHcc_tags_Z_dR__35->SetBinContent(7,22853);
   VbbHcc_tags_Z_dR__35->SetBinContent(8,21150);
   VbbHcc_tags_Z_dR__35->SetBinContent(9,20248);
   VbbHcc_tags_Z_dR__35->SetBinContent(10,19942);
   VbbHcc_tags_Z_dR__35->SetBinContent(11,20285);
   VbbHcc_tags_Z_dR__35->SetBinContent(12,20809);
   VbbHcc_tags_Z_dR__35->SetBinContent(13,21446);
   VbbHcc_tags_Z_dR__35->SetBinContent(14,22781);
   VbbHcc_tags_Z_dR__35->SetBinContent(15,23781);
   VbbHcc_tags_Z_dR__35->SetBinContent(16,24186);
   VbbHcc_tags_Z_dR__35->SetBinContent(17,22844);
   VbbHcc_tags_Z_dR__35->SetBinContent(18,21038);
   VbbHcc_tags_Z_dR__35->SetBinContent(19,18792);
   VbbHcc_tags_Z_dR__35->SetBinContent(20,16255);
   VbbHcc_tags_Z_dR__35->SetBinContent(21,13832);
   VbbHcc_tags_Z_dR__35->SetBinContent(22,11666);
   VbbHcc_tags_Z_dR__35->SetBinContent(23,9622);
   VbbHcc_tags_Z_dR__35->SetBinContent(24,7931);
   VbbHcc_tags_Z_dR__35->SetBinContent(25,6671);
   VbbHcc_tags_Z_dR__35->SetBinContent(26,5889);
   VbbHcc_tags_Z_dR__35->SetBinContent(27,5019);
   VbbHcc_tags_Z_dR__35->SetBinContent(28,4698);
   VbbHcc_tags_Z_dR__35->SetBinContent(29,4541);
   VbbHcc_tags_Z_dR__35->SetBinContent(30,2857);
   VbbHcc_tags_Z_dR__35->SetBinContent(31,1999);
   VbbHcc_tags_Z_dR__35->SetEntries(507170);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR__35->SetLineColor(ci);
   VbbHcc_tags_Z_dR__35->SetLineWidth(2);
   VbbHcc_tags_Z_dR__35->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR__35->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR__35->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR__35->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__35->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__35->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__35->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__35->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__35->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__35->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__35->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR__35->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__35->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__35->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__35->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__35->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__35->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_fx1035[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_VbbHcc_tags_Z_dR_fy1035[30] = {
   0,
   42.1975,
   145581.1,
   153280,
   116306.3,
   97604.23,
   74040.59,
   74191.64,
   71266.22,
   70644.73,
   65340.37,
   67650.83,
   82190.66,
   82521.76,
   99597.37,
   106084.7,
   94356.66,
   78847.35,
   74578.63,
   59273.17,
   49833.8,
   57543.21,
   37039.87,
   25116.66,
   20279.43,
   20586.99,
   21254.94,
   19062.45,
   15418.63,
   11610.79};
   Double_t Graph_from_VbbHcc_tags_Z_dR_fex1035[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_VbbHcc_tags_Z_dR_fey1035[30] = {
   0,
   13.97335,
   3626.159,
   4334.145,
   4255.504,
   3440.126,
   2661.073,
   3180.856,
   3349.646,
   3097.812,
   2880.997,
   2697.825,
   3714.922,
   3802.84,
   14064.72,
   15398.44,
   11043.95,
   3116.786,
   3209.41,
   2996.046,
   2953.353,
   17764.06,
   2563.182,
   2012.662,
   1270.482,
   2139.673,
   1731.464,
   1570.946,
   1202.564,
   1108.227};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_fx1035,Graph_from_VbbHcc_tags_Z_dR_fy1035,Graph_from_VbbHcc_tags_Z_dR_fex1035,Graph_from_VbbHcc_tags_Z_dR_fey1035);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR1035 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR1035","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->SetMaximum(173375.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR1035);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_12","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_11","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_10","ggZHbb","F");

   ci = TColor::GetColor("#0000cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_9","ZHbb","F");

   ci = TColor::GetColor("#cccc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_8","ZZ","F");

   ci = TColor::GetColor("#33ff99");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_7","WZ","F");

   ci = TColor::GetColor("#3399ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_6","WW","F");

   ci = TColor::GetColor("#9933ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_5","W + jets","F");

   ci = TColor::GetColor("#ff99cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_4","Z + jets","F");

   ci = TColor::GetColor("#00cccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_3","t#bar{t}","F");

   ci = TColor::GetColor("#cc00cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","Single top","F");

   ci = TColor::GetColor("#660066");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR","MC unc. (stat.)","fl");

   ci = TColor::GetColor("#333333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_tags_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9193524,-0.2774193,6.314516,1.658065);
   bottomPad->SetFillColor(0);
   bottomPad->SetBorderMode(0);
   bottomPad->SetBorderSize(2);
   bottomPad->SetTickx(1);
   bottomPad->SetTicky(1);
   bottomPad->SetLeftMargin(0.12709);
   bottomPad->SetRightMargin(0.0434783);
   bottomPad->SetTopMargin(0.03);
   bottomPad->SetBottomMargin(0.35);
   bottomPad->SetFrameBorderMode(0);
   bottomPad->SetFrameBorderMode(0);
   
   TH1D *data_mc_ratio__36 = new TH1D("data_mc_ratio__36","",30,0,6);
   data_mc_ratio__36->SetBinContent(2,0.3317732);
   data_mc_ratio__36->SetBinContent(3,0.2664219);
   data_mc_ratio__36->SetBinContent(4,0.2749608);
   data_mc_ratio__36->SetBinContent(5,0.2558846);
   data_mc_ratio__36->SetBinContent(6,0.259497);
   data_mc_ratio__36->SetBinContent(7,0.308655);
   data_mc_ratio__36->SetBinContent(8,0.2850725);
   data_mc_ratio__36->SetBinContent(9,0.2841178);
   data_mc_ratio__36->SetBinContent(10,0.2822857);
   data_mc_ratio__36->SetBinContent(11,0.3104513);
   data_mc_ratio__36->SetBinContent(12,0.3075941);
   data_mc_ratio__36->SetBinContent(13,0.2609299);
   data_mc_ratio__36->SetBinContent(14,0.2760605);
   data_mc_ratio__36->SetBinContent(15,0.2387714);
   data_mc_ratio__36->SetBinContent(16,0.2279876);
   data_mc_ratio__36->SetBinContent(17,0.2421027);
   data_mc_ratio__36->SetBinContent(18,0.2668194);
   data_mc_ratio__36->SetBinContent(19,0.2519757);
   data_mc_ratio__36->SetBinContent(20,0.2742388);
   data_mc_ratio__36->SetBinContent(21,0.2775626);
   data_mc_ratio__36->SetBinContent(22,0.2027346);
   data_mc_ratio__36->SetBinContent(23,0.2597741);
   data_mc_ratio__36->SetBinContent(24,0.3157665);
   data_mc_ratio__36->SetBinContent(25,0.328954);
   data_mc_ratio__36->SetBinContent(26,0.2860545);
   data_mc_ratio__36->SetBinContent(27,0.2361333);
   data_mc_ratio__36->SetBinContent(28,0.2464531);
   data_mc_ratio__36->SetBinContent(29,0.2945138);
   data_mc_ratio__36->SetBinContent(30,0.2460642);
   data_mc_ratio__36->SetBinContent(31,0.3149051);
   data_mc_ratio__36->SetBinError(2,0.08867013);
   data_mc_ratio__36->SetBinError(3,0.001352797);
   data_mc_ratio__36->SetBinError(4,0.001339346);
   data_mc_ratio__36->SetBinError(5,0.001483271);
   data_mc_ratio__36->SetBinError(6,0.001630541);
   data_mc_ratio__36->SetBinError(7,0.002041746);
   data_mc_ratio__36->SetBinError(8,0.001960199);
   data_mc_ratio__36->SetBinError(9,0.001996675);
   data_mc_ratio__36->SetBinError(10,0.001998962);
   data_mc_ratio__36->SetBinError(11,0.002179746);
   data_mc_ratio__36->SetBinError(12,0.00213232);
   data_mc_ratio__36->SetBinError(13,0.001781766);
   data_mc_ratio__36->SetBinError(14,0.001829018);
   data_mc_ratio__36->SetBinError(15,0.001548343);
   data_mc_ratio__36->SetBinError(16,0.001465984);
   data_mc_ratio__36->SetBinError(17,0.001601819);
   data_mc_ratio__36->SetBinError(18,0.001839565);
   data_mc_ratio__36->SetBinError(19,0.001838113);
   data_mc_ratio__36->SetBinError(20,0.002150975);
   data_mc_ratio__36->SetBinError(21,0.002360035);
   data_mc_ratio__36->SetBinError(22,0.001877011);
   data_mc_ratio__36->SetBinError(23,0.002648276);
   data_mc_ratio__36->SetBinError(24,0.003545701);
   data_mc_ratio__36->SetBinError(25,0.004027539);
   data_mc_ratio__36->SetBinError(26,0.003727589);
   data_mc_ratio__36->SetBinError(27,0.003333102);
   data_mc_ratio__36->SetBinError(28,0.003595652);
   data_mc_ratio__36->SetBinError(29,0.004370488);
   data_mc_ratio__36->SetBinError(30,0.004603554);
   data_mc_ratio__36->SetBinError(31,0.03650276);
   data_mc_ratio__36->SetMinimum(0.4);
   data_mc_ratio__36->SetMaximum(1.6);
   data_mc_ratio__36->SetEntries(1867.799);
   data_mc_ratio__36->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__36->SetLineColor(ci);
   data_mc_ratio__36->SetLineWidth(2);
   data_mc_ratio__36->SetMarkerStyle(20);
   data_mc_ratio__36->SetMarkerSize(1.2);
   data_mc_ratio__36->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__36->GetXaxis()->SetRange(1,30);
   data_mc_ratio__36->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__36->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__36->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__36->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__36->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__36->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__36->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__36->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__36->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__36->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__36->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__36->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__36->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__36->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__36->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__36->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__36->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1036[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_mc_statistical_error_fy1036[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1036[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_mc_statistical_error_fey1036[30] = {
   0,
   0.3311418,
   0.02490817,
   0.028276,
   0.03658876,
   0.03524567,
   0.03594074,
   0.04287351,
   0.04700188,
   0.04385057,
   0.04409214,
   0.03987867,
   0.04519884,
   0.04608288,
   0.1412158,
   0.1451523,
   0.1170447,
   0.03952937,
   0.04303391,
   0.05054641,
   0.05926404,
   0.3087083,
   0.06920061,
   0.08013256,
   0.06264882,
   0.1039333,
   0.08146171,
   0.08241046,
   0.07799421,
   0.09544797};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1036,Graph_from_mc_statistical_error_fy1036,Graph_from_mc_statistical_error_fex1036,Graph_from_mc_statistical_error_fey1036);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1036 = new TH1F("Graph_Graph_from_mc_statistical_error1036","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1036->SetMinimum(0.6026299);
   Graph_Graph_from_mc_statistical_error1036->SetMaximum(1.39737);
   Graph_Graph_from_mc_statistical_error1036->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1036->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1036->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1036->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1036->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1036->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1036->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1036->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1036->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1036->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1036);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_tags_17->cd();
   Z_dR_tags_17->Modified();
   Z_dR_tags_17->cd();
   Z_dR_tags_17->SetSelected(Z_dR_tags_17);
}
