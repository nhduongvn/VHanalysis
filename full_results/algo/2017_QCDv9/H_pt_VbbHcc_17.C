void H_pt_VbbHcc_17()
{
//=========Macro generated from canvas: H_pt_VbbHcc_17/H_pt_VbbHcc_17
//=========  (Tue Nov 22 09:16:00 2022) by ROOT version 6.14/09
   TCanvas *H_pt_VbbHcc_17 = new TCanvas("H_pt_VbbHcc_17", "H_pt_VbbHcc_17",0,0,600,600);
   H_pt_VbbHcc_17->SetHighLightColor(2);
   H_pt_VbbHcc_17->Range(0,0,1,1);
   H_pt_VbbHcc_17->SetFillColor(0);
   H_pt_VbbHcc_17->SetFillStyle(4000);
   H_pt_VbbHcc_17->SetBorderMode(0);
   H_pt_VbbHcc_17->SetBorderSize(2);
   H_pt_VbbHcc_17->SetFrameFillStyle(1000);
   H_pt_VbbHcc_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(116.1295,-3866.538,1562.903,3862682);
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
   st->SetMaximum(3310502);
   
   TH1F *st_stack_14 = new TH1F("st_stack_14","",40,0,2000);
   st_stack_14->SetMinimum(0.01);
   st_stack_14->SetMaximum(3476027);
   st_stack_14->SetDirectory(0);
   st_stack_14->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_14->SetLineColor(ci);
   st_stack_14->GetXaxis()->SetRange(7,30);
   st_stack_14->GetXaxis()->SetLabelFont(42);
   st_stack_14->GetXaxis()->SetLabelSize(0.035);
   st_stack_14->GetXaxis()->SetTitleSize(0.035);
   st_stack_14->GetXaxis()->SetTitleFont(42);
   st_stack_14->GetYaxis()->SetTitle("Events/50.0");
   st_stack_14->GetYaxis()->SetLabelFont(42);
   st_stack_14->GetYaxis()->SetLabelSize(0.05);
   st_stack_14->GetYaxis()->SetTitleSize(0.057);
   st_stack_14->GetYaxis()->SetTitleOffset(1.2);
   st_stack_14->GetYaxis()->SetTitleFont(42);
   st_stack_14->GetZaxis()->SetLabelFont(42);
   st_stack_14->GetZaxis()->SetLabelSize(0.035);
   st_stack_14->GetZaxis()->SetTitleSize(0.035);
   st_stack_14->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_14);
   
   
   TH1D *VbbHcc_algo_H_pt_stack_1 = new TH1D("VbbHcc_algo_H_pt_stack_1","",40,0,2000);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(1,344940.5);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(2,1441022);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(3,1118053);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(4,102505.7);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(5,5559.284);
   VbbHcc_algo_H_pt_stack_1->SetBinError(1,21254.52);
   VbbHcc_algo_H_pt_stack_1->SetBinError(2,43390.82);
   VbbHcc_algo_H_pt_stack_1->SetBinError(3,38232.84);
   VbbHcc_algo_H_pt_stack_1->SetBinError(4,11568.84);
   VbbHcc_algo_H_pt_stack_1->SetBinError(5,2816.461);
   VbbHcc_algo_H_pt_stack_1->SetEntries(2422);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_1,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_2 = new TH1D("VbbHcc_algo_H_pt_stack_2","",40,0,2000);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(1,1152.26);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(2,5419.879);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(3,5527.84);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(4,2495.814);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(5,1173.306);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(6,577.8239);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(7,331.0675);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(8,197.5623);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(9,121.3296);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(10,81.94563);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(11,46.65064);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(12,33.41629);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(13,24.1423);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(14,18.78393);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(15,11.00175);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(16,7.372842);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(17,6.938647);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(18,3.533224);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(19,3.477296);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(20,3.247962);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(21,0.5098939);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(22,3.027689);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(23,-0.03544415);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(24,0.1725794);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(25,0.04137629);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(26,0.4095798);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(28,-0.05383782);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(30,0.07146066);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(33,0.3305);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(36,0.3337765);
   VbbHcc_algo_H_pt_stack_2->SetBinError(1,12.2347);
   VbbHcc_algo_H_pt_stack_2->SetBinError(2,26.76763);
   VbbHcc_algo_H_pt_stack_2->SetBinError(3,28.04589);
   VbbHcc_algo_H_pt_stack_2->SetBinError(4,19.57341);
   VbbHcc_algo_H_pt_stack_2->SetBinError(5,14.12402);
   VbbHcc_algo_H_pt_stack_2->SetBinError(6,10.22767);
   VbbHcc_algo_H_pt_stack_2->SetBinError(7,7.893056);
   VbbHcc_algo_H_pt_stack_2->SetBinError(8,6.363988);
   VbbHcc_algo_H_pt_stack_2->SetBinError(9,5.081861);
   VbbHcc_algo_H_pt_stack_2->SetBinError(10,4.290406);
   VbbHcc_algo_H_pt_stack_2->SetBinError(11,3.252253);
   VbbHcc_algo_H_pt_stack_2->SetBinError(12,2.874564);
   VbbHcc_algo_H_pt_stack_2->SetBinError(13,2.400859);
   VbbHcc_algo_H_pt_stack_2->SetBinError(14,2.143022);
   VbbHcc_algo_H_pt_stack_2->SetBinError(15,1.659671);
   VbbHcc_algo_H_pt_stack_2->SetBinError(16,1.368683);
   VbbHcc_algo_H_pt_stack_2->SetBinError(17,1.335874);
   VbbHcc_algo_H_pt_stack_2->SetBinError(18,0.9006963);
   VbbHcc_algo_H_pt_stack_2->SetBinError(19,0.9405404);
   VbbHcc_algo_H_pt_stack_2->SetBinError(20,0.9477564);
   VbbHcc_algo_H_pt_stack_2->SetBinError(21,0.3213252);
   VbbHcc_algo_H_pt_stack_2->SetBinError(22,0.9156187);
   VbbHcc_algo_H_pt_stack_2->SetBinError(23,0.480448);
   VbbHcc_algo_H_pt_stack_2->SetBinError(24,0.09988463);
   VbbHcc_algo_H_pt_stack_2->SetBinError(25,0.04137629);
   VbbHcc_algo_H_pt_stack_2->SetBinError(26,0.3291352);
   VbbHcc_algo_H_pt_stack_2->SetBinError(28,0.05383782);
   VbbHcc_algo_H_pt_stack_2->SetBinError(30,0.07146066);
   VbbHcc_algo_H_pt_stack_2->SetBinError(33,0.3305);
   VbbHcc_algo_H_pt_stack_2->SetBinError(36,0.3337765);
   VbbHcc_algo_H_pt_stack_2->SetEntries(263449);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_2,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_3 = new TH1D("VbbHcc_algo_H_pt_stack_3","",40,0,2000);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(1,7226.565);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(2,40497.93);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(3,53778.3);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(4,24034.38);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(5,10018.9);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(6,4943.057);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(7,2666.194);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(8,1487.265);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(9,870.4414);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(10,532.099);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(11,350.7518);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(12,229.5729);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(13,157.3292);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(14,107.3914);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(15,72.2604);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(16,48.95228);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(17,36.65);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(18,25.15968);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(19,17.26533);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(20,14.10404);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(21,10.75568);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(22,7.466871);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(23,5.944994);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(24,4.297684);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(25,3.464037);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(26,3.01051);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(27,1.58238);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(28,1.220947);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(29,1.149298);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(30,0.4559629);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(31,0.5619392);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(32,0.4664055);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(33,0.2959431);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(34,0.3430392);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(35,0.3259933);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(37,0.04065973);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(38,0.1809568);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(39,0.07282258);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(40,0.06724531);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(41,0.07282258);
   VbbHcc_algo_H_pt_stack_3->SetBinError(1,22.54248);
   VbbHcc_algo_H_pt_stack_3->SetBinError(2,53.1347);
   VbbHcc_algo_H_pt_stack_3->SetBinError(3,61.05301);
   VbbHcc_algo_H_pt_stack_3->SetBinError(4,40.13836);
   VbbHcc_algo_H_pt_stack_3->SetBinError(5,25.6067);
   VbbHcc_algo_H_pt_stack_3->SetBinError(6,17.98117);
   VbbHcc_algo_H_pt_stack_3->SetBinError(7,13.28394);
   VbbHcc_algo_H_pt_stack_3->SetBinError(8,9.998756);
   VbbHcc_algo_H_pt_stack_3->SetBinError(9,7.666394);
   VbbHcc_algo_H_pt_stack_3->SetBinError(10,6.048465);
   VbbHcc_algo_H_pt_stack_3->SetBinError(11,4.966782);
   VbbHcc_algo_H_pt_stack_3->SetBinError(12,4.048007);
   VbbHcc_algo_H_pt_stack_3->SetBinError(13,3.386354);
   VbbHcc_algo_H_pt_stack_3->SetBinError(14,2.788702);
   VbbHcc_algo_H_pt_stack_3->SetBinError(15,2.306514);
   VbbHcc_algo_H_pt_stack_3->SetBinError(16,1.889408);
   VbbHcc_algo_H_pt_stack_3->SetBinError(17,1.647658);
   VbbHcc_algo_H_pt_stack_3->SetBinError(18,1.361678);
   VbbHcc_algo_H_pt_stack_3->SetBinError(19,1.132872);
   VbbHcc_algo_H_pt_stack_3->SetBinError(20,1.025722);
   VbbHcc_algo_H_pt_stack_3->SetBinError(21,0.8857199);
   VbbHcc_algo_H_pt_stack_3->SetBinError(22,0.7231632);
   VbbHcc_algo_H_pt_stack_3->SetBinError(23,0.6808146);
   VbbHcc_algo_H_pt_stack_3->SetBinError(24,0.5776444);
   VbbHcc_algo_H_pt_stack_3->SetBinError(25,0.4868661);
   VbbHcc_algo_H_pt_stack_3->SetBinError(26,0.475662);
   VbbHcc_algo_H_pt_stack_3->SetBinError(27,0.3382521);
   VbbHcc_algo_H_pt_stack_3->SetBinError(28,0.2998278);
   VbbHcc_algo_H_pt_stack_3->SetBinError(29,0.294269);
   VbbHcc_algo_H_pt_stack_3->SetBinError(30,0.1697331);
   VbbHcc_algo_H_pt_stack_3->SetBinError(31,0.2185485);
   VbbHcc_algo_H_pt_stack_3->SetBinError(32,0.2093015);
   VbbHcc_algo_H_pt_stack_3->SetBinError(33,0.1787781);
   VbbHcc_algo_H_pt_stack_3->SetBinError(34,0.1619599);
   VbbHcc_algo_H_pt_stack_3->SetBinError(35,0.1545252);
   VbbHcc_algo_H_pt_stack_3->SetBinError(37,0.04065973);
   VbbHcc_algo_H_pt_stack_3->SetBinError(38,0.1112151);
   VbbHcc_algo_H_pt_stack_3->SetBinError(39,0.07282258);
   VbbHcc_algo_H_pt_stack_3->SetBinError(40,0.06724531);
   VbbHcc_algo_H_pt_stack_3->SetBinError(41,0.07282258);
   VbbHcc_algo_H_pt_stack_3->SetEntries(2401118);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_pt_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_3->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_3,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_4 = new TH1D("VbbHcc_algo_H_pt_stack_4","",40,0,2000);
   VbbHcc_algo_H_pt_stack_4->SetBinContent(1,77.39425);
   VbbHcc_algo_H_pt_stack_4->SetBinContent(2,403.9794);
   VbbHcc_algo_H_pt_stack_4->SetBinContent(3,1138.57);
   VbbHcc_algo_H_pt_stack_4->SetBinContent(4,1925.279);
   VbbHcc_algo_H_pt_stack_4->SetBinContent(5,1416.178);
   VbbHcc_algo_H_pt_stack_4->SetBinContent(6,422.6524);
   VbbHcc_algo_H_pt_stack_4->SetBinContent(7,40.28037);
   VbbHcc_algo_H_pt_stack_4->SetBinContent(8,0.7244383);
   VbbHcc_algo_H_pt_stack_4->SetBinError(1,5.435739);
   VbbHcc_algo_H_pt_stack_4->SetBinError(2,12.51267);
   VbbHcc_algo_H_pt_stack_4->SetBinError(3,21.06114);
   VbbHcc_algo_H_pt_stack_4->SetBinError(4,27.48212);
   VbbHcc_algo_H_pt_stack_4->SetBinError(5,23.56839);
   VbbHcc_algo_H_pt_stack_4->SetBinError(6,12.87353);
   VbbHcc_algo_H_pt_stack_4->SetBinError(7,3.966537);
   VbbHcc_algo_H_pt_stack_4->SetBinError(8,0.5184305);
   VbbHcc_algo_H_pt_stack_4->SetEntries(14584);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_pt_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_4->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_4,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_5 = new TH1D("VbbHcc_algo_H_pt_stack_5","",40,0,2000);
   VbbHcc_algo_H_pt_stack_5->SetBinContent(1,57.62025);
   VbbHcc_algo_H_pt_stack_5->SetBinContent(2,174.4935);
   VbbHcc_algo_H_pt_stack_5->SetBinContent(3,562.8826);
   VbbHcc_algo_H_pt_stack_5->SetBinContent(4,879.318);
   VbbHcc_algo_H_pt_stack_5->SetBinContent(5,654.9762);
   VbbHcc_algo_H_pt_stack_5->SetBinContent(6,188.0129);
   VbbHcc_algo_H_pt_stack_5->SetBinContent(7,26.74188);
   VbbHcc_algo_H_pt_stack_5->SetBinContent(8,4.906132);
   VbbHcc_algo_H_pt_stack_5->SetBinError(1,8.740654);
   VbbHcc_algo_H_pt_stack_5->SetBinError(2,15.06086);
   VbbHcc_algo_H_pt_stack_5->SetBinError(3,27.11968);
   VbbHcc_algo_H_pt_stack_5->SetBinError(4,34.14053);
   VbbHcc_algo_H_pt_stack_5->SetBinError(5,29.49917);
   VbbHcc_algo_H_pt_stack_5->SetBinError(6,15.78767);
   VbbHcc_algo_H_pt_stack_5->SetBinError(7,6.007256);
   VbbHcc_algo_H_pt_stack_5->SetBinError(8,2.842339);
   VbbHcc_algo_H_pt_stack_5->SetEntries(2033);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_pt_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_5->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_5,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_6 = new TH1D("VbbHcc_algo_H_pt_stack_6","",40,0,2000);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(1,8.807395);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(2,31.40799);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(3,21.22728);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(4,11.12224);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(5,4.161663);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(6,2.782669);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(7,0.9517599);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(8,1.225557);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(9,0.4607853);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(11,0.2525183);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(12,0.4870559);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(13,0.1720636);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(16,0.4709969);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(17,0.2436051);
   VbbHcc_algo_H_pt_stack_6->SetBinError(1,1.437889);
   VbbHcc_algo_H_pt_stack_6->SetBinError(2,2.678924);
   VbbHcc_algo_H_pt_stack_6->SetBinError(3,2.237456);
   VbbHcc_algo_H_pt_stack_6->SetBinError(4,1.64326);
   VbbHcc_algo_H_pt_stack_6->SetBinError(5,0.9487472);
   VbbHcc_algo_H_pt_stack_6->SetBinError(6,0.7948197);
   VbbHcc_algo_H_pt_stack_6->SetBinError(7,0.4886663);
   VbbHcc_algo_H_pt_stack_6->SetBinError(8,0.5122704);
   VbbHcc_algo_H_pt_stack_6->SetBinError(9,0.3274284);
   VbbHcc_algo_H_pt_stack_6->SetBinError(11,0.2525183);
   VbbHcc_algo_H_pt_stack_6->SetBinError(12,0.3445713);
   VbbHcc_algo_H_pt_stack_6->SetBinError(13,0.1720636);
   VbbHcc_algo_H_pt_stack_6->SetBinError(16,0.3339932);
   VbbHcc_algo_H_pt_stack_6->SetBinError(17,0.2436051);
   VbbHcc_algo_H_pt_stack_6->SetEntries(380);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_pt_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_6->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_6,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_7 = new TH1D("VbbHcc_algo_H_pt_stack_7","",40,0,2000);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(1,26.71673);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(2,83.88);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(3,72.72098);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(4,44.80123);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(5,23.91131);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(6,14.6729);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(7,10.74765);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(8,5.34637);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(9,2.077285);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(10,1.483418);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(11,1.345985);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(12,0.1808834);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(16,0.1828711);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(20,0.1676428);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(22,0.1236251);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(25,0.1336818);
   VbbHcc_algo_H_pt_stack_7->SetBinError(1,2.123206);
   VbbHcc_algo_H_pt_stack_7->SetBinError(2,3.764697);
   VbbHcc_algo_H_pt_stack_7->SetBinError(3,3.477799);
   VbbHcc_algo_H_pt_stack_7->SetBinError(4,2.756596);
   VbbHcc_algo_H_pt_stack_7->SetBinError(5,2.000176);
   VbbHcc_algo_H_pt_stack_7->SetBinError(6,1.565582);
   VbbHcc_algo_H_pt_stack_7->SetBinError(7,1.334205);
   VbbHcc_algo_H_pt_stack_7->SetBinError(8,0.9567201);
   VbbHcc_algo_H_pt_stack_7->SetBinError(9,0.6050443);
   VbbHcc_algo_H_pt_stack_7->SetBinError(10,0.477111);
   VbbHcc_algo_H_pt_stack_7->SetBinError(11,0.4777644);
   VbbHcc_algo_H_pt_stack_7->SetBinError(12,0.1808834);
   VbbHcc_algo_H_pt_stack_7->SetBinError(16,0.1828711);
   VbbHcc_algo_H_pt_stack_7->SetBinError(20,0.1676428);
   VbbHcc_algo_H_pt_stack_7->SetBinError(22,0.1236251);
   VbbHcc_algo_H_pt_stack_7->SetBinError(25,0.1336818);
   VbbHcc_algo_H_pt_stack_7->SetEntries(1796);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_pt_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_7->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_7,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_8 = new TH1D("VbbHcc_algo_H_pt_stack_8","",40,0,2000);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(1,31.96028);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(2,95.45387);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(3,66.91551);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(4,41.25505);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(5,20.71454);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(6,13.54154);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(7,7.766256);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(8,2.269724);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(9,2.828736);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(10,0.7994682);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(11,0.4722303);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(12,0.2056985);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(15,0.2274369);
   VbbHcc_algo_H_pt_stack_8->SetBinError(1,2.654151);
   VbbHcc_algo_H_pt_stack_8->SetBinError(2,4.528917);
   VbbHcc_algo_H_pt_stack_8->SetBinError(3,3.811448);
   VbbHcc_algo_H_pt_stack_8->SetBinError(4,2.99127);
   VbbHcc_algo_H_pt_stack_8->SetBinError(5,2.146224);
   VbbHcc_algo_H_pt_stack_8->SetBinError(6,1.729812);
   VbbHcc_algo_H_pt_stack_8->SetBinError(7,1.295477);
   VbbHcc_algo_H_pt_stack_8->SetBinError(8,0.7206917);
   VbbHcc_algo_H_pt_stack_8->SetBinError(9,0.76791);
   VbbHcc_algo_H_pt_stack_8->SetBinError(10,0.405566);
   VbbHcc_algo_H_pt_stack_8->SetBinError(11,0.3033276);
   VbbHcc_algo_H_pt_stack_8->SetBinError(12,0.2056985);
   VbbHcc_algo_H_pt_stack_8->SetBinError(15,0.2274369);
   VbbHcc_algo_H_pt_stack_8->SetEntries(1368);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_pt_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_8->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_8,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_9 = new TH1D("VbbHcc_algo_H_pt_stack_9","",40,0,2000);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(1,3.765504);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(2,17.80872);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(3,18.70279);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(4,12.46109);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(5,8.209826);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(6,4.945729);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(7,3.022493);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(8,1.942468);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(9,1.08541);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(10,0.6003541);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(11,0.3335536);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(12,0.1783057);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(13,0.07173326);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(14,0.04197469);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(15,0.02003362);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(16,0.02682605);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(17,0.005229537);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(18,0.008031899);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(20,0.003083396);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(21,0.00223863);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(23,0.001975509);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(27,0.001858148);
   VbbHcc_algo_H_pt_stack_9->SetBinError(1,0.08579304);
   VbbHcc_algo_H_pt_stack_9->SetBinError(2,0.1873019);
   VbbHcc_algo_H_pt_stack_9->SetBinError(3,0.1909124);
   VbbHcc_algo_H_pt_stack_9->SetBinError(4,0.1565479);
   VbbHcc_algo_H_pt_stack_9->SetBinError(5,0.127021);
   VbbHcc_algo_H_pt_stack_9->SetBinError(6,0.09839915);
   VbbHcc_algo_H_pt_stack_9->SetBinError(7,0.07671009);
   VbbHcc_algo_H_pt_stack_9->SetBinError(8,0.06156088);
   VbbHcc_algo_H_pt_stack_9->SetBinError(9,0.04599899);
   VbbHcc_algo_H_pt_stack_9->SetBinError(10,0.03453463);
   VbbHcc_algo_H_pt_stack_9->SetBinError(11,0.0253663);
   VbbHcc_algo_H_pt_stack_9->SetBinError(12,0.01843781);
   VbbHcc_algo_H_pt_stack_9->SetBinError(13,0.011519);
   VbbHcc_algo_H_pt_stack_9->SetBinError(14,0.008724767);
   VbbHcc_algo_H_pt_stack_9->SetBinError(15,0.006150647);
   VbbHcc_algo_H_pt_stack_9->SetBinError(16,0.007278741);
   VbbHcc_algo_H_pt_stack_9->SetBinError(17,0.002662579);
   VbbHcc_algo_H_pt_stack_9->SetBinError(18,0.004057893);
   VbbHcc_algo_H_pt_stack_9->SetBinError(20,0.002180309);
   VbbHcc_algo_H_pt_stack_9->SetBinError(21,0.001994556);
   VbbHcc_algo_H_pt_stack_9->SetBinError(23,0.001975509);
   VbbHcc_algo_H_pt_stack_9->SetBinError(27,0.001858148);
   VbbHcc_algo_H_pt_stack_9->SetEntries(42122);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_pt_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_9->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_9,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_10 = new TH1D("VbbHcc_algo_H_pt_stack_10","",40,0,2000);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(1,0.4039259);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(2,2.092264);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(3,4.280316);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(4,4.038913);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(5,2.475947);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(6,1.490382);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(7,0.8344695);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(8,0.5223455);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(9,0.3236787);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(10,0.204002);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(11,0.1259127);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(12,0.09458724);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(13,0.05520155);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(14,0.04195167);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(15,0.03345028);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(16,0.02135654);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(17,0.01822037);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(18,0.01082808);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(19,0.01052453);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(20,0.009761125);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(21,0.002712007);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(22,0.006954188);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(23,0.002600984);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(24,0.001885957);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(25,0.0009990185);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(26,0.001307134);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(27,0.002573483);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(28,0.0009512754);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(29,0.001788043);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(30,0.0004357738);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(31,0.0008852369);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(32,0.000449897);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(34,0.0008883402);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(35,0.0004499021);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(41,0.0004356623);
   VbbHcc_algo_H_pt_stack_10->SetBinError(1,0.01341017);
   VbbHcc_algo_H_pt_stack_10->SetBinError(2,0.03053663);
   VbbHcc_algo_H_pt_stack_10->SetBinError(3,0.04363414);
   VbbHcc_algo_H_pt_stack_10->SetBinError(4,0.04239343);
   VbbHcc_algo_H_pt_stack_10->SetBinError(5,0.0331315);
   VbbHcc_algo_H_pt_stack_10->SetBinError(6,0.02565756);
   VbbHcc_algo_H_pt_stack_10->SetBinError(7,0.01919788);
   VbbHcc_algo_H_pt_stack_10->SetBinError(8,0.01517575);
   VbbHcc_algo_H_pt_stack_10->SetBinError(9,0.01192615);
   VbbHcc_algo_H_pt_stack_10->SetBinError(10,0.009496458);
   VbbHcc_algo_H_pt_stack_10->SetBinError(11,0.007453165);
   VbbHcc_algo_H_pt_stack_10->SetBinError(12,0.006498739);
   VbbHcc_algo_H_pt_stack_10->SetBinError(13,0.004953547);
   VbbHcc_algo_H_pt_stack_10->SetBinError(14,0.004311569);
   VbbHcc_algo_H_pt_stack_10->SetBinError(15,0.003842944);
   VbbHcc_algo_H_pt_stack_10->SetBinError(16,0.003070479);
   VbbHcc_algo_H_pt_stack_10->SetBinError(17,0.002828237);
   VbbHcc_algo_H_pt_stack_10->SetBinError(18,0.002171453);
   VbbHcc_algo_H_pt_stack_10->SetBinError(19,0.002147125);
   VbbHcc_algo_H_pt_stack_10->SetBinError(20,0.002133551);
   VbbHcc_algo_H_pt_stack_10->SetBinError(21,0.001109265);
   VbbHcc_algo_H_pt_stack_10->SetBinError(22,0.001751941);
   VbbHcc_algo_H_pt_stack_10->SetBinError(23,0.001062483);
   VbbHcc_algo_H_pt_stack_10->SetBinError(24,0.0009125743);
   VbbHcc_algo_H_pt_stack_10->SetBinError(25,0.0007064151);
   VbbHcc_algo_H_pt_stack_10->SetBinError(26,0.0007584963);
   VbbHcc_algo_H_pt_stack_10->SetBinError(27,0.001057103);
   VbbHcc_algo_H_pt_stack_10->SetBinError(28,0.0006733471);
   VbbHcc_algo_H_pt_stack_10->SetBinError(29,0.0008957975);
   VbbHcc_algo_H_pt_stack_10->SetBinError(30,0.0004357738);
   VbbHcc_algo_H_pt_stack_10->SetBinError(31,0.0006259754);
   VbbHcc_algo_H_pt_stack_10->SetBinError(32,0.000449897);
   VbbHcc_algo_H_pt_stack_10->SetBinError(34,0.0006283075);
   VbbHcc_algo_H_pt_stack_10->SetBinError(35,0.0004499021);
   VbbHcc_algo_H_pt_stack_10->SetBinError(41,0.0004356623);
   VbbHcc_algo_H_pt_stack_10->SetEntries(39248);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_pt_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_10->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_10,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_11 = new TH1D("VbbHcc_algo_H_pt_stack_11","",40,0,2000);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(1,0.1527014);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(2,0.7460156);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(3,0.7366361);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(4,0.422965);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(5,0.1551355);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(6,0.06980512);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(7,0.03691993);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(8,0.04471961);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(9,0.0293524);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(10,0.006620281);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(11,0.001439536);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(12,0.002942536);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(14,0.001469136);
   VbbHcc_algo_H_pt_stack_11->SetBinError(1,0.01661055);
   VbbHcc_algo_H_pt_stack_11->SetBinError(2,0.03758176);
   VbbHcc_algo_H_pt_stack_11->SetBinError(3,0.03654018);
   VbbHcc_algo_H_pt_stack_11->SetBinError(4,0.02824629);
   VbbHcc_algo_H_pt_stack_11->SetBinError(5,0.01678441);
   VbbHcc_algo_H_pt_stack_11->SetBinError(6,0.01121945);
   VbbHcc_algo_H_pt_stack_11->SetBinError(7,0.008393634);
   VbbHcc_algo_H_pt_stack_11->SetBinError(8,0.008850378);
   VbbHcc_algo_H_pt_stack_11->SetBinError(9,0.007231348);
   VbbHcc_algo_H_pt_stack_11->SetBinError(10,0.003337471);
   VbbHcc_algo_H_pt_stack_11->SetBinError(11,0.001439536);
   VbbHcc_algo_H_pt_stack_11->SetBinError(12,0.002114899);
   VbbHcc_algo_H_pt_stack_11->SetBinError(14,0.001469136);
   VbbHcc_algo_H_pt_stack_11->SetEntries(1619);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_pt_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_11->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_11,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_12 = new TH1D("VbbHcc_algo_H_pt_stack_12","",40,0,2000);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(1,361.3164);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(2,1976.2);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(3,4428.52);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(4,3668.205);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(5,1572.924);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(6,523.6589);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(7,362.6673);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(8,123.1715);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(9,57.66431);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(10,7.354517);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(11,22.1739);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(12,11.63225);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(13,12.13136);
   VbbHcc_algo_H_pt_stack_12->SetBinError(1,43.71778);
   VbbHcc_algo_H_pt_stack_12->SetBinError(2,102.1243);
   VbbHcc_algo_H_pt_stack_12->SetBinError(3,151.2898);
   VbbHcc_algo_H_pt_stack_12->SetBinError(4,138.8727);
   VbbHcc_algo_H_pt_stack_12->SetBinError(5,90.34614);
   VbbHcc_algo_H_pt_stack_12->SetBinError(6,51.9526);
   VbbHcc_algo_H_pt_stack_12->SetBinError(7,42.71618);
   VbbHcc_algo_H_pt_stack_12->SetBinError(8,24.7498);
   VbbHcc_algo_H_pt_stack_12->SetBinError(9,17.61949);
   VbbHcc_algo_H_pt_stack_12->SetBinError(10,6.144482);
   VbbHcc_algo_H_pt_stack_12->SetBinError(11,10.98572);
   VbbHcc_algo_H_pt_stack_12->SetBinError(12,7.22349);
   VbbHcc_algo_H_pt_stack_12->SetBinError(13,8.452496);
   VbbHcc_algo_H_pt_stack_12->SetEntries(2893);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_pt_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_12->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_pt__27 = new TH1D("VbbHcc_algo_H_pt__27","",40,0,2000);
   VbbHcc_algo_H_pt__27->SetBinContent(1,2010);
   VbbHcc_algo_H_pt__27->SetBinContent(2,7836);
   VbbHcc_algo_H_pt__27->SetBinContent(3,15068);
   VbbHcc_algo_H_pt__27->SetBinContent(4,19401);
   VbbHcc_algo_H_pt__27->SetBinContent(5,17669);
   VbbHcc_algo_H_pt__27->SetBinContent(6,14377);
   VbbHcc_algo_H_pt__27->SetBinContent(7,13367);
   VbbHcc_algo_H_pt__27->SetBinContent(8,14328);
   VbbHcc_algo_H_pt__27->SetBinContent(9,13261);
   VbbHcc_algo_H_pt__27->SetBinContent(10,9723);
   VbbHcc_algo_H_pt__27->SetBinContent(11,6306);
   VbbHcc_algo_H_pt__27->SetBinContent(12,3936);
   VbbHcc_algo_H_pt__27->SetBinContent(13,2511);
   VbbHcc_algo_H_pt__27->SetBinContent(14,1596);
   VbbHcc_algo_H_pt__27->SetBinContent(15,1052);
   VbbHcc_algo_H_pt__27->SetBinContent(16,658);
   VbbHcc_algo_H_pt__27->SetBinContent(17,417);
   VbbHcc_algo_H_pt__27->SetBinContent(18,317);
   VbbHcc_algo_H_pt__27->SetBinContent(19,229);
   VbbHcc_algo_H_pt__27->SetBinContent(20,164);
   VbbHcc_algo_H_pt__27->SetBinContent(21,124);
   VbbHcc_algo_H_pt__27->SetBinContent(22,75);
   VbbHcc_algo_H_pt__27->SetBinContent(23,62);
   VbbHcc_algo_H_pt__27->SetBinContent(24,49);
   VbbHcc_algo_H_pt__27->SetBinContent(25,26);
   VbbHcc_algo_H_pt__27->SetBinContent(26,22);
   VbbHcc_algo_H_pt__27->SetBinContent(27,17);
   VbbHcc_algo_H_pt__27->SetBinContent(28,16);
   VbbHcc_algo_H_pt__27->SetBinContent(29,11);
   VbbHcc_algo_H_pt__27->SetBinContent(30,5);
   VbbHcc_algo_H_pt__27->SetBinContent(31,6);
   VbbHcc_algo_H_pt__27->SetBinContent(32,5);
   VbbHcc_algo_H_pt__27->SetBinContent(33,4);
   VbbHcc_algo_H_pt__27->SetBinContent(35,3);
   VbbHcc_algo_H_pt__27->SetBinContent(36,4);
   VbbHcc_algo_H_pt__27->SetBinContent(37,4);
   VbbHcc_algo_H_pt__27->SetBinContent(39,1);
   VbbHcc_algo_H_pt__27->SetBinContent(40,1);
   VbbHcc_algo_H_pt__27->SetBinContent(41,2);
   VbbHcc_algo_H_pt__27->SetEntries(144663);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt__27->SetLineColor(ci);
   VbbHcc_algo_H_pt__27->SetLineWidth(2);
   VbbHcc_algo_H_pt__27->SetMarkerStyle(20);
   VbbHcc_algo_H_pt__27->SetMarkerSize(1.2);
   VbbHcc_algo_H_pt__27->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt__27->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt__27->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt__27->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt__27->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt__27->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt__27->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt__27->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt__27->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt__27->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt__27->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt__27->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt__27->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt__27->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt__27->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_pt_fx1027[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_VbbHcc_algo_H_pt_fy1027[40] = {
   353887.4,
   1489726,
   1183674,
   135622.8,
   20455.2,
   6692.708,
   3450.311,
   1824.981,
   1056.241,
   624.493,
   422.1079,
   275.7709,
   193.9018,
   126.2607,
   83.54307,
   57.02718,
   43.8557,
   28.71176,
   20.75315,
   17.53249,
   11.27052,
   10.62514,
   5.914127,
   4.472149,
   3.640094,
   3.421397,
   1.586811,
   1.16806,
   1.151086,
   0.5278594,
   0.5628244,
   0.4668554,
   0.6264431,
   0.3439276,
   0.3264432,
   0.3337765,
   0.04065973,
   0.1809568,
   0.07282258,
   0.06724531};
   Double_t Graph_from_VbbHcc_algo_H_pt_fex1027[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_VbbHcc_algo_H_pt_fey1027[40] = {
   21254.59,
   43390.98,
   38233.21,
   11569.85,
   2818.316,
   59.56563,
   46.03216,
   27.62385,
   19.90253,
   9.650885,
   12.50267,
   8.776243,
   9.418385,
   3.51703,
   2.850665,
   2.36394,
   2.13511,
   1.632618,
   1.472419,
   1.406578,
   0.9422074,
   1.17329,
   0.8332729,
   0.5862173,
   0.5065786,
   0.5784331,
   0.3382589,
   0.3046238,
   0.2942704,
   0.1841633,
   0.2185494,
   0.209302,
   0.3757551,
   0.1619612,
   0.1545259,
   0.3337765,
   0.04065973,
   0.1112151,
   0.07282258,
   0.06724531};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_algo_H_pt_fx1027,Graph_from_VbbHcc_algo_H_pt_fy1027,Graph_from_VbbHcc_algo_H_pt_fex1027,Graph_from_VbbHcc_algo_H_pt_fey1027);
   gre->SetName("Graph_from_VbbHcc_algo_H_pt");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_pt1027 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_pt1027","",100,0,2200);
   Graph_Graph_from_VbbHcc_algo_H_pt1027->SetMinimum(-153311.7);
   Graph_Graph_from_VbbHcc_algo_H_pt1027->SetMaximum(1686428);
   Graph_Graph_from_VbbHcc_algo_H_pt1027->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_pt1027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_pt1027->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_pt1027->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_pt1027->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_pt1027->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_pt1027->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_pt1027->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_pt1027->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_pt1027->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_pt1027->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_pt1027->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_pt1027->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_pt1027->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_pt1027->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_pt1027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_pt1027);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_pt","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_pt","MC unc. (stat.)","fl");

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
   H_pt_VbbHcc_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(116.1295,-0.2774193,1562.903,1.658065);
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
   
   TH1D *data_mc_ratio__28 = new TH1D("data_mc_ratio__28","",40,0,2000);
   data_mc_ratio__28->SetBinContent(1,0.005679772);
   data_mc_ratio__28->SetBinContent(2,0.005260029);
   data_mc_ratio__28->SetBinContent(3,0.01272985);
   data_mc_ratio__28->SetBinContent(4,0.1430512);
   data_mc_ratio__28->SetBinContent(5,0.8637903);
   data_mc_ratio__28->SetBinContent(6,2.148159);
   data_mc_ratio__28->SetBinContent(7,3.874144);
   data_mc_ratio__28->SetBinContent(8,7.851042);
   data_mc_ratio__28->SetBinContent(9,12.55491);
   data_mc_ratio__28->SetBinContent(10,15.56943);
   data_mc_ratio__28->SetBinContent(11,14.93931);
   data_mc_ratio__28->SetBinContent(12,14.27272);
   data_mc_ratio__28->SetBinContent(13,12.94985);
   data_mc_ratio__28->SetBinContent(14,12.64051);
   data_mc_ratio__28->SetBinContent(15,12.59231);
   data_mc_ratio__28->SetBinContent(16,11.53836);
   data_mc_ratio__28->SetBinContent(17,9.508456);
   data_mc_ratio__28->SetBinContent(18,11.04077);
   data_mc_ratio__28->SetBinContent(19,11.03447);
   data_mc_ratio__28->SetBinContent(20,9.354062);
   data_mc_ratio__28->SetBinContent(21,11.00215);
   data_mc_ratio__28->SetBinContent(22,7.058731);
   data_mc_ratio__28->SetBinContent(23,10.48337);
   data_mc_ratio__28->SetBinContent(24,10.9567);
   data_mc_ratio__28->SetBinContent(25,7.142673);
   data_mc_ratio__28->SetBinContent(26,6.430121);
   data_mc_ratio__28->SetBinContent(27,10.71331);
   data_mc_ratio__28->SetBinContent(28,13.69793);
   data_mc_ratio__28->SetBinContent(29,9.556196);
   data_mc_ratio__28->SetBinContent(30,9.47222);
   data_mc_ratio__28->SetBinContent(31,10.66052);
   data_mc_ratio__28->SetBinContent(32,10.70996);
   data_mc_ratio__28->SetBinContent(33,6.385257);
   data_mc_ratio__28->SetBinContent(35,9.18996);
   data_mc_ratio__28->SetBinContent(36,11.98407);
   data_mc_ratio__28->SetBinContent(37,98.37744);
   data_mc_ratio__28->SetBinContent(39,13.732);
   data_mc_ratio__28->SetBinContent(40,14.87093);
   data_mc_ratio__28->SetBinContent(41,27.30068);
   data_mc_ratio__28->SetBinError(1,0.0001266872);
   data_mc_ratio__28->SetBinError(2,5.942113e-05);
   data_mc_ratio__28->SetBinError(3,0.000103704);
   data_mc_ratio__28->SetBinError(4,0.001027021);
   data_mc_ratio__28->SetBinError(5,0.006498338);
   data_mc_ratio__28->SetBinError(6,0.01791564);
   data_mc_ratio__28->SetBinError(7,0.03350879);
   data_mc_ratio__28->SetBinError(8,0.06558953);
   data_mc_ratio__28->SetBinError(9,0.1090248);
   data_mc_ratio__28->SetBinError(10,0.1578965);
   data_mc_ratio__28->SetBinError(11,0.188128);
   data_mc_ratio__28->SetBinError(12,0.2274988);
   data_mc_ratio__28->SetBinError(13,0.2584291);
   data_mc_ratio__28->SetBinError(14,0.3164085);
   data_mc_ratio__28->SetBinError(15,0.3882374);
   data_mc_ratio__28->SetBinError(16,0.449812);
   data_mc_ratio__28->SetBinError(17,0.4656311);
   data_mc_ratio__28->SetBinError(18,0.6201116);
   data_mc_ratio__28->SetBinError(19,0.7291781);
   data_mc_ratio__28->SetBinError(20,0.7304295);
   data_mc_ratio__28->SetBinError(21,0.9880224);
   data_mc_ratio__28->SetBinError(22,0.8150721);
   data_mc_ratio__28->SetBinError(23,1.33139);
   data_mc_ratio__28->SetBinError(24,1.565243);
   data_mc_ratio__28->SetBinError(25,1.400793);
   data_mc_ratio__28->SetBinError(26,1.370906);
   data_mc_ratio__28->SetBinError(27,2.598359);
   data_mc_ratio__28->SetBinError(28,3.424482);
   data_mc_ratio__28->SetBinError(29,2.881301);
   data_mc_ratio__28->SetBinError(30,4.236106);
   data_mc_ratio__28->SetBinError(31,4.352138);
   data_mc_ratio__28->SetBinError(32,4.789637);
   data_mc_ratio__28->SetBinError(33,3.192628);
   data_mc_ratio__28->SetBinError(35,5.305826);
   data_mc_ratio__28->SetBinError(36,5.992034);
   data_mc_ratio__28->SetBinError(37,49.18872);
   data_mc_ratio__28->SetBinError(39,13.732);
   data_mc_ratio__28->SetBinError(40,14.87093);
   data_mc_ratio__28->SetBinError(41,33.30434);
   data_mc_ratio__28->SetMinimum(0.4);
   data_mc_ratio__28->SetMaximum(1.6);
   data_mc_ratio__28->SetEntries(14.19162);
   data_mc_ratio__28->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__28->SetLineColor(ci);
   data_mc_ratio__28->SetLineWidth(2);
   data_mc_ratio__28->SetMarkerStyle(20);
   data_mc_ratio__28->SetMarkerSize(1.2);
   data_mc_ratio__28->GetXaxis()->SetTitle("H p_{T} [GeV]");
   data_mc_ratio__28->GetXaxis()->SetRange(7,30);
   data_mc_ratio__28->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__28->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__28->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__28->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__28->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__28->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__28->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__28->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__28->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__28->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__28->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__28->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__28->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__28->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__28->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__28->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__28->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1028[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_mc_statistical_error_fy1028[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1028[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_mc_statistical_error_fey1028[40] = {
   0.0600603,
   0.02912682,
   0.03230045,
   0.08530901,
   0.13778,
   0.008900079,
   0.01334145,
   0.01513651,
   0.0188428,
   0.01545395,
   0.02961961,
   0.0318244,
   0.04857296,
   0.0278553,
   0.0341221,
   0.04145287,
   0.04868488,
   0.05686235,
   0.07094918,
   0.08022694,
   0.08359926,
   0.1104258,
   0.1408953,
   0.1310818,
   0.1391664,
   0.1690634,
   0.2131689,
   0.2607947,
   0.2556459,
   0.3488871,
   0.3883083,
   0.448323,
   0.5998231,
   0.4709165,
   0.4733621,
   1,
   1,
   0.6145951,
   1,
   1};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1028,Graph_from_mc_statistical_error_fy1028,Graph_from_mc_statistical_error_fex1028,Graph_from_mc_statistical_error_fey1028);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1028 = new TH1F("Graph_Graph_from_mc_statistical_error1028","",100,0,2200);
   Graph_Graph_from_mc_statistical_error1028->SetMinimum(-0.2);
   Graph_Graph_from_mc_statistical_error1028->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1028->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1028->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1028->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1028->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1028->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1028->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1028->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1028->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1028->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1028->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1028->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1028->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1028->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1028->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1028->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1028);
   
   gre->Draw("e2");
   TLine *line = new TLine(300,1,1500,1);
   line->Draw();
   bottomPad->Modified();
   H_pt_VbbHcc_17->cd();
   H_pt_VbbHcc_17->Modified();
   H_pt_VbbHcc_17->cd();
   H_pt_VbbHcc_17->SetSelected(H_pt_VbbHcc_17);
}
