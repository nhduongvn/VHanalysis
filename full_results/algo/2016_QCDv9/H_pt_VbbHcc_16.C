void H_pt_VbbHcc_16()
{
//=========Macro generated from canvas: H_pt_VbbHcc_16/H_pt_VbbHcc_16
//=========  (Mon Nov 21 13:06:13 2022) by ROOT version 6.14/09
   TCanvas *H_pt_VbbHcc_16 = new TCanvas("H_pt_VbbHcc_16", "H_pt_VbbHcc_16",0,0,600,600);
   H_pt_VbbHcc_16->SetHighLightColor(2);
   H_pt_VbbHcc_16->Range(0,0,1,1);
   H_pt_VbbHcc_16->SetFillColor(0);
   H_pt_VbbHcc_16->SetFillStyle(4000);
   H_pt_VbbHcc_16->SetBorderMode(0);
   H_pt_VbbHcc_16->SetBorderSize(2);
   H_pt_VbbHcc_16->SetFrameFillStyle(1000);
   H_pt_VbbHcc_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(116.1295,-2364.744,1562.903,2362389);
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
   st->SetMaximum(2024680);
   
   TH1F *st_stack_13 = new TH1F("st_stack_13","",40,0,2000);
   st_stack_13->SetMinimum(0.01);
   st_stack_13->SetMaximum(2125914);
   st_stack_13->SetDirectory(0);
   st_stack_13->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_13->SetLineColor(ci);
   st_stack_13->GetXaxis()->SetRange(7,30);
   st_stack_13->GetXaxis()->SetLabelFont(42);
   st_stack_13->GetXaxis()->SetLabelSize(0.035);
   st_stack_13->GetXaxis()->SetTitleSize(0.035);
   st_stack_13->GetXaxis()->SetTitleFont(42);
   st_stack_13->GetYaxis()->SetTitle("Events/50.0");
   st_stack_13->GetYaxis()->SetLabelFont(42);
   st_stack_13->GetYaxis()->SetLabelSize(0.05);
   st_stack_13->GetYaxis()->SetTitleSize(0.057);
   st_stack_13->GetYaxis()->SetTitleOffset(1.2);
   st_stack_13->GetYaxis()->SetTitleFont(42);
   st_stack_13->GetZaxis()->SetLabelFont(42);
   st_stack_13->GetZaxis()->SetLabelSize(0.035);
   st_stack_13->GetZaxis()->SetTitleSize(0.035);
   st_stack_13->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_13);
   
   
   TH1D *VbbHcc_algo_H_pt_stack_1 = new TH1D("VbbHcc_algo_H_pt_stack_1","",40,0,2000);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(1,226658.4);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(2,879048.7);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(3,731995.4);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(4,68417.92);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(5,1357.667);
   VbbHcc_algo_H_pt_stack_1->SetBinError(1,17651.9);
   VbbHcc_algo_H_pt_stack_1->SetBinError(2,34714.65);
   VbbHcc_algo_H_pt_stack_1->SetBinError(3,31687.81);
   VbbHcc_algo_H_pt_stack_1->SetBinError(4,9710.63);
   VbbHcc_algo_H_pt_stack_1->SetBinError(5,1357.667);
   VbbHcc_algo_H_pt_stack_1->SetEntries(1415);

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
   VbbHcc_algo_H_pt_stack_2->SetBinContent(1,760.2921);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(2,3555.891);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(3,3654.258);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(4,1698.439);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(5,801.3307);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(6,415.0725);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(7,232.2104);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(8,140.9736);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(9,87.07597);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(10,47.77479);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(11,35.69353);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(12,21.76507);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(13,12.71076);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(14,12.5027);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(15,8.796841);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(16,4.615726);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(17,4.933079);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(18,3.586706);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(19,1.931604);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(20,1.439006);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(21,1.358898);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(22,0.7599475);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(23,0.3271391);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(24,0.4217042);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(25,0.7420984);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(27,0.6036428);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(28,0.5794322);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(30,0.3223642);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(36,0.04688589);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(38,0.0461064);
   VbbHcc_algo_H_pt_stack_2->SetBinError(1,9.425827);
   VbbHcc_algo_H_pt_stack_2->SetBinError(2,20.58215);
   VbbHcc_algo_H_pt_stack_2->SetBinError(3,21.59497);
   VbbHcc_algo_H_pt_stack_2->SetBinError(4,15.38424);
   VbbHcc_algo_H_pt_stack_2->SetBinError(5,11.10515);
   VbbHcc_algo_H_pt_stack_2->SetBinError(6,8.389379);
   VbbHcc_algo_H_pt_stack_2->SetBinError(7,6.380366);
   VbbHcc_algo_H_pt_stack_2->SetBinError(8,5.158577);
   VbbHcc_algo_H_pt_stack_2->SetBinError(9,4.217188);
   VbbHcc_algo_H_pt_stack_2->SetBinError(10,3.040171);
   VbbHcc_algo_H_pt_stack_2->SetBinError(11,2.820406);
   VbbHcc_algo_H_pt_stack_2->SetBinError(12,2.127345);
   VbbHcc_algo_H_pt_stack_2->SetBinError(13,1.671612);
   VbbHcc_algo_H_pt_stack_2->SetBinError(14,1.723252);
   VbbHcc_algo_H_pt_stack_2->SetBinError(15,1.62707);
   VbbHcc_algo_H_pt_stack_2->SetBinError(16,1.028688);
   VbbHcc_algo_H_pt_stack_2->SetBinError(17,1.108722);
   VbbHcc_algo_H_pt_stack_2->SetBinError(18,0.9835563);
   VbbHcc_algo_H_pt_stack_2->SetBinError(19,0.6813936);
   VbbHcc_algo_H_pt_stack_2->SetBinError(20,0.5383896);
   VbbHcc_algo_H_pt_stack_2->SetBinError(21,0.6185242);
   VbbHcc_algo_H_pt_stack_2->SetBinError(22,0.4450002);
   VbbHcc_algo_H_pt_stack_2->SetBinError(23,0.2871767);
   VbbHcc_algo_H_pt_stack_2->SetBinError(24,0.3280334);
   VbbHcc_algo_H_pt_stack_2->SetBinError(25,0.4372105);
   VbbHcc_algo_H_pt_stack_2->SetBinError(27,0.395515);
   VbbHcc_algo_H_pt_stack_2->SetBinError(28,0.4100714);
   VbbHcc_algo_H_pt_stack_2->SetBinError(30,0.3223642);
   VbbHcc_algo_H_pt_stack_2->SetBinError(36,0.04688589);
   VbbHcc_algo_H_pt_stack_2->SetBinError(38,0.0461064);
   VbbHcc_algo_H_pt_stack_2->SetEntries(198303);

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
   VbbHcc_algo_H_pt_stack_3->SetBinContent(1,4781.4);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(2,26746.12);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(3,35600.36);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(4,16218.5);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(5,6983.565);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(6,3459.122);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(7,1851.725);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(8,1053.002);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(9,612.4143);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(10,378.1971);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(11,257.4864);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(12,162.7557);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(13,112.9082);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(14,77.44142);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(15,52.44504);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(16,34.53568);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(17,26.24663);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(18,19.00005);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(19,11.39112);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(20,9.72606);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(21,8.21514);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(22,4.446375);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(23,4.006296);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(24,2.743921);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(25,1.783737);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(26,1.236781);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(27,0.9636328);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(28,0.912514);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(29,0.8977237);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(30,0.7926367);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(31,0.2714764);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(32,0.3160628);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(33,0.07929543);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(34,0.14006);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(36,0.0539668);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(38,0.07017789);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(40,0.07901158);
   VbbHcc_algo_H_pt_stack_3->SetBinContent(41,0.06844373);
   VbbHcc_algo_H_pt_stack_3->SetBinError(1,17.47135);
   VbbHcc_algo_H_pt_stack_3->SetBinError(2,41.1637);
   VbbHcc_algo_H_pt_stack_3->SetBinError(3,47.39014);
   VbbHcc_algo_H_pt_stack_3->SetBinError(4,31.56643);
   VbbHcc_algo_H_pt_stack_3->SetBinError(5,20.57283);
   VbbHcc_algo_H_pt_stack_3->SetBinError(6,14.48893);
   VbbHcc_algo_H_pt_stack_3->SetBinError(7,10.63439);
   VbbHcc_algo_H_pt_stack_3->SetBinError(8,8.068816);
   VbbHcc_algo_H_pt_stack_3->SetBinError(9,6.173976);
   VbbHcc_algo_H_pt_stack_3->SetBinError(10,4.88514);
   VbbHcc_algo_H_pt_stack_3->SetBinError(11,4.054767);
   VbbHcc_algo_H_pt_stack_3->SetBinError(12,3.241994);
   VbbHcc_algo_H_pt_stack_3->SetBinError(13,2.724418);
   VbbHcc_algo_H_pt_stack_3->SetBinError(14,2.261492);
   VbbHcc_algo_H_pt_stack_3->SetBinError(15,1.859222);
   VbbHcc_algo_H_pt_stack_3->SetBinError(16,1.505347);
   VbbHcc_algo_H_pt_stack_3->SetBinError(17,1.32384);
   VbbHcc_algo_H_pt_stack_3->SetBinError(18,1.122899);
   VbbHcc_algo_H_pt_stack_3->SetBinError(19,0.8679272);
   VbbHcc_algo_H_pt_stack_3->SetBinError(20,0.8092515);
   VbbHcc_algo_H_pt_stack_3->SetBinError(21,0.7344785);
   VbbHcc_algo_H_pt_stack_3->SetBinError(22,0.5579275);
   VbbHcc_algo_H_pt_stack_3->SetBinError(23,0.5161311);
   VbbHcc_algo_H_pt_stack_3->SetBinError(24,0.4250201);
   VbbHcc_algo_H_pt_stack_3->SetBinError(25,0.3484425);
   VbbHcc_algo_H_pt_stack_3->SetBinError(26,0.2830444);
   VbbHcc_algo_H_pt_stack_3->SetBinError(27,0.2619308);
   VbbHcc_algo_H_pt_stack_3->SetBinError(28,0.2476626);
   VbbHcc_algo_H_pt_stack_3->SetBinError(29,0.2439189);
   VbbHcc_algo_H_pt_stack_3->SetBinError(30,0.2392771);
   VbbHcc_algo_H_pt_stack_3->SetBinError(31,0.136847);
   VbbHcc_algo_H_pt_stack_3->SetBinError(32,0.1433187);
   VbbHcc_algo_H_pt_stack_3->SetBinError(33,0.07929543);
   VbbHcc_algo_H_pt_stack_3->SetBinError(34,0.09903828);
   VbbHcc_algo_H_pt_stack_3->SetBinError(36,0.0539668);
   VbbHcc_algo_H_pt_stack_3->SetBinError(38,0.07017789);
   VbbHcc_algo_H_pt_stack_3->SetBinError(40,0.07901158);
   VbbHcc_algo_H_pt_stack_3->SetBinError(41,0.06844373);
   VbbHcc_algo_H_pt_stack_3->SetEntries(1672354);

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
   VbbHcc_algo_H_pt_stack_4->SetBinContent(1,57.31723);
   VbbHcc_algo_H_pt_stack_4->SetBinContent(2,286.2748);
   VbbHcc_algo_H_pt_stack_4->SetBinContent(3,773.6795);
   VbbHcc_algo_H_pt_stack_4->SetBinContent(4,1336.897);
   VbbHcc_algo_H_pt_stack_4->SetBinContent(5,987.0448);
   VbbHcc_algo_H_pt_stack_4->SetBinContent(6,288.4455);
   VbbHcc_algo_H_pt_stack_4->SetBinContent(7,29.32956);
   VbbHcc_algo_H_pt_stack_4->SetBinContent(8,0.2998003);
   VbbHcc_algo_H_pt_stack_4->SetBinContent(9,0.5548159);
   VbbHcc_algo_H_pt_stack_4->SetBinError(1,4.114987);
   VbbHcc_algo_H_pt_stack_4->SetBinError(2,9.197037);
   VbbHcc_algo_H_pt_stack_4->SetBinError(3,15.15355);
   VbbHcc_algo_H_pt_stack_4->SetBinError(4,19.94532);
   VbbHcc_algo_H_pt_stack_4->SetBinError(5,17.1684);
   VbbHcc_algo_H_pt_stack_4->SetBinError(6,9.288366);
   VbbHcc_algo_H_pt_stack_4->SetBinError(7,2.961219);
   VbbHcc_algo_H_pt_stack_4->SetBinError(8,0.2998003);
   VbbHcc_algo_H_pt_stack_4->SetBinError(9,0.392952);
   VbbHcc_algo_H_pt_stack_4->SetEntries(12883);

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
   VbbHcc_algo_H_pt_stack_5->SetBinContent(1,30.83474);
   VbbHcc_algo_H_pt_stack_5->SetBinContent(2,125.2633);
   VbbHcc_algo_H_pt_stack_5->SetBinContent(3,328.6058);
   VbbHcc_algo_H_pt_stack_5->SetBinContent(4,527.9237);
   VbbHcc_algo_H_pt_stack_5->SetBinContent(5,424.9901);
   VbbHcc_algo_H_pt_stack_5->SetBinContent(6,123.5376);
   VbbHcc_algo_H_pt_stack_5->SetBinContent(7,20.88471);
   VbbHcc_algo_H_pt_stack_5->SetBinContent(8,1.084003);
   VbbHcc_algo_H_pt_stack_5->SetBinContent(9,1.082523);
   VbbHcc_algo_H_pt_stack_5->SetBinError(1,5.75514);
   VbbHcc_algo_H_pt_stack_5->SetBinError(2,11.57895);
   VbbHcc_algo_H_pt_stack_5->SetBinError(3,18.90886);
   VbbHcc_algo_H_pt_stack_5->SetBinError(4,24.07887);
   VbbHcc_algo_H_pt_stack_5->SetBinError(5,21.54586);
   VbbHcc_algo_H_pt_stack_5->SetBinError(6,11.60818);
   VbbHcc_algo_H_pt_stack_5->SetBinError(7,4.805185);
   VbbHcc_algo_H_pt_stack_5->SetBinError(8,1.084003);
   VbbHcc_algo_H_pt_stack_5->SetBinError(9,1.082523);
   VbbHcc_algo_H_pt_stack_5->SetEntries(1481);

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
   VbbHcc_algo_H_pt_stack_6->SetBinContent(1,4.71455);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(2,17.63738);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(3,12.37205);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(4,5.769531);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(5,3.726496);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(6,1.579663);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(7,2.156657);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(8,0.5606333);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(9,0.6462176);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(10,0.2825576);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(11,0.1799755);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(12,0.0941619);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(13,0.1491219);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(14,0.09135368);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(15,0.0874816);
   VbbHcc_algo_H_pt_stack_6->SetBinContent(20,0.08958188);
   VbbHcc_algo_H_pt_stack_6->SetBinError(1,0.6573285);
   VbbHcc_algo_H_pt_stack_6->SetBinError(2,1.273932);
   VbbHcc_algo_H_pt_stack_6->SetBinError(3,1.063043);
   VbbHcc_algo_H_pt_stack_6->SetBinError(4,0.7154716);
   VbbHcc_algo_H_pt_stack_6->SetBinError(5,0.5815423);
   VbbHcc_algo_H_pt_stack_6->SetBinError(6,0.3836739);
   VbbHcc_algo_H_pt_stack_6->SetBinError(7,0.4337414);
   VbbHcc_algo_H_pt_stack_6->SetBinError(8,0.221861);
   VbbHcc_algo_H_pt_stack_6->SetBinError(9,0.2448362);
   VbbHcc_algo_H_pt_stack_6->SetBinError(10,0.1631413);
   VbbHcc_algo_H_pt_stack_6->SetBinError(11,0.1272702);
   VbbHcc_algo_H_pt_stack_6->SetBinError(12,0.0941619);
   VbbHcc_algo_H_pt_stack_6->SetBinError(13,0.1101222);
   VbbHcc_algo_H_pt_stack_6->SetBinError(14,0.09135368);
   VbbHcc_algo_H_pt_stack_6->SetBinError(15,0.0874816);
   VbbHcc_algo_H_pt_stack_6->SetBinError(20,0.08958188);
   VbbHcc_algo_H_pt_stack_6->SetEntries(557);

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
   VbbHcc_algo_H_pt_stack_7->SetBinContent(1,14.81339);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(2,53.92017);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(3,50.93736);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(4,28.97344);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(5,15.01842);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(6,10.49624);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(7,5.577892);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(8,3.42634);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(9,2.142021);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(10,0.7982015);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(11,0.5118662);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(12,0.4083376);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(13,0.274758);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(14,0.06877889);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(15,0.05740243);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(18,0.0628458);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(19,0.06684071);
   VbbHcc_algo_H_pt_stack_7->SetBinContent(29,0.02562574);
   VbbHcc_algo_H_pt_stack_7->SetBinError(1,1.005079);
   VbbHcc_algo_H_pt_stack_7->SetBinError(2,1.921193);
   VbbHcc_algo_H_pt_stack_7->SetBinError(3,1.86863);
   VbbHcc_algo_H_pt_stack_7->SetBinError(4,1.406049);
   VbbHcc_algo_H_pt_stack_7->SetBinError(5,1.008814);
   VbbHcc_algo_H_pt_stack_7->SetBinError(6,0.8429785);
   VbbHcc_algo_H_pt_stack_7->SetBinError(7,0.6213664);
   VbbHcc_algo_H_pt_stack_7->SetBinError(8,0.4844307);
   VbbHcc_algo_H_pt_stack_7->SetBinError(9,0.3812516);
   VbbHcc_algo_H_pt_stack_7->SetBinError(10,0.2311009);
   VbbHcc_algo_H_pt_stack_7->SetBinError(11,0.1829295);
   VbbHcc_algo_H_pt_stack_7->SetBinError(12,0.1667483);
   VbbHcc_algo_H_pt_stack_7->SetBinError(13,0.1375269);
   VbbHcc_algo_H_pt_stack_7->SetBinError(14,0.06877889);
   VbbHcc_algo_H_pt_stack_7->SetBinError(15,0.05740243);
   VbbHcc_algo_H_pt_stack_7->SetBinError(18,0.0628458);
   VbbHcc_algo_H_pt_stack_7->SetBinError(19,0.06684071);
   VbbHcc_algo_H_pt_stack_7->SetBinError(29,0.02562574);
   VbbHcc_algo_H_pt_stack_7->SetEntries(2794);

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
   VbbHcc_algo_H_pt_stack_8->SetBinContent(1,19.78028);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(2,63.71396);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(3,40.80886);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(4,28.59274);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(5,13.7703);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(6,9.018897);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(7,2.143277);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(8,2.308511);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(9,0.9147999);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(10,0.9869115);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(11,0.3916716);
   VbbHcc_algo_H_pt_stack_8->SetBinContent(17,0.1881969);
   VbbHcc_algo_H_pt_stack_8->SetBinError(1,1.949116);
   VbbHcc_algo_H_pt_stack_8->SetBinError(2,3.513648);
   VbbHcc_algo_H_pt_stack_8->SetBinError(3,2.80114);
   VbbHcc_algo_H_pt_stack_8->SetBinError(4,2.338741);
   VbbHcc_algo_H_pt_stack_8->SetBinError(5,1.632844);
   VbbHcc_algo_H_pt_stack_8->SetBinError(6,1.3194);
   VbbHcc_algo_H_pt_stack_8->SetBinError(7,0.6479568);
   VbbHcc_algo_H_pt_stack_8->SetBinError(8,0.6483739);
   VbbHcc_algo_H_pt_stack_8->SetBinError(9,0.3880698);
   VbbHcc_algo_H_pt_stack_8->SetBinError(10,0.4417392);
   VbbHcc_algo_H_pt_stack_8->SetBinError(11,0.2772597);
   VbbHcc_algo_H_pt_stack_8->SetBinError(17,0.1881969);
   VbbHcc_algo_H_pt_stack_8->SetEntries(966);

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
   VbbHcc_algo_H_pt_stack_9->SetBinContent(1,2.679262);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(2,12.73062);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(3,13.21782);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(4,8.943774);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(5,5.725737);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(6,3.451828);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(7,2.234413);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(8,1.390415);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(9,0.8427039);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(10,0.460856);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(11,0.238317);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(12,0.1234999);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(13,0.06897929);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(14,0.03541763);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(15,0.01198978);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(16,0.01005097);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(17,0.002890103);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(18,0.005933365);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(19,0.006071047);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(20,0.002990348);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(21,0.00618072);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(22,0.0025376);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(24,0.001659436);
   VbbHcc_algo_H_pt_stack_9->SetBinContent(34,0.001461468);
   VbbHcc_algo_H_pt_stack_9->SetBinError(1,0.063486);
   VbbHcc_algo_H_pt_stack_9->SetBinError(2,0.1393815);
   VbbHcc_algo_H_pt_stack_9->SetBinError(3,0.1421426);
   VbbHcc_algo_H_pt_stack_9->SetBinError(4,0.1169343);
   VbbHcc_algo_H_pt_stack_9->SetBinError(5,0.09336952);
   VbbHcc_algo_H_pt_stack_9->SetBinError(6,0.07343912);
   VbbHcc_algo_H_pt_stack_9->SetBinError(7,0.05833528);
   VbbHcc_algo_H_pt_stack_9->SetBinError(8,0.04647525);
   VbbHcc_algo_H_pt_stack_9->SetBinError(9,0.03590581);
   VbbHcc_algo_H_pt_stack_9->SetBinError(10,0.0265058);
   VbbHcc_algo_H_pt_stack_9->SetBinError(11,0.0192424);
   VbbHcc_algo_H_pt_stack_9->SetBinError(12,0.01345818);
   VbbHcc_algo_H_pt_stack_9->SetBinError(13,0.01005961);
   VbbHcc_algo_H_pt_stack_9->SetBinError(14,0.007244628);
   VbbHcc_algo_H_pt_stack_9->SetBinError(15,0.004248175);
   VbbHcc_algo_H_pt_stack_9->SetBinError(16,0.003919425);
   VbbHcc_algo_H_pt_stack_9->SetBinError(17,0.002043614);
   VbbHcc_algo_H_pt_stack_9->SetBinError(18,0.002970095);
   VbbHcc_algo_H_pt_stack_9->SetBinError(19,0.003036434);
   VbbHcc_algo_H_pt_stack_9->SetBinError(20,0.002115049);
   VbbHcc_algo_H_pt_stack_9->SetBinError(21,0.003098792);
   VbbHcc_algo_H_pt_stack_9->SetBinError(22,0.001838422);
   VbbHcc_algo_H_pt_stack_9->SetBinError(24,0.001659436);
   VbbHcc_algo_H_pt_stack_9->SetBinError(34,0.001461468);
   VbbHcc_algo_H_pt_stack_9->SetEntries(37196);

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
   VbbHcc_algo_H_pt_stack_10->SetBinContent(1,0.3488066);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(2,1.806756);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(3,3.696229);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(4,3.487768);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(5,2.138082);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(6,1.287006);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(7,0.7205987);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(8,0.4510668);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(9,0.2795099);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(10,0.1761641);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(11,0.1087308);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(12,0.08167998);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(13,0.04766881);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(14,0.03622699);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(15,0.02888569);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(16,0.01844225);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(17,0.01573404);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(18,0.009350489);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(19,0.009088367);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(20,0.008429133);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(21,0.00234193);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(22,0.006005227);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(23,0.002246057);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(24,0.001628601);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(25,0.0008626936);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(26,0.001128764);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(27,0.002222308);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(28,0.0008214654);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(29,0.001544048);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(30,0.0003763086);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(31,0.0007644385);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(32,0.0003885046);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(34,0.0007671183);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(35,0.000388509);
   VbbHcc_algo_H_pt_stack_10->SetBinContent(41,0.0003762123);
   VbbHcc_algo_H_pt_stack_10->SetBinError(1,0.01158023);
   VbbHcc_algo_H_pt_stack_10->SetBinError(2,0.02636964);
   VbbHcc_algo_H_pt_stack_10->SetBinError(3,0.03767988);
   VbbHcc_algo_H_pt_stack_10->SetBinError(4,0.03660847);
   VbbHcc_algo_H_pt_stack_10->SetBinError(5,0.02861041);
   VbbHcc_algo_H_pt_stack_10->SetBinError(6,0.02215636);
   VbbHcc_algo_H_pt_stack_10->SetBinError(7,0.01657816);
   VbbHcc_algo_H_pt_stack_10->SetBinError(8,0.01310488);
   VbbHcc_algo_H_pt_stack_10->SetBinError(9,0.01029872);
   VbbHcc_algo_H_pt_stack_10->SetBinError(10,0.008200582);
   VbbHcc_algo_H_pt_stack_10->SetBinError(11,0.006436114);
   VbbHcc_algo_H_pt_stack_10->SetBinError(12,0.005611928);
   VbbHcc_algo_H_pt_stack_10->SetBinError(13,0.004277591);
   VbbHcc_algo_H_pt_stack_10->SetBinError(14,0.003723217);
   VbbHcc_algo_H_pt_stack_10->SetBinError(15,0.00331854);
   VbbHcc_algo_H_pt_stack_10->SetBinError(16,0.002651485);
   VbbHcc_algo_H_pt_stack_10->SetBinError(17,0.002442299);
   VbbHcc_algo_H_pt_stack_10->SetBinError(18,0.001875139);
   VbbHcc_algo_H_pt_stack_10->SetBinError(19,0.00185413);
   VbbHcc_algo_H_pt_stack_10->SetBinError(20,0.001842409);
   VbbHcc_algo_H_pt_stack_10->SetBinError(21,0.0009578959);
   VbbHcc_algo_H_pt_stack_10->SetBinError(22,0.001512873);
   VbbHcc_algo_H_pt_stack_10->SetBinError(23,0.0009174977);
   VbbHcc_algo_H_pt_stack_10->SetBinError(24,0.0007880454);
   VbbHcc_algo_H_pt_stack_10->SetBinError(25,0.0006100185);
   VbbHcc_algo_H_pt_stack_10->SetBinError(26,0.0006549928);
   VbbHcc_algo_H_pt_stack_10->SetBinError(27,0.0009128523);
   VbbHcc_algo_H_pt_stack_10->SetBinError(28,0.0005814629);
   VbbHcc_algo_H_pt_stack_10->SetBinError(29,0.000773558);
   VbbHcc_algo_H_pt_stack_10->SetBinError(30,0.0003763086);
   VbbHcc_algo_H_pt_stack_10->SetBinError(31,0.0005405555);
   VbbHcc_algo_H_pt_stack_10->SetBinError(32,0.0003885046);
   VbbHcc_algo_H_pt_stack_10->SetBinError(34,0.0005425694);
   VbbHcc_algo_H_pt_stack_10->SetBinError(35,0.000388509);
   VbbHcc_algo_H_pt_stack_10->SetBinError(41,0.0003762123);
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
   VbbHcc_algo_H_pt_stack_11->SetBinContent(1,0.08322691);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(2,0.4284021);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(3,0.4874584);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(4,0.2658773);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(5,0.08681188);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(6,0.04954233);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(7,0.03141325);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(8,0.02748765);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(9,0.01738539);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(10,0.01420912);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(11,0.001577717);
   VbbHcc_algo_H_pt_stack_11->SetBinContent(14,0.001563217);
   VbbHcc_algo_H_pt_stack_11->SetBinError(1,0.01139186);
   VbbHcc_algo_H_pt_stack_11->SetBinError(2,0.02593863);
   VbbHcc_algo_H_pt_stack_11->SetBinError(3,0.02788143);
   VbbHcc_algo_H_pt_stack_11->SetBinError(4,0.02033476);
   VbbHcc_algo_H_pt_stack_11->SetBinError(5,0.01170231);
   VbbHcc_algo_H_pt_stack_11->SetBinError(6,0.008753506);
   VbbHcc_algo_H_pt_stack_11->SetBinError(7,0.006856582);
   VbbHcc_algo_H_pt_stack_11->SetBinError(8,0.006530807);
   VbbHcc_algo_H_pt_stack_11->SetBinError(9,0.005246142);
   VbbHcc_algo_H_pt_stack_11->SetBinError(10,0.004742148);
   VbbHcc_algo_H_pt_stack_11->SetBinError(11,0.001577717);
   VbbHcc_algo_H_pt_stack_11->SetBinError(14,0.001563217);
   VbbHcc_algo_H_pt_stack_11->SetEntries(1085);

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
   VbbHcc_algo_H_pt_stack_12->SetBinContent(1,220.0717);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(2,1193.313);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(3,2716.47);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(4,2195.148);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(5,1001.423);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(6,486.0627);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(7,286.8714);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(8,138.7296);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(9,139.289);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(10,77.47963);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(11,50.16061);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(12,16.60669);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(13,16.65442);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(14,12.22434);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(15,4.060957);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(17,4.381892);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(18,4.0777);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(20,8.563455);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(22,2.34131);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(23,4.159671);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(24,3.69994);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(25,4.284517);
   VbbHcc_algo_H_pt_stack_12->SetBinContent(27,4.381892);
   VbbHcc_algo_H_pt_stack_12->SetBinError(1,29.97336);
   VbbHcc_algo_H_pt_stack_12->SetBinError(2,69.69828);
   VbbHcc_algo_H_pt_stack_12->SetBinError(3,105.1626);
   VbbHcc_algo_H_pt_stack_12->SetBinError(4,94.42433);
   VbbHcc_algo_H_pt_stack_12->SetBinError(5,63.53265);
   VbbHcc_algo_H_pt_stack_12->SetBinError(6,43.68929);
   VbbHcc_algo_H_pt_stack_12->SetBinError(7,33.65069);
   VbbHcc_algo_H_pt_stack_12->SetBinError(8,23.66891);
   VbbHcc_algo_H_pt_stack_12->SetBinError(9,23.77346);
   VbbHcc_algo_H_pt_stack_12->SetBinError(10,17.49638);
   VbbHcc_algo_H_pt_stack_12->SetBinError(11,14.01442);
   VbbHcc_algo_H_pt_stack_12->SetBinError(12,8.324484);
   VbbHcc_algo_H_pt_stack_12->SetBinError(13,8.123222);
   VbbHcc_algo_H_pt_stack_12->SetBinError(14,7.09432);
   VbbHcc_algo_H_pt_stack_12->SetBinError(15,4.060957);
   VbbHcc_algo_H_pt_stack_12->SetBinError(17,4.381892);
   VbbHcc_algo_H_pt_stack_12->SetBinError(18,4.0777);
   VbbHcc_algo_H_pt_stack_12->SetBinError(20,6.066439);
   VbbHcc_algo_H_pt_stack_12->SetBinError(22,2.34131);
   VbbHcc_algo_H_pt_stack_12->SetBinError(23,4.159671);
   VbbHcc_algo_H_pt_stack_12->SetBinError(24,3.69994);
   VbbHcc_algo_H_pt_stack_12->SetBinError(25,4.284517);
   VbbHcc_algo_H_pt_stack_12->SetBinError(27,4.381892);
   VbbHcc_algo_H_pt_stack_12->SetEntries(2298);

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
   
   TH1D *VbbHcc_algo_H_pt__25 = new TH1D("VbbHcc_algo_H_pt__25","",40,0,2000);
   VbbHcc_algo_H_pt__25->SetBinContent(1,5297);
   VbbHcc_algo_H_pt__25->SetBinContent(2,22216);
   VbbHcc_algo_H_pt__25->SetBinContent(3,42814);
   VbbHcc_algo_H_pt__25->SetBinContent(4,52100);
   VbbHcc_algo_H_pt__25->SetBinContent(5,42487);
   VbbHcc_algo_H_pt__25->SetBinContent(6,36988);
   VbbHcc_algo_H_pt__25->SetBinContent(7,35685);
   VbbHcc_algo_H_pt__25->SetBinContent(8,28724);
   VbbHcc_algo_H_pt__25->SetBinContent(9,18652);
   VbbHcc_algo_H_pt__25->SetBinContent(10,11114);
   VbbHcc_algo_H_pt__25->SetBinContent(11,6887);
   VbbHcc_algo_H_pt__25->SetBinContent(12,4227);
   VbbHcc_algo_H_pt__25->SetBinContent(13,2692);
   VbbHcc_algo_H_pt__25->SetBinContent(14,1739);
   VbbHcc_algo_H_pt__25->SetBinContent(15,1173);
   VbbHcc_algo_H_pt__25->SetBinContent(16,716);
   VbbHcc_algo_H_pt__25->SetBinContent(17,544);
   VbbHcc_algo_H_pt__25->SetBinContent(18,339);
   VbbHcc_algo_H_pt__25->SetBinContent(19,239);
   VbbHcc_algo_H_pt__25->SetBinContent(20,204);
   VbbHcc_algo_H_pt__25->SetBinContent(21,121);
   VbbHcc_algo_H_pt__25->SetBinContent(22,102);
   VbbHcc_algo_H_pt__25->SetBinContent(23,91);
   VbbHcc_algo_H_pt__25->SetBinContent(24,53);
   VbbHcc_algo_H_pt__25->SetBinContent(25,37);
   VbbHcc_algo_H_pt__25->SetBinContent(26,35);
   VbbHcc_algo_H_pt__25->SetBinContent(27,26);
   VbbHcc_algo_H_pt__25->SetBinContent(28,21);
   VbbHcc_algo_H_pt__25->SetBinContent(29,16);
   VbbHcc_algo_H_pt__25->SetBinContent(30,6);
   VbbHcc_algo_H_pt__25->SetBinContent(31,4);
   VbbHcc_algo_H_pt__25->SetBinContent(32,6);
   VbbHcc_algo_H_pt__25->SetBinContent(33,7);
   VbbHcc_algo_H_pt__25->SetBinContent(34,2);
   VbbHcc_algo_H_pt__25->SetBinContent(35,5);
   VbbHcc_algo_H_pt__25->SetBinContent(36,1);
   VbbHcc_algo_H_pt__25->SetBinContent(37,2);
   VbbHcc_algo_H_pt__25->SetBinContent(38,3);
   VbbHcc_algo_H_pt__25->SetBinContent(41,1);
   VbbHcc_algo_H_pt__25->SetEntries(315376);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt__25->SetLineColor(ci);
   VbbHcc_algo_H_pt__25->SetLineWidth(2);
   VbbHcc_algo_H_pt__25->SetMarkerStyle(20);
   VbbHcc_algo_H_pt__25->SetMarkerSize(1.2);
   VbbHcc_algo_H_pt__25->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt__25->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt__25->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt__25->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt__25->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt__25->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt__25->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt__25->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt__25->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt__25->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt__25->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt__25->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt__25->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt__25->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt__25->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_pt_fx1025[40] = {
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
   Double_t Graph_from_VbbHcc_algo_H_pt_fy1025[40] = {
   232550.8,
   911105.8,
   775190.3,
   90470.86,
   11596.49,
   4798.124,
   2433.885,
   1342.254,
   845.2592,
   506.1704,
   344.7727,
   201.8352,
   142.8139,
   102.4018,
   65.4886,
   39.1799,
   35.76842,
   26.74258,
   13.40472,
   19.82952,
   9.58256,
   7.556175,
   8.495352,
   6.868854,
   6.811215,
   1.23791,
   5.95139,
   1.492768,
   0.9248935,
   1.115377,
   0.2722408,
   0.3164513,
   0.07929543,
   0.1422886,
   0.000388509,
   0.1008527,
   0,
   0.1162843,
   0,
   0.07901158};
   Double_t Graph_from_VbbHcc_algo_H_pt_fex1025[40] = {
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
   Double_t Graph_from_VbbHcc_algo_H_pt_fey1025[40] = {
   17651.94,
   34714.75,
   31688.04,
   9711.204,
   1359.634,
   49.11917,
   36.31838,
   25.57157,
   24.95523,
   18.4257,
   14.86361,
   9.185316,
   8.731244,
   7.643721,
   4.75462,
   1.823264,
   4.713621,
   4.342797,
   1.105475,
   6.144466,
   0.9602299,
   2.447661,
   4.201396,
   3.738691,
   4.320839,
   0.2830452,
   4.407496,
   0.4790571,
   0.2452626,
   0.4014627,
   0.1368481,
   0.1433192,
   0.07929543,
   0.09905055,
   0.000388509,
   0.07148917,
   0,
   0.08396866,
   0,
   0.07901158};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_algo_H_pt_fx1025,Graph_from_VbbHcc_algo_H_pt_fy1025,Graph_from_VbbHcc_algo_H_pt_fex1025,Graph_from_VbbHcc_algo_H_pt_fey1025);
   gre->SetName("Graph_from_VbbHcc_algo_H_pt");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_pt1025 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_pt1025","",100,0,2200);
   Graph_Graph_from_VbbHcc_algo_H_pt1025->SetMinimum(-94582.06);
   Graph_Graph_from_VbbHcc_algo_H_pt1025->SetMaximum(1040403);
   Graph_Graph_from_VbbHcc_algo_H_pt1025->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_pt1025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_pt1025->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_pt1025->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_pt1025->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_pt1025->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_pt1025->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_pt1025->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_pt1025->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_pt1025->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_pt1025->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_pt1025->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_pt1025->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_pt1025->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_pt1025->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_pt1025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_pt1025);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_pt","Data (JetHT, 2016)","p");
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_pt_VbbHcc_16->cd();
  
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
   
   TH1D *data_mc_ratio__26 = new TH1D("data_mc_ratio__26","",40,0,2000);
   data_mc_ratio__26->SetBinContent(1,0.02277782);
   data_mc_ratio__26->SetBinContent(2,0.02438356);
   data_mc_ratio__26->SetBinContent(3,0.05523031);
   data_mc_ratio__26->SetBinContent(4,0.575876);
   data_mc_ratio__26->SetBinContent(5,3.663782);
   data_mc_ratio__26->SetBinContent(6,7.708846);
   data_mc_ratio__26->SetBinContent(7,14.66174);
   data_mc_ratio__26->SetBinContent(8,21.39983);
   data_mc_ratio__26->SetBinContent(9,22.0666);
   data_mc_ratio__26->SetBinContent(10,21.95703);
   data_mc_ratio__26->SetBinContent(11,19.97548);
   data_mc_ratio__26->SetBinContent(12,20.94283);
   data_mc_ratio__26->SetBinContent(13,18.8497);
   data_mc_ratio__26->SetBinContent(14,16.98212);
   data_mc_ratio__26->SetBinContent(15,17.91151);
   data_mc_ratio__26->SetBinContent(16,18.27468);
   data_mc_ratio__26->SetBinContent(17,15.20895);
   data_mc_ratio__26->SetBinContent(18,12.67641);
   data_mc_ratio__26->SetBinContent(19,17.82954);
   data_mc_ratio__26->SetBinContent(20,10.28769);
   data_mc_ratio__26->SetBinContent(21,12.62711);
   data_mc_ratio__26->SetBinContent(22,13.49889);
   data_mc_ratio__26->SetBinContent(23,10.71174);
   data_mc_ratio__26->SetBinContent(24,7.715989);
   data_mc_ratio__26->SetBinContent(25,5.432218);
   data_mc_ratio__26->SetBinContent(26,28.27347);
   data_mc_ratio__26->SetBinContent(27,4.368727);
   data_mc_ratio__26->SetBinContent(28,14.06783);
   data_mc_ratio__26->SetBinContent(29,17.29929);
   data_mc_ratio__26->SetBinContent(30,5.379346);
   data_mc_ratio__26->SetBinContent(31,14.69287);
   data_mc_ratio__26->SetBinContent(32,18.96026);
   data_mc_ratio__26->SetBinContent(33,88.27748);
   data_mc_ratio__26->SetBinContent(34,14.05594);
   data_mc_ratio__26->SetBinContent(35,12869.71);
   data_mc_ratio__26->SetBinContent(36,9.915452);
   data_mc_ratio__26->SetBinContent(38,25.79884);
   data_mc_ratio__26->SetBinContent(41,14.53067);
   data_mc_ratio__26->SetBinError(1,0.000312966);
   data_mc_ratio__26->SetBinError(2,0.0001635928);
   data_mc_ratio__26->SetBinError(3,0.0002669221);
   data_mc_ratio__26->SetBinError(4,0.002522959);
   data_mc_ratio__26->SetBinError(5,0.01777467);
   data_mc_ratio__26->SetBinError(6,0.04008288);
   data_mc_ratio__26->SetBinError(7,0.07761449);
   data_mc_ratio__26->SetBinError(8,0.1262664);
   data_mc_ratio__26->SetBinError(9,0.1615745);
   data_mc_ratio__26->SetBinError(10,0.2082756);
   data_mc_ratio__26->SetBinError(11,0.2407034);
   data_mc_ratio__26->SetBinError(12,0.3221212);
   data_mc_ratio__26->SetBinError(13,0.3633013);
   data_mc_ratio__26->SetBinError(14,0.4072323);
   data_mc_ratio__26->SetBinError(15,0.5229778);
   data_mc_ratio__26->SetBinError(16,0.6829568);
   data_mc_ratio__26->SetBinError(17,0.6520781);
   data_mc_ratio__26->SetBinError(18,0.6884882);
   data_mc_ratio__26->SetBinError(19,1.153297);
   data_mc_ratio__26->SetBinError(20,0.7202825);
   data_mc_ratio__26->SetBinError(21,1.147919);
   data_mc_ratio__26->SetBinError(22,1.33659);
   data_mc_ratio__26->SetBinError(23,1.122895);
   data_mc_ratio__26->SetBinError(24,1.059873);
   data_mc_ratio__26->SetBinError(25,0.8930511);
   data_mc_ratio__26->SetBinError(26,4.779088);
   data_mc_ratio__26->SetBinError(27,0.8567779);
   data_mc_ratio__26->SetBinError(28,3.069852);
   data_mc_ratio__26->SetBinError(29,4.324822);
   data_mc_ratio__26->SetBinError(30,2.196109);
   data_mc_ratio__26->SetBinError(31,7.346437);
   data_mc_ratio__26->SetBinError(32,7.740494);
   data_mc_ratio__26->SetBinError(33,33.36575);
   data_mc_ratio__26->SetBinError(34,9.939052);
   data_mc_ratio__26->SetBinError(35,5755.511);
   data_mc_ratio__26->SetBinError(36,9.915452);
   data_mc_ratio__26->SetBinError(38,14.89497);
   data_mc_ratio__26->SetBinError(41,20.49354);
   data_mc_ratio__26->SetMinimum(0.4);
   data_mc_ratio__26->SetMaximum(1.6);
   data_mc_ratio__26->SetEntries(0.9063253);
   data_mc_ratio__26->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__26->SetLineColor(ci);
   data_mc_ratio__26->SetLineWidth(2);
   data_mc_ratio__26->SetMarkerStyle(20);
   data_mc_ratio__26->SetMarkerSize(1.2);
   data_mc_ratio__26->GetXaxis()->SetTitle("H p_{T} [GeV]");
   data_mc_ratio__26->GetXaxis()->SetRange(7,30);
   data_mc_ratio__26->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__26->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__26->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__26->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__26->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__26->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__26->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__26->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__26->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__26->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__26->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__26->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__26->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__26->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__26->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__26->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__26->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1026[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1026[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1026[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1026[40] = {
   0.07590575,
   0.03810178,
   0.04087775,
   0.1073407,
   0.1172453,
   0.01023716,
   0.01492198,
   0.01905123,
   0.02952376,
   0.03640217,
   0.04311132,
   0.045509,
   0.0611372,
   0.07464439,
   0.07260225,
   0.0465357,
   0.1317816,
   0.1623926,
   0.08246908,
   0.3098646,
   0.100206,
   0.3239286,
   0.4945523,
   0.5442962,
   0.6343713,
   0.2286477,
   0.7405826,
   0.3209187,
   0.2651792,
   0.3599345,
   0.5026729,
   0.4528949,
   1,
   0.6961244,
   1,
   0.7088475,
   0,
   0.7220981,
   0,
   1};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1026,Graph_from_mc_statistical_error_fy1026,Graph_from_mc_statistical_error_fex1026,Graph_from_mc_statistical_error_fey1026);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1026 = new TH1F("Graph_Graph_from_mc_statistical_error1026","",100,0,2200);
   Graph_Graph_from_mc_statistical_error1026->SetMinimum(-0.2);
   Graph_Graph_from_mc_statistical_error1026->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1026->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1026->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1026->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1026->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1026->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1026->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1026->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1026->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1026->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1026->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1026->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1026->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1026->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1026->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1026->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1026);
   
   gre->Draw("e2");
   TLine *line = new TLine(300,1,1500,1);
   line->Draw();
   bottomPad->Modified();
   H_pt_VbbHcc_16->cd();
   H_pt_VbbHcc_16->Modified();
   H_pt_VbbHcc_16->cd();
   H_pt_VbbHcc_16->SetSelected(H_pt_VbbHcc_16);
}
