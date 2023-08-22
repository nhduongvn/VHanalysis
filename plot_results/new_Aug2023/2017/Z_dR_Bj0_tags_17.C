void Z_dR_Bj0_tags_17()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_17/Z_dR_Bj0_tags_17
//=========  (Tue Aug 22 09:20:38 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_tags_17 = new TCanvas("Z_dR_Bj0_tags_17", "Z_dR_Bj0_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_tags_17->SetHighLightColor(2);
   Z_dR_Bj0_tags_17->Range(0,0,1,1);
   Z_dR_Bj0_tags_17->SetFillColor(0);
   Z_dR_Bj0_tags_17->SetFillStyle(4000);
   Z_dR_Bj0_tags_17->SetBorderMode(0);
   Z_dR_Bj0_tags_17->SetBorderSize(2);
   Z_dR_Bj0_tags_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-106.4701,6.314516,106373.6);
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
   st->SetMaximum(91167.25);
   
   TH1F *st_stack_50 = new TH1F("st_stack_50","",30,0,6);
   st_stack_50->SetMinimum(0.01);
   st_stack_50->SetMaximum(95725.61);
   st_stack_50->SetDirectory(0);
   st_stack_50->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_50->SetLineColor(ci);
   st_stack_50->GetXaxis()->SetRange(1,30);
   st_stack_50->GetXaxis()->SetLabelFont(42);
   st_stack_50->GetXaxis()->SetLabelSize(0.035);
   st_stack_50->GetXaxis()->SetTitleSize(0.035);
   st_stack_50->GetXaxis()->SetTitleFont(42);
   st_stack_50->GetYaxis()->SetTitle("Events/0.2");
   st_stack_50->GetYaxis()->SetLabelFont(42);
   st_stack_50->GetYaxis()->SetLabelSize(0.05);
   st_stack_50->GetYaxis()->SetTitleSize(0.057);
   st_stack_50->GetYaxis()->SetTitleOffset(1.2);
   st_stack_50->GetYaxis()->SetTitleFont(42);
   st_stack_50->GetZaxis()->SetLabelFont(42);
   st_stack_50->GetZaxis()->SetLabelSize(0.035);
   st_stack_50->GetZaxis()->SetTitleSize(0.035);
   st_stack_50->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_50);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(1,6200.938);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(2,22082.9);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(3,24737.47);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(4,38312.01);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(5,31727.99);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(6,14791.34);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(7,8649.621);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(8,10019.08);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(9,8423.505);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(10,8321.573);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(11,4478.531);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(12,6190.328);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(13,4578.37);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(14,3806.742);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(15,2769.252);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(16,3015.751);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(17,1374.536);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(18,1747.38);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(19,2231.951);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(20,2780.224);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(21,1141.726);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(22,1073.813);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(23,1162.216);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(24,678.7452);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(25,253.0358);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(26,1056.09);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(27,108.8692);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(28,66.42315);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(29,56.6674);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(30,7.234983);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(31,0.3054725);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(1,878.1407);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(2,1713.228);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(3,2232.105);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(4,17171.63);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(5,17102.03);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(6,1615.699);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(7,1164.724);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(8,1336.347);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(9,1193.509);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(10,1165.428);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(11,740.6789);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(12,992.4226);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(13,827.1443);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(14,638.4062);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(15,500.5992);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(16,625.6101);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(17,302.3563);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(18,481.7377);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(19,557.4872);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(20,720.2077);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(21,392.5458);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(22,391.9741);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(23,469.914);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(24,380.7198);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(25,66.39896);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(26,468.6032);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(27,40.54892);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(28,30.30221);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(29,36.00687);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(30,7.234983);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(31,0.3054725);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetEntries(9351);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(1,20.94817);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(2,96.54879);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(3,122.6732);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(4,106.5129);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(5,90.72265);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(6,74.98576);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(7,62.70657);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(8,46.7383);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(9,45.4556);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(10,40.0489);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(11,39.52222);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(12,33.59797);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(13,34.3245);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(14,29.48915);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(15,25.57762);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(16,19.47884);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(17,16.76198);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(18,9.694116);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(19,10.70733);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(20,9.410023);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(21,5.711165);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(22,7.396489);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(23,5.563477);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(24,2.871962);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(25,2.340287);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(26,1.969094);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(27,1.620693);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(28,1.083047);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(29,0.4083262);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(30,0.1584846);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(31,0.2481279);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(1,1.845004);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(2,3.7935);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(3,4.314177);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(4,4.043368);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(5,3.754453);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(6,3.410465);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(7,3.107685);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(8,2.518377);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(9,2.62269);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(10,2.401977);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(11,2.530622);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(12,2.368071);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(13,2.42313);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(14,2.251438);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(15,2.050544);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(16,1.76334);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(17,1.641592);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(18,1.024459);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(19,1.267112);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(20,1.170439);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(21,0.8907101);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(22,1.127219);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(23,0.9163159);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(24,0.6512066);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(25,0.5344591);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(26,0.6153151);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(27,0.438731);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(28,0.4076317);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(29,0.2765008);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(30,0.09167253);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(31,0.1111358);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetEntries(11598);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_3 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(1,285.7578);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(2,1668.874);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(3,2358.059);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(4,2272.601);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(5,1899.001);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(6,1528.727);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(7,1255.065);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(8,1053.456);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(9,911.3254);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(10,829.5496);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(11,735.3106);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(12,668.6276);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(13,597.3447);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(14,534.1419);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(15,448.5568);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(16,375.9775);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(17,312.6591);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(18,254.6897);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(19,209.42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(20,161.831);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(21,134.0822);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(22,98.75208);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(23,76.42744);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(24,57.25939);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(25,42.66327);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(26,31.573);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(27,21.094);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(28,15.04169);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(29,7.347126);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(30,4.927986);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(31,8.967058);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(1,4.285879);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(2,10.33764);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(3,12.32156);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(4,12.12443);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(5,11.07794);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(6,9.93312);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(7,9.008219);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(8,8.24663);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(9,7.669548);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(10,7.333158);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(11,6.893777);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(12,6.576723);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(13,6.226599);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(14,5.890982);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(15,5.390136);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(16,4.925472);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(17,4.491106);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(18,4.052249);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(19,3.673778);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(20,3.224204);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(21,2.92853);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(22,2.510501);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(23,2.21717);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(24,1.920009);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(25,1.649515);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(26,1.43266);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(27,1.149819);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(28,0.984808);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(29,0.6867101);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(30,0.5631792);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(31,0.7500902);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetEntries(305979);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_4 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(1,71.32277);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(2,315.2284);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(3,357.2648);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(4,296.7421);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(5,205.9921);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(6,164.8179);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(7,123.5581);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(8,105.5646);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(9,101.1242);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(10,103.6357);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(11,82.89376);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(12,83.9198);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(13,59.4371);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(14,53.75922);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(15,57.32822);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(16,49.84718);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(17,26.02465);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(18,26.46963);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(19,25.3616);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(20,13.19444);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(21,14.98834);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(22,11.3645);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(23,9.485945);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(24,9.35918);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(25,5.924514);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(26,4.145962);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(27,2.219295);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(28,1.402836);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(29,0.9763942);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(30,0.3030634);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(31,1.243362);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(1,2.908108);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(2,8.547303);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(3,12.54464);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(4,12.2276);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(5,10.21225);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(6,9.339623);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(7,7.184194);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(8,7.494171);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(9,7.445831);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(10,8.640418);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(11,6.558835);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(12,7.248);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(13,3.40817);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(14,3.201196);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(15,6.162517);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(16,6.062478);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(17,2.119437);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(18,3.685377);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(19,3.737284);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(20,1.439576);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(21,1.765789);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(22,1.528151);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(23,1.389133);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(24,3.273912);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(25,0.9371965);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(26,0.699415);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(27,0.572);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(28,0.4428904);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(29,0.4827986);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(30,0.1547224);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(31,0.5009116);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetEntries(17592);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_5 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(1,17.15291);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(2,42.84154);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(3,44.63975);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(4,22.0573);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(5,17.49605);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(6,10.99578);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(7,20.43853);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(8,10.23324);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(9,7.911326);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(10,6.760429);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(11,5.244731);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(12,7.717687);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(13,9.074626);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(14,5.03038);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(15,3.956049);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(16,5.77353);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(17,1.561422);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(18,1.650794);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(19,1.437771);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(20,1.809477);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(21,3.372828);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(22,1.819546);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(23,0.9162865);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(24,1.059032);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(25,0.5642894);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(26,0.4887549);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(27,0.2944716);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(28,0.5037636);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(29,0.01683745);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(30,0.1707835);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(31,0.09122051);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(1,2.932915);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(2,4.529621);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(3,8.533126);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(4,2.765078);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(5,2.749953);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(6,2.090912);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(7,7.867254);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(8,2.020282);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(9,1.555734);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(10,1.842723);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(11,1.395841);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(12,1.575847);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(13,2.246356);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(14,1.436242);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(15,1.341107);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(16,1.849506);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(17,0.4208797);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(18,0.4241289);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(19,0.4119779);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(20,0.5754297);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(21,1.357154);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(22,0.5722468);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(23,0.2954922);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(24,0.3614216);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(25,0.2413286);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(26,0.2121015);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(27,0.1938267);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(28,0.2366);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(29,0.01567671);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(30,0.1695805);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(31,0.09122051);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetEntries(2041);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(1,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(2,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(5,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(9,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(11,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(1,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(2,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(5,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(9,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(11,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_7 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(1,0.5303731);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(2,0.7955596);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(3,1.856306);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(4,1.060746);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(5,0.2651865);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(6,0.2651865);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(8,0.2651865);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(9,0.2651865);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(12,0.5303731);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(18,0.2651865);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(26,0.2651865);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(1,0.3750304);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(2,0.4593166);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(3,0.7016176);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(4,0.5303731);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(5,0.2651865);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(6,0.2651865);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(8,0.2651865);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(9,0.2651865);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(12,0.3750304);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(18,0.2651865);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(26,0.2651865);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetEntries(24);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_8 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(1,2.27903);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(2,6.837091);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(3,6.33064);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(4,5.570963);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(5,3.038707);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(6,3.038707);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(7,1.519354);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(8,3.291933);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(9,2.785482);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(10,2.532256);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(11,1.772579);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(12,1.772579);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(13,0.2532256);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(14,1.266128);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(15,0.5064512);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(16,0.7596768);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(17,0.5064512);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(19,0.5064512);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(23,0.2532256);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(25,0.2532256);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(1,0.7596768);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(2,1.315799);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(3,1.266128);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(4,1.187733);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(5,0.8771992);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(6,0.8771992);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(7,0.6202735);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(8,0.9130179);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(9,0.8398543);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(10,0.8007697);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(11,0.669972);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(12,0.669972);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(13,0.2532256);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(14,0.5662297);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(15,0.3581151);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(16,0.4385996);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(17,0.3581151);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(19,0.3581151);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(23,0.2532256);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(25,0.2532256);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetEntries(178);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_9 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(1,1.132197);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(2,5.94686);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(3,7.313249);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(4,5.964627);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(5,4.326898);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(6,3.083258);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(7,2.35161);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(8,2.144875);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(9,1.9979);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(10,1.926834);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(11,1.87192);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(12,1.918759);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(13,1.576354);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(14,1.212953);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(15,1.019139);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(16,0.6799642);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(17,0.55237);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(18,0.4053943);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(19,0.2858757);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(20,0.1905838);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(21,0.1679722);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(22,0.1356698);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(23,0.1195186);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(24,0.08721631);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(25,0.04360816);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(26,0.03876281);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(27,0.02584187);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(28,0.01615117);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(29,0.003230234);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(30,0.001615117);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(31,0.004845351);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(1,0.04276249);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(2,0.09800446);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(3,0.1086819);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(4,0.09815075);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(5,0.08359693);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(6,0.07056786);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(7,0.06162893);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(8,0.05885766);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(9,0.05680529);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(10,0.05578587);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(11,0.05498518);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(12,0.05566884);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(13,0.05045786);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(14,0.04426128);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(15,0.04057127);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(16,0.03313943);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(17,0.02986875);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(18,0.02558826);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(19,0.02148773);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(20,0.01754466);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(21,0.01647102);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(22,0.01480279);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(23,0.01389376);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(24,0.01186864);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(25,0.008392393);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(26,0.007912424);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(27,0.006460468);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(28,0.005107448);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(29,0.00228412);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(30,0.001615117);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(31,0.002797464);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetEntries(28819);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_10 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(1,0.4445226);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(2,2.46061);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(3,3.254751);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(4,2.720734);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(5,2.026905);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(6,1.433389);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(7,1.094588);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(8,0.9190407);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(9,0.7818484);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(10,0.8005341);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(11,0.7075974);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(12,0.6530156);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(13,0.5777811);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(14,0.4745181);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(15,0.3943663);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(16,0.3181484);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(17,0.251765);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(18,0.2045591);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(19,0.1435847);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(20,0.11949);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(21,0.09096979);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(22,0.0757262);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(23,0.06736682);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(24,0.04228866);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(25,0.02802853);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(26,0.01966914);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(27,0.0172105);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(28,0.005409014);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(29,0.004425557);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(30,0.0004917286);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(31,0.001966914);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(1,0.0147846);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(2,0.03478437);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(3,0.04000568);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(4,0.03657681);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(5,0.03157035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(6,0.02654879);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(7,0.0232);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(8,0.02125838);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(9,0.01960758);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(10,0.0198405);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(11,0.01865331);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(12,0.01791944);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(13,0.01685561);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(14,0.01527528);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(15,0.01392556);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(16,0.0125077);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(17,0.01112655);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(18,0.01002933);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(19,0.008402662);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(20,0.00766529);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(21,0.006688232);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(22,0.006102191);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(23,0.005755535);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(24,0.004560103);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(25,0.003712469);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(26,0.003109965);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(27,0.002909105);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(28,0.001630879);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(29,0.001475186);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(30,0.0004917286);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(31,0.0009834572);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetEntries(40948);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(1,0.004740753);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(2,0.03792603);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(3,0.03476553);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(4,0.01580251);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(5,0.004740753);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(6,0.003160502);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(7,0.007901256);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(8,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(9,0.003160502);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(10,0.003160502);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(11,0.004740753);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(13,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(14,0.006321005);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(15,0.003160502);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(18,0.003160502);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(31,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(1,0.002737075);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(2,0.007741618);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(3,0.007412035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(4,0.004997193);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(5,0.002737075);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(6,0.002234813);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(7,0.003533549);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(8,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(9,0.002234813);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(10,0.002234813);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(11,0.002737075);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(13,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(14,0.003160502);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(15,0.002234813);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(18,0.002234813);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(31,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetEntries(87);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_12 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(1,0.003736902);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(2,0.01245634);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(3,0.01017268);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(4,0.008719438);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(5,0.005605353);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(6,0.003114085);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(7,0.001245634);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(8,0.001038028);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(9,0.000622817);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(10,0.002283662);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(11,0.0008304226);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(12,0.001038028);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(13,0.000622817);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(14,0.000622817);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(15,0.0008304226);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(16,0.000622817);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(17,0.0002076057);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(18,0.0008304226);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(19,0.0008304226);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(20,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(21,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(22,0.0002076057);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(23,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(24,0.0002076057);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(26,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(1,0.0008807962);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(2,0.001608106);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(3,0.00145324);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(4,0.001345438);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(5,0.001078751);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(6,0.0008040532);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(7,0.0005085279);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(8,0.0004642204);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(9,0.0003595835);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(10,0.0006885501);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(11,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(12,0.0004642204);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(13,0.0003595835);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(14,0.0003595835);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(15,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(16,0.0003595835);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(17,0.0002076057);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(18,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(19,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(20,0.0002935987);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(21,0.0002935987);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(22,0.0002076057);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(23,0.0002935987);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(24,0.0002076057);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(26,0.0002935987);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetEntries(277);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0__136 = new TH1D("VbbHcc_tags_Z_dR_Bj0__136","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(1,2250);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(2,8976);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(3,8765);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(4,6942);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(5,5550);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(6,4417);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(7,3610);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(8,3015);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(9,2642);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(10,2290);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(11,2127);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(12,1920);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(13,1749);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(14,1488);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(15,1406);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(16,1166);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(17,931);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(18,789);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(19,643);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(20,547);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(21,454);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(22,395);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(23,314);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(24,200);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(25,175);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(26,136);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(27,92);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(28,54);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(29,31);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(30,15);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(31,30);
   VbbHcc_tags_Z_dR_Bj0__136->SetEntries(63148);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0__136->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0__136->SetLineWidth(2);
   VbbHcc_tags_Z_dR_Bj0__136->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_Bj0__136->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_Bj0__136->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0__136->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__136->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__136->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__136->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__136->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__136->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__136->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__136->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0__136->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__136->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__136->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__136->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__136->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__136->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fx1099[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fy1099[30] = {
   6600.829,
   24222.8,
   27638.9,
   41025.26,
   33951.18,
   16578.69,
   10116.36,
   11241.69,
   9495.471,
   9306.832,
   5346.176,
   6989.067,
   5280.961,
   4432.123,
   3306.594,
   3468.587,
   1732.854,
   2040.763,
   2479.815,
   2966.779,
   1300.14,
   1193.357,
   1255.05,
   749.4245,
   304.853,
   1094.591,
   134.1407,
   84.47604,
   65.42374,
   12.79741};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fex1099[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fey1099[30] = {
   878.1633,
   1713.292,
   2232.195,
   17171.64,
   17102.04,
   1615.762,
   1164.812,
   1336.397,
   1193.561,
   1165.488,
   740.746,
   992.4752,
   827.1814,
   638.4473,
   500.6723,
   625.6642,
   302.402,
   481.7702,
   557.5136,
   720.2176,
   392.564,
   391.9871,
   469.9224,
   380.7395,
   66.42913,
   468.6064,
   40.57209,
   30.32511,
   36.01772,
   7.261078};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_Bj0_fx1099,Graph_from_VbbHcc_tags_Z_dR_Bj0_fy1099,Graph_from_VbbHcc_tags_Z_dR_Bj0_fex1099,Graph_from_VbbHcc_tags_Z_dR_Bj0_fey1099);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->SetMinimum(4.982697);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->SetMaximum(64016.04);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR_Bj0","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj0_tags_17->cd();
  
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
   
   TH1D *data_mc_ratio__137 = new TH1D("data_mc_ratio__137","",30,0,6);
   data_mc_ratio__137->SetBinContent(1,0.3408663);
   data_mc_ratio__137->SetBinContent(2,0.3705599);
   data_mc_ratio__137->SetBinContent(3,0.3171255);
   data_mc_ratio__137->SetBinContent(4,0.1692128);
   data_mc_ratio__137->SetBinContent(5,0.16347);
   data_mc_ratio__137->SetBinContent(6,0.2664263);
   data_mc_ratio__137->SetBinContent(7,0.3568476);
   data_mc_ratio__137->SetBinContent(8,0.268198);
   data_mc_ratio__137->SetBinContent(9,0.2782379);
   data_mc_ratio__137->SetBinContent(10,0.2460558);
   data_mc_ratio__137->SetBinContent(11,0.3978545);
   data_mc_ratio__137->SetBinContent(12,0.2747148);
   data_mc_ratio__137->SetBinContent(13,0.3311897);
   data_mc_ratio__137->SetBinContent(14,0.3357307);
   data_mc_ratio__137->SetBinContent(15,0.4252109);
   data_mc_ratio__137->SetBinContent(16,0.33616);
   data_mc_ratio__137->SetBinContent(17,0.5372641);
   data_mc_ratio__137->SetBinContent(18,0.3866201);
   data_mc_ratio__137->SetBinContent(19,0.2592935);
   data_mc_ratio__137->SetBinContent(20,0.184375);
   data_mc_ratio__137->SetBinContent(21,0.3491932);
   data_mc_ratio__137->SetBinContent(22,0.3309991);
   data_mc_ratio__137->SetBinContent(23,0.2501892);
   data_mc_ratio__137->SetBinContent(24,0.2668715);
   data_mc_ratio__137->SetBinContent(25,0.5740472);
   data_mc_ratio__137->SetBinContent(26,0.1242473);
   data_mc_ratio__137->SetBinContent(27,0.6858471);
   data_mc_ratio__137->SetBinContent(28,0.6392345);
   data_mc_ratio__137->SetBinContent(29,0.4738341);
   data_mc_ratio__137->SetBinContent(30,1.172112);
   data_mc_ratio__137->SetBinContent(31,2.761507);
   data_mc_ratio__137->SetBinError(1,0.007186092);
   data_mc_ratio__137->SetBinError(2,0.003911263);
   data_mc_ratio__137->SetBinError(3,0.003387312);
   data_mc_ratio__137->SetBinError(4,0.002030911);
   data_mc_ratio__137->SetBinError(5,0.002194278);
   data_mc_ratio__137->SetBinError(6,0.004008791);
   data_mc_ratio__137->SetBinError(7,0.005939216);
   data_mc_ratio__137->SetBinError(8,0.004884408);
   data_mc_ratio__137->SetBinError(9,0.005413148);
   data_mc_ratio__137->SetBinError(10,0.005141808);
   data_mc_ratio__137->SetBinError(11,0.008626617);
   data_mc_ratio__137->SetBinError(12,0.006269478);
   data_mc_ratio__137->SetBinError(13,0.007919212);
   data_mc_ratio__137->SetBinError(14,0.008703414);
   data_mc_ratio__137->SetBinError(15,0.01133997);
   data_mc_ratio__137->SetBinError(16,0.009844569);
   data_mc_ratio__137->SetBinError(17,0.01760812);
   data_mc_ratio__137->SetBinError(18,0.01376404);
   data_mc_ratio__137->SetBinError(19,0.01022554);
   data_mc_ratio__137->SetBinError(20,0.007883306);
   data_mc_ratio__137->SetBinError(21,0.01638845);
   data_mc_ratio__137->SetBinError(22,0.01665437);
   data_mc_ratio__137->SetBinError(23,0.014119);
   data_mc_ratio__137->SetBinError(24,0.01887066);
   data_mc_ratio__137->SetBinError(25,0.04339389);
   data_mc_ratio__137->SetBinError(26,0.01065412);
   data_mc_ratio__137->SetBinError(27,0.07150451);
   data_mc_ratio__137->SetBinError(28,0.08698879);
   data_mc_ratio__137->SetBinError(29,0.08510312);
   data_mc_ratio__137->SetBinError(30,0.3026381);
   data_mc_ratio__137->SetBinError(31,0.5604747);
   data_mc_ratio__137->SetMinimum(0.4);
   data_mc_ratio__137->SetMaximum(1.6);
   data_mc_ratio__137->SetEntries(145.054);
   data_mc_ratio__137->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__137->SetLineColor(ci);
   data_mc_ratio__137->SetLineWidth(2);
   data_mc_ratio__137->SetMarkerStyle(20);
   data_mc_ratio__137->SetMarkerSize(1.2);
   data_mc_ratio__137->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__137->GetXaxis()->SetRange(1,30);
   data_mc_ratio__137->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__137->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__137->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__137->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__137->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__137->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__137->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__137->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__137->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__137->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__137->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__137->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__137->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__137->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__137->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__137->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__137->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1100[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1100[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1100[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1100[30] = {
   0.1330383,
   0.07073053,
   0.0807628,
   0.4185626,
   0.5037245,
   0.09746016,
   0.1151413,
   0.1188786,
   0.1256979,
   0.1252293,
   0.1385562,
   0.142004,
   0.1566347,
   0.14405,
   0.1514163,
   0.1803802,
   0.174511,
   0.2360735,
   0.2248206,
   0.2427607,
   0.3019398,
   0.3284744,
   0.3744252,
   0.5080425,
   0.2179054,
   0.4281111,
   0.3024592,
   0.3589788,
   0.5505298,
   0.5673866};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1100,Graph_from_mc_statistical_error_fy1100,Graph_from_mc_statistical_error_fex1100,Graph_from_mc_statistical_error_fey1100);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1100 = new TH1F("Graph_Graph_from_mc_statistical_error1100","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1100->SetMinimum(0.319136);
   Graph_Graph_from_mc_statistical_error1100->SetMaximum(1.680864);
   Graph_Graph_from_mc_statistical_error1100->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1100->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1100->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1100->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1100->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1100->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1100->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1100->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1100->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1100->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1100->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1100->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1100->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1100->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1100->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1100->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1100);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_tags_17->cd();
   Z_dR_Bj0_tags_17->Modified();
   Z_dR_Bj0_tags_17->cd();
   Z_dR_Bj0_tags_17->SetSelected(Z_dR_Bj0_tags_17);
}
