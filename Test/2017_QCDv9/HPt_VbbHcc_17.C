void HPt_VbbHcc_17()
{
//=========Macro generated from canvas: HPt_VbbHcc_17/HPt_VbbHcc_17
//=========  (Tue Sep 20 10:39:22 2022) by ROOT version 6.14/09
   TCanvas *HPt_VbbHcc_17 = new TCanvas("HPt_VbbHcc_17", "HPt_VbbHcc_17",0,0,600,600);
   HPt_VbbHcc_17->SetHighLightColor(2);
   HPt_VbbHcc_17->Range(0,0,1,1);
   HPt_VbbHcc_17->SetFillColor(0);
   HPt_VbbHcc_17->SetFillStyle(4000);
   HPt_VbbHcc_17->SetBorderMode(0);
   HPt_VbbHcc_17->SetBorderSize(2);
   HPt_VbbHcc_17->SetFrameFillStyle(1000);
   HPt_VbbHcc_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(116.1295,-1094.586,1562.903,1093502);
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
   st->SetMaximum(937183);
   
   TH1F *st_stack_14 = new TH1F("st_stack_14","",40,0,2000);
   st_stack_14->SetMinimum(0.01);
   st_stack_14->SetMaximum(984042.1);
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
   
   
   TH1D *VbbHcc_HPt_stack_1 = new TH1D("VbbHcc_HPt_stack_1","",40,0,2000);
   VbbHcc_HPt_stack_1->SetBinContent(1,71056.47);
   VbbHcc_HPt_stack_1->SetBinContent(2,292758.1);
   VbbHcc_HPt_stack_1->SetBinContent(3,368474.3);
   VbbHcc_HPt_stack_1->SetBinContent(4,219510.9);
   VbbHcc_HPt_stack_1->SetBinContent(5,81984.34);
   VbbHcc_HPt_stack_1->SetBinContent(6,34635.03);
   VbbHcc_HPt_stack_1->SetBinContent(7,12229.22);
   VbbHcc_HPt_stack_1->SetBinContent(8,4868.543);
   VbbHcc_HPt_stack_1->SetBinContent(9,2325.345);
   VbbHcc_HPt_stack_1->SetBinContent(10,1236.564);
   VbbHcc_HPt_stack_1->SetBinContent(11,743.3171);
   VbbHcc_HPt_stack_1->SetBinContent(12,509.4489);
   VbbHcc_HPt_stack_1->SetBinContent(13,247.5542);
   VbbHcc_HPt_stack_1->SetBinContent(14,131.4222);
   VbbHcc_HPt_stack_1->SetBinContent(15,88.33917);
   VbbHcc_HPt_stack_1->SetBinContent(16,56.05393);
   VbbHcc_HPt_stack_1->SetBinContent(17,34.60273);
   VbbHcc_HPt_stack_1->SetBinContent(18,22.35541);
   VbbHcc_HPt_stack_1->SetBinContent(19,18.12367);
   VbbHcc_HPt_stack_1->SetBinContent(20,13.86295);
   VbbHcc_HPt_stack_1->SetBinContent(21,5.520367);
   VbbHcc_HPt_stack_1->SetBinContent(22,4.884271);
   VbbHcc_HPt_stack_1->SetBinContent(23,3.60262);
   VbbHcc_HPt_stack_1->SetBinContent(24,2.053668);
   VbbHcc_HPt_stack_1->SetBinContent(25,2.050425);
   VbbHcc_HPt_stack_1->SetBinContent(26,0.5417465);
   VbbHcc_HPt_stack_1->SetBinContent(27,0.7201394);
   VbbHcc_HPt_stack_1->SetBinContent(28,0.7240572);
   VbbHcc_HPt_stack_1->SetBinContent(30,0.574216);
   VbbHcc_HPt_stack_1->SetBinContent(31,0.2038865);
   VbbHcc_HPt_stack_1->SetBinContent(33,0.1688031);
   VbbHcc_HPt_stack_1->SetBinError(1,4189.605);
   VbbHcc_HPt_stack_1->SetBinError(2,8615.842);
   VbbHcc_HPt_stack_1->SetBinError(3,9592.149);
   VbbHcc_HPt_stack_1->SetBinError(4,6956.829);
   VbbHcc_HPt_stack_1->SetBinError(5,3339.572);
   VbbHcc_HPt_stack_1->SetBinError(6,1549.039);
   VbbHcc_HPt_stack_1->SetBinError(7,530.5435);
   VbbHcc_HPt_stack_1->SetBinError(8,215.6838);
   VbbHcc_HPt_stack_1->SetBinError(9,122.5519);
   VbbHcc_HPt_stack_1->SetBinError(10,77.02123);
   VbbHcc_HPt_stack_1->SetBinError(11,53.9372);
   VbbHcc_HPt_stack_1->SetBinError(12,43.11403);
   VbbHcc_HPt_stack_1->SetBinError(13,27.25726);
   VbbHcc_HPt_stack_1->SetBinError(14,17.45473);
   VbbHcc_HPt_stack_1->SetBinError(15,11.31862);
   VbbHcc_HPt_stack_1->SetBinError(16,8.321931);
   VbbHcc_HPt_stack_1->SetBinError(17,3.694448);
   VbbHcc_HPt_stack_1->SetBinError(18,2.786224);
   VbbHcc_HPt_stack_1->SetBinError(19,2.534572);
   VbbHcc_HPt_stack_1->SetBinError(20,2.08406);
   VbbHcc_HPt_stack_1->SetBinError(21,1.054495);
   VbbHcc_HPt_stack_1->SetBinError(22,1.025278);
   VbbHcc_HPt_stack_1->SetBinError(23,0.8278144);
   VbbHcc_HPt_stack_1->SetBinError(24,0.6961116);
   VbbHcc_HPt_stack_1->SetBinError(25,0.6189839);
   VbbHcc_HPt_stack_1->SetBinError(26,0.3127797);
   VbbHcc_HPt_stack_1->SetBinError(27,0.3600781);
   VbbHcc_HPt_stack_1->SetBinError(28,0.3620325);
   VbbHcc_HPt_stack_1->SetBinError(30,0.331702);
   VbbHcc_HPt_stack_1->SetBinError(31,0.2038865);
   VbbHcc_HPt_stack_1->SetBinError(33,0.1688031);
   VbbHcc_HPt_stack_1->SetEntries(21518);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_HPt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_1->SetLineColor(ci);
   VbbHcc_HPt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_1,"");
   
   TH1D *VbbHcc_HPt_stack_2 = new TH1D("VbbHcc_HPt_stack_2","",40,0,2000);
   VbbHcc_HPt_stack_2->SetBinContent(1,1096.429);
   VbbHcc_HPt_stack_2->SetBinContent(2,3408.308);
   VbbHcc_HPt_stack_2->SetBinContent(3,2809.628);
   VbbHcc_HPt_stack_2->SetBinContent(4,1344.448);
   VbbHcc_HPt_stack_2->SetBinContent(5,670.4549);
   VbbHcc_HPt_stack_2->SetBinContent(6,333.7274);
   VbbHcc_HPt_stack_2->SetBinContent(7,201.0926);
   VbbHcc_HPt_stack_2->SetBinContent(8,108.4343);
   VbbHcc_HPt_stack_2->SetBinContent(9,76.79437);
   VbbHcc_HPt_stack_2->SetBinContent(10,50.79512);
   VbbHcc_HPt_stack_2->SetBinContent(11,36.11309);
   VbbHcc_HPt_stack_2->SetBinContent(12,23.28933);
   VbbHcc_HPt_stack_2->SetBinContent(13,14.93831);
   VbbHcc_HPt_stack_2->SetBinContent(14,9.279181);
   VbbHcc_HPt_stack_2->SetBinContent(15,5.711227);
   VbbHcc_HPt_stack_2->SetBinContent(16,3.659816);
   VbbHcc_HPt_stack_2->SetBinContent(17,1.54585);
   VbbHcc_HPt_stack_2->SetBinContent(18,1.381346);
   VbbHcc_HPt_stack_2->SetBinContent(19,1.468903);
   VbbHcc_HPt_stack_2->SetBinContent(20,1.368855);
   VbbHcc_HPt_stack_2->SetBinContent(21,0.00279575);
   VbbHcc_HPt_stack_2->SetBinContent(22,0.8849203);
   VbbHcc_HPt_stack_2->SetBinContent(23,1.000742);
   VbbHcc_HPt_stack_2->SetBinContent(24,0.2507102);
   VbbHcc_HPt_stack_2->SetBinContent(26,0.3045853);
   VbbHcc_HPt_stack_2->SetBinContent(27,0.3149849);
   VbbHcc_HPt_stack_2->SetBinContent(28,0.04378173);
   VbbHcc_HPt_stack_2->SetBinError(1,14.23569);
   VbbHcc_HPt_stack_2->SetBinError(2,24.68971);
   VbbHcc_HPt_stack_2->SetBinError(3,22.90957);
   VbbHcc_HPt_stack_2->SetBinError(4,16.25556);
   VbbHcc_HPt_stack_2->SetBinError(5,11.71598);
   VbbHcc_HPt_stack_2->SetBinError(6,8.444063);
   VbbHcc_HPt_stack_2->SetBinError(7,6.709503);
   VbbHcc_HPt_stack_2->SetBinError(8,4.914978);
   VbbHcc_HPt_stack_2->SetBinError(9,4.408033);
   VbbHcc_HPt_stack_2->SetBinError(10,3.52411);
   VbbHcc_HPt_stack_2->SetBinError(11,3.011587);
   VbbHcc_HPt_stack_2->SetBinError(12,2.47895);
   VbbHcc_HPt_stack_2->SetBinError(13,1.987438);
   VbbHcc_HPt_stack_2->SetBinError(14,1.572994);
   VbbHcc_HPt_stack_2->SetBinError(15,1.228989);
   VbbHcc_HPt_stack_2->SetBinError(16,0.9635608);
   VbbHcc_HPt_stack_2->SetBinError(17,0.6289214);
   VbbHcc_HPt_stack_2->SetBinError(18,0.6413455);
   VbbHcc_HPt_stack_2->SetBinError(19,0.617781);
   VbbHcc_HPt_stack_2->SetBinError(20,0.6130544);
   VbbHcc_HPt_stack_2->SetBinError(21,0.09389159);
   VbbHcc_HPt_stack_2->SetBinError(22,0.5111885);
   VbbHcc_HPt_stack_2->SetBinError(23,0.550227);
   VbbHcc_HPt_stack_2->SetBinError(24,0.3136713);
   VbbHcc_HPt_stack_2->SetBinError(26,0.3045853);
   VbbHcc_HPt_stack_2->SetBinError(27,0.3708766);
   VbbHcc_HPt_stack_2->SetBinError(28,0.04378173);
   VbbHcc_HPt_stack_2->SetEntries(128128);

   ci = TColor::GetColor("#660066");
   VbbHcc_HPt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_2->SetLineColor(ci);
   VbbHcc_HPt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_2,"");
   
   TH1D *VbbHcc_HPt_stack_3 = new TH1D("VbbHcc_HPt_stack_3","",40,0,2000);
   VbbHcc_HPt_stack_3->SetBinContent(1,21494.24);
   VbbHcc_HPt_stack_3->SetBinContent(2,61394.81);
   VbbHcc_HPt_stack_3->SetBinContent(3,47870.81);
   VbbHcc_HPt_stack_3->SetBinContent(4,18724.02);
   VbbHcc_HPt_stack_3->SetBinContent(5,8036.995);
   VbbHcc_HPt_stack_3->SetBinContent(6,3984.833);
   VbbHcc_HPt_stack_3->SetBinContent(7,2155.493);
   VbbHcc_HPt_stack_3->SetBinContent(8,1231.286);
   VbbHcc_HPt_stack_3->SetBinContent(9,718.0944);
   VbbHcc_HPt_stack_3->SetBinContent(10,450.7932);
   VbbHcc_HPt_stack_3->SetBinContent(11,285.6401);
   VbbHcc_HPt_stack_3->SetBinContent(12,175.1934);
   VbbHcc_HPt_stack_3->SetBinContent(13,115.4975);
   VbbHcc_HPt_stack_3->SetBinContent(14,76.63909);
   VbbHcc_HPt_stack_3->SetBinContent(15,51.34314);
   VbbHcc_HPt_stack_3->SetBinContent(16,35.54721);
   VbbHcc_HPt_stack_3->SetBinContent(17,23.88287);
   VbbHcc_HPt_stack_3->SetBinContent(18,14.72071);
   VbbHcc_HPt_stack_3->SetBinContent(19,11.6407);
   VbbHcc_HPt_stack_3->SetBinContent(20,8.1531);
   VbbHcc_HPt_stack_3->SetBinContent(21,5.080403);
   VbbHcc_HPt_stack_3->SetBinContent(22,3.203983);
   VbbHcc_HPt_stack_3->SetBinContent(23,2.032956);
   VbbHcc_HPt_stack_3->SetBinContent(24,2.410845);
   VbbHcc_HPt_stack_3->SetBinContent(25,1.463965);
   VbbHcc_HPt_stack_3->SetBinContent(26,0.7685929);
   VbbHcc_HPt_stack_3->SetBinContent(27,0.653425);
   VbbHcc_HPt_stack_3->SetBinContent(28,0.4555043);
   VbbHcc_HPt_stack_3->SetBinContent(29,0.4469192);
   VbbHcc_HPt_stack_3->SetBinContent(31,0.1760025);
   VbbHcc_HPt_stack_3->SetBinContent(33,0.05636825);
   VbbHcc_HPt_stack_3->SetBinError(1,39.86259);
   VbbHcc_HPt_stack_3->SetBinError(2,67.70461);
   VbbHcc_HPt_stack_3->SetBinError(3,59.97915);
   VbbHcc_HPt_stack_3->SetBinError(4,37.16264);
   VbbHcc_HPt_stack_3->SetBinError(5,24.16356);
   VbbHcc_HPt_stack_3->SetBinError(6,17.0331);
   VbbHcc_HPt_stack_3->SetBinError(7,12.52192);
   VbbHcc_HPt_stack_3->SetBinError(8,9.501862);
   VbbHcc_HPt_stack_3->SetBinError(9,7.266796);
   VbbHcc_HPt_stack_3->SetBinError(10,5.790793);
   VbbHcc_HPt_stack_3->SetBinError(11,4.613337);
   VbbHcc_HPt_stack_3->SetBinError(12,3.631957);
   VbbHcc_HPt_stack_3->SetBinError(13,2.937109);
   VbbHcc_HPt_stack_3->SetBinError(14,2.403903);
   VbbHcc_HPt_stack_3->SetBinError(15,1.966129);
   VbbHcc_HPt_stack_3->SetBinError(16,1.653043);
   VbbHcc_HPt_stack_3->SetBinError(17,1.33352);
   VbbHcc_HPt_stack_3->SetBinError(18,1.044357);
   VbbHcc_HPt_stack_3->SetBinError(19,0.9465825);
   VbbHcc_HPt_stack_3->SetBinError(20,0.7862232);
   VbbHcc_HPt_stack_3->SetBinError(21,0.617105);
   VbbHcc_HPt_stack_3->SetBinError(22,0.4818022);
   VbbHcc_HPt_stack_3->SetBinError(23,0.3956157);
   VbbHcc_HPt_stack_3->SetBinError(24,0.4405963);
   VbbHcc_HPt_stack_3->SetBinError(25,0.3351716);
   VbbHcc_HPt_stack_3->SetBinError(26,0.2492446);
   VbbHcc_HPt_stack_3->SetBinError(27,0.2562601);
   VbbHcc_HPt_stack_3->SetBinError(28,0.1907871);
   VbbHcc_HPt_stack_3->SetBinError(29,0.182783);
   VbbHcc_HPt_stack_3->SetBinError(31,0.1244581);
   VbbHcc_HPt_stack_3->SetBinError(33,0.05636825);
   VbbHcc_HPt_stack_3->SetEntries(2474398);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_HPt_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_3->SetLineColor(ci);
   VbbHcc_HPt_stack_3->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_3,"");
   
   TH1D *VbbHcc_HPt_stack_4 = new TH1D("VbbHcc_HPt_stack_4","",40,0,2000);
   VbbHcc_HPt_stack_4->SetBinContent(1,395.1504);
   VbbHcc_HPt_stack_4->SetBinContent(2,1465.8);
   VbbHcc_HPt_stack_4->SetBinContent(3,1961.642);
   VbbHcc_HPt_stack_4->SetBinContent(4,1746.68);
   VbbHcc_HPt_stack_4->SetBinContent(5,1040.45);
   VbbHcc_HPt_stack_4->SetBinContent(6,541.5696);
   VbbHcc_HPt_stack_4->SetBinContent(7,302.3544);
   VbbHcc_HPt_stack_4->SetBinContent(8,177.7647);
   VbbHcc_HPt_stack_4->SetBinContent(9,107.6613);
   VbbHcc_HPt_stack_4->SetBinContent(10,59.0973);
   VbbHcc_HPt_stack_4->SetBinContent(11,35.60936);
   VbbHcc_HPt_stack_4->SetBinContent(12,23.38466);
   VbbHcc_HPt_stack_4->SetBinContent(13,14.36986);
   VbbHcc_HPt_stack_4->SetBinContent(14,9.270741);
   VbbHcc_HPt_stack_4->SetBinContent(15,7.589767);
   VbbHcc_HPt_stack_4->SetBinContent(16,4.474197);
   VbbHcc_HPt_stack_4->SetBinContent(17,3.356728);
   VbbHcc_HPt_stack_4->SetBinContent(18,3.003954);
   VbbHcc_HPt_stack_4->SetBinContent(19,1.623506);
   VbbHcc_HPt_stack_4->SetBinContent(20,1.369373);
   VbbHcc_HPt_stack_4->SetBinContent(21,0.6075105);
   VbbHcc_HPt_stack_4->SetBinContent(22,0.4234238);
   VbbHcc_HPt_stack_4->SetBinContent(23,0.4808375);
   VbbHcc_HPt_stack_4->SetBinContent(24,0.3142098);
   VbbHcc_HPt_stack_4->SetBinContent(25,0.2015326);
   VbbHcc_HPt_stack_4->SetBinContent(26,0.09425397);
   VbbHcc_HPt_stack_4->SetBinContent(27,0.17369);
   VbbHcc_HPt_stack_4->SetBinContent(28,0.07712674);
   VbbHcc_HPt_stack_4->SetBinContent(29,0.3259808);
   VbbHcc_HPt_stack_4->SetBinContent(34,0.09695139);
   VbbHcc_HPt_stack_4->SetBinError(1,11.27656);
   VbbHcc_HPt_stack_4->SetBinError(2,22.06104);
   VbbHcc_HPt_stack_4->SetBinError(3,25.4955);
   VbbHcc_HPt_stack_4->SetBinError(4,23.31381);
   VbbHcc_HPt_stack_4->SetBinError(5,16.28754);
   VbbHcc_HPt_stack_4->SetBinError(6,9.50392);
   VbbHcc_HPt_stack_4->SetBinError(7,5.717311);
   VbbHcc_HPt_stack_4->SetBinError(8,3.887037);
   VbbHcc_HPt_stack_4->SetBinError(9,2.884261);
   VbbHcc_HPt_stack_4->SetBinError(10,2.115279);
   VbbHcc_HPt_stack_4->SetBinError(11,1.656683);
   VbbHcc_HPt_stack_4->SetBinError(12,1.338876);
   VbbHcc_HPt_stack_4->SetBinError(13,1.047404);
   VbbHcc_HPt_stack_4->SetBinError(14,0.8401535);
   VbbHcc_HPt_stack_4->SetBinError(15,0.7969794);
   VbbHcc_HPt_stack_4->SetBinError(16,0.599163);
   VbbHcc_HPt_stack_4->SetBinError(17,0.5104357);
   VbbHcc_HPt_stack_4->SetBinError(18,0.4839176);
   VbbHcc_HPt_stack_4->SetBinError(19,0.3445577);
   VbbHcc_HPt_stack_4->SetBinError(20,0.3313147);
   VbbHcc_HPt_stack_4->SetBinError(21,0.21699);
   VbbHcc_HPt_stack_4->SetBinError(22,0.1747958);
   VbbHcc_HPt_stack_4->SetBinError(23,0.1966089);
   VbbHcc_HPt_stack_4->SetBinError(24,0.1587972);
   VbbHcc_HPt_stack_4->SetBinError(25,0.1218615);
   VbbHcc_HPt_stack_4->SetBinError(26,0.06800169);
   VbbHcc_HPt_stack_4->SetBinError(27,0.1043125);
   VbbHcc_HPt_stack_4->SetBinError(28,0.07712674);
   VbbHcc_HPt_stack_4->SetBinError(29,0.1642272);
   VbbHcc_HPt_stack_4->SetBinError(34,0.09695139);
   VbbHcc_HPt_stack_4->SetEntries(45331);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_HPt_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_4->SetLineColor(ci);
   VbbHcc_HPt_stack_4->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_4,"");
   
   TH1D *VbbHcc_HPt_stack_5 = new TH1D("VbbHcc_HPt_stack_5","",40,0,2000);
   VbbHcc_HPt_stack_5->SetBinContent(1,104.7116);
   VbbHcc_HPt_stack_5->SetBinContent(2,324.393);
   VbbHcc_HPt_stack_5->SetBinContent(3,468.3943);
   VbbHcc_HPt_stack_5->SetBinContent(4,470.0289);
   VbbHcc_HPt_stack_5->SetBinContent(5,346.7281);
   VbbHcc_HPt_stack_5->SetBinContent(6,185.3564);
   VbbHcc_HPt_stack_5->SetBinContent(7,119.022);
   VbbHcc_HPt_stack_5->SetBinContent(8,75.33557);
   VbbHcc_HPt_stack_5->SetBinContent(9,48.37775);
   VbbHcc_HPt_stack_5->SetBinContent(10,32.00048);
   VbbHcc_HPt_stack_5->SetBinContent(11,20.85238);
   VbbHcc_HPt_stack_5->SetBinContent(12,16.43188);
   VbbHcc_HPt_stack_5->SetBinContent(13,9.639326);
   VbbHcc_HPt_stack_5->SetBinContent(14,8.08856);
   VbbHcc_HPt_stack_5->SetBinContent(15,5.658263);
   VbbHcc_HPt_stack_5->SetBinContent(16,3.831398);
   VbbHcc_HPt_stack_5->SetBinContent(17,2.84556);
   VbbHcc_HPt_stack_5->SetBinContent(18,2.172286);
   VbbHcc_HPt_stack_5->SetBinContent(19,1.09148);
   VbbHcc_HPt_stack_5->SetBinContent(20,1.235299);
   VbbHcc_HPt_stack_5->SetBinContent(21,0.3434095);
   VbbHcc_HPt_stack_5->SetBinContent(22,0.6344476);
   VbbHcc_HPt_stack_5->SetBinContent(23,0.2547649);
   VbbHcc_HPt_stack_5->SetBinContent(24,0.06606354);
   VbbHcc_HPt_stack_5->SetBinContent(25,0.5270407);
   VbbHcc_HPt_stack_5->SetBinContent(26,0.1051544);
   VbbHcc_HPt_stack_5->SetBinContent(27,0.5330306);
   VbbHcc_HPt_stack_5->SetBinContent(28,0.003478114);
   VbbHcc_HPt_stack_5->SetBinContent(29,0.1000009);
   VbbHcc_HPt_stack_5->SetBinContent(30,0.001775171);
   VbbHcc_HPt_stack_5->SetBinContent(31,0.02526506);
   VbbHcc_HPt_stack_5->SetBinContent(32,0.001582479);
   VbbHcc_HPt_stack_5->SetBinContent(33,0.0005991783);
   VbbHcc_HPt_stack_5->SetBinContent(34,0.0004120699);
   VbbHcc_HPt_stack_5->SetBinContent(35,0.0004160054);
   VbbHcc_HPt_stack_5->SetBinContent(36,0.0003673507);
   VbbHcc_HPt_stack_5->SetBinContent(37,0.0003679459);
   VbbHcc_HPt_stack_5->SetBinContent(39,0.0003417247);
   VbbHcc_HPt_stack_5->SetBinContent(40,0.0003970803);
   VbbHcc_HPt_stack_5->SetBinContent(41,0.03322269);
   VbbHcc_HPt_stack_5->SetBinError(1,9.663215);
   VbbHcc_HPt_stack_5->SetBinError(2,17.66993);
   VbbHcc_HPt_stack_5->SetBinError(3,21.17714);
   VbbHcc_HPt_stack_5->SetBinError(4,20.42133);
   VbbHcc_HPt_stack_5->SetBinError(5,15.73242);
   VbbHcc_HPt_stack_5->SetBinError(6,8.287566);
   VbbHcc_HPt_stack_5->SetBinError(7,4.510432);
   VbbHcc_HPt_stack_5->SetBinError(8,2.935018);
   VbbHcc_HPt_stack_5->SetBinError(9,2.153041);
   VbbHcc_HPt_stack_5->SetBinError(10,1.699076);
   VbbHcc_HPt_stack_5->SetBinError(11,1.331699);
   VbbHcc_HPt_stack_5->SetBinError(12,1.170397);
   VbbHcc_HPt_stack_5->SetBinError(13,0.8966166);
   VbbHcc_HPt_stack_5->SetBinError(14,0.8178403);
   VbbHcc_HPt_stack_5->SetBinError(15,0.6869342);
   VbbHcc_HPt_stack_5->SetBinError(16,0.5602962);
   VbbHcc_HPt_stack_5->SetBinError(17,0.4809983);
   VbbHcc_HPt_stack_5->SetBinError(18,0.418129);
   VbbHcc_HPt_stack_5->SetBinError(19,0.2919789);
   VbbHcc_HPt_stack_5->SetBinError(20,0.310196);
   VbbHcc_HPt_stack_5->SetBinError(21,0.142586);
   VbbHcc_HPt_stack_5->SetBinError(22,0.2181895);
   VbbHcc_HPt_stack_5->SetBinError(23,0.1479755);
   VbbHcc_HPt_stack_5->SetBinError(24,0.03075939);
   VbbHcc_HPt_stack_5->SetBinError(25,0.2253706);
   VbbHcc_HPt_stack_5->SetBinError(26,0.1002672);
   VbbHcc_HPt_stack_5->SetBinError(27,0.2201593);
   VbbHcc_HPt_stack_5->SetBinError(28,0.001126032);
   VbbHcc_HPt_stack_5->SetBinError(29,0.09836651);
   VbbHcc_HPt_stack_5->SetBinError(30,0.0008900924);
   VbbHcc_HPt_stack_5->SetBinError(31,0.02341785);
   VbbHcc_HPt_stack_5->SetBinError(32,0.0007920485);
   VbbHcc_HPt_stack_5->SetBinError(33,0.0004529644);
   VbbHcc_HPt_stack_5->SetBinError(34,0.0004120699);
   VbbHcc_HPt_stack_5->SetBinError(35,0.0004160054);
   VbbHcc_HPt_stack_5->SetBinError(36,0.0003673507);
   VbbHcc_HPt_stack_5->SetBinError(37,0.0003679459);
   VbbHcc_HPt_stack_5->SetBinError(39,0.0003417247);
   VbbHcc_HPt_stack_5->SetBinError(40,0.0003970803);
   VbbHcc_HPt_stack_5->SetBinError(41,0.03322269);
   VbbHcc_HPt_stack_5->SetEntries(11695);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_HPt_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_5->SetLineColor(ci);
   VbbHcc_HPt_stack_5->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_5,"");
   
   TH1D *VbbHcc_HPt_stack_6 = new TH1D("VbbHcc_HPt_stack_6","",40,0,2000);
   VbbHcc_HPt_stack_6->SetBinContent(1,3.851162);
   VbbHcc_HPt_stack_6->SetBinContent(2,12.3288);
   VbbHcc_HPt_stack_6->SetBinContent(3,7.085415);
   VbbHcc_HPt_stack_6->SetBinContent(4,3.717569);
   VbbHcc_HPt_stack_6->SetBinContent(5,2.461889);
   VbbHcc_HPt_stack_6->SetBinContent(6,0.7545959);
   VbbHcc_HPt_stack_6->SetBinContent(7,0.5039141);
   VbbHcc_HPt_stack_6->SetBinContent(8,0.4908134);
   VbbHcc_HPt_stack_6->SetBinContent(9,0.7840266);
   VbbHcc_HPt_stack_6->SetBinContent(10,0.5115346);
   VbbHcc_HPt_stack_6->SetBinContent(12,0.2358588);
   VbbHcc_HPt_stack_6->SetBinError(1,0.968051);
   VbbHcc_HPt_stack_6->SetBinError(2,1.702748);
   VbbHcc_HPt_stack_6->SetBinError(3,1.283664);
   VbbHcc_HPt_stack_6->SetBinError(4,0.8974802);
   VbbHcc_HPt_stack_6->SetBinError(5,0.7348876);
   VbbHcc_HPt_stack_6->SetBinError(6,0.3792147);
   VbbHcc_HPt_stack_6->SetBinError(7,0.3563749);
   VbbHcc_HPt_stack_6->SetBinError(8,0.3548405);
   VbbHcc_HPt_stack_6->SetBinError(9,0.4537842);
   VbbHcc_HPt_stack_6->SetBinError(10,0.3617101);
   VbbHcc_HPt_stack_6->SetBinError(12,0.2358588);
   VbbHcc_HPt_stack_6->SetEntries(145);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_HPt_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_6->SetLineColor(ci);
   VbbHcc_HPt_stack_6->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_6,"");
   
   TH1D *VbbHcc_HPt_stack_7 = new TH1D("VbbHcc_HPt_stack_7","",40,0,2000);
   VbbHcc_HPt_stack_7->SetBinContent(1,5.232695);
   VbbHcc_HPt_stack_7->SetBinContent(2,29.26546);
   VbbHcc_HPt_stack_7->SetBinContent(3,21.95024);
   VbbHcc_HPt_stack_7->SetBinContent(4,9.992126);
   VbbHcc_HPt_stack_7->SetBinContent(5,4.46128);
   VbbHcc_HPt_stack_7->SetBinContent(6,2.304303);
   VbbHcc_HPt_stack_7->SetBinContent(7,2.109711);
   VbbHcc_HPt_stack_7->SetBinContent(8,0.988655);
   VbbHcc_HPt_stack_7->SetBinContent(9,0.7550605);
   VbbHcc_HPt_stack_7->SetBinContent(10,0.5129477);
   VbbHcc_HPt_stack_7->SetBinContent(11,0.2748527);
   VbbHcc_HPt_stack_7->SetBinContent(12,0.109422);
   VbbHcc_HPt_stack_7->SetBinContent(13,0.1247279);
   VbbHcc_HPt_stack_7->SetBinContent(14,0.1702571);
   VbbHcc_HPt_stack_7->SetBinContent(15,0.1844377);
   VbbHcc_HPt_stack_7->SetBinError(1,0.9379704);
   VbbHcc_HPt_stack_7->SetBinError(2,2.241923);
   VbbHcc_HPt_stack_7->SetBinError(3,1.932857);
   VbbHcc_HPt_stack_7->SetBinError(4,1.290434);
   VbbHcc_HPt_stack_7->SetBinError(5,0.8530503);
   VbbHcc_HPt_stack_7->SetBinError(6,0.6038921);
   VbbHcc_HPt_stack_7->SetBinError(7,0.6136541);
   VbbHcc_HPt_stack_7->SetBinError(8,0.4071422);
   VbbHcc_HPt_stack_7->SetBinError(9,0.343684);
   VbbHcc_HPt_stack_7->SetBinError(10,0.2966318);
   VbbHcc_HPt_stack_7->SetBinError(11,0.1944054);
   VbbHcc_HPt_stack_7->SetBinError(12,0.109422);
   VbbHcc_HPt_stack_7->SetBinError(13,0.1247279);
   VbbHcc_HPt_stack_7->SetBinError(14,0.1702571);
   VbbHcc_HPt_stack_7->SetBinError(15,0.1844377);
   VbbHcc_HPt_stack_7->SetEntries(480);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_HPt_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_7->SetLineColor(ci);
   VbbHcc_HPt_stack_7->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_7,"");
   
   TH1D *VbbHcc_HPt_stack_8 = new TH1D("VbbHcc_HPt_stack_8","",40,0,2000);
   VbbHcc_HPt_stack_8->SetBinContent(1,33.44302);
   VbbHcc_HPt_stack_8->SetBinContent(2,144.3499);
   VbbHcc_HPt_stack_8->SetBinContent(3,59.79072);
   VbbHcc_HPt_stack_8->SetBinContent(4,33.78789);
   VbbHcc_HPt_stack_8->SetBinContent(5,15.91808);
   VbbHcc_HPt_stack_8->SetBinContent(6,7.98789);
   VbbHcc_HPt_stack_8->SetBinContent(7,8.195555);
   VbbHcc_HPt_stack_8->SetBinContent(8,1.87723);
   VbbHcc_HPt_stack_8->SetBinContent(9,1.271532);
   VbbHcc_HPt_stack_8->SetBinContent(10,0.2375942);
   VbbHcc_HPt_stack_8->SetBinContent(12,0.204543);
   VbbHcc_HPt_stack_8->SetBinContent(13,0.2167776);
   VbbHcc_HPt_stack_8->SetBinContent(16,0.2310328);
   VbbHcc_HPt_stack_8->SetBinError(1,2.698429);
   VbbHcc_HPt_stack_8->SetBinError(2,5.61321);
   VbbHcc_HPt_stack_8->SetBinError(3,3.633372);
   VbbHcc_HPt_stack_8->SetBinError(4,2.722921);
   VbbHcc_HPt_stack_8->SetBinError(5,1.889617);
   VbbHcc_HPt_stack_8->SetBinError(6,1.334345);
   VbbHcc_HPt_stack_8->SetBinError(7,1.333957);
   VbbHcc_HPt_stack_8->SetBinError(8,0.6372914);
   VbbHcc_HPt_stack_8->SetBinError(9,0.5259123);
   VbbHcc_HPt_stack_8->SetBinError(10,0.2375942);
   VbbHcc_HPt_stack_8->SetBinError(12,0.204543);
   VbbHcc_HPt_stack_8->SetBinError(13,0.2167776);
   VbbHcc_HPt_stack_8->SetBinError(16,0.2310328);
   VbbHcc_HPt_stack_8->SetEntries(1459);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_HPt_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_8->SetLineColor(ci);
   VbbHcc_HPt_stack_8->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_8,"");
   
   TH1D *VbbHcc_HPt_stack_9 = new TH1D("VbbHcc_HPt_stack_9","",40,0,2000);
   VbbHcc_HPt_stack_9->SetBinContent(1,19.32759);
   VbbHcc_HPt_stack_9->SetBinContent(2,86.19046);
   VbbHcc_HPt_stack_9->SetBinContent(3,47.56669);
   VbbHcc_HPt_stack_9->SetBinContent(4,22.47982);
   VbbHcc_HPt_stack_9->SetBinContent(5,12.26361);
   VbbHcc_HPt_stack_9->SetBinContent(6,6.429982);
   VbbHcc_HPt_stack_9->SetBinContent(7,3.691566);
   VbbHcc_HPt_stack_9->SetBinContent(8,2.034555);
   VbbHcc_HPt_stack_9->SetBinContent(9,0.9857025);
   VbbHcc_HPt_stack_9->SetBinContent(10,0.4506581);
   VbbHcc_HPt_stack_9->SetBinContent(11,0.2341945);
   VbbHcc_HPt_stack_9->SetBinContent(12,0.07272571);
   VbbHcc_HPt_stack_9->SetBinContent(13,0.03683813);
   VbbHcc_HPt_stack_9->SetBinContent(14,0.01744673);
   VbbHcc_HPt_stack_9->SetBinContent(15,0.02102579);
   VbbHcc_HPt_stack_9->SetBinContent(16,0.005602512);
   VbbHcc_HPt_stack_9->SetBinContent(17,0.007704998);
   VbbHcc_HPt_stack_9->SetBinContent(18,0.004045598);
   VbbHcc_HPt_stack_9->SetBinContent(19,0.002053476);
   VbbHcc_HPt_stack_9->SetBinContent(20,0.003689578);
   VbbHcc_HPt_stack_9->SetBinContent(21,0.002013969);
   VbbHcc_HPt_stack_9->SetBinContent(23,0.00205252);
   VbbHcc_HPt_stack_9->SetBinContent(25,0.002294185);
   VbbHcc_HPt_stack_9->SetBinError(1,0.1943381);
   VbbHcc_HPt_stack_9->SetBinError(2,0.4134081);
   VbbHcc_HPt_stack_9->SetBinError(3,0.3056311);
   VbbHcc_HPt_stack_9->SetBinError(4,0.2099678);
   VbbHcc_HPt_stack_9->SetBinError(5,0.1549207);
   VbbHcc_HPt_stack_9->SetBinError(6,0.1126578);
   VbbHcc_HPt_stack_9->SetBinError(7,0.08443123);
   VbbHcc_HPt_stack_9->SetBinError(8,0.06295388);
   VbbHcc_HPt_stack_9->SetBinError(9,0.0441847);
   VbbHcc_HPt_stack_9->SetBinError(10,0.02934242);
   VbbHcc_HPt_stack_9->SetBinError(11,0.02097445);
   VbbHcc_HPt_stack_9->SetBinError(12,0.0127097);
   VbbHcc_HPt_stack_9->SetBinError(13,0.008228793);
   VbbHcc_HPt_stack_9->SetBinError(14,0.005467075);
   VbbHcc_HPt_stack_9->SetBinError(15,0.00614243);
   VbbHcc_HPt_stack_9->SetBinError(16,0.003265183);
   VbbHcc_HPt_stack_9->SetBinError(17,0.003864605);
   VbbHcc_HPt_stack_9->SetBinError(18,0.002860879);
   VbbHcc_HPt_stack_9->SetBinError(19,0.002053476);
   VbbHcc_HPt_stack_9->SetBinError(20,0.002623236);
   VbbHcc_HPt_stack_9->SetBinError(21,0.002013969);
   VbbHcc_HPt_stack_9->SetBinError(23,0.00205252);
   VbbHcc_HPt_stack_9->SetBinError(25,0.002294185);
   VbbHcc_HPt_stack_9->SetEntries(115171);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_HPt_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_9->SetLineColor(ci);
   VbbHcc_HPt_stack_9->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_9,"");
   
   TH1D *VbbHcc_HPt_stack_10 = new TH1D("VbbHcc_HPt_stack_10","",40,0,2000);
   VbbHcc_HPt_stack_10->SetBinContent(1,2.523867);
   VbbHcc_HPt_stack_10->SetBinContent(2,9.648078);
   VbbHcc_HPt_stack_10->SetBinContent(3,8.93169);
   VbbHcc_HPt_stack_10->SetBinContent(4,5.438351);
   VbbHcc_HPt_stack_10->SetBinContent(5,2.842579);
   VbbHcc_HPt_stack_10->SetBinContent(6,1.408953);
   VbbHcc_HPt_stack_10->SetBinContent(7,0.7283872);
   VbbHcc_HPt_stack_10->SetBinContent(8,0.3583095);
   VbbHcc_HPt_stack_10->SetBinContent(9,0.1888524);
   VbbHcc_HPt_stack_10->SetBinContent(10,0.09915153);
   VbbHcc_HPt_stack_10->SetBinContent(11,0.0626234);
   VbbHcc_HPt_stack_10->SetBinContent(12,0.03714521);
   VbbHcc_HPt_stack_10->SetBinContent(13,0.02569641);
   VbbHcc_HPt_stack_10->SetBinContent(14,0.01683732);
   VbbHcc_HPt_stack_10->SetBinContent(15,0.01198932);
   VbbHcc_HPt_stack_10->SetBinContent(16,0.003816411);
   VbbHcc_HPt_stack_10->SetBinContent(17,0.002553003);
   VbbHcc_HPt_stack_10->SetBinContent(18,0.003189201);
   VbbHcc_HPt_stack_10->SetBinContent(19,0.003445941);
   VbbHcc_HPt_stack_10->SetBinContent(20,0.001321923);
   VbbHcc_HPt_stack_10->SetBinContent(21,0.002224111);
   VbbHcc_HPt_stack_10->SetBinContent(22,0.001402932);
   VbbHcc_HPt_stack_10->SetBinContent(23,0.0004461652);
   VbbHcc_HPt_stack_10->SetBinContent(24,0.0004353423);
   VbbHcc_HPt_stack_10->SetBinContent(26,0.0005007782);
   VbbHcc_HPt_stack_10->SetBinError(1,0.03364177);
   VbbHcc_HPt_stack_10->SetBinError(2,0.06589537);
   VbbHcc_HPt_stack_10->SetBinError(3,0.06339076);
   VbbHcc_HPt_stack_10->SetBinError(4,0.04943244);
   VbbHcc_HPt_stack_10->SetBinError(5,0.03567309);
   VbbHcc_HPt_stack_10->SetBinError(6,0.02510673);
   VbbHcc_HPt_stack_10->SetBinError(7,0.01805782);
   VbbHcc_HPt_stack_10->SetBinError(8,0.01267501);
   VbbHcc_HPt_stack_10->SetBinError(9,0.009182173);
   VbbHcc_HPt_stack_10->SetBinError(10,0.006618631);
   VbbHcc_HPt_stack_10->SetBinError(11,0.005282055);
   VbbHcc_HPt_stack_10->SetBinError(12,0.004077688);
   VbbHcc_HPt_stack_10->SetBinError(13,0.003393438);
   VbbHcc_HPt_stack_10->SetBinError(14,0.00269895);
   VbbHcc_HPt_stack_10->SetBinError(15,0.002325584);
   VbbHcc_HPt_stack_10->SetBinError(16,0.00127913);
   VbbHcc_HPt_stack_10->SetBinError(17,0.001048711);
   VbbHcc_HPt_stack_10->SetBinError(18,0.001207873);
   VbbHcc_HPt_stack_10->SetBinError(19,0.001221931);
   VbbHcc_HPt_stack_10->SetBinError(20,0.0007633921);
   VbbHcc_HPt_stack_10->SetBinError(21,0.0009968871);
   VbbHcc_HPt_stack_10->SetBinError(22,0.0008108078);
   VbbHcc_HPt_stack_10->SetBinError(23,0.0004461652);
   VbbHcc_HPt_stack_10->SetBinError(24,0.0004353423);
   VbbHcc_HPt_stack_10->SetBinError(26,0.0005007782);
   VbbHcc_HPt_stack_10->SetEntries(72910);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_HPt_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_10->SetLineColor(ci);
   VbbHcc_HPt_stack_10->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_10,"");
   
   TH1D *VbbHcc_HPt_stack_11 = new TH1D("VbbHcc_HPt_stack_11","",40,0,2000);
   VbbHcc_HPt_stack_11->SetBinContent(1,0.5239139);
   VbbHcc_HPt_stack_11->SetBinContent(2,2.177853);
   VbbHcc_HPt_stack_11->SetBinContent(3,1.648446);
   VbbHcc_HPt_stack_11->SetBinContent(4,0.9694016);
   VbbHcc_HPt_stack_11->SetBinContent(5,0.4741192);
   VbbHcc_HPt_stack_11->SetBinContent(6,0.315505);
   VbbHcc_HPt_stack_11->SetBinContent(7,0.1557964);
   VbbHcc_HPt_stack_11->SetBinContent(8,0.1040535);
   VbbHcc_HPt_stack_11->SetBinContent(9,0.04057244);
   VbbHcc_HPt_stack_11->SetBinContent(10,0.01718312);
   VbbHcc_HPt_stack_11->SetBinContent(11,0.008270128);
   VbbHcc_HPt_stack_11->SetBinContent(12,0.004439141);
   VbbHcc_HPt_stack_11->SetBinContent(13,0.002820432);
   VbbHcc_HPt_stack_11->SetBinContent(17,0.002480913);
   VbbHcc_HPt_stack_11->SetBinContent(18,0.002764817);
   VbbHcc_HPt_stack_11->SetBinContent(19,2.430881e-05);
   VbbHcc_HPt_stack_11->SetBinError(1,0.03692027);
   VbbHcc_HPt_stack_11->SetBinError(2,0.07597738);
   VbbHcc_HPt_stack_11->SetBinError(3,0.06580505);
   VbbHcc_HPt_stack_11->SetBinError(4,0.05033233);
   VbbHcc_HPt_stack_11->SetBinError(5,0.03440227);
   VbbHcc_HPt_stack_11->SetBinError(6,0.02945445);
   VbbHcc_HPt_stack_11->SetBinError(7,0.02033259);
   VbbHcc_HPt_stack_11->SetBinError(8,0.01625408);
   VbbHcc_HPt_stack_11->SetBinError(9,0.0101844);
   VbbHcc_HPt_stack_11->SetBinError(10,0.0061974);
   VbbHcc_HPt_stack_11->SetBinError(11,0.004097688);
   VbbHcc_HPt_stack_11->SetBinError(12,0.003214887);
   VbbHcc_HPt_stack_11->SetBinError(13,0.002820432);
   VbbHcc_HPt_stack_11->SetBinError(17,0.002480913);
   VbbHcc_HPt_stack_11->SetBinError(18,0.002764817);
   VbbHcc_HPt_stack_11->SetBinError(19,2.430881e-05);
   VbbHcc_HPt_stack_11->SetEntries(2979);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_HPt_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_11->SetLineColor(ci);
   VbbHcc_HPt_stack_11->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_11,"");
   
   TH1D *VbbHcc_HPt_stack_12 = new TH1D("VbbHcc_HPt_stack_12","",40,0,2000);
   VbbHcc_HPt_stack_12->SetBinContent(1,0.1062333);
   VbbHcc_HPt_stack_12->SetBinContent(2,0.417821);
   VbbHcc_HPt_stack_12->SetBinContent(3,0.5726254);
   VbbHcc_HPt_stack_12->SetBinContent(4,0.4230242);
   VbbHcc_HPt_stack_12->SetBinContent(5,0.2266826);
   VbbHcc_HPt_stack_12->SetBinContent(6,0.1008463);
   VbbHcc_HPt_stack_12->SetBinContent(7,0.05146724);
   VbbHcc_HPt_stack_12->SetBinContent(8,0.02853522);
   VbbHcc_HPt_stack_12->SetBinContent(9,0.01300734);
   VbbHcc_HPt_stack_12->SetBinContent(10,0.005913871);
   VbbHcc_HPt_stack_12->SetBinContent(11,0.004321841);
   VbbHcc_HPt_stack_12->SetBinContent(12,0.003067985);
   VbbHcc_HPt_stack_12->SetBinContent(13,0.001403416);
   VbbHcc_HPt_stack_12->SetBinContent(15,0.0003670842);
   VbbHcc_HPt_stack_12->SetBinError(1,0.005941286);
   VbbHcc_HPt_stack_12->SetBinError(2,0.01186414);
   VbbHcc_HPt_stack_12->SetBinError(3,0.01391521);
   VbbHcc_HPt_stack_12->SetBinError(4,0.01186616);
   VbbHcc_HPt_stack_12->SetBinError(5,0.008766404);
   VbbHcc_HPt_stack_12->SetBinError(6,0.00575873);
   VbbHcc_HPt_stack_12->SetBinError(7,0.004138005);
   VbbHcc_HPt_stack_12->SetBinError(8,0.003102678);
   VbbHcc_HPt_stack_12->SetBinError(9,0.002098096);
   VbbHcc_HPt_stack_12->SetBinError(10,0.001441296);
   VbbHcc_HPt_stack_12->SetBinError(11,0.001168061);
   VbbHcc_HPt_stack_12->SetBinError(12,0.0009874908);
   VbbHcc_HPt_stack_12->SetBinError(13,0.0006349639);
   VbbHcc_HPt_stack_12->SetBinError(15,0.0003670842);
   VbbHcc_HPt_stack_12->SetEntries(6613);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_HPt_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_12->SetLineColor(ci);
   VbbHcc_HPt_stack_12->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_HPt__27 = new TH1D("VbbHcc_HPt__27","",40,0,2000);
   VbbHcc_HPt__27->SetBinContent(1,11663);
   VbbHcc_HPt__27->SetBinContent(2,31595);
   VbbHcc_HPt__27->SetBinContent(3,38346);
   VbbHcc_HPt__27->SetBinContent(4,29908);
   VbbHcc_HPt__27->SetBinContent(5,20115);
   VbbHcc_HPt__27->SetBinContent(6,12962);
   VbbHcc_HPt__27->SetBinContent(7,9071);
   VbbHcc_HPt__27->SetBinContent(8,6767);
   VbbHcc_HPt__27->SetBinContent(9,4907);
   VbbHcc_HPt__27->SetBinContent(10,3058);
   VbbHcc_HPt__27->SetBinContent(11,1928);
   VbbHcc_HPt__27->SetBinContent(12,1108);
   VbbHcc_HPt__27->SetBinContent(13,671);
   VbbHcc_HPt__27->SetBinContent(14,428);
   VbbHcc_HPt__27->SetBinContent(15,275);
   VbbHcc_HPt__27->SetBinContent(16,189);
   VbbHcc_HPt__27->SetBinContent(17,121);
   VbbHcc_HPt__27->SetBinContent(18,82);
   VbbHcc_HPt__27->SetBinContent(19,54);
   VbbHcc_HPt__27->SetBinContent(20,52);
   VbbHcc_HPt__27->SetBinContent(21,24);
   VbbHcc_HPt__27->SetBinContent(22,12);
   VbbHcc_HPt__27->SetBinContent(23,17);
   VbbHcc_HPt__27->SetBinContent(24,8);
   VbbHcc_HPt__27->SetBinContent(25,3);
   VbbHcc_HPt__27->SetBinContent(26,5);
   VbbHcc_HPt__27->SetBinContent(27,2);
   VbbHcc_HPt__27->SetBinContent(28,1);
   VbbHcc_HPt__27->SetBinContent(29,2);
   VbbHcc_HPt__27->SetBinContent(30,2);
   VbbHcc_HPt__27->SetBinContent(38,1);
   VbbHcc_HPt__27->SetEntries(173377);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt__27->SetLineColor(ci);
   VbbHcc_HPt__27->SetLineWidth(2);
   VbbHcc_HPt__27->SetMarkerStyle(20);
   VbbHcc_HPt__27->SetMarkerSize(1.2);
   VbbHcc_HPt__27->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt__27->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt__27->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt__27->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt__27->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt__27->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt__27->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt__27->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt__27->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt__27->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt__27->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt__27->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt__27->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt__27->GetZaxis()->SetTitleFont(42);
   VbbHcc_HPt__27->Draw("same E");
   
   Double_t Graph_from_VbbHcc_HPt_fx1027[40] = {
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
   Double_t Graph_from_VbbHcc_HPt_fy1027[40] = {
   94212.01,
   359635.8,
   421732.3,
   241872.9,
   92117.62,
   39699.82,
   15022.62,
   6467.245,
   3280.312,
   1831.085,
   1122.116,
   748.4154,
   402.4074,
   234.9043,
   158.8594,
   103.807,
   66.24647,
   43.64371,
   33.95378,
   25.99459,
   11.55872,
   10.03245,
   7.374419,
   5.095932,
   4.245258,
   1.814834,
   2.39527,
   1.303948,
   0.8729009,
   0.5759912,
   0.4051541,
   0.001582479,
   0.2257706,
   0.09736346,
   0.0004160054,
   0.0003673507,
   0.0003679459,
   0,
   0.0003417247,
   0.0003970803};
   Double_t Graph_from_VbbHcc_HPt_fex1027[40] = {
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
   Double_t Graph_from_VbbHcc_HPt_fey1027[40] = {
   4189.846,
   8616.192,
   9592.423,
   6957.017,
   3339.757,
   1549.207,
   530.7858,
   216.0055,
   122.9015,
   77.36834,
   54.25984,
   43.37543,
   27.52269,
   17.7292,
   11.60294,
   8.581484,
   4.039145,
   3.110317,
   2.811709,
   2.354418,
   1.252603,
   1.273893,
   1.097768,
   0.8962416,
   0.7490851,
   0.5171114,
   0.6262796,
   0.4187289,
   0.2646813,
   0.3317031,
   0.2400164,
   0.0007920485,
   0.1779665,
   0.09695226,
   0.0004160054,
   0.0003673507,
   0.0003679459,
   0,
   0.0003417247,
   0.0003970803};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_HPt_fx1027,Graph_from_VbbHcc_HPt_fy1027,Graph_from_VbbHcc_HPt_fex1027,Graph_from_VbbHcc_HPt_fey1027);
   gre->SetName("Graph_from_VbbHcc_HPt");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_HPt1027 = new TH1F("Graph_Graph_from_VbbHcc_HPt1027","",100,0,2200);
   Graph_Graph_from_VbbHcc_HPt1027->SetMinimum(-43132.48);
   Graph_Graph_from_VbbHcc_HPt1027->SetMaximum(474457.2);
   Graph_Graph_from_VbbHcc_HPt1027->SetDirectory(0);
   Graph_Graph_from_VbbHcc_HPt1027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_HPt1027->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_HPt1027->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_HPt1027->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_HPt1027->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_HPt1027->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_HPt1027->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_HPt1027->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_HPt1027->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_HPt1027->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_HPt1027->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_HPt1027->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_HPt1027->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_HPt1027->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_HPt1027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_HPt1027);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_HPt","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_HPt_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_HPt_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_HPt","MC unc. (stat.)","fl");

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
   HPt_VbbHcc_17->cd();
  
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
   data_mc_ratio__28->SetBinContent(1,0.1237953);
   data_mc_ratio__28->SetBinContent(2,0.08785276);
   data_mc_ratio__28->SetBinContent(3,0.09092497);
   data_mc_ratio__28->SetBinContent(4,0.1236517);
   data_mc_ratio__28->SetBinContent(5,0.2183621);
   data_mc_ratio__28->SetBinContent(6,0.3265003);
   data_mc_ratio__28->SetBinContent(7,0.6038228);
   data_mc_ratio__28->SetBinContent(8,1.04635);
   data_mc_ratio__28->SetBinContent(9,1.495894);
   data_mc_ratio__28->SetBinContent(10,1.670048);
   data_mc_ratio__28->SetBinContent(11,1.718182);
   data_mc_ratio__28->SetBinContent(12,1.480461);
   data_mc_ratio__28->SetBinContent(13,1.667464);
   data_mc_ratio__28->SetBinContent(14,1.822018);
   data_mc_ratio__28->SetBinContent(15,1.731091);
   data_mc_ratio__28->SetBinContent(16,1.820686);
   data_mc_ratio__28->SetBinContent(17,1.826512);
   data_mc_ratio__28->SetBinContent(18,1.87885);
   data_mc_ratio__28->SetBinContent(19,1.590397);
   data_mc_ratio__28->SetBinContent(20,2.000417);
   data_mc_ratio__28->SetBinContent(21,2.076354);
   data_mc_ratio__28->SetBinContent(22,1.196119);
   data_mc_ratio__28->SetBinContent(23,2.305266);
   data_mc_ratio__28->SetBinContent(24,1.56988);
   data_mc_ratio__28->SetBinContent(25,0.7066708);
   data_mc_ratio__28->SetBinContent(26,2.755073);
   data_mc_ratio__28->SetBinContent(27,0.834979);
   data_mc_ratio__28->SetBinContent(28,0.7669017);
   data_mc_ratio__28->SetBinContent(29,2.291211);
   data_mc_ratio__28->SetBinContent(30,3.472275);
   data_mc_ratio__28->SetBinError(1,0.001146302);
   data_mc_ratio__28->SetBinError(2,0.0004942495);
   data_mc_ratio__28->SetBinError(3,0.0004643261);
   data_mc_ratio__28->SetBinError(4,0.0007150009);
   data_mc_ratio__28->SetBinError(5,0.001539633);
   data_mc_ratio__28->SetBinError(6,0.002867791);
   data_mc_ratio__28->SetBinError(7,0.006339893);
   data_mc_ratio__28->SetBinError(8,0.01271976);
   data_mc_ratio__28->SetBinError(9,0.02135467);
   data_mc_ratio__28->SetBinError(10,0.03020023);
   data_mc_ratio__28->SetBinError(11,0.03913052);
   data_mc_ratio__28->SetBinError(12,0.04447615);
   data_mc_ratio__28->SetBinError(13,0.06437175);
   data_mc_ratio__28->SetBinError(14,0.08807058);
   data_mc_ratio__28->SetBinError(15,0.1043887);
   data_mc_ratio__28->SetBinError(16,0.1324355);
   data_mc_ratio__28->SetBinError(17,0.1660466);
   data_mc_ratio__28->SetBinError(18,0.2074843);
   data_mc_ratio__28->SetBinError(19,0.2164256);
   data_mc_ratio__28->SetBinError(20,0.2774079);
   data_mc_ratio__28->SetBinError(21,0.4238339);
   data_mc_ratio__28->SetBinError(22,0.3452897);
   data_mc_ratio__28->SetBinError(23,0.5591092);
   data_mc_ratio__28->SetBinError(24,0.5550362);
   data_mc_ratio__28->SetBinError(25,0.4079966);
   data_mc_ratio__28->SetBinError(26,1.232106);
   data_mc_ratio__28->SetBinError(27,0.5904193);
   data_mc_ratio__28->SetBinError(28,0.7669017);
   data_mc_ratio__28->SetBinError(29,1.620131);
   data_mc_ratio__28->SetBinError(30,2.45527);
   data_mc_ratio__28->SetMinimum(0.4);
   data_mc_ratio__28->SetMaximum(1.6);
   data_mc_ratio__28->SetEntries(94.23738);
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
   0.04447253,
   0.0239581,
   0.02274529,
   0.02876311,
   0.03625535,
   0.03902304,
   0.03533244,
   0.03339993,
   0.0374664,
   0.04225273,
   0.04835492,
   0.05795636,
   0.06839508,
   0.07547412,
   0.07303907,
   0.08266768,
   0.06097147,
   0.0712661,
   0.08280988,
   0.09057341,
   0.1083686,
   0.1269773,
   0.1488616,
   0.1758739,
   0.1764522,
   0.284936,
   0.2614652,
   0.3211239,
   0.3032203,
   0.5758823,
   0.5924078,
   0.5005112,
   0.7882627,
   0.9957767,
   1,
   1,
   1,
   0,
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
   HPt_VbbHcc_17->cd();
   HPt_VbbHcc_17->Modified();
   HPt_VbbHcc_17->cd();
   HPt_VbbHcc_17->SetSelected(HPt_VbbHcc_17);
}
