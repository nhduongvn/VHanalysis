void H_dR_Bj1_algo_16()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_16/H_dR_Bj1_algo_16
//=========  (Thu Aug  3 12:24:43 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_algo_16 = new TCanvas("H_dR_Bj1_algo_16", "H_dR_Bj1_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_algo_16->SetHighLightColor(2);
   H_dR_Bj1_algo_16->Range(0,0,1,1);
   H_dR_Bj1_algo_16->SetFillColor(0);
   H_dR_Bj1_algo_16->SetFillStyle(4000);
   H_dR_Bj1_algo_16->SetBorderMode(0);
   H_dR_Bj1_algo_16->SetBorderSize(2);
   H_dR_Bj1_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-885.5654,6.314516,884689.7);
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
   st->SetMaximum(758221.1);
   
   TH1F *st_stack_141 = new TH1F("st_stack_141","",30,0,6);
   st_stack_141->SetMinimum(0.01);
   st_stack_141->SetMaximum(796132.2);
   st_stack_141->SetDirectory(0);
   st_stack_141->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_141->SetLineColor(ci);
   st_stack_141->GetXaxis()->SetRange(1,30);
   st_stack_141->GetXaxis()->SetLabelFont(42);
   st_stack_141->GetXaxis()->SetLabelSize(0.035);
   st_stack_141->GetXaxis()->SetTitleSize(0.035);
   st_stack_141->GetXaxis()->SetTitleFont(42);
   st_stack_141->GetYaxis()->SetTitle("Events/0.2");
   st_stack_141->GetYaxis()->SetLabelFont(42);
   st_stack_141->GetYaxis()->SetLabelSize(0.05);
   st_stack_141->GetYaxis()->SetTitleSize(0.057);
   st_stack_141->GetYaxis()->SetTitleOffset(1.2);
   st_stack_141->GetYaxis()->SetTitleFont(42);
   st_stack_141->GetZaxis()->SetLabelFont(42);
   st_stack_141->GetZaxis()->SetLabelSize(0.035);
   st_stack_141->GetZaxis()->SetTitleSize(0.035);
   st_stack_141->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_141);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(1,22.20356);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,75654.45);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,156862.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,195662.7);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,261590.7);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,300880.6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,250616.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,230346.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,242168);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,188573.7);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,184902.7);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,160652.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,163438.7);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,150877.9);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,127728);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,125153.9);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,117045.7);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,85865.53);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,74496.13);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,63957.91);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(21,51859.81);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(22,35858.29);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(23,33449.58);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(24,27842.71);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(25,19145.03);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(26,16345.86);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(27,8840.567);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(28,5126.206);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(29,3467.122);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(30,4188.704);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(31,3070.488);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(1,22.20356);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,5491.409);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,7196.54);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,8278.438);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,10231.49);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,22366.84);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,9474.608);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,9473.931);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,21929.35);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,7764.159);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,21140.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,7243.561);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,20995.74);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,7118.544);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,6117.849);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,6393.279);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,6571.131);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,5466.089);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,4489.31);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,4968.895);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(21,3822.419);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(22,2507.557);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(23,2798.554);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(24,3677.646);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(25,2620.915);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(26,2213.645);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(27,1198.047);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(28,872.1702);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(29,815.9398);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(30,2061.508);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(31,1520.108);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(135373);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(1,0.4065559);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,450.9431);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,1384.688);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,1899.755);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,2144.024);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,2096.1);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,1951.015);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,1760.79);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,1574.629);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,1394.281);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,1270.445);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,1123.272);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,1020.696);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,961.6084);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,872.0673);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,826.321);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,742.8503);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,660.9194);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,574.6972);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,469.9899);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,387.3609);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(22,305.2474);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(23,234.6294);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(24,178.2758);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(25,128.1188);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(26,91.01479);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(27,66.56325);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(28,38.9143);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(29,21.71077);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(30,12.19954);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(31,19.33119);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(1,0.2800297);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,8.344212);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,14.35745);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,16.50631);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,17.33767);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,16.84123);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,16.12636);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,15.30613);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,14.41453);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,13.52734);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,13.02409);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,11.99493);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,11.4475);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,10.97372);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,10.52925);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,10.26896);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,9.756277);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,9.228927);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,8.686014);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,7.767802);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,7.081247);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(22,6.253016);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(23,5.463104);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(24,4.724724);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(25,3.930085);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(26,3.392309);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(27,2.993282);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(28,2.106189);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(29,1.513244);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(30,1.126541);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(31,1.419211);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(358903);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_3 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(1,7.692358);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(2,12923.03);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(3,42837.43);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(4,50805.42);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(5,45423.18);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(6,36356.77);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(7,29161.55);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(8,23713.06);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(9,19609.64);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(10,16567.72);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(11,14077.58);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(12,12155.61);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(13,10915.73);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(14,10039.04);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(15,9490.479);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(16,9156.731);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(17,8537.348);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(18,8024.419);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(19,7302.26);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(20,6479.599);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(21,5677.85);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(22,4735.278);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(23,3731.053);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(24,2891.543);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(25,2090.362);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(26,1413.691);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(27,860.8664);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(28,476.1295);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(29,228.2334);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(30,114.7498);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(31,153.2765);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(1,0.6890608);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(2,28.54282);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(3,52.2911);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(4,56.92548);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(5,53.63516);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(6,47.75049);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(7,42.5898);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(8,38.28814);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(9,34.7356);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(10,31.88419);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(11,29.37224);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(12,27.2665);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(13,25.82741);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(14,24.78582);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(15,24.12088);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(16,23.71493);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(17,22.92893);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(18,22.26083);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(19,21.25558);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(20,20.05698);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(21,18.78767);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(22,17.17967);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(23,15.26561);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(24,13.4342);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(25,11.41241);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(26,9.375398);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(27,7.299641);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(28,5.405922);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(29,3.698811);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(30,2.60301);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(31,3.01764);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetEntries(6548404);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_4 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(1,0.279517);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(2,328.4561);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(3,949.5878);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(4,1103.57);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(5,1351.653);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(6,1263.626);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(7,1120.876);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(8,1041.187);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(9,931.4335);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(10,858.5122);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(11,777.4559);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(12,715.5101);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(13,662.6571);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(14,617.1879);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(15,558.4336);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(16,500.1968);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(17,433.3612);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(18,404.126);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(19,332.3729);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(20,316.6227);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(21,215.453);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(22,175.0495);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(23,136.65);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(24,118.5256);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(25,87.46365);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(26,51.29452);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(27,35.04992);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(28,23.14012);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(29,16.69858);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(30,5.56751);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(31,11.81749);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(1,0.279517);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(2,13.40793);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(3,27.88311);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(4,33.64639);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(5,39.46431);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(6,35.65935);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(7,32.13467);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(8,29.49074);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(9,26.52897);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(10,26.46517);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(11,23.44623);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(12,21.66994);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(13,21.24906);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(14,19.88268);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(15,17.78978);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(16,17.33987);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(17,15.12802);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(18,17.47679);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(19,14.12348);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(20,17.48253);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(21,12.08852);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(22,11.52318);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(23,9.619815);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(24,10.10667);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(25,7.967159);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(26,4.021276);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(27,3.54928);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(28,1.967309);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(29,4.030133);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(30,0.989768);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(31,3.957343);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetEntries(93897);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_5 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(2,213.4527);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(3,429.084);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(4,477.7183);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(5,555.0906);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(6,568.9453);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(7,504.238);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(8,525.0596);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(9,529.7397);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(10,384.5538);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(11,442.0638);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(12,349.699);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(13,358.0166);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(14,345.9136);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(15,346.7787);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(16,274.2627);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(17,294.8773);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(18,221.6754);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(19,204.9156);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(20,175.8991);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(21,128.1299);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(22,131.5292);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(23,98.13691);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(24,53.09153);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(25,45.66767);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(26,22.78114);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(27,14.30635);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(28,15.42507);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(29,12.77517);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(30,4.043209);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(31,15.22713);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(2,21.14969);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(3,25.99317);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(4,35.09433);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(5,34.35929);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(6,32.51099);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(7,29.71372);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(8,33.72821);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(9,30.90865);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(10,18.77844);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(11,24.39914);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(12,20.93111);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(13,20.79281);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(14,21.55652);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(15,22.96215);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(16,16.021);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(17,23.84904);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(18,17.36522);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(19,18.1447);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(20,17.84207);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(21,11.24107);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(22,17.32842);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(23,14.73993);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(24,7.546727);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(25,9.283962);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(26,2.394511);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(27,1.669213);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(28,2.741993);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(29,2.846029);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(30,1.19761);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(31,8.65318);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetEntries(71986);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_6 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(2,2.149909);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(3,8.330897);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(4,6.046618);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(5,5.77788);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(6,2.956125);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(7,4.299818);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(8,6.180988);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(9,4.299818);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(10,3.493602);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(11,3.359232);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(12,3.89671);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(13,3.090494);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(14,4.837295);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(15,3.89671);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(16,2.418647);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(17,2.821755);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(18,1.612432);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(19,1.88117);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(20,1.88117);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(21,1.343693);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(22,0.9405851);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(23,0.2687386);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(24,0.4031079);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(25,0.2687386);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(27,0.1343693);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(28,0.2687386);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(31,0.1343693);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(2,0.5374772);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(3,1.058025);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(4,0.9013767);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(5,0.8811184);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(6,0.6302479);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(7,0.7601075);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(8,0.9113369);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(9,0.7601075);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(10,0.6851517);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(11,0.6718465);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(12,0.7236008);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(13,0.6444125);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(14,0.8062158);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(15,0.7236008);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(16,0.5700807);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(17,0.6157575);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(18,0.4654689);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(19,0.5027639);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(20,0.5027639);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(21,0.424913);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(22,0.3555077);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(23,0.1900269);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(24,0.2327345);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(25,0.1900269);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(27,0.1343693);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(28,0.1900269);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(31,0.1343693);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetEntries(573);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_7 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(2,6.761636);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(3,17.01315);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(4,13.41421);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(5,10.25151);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(6,7.852222);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(7,7.852222);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(8,5.889167);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(9,5.561991);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(10,5.561991);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(11,4.907639);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(12,5.234815);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(13,5.998225);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(14,4.471404);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(15,3.817052);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(16,4.03517);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(17,3.489876);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(18,3.053642);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(19,2.726466);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(20,0.9815278);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(21,1.417762);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(22,1.526821);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(23,1.417762);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(24,0.8724691);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(25,1.090586);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(26,0.2181173);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(27,0.5452932);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(28,0.2181173);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(29,0.1090586);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(31,0.1090586);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(2,0.8587286);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(3,1.362142);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(4,1.209519);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(5,1.057363);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(6,0.9253932);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(7,0.9253932);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(8,0.8014141);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(9,0.7788345);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(10,0.7788345);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(11,0.7315876);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(12,0.7555804);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(13,0.8088005);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(14,0.698316);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(15,0.6451996);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(16,0.6633778);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(17,0.6169288);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(18,0.5770841);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(19,0.5452932);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(20,0.3271759);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(21,0.3932165);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(22,0.4080601);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(23,0.3932165);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(24,0.3084644);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(25,0.3448737);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(26,0.1542322);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(27,0.2438625);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(28,0.1542322);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(29,0.1090586);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(31,0.1090586);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetEntries(1159);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_8 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(2,7.782629);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(3,20.4294);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(4,19.94299);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(5,17.51091);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(6,11.18753);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(7,8.51225);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(8,8.998665);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(9,7.782629);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(10,6.8098);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(11,6.323386);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(12,6.080179);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(13,4.864143);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(14,4.864143);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(15,3.891314);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(16,5.350557);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(17,4.864143);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(18,4.377729);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(19,2.918486);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(20,1.70245);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(21,1.70245);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(22,0.4864143);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(23,1.70245);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(24,1.459243);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(25,0.9728286);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(26,0.2432072);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(27,0.2432072);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(28,0.7296215);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(2,1.375787);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(3,2.22903);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(4,2.202334);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(5,2.063681);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(6,1.649511);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(7,1.438833);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(8,1.479371);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(9,1.375787);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(10,1.286931);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(11,1.240118);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(12,1.216036);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(13,1.087655);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(14,1.087655);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(15,0.9728286);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(16,1.140743);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(17,1.087655);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(18,1.031841);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(19,0.8424943);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(20,0.6434656);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(21,0.6434656);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(22,0.3439469);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(23,0.6434656);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(24,0.5957334);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(25,0.4864143);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(26,0.2432072);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(27,0.2432072);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(28,0.4212471);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetEntries(665);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_9 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(1,0.004121852);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(2,4.932483);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(3,14.87439);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(4,15.2907);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(5,11.84895);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(6,8.058221);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(7,6.024774);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(8,4.63571);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(9,4.168567);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(10,3.592881);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(11,3.180696);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(12,2.83446);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(13,2.482729);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(14,2.386553);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(15,2.247783);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(16,2.043065);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(17,1.878191);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(18,1.618514);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(19,1.431657);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(20,1.22419);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(21,1.130761);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(22,0.9755051);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(23,0.8889462);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(24,0.7117065);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(25,0.6004165);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(26,0.419055);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(27,0.2445632);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(28,0.140143);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(29,0.05083618);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(30,0.03022692);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(31,0.02473111);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(1,0.002379753);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(2,0.08232247);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(3,0.1429569);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(4,0.1449437);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(5,0.1275926);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(6,0.1052217);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(7,0.0909821);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(8,0.0798075);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(9,0.07567962);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(10,0.07025982);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(11,0.06610688);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(12,0.0624052);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(13,0.05840503);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(14,0.0572626);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(15,0.05557287);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(16,0.05298179);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(17,0.05079903);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(18,0.04715675);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(19,0.04435117);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(20,0.04101191);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(21,0.03941587);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(22,0.03661005);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(23,0.03494808);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(24,0.03127059);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(25,0.02872182);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(26,0.02399502);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(27,0.01833079);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(28,0.01387622);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(29,0.008357416);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(30,0.0064444);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(31,0.005829179);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetEntries(72765);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_10 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(1,0.0007160924);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(2,1.361292);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(3,4.787794);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(4,5.45555);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(5,4.654959);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(6,3.270394);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(7,2.568982);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(8,2.126794);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(9,1.877594);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(10,1.723276);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(11,1.53208);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(12,1.362008);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(13,1.193368);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(14,1.114598);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(15,1.056236);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(16,0.9835529);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(17,0.91445);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(18,0.7805407);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(19,0.6681142);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(20,0.619778);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(21,0.5123641);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(22,0.4590152);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(23,0.371652);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(24,0.2932398);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(25,0.2058766);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(26,0.1435765);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(27,0.09559834);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(28,0.0472621);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(29,0.0279276);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(30,0.008235063);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(31,0.01038334);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(1,0.0005063538);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(2,0.02207726);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(3,0.04140352);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(4,0.0441966);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(5,0.04082512);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(6,0.03421918);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(7,0.03032844);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(8,0.02759512);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(9,0.02592808);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(10,0.02483974);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(11,0.02342126);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(12,0.02208306);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(13,0.02067077);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(14,0.01997692);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(15,0.01944689);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(16,0.01876586);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(17,0.01809462);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(18,0.01671735);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(19,0.0154666);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(20,0.01489662);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(21,0.01354437);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(22,0.01281985);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(23,0.01153554);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(24,0.01024663);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(25,0.008585646);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(26,0.00716987);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(27,0.005850523);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(28,0.004113638);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(29,0.003162178);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(30,0.001717129);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(31,0.001928138);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetEntries(112352);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_11 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(2,0.0382901);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(3,0.1449554);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(4,0.1367504);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(5,0.1203403);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(6,0.09025525);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(7,0.05743516);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(8,0.04923013);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(9,0.03282009);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(10,0.04923013);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(11,0.04923013);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(12,0.03008508);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(13,0.01641004);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(14,0.04376012);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(15,0.03008508);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(16,0.02461507);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(17,0.01641004);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(18,0.01641004);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(19,0.01367504);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(20,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(21,0.01094003);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(22,0.01094003);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(23,0.01094003);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(24,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(25,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(26,0.01367504);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(27,0.002735007);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(28,0.002735007);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(2,0.01023346);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(3,0.01991115);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(4,0.01933942);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(5,0.01814199);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(6,0.01571142);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(7,0.01253338);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(8,0.01160365);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(9,0.009474344);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(10,0.01160365);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(11,0.01160365);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(12,0.009070994);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(13,0.006699373);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(14,0.01094003);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(15,0.009070994);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(16,0.008205022);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(17,0.006699373);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(18,0.006699373);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(19,0.006115663);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(20,0.003867885);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(21,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(22,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(23,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(24,0.003867885);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(25,0.003867885);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(26,0.006115663);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(27,0.002735007);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(28,0.002735007);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetEntries(376);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_12 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(2,0.009288912);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(3,0.03929924);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(4,0.05466167);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(5,0.04251464);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(6,0.03965651);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(7,0.03143939);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(8,0.02465134);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(9,0.02215048);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(10,0.01857782);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(11,0.01393337);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(12,0.01393337);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(13,0.008931646);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(14,0.007859849);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(15,0.0135761);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(16,0.007145317);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(17,0.009288912);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(18,0.009288912);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(19,0.008217114);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(20,0.007502583);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(21,0.005358988);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(22,0.003572658);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(23,0.005001722);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(24,0.003572658);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(25,0.002500861);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(26,0.001071798);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(27,0.001071798);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(29,0.0003572658);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(2,0.001821706);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(3,0.003747036);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(4,0.004419134);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(5,0.00389731);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(6,0.003764029);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(7,0.003351451);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(8,0.002967673);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(9,0.002813114);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(10,0.002576281);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(11,0.002231125);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(12,0.002231125);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(13,0.001786329);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(14,0.001675725);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(15,0.002202335);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(16,0.001597741);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(17,0.001821706);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(18,0.001821706);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(19,0.001713387);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(20,0.001637198);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(21,0.001383685);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(22,0.001129774);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(23,0.001336766);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(24,0.001129774);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(25,0.0009452366);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(26,0.0006188026);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(27,0.0006188026);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(29,0.0003572658);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetEntries(1132);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR_Bj1__386 = new TH1D("VbbHcc_algo_H_dR_Bj1__386","",30,0,6);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(1,26);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(2,22180);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(3,50397);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(4,51735);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(5,60329);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(6,60988);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(7,58416);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(8,55509);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(9,51308);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(10,48693);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(11,45224);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(12,43062);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(13,40968);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(14,38524);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(15,36100);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(16,33672);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(17,29340);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(18,25215);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(19,21444);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(20,17855);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(21,14383);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(22,11349);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(23,9103);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(24,6944);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(25,5378);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(26,3890);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(27,2879);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(28,1868);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(29,1079);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(30,615);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(31,631);
   VbbHcc_algo_H_dR_Bj1__386->SetEntries(849133);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1__386->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1__386->SetLineWidth(2);
   VbbHcc_algo_H_dR_Bj1__386->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_Bj1__386->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_Bj1__386->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1__386->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__386->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__386->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__386->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__386->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__386->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__386->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__386->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1__386->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__386->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__386->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__386->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__386->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__386->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fx1281[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fy1281[30] = {
   30.58683,
   89593.37,
   202528.9,
   250009.5,
   311114.9,
   341199.5,
   283383.2,
   257414.8,
   264837.2,
   207800.1,
   201489.6,
   175016.1,
   176413.4,
   162859.4,
   139010.7,
   135926.2,
   127068.1,
   95188.14,
   82920.02,
   71406.45,
   58274.73,
   41209.8,
   37654.72,
   31087.89,
   21499.79,
   17925.68,
   9818.62,
   5681.222,
   3746.728,
   4325.302};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fex1281[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fey1281[30] = {
   22.21777,
   5491.547,
   7196.846,
   8278.793,
   10231.78,
   22366.95,
   9474.819,
   9474.127,
   21929.42,
   7764.304,
   21140.25,
   7243.685,
   20995.78,
   7118.656,
   6117.975,
   6393.375,
   6571.239,
   5466.198,
   4489.428,
   4969.004,
   3822.508,
   2507.71,
   2798.657,
   3677.695,
   2620.971,
   2213.672,
   1198.08,
   872.1962,
   815.9645,
   2061.51};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_Bj1_fx1281,Graph_from_VbbHcc_algo_H_dR_Bj1_fy1281,Graph_from_VbbHcc_algo_H_dR_Bj1_fex1281,Graph_from_VbbHcc_algo_H_dR_Bj1_fey1281);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->SetMinimum(7.532151);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->SetMaximum(399922.3);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR_Bj1","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj1_algo_16->cd();
  
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
   
   TH1D *data_mc_ratio__387 = new TH1D("data_mc_ratio__387","",30,0,6);
   data_mc_ratio__387->SetBinContent(1,0.8500391);
   data_mc_ratio__387->SetBinContent(2,0.247563);
   data_mc_ratio__387->SetBinContent(3,0.2488386);
   data_mc_ratio__387->SetBinContent(4,0.2069321);
   data_mc_ratio__387->SetBinContent(5,0.1939123);
   data_mc_ratio__387->SetBinContent(6,0.1787459);
   data_mc_ratio__387->SetBinContent(7,0.2061378);
   data_mc_ratio__387->SetBinContent(8,0.2156403);
   data_mc_ratio__387->SetBinContent(9,0.1937341);
   data_mc_ratio__387->SetBinContent(10,0.2343262);
   data_mc_ratio__387->SetBinContent(11,0.2244483);
   data_mc_ratio__387->SetBinContent(12,0.246046);
   data_mc_ratio__387->SetBinContent(13,0.2322272);
   data_mc_ratio__387->SetBinContent(14,0.2365476);
   data_mc_ratio__387->SetBinContent(15,0.2596922);
   data_mc_ratio__387->SetBinContent(16,0.2477226);
   data_mc_ratio__387->SetBinContent(17,0.2308998);
   data_mc_ratio__387->SetBinContent(18,0.2648964);
   data_mc_ratio__387->SetBinContent(19,0.2586106);
   data_mc_ratio__387->SetBinContent(20,0.2500474);
   data_mc_ratio__387->SetBinContent(21,0.2468137);
   data_mc_ratio__387->SetBinContent(22,0.2753957);
   data_mc_ratio__387->SetBinContent(23,0.2417493);
   data_mc_ratio__387->SetBinContent(24,0.2233667);
   data_mc_ratio__387->SetBinContent(25,0.250142);
   data_mc_ratio__387->SetBinContent(26,0.2170071);
   data_mc_ratio__387->SetBinContent(27,0.2932184);
   data_mc_ratio__387->SetBinContent(28,0.3288025);
   data_mc_ratio__387->SetBinContent(29,0.2879846);
   data_mc_ratio__387->SetBinContent(30,0.1421866);
   data_mc_ratio__387->SetBinContent(31,0.1929417);
   data_mc_ratio__387->SetBinError(1,0.1667064);
   data_mc_ratio__387->SetBinError(2,0.001662283);
   data_mc_ratio__387->SetBinError(3,0.001108448);
   data_mc_ratio__387->SetBinError(4,0.0009097786);
   data_mc_ratio__387->SetBinError(5,0.0007894821);
   data_mc_ratio__387->SetBinError(6,0.000723792);
   data_mc_ratio__387->SetBinError(7,0.0008528877);
   data_mc_ratio__387->SetBinError(8,0.0009152678);
   data_mc_ratio__387->SetBinError(9,0.0008552904);
   data_mc_ratio__387->SetBinError(10,0.00106191);
   data_mc_ratio__387->SetBinError(11,0.001055436);
   data_mc_ratio__387->SetBinError(12,0.001185685);
   data_mc_ratio__387->SetBinError(13,0.001147336);
   data_mc_ratio__387->SetBinError(14,0.001205183);
   data_mc_ratio__387->SetBinError(15,0.001366801);
   data_mc_ratio__387->SetBinError(16,0.001349992);
   data_mc_ratio__387->SetBinError(17,0.001348011);
   data_mc_ratio__387->SetBinError(18,0.001668194);
   data_mc_ratio__387->SetBinError(19,0.001766011);
   data_mc_ratio__387->SetBinError(20,0.001871296);
   data_mc_ratio__387->SetBinError(21,0.002057996);
   data_mc_ratio__387->SetBinError(22,0.002585106);
   data_mc_ratio__387->SetBinError(23,0.002533803);
   data_mc_ratio__387->SetBinError(24,0.002680486);
   data_mc_ratio__387->SetBinError(25,0.003410957);
   data_mc_ratio__387->SetBinError(26,0.003479358);
   data_mc_ratio__387->SetBinError(27,0.005464751);
   data_mc_ratio__387->SetBinError(28,0.007607583);
   data_mc_ratio__387->SetBinError(29,0.008767152);
   data_mc_ratio__387->SetBinError(30,0.005733517);
   data_mc_ratio__387->SetBinError(31,0.09001062);
   data_mc_ratio__387->SetMinimum(0.4);
   data_mc_ratio__387->SetMaximum(1.6);
   data_mc_ratio__387->SetEntries(139.5699);
   data_mc_ratio__387->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__387->SetLineColor(ci);
   data_mc_ratio__387->SetLineWidth(2);
   data_mc_ratio__387->SetMarkerStyle(20);
   data_mc_ratio__387->SetMarkerSize(1.2);
   data_mc_ratio__387->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__387->GetXaxis()->SetRange(1,30);
   data_mc_ratio__387->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__387->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__387->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__387->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__387->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__387->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__387->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__387->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__387->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__387->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__387->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__387->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__387->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__387->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__387->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__387->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__387->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1282[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1282[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1282[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1282[30] = {
   0.7263836,
   0.06129412,
   0.03553491,
   0.03311392,
   0.03288748,
   0.06555387,
   0.03343465,
   0.0368049,
   0.08280341,
   0.0373643,
   0.1049198,
   0.04138868,
   0.1190146,
   0.04371045,
   0.04401081,
   0.04703562,
   0.0517143,
   0.0574252,
   0.05414166,
   0.06958761,
   0.0655946,
   0.06085227,
   0.0743242,
   0.1182999,
   0.1219068,
   0.1234917,
   0.1220212,
   0.1535226,
   0.2177805,
   0.4766165};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1282,Graph_from_mc_statistical_error_fy1282,Graph_from_mc_statistical_error_fex1282,Graph_from_mc_statistical_error_fey1282);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1282 = new TH1F("Graph_Graph_from_mc_statistical_error1282","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1282->SetMinimum(0.1283396);
   Graph_Graph_from_mc_statistical_error1282->SetMaximum(1.87166);
   Graph_Graph_from_mc_statistical_error1282->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1282->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1282->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1282->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1282->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1282->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1282->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1282->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1282->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1282->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1282->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1282->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1282->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1282->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1282->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1282->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1282);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_algo_16->cd();
   H_dR_Bj1_algo_16->Modified();
   H_dR_Bj1_algo_16->cd();
   H_dR_Bj1_algo_16->SetSelected(H_dR_Bj1_algo_16);
}
