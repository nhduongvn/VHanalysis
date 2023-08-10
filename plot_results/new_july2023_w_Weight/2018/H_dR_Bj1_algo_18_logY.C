void H_dR_Bj1_algo_18_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_18/H_dR_Bj1_algo_18
//=========  (Thu Aug 10 12:20:56 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_algo_18 = new TCanvas("H_dR_Bj1_algo_18", "H_dR_Bj1_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_algo_18->SetHighLightColor(2);
   H_dR_Bj1_algo_18->Range(0,0,1,1);
   H_dR_Bj1_algo_18->SetFillColor(0);
   H_dR_Bj1_algo_18->SetFillStyle(4000);
   H_dR_Bj1_algo_18->SetBorderMode(0);
   H_dR_Bj1_algo_18->SetBorderSize(2);
   H_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.908201,6.314516,13.82057);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(3.781557e+11);
   
   TH1F *st_stack_143 = new TH1F("st_stack_143","",30,0,6);
   st_stack_143->SetMinimum(0.001283889);
   st_stack_143->SetMaximum(1.40505e+12);
   st_stack_143->SetDirectory(0);
   st_stack_143->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_143->SetLineColor(ci);
   st_stack_143->GetXaxis()->SetRange(1,30);
   st_stack_143->GetXaxis()->SetLabelFont(42);
   st_stack_143->GetXaxis()->SetLabelSize(0.035);
   st_stack_143->GetXaxis()->SetTitleSize(0.035);
   st_stack_143->GetXaxis()->SetTitleFont(42);
   st_stack_143->GetYaxis()->SetTitle("Events/0.2");
   st_stack_143->GetYaxis()->SetLabelFont(42);
   st_stack_143->GetYaxis()->SetLabelSize(0.05);
   st_stack_143->GetYaxis()->SetTitleSize(0.057);
   st_stack_143->GetYaxis()->SetTitleOffset(1.2);
   st_stack_143->GetYaxis()->SetTitleFont(42);
   st_stack_143->GetZaxis()->SetLabelFont(42);
   st_stack_143->GetZaxis()->SetLabelSize(0.035);
   st_stack_143->GetZaxis()->SetTitleSize(0.035);
   st_stack_143->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_143);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,41977.37);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,95990.96);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,105061.9);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,118296.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,126783.6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,125318.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,123407.9);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,114288.3);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,113400.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,100769);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,96076.32);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,88649.78);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,108128.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,80686.42);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,70795.89);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,61084.62);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,61863.34);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,41950.67);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,38224.22);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(21,30059.62);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(22,22950.25);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(23,19423.05);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(24,13609.28);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(25,9671.827);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(26,6013.456);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(27,4531.434);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(28,3967.519);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(29,2396.343);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(30,897.0157);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(31,963.2085);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,3186.756);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,4493.42);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,4808.896);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,4747.054);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,5935.68);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,4910.36);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,4773.388);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,4946.374);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,5434.373);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,4434.758);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,4490.904);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,3750.204);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,20232.09);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,3693.256);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,3911.999);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,3425.751);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,3665.723);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,2499.396);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,2513.817);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(21,2205.3);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(22,1955.737);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(23,1868.802);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(24,1444.746);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(25,1164.987);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(26,709.214);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(27,591.1897);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(28,770.45);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(29,659.8831);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(30,381.6027);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(31,385.3403);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(112239);

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
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(1,0.8328729);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,293.5581);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,764.9546);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,910.7109);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,1028.82);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,1036.823);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,995.527);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,934.7997);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,865.3127);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,803.5754);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,710.4703);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,656.9428);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,616.6175);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,565.7817);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,513.9484);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,484.8735);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,402.0206);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,361.5336);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,296.5649);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,251.553);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,203.5369);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(22,160.5983);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(23,129.2367);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(24,96.84088);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(25,75.91638);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(26,50.87759);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(27,31.60293);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(28,20.45814);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(29,10.28921);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(30,8.523287);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(31,10.21067);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(1,0.4030471);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,7.207654);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,11.30444);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,12.2838);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,12.91391);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,12.80837);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,12.52621);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,12.03431);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,11.59806);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,11.10915);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,10.36343);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,9.840655);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,9.651177);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,9.192607);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,8.698148);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,8.559716);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,7.697855);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,7.411813);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,6.606719);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,6.206964);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,5.469725);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(22,4.896241);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(23,4.394494);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(24,3.758973);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(25,3.407271);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(26,2.682861);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(27,2.014052);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(28,1.695883);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(29,1.156582);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(30,1.186877);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(31,1.13317);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(153765);

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
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(1,23.70102);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(2,9225.681);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(3,26861.83);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(4,27606.15);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(5,23538.27);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(6,19017.08);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(7,15681.81);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(8,13353.04);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(9,11535.54);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(10,10096.61);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(11,8934.759);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(12,7976.77);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(13,7176.454);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(14,6593.502);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(15,6183.82);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(16,5759.32);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(17,5254.459);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(18,4732.097);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(19,4184.418);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(20,3656.04);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(21,3148.275);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(22,2695.846);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(23,2228.689);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(24,1740.742);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(25,1320.052);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(26,893.6122);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(27,555.688);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(28,296.7474);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(29,145.7923);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(30,71.59564);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(31,90.2816);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(1,1.232624);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(2,25.90531);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(3,44.31497);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(4,44.89131);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(5,41.35657);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(6,37.08587);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(7,33.60791);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(8,30.97874);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(9,28.77731);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(10,26.91545);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(11,25.31597);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(12,23.92281);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(13,22.6907);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(14,21.75472);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(15,21.07341);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(16,20.34267);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(17,19.44);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(18,18.45467);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(19,17.36355);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(20,16.23169);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(21,15.07338);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(22,13.9612);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(23,12.70034);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(24,11.22706);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(25,9.771121);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(26,8.03627);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(27,6.325673);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(28,4.61069);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(29,3.216733);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(30,2.246893);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(31,2.51584);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetEntries(3228671);

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
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(1,0.1851459);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(2,306.4483);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(3,816.1027);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(4,795.3488);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(5,868.372);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(6,839.4893);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(7,815.9883);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(8,754.2862);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(9,720.4897);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(10,644.1151);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(11,590.2254);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(12,549.7726);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(13,529.6073);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(14,489.4972);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(15,410.1628);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(16,398.0903);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(17,352.901);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(18,293.6853);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(19,251.1082);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(20,191.2148);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(21,181.4283);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(22,124.3757);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(23,96.4935);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(24,73.01087);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(25,63.95692);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(26,53.08517);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(27,26.68481);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(28,18.30787);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(29,9.270842);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(30,4.82761);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(31,10.00512);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(1,0.1309179);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(2,12.27956);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(3,20.74018);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(4,26.02807);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(5,25.48202);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(6,24.3579);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(7,23.46684);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(8,22.6017);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(9,22.22565);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(10,18.07746);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(11,16.66979);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(12,16.61286);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(13,17.66253);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(14,14.37229);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(15,12.20596);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(16,13.87947);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(17,12.38825);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(18,12.19853);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(19,12.30399);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(20,11.55605);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(21,10.94843);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(22,9.170382);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(23,7.71714);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(24,6.178033);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(25,4.603889);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(26,5.760444);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(27,2.687732);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(28,2.233217);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(29,1.650127);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(30,1.179738);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(31,4.313507);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetEntries(55877);

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
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(1,0.09321511);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(2,91.18206);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(3,236.7183);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(4,188.6392);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(5,201.225);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(6,296.8474);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(7,268.0991);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(8,211.5134);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(9,225.2631);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(10,218.7912);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(11,186.797);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(12,171.2669);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(13,168.4966);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(14,167.287);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(15,150.9765);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(16,137.1497);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(17,119.6822);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(18,120.582);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(19,104.4622);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(20,65.60893);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(21,53.7512);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(22,43.15724);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(23,26.51465);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(24,18.01371);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(25,12.22329);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(26,13.84503);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(27,8.671796);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(28,2.895933);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(29,1.835465);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(30,3.174076);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(31,4.596379);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(1,0.09321511);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(2,9.491802);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(3,25.42217);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(4,20.01452);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(5,13.43506);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(6,28.75101);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(7,26.09117);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(8,19.83843);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(9,20.63301);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(10,20.44701);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(11,16.48274);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(12,18.35073);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(13,15.60575);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(14,18.73148);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(15,15.71368);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(16,11.63415);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(17,14.37419);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(18,20.26591);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(19,16.87675);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(20,12.1751);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(21,11.78559);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(22,11.83031);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(23,4.566107);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(24,3.406905);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(25,2.506988);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(26,3.81043);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(27,2.409849);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(28,0.7053848);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(29,0.5585087);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(30,2.111449);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(31,2.206243);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetEntries(15424);

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
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(2,1.808171);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(3,2.712256);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(4,1.356128);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(5,4.068384);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(6,2.712256);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(7,2.712256);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(8,2.260213);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(9,1.808171);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(10,1.808171);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(11,0.9040853);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(12,1.356128);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(13,2.712256);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(14,0.4520427);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(15,0.9040853);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(16,1.356128);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(18,0.9040853);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(19,0.9040853);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(20,1.356128);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(21,0.9040853);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(22,0.4520427);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(24,0.9040853);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(28,0.4520427);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(2,0.9040853);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(3,1.107274);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(4,0.7829609);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(5,1.356128);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(6,1.107274);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(7,1.107274);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(8,1.010798);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(9,0.9040853);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(10,0.9040853);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(11,0.6392849);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(12,0.7829609);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(13,1.107274);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(14,0.4520427);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(15,0.6392849);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(16,0.7829609);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(18,0.6392849);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(19,0.6392849);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(20,0.7829609);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(21,0.6392849);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(22,0.4520427);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(24,0.6392849);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(28,0.4520427);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetEntries(77);

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
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(2,9.209177);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(3,17.35576);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(4,6.375584);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(5,3.541991);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(6,6.021385);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(7,3.89619);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(8,3.187792);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(9,2.479394);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(10,1.416796);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(11,2.833593);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(12,2.833593);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(13,4.250389);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(14,1.770996);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(15,4.958788);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(16,3.541991);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(17,1.770996);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(18,2.833593);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(19,1.770996);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(20,0.7083982);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(21,1.062597);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(22,1.062597);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(23,0.3541991);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(24,1.062597);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(25,0.7083982);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(26,1.062597);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(27,0.7083982);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(28,0.3541991);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(30,0.3541991);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(2,1.806068);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(3,2.479394);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(4,1.50274);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(5,1.120076);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(6,1.4604);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(7,1.174746);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(8,1.062597);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(9,0.9371228);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(10,0.7083982);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(11,1.001826);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(12,1.001826);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(13,1.226982);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(14,0.7920133);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(15,1.325292);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(16,1.120076);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(17,0.7920133);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(18,1.001826);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(19,0.7920133);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(20,0.5009132);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(21,0.6134909);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(22,0.6134909);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(23,0.3541991);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(24,0.6134909);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(25,0.5009132);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(26,0.6134909);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(27,0.5009132);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(28,0.3541991);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(30,0.3541991);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetEntries(247);

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
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(2,10.89716);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(3,27.94144);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(4,15.92662);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(5,10.61775);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(6,9.500088);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(7,6.147116);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(8,4.750044);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(9,7.544187);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(10,6.147116);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(11,4.191215);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(12,6.42653);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(13,5.029458);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(14,6.147116);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(15,5.867701);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(16,3.911801);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(17,3.352972);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(18,2.794144);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(19,1.9559);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(20,2.514729);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(21,1.676486);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(22,3.073558);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(23,1.117657);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(24,1.676486);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(25,0.8382431);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(26,0.5588287);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(27,0.5588287);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(28,0.2794144);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(29,0.2794144);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(2,1.744942);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(3,2.794144);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(4,2.109532);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(5,1.722426);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(6,1.629252);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(7,1.310569);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(8,1.152055);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(9,1.45188);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(10,1.310569);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(11,1.082167);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(12,1.340024);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(13,1.185455);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(14,1.310569);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(15,1.280437);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(16,1.045473);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(17,0.9679197);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(18,0.8835858);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(19,0.7392609);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(20,0.8382431);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(21,0.6844226);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(22,0.9267126);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(23,0.5588287);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(24,0.6844226);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(25,0.4839599);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(26,0.3951516);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(27,0.3951516);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(28,0.2794144);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(29,0.2794144);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetEntries(543);

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
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(2,7.277919);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(3,20.21314);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(4,16.63133);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(5,11.24832);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(6,7.154487);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(7,5.261862);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(8,4.260691);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(9,4.070972);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(10,3.670961);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(11,3.456097);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(12,3.206947);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(13,2.816079);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(14,2.733791);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(15,2.493785);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(16,2.169204);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(17,1.876624);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(18,1.588616);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(19,1.394325);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(20,1.117746);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(21,1.049172);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(22,1.069744);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(23,0.9691701);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(24,0.9417408);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(25,0.8091656);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(26,0.6171602);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(27,0.4045828);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(28,0.2034343);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(29,0.05028713);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(30,0.0320009);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(31,0.02285779);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(2,0.1289795);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(3,0.2149483);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(4,0.1949757);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(5,0.160347);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(6,0.1278811);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(7,0.1096697);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(8,0.09868636);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(9,0.09646419);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(10,0.09160242);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(11,0.08888123);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(12,0.08561759);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(13,0.0802305);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(14,0.07904962);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(15,0.07549993);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(16,0.07041534);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(17,0.06549464);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(18,0.06025965);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(19,0.05645457);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(20,0.05054621);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(21,0.04897117);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(22,0.04944895);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(23,0.04706706);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(24,0.04639624);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(25,0.04300667);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(26,0.03755918);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(27,0.03041031);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(28,0.02156399);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(29,0.01072125);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(30,0.008552601);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(31,0.007228267);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetEntries(47604);

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
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(1,0.001195158);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(2,2.267812);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(3,7.971104);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(4,9.084991);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(5,7.746414);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(6,5.443943);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(7,4.275677);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(8,3.540057);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(9,3.126532);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(10,2.870171);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(11,2.549271);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(12,2.266019);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(13,1.989938);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(14,1.852494);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(15,1.761662);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(16,1.637964);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(17,1.521436);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(18,1.302124);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(19,1.112692);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(20,1.032616);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(21,0.8533426);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(22,0.7637057);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(23,0.6184941);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(24,0.4882219);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(25,0.3430102);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(26,0.238434);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(27,0.1595535);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(28,0.07888041);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(29,0.04601357);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(30,0.01314673);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(31,0.01732979);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(1,0.0008451041);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(2,0.03681299);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(3,0.06901712);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(4,0.07368174);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(5,0.06803744);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(6,0.0570367);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(7,0.05054754);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(8,0.04599416);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(9,0.04322441);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(10,0.04141441);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(11,0.03903064);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(12,0.03679844);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(13,0.03448397);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(14,0.03327178);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(15,0.03244583);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(16,0.03128598);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(17,0.03015257);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(18,0.02789484);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(19,0.02578606);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(20,0.02484089);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(21,0.02258184);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(22,0.02136292);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(23,0.01922496);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(24,0.01708072);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(25,0.01431697);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(26,0.01193663);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(27,0.009764519);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(28,0.006865658);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(29,0.005243733);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(30,0.002802893);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(31,0.00321806);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetEntries(112076);

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
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(2,0.07883368);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(3,0.1077394);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(4,0.149784);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(5,0.06832252);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(6,0.06043916);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(7,0.06306695);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(8,0.0236501);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(9,0.03153347);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(10,0.02102232);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(11,0.03678905);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(12,0.03153347);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(13,0.01839453);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(14,0.02102232);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(15,0.02102232);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(16,0.01313895);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(17,0.01839453);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(18,0.002627789);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(19,0.002627789);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(20,0.01313895);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(21,0.007883368);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(22,0.01576674);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(24,0.007883368);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(26,0.005255579);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(28,0.002627789);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(2,0.014393);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(3,0.01682606);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(4,0.01983937);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(5,0.01339915);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(6,0.01260244);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(7,0.01287349);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(8,0.007883368);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(9,0.00910293);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(10,0.007432511);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(11,0.009832288);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(12,0.00910293);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(13,0.006952477);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(14,0.007432511);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(15,0.007432511);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(16,0.005875916);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(17,0.006952477);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(18,0.002627789);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(19,0.002627789);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(20,0.005875916);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(21,0.004551465);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(22,0.006436743);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(24,0.004551465);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(26,0.003716255);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(28,0.002627789);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetEntries(313);

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
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(2,0.01917804);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(3,0.04704612);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(4,0.04434921);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(5,0.03985435);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(6,0.02816774);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(7,0.02187495);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(8,0.02277392);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(9,0.01917804);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(10,0.01947769);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(11,0.01348456);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(12,0.01468318);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(13,0.01168662);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(14,0.01288524);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(15,0.01048799);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(16,0.008090734);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(17,0.009289361);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(18,0.005993136);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(19,0.005393822);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(20,0.005993136);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(21,0.005094166);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(22,0.003895538);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(23,0.003895538);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(24,0.001797941);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(25,0.001198627);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(26,0.003895538);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(27,0.0005993136);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(31,0.0002996568);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(2,0.002397254);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(3,0.003754689);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(4,0.003645482);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(5,0.003455811);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(6,0.00290528);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(7,0.002560269);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(8,0.002612347);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(9,0.002397254);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(10,0.00241591);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(11,0.002010159);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(12,0.002097598);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(13,0.001871356);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(14,0.001964981);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(15,0.001772794);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(16,0.001557062);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(17,0.001668418);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(18,0.001340106);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(19,0.001271336);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(20,0.001340106);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(21,0.001235517);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(22,0.001080428);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(23,0.001080428);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(24,0.0007340063);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(25,0.0005993136);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(26,0.001080428);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(27,0.0004237787);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(31,0.0002996568);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetEntries(1270);

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
   
   TH1D *VbbHcc_algo_H_dR_Bj1__392 = new TH1D("VbbHcc_algo_H_dR_Bj1__392","",30,0,6);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(1,93);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(2,56861);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(3,124511);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(4,134203);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(5,159991);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(6,162163);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(7,154681);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(8,145040);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(9,135114);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(10,125424);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(11,116194);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(12,107839);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(13,99763);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(14,93054);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(15,86796);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(16,80449);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(17,68984);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(18,60054);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(19,50293);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(20,42139);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(21,34097);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(22,27031);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(23,21542);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(24,16825);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(25,12937);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(26,9265);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(27,6358);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(28,3870);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(29,2264);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(30,1346);
   VbbHcc_algo_H_dR_Bj1__392->SetBinContent(31,1505);
   VbbHcc_algo_H_dR_Bj1__392->SetEntries(2140715);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1__392->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1__392->SetLineWidth(2);
   VbbHcc_algo_H_dR_Bj1__392->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_Bj1__392->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_Bj1__392->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1__392->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__392->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__392->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__392->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__392->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__392->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__392->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__392->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1__392->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__392->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__392->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__392->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__392->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__392->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fx1285[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fy1285[30] = {
   24.81345,
   51925.8,
   124746.9,
   134612.3,
   143970.4,
   148004.8,
   143102.4,
   138679.6,
   127653.9,
   125179.5,
   111205.2,
   105447.2,
   97157.78,
   115957.2,
   87961.34,
   77587.96,
   67222.24,
   67380.67,
   46794.37,
   42395.38,
   33652.17,
   25980.67,
   21907.04,
   15542.97,
   11146.68,
   7027.362,
   5155.913,
   4307.299,
   2563.906,
   985.5357};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fex1285[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fey1285[30] = {
   1.306767,
   3186.908,
   4493.774,
   4809.234,
   4747.34,
   5935.93,
   4910.617,
   4773.598,
   4946.564,
   5434.52,
   4434.904,
   4491.047,
   3750.36,
   20232.11,
   3693.38,
   3912.104,
   3425.868,
   3665.854,
   2499.553,
   2513.933,
   2205.417,
   1955.85,
   1868.872,
   1444.812,
   1165.045,
   709.2986,
   591.2384,
   770.4695,
   659.8943,
   381.619};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_Bj1_fx1285,Graph_from_VbbHcc_algo_H_dR_Bj1_fy1285,Graph_from_VbbHcc_algo_H_dR_Bj1_fex1285,Graph_from_VbbHcc_algo_H_dR_Bj1_fey1285);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->SetMinimum(21.15601);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->SetMaximum(169332.4);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1","Data (JetHT, 2018)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj1_algo_18->cd();
  
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
   
   TH1D *data_mc_ratio__393 = new TH1D("data_mc_ratio__393","",30,0,6);
   data_mc_ratio__393->SetBinContent(1,3.747968);
   data_mc_ratio__393->SetBinContent(2,1.095043);
   data_mc_ratio__393->SetBinContent(3,0.9981088);
   data_mc_ratio__393->SetBinContent(4,0.9969592);
   data_mc_ratio__393->SetBinContent(5,1.111277);
   data_mc_ratio__393->SetBinContent(6,1.095661);
   data_mc_ratio__393->SetBinContent(7,1.080912);
   data_mc_ratio__393->SetBinContent(8,1.045864);
   data_mc_ratio__393->SetBinContent(9,1.05844);
   data_mc_ratio__393->SetBinContent(10,1.001953);
   data_mc_ratio__393->SetBinContent(11,1.044861);
   data_mc_ratio__393->SetBinContent(12,1.022682);
   data_mc_ratio__393->SetBinContent(13,1.026814);
   data_mc_ratio__393->SetBinContent(14,0.8024859);
   data_mc_ratio__393->SetBinContent(15,0.9867516);
   data_mc_ratio__393->SetBinContent(16,1.036875);
   data_mc_ratio__393->SetBinContent(17,1.026208);
   data_mc_ratio__393->SetBinContent(18,0.8912646);
   data_mc_ratio__393->SetBinContent(19,1.074766);
   data_mc_ratio__393->SetBinContent(20,0.9939526);
   data_mc_ratio__393->SetBinContent(21,1.013218);
   data_mc_ratio__393->SetBinContent(22,1.040427);
   data_mc_ratio__393->SetBinContent(23,0.9833366);
   data_mc_ratio__393->SetBinContent(24,1.082483);
   data_mc_ratio__393->SetBinContent(25,1.160615);
   data_mc_ratio__393->SetBinContent(26,1.318418);
   data_mc_ratio__393->SetBinContent(27,1.233147);
   data_mc_ratio__393->SetBinContent(28,0.8984748);
   data_mc_ratio__393->SetBinContent(29,0.8830276);
   data_mc_ratio__393->SetBinContent(30,1.365755);
   data_mc_ratio__393->SetBinContent(31,1.39566);
   data_mc_ratio__393->SetBinError(1,0.3886462);
   data_mc_ratio__393->SetBinError(2,0.004592235);
   data_mc_ratio__393->SetBinError(3,0.002828616);
   data_mc_ratio__393->SetBinError(4,0.002721424);
   data_mc_ratio__393->SetBinError(5,0.00277827);
   data_mc_ratio__393->SetBinError(6,0.002720822);
   data_mc_ratio__393->SetBinError(7,0.002748348);
   data_mc_ratio__393->SetBinError(8,0.002746194);
   data_mc_ratio__393->SetBinError(9,0.002879492);
   data_mc_ratio__393->SetBinError(10,0.002829158);
   data_mc_ratio__393->SetBinError(11,0.003065256);
   data_mc_ratio__393->SetBinError(12,0.003114245);
   data_mc_ratio__393->SetBinError(13,0.003250926);
   data_mc_ratio__393->SetBinError(14,0.002630691);
   data_mc_ratio__393->SetBinError(15,0.00334933);
   data_mc_ratio__393->SetBinError(16,0.003655662);
   data_mc_ratio__393->SetBinError(17,0.00390716);
   data_mc_ratio__393->SetBinError(18,0.003636936);
   data_mc_ratio__393->SetBinError(19,0.004792479);
   data_mc_ratio__393->SetBinError(20,0.004841986);
   data_mc_ratio__393->SetBinError(21,0.005487126);
   data_mc_ratio__393->SetBinError(22,0.006328208);
   data_mc_ratio__393->SetBinError(23,0.006699759);
   data_mc_ratio__393->SetBinError(24,0.00834533);
   data_mc_ratio__393->SetBinError(25,0.01020402);
   data_mc_ratio__393->SetBinError(26,0.01369716);
   data_mc_ratio__393->SetBinError(27,0.01546517);
   data_mc_ratio__393->SetBinError(28,0.01444277);
   data_mc_ratio__393->SetBinError(29,0.01855821);
   data_mc_ratio__393->SetBinError(30,0.03722633);
   data_mc_ratio__393->SetBinError(31,0.50008);
   data_mc_ratio__393->SetMinimum(0.4);
   data_mc_ratio__393->SetMaximum(1.6);
   data_mc_ratio__393->SetEntries(1692.187);
   data_mc_ratio__393->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__393->SetLineColor(ci);
   data_mc_ratio__393->SetLineWidth(2);
   data_mc_ratio__393->SetMarkerStyle(20);
   data_mc_ratio__393->SetMarkerSize(1.2);
   data_mc_ratio__393->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__393->GetXaxis()->SetRange(1,30);
   data_mc_ratio__393->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__393->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__393->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__393->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__393->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__393->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__393->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__393->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__393->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__393->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__393->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__393->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__393->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__393->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__393->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__393->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__393->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1286[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1286[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1286[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1286[30] = {
   0.05266366,
   0.06137428,
   0.03602313,
   0.03572655,
   0.03297441,
   0.04010634,
   0.03431542,
   0.03442177,
   0.0387498,
   0.04341382,
   0.03988037,
   0.04259048,
   0.03860072,
   0.1744792,
   0.04198868,
   0.05042153,
   0.05096331,
   0.05440513,
   0.05341568,
   0.05929733,
   0.06553564,
   0.07528099,
   0.08530918,
   0.09295598,
   0.1045195,
   0.1009338,
   0.1146719,
   0.1788753,
   0.2573785,
   0.3872199};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1286,Graph_from_mc_statistical_error_fy1286,Graph_from_mc_statistical_error_fex1286,Graph_from_mc_statistical_error_fey1286);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1286 = new TH1F("Graph_Graph_from_mc_statistical_error1286","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1286->SetMinimum(0.5353361);
   Graph_Graph_from_mc_statistical_error1286->SetMaximum(1.464664);
   Graph_Graph_from_mc_statistical_error1286->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1286->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1286->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1286->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1286->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1286->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1286->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1286->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1286->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1286->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1286->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1286->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1286->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1286->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1286->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1286->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1286);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_algo_18->cd();
   H_dR_Bj1_algo_18->Modified();
   H_dR_Bj1_algo_18->cd();
   H_dR_Bj1_algo_18->SetSelected(H_dR_Bj1_algo_18);
}
