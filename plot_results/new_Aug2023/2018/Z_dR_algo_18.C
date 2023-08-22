void Z_dR_algo_18()
{
//=========Macro generated from canvas: Z_dR_algo_18/Z_dR_algo_18
//=========  (Tue Aug 22 09:21:26 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_algo_18 = new TCanvas("Z_dR_algo_18", "Z_dR_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_algo_18->SetHighLightColor(2);
   Z_dR_algo_18->Range(0,0,1,1);
   Z_dR_algo_18->SetFillColor(0);
   Z_dR_algo_18->SetFillStyle(4000);
   Z_dR_algo_18->SetBorderMode(0);
   Z_dR_algo_18->SetBorderSize(2);
   Z_dR_algo_18->SetFrameFillStyle(1000);
   Z_dR_algo_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-403.6221,6.314516,403228.4);
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
   st->SetMaximum(345585.9);
   
   TH1F *st_stack_115 = new TH1F("st_stack_115","",30,0,6);
   st_stack_115->SetMinimum(0.01);
   st_stack_115->SetMaximum(362865.2);
   st_stack_115->SetDirectory(0);
   st_stack_115->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_115->SetLineColor(ci);
   st_stack_115->GetXaxis()->SetRange(1,30);
   st_stack_115->GetXaxis()->SetLabelFont(42);
   st_stack_115->GetXaxis()->SetLabelSize(0.035);
   st_stack_115->GetXaxis()->SetTitleSize(0.035);
   st_stack_115->GetXaxis()->SetTitleFont(42);
   st_stack_115->GetYaxis()->SetTitle("Events/0.2");
   st_stack_115->GetYaxis()->SetLabelFont(42);
   st_stack_115->GetYaxis()->SetLabelSize(0.05);
   st_stack_115->GetYaxis()->SetTitleSize(0.057);
   st_stack_115->GetYaxis()->SetTitleOffset(1.2);
   st_stack_115->GetYaxis()->SetTitleFont(42);
   st_stack_115->GetZaxis()->SetLabelFont(42);
   st_stack_115->GetZaxis()->SetLabelSize(0.035);
   st_stack_115->GetZaxis()->SetTitleSize(0.035);
   st_stack_115->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_115);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(2,43.79262);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,106805.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,132495.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,96582.21);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,96611.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,108122.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,97267.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,88946.26);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,94751.43);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,99980.19);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,84218.48);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,81320.56);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,77232.43);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,68623.11);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,71007.16);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,56026.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,49807.68);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,54388.12);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,37221.46);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,35092.35);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,31937.95);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(23,32117.91);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(24,30381.11);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(25,31527.26);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(26,48659.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(27,24702.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(28,19161.78);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(29,20707.48);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(30,14444.15);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(31,12542.54);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(2,16.14728);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,4110.545);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,5581.824);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,4823.511);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,5450.94);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,5069.754);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,4669.254);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,4547.694);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,4899.44);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,5741.992);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,5342.959);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,4564.597);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,4153.472);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,4310.137);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,4351.499);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,3502.92);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,3840.649);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,4137.551);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,2770.011);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,2690.238);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,2729.502);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(23,2729.965);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(24,2632.386);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(25,2829.057);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(26,22656.45);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(27,3019.176);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(28,2394.8);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(29,2919.01);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(30,1843.863);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(31,1595.378);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(105593);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,0.3694673);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,502.6931);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,818.5646);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,873.823);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,854.3047);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,825.4123);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,747.946);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,724.6034);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,678.8721);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,629.4294);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,579.0998);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,525.1394);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,489.8433);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,450.1724);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,417.7318);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,375.7216);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,320.9444);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,293.0235);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,255.1389);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,263.9471);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,242.0726);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,233.1054);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(24,226.1774);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,193.2508);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(26,184.9363);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(27,176.8842);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(28,146.2948);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(29,120.5944);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(30,91.14362);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(31,65.93697);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.2800313);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,10.61027);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,13.0602);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,13.06466);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,13.07302);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,13.12403);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,12.13737);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,12.09948);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,11.77571);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,11.31133);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,11.1405);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,10.55035);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,10.6144);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,9.28943);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,9.12921);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,14.47559);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,8.274406);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,7.735087);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,7.003281);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,8.223278);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,7.009337);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,6.703656);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(24,7.403661);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,6.068579);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(26,5.90761);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(27,5.85847);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(28,5.269458);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(29,4.675398);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(30,4.119632);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(31,3.509317);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(152694);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_3 = new TH1D("VbbHcc_algo_Z_dR_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(2,6.752108);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(3,11000.13);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(4,20715.62);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(5,23634.57);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(6,23103.71);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(7,19737.37);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(8,16108.41);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(9,13062.74);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(10,10920.31);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(11,9401.554);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(12,8414.281);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(13,7728.692);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(14,7219.006);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(15,6773.953);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(16,6276.733);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(17,5642.591);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(18,5121.875);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(19,4687.541);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(20,4375.344);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(21,4064.153);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(22,3867.242);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(23,3701.5);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(24,3668.705);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(25,3650.477);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(26,3673.931);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(27,3599.577);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(28,3243.871);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(29,2629.118);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(30,1601.784);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(31,1170.999);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(2,0.7370781);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(3,31.0238);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(4,42.49375);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(5,45.12701);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(6,45.11596);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(7,41.86053);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(8,37.37429);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(9,32.91919);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(10,30.61807);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(11,27.94575);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(12,26.66676);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(13,25.94896);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(14,24.47451);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(15,23.51131);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(16,22.77127);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(17,21.80182);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(18,20.71754);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(19,19.49713);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(20,19.27945);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(21,18.20902);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(22,18.07977);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(23,17.82287);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(24,18.13979);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(25,17.88322);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(26,18.71743);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(27,17.62003);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(28,17.37813);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(29,14.96751);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(30,11.6062);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(31,10.67312);
   VbbHcc_algo_Z_dR_stack_3->SetEntries(3537992);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_4 = new TH1D("VbbHcc_algo_Z_dR_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(2,0.4903702);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(3,758.0272);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(4,1130.654);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(5,1006.906);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(6,814.7588);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(7,649.4397);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(8,619.1969);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(9,602.82);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(10,577.8838);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(11,548.0565);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(12,478.4265);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(13,469.0183);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(14,450.133);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(15,422.5928);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(16,382.6953);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(17,328.8069);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(18,302.2689);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(19,283.9523);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(20,271.1403);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(21,237.6118);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(22,232.3744);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(23,205.9353);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(24,191.7719);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(25,162.3784);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(26,173.5609);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(27,168.112);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(28,148.8086);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(29,136.7678);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(30,96.61793);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(31,75.27724);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(2,0.2221669);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(3,18.08899);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(4,28.79278);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(5,26.22561);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(6,27.30898);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(7,21.91773);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(8,19.12623);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(9,20.76145);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(10,19.66398);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(11,19.72629);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(12,15.34624);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(13,18.02977);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(14,17.27666);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(15,18.32596);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(16,19.71784);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(17,21.79926);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(18,14.35143);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(19,16.57086);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(20,16.22313);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(21,11.46621);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(22,15.93051);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(23,11.98358);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(24,11.83639);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(25,9.508095);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(26,15.70858);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(27,12.47882);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(28,9.470654);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(29,10.52319);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(30,10.53132);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(31,7.782704);
   VbbHcc_algo_Z_dR_stack_4->SetEntries(53670);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_5 = new TH1D("VbbHcc_algo_Z_dR_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(2,0.1701843);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(3,228.3897);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(4,288.9068);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(5,222.9883);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(6,230.1964);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(7,210.9712);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(8,210.2422);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(9,215.2408);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(10,184.2777);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(11,173.6503);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(12,158.6064);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(13,140.4186);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(14,173.9468);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(15,140.3023);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(16,154.6687);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(17,112.2128);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(18,91.02423);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(19,104.2048);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(20,91.7682);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(21,67.81556);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(22,67.45368);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(23,62.60813);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(24,65.21334);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(25,50.66248);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(26,46.38331);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(27,37.88489);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(28,42.74934);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(29,46.70201);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(30,21.7742);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(31,16.71251);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(2,0.1701843);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(3,13.43414);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(4,19.26726);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(5,21.88632);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(6,24.68551);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(7,26.18481);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(8,24.44303);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(9,26.12419);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(10,22.93132);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(11,19.89182);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(12,17.42132);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(13,20.20702);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(14,32.6393);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(15,16.75594);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(16,19.46234);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(17,14.90766);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(18,13.35155);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(19,19.96373);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(20,19.14262);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(21,8.606113);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(22,8.887561);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(23,8.356275);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(24,14.4101);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(25,9.458737);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(26,6.459783);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(27,6.655253);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(28,7.81518);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(29,13.33169);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(30,4.514445);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(31,2.811218);
   VbbHcc_algo_Z_dR_stack_5->SetEntries(13622);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_6 = new TH1D("VbbHcc_algo_Z_dR_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(3,2.852951);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(4,3.04923);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(5,3.635749);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(6,4.436069);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(7,1.46294);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(8,0.8046614);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(9,3.616988);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(10,2.224717);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(11,1.078504);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(12,0.75047);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(13,2.600527);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(14,1.741833);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(15,0.3580201);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(17,0.6017025);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(19,0.5588237);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(20,1.857742);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(21,1.348407);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(22,0.5883291);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(23,0.7593296);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(24,0.7052527);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(26,1.660934);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(28,1.160423);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(29,0.7240563);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(30,0.6783453);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(31,0.4321114);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(3,1.276505);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(4,1.373171);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(5,1.397786);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(6,2.769751);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(7,1.061766);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(8,0.8046614);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(9,1.91938);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(10,1.285115);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(11,0.762637);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(12,0.75047);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(13,1.317612);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(14,1.050336);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(15,0.3580201);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(17,0.6017025);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(19,0.5588237);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(20,1.093085);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(21,0.9604921);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(22,0.5883291);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(23,0.7593296);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(24,0.7052527);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(26,1.02971);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(28,0.8214626);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(29,0.7240563);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(30,0.6783453);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(31,0.4321114);
   VbbHcc_algo_Z_dR_stack_6->SetEntries(60);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_7 = new TH1D("VbbHcc_algo_Z_dR_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(3,11.27277);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(4,12.53321);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(5,11.51993);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(6,3.997628);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(7,2.821578);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(8,3.06909);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(9,1.700446);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(10,1.790585);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(11,3.107917);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(12,2.434197);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(13,4.211552);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(14,3.424553);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(15,3.56297);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(16,3.775021);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(17,2.181191);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(18,1.135949);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(19,4.564018);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(20,2.135714);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(21,1.529713);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(22,0.3453961);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(23,0.994193);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(24,1.586129);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(25,1.162566);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(26,0.6906927);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(27,1.962398);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(28,0.4838422);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(29,2.554332);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(30,1.252223);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(31,0.6604008);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(3,2.053629);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(4,2.158912);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(5,2.238353);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(6,1.35851);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(7,1.090999);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(8,1.093109);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(9,0.7636351);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(10,0.8675027);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(11,1.050675);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(12,0.9213077);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(13,1.287915);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(14,1.22415);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(15,1.242674);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(16,1.176993);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(17,0.8922126);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(18,0.6575687);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(19,1.414078);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(20,0.9624191);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(21,0.7718143);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(22,0.3453961);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(23,0.7240563);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(24,0.7971604);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(25,0.6792814);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(26,0.4883954);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(27,0.7613968);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(28,0.3086711);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(29,1.056154);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(30,0.6408809);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(31,0.4714423);
   VbbHcc_algo_Z_dR_stack_7->SetEntries(247);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_8 = new TH1D("VbbHcc_algo_Z_dR_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(3,16.00358);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(4,24.89156);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(5,21.89589);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(6,11.95482);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(7,5.095065);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(8,6.895103);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(9,5.173605);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(10,3.566891);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(11,6.815164);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(12,5.243985);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(13,6.869444);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(14,6.822257);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(15,4.656712);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(16,4.84554);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(17,2.668825);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(18,3.439128);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(19,2.223191);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(20,2.197392);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(21,2.569563);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(22,1.887239);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(23,0.2751797);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(24,0.3886423);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(25,1.305037);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(26,2.32737);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(27,1.310799);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(28,2.183519);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(29,2.835566);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(30,0.5459298);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(31,0.7854725);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(3,2.169318);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(4,2.763781);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(5,2.632204);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(6,1.955705);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(7,1.218099);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(8,1.504404);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(9,1.233398);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(10,0.996323);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(11,1.444931);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(12,1.219933);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(13,1.480334);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(14,1.447136);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(15,1.221945);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(16,1.197166);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(17,0.8605547);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(18,1.072949);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(19,0.8098504);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(20,0.7808126);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(21,0.8640481);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(22,0.7809354);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(23,0.2751797);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(24,0.301122);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(25,0.6130619);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(26,0.8336864);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(27,0.66929);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(28,0.8023873);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(29,0.9098922);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(30,0.4232492);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(31,0.4545157);
   VbbHcc_algo_Z_dR_stack_8->SetEntries(543);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_9 = new TH1D("VbbHcc_algo_Z_dR_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(2,0.00333629);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(3,11.29709);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(4,19.13138);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(5,17.07352);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(6,10.73894);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(7,6.263929);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(8,3.756511);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(9,2.979589);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(10,2.830503);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(11,2.955625);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(12,3.151622);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(13,2.98098);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(14,2.992425);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(15,2.797939);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(16,2.642887);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(17,2.365146);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(18,2.24284);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(19,2.073927);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(20,1.775987);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(21,1.551571);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(22,1.339895);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(23,0.9499211);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(24,0.9304903);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(25,0.8317109);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(26,1.098037);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(27,1.44609);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(28,1.658625);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(29,1.713977);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(30,1.066831);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(31,0.6135861);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(2,0.00333629);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(3,0.1950136);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(4,0.2872645);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(5,0.2534017);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(6,0.1999264);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(7,0.1647242);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(8,0.1160178);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(9,0.09738771);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(10,0.1015111);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(11,0.1000904);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(12,0.1026412);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(13,0.1014118);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(14,0.1040618);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(15,0.09438274);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(16,0.09854212);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(17,0.08823708);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(18,0.08578403);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(19,0.08569555);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(20,0.07615701);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(21,0.08321263);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(22,0.06791644);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(23,0.05502368);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(24,0.05477356);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(25,0.05146736);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(26,0.0654344);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(27,0.06900361);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(28,0.07847915);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(29,0.08170196);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(30,0.05845862);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(31,0.04538149);
   VbbHcc_algo_Z_dR_stack_9->SetEntries(38365);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_10 = new TH1D("VbbHcc_algo_Z_dR_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(2,0.001173167);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(3,2.3251);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(4,5.03019);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(5,5.82628);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(6,5.346964);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(7,3.74207);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(8,2.68378);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(9,2.112736);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(10,1.921456);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(11,1.881236);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(12,1.853803);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(13,1.813363);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(14,1.660677);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(15,1.513279);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(16,1.384682);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(17,1.216511);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(18,1.118264);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(19,1.071855);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(20,0.994492);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(21,0.9478243);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(22,0.8305701);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(23,0.7188045);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(24,0.6453621);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(25,0.6511975);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(26,0.690848);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(27,0.7533612);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(28,0.7664666);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(29,0.5517038);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(30,0.3526864);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(31,0.2210003);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(2,0.0008405309);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(3,0.03671158);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(4,0.0532391);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(5,0.05651831);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(6,0.05362172);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(7,0.04470376);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(8,0.03801346);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(9,0.03390163);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(10,0.03241675);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(11,0.0320692);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(12,0.03193668);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(13,0.03156867);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(14,0.030194);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(15,0.02890441);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(16,0.02769623);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(17,0.02592022);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(18,0.02486551);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(19,0.02431958);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(20,0.02339279);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(21,0.02277685);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(22,0.0212814);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(23,0.01979649);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(24,0.01872316);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(25,0.01876208);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(26,0.01930919);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(27,0.02022329);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(28,0.02050628);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(29,0.01749577);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(30,0.01398269);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(31,0.01108314);
   VbbHcc_algo_Z_dR_stack_10->SetEntries(94157);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_11 = new TH1D("VbbHcc_algo_Z_dR_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(3,0.08181776);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(4,0.1589669);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(5,0.09000389);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(6,0.05248245);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(7,0.02664812);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(8,0.02215127);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(9,0.02695597);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(10,0.02646736);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(11,0.01996671);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(12,0.01190563);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(13,0.05233674);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(14,0.0287584);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(15,0.02640361);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(16,0.01155368);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(17,0.01558886);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(18,0.01879306);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(19,0.01705962);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(20,0.0158426);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(21,0.0106259);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(22,0.01521572);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(23,0.0122059);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(24,0.002390853);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(25,0.006746139);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(26,0.007986214);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(27,0.008604802);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(28,0.01002878);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(29,0.008423605);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(30,0.002155371);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(3,0.01463304);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(4,0.02017184);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(5,0.01568729);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(6,0.01101255);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(7,0.008198308);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(8,0.007119172);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(9,0.007924841);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(10,0.008157518);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(11,0.007628704);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(12,0.004949627);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(13,0.01300878);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(14,0.008443301);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(15,0.008090368);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(16,0.005168683);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(17,0.006837849);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(18,0.008323805);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(19,0.006531004);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(20,0.00632827);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(21,0.005334264);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(22,0.006318287);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(23,0.005532331);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(24,0.002390853);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(25,0.003907518);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(26,0.004367412);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(27,0.004350068);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(28,0.004900262);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(29,0.00488948);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(30,0.002155371);
   VbbHcc_algo_Z_dR_stack_11->SetEntries(352);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_12 = new TH1D("VbbHcc_algo_Z_dR_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(3,0.02601524);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(4,0.05074357);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(5,0.04707557);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(6,0.03508029);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(7,0.02515821);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(8,0.01804437);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(9,0.01489424);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(10,0.01392918);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(11,0.01542354);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(12,0.01345964);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(13,0.01378916);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(14,0.01681125);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(15,0.01188766);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(16,0.01082131);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(17,0.009777618);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(18,0.008752743);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(19,0.005506939);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(20,0.007646308);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(21,0.008753901);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(22,0.007908111);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(23,0.006747679);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(24,0.002780998);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(25,0.004256315);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(26,0.004493973);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(27,0.006555004);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(28,0.005435927);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(29,0.006006155);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(30,0.002114296);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(31,0.001491263);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(3,0.004324572);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(4,0.0041065);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(5,0.004182835);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(6,0.003430901);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(7,0.002870465);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(8,0.002418423);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(9,0.002183041);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(10,0.002073508);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(11,0.002210692);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(12,0.002128542);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(13,0.002137496);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(14,0.00396561);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(15,0.001934159);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(16,0.001850876);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(17,0.00178491);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(18,0.00167731);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(19,0.001362058);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(20,0.001479877);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(21,0.00164954);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(22,0.001615297);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(23,0.001530575);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(24,0.0009901096);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(25,0.001187935);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(26,0.001277958);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(27,0.001445323);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(28,0.001294583);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(29,0.0014113);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(30,0.0008108509);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(31,0.0006784764);
   VbbHcc_algo_Z_dR_stack_12->SetEntries(1270);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR__315 = new TH1D("VbbHcc_algo_Z_dR__315","",30,0,6);
   VbbHcc_algo_Z_dR__315->SetBinContent(2,69);
   VbbHcc_algo_Z_dR__315->SetBinContent(3,109718);
   VbbHcc_algo_Z_dR__315->SetBinContent(4,148694);
   VbbHcc_algo_Z_dR__315->SetBinContent(5,130077);
   VbbHcc_algo_Z_dR__315->SetBinContent(6,123624);
   VbbHcc_algo_Z_dR__315->SetBinContent(7,119180);
   VbbHcc_algo_Z_dR__315->SetBinContent(8,115617);
   VbbHcc_algo_Z_dR__315->SetBinContent(9,113331);
   VbbHcc_algo_Z_dR__315->SetBinContent(10,109456);
   VbbHcc_algo_Z_dR__315->SetBinContent(11,105701);
   VbbHcc_algo_Z_dR__315->SetBinContent(12,100287);
   VbbHcc_algo_Z_dR__315->SetBinContent(13,95510);
   VbbHcc_algo_Z_dR__315->SetBinContent(14,90562);
   VbbHcc_algo_Z_dR__315->SetBinContent(15,85581);
   VbbHcc_algo_Z_dR__315->SetBinContent(16,80843);
   VbbHcc_algo_Z_dR__315->SetBinContent(17,68588);
   VbbHcc_algo_Z_dR__315->SetBinContent(18,60872);
   VbbHcc_algo_Z_dR__315->SetBinContent(19,55244);
   VbbHcc_algo_Z_dR__315->SetBinContent(20,50511);
   VbbHcc_algo_Z_dR__315->SetBinContent(21,46031);
   VbbHcc_algo_Z_dR__315->SetBinContent(22,42533);
   VbbHcc_algo_Z_dR__315->SetBinContent(23,39121);
   VbbHcc_algo_Z_dR__315->SetBinContent(24,36731);
   VbbHcc_algo_Z_dR__315->SetBinContent(25,33396);
   VbbHcc_algo_Z_dR__315->SetBinContent(26,30909);
   VbbHcc_algo_Z_dR__315->SetBinContent(27,27810);
   VbbHcc_algo_Z_dR__315->SetBinContent(28,25362);
   VbbHcc_algo_Z_dR__315->SetBinContent(29,22709);
   VbbHcc_algo_Z_dR__315->SetBinContent(30,15768);
   VbbHcc_algo_Z_dR__315->SetBinContent(31,14128);
   VbbHcc_algo_Z_dR__315->SetEntries(2097992);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR__315->SetLineColor(ci);
   VbbHcc_algo_Z_dR__315->SetLineWidth(2);
   VbbHcc_algo_Z_dR__315->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR__315->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR__315->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR__315->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__315->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__315->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__315->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__315->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__315->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__315->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__315->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR__315->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__315->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__315->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__315->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__315->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__315->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_fx1229[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_fy1229[30] = {
   0,
   51.57926,
   119338.4,
   155513.7,
   122380.6,
   121650.6,
   129565.3,
   114970.6,
   103567.3,
   107125.1,
   110748.8,
   93862.35,
   90202.37,
   85582.05,
   76423.05,
   78251.65,
   62494.49,
   55651.75,
   59767.36,
   42223.83,
   39733.84,
   36352.11,
   36324.77,
   34537.24,
   35587.99,
   52744.69,
   28690.85,
   22749.77,
   23649.06,
   16259.37};
   Double_t Graph_from_VbbHcc_algo_Z_dR_fex1229[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_fey1229[30] = {
   0,
   16.16894,
   4110.739,
   5582.11,
   4823.862,
   5451.268,
   5070.059,
   4669.522,
   4547.952,
   4899.643,
   5742.14,
   5343.088,
   4564.764,
   4153.723,
   4310.283,
   4351.656,
   3503.118,
   3840.764,
   4137.686,
   2770.201,
   2690.35,
   2729.632,
   2730.071,
   2632.525,
   2829.152,
   22656.46,
   3019.266,
   2394.9,
   2919.102,
   1843.94};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_fx1229,Graph_from_VbbHcc_algo_Z_dR_fy1229,Graph_from_VbbHcc_algo_Z_dR_fex1229,Graph_from_VbbHcc_algo_Z_dR_fey1229);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR1229 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR1229","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->SetMaximum(177205.4);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR1229);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_algo_18->cd();
  
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
   
   TH1D *data_mc_ratio__316 = new TH1D("data_mc_ratio__316","",30,0,6);
   data_mc_ratio__316->SetBinContent(2,1.337747);
   data_mc_ratio__316->SetBinContent(3,0.9193858);
   data_mc_ratio__316->SetBinContent(4,0.9561475);
   data_mc_ratio__316->SetBinContent(5,1.062889);
   data_mc_ratio__316->SetBinContent(6,1.016222);
   data_mc_ratio__316->SetBinContent(7,0.9198448);
   data_mc_ratio__316->SetBinContent(8,1.005622);
   data_mc_ratio__316->SetBinContent(9,1.094274);
   data_mc_ratio__316->SetBinContent(10,1.021758);
   data_mc_ratio__316->SetBinContent(11,0.9544215);
   data_mc_ratio__316->SetBinContent(12,1.068448);
   data_mc_ratio__316->SetBinContent(13,1.058841);
   data_mc_ratio__316->SetBinContent(14,1.058189);
   data_mc_ratio__316->SetBinContent(15,1.119832);
   data_mc_ratio__316->SetBinContent(16,1.033116);
   data_mc_ratio__316->SetBinContent(17,1.097505);
   data_mc_ratio__316->SetBinContent(18,1.093802);
   data_mc_ratio__316->SetBinContent(19,0.9243172);
   data_mc_ratio__316->SetBinContent(20,1.196268);
   data_mc_ratio__316->SetBinContent(21,1.158483);
   data_mc_ratio__316->SetBinContent(22,1.170028);
   data_mc_ratio__316->SetBinContent(23,1.076979);
   data_mc_ratio__316->SetBinContent(24,1.063519);
   data_mc_ratio__316->SetBinContent(25,0.9384064);
   data_mc_ratio__316->SetBinContent(26,0.5860116);
   data_mc_ratio__316->SetBinContent(27,0.9692987);
   data_mc_ratio__316->SetBinContent(28,1.114825);
   data_mc_ratio__316->SetBinContent(29,0.9602496);
   data_mc_ratio__316->SetBinContent(30,0.9697795);
   data_mc_ratio__316->SetBinContent(31,1.018295);
   data_mc_ratio__316->SetBinError(2,0.1610458);
   data_mc_ratio__316->SetBinError(3,0.002775613);
   data_mc_ratio__316->SetBinError(4,0.00247958);
   data_mc_ratio__316->SetBinError(5,0.002947051);
   data_mc_ratio__316->SetBinError(6,0.002890261);
   data_mc_ratio__316->SetBinError(7,0.002664482);
   data_mc_ratio__316->SetBinError(8,0.002957494);
   data_mc_ratio__316->SetBinError(9,0.003250512);
   data_mc_ratio__316->SetBinError(10,0.003088363);
   data_mc_ratio__316->SetBinError(11,0.002935626);
   data_mc_ratio__316->SetBinError(12,0.00337389);
   data_mc_ratio__316->SetBinError(13,0.003426151);
   data_mc_ratio__316->SetBinError(14,0.003516336);
   data_mc_ratio__316->SetBinError(15,0.003827933);
   data_mc_ratio__316->SetBinError(16,0.003633521);
   data_mc_ratio__316->SetBinError(17,0.004190659);
   data_mc_ratio__316->SetBinError(18,0.004433329);
   data_mc_ratio__316->SetBinError(19,0.003932588);
   data_mc_ratio__316->SetBinError(20,0.005322741);
   data_mc_ratio__316->SetBinError(21,0.005399638);
   data_mc_ratio__316->SetBinError(22,0.00567327);
   data_mc_ratio__316->SetBinError(23,0.005445053);
   data_mc_ratio__316->SetBinError(24,0.005549179);
   data_mc_ratio__316->SetBinError(25,0.005135039);
   data_mc_ratio__316->SetBinError(26,0.003333218);
   data_mc_ratio__316->SetBinError(27,0.005812422);
   data_mc_ratio__316->SetBinError(28,0.007000269);
   data_mc_ratio__316->SetBinError(29,0.006372137);
   data_mc_ratio__316->SetBinError(30,0.007722976);
   data_mc_ratio__316->SetBinError(31,0.1174102);
   data_mc_ratio__316->SetMinimum(0.4);
   data_mc_ratio__316->SetMaximum(1.6);
   data_mc_ratio__316->SetEntries(2237.73);
   data_mc_ratio__316->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__316->SetLineColor(ci);
   data_mc_ratio__316->SetLineWidth(2);
   data_mc_ratio__316->SetMarkerStyle(20);
   data_mc_ratio__316->SetMarkerSize(1.2);
   data_mc_ratio__316->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__316->GetXaxis()->SetRange(1,30);
   data_mc_ratio__316->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__316->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__316->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__316->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__316->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__316->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__316->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__316->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__316->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__316->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__316->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__316->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__316->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__316->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__316->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__316->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__316->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1230[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1230[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1230[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1230[30] = {
   0,
   0.3134775,
   0.03444608,
   0.03589466,
   0.03941689,
   0.04481085,
   0.03913129,
   0.04061491,
   0.04391302,
   0.04573756,
   0.05184835,
   0.05692472,
   0.05060581,
   0.04853498,
   0.0564003,
   0.05561105,
   0.05605483,
   0.06901425,
   0.06922986,
   0.06560753,
   0.06770929,
   0.07508869,
   0.07515727,
   0.07622281,
   0.07949738,
   0.4295497,
   0.1052345,
   0.1052714,
   0.1234342,
   0.1134078};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1230,Graph_from_mc_statistical_error_fy1230,Graph_from_mc_statistical_error_fex1230,Graph_from_mc_statistical_error_fey1230);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1230 = new TH1F("Graph_Graph_from_mc_statistical_error1230","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1230->SetMinimum(0.4845404);
   Graph_Graph_from_mc_statistical_error1230->SetMaximum(1.51546);
   Graph_Graph_from_mc_statistical_error1230->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1230->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1230->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1230);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_algo_18->cd();
   Z_dR_algo_18->Modified();
   Z_dR_algo_18->cd();
   Z_dR_algo_18->SetSelected(Z_dR_algo_18);
}
