void Z_dR_both_16()
{
//=========Macro generated from canvas: Z_dR_both_16/Z_dR_both_16
//=========  (Fri Jul 14 13:38:44 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_both_16 = new TCanvas("Z_dR_both_16", "Z_dR_both_16",0,0,600,600);
   Z_dR_both_16->SetHighLightColor(2);
   Z_dR_both_16->Range(0,0,1,1);
   Z_dR_both_16->SetFillColor(0);
   Z_dR_both_16->SetFillStyle(4000);
   Z_dR_both_16->SetBorderMode(0);
   Z_dR_both_16->SetBorderSize(2);
   Z_dR_both_16->SetFrameFillStyle(1000);
   Z_dR_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-717.2166,6.314516,716509.4);
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
   st->SetMaximum(614082.6);
   
   TH1F *st_stack_209 = new TH1F("st_stack_209","",30,0,6);
   st_stack_209->SetMinimum(0.01);
   st_stack_209->SetMaximum(644786.7);
   st_stack_209->SetDirectory(0);
   st_stack_209->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_209->SetLineColor(ci);
   st_stack_209->GetXaxis()->SetRange(1,30);
   st_stack_209->GetXaxis()->SetLabelFont(42);
   st_stack_209->GetXaxis()->SetLabelSize(0.035);
   st_stack_209->GetXaxis()->SetTitleSize(0.035);
   st_stack_209->GetXaxis()->SetTitleFont(42);
   st_stack_209->GetYaxis()->SetTitle("Events/0.2");
   st_stack_209->GetYaxis()->SetLabelFont(42);
   st_stack_209->GetYaxis()->SetLabelSize(0.05);
   st_stack_209->GetYaxis()->SetTitleSize(0.057);
   st_stack_209->GetYaxis()->SetTitleOffset(1.2);
   st_stack_209->GetYaxis()->SetTitleFont(42);
   st_stack_209->GetZaxis()->SetLabelFont(42);
   st_stack_209->GetZaxis()->SetLabelSize(0.035);
   st_stack_209->GetZaxis()->SetTitleSize(0.035);
   st_stack_209->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_209);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(2,85.39974);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,239606.5);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,260172);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,206862);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,161797.8);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,131711.5);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,108543.5);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,117223.4);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,117158.1);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,100011.3);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,95297.77);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,101167.6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,135188.4);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,121114);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,122335.4);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,109126.5);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,123725.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,95468.01);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,84543.17);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,65489.76);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,62763.85);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,46820.79);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,47489.35);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,33247.19);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(26,30902.98);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(27,30818.15);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(28,27515.31);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(29,34621.87);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(30,20235.65);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(31,11492.26);
   VbbHcc_both_Z_dR_stack_1->SetBinError(2,38.27175);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,6260.463);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,8209.354);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,23553.41);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,7410.395);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,5993.08);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,4351.025);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,6474.443);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,6559.2);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,5689.923);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,4984.248);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,5918.01);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,24141.75);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,6521.166);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,5262.746);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,5986.063);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,21867.83);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,5385.577);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,5305.183);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,4178.236);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,4355.82);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,3481.177);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,4505.982);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,2408.956);
   VbbHcc_both_Z_dR_stack_1->SetBinError(26,2805.92);
   VbbHcc_both_Z_dR_stack_1->SetBinError(27,3020.456);
   VbbHcc_both_Z_dR_stack_1->SetBinError(28,2616.973);
   VbbHcc_both_Z_dR_stack_1->SetBinError(29,4067.738);
   VbbHcc_both_Z_dR_stack_1->SetBinError(30,2692.269);
   VbbHcc_both_Z_dR_stack_1->SetBinError(31,1333.573);
   VbbHcc_both_Z_dR_stack_1->SetEntries(182810);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_2 = new TH1D("VbbHcc_both_Z_dR_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(2,0.421902);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,417.5222);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,767.8092);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,901.3643);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,1024.964);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,1140.371);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,1227.711);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,1304.412);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,1390.89);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,1509.282);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,1594.867);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,1682.772);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,1743.69);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,1776.984);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,1766.685);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,1666.431);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,1481.894);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,1366.201);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,1164.676);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,1007.735);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,849.3955);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,686.41);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,558.7635);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,448.0514);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,361.4228);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(27,288.0376);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(28,219.3405);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(29,171.214);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(30,109.0189);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(31,95.7269);
   VbbHcc_both_Z_dR_stack_2->SetBinError(2,0.2913491);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,8.571198);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,11.73415);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,12.78909);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,13.60169);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,14.27241);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,14.79442);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,15.2949);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,15.68132);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,16.4087);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,16.8082);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,17.33754);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,17.64251);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,17.8044);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,17.77157);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,17.15823);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,16.07829);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,15.57391);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,14.29845);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,13.34887);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,12.34183);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,11.04478);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,10.06282);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,9.020721);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,8.181131);
   VbbHcc_both_Z_dR_stack_2->SetBinError(27,7.330231);
   VbbHcc_both_Z_dR_stack_2->SetBinError(28,6.391098);
   VbbHcc_both_Z_dR_stack_2->SetBinError(29,5.60342);
   VbbHcc_both_Z_dR_stack_2->SetBinError(30,4.604928);
   VbbHcc_both_Z_dR_stack_2->SetBinError(31,4.216308);
   VbbHcc_both_Z_dR_stack_2->SetEntries(401943);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_3 = new TH1D("VbbHcc_both_Z_dR_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(2,5.141751);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(3,6226.071);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(4,11884.08);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(5,14102.37);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(6,16307.25);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(7,17982.82);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(8,19291.2);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(9,20688.76);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(10,22343.76);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(11,24470.26);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(12,26979.16);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(13,29494.51);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(14,31893.21);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(15,33506.46);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(16,34131.59);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(17,32729.77);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(18,30298.12);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(19,26782.02);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(20,22688.63);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(21,18684.37);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(22,14991.14);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(23,11748.91);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(24,9139.379);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(25,6992.713);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(26,5338.111);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(27,4080.662);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(28,3043.589);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(29,2189.626);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(30,1351.5);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(31,1153.65);
   VbbHcc_both_Z_dR_stack_3->SetBinError(2,0.5781518);
   VbbHcc_both_Z_dR_stack_3->SetBinError(3,20.33762);
   VbbHcc_both_Z_dR_stack_3->SetBinError(4,28.12752);
   VbbHcc_both_Z_dR_stack_3->SetBinError(5,30.67247);
   VbbHcc_both_Z_dR_stack_3->SetBinError(6,32.98974);
   VbbHcc_both_Z_dR_stack_3->SetBinError(7,34.63116);
   VbbHcc_both_Z_dR_stack_3->SetBinError(8,35.86019);
   VbbHcc_both_Z_dR_stack_3->SetBinError(9,37.13873);
   VbbHcc_both_Z_dR_stack_3->SetBinError(10,38.60237);
   VbbHcc_both_Z_dR_stack_3->SetBinError(11,40.43363);
   VbbHcc_both_Z_dR_stack_3->SetBinError(12,42.51214);
   VbbHcc_both_Z_dR_stack_3->SetBinError(13,44.50419);
   VbbHcc_both_Z_dR_stack_3->SetBinError(14,46.34855);
   VbbHcc_both_Z_dR_stack_3->SetBinError(15,47.57629);
   VbbHcc_both_Z_dR_stack_3->SetBinError(16,48.08415);
   VbbHcc_both_Z_dR_stack_3->SetBinError(17,47.11968);
   VbbHcc_both_Z_dR_stack_3->SetBinError(18,45.37393);
   VbbHcc_both_Z_dR_stack_3->SetBinError(19,42.64227);
   VbbHcc_both_Z_dR_stack_3->SetBinError(20,39.21422);
   VbbHcc_both_Z_dR_stack_3->SetBinError(21,35.55954);
   VbbHcc_both_Z_dR_stack_3->SetBinError(22,31.82235);
   VbbHcc_both_Z_dR_stack_3->SetBinError(23,28.13664);
   VbbHcc_both_Z_dR_stack_3->SetBinError(24,24.76382);
   VbbHcc_both_Z_dR_stack_3->SetBinError(25,21.63406);
   VbbHcc_both_Z_dR_stack_3->SetBinError(26,18.87254);
   VbbHcc_both_Z_dR_stack_3->SetBinError(27,16.48248);
   VbbHcc_both_Z_dR_stack_3->SetBinError(28,14.21521);
   VbbHcc_both_Z_dR_stack_3->SetBinError(29,12.05524);
   VbbHcc_both_Z_dR_stack_3->SetBinError(30,9.443607);
   VbbHcc_both_Z_dR_stack_3->SetBinError(31,8.715622);
   VbbHcc_both_Z_dR_stack_3->SetEntries(7926175);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_4 = new TH1D("VbbHcc_both_Z_dR_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(2,0.5458396);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(3,1559.778);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(4,2296.503);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(5,2169.717);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(6,1982.004);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(7,1450.205);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(8,1043.788);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(9,781.82);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(10,670.7619);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(11,656.1807);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(12,633.3931);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(13,650.0223);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(14,741.2422);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(15,791.1565);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(16,796.6124);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(17,715.4158);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(18,706.4849);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(19,638.4293);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(20,522.5719);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(21,444.8139);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(22,365.9361);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(23,332.9766);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(24,279.9714);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(25,277.2266);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(26,284.2341);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(27,286.295);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(28,273.522);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(29,225.6541);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(30,148.7298);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(31,89.55287);
   VbbHcc_both_Z_dR_stack_4->SetBinError(2,0.1973111);
   VbbHcc_both_Z_dR_stack_4->SetBinError(3,17.62984);
   VbbHcc_both_Z_dR_stack_4->SetBinError(4,22.44488);
   VbbHcc_both_Z_dR_stack_4->SetBinError(5,29.85329);
   VbbHcc_both_Z_dR_stack_4->SetBinError(6,39.77514);
   VbbHcc_both_Z_dR_stack_4->SetBinError(7,37.26465);
   VbbHcc_both_Z_dR_stack_4->SetBinError(8,31.75169);
   VbbHcc_both_Z_dR_stack_4->SetBinError(9,26.16847);
   VbbHcc_both_Z_dR_stack_4->SetBinError(10,22.31043);
   VbbHcc_both_Z_dR_stack_4->SetBinError(11,22.94613);
   VbbHcc_both_Z_dR_stack_4->SetBinError(12,21.0475);
   VbbHcc_both_Z_dR_stack_4->SetBinError(13,19.6779);
   VbbHcc_both_Z_dR_stack_4->SetBinError(14,22.45786);
   VbbHcc_both_Z_dR_stack_4->SetBinError(15,23.61669);
   VbbHcc_both_Z_dR_stack_4->SetBinError(16,22.92165);
   VbbHcc_both_Z_dR_stack_4->SetBinError(17,19.33469);
   VbbHcc_both_Z_dR_stack_4->SetBinError(18,20.95421);
   VbbHcc_both_Z_dR_stack_4->SetBinError(19,20.95483);
   VbbHcc_both_Z_dR_stack_4->SetBinError(20,17.35436);
   VbbHcc_both_Z_dR_stack_4->SetBinError(21,16.17277);
   VbbHcc_both_Z_dR_stack_4->SetBinError(22,14.53186);
   VbbHcc_both_Z_dR_stack_4->SetBinError(23,14.9518);
   VbbHcc_both_Z_dR_stack_4->SetBinError(24,13.10669);
   VbbHcc_both_Z_dR_stack_4->SetBinError(25,14.35327);
   VbbHcc_both_Z_dR_stack_4->SetBinError(26,13.92044);
   VbbHcc_both_Z_dR_stack_4->SetBinError(27,14.42282);
   VbbHcc_both_Z_dR_stack_4->SetBinError(28,11.64822);
   VbbHcc_both_Z_dR_stack_4->SetBinError(29,8.422702);
   VbbHcc_both_Z_dR_stack_4->SetBinError(30,6.83639);
   VbbHcc_both_Z_dR_stack_4->SetBinError(31,6.168597);
   VbbHcc_both_Z_dR_stack_4->SetEntries(171964);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_5 = new TH1D("VbbHcc_both_Z_dR_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(2,0.7863665);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(3,1278.43);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(4,1149.238);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(5,763.1103);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(6,647.8666);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(7,544.76);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(8,486.8461);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(9,417.8547);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(10,450.6188);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(11,438.7875);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(12,443.7659);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(13,475.4661);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(14,527.2929);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(15,604.2464);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(16,606.2858);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(17,563.199);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(18,500.0898);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(19,474.5977);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(20,395.1324);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(21,321.6449);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(22,262.0261);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(23,202.653);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(24,167.6263);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(25,163.1711);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(26,144.2641);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(27,135.835);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(28,107.8259);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(29,113.3833);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(30,73.90733);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(31,63.76254);
   VbbHcc_both_Z_dR_stack_5->SetBinError(2,0.3084681);
   VbbHcc_both_Z_dR_stack_5->SetBinError(3,40.19658);
   VbbHcc_both_Z_dR_stack_5->SetBinError(4,39.35072);
   VbbHcc_both_Z_dR_stack_5->SetBinError(5,25.73323);
   VbbHcc_both_Z_dR_stack_5->SetBinError(6,29.35409);
   VbbHcc_both_Z_dR_stack_5->SetBinError(7,30.38249);
   VbbHcc_both_Z_dR_stack_5->SetBinError(8,25.09983);
   VbbHcc_both_Z_dR_stack_5->SetBinError(9,22.15883);
   VbbHcc_both_Z_dR_stack_5->SetBinError(10,27.33283);
   VbbHcc_both_Z_dR_stack_5->SetBinError(11,25.4034);
   VbbHcc_both_Z_dR_stack_5->SetBinError(12,25.58791);
   VbbHcc_both_Z_dR_stack_5->SetBinError(13,27.31411);
   VbbHcc_both_Z_dR_stack_5->SetBinError(14,27.7321);
   VbbHcc_both_Z_dR_stack_5->SetBinError(15,32.65161);
   VbbHcc_both_Z_dR_stack_5->SetBinError(16,34.05503);
   VbbHcc_both_Z_dR_stack_5->SetBinError(17,28.29623);
   VbbHcc_both_Z_dR_stack_5->SetBinError(18,26.46179);
   VbbHcc_both_Z_dR_stack_5->SetBinError(19,28.56616);
   VbbHcc_both_Z_dR_stack_5->SetBinError(20,24.15799);
   VbbHcc_both_Z_dR_stack_5->SetBinError(21,19.35171);
   VbbHcc_both_Z_dR_stack_5->SetBinError(22,16.14938);
   VbbHcc_both_Z_dR_stack_5->SetBinError(23,16.21098);
   VbbHcc_both_Z_dR_stack_5->SetBinError(24,12.1132);
   VbbHcc_both_Z_dR_stack_5->SetBinError(25,14.90334);
   VbbHcc_both_Z_dR_stack_5->SetBinError(26,12.92337);
   VbbHcc_both_Z_dR_stack_5->SetBinError(27,15.0431);
   VbbHcc_both_Z_dR_stack_5->SetBinError(28,9.579368);
   VbbHcc_both_Z_dR_stack_5->SetBinError(29,10.18715);
   VbbHcc_both_Z_dR_stack_5->SetBinError(30,8.379142);
   VbbHcc_both_Z_dR_stack_5->SetBinError(31,8.432095);
   VbbHcc_both_Z_dR_stack_5->SetEntries(118385);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_6 = new TH1D("VbbHcc_both_Z_dR_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(3,4.632742);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(4,4.493378);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(5,2.666096);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(6,2.714078);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(7,2.710733);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(8,2.217212);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(9,2.075616);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(10,2.302035);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(11,3.922738);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(12,2.641979);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(13,4.068114);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(14,3.287718);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(15,4.357827);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(16,4.903046);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(17,2.975659);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(18,3.347584);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(19,3.783507);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(20,2.773631);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(21,1.426397);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(22,1.234907);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(23,1.203965);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(24,1.114395);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(25,1.177454);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(26,1.026054);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(27,0.3718345);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(28,0.7070037);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(29,0.7329037);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(30,0.4677638);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(31,0.2906975);
   VbbHcc_both_Z_dR_stack_6->SetBinError(3,0.6473554);
   VbbHcc_both_Z_dR_stack_6->SetBinError(4,0.639201);
   VbbHcc_both_Z_dR_stack_6->SetBinError(5,0.4839726);
   VbbHcc_both_Z_dR_stack_6->SetBinError(6,0.4977492);
   VbbHcc_both_Z_dR_stack_6->SetBinError(7,0.4911681);
   VbbHcc_both_Z_dR_stack_6->SetBinError(8,0.4552442);
   VbbHcc_both_Z_dR_stack_6->SetBinError(9,0.4331854);
   VbbHcc_both_Z_dR_stack_6->SetBinError(10,0.4568267);
   VbbHcc_both_Z_dR_stack_6->SetBinError(11,0.5993828);
   VbbHcc_both_Z_dR_stack_6->SetBinError(12,0.4868578);
   VbbHcc_both_Z_dR_stack_6->SetBinError(13,0.6021277);
   VbbHcc_both_Z_dR_stack_6->SetBinError(14,0.5497027);
   VbbHcc_both_Z_dR_stack_6->SetBinError(15,0.6315702);
   VbbHcc_both_Z_dR_stack_6->SetBinError(16,0.6624837);
   VbbHcc_both_Z_dR_stack_6->SetBinError(17,0.5210035);
   VbbHcc_both_Z_dR_stack_6->SetBinError(18,0.5520193);
   VbbHcc_both_Z_dR_stack_6->SetBinError(19,0.5879915);
   VbbHcc_both_Z_dR_stack_6->SetBinError(20,0.5046877);
   VbbHcc_both_Z_dR_stack_6->SetBinError(21,0.3583105);
   VbbHcc_both_Z_dR_stack_6->SetBinError(22,0.3432583);
   VbbHcc_both_Z_dR_stack_6->SetBinError(23,0.3343711);
   VbbHcc_both_Z_dR_stack_6->SetBinError(24,0.3219249);
   VbbHcc_both_Z_dR_stack_6->SetBinError(25,0.3273384);
   VbbHcc_both_Z_dR_stack_6->SetBinError(26,0.3109928);
   VbbHcc_both_Z_dR_stack_6->SetBinError(27,0.185963);
   VbbHcc_both_Z_dR_stack_6->SetBinError(28,0.2513711);
   VbbHcc_both_Z_dR_stack_6->SetBinError(29,0.2599037);
   VbbHcc_both_Z_dR_stack_6->SetBinError(30,0.2096306);
   VbbHcc_both_Z_dR_stack_6->SetBinError(31,0.1680707);
   VbbHcc_both_Z_dR_stack_6->SetEntries(777);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_7 = new TH1D("VbbHcc_both_Z_dR_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(3,15.99905);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(4,29.65725);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(5,23.528);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(6,17.16575);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(7,12.93766);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(8,6.699713);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(9,5.030537);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(10,3.101282);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(11,3.187088);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(12,3.160217);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(13,2.967901);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(14,3.612754);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(15,4.81176);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(16,4.159012);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(17,4.611243);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(18,3.74627);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(19,3.571878);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(20,3.187268);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(21,3.06263);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(22,1.847805);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(23,1.531428);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(24,1.022739);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(25,1.621448);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(26,1.371971);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(27,2.623316);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(28,2.621103);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(29,1.855474);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(30,1.153652);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(31,1.204696);
   VbbHcc_both_Z_dR_stack_7->SetBinError(3,1.043886);
   VbbHcc_both_Z_dR_stack_7->SetBinError(4,1.421084);
   VbbHcc_both_Z_dR_stack_7->SetBinError(5,1.271006);
   VbbHcc_both_Z_dR_stack_7->SetBinError(6,1.078297);
   VbbHcc_both_Z_dR_stack_7->SetBinError(7,0.9425186);
   VbbHcc_both_Z_dR_stack_7->SetBinError(8,0.6798868);
   VbbHcc_both_Z_dR_stack_7->SetBinError(9,0.5850763);
   VbbHcc_both_Z_dR_stack_7->SetBinError(10,0.456514);
   VbbHcc_both_Z_dR_stack_7->SetBinError(11,0.4610646);
   VbbHcc_both_Z_dR_stack_7->SetBinError(12,0.4630022);
   VbbHcc_both_Z_dR_stack_7->SetBinError(13,0.448189);
   VbbHcc_both_Z_dR_stack_7->SetBinError(14,0.4883332);
   VbbHcc_both_Z_dR_stack_7->SetBinError(15,0.5705952);
   VbbHcc_both_Z_dR_stack_7->SetBinError(16,0.5382379);
   VbbHcc_both_Z_dR_stack_7->SetBinError(17,0.5648671);
   VbbHcc_both_Z_dR_stack_7->SetBinError(18,0.5057057);
   VbbHcc_both_Z_dR_stack_7->SetBinError(19,0.4934768);
   VbbHcc_both_Z_dR_stack_7->SetBinError(20,0.4649297);
   VbbHcc_both_Z_dR_stack_7->SetBinError(21,0.4578078);
   VbbHcc_both_Z_dR_stack_7->SetBinError(22,0.3534555);
   VbbHcc_both_Z_dR_stack_7->SetBinError(23,0.3219492);
   VbbHcc_both_Z_dR_stack_7->SetBinError(24,0.264358);
   VbbHcc_both_Z_dR_stack_7->SetBinError(25,0.3300724);
   VbbHcc_both_Z_dR_stack_7->SetBinError(26,0.3075815);
   VbbHcc_both_Z_dR_stack_7->SetBinError(27,0.4267948);
   VbbHcc_both_Z_dR_stack_7->SetBinError(28,0.4188572);
   VbbHcc_both_Z_dR_stack_7->SetBinError(29,0.3520372);
   VbbHcc_both_Z_dR_stack_7->SetBinError(30,0.2811511);
   VbbHcc_both_Z_dR_stack_7->SetBinError(31,0.2859668);
   VbbHcc_both_Z_dR_stack_7->SetEntries(2557);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_8 = new TH1D("VbbHcc_both_Z_dR_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(3,14.22681);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(4,20.54388);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(5,19.73483);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(6,14.89208);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(7,11.50845);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(8,6.549352);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(9,5.917355);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(10,4.551065);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(11,3.496763);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(12,2.625818);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(13,3.98636);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(14,5.135479);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(15,5.459479);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(16,7.366626);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(17,5.954051);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(18,5.893084);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(19,3.275378);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(20,2.716881);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(21,2.345765);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(22,2.34465);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(23,1.548126);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(24,1.996231);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(25,1.700927);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(26,1.826414);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(27,1.86013);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(28,3.431419);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(29,1.150295);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(30,1.018123);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(31,0.2151267);
   VbbHcc_both_Z_dR_stack_8->SetBinError(3,1.652569);
   VbbHcc_both_Z_dR_stack_8->SetBinError(4,1.992128);
   VbbHcc_both_Z_dR_stack_8->SetBinError(5,1.94059);
   VbbHcc_both_Z_dR_stack_8->SetBinError(6,1.683525);
   VbbHcc_both_Z_dR_stack_8->SetBinError(7,1.490209);
   VbbHcc_both_Z_dR_stack_8->SetBinError(8,1.123645);
   VbbHcc_both_Z_dR_stack_8->SetBinError(9,1.065043);
   VbbHcc_both_Z_dR_stack_8->SetBinError(10,0.9336293);
   VbbHcc_both_Z_dR_stack_8->SetBinError(11,0.8256207);
   VbbHcc_both_Z_dR_stack_8->SetBinError(12,0.7195115);
   VbbHcc_both_Z_dR_stack_8->SetBinError(13,0.8733756);
   VbbHcc_both_Z_dR_stack_8->SetBinError(14,0.9884612);
   VbbHcc_both_Z_dR_stack_8->SetBinError(15,1.020187);
   VbbHcc_both_Z_dR_stack_8->SetBinError(16,1.185575);
   VbbHcc_both_Z_dR_stack_8->SetBinError(17,1.071851);
   VbbHcc_both_Z_dR_stack_8->SetBinError(18,1.061579);
   VbbHcc_both_Z_dR_stack_8->SetBinError(19,0.7813008);
   VbbHcc_both_Z_dR_stack_8->SetBinError(20,0.7266305);
   VbbHcc_both_Z_dR_stack_8->SetBinError(21,0.6788282);
   VbbHcc_both_Z_dR_stack_8->SetBinError(22,0.6564125);
   VbbHcc_both_Z_dR_stack_8->SetBinError(23,0.5480867);
   VbbHcc_both_Z_dR_stack_8->SetBinError(24,0.6043243);
   VbbHcc_both_Z_dR_stack_8->SetBinError(25,0.5672765);
   VbbHcc_both_Z_dR_stack_8->SetBinError(26,0.5819287);
   VbbHcc_both_Z_dR_stack_8->SetBinError(27,0.5899676);
   VbbHcc_both_Z_dR_stack_8->SetBinError(28,0.8110065);
   VbbHcc_both_Z_dR_stack_8->SetBinError(29,0.4708077);
   VbbHcc_both_Z_dR_stack_8->SetBinError(30,0.4393041);
   VbbHcc_both_Z_dR_stack_8->SetBinError(31,0.2151267);
   VbbHcc_both_Z_dR_stack_8->SetEntries(868);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_9 = new TH1D("VbbHcc_both_Z_dR_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(3,3.608403);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(4,7.967089);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(5,9.374616);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(6,10.04737);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(7,8.837572);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(8,6.720625);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(9,4.879222);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(10,3.756643);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(11,3.257549);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(12,3.114808);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(13,3.37601);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(14,3.66702);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(15,4.152159);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(16,4.281555);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(17,4.403989);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(18,3.595859);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(19,2.911484);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(20,2.307694);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(21,1.794732);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(22,1.607803);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(23,1.329527);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(24,1.378243);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(25,1.465777);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(26,1.484308);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(27,1.307682);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(28,1.161625);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(29,0.8885194);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(30,0.4943755);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(31,0.3450375);
   VbbHcc_both_Z_dR_stack_9->SetBinError(3,0.07351314);
   VbbHcc_both_Z_dR_stack_9->SetBinError(4,0.1097421);
   VbbHcc_both_Z_dR_stack_9->SetBinError(5,0.1193245);
   VbbHcc_both_Z_dR_stack_9->SetBinError(6,0.1231671);
   VbbHcc_both_Z_dR_stack_9->SetBinError(7,0.1154735);
   VbbHcc_both_Z_dR_stack_9->SetBinError(8,0.101108);
   VbbHcc_both_Z_dR_stack_9->SetBinError(9,0.08557653);
   VbbHcc_both_Z_dR_stack_9->SetBinError(10,0.07487364);
   VbbHcc_both_Z_dR_stack_9->SetBinError(11,0.06962477);
   VbbHcc_both_Z_dR_stack_9->SetBinError(12,0.06832359);
   VbbHcc_both_Z_dR_stack_9->SetBinError(13,0.07108386);
   VbbHcc_both_Z_dR_stack_9->SetBinError(14,0.07437689);
   VbbHcc_both_Z_dR_stack_9->SetBinError(15,0.07901615);
   VbbHcc_both_Z_dR_stack_9->SetBinError(16,0.08026817);
   VbbHcc_both_Z_dR_stack_9->SetBinError(17,0.08159388);
   VbbHcc_both_Z_dR_stack_9->SetBinError(18,0.07367847);
   VbbHcc_both_Z_dR_stack_9->SetBinError(19,0.06599635);
   VbbHcc_both_Z_dR_stack_9->SetBinError(20,0.05860721);
   VbbHcc_both_Z_dR_stack_9->SetBinError(21,0.05198207);
   VbbHcc_both_Z_dR_stack_9->SetBinError(22,0.04909416);
   VbbHcc_both_Z_dR_stack_9->SetBinError(23,0.04461543);
   VbbHcc_both_Z_dR_stack_9->SetBinError(24,0.0453113);
   VbbHcc_both_Z_dR_stack_9->SetBinError(25,0.04709999);
   VbbHcc_both_Z_dR_stack_9->SetBinError(26,0.04706614);
   VbbHcc_both_Z_dR_stack_9->SetBinError(27,0.04459712);
   VbbHcc_both_Z_dR_stack_9->SetBinError(28,0.04177271);
   VbbHcc_both_Z_dR_stack_9->SetBinError(29,0.03685936);
   VbbHcc_both_Z_dR_stack_9->SetBinError(30,0.02703379);
   VbbHcc_both_Z_dR_stack_9->SetBinError(31,0.02281706);
   VbbHcc_both_Z_dR_stack_9->SetEntries(72695);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_10 = new TH1D("VbbHcc_both_Z_dR_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(2,0.001144654);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(3,2.162851);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(4,4.324211);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(5,5.237581);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(6,5.403356);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(7,4.742197);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(8,3.467194);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(9,2.39883);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(10,1.744281);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(11,1.555067);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(12,1.531271);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(13,1.547425);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(14,1.582732);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(15,1.696751);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(16,1.731319);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(17,1.617224);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(18,1.424814);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(19,1.262962);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(20,1.064706);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(21,0.9006993);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(22,0.7698605);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(23,0.6829909);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(24,0.7445466);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(25,0.748787);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(26,0.7805591);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(27,0.7543547);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(28,0.637489);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(29,0.4911126);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(30,0.2960896);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(31,0.1816328);
   VbbHcc_both_Z_dR_stack_10->SetBinError(2,0.0006645706);
   VbbHcc_both_Z_dR_stack_10->SetBinError(3,0.02868581);
   VbbHcc_both_Z_dR_stack_10->SetBinError(4,0.04057218);
   VbbHcc_both_Z_dR_stack_10->SetBinError(5,0.04470832);
   VbbHcc_both_Z_dR_stack_10->SetBinError(6,0.04545258);
   VbbHcc_both_Z_dR_stack_10->SetBinError(7,0.04262955);
   VbbHcc_both_Z_dR_stack_10->SetBinError(8,0.03645768);
   VbbHcc_both_Z_dR_stack_10->SetBinError(9,0.03028742);
   VbbHcc_both_Z_dR_stack_10->SetBinError(10,0.02579938);
   VbbHcc_both_Z_dR_stack_10->SetBinError(11,0.02439328);
   VbbHcc_both_Z_dR_stack_10->SetBinError(12,0.02419796);
   VbbHcc_both_Z_dR_stack_10->SetBinError(13,0.02431859);
   VbbHcc_both_Z_dR_stack_10->SetBinError(14,0.02460494);
   VbbHcc_both_Z_dR_stack_10->SetBinError(15,0.02546378);
   VbbHcc_both_Z_dR_stack_10->SetBinError(16,0.02576177);
   VbbHcc_both_Z_dR_stack_10->SetBinError(17,0.02491229);
   VbbHcc_both_Z_dR_stack_10->SetBinError(18,0.02336831);
   VbbHcc_both_Z_dR_stack_10->SetBinError(19,0.02201044);
   VbbHcc_both_Z_dR_stack_10->SetBinError(20,0.02019486);
   VbbHcc_both_Z_dR_stack_10->SetBinError(21,0.01851605);
   VbbHcc_both_Z_dR_stack_10->SetBinError(22,0.01713669);
   VbbHcc_both_Z_dR_stack_10->SetBinError(23,0.01616512);
   VbbHcc_both_Z_dR_stack_10->SetBinError(24,0.01688679);
   VbbHcc_both_Z_dR_stack_10->SetBinError(25,0.01693626);
   VbbHcc_both_Z_dR_stack_10->SetBinError(26,0.01728525);
   VbbHcc_both_Z_dR_stack_10->SetBinError(27,0.01698011);
   VbbHcc_both_Z_dR_stack_10->SetBinError(28,0.01561895);
   VbbHcc_both_Z_dR_stack_10->SetBinError(29,0.01371027);
   VbbHcc_both_Z_dR_stack_10->SetBinError(30,0.01060165);
   VbbHcc_both_Z_dR_stack_10->SetBinError(31,0.008325427);
   VbbHcc_both_Z_dR_stack_10->SetEntries(137175);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_11 = new TH1D("VbbHcc_both_Z_dR_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(3,0.2205553);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(4,0.3906625);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(5,0.3557152);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(6,0.2761193);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(7,0.1800601);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(8,0.1026094);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(9,0.04827455);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(10,0.08346455);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(11,0.04747043);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(12,0.0580726);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(13,0.05690101);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(14,0.09248111);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(15,0.06970618);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(16,0.07957337);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(17,0.06136741);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(18,0.07632787);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(19,0.03755435);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(20,0.04491882);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(21,0.02317602);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(22,0.03035952);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(23,0.01753435);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(24,0.03280003);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(25,0.02777447);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(26,0.0237098);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(27,0.03295019);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(28,0.03240518);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(29,0.05261739);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(30,0.01238566);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(31,0.01184239);
   VbbHcc_both_Z_dR_stack_11->SetBinError(3,0.02531417);
   VbbHcc_both_Z_dR_stack_11->SetBinError(4,0.03386573);
   VbbHcc_both_Z_dR_stack_11->SetBinError(5,0.0325045);
   VbbHcc_both_Z_dR_stack_11->SetBinError(6,0.02849124);
   VbbHcc_both_Z_dR_stack_11->SetBinError(7,0.02300661);
   VbbHcc_both_Z_dR_stack_11->SetBinError(8,0.01746662);
   VbbHcc_both_Z_dR_stack_11->SetBinError(9,0.01353621);
   VbbHcc_both_Z_dR_stack_11->SetBinError(10,0.01580171);
   VbbHcc_both_Z_dR_stack_11->SetBinError(11,0.0116817);
   VbbHcc_both_Z_dR_stack_11->SetBinError(12,0.01306871);
   VbbHcc_both_Z_dR_stack_11->SetBinError(13,0.01286185);
   VbbHcc_both_Z_dR_stack_11->SetBinError(14,0.01649563);
   VbbHcc_both_Z_dR_stack_11->SetBinError(15,0.0142639);
   VbbHcc_both_Z_dR_stack_11->SetBinError(16,0.01526264);
   VbbHcc_both_Z_dR_stack_11->SetBinError(17,0.01356669);
   VbbHcc_both_Z_dR_stack_11->SetBinError(18,0.01549362);
   VbbHcc_both_Z_dR_stack_11->SetBinError(19,0.01140556);
   VbbHcc_both_Z_dR_stack_11->SetBinError(20,0.01151621);
   VbbHcc_both_Z_dR_stack_11->SetBinError(21,0.007966702);
   VbbHcc_both_Z_dR_stack_11->SetBinError(22,0.00922998);
   VbbHcc_both_Z_dR_stack_11->SetBinError(23,0.00719442);
   VbbHcc_both_Z_dR_stack_11->SetBinError(24,0.00989602);
   VbbHcc_both_Z_dR_stack_11->SetBinError(25,0.009270285);
   VbbHcc_both_Z_dR_stack_11->SetBinError(26,0.008393931);
   VbbHcc_both_Z_dR_stack_11->SetBinError(27,0.009832991);
   VbbHcc_both_Z_dR_stack_11->SetBinError(28,0.009834104);
   VbbHcc_both_Z_dR_stack_11->SetBinError(29,0.01244174);
   VbbHcc_both_Z_dR_stack_11->SetBinError(30,0.005629404);
   VbbHcc_both_Z_dR_stack_11->SetBinError(31,0.005925602);
   VbbHcc_both_Z_dR_stack_11->SetEntries(910);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_12 = new TH1D("VbbHcc_both_Z_dR_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(3,0.08680453);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(4,0.1807278);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(5,0.1848038);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(6,0.1328791);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(7,0.07966098);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(8,0.0460249);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(9,0.02776049);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(10,0.02946187);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(11,0.0233502);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(12,0.02749284);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(13,0.02852197);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(14,0.03299865);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(15,0.02799573);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(16,0.03534035);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(17,0.03371024);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(18,0.02541588);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(19,0.02294414);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(20,0.01915121);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(21,0.01629851);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(22,0.01549607);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(23,0.01246192);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(24,0.01213399);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(25,0.01119219);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(26,0.01334817);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(27,0.01617004);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(28,0.01210121);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(29,0.01511168);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(30,0.007852629);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(31,0.003773223);
   VbbHcc_both_Z_dR_stack_12->SetBinError(3,0.005725986);
   VbbHcc_both_Z_dR_stack_12->SetBinError(4,0.008292376);
   VbbHcc_both_Z_dR_stack_12->SetBinError(5,0.008400869);
   VbbHcc_both_Z_dR_stack_12->SetBinError(6,0.007139852);
   VbbHcc_both_Z_dR_stack_12->SetBinError(7,0.005527036);
   VbbHcc_both_Z_dR_stack_12->SetBinError(8,0.004174138);
   VbbHcc_both_Z_dR_stack_12->SetBinError(9,0.003243816);
   VbbHcc_both_Z_dR_stack_12->SetBinError(10,0.003352002);
   VbbHcc_both_Z_dR_stack_12->SetBinError(11,0.002969104);
   VbbHcc_both_Z_dR_stack_12->SetBinError(12,0.003239839);
   VbbHcc_both_Z_dR_stack_12->SetBinError(13,0.003279522);
   VbbHcc_both_Z_dR_stack_12->SetBinError(14,0.003563912);
   VbbHcc_both_Z_dR_stack_12->SetBinError(15,0.003271306);
   VbbHcc_both_Z_dR_stack_12->SetBinError(16,0.003666597);
   VbbHcc_both_Z_dR_stack_12->SetBinError(17,0.00357911);
   VbbHcc_both_Z_dR_stack_12->SetBinError(18,0.00311703);
   VbbHcc_both_Z_dR_stack_12->SetBinError(19,0.002943851);
   VbbHcc_both_Z_dR_stack_12->SetBinError(20,0.00272269);
   VbbHcc_both_Z_dR_stack_12->SetBinError(21,0.002496931);
   VbbHcc_both_Z_dR_stack_12->SetBinError(22,0.002390742);
   VbbHcc_both_Z_dR_stack_12->SetBinError(23,0.002140812);
   VbbHcc_both_Z_dR_stack_12->SetBinError(24,0.002136585);
   VbbHcc_both_Z_dR_stack_12->SetBinError(25,0.002048738);
   VbbHcc_both_Z_dR_stack_12->SetBinError(26,0.002237824);
   VbbHcc_both_Z_dR_stack_12->SetBinError(27,0.002474366);
   VbbHcc_both_Z_dR_stack_12->SetBinError(28,0.00215036);
   VbbHcc_both_Z_dR_stack_12->SetBinError(29,0.002383369);
   VbbHcc_both_Z_dR_stack_12->SetBinError(30,0.001724004);
   VbbHcc_both_Z_dR_stack_12->SetBinError(31,0.001195463);
   VbbHcc_both_Z_dR_stack_12->SetEntries(3163);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR__417 = new TH1D("VbbHcc_both_Z_dR__417","",30,0,6);
   VbbHcc_both_Z_dR__417->SetBinContent(2,70);
   VbbHcc_both_Z_dR__417->SetBinContent(3,117897);
   VbbHcc_both_Z_dR__417->SetBinContent(4,127792);
   VbbHcc_both_Z_dR__417->SetBinContent(5,91259);
   VbbHcc_both_Z_dR__417->SetBinContent(6,78074);
   VbbHcc_both_Z_dR__417->SetBinContent(7,69956);
   VbbHcc_both_Z_dR__417->SetBinContent(8,65193);
   VbbHcc_both_Z_dR__417->SetBinContent(9,62362);
   VbbHcc_both_Z_dR__417->SetBinContent(10,61767);
   VbbHcc_both_Z_dR__417->SetBinContent(11,62308);
   VbbHcc_both_Z_dR__417->SetBinContent(12,63987);
   VbbHcc_both_Z_dR__417->SetBinContent(13,66970);
   VbbHcc_both_Z_dR__417->SetBinContent(14,70756);
   VbbHcc_both_Z_dR__417->SetBinContent(15,75245);
   VbbHcc_both_Z_dR__417->SetBinContent(16,78262);
   VbbHcc_both_Z_dR__417->SetBinContent(17,74195);
   VbbHcc_both_Z_dR__417->SetBinContent(18,69323);
   VbbHcc_both_Z_dR__417->SetBinContent(19,61823);
   VbbHcc_both_Z_dR__417->SetBinContent(20,53625);
   VbbHcc_both_Z_dR__417->SetBinContent(21,45512);
   VbbHcc_both_Z_dR__417->SetBinContent(22,38248);
   VbbHcc_both_Z_dR__417->SetBinContent(23,31289);
   VbbHcc_both_Z_dR__417->SetBinContent(24,25853);
   VbbHcc_both_Z_dR__417->SetBinContent(25,21760);
   VbbHcc_both_Z_dR__417->SetBinContent(26,18750);
   VbbHcc_both_Z_dR__417->SetBinContent(27,16589);
   VbbHcc_both_Z_dR__417->SetBinContent(28,15269);
   VbbHcc_both_Z_dR__417->SetBinContent(29,15221);
   VbbHcc_both_Z_dR__417->SetBinContent(30,10255);
   VbbHcc_both_Z_dR__417->SetBinContent(31,7392);
   VbbHcc_both_Z_dR__417->SetEntries(1597002);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR__417->SetLineColor(ci);
   VbbHcc_both_Z_dR__417->SetLineWidth(2);
   VbbHcc_both_Z_dR__417->SetMarkerStyle(20);
   VbbHcc_both_Z_dR__417->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR__417->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR__417->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__417->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__417->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__417->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__417->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__417->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__417->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__417->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR__417->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__417->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__417->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__417->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__417->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__417->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_fx1417[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_fy1417[30] = {
   0,
   92.29674,
   249129.2,
   276337.2,
   224859.6,
   181810.5,
   152870.6,
   130618.9,
   140436.6,
   142029.7,
   127101.3,
   124962.1,
   133486.4,
   170111.2,
   157813.4,
   159659.2,
   144821,
   156730.4,
   124744.1,
   109326.3,
   85957.89,
   79240.2,
   59798.07,
   57641.39,
   41135.1,
   37037.54,
   35615.94,
   31168.19,
   37326.93,
   21922.26};
   Double_t Graph_from_VbbHcc_both_Z_dR_fex1417[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_fey1417[30] = {
   0,
   38.27898,
   6260.656,
   8209.536,
   23553.47,
   7410.646,
   5993.39,
   4351.386,
   6474.658,
   6559.427,
   5690.193,
   4984.568,
   5918.298,
   24141.83,
   6521.488,
   5263.156,
   5986.372,
   21867.91,
   5385.885,
   5305.431,
   4178.485,
   4356.008,
   3481.378,
   4506.097,
   2409.159,
   2806.06,
   3020.582,
   2617.063,
   4067.781,
   2692.311};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_fx1417,Graph_from_VbbHcc_both_Z_dR_fy1417,Graph_from_VbbHcc_both_Z_dR_fex1417,Graph_from_VbbHcc_both_Z_dR_fey1417);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR1417 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR1417","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->SetMaximum(313001.4);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR1417->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR1417);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR","MC unc. (stat.)","fl");

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
   Z_dR_both_16->cd();
  
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
   
   TH1D *data_mc_ratio__418 = new TH1D("data_mc_ratio__418","",30,0,6);
   data_mc_ratio__418->SetBinContent(2,0.7584233);
   data_mc_ratio__418->SetBinContent(3,0.4732363);
   data_mc_ratio__418->SetBinContent(4,0.4624496);
   data_mc_ratio__418->SetBinContent(5,0.4058488);
   data_mc_ratio__418->SetBinContent(6,0.4294251);
   data_mc_ratio__418->SetBinContent(7,0.4576157);
   data_mc_ratio__418->SetBinContent(8,0.4991086);
   data_mc_ratio__418->SetBinContent(9,0.4440581);
   data_mc_ratio__418->SetBinContent(10,0.4348879);
   data_mc_ratio__418->SetBinContent(11,0.490223);
   data_mc_ratio__418->SetBinContent(12,0.5120512);
   data_mc_ratio__418->SetBinContent(13,0.5016991);
   data_mc_ratio__418->SetBinContent(14,0.4159396);
   data_mc_ratio__418->SetBinContent(15,0.4767972);
   data_mc_ratio__418->SetBinContent(16,0.4901817);
   data_mc_ratio__418->SetBinContent(17,0.5123222);
   data_mc_ratio__418->SetBinContent(18,0.4423072);
   data_mc_ratio__418->SetBinContent(19,0.4955985);
   data_mc_ratio__418->SetBinContent(20,0.4905042);
   data_mc_ratio__418->SetBinContent(21,0.5294685);
   data_mc_ratio__418->SetBinContent(22,0.4826843);
   data_mc_ratio__418->SetBinContent(23,0.5232443);
   data_mc_ratio__418->SetBinContent(24,0.4485145);
   data_mc_ratio__418->SetBinContent(25,0.5289886);
   data_mc_ratio__418->SetBinContent(26,0.5062431);
   data_mc_ratio__418->SetBinContent(27,0.4657746);
   data_mc_ratio__418->SetBinContent(28,0.4898904);
   data_mc_ratio__418->SetBinContent(29,0.4077753);
   data_mc_ratio__418->SetBinContent(30,0.4677894);
   data_mc_ratio__418->SetBinContent(31,0.5731475);
   data_mc_ratio__418->SetBinError(2,0.09064892);
   data_mc_ratio__418->SetBinError(3,0.001378246);
   data_mc_ratio__418->SetBinError(4,0.001293637);
   data_mc_ratio__418->SetBinError(5,0.001343465);
   data_mc_ratio__418->SetBinError(6,0.00153686);
   data_mc_ratio__418->SetBinError(7,0.001730169);
   data_mc_ratio__418->SetBinError(8,0.001954765);
   data_mc_ratio__418->SetBinError(9,0.001778196);
   data_mc_ratio__418->SetBinError(10,0.001749843);
   data_mc_ratio__418->SetBinError(11,0.001963911);
   data_mc_ratio__418->SetBinError(12,0.002024266);
   data_mc_ratio__418->SetBinError(13,0.001938667);
   data_mc_ratio__418->SetBinError(14,0.001563683);
   data_mc_ratio__418->SetBinError(15,0.00173818);
   data_mc_ratio__418->SetBinError(16,0.001752192);
   data_mc_ratio__418->SetBinError(17,0.001880857);
   data_mc_ratio__418->SetBinError(18,0.001679907);
   data_mc_ratio__418->SetBinError(19,0.001993219);
   data_mc_ratio__418->SetBinError(20,0.002118161);
   data_mc_ratio__418->SetBinError(21,0.00248186);
   data_mc_ratio__418->SetBinError(22,0.002468078);
   data_mc_ratio__418->SetBinError(23,0.002958072);
   data_mc_ratio__418->SetBinError(24,0.002789466);
   data_mc_ratio__418->SetBinError(25,0.003586054);
   data_mc_ratio__418->SetBinError(26,0.003697077);
   data_mc_ratio__418->SetBinError(27,0.00361631);
   data_mc_ratio__418->SetBinError(28,0.003964548);
   data_mc_ratio__418->SetBinError(29,0.003305212);
   data_mc_ratio__418->SetBinError(30,0.004619368);
   data_mc_ratio__418->SetBinError(31,0.05964066);
   data_mc_ratio__418->SetMinimum(0.4);
   data_mc_ratio__418->SetMaximum(1.6);
   data_mc_ratio__418->SetEntries(1444.898);
   data_mc_ratio__418->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__418->SetLineColor(ci);
   data_mc_ratio__418->SetLineWidth(2);
   data_mc_ratio__418->SetMarkerStyle(20);
   data_mc_ratio__418->SetMarkerSize(1.2);
   data_mc_ratio__418->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__418->GetXaxis()->SetRange(1,30);
   data_mc_ratio__418->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__418->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__418->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__418->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__418->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__418->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__418->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__418->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__418->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__418->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__418->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__418->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__418->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__418->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__418->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__418->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__418->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1418[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1418[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1418[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1418[30] = {
   0,
   0.4147381,
   0.02513015,
   0.0297084,
   0.1047474,
   0.04076027,
   0.03920563,
   0.03331361,
   0.04610378,
   0.04618349,
   0.04476894,
   0.03988863,
   0.04433635,
   0.1419179,
   0.04132403,
   0.03296495,
   0.04133636,
   0.1395256,
   0.04317546,
   0.04852841,
   0.04861084,
   0.05497219,
   0.0582189,
   0.07817467,
   0.05856699,
   0.07576258,
   0.08480984,
   0.08396582,
   0.1089771,
   0.1228118};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1418,Graph_from_mc_statistical_error_fy1418,Graph_from_mc_statistical_error_fex1418,Graph_from_mc_statistical_error_fey1418);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1418 = new TH1F("Graph_Graph_from_mc_statistical_error1418","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1418->SetMinimum(0.5023142);
   Graph_Graph_from_mc_statistical_error1418->SetMaximum(1.497686);
   Graph_Graph_from_mc_statistical_error1418->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1418->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1418->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1418->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1418->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1418->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1418->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1418->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1418->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1418->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1418->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1418->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1418->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1418->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1418->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1418->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1418);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_both_16->cd();
   Z_dR_both_16->Modified();
   Z_dR_both_16->cd();
   Z_dR_both_16->SetSelected(Z_dR_both_16);
}
