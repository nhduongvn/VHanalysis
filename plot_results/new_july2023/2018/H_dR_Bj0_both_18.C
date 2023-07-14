void H_dR_Bj0_both_18()
{
//=========Macro generated from canvas: H_dR_Bj0_both_18/H_dR_Bj0_both_18
//=========  (Fri Jul 14 13:38:52 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_both_18 = new TCanvas("H_dR_Bj0_both_18", "H_dR_Bj0_both_18",0,0,600,600);
   H_dR_Bj0_both_18->SetHighLightColor(2);
   H_dR_Bj0_both_18->Range(0,0,1,1);
   H_dR_Bj0_both_18->SetFillColor(0);
   H_dR_Bj0_both_18->SetFillStyle(4000);
   H_dR_Bj0_both_18->SetBorderMode(0);
   H_dR_Bj0_both_18->SetBorderSize(2);
   H_dR_Bj0_both_18->SetFrameFillStyle(1000);
   H_dR_Bj0_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1013.422,6.314516,1012419);
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
   st->SetMaximum(867691.1);
   
   TH1F *st_stack_235 = new TH1F("st_stack_235","",30,0,6);
   st_stack_235->SetMinimum(0.01);
   st_stack_235->SetMaximum(911075.7);
   st_stack_235->SetDirectory(0);
   st_stack_235->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_235->SetLineColor(ci);
   st_stack_235->GetXaxis()->SetRange(1,30);
   st_stack_235->GetXaxis()->SetLabelFont(42);
   st_stack_235->GetXaxis()->SetLabelSize(0.035);
   st_stack_235->GetXaxis()->SetTitleSize(0.035);
   st_stack_235->GetXaxis()->SetTitleFont(42);
   st_stack_235->GetYaxis()->SetTitle("Events/0.2");
   st_stack_235->GetYaxis()->SetLabelFont(42);
   st_stack_235->GetYaxis()->SetLabelSize(0.05);
   st_stack_235->GetYaxis()->SetTitleSize(0.057);
   st_stack_235->GetYaxis()->SetTitleOffset(1.2);
   st_stack_235->GetYaxis()->SetTitleFont(42);
   st_stack_235->GetZaxis()->SetLabelFont(42);
   st_stack_235->GetZaxis()->SetLabelSize(0.035);
   st_stack_235->GetZaxis()->SetTitleSize(0.035);
   st_stack_235->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_235);
   
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(1,90637.16);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(2,236368.5);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(3,214695.5);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(4,156836.6);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(5,124670.8);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(6,109498.8);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(7,91762.16);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(8,85484.01);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(9,76051.72);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(10,76094.66);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(11,63887.71);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(12,58116.73);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(13,55441.68);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(14,52545.26);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(15,52375.46);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(16,53177.04);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(17,38714.34);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(18,27840.26);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(19,23191.08);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(20,13753.18);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(21,12311.59);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(22,9964.706);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(23,4868.933);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(24,4193.878);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(25,3440.897);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(26,2951.675);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(27,925.3334);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(28,754.8632);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(29,526.1883);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(30,60.57017);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(31,79.83778);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(1,2426.125);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(2,5481.521);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(3,5521.027);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(4,5495.729);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(5,4382.353);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(6,4194.611);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(7,3631.465);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(8,4119.991);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(9,3931.779);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(10,3781.339);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(11,3271.535);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(12,3426.503);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(13,2520.683);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(14,2347.005);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(15,2438.704);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(16,2951.106);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(17,2708.436);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(18,1875.793);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(19,2319.135);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(20,1905.967);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(21,1202.877);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(22,1921.254);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(23,557.2025);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(24,724.766);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(25,712.8818);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(26,783.6282);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(27,361.8981);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(28,356.5022);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(29,349.2071);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(30,24.89747);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(31,35.1877);
   VbbHcc_both_H_dR_Bj0_stack_1->SetEntries(164216);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(1,825.7247);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(2,2721.493);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(3,2766.804);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(4,2175.587);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(5,1691.01);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(6,1360.074);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(7,1174.477);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(8,1023.654);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(9,958.6164);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(10,863.5311);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(11,800.1538);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(12,734.4702);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(13,710.4978);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(14,691.7883);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(15,657.9346);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(16,636.1271);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(17,440.1805);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(18,328.8932);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(19,255.89);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(20,187.6175);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(21,137.4993);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(22,94.28961);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(23,67.32638);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(24,43.23742);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(25,28.90323);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(26,19.59044);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(27,10.25389);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(28,5.859976);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(29,2.664185);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(30,2.271295);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(31,2.652848);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(1,12.40746);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(2,22.07693);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(3,21.96126);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(4,19.38345);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(5,17.08874);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(6,15.21658);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(7,14.12964);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(8,13.09476);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(9,12.68832);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(10,11.94831);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(11,11.44343);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(12,10.75679);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(13,10.6147);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(14,10.3743);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(15,9.989617);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(16,9.768935);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(17,7.775942);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(18,6.505925);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(19,5.643142);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(20,4.72695);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(21,4.041567);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(22,3.21684);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(23,2.691693);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(24,2.075412);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(25,1.819928);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(26,1.481847);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(27,1.042097);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(28,0.7823087);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(29,0.4544828);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(30,0.4921908);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(31,0.516023);
   VbbHcc_both_H_dR_Bj0_stack_2->SetEntries(233695);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_3 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(1,10031.78);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(2,40287.1);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(3,47683.78);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(4,40829.74);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(5,32659.28);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(6,26860.65);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(7,23036.05);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(8,20031.8);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(9,17759.21);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(10,15942.54);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(11,14513.59);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(12,13355.91);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(13,12427.99);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(14,11684.93);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(15,10986.88);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(16,10111.81);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(17,6868.74);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(18,4865.218);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(19,3470.825);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(20,2498.121);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(21,1762.026);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(22,1208.853);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(23,811.116);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(24,522.8414);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(25,339.385);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(26,210.2613);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(27,124.0165);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(28,65.45054);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(29,37.00525);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(30,24.36166);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(31,42.8161);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(1,24.92596);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(2,50.02752);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(3,54.57138);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(4,50.59852);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(5,45.2916);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(6,41.10235);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(7,38.07306);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(8,35.49683);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(9,33.42802);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(10,31.6635);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(11,30.19885);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(12,28.96846);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(13,27.93687);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(14,27.08484);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(15,26.25107);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(16,25.17684);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(17,20.72966);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(18,17.41738);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(19,14.69678);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(20,12.45376);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(21,10.44805);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(22,8.646502);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(23,7.063905);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(24,5.665484);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(25,4.566764);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(26,3.595433);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(27,2.757521);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(28,2.009247);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(29,1.519642);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(30,1.228837);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(31,1.636167);
   VbbHcc_both_H_dR_Bj0_stack_3->SetEntries(6104032);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_4 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(1,668.7088);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(2,1895.38);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(3,1783.134);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(4,1438.24);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(5,1220.811);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(6,929.1823);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(7,825.5806);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(8,719.9998);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(9,665.3228);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(10,617.28);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(11,531.3113);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(12,550.6178);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(13,495.0268);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(14,490.6564);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(15,464.3188);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(16,429.8256);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(17,291.7321);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(18,210.9155);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(19,150.473);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(20,105.6319);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(21,73.55545);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(22,47.34595);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(23,45.52692);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(24,26.0522);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(25,15.24144);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(26,8.758995);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(27,6.376716);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(28,3.175044);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(29,0.7476269);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(30,0.9855641);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(31,1.111342);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(1,12.67771);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(2,26.92533);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(3,26.49629);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(4,25.49513);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(5,26.35079);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(6,21.04031);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(7,19.99113);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(8,18.08504);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(9,17.92858);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(10,17.24498);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(11,14.84587);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(12,16.98405);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(13,12.85982);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(14,13.91051);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(15,12.31064);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(16,11.30701);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(17,10.59956);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(18,7.113979);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(19,7.013028);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(20,6.296665);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(21,4.148842);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(22,3.267302);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(23,6.410495);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(24,2.370325);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(25,1.918798);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(26,1.438218);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(27,1.408459);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(28,0.9452515);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(29,0.2859014);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(30,0.5382411);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(31,0.552742);
   VbbHcc_both_H_dR_Bj0_stack_4->SetEntries(94684);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_5 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(1,398.7291);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(2,1010.372);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(3,990.1065);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(4,743.381);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(5,592.0092);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(6,455.2217);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(7,407.533);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(8,397.213);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(9,297.586);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(10,285.8934);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(11,278.6089);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(12,254.6402);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(13,238.9998);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(14,259.4701);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(15,210.8794);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(16,203.7237);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(17,135.9065);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(18,100.0999);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(19,57.85934);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(20,53.35756);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(21,32.03313);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(22,21.94062);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(23,15.28103);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(24,12.43389);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(25,5.320722);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(26,2.653601);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(27,1.338514);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(28,0.5293417);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(29,0.2812557);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(30,0.5346547);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(31,0.3353775);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(1,12.9709);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(2,29.80578);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(3,32.20866);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(4,34.41495);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(5,35.03686);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(6,22.3142);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(7,25.53045);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(8,29.22285);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(9,18.28717);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(10,18.19976);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(11,23.09415);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(12,17.96729);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(13,16.90273);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(14,24.29086);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(15,12.07026);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(16,14.98786);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(17,13.79241);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(18,13.07489);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(19,5.181514);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(20,11.77562);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(21,3.744759);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(22,3.476037);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(23,1.787826);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(24,2.570671);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(25,1.043473);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(26,0.6927881);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(27,0.445677);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(28,0.2465691);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(29,0.1800931);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(30,0.2539128);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(31,0.2921431);
   VbbHcc_both_H_dR_Bj0_stack_5->SetEntries(40778);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_6 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(1,2.312387);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(2,5.491919);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(3,5.780967);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(4,2.890483);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(5,2.312387);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(6,3.179532);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(7,2.601435);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(8,3.757628);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(9,1.445242);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(10,2.601435);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(11,1.445242);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(12,2.312387);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(13,1.73429);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(14,0.5780967);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(15,2.023338);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(16,0.867145);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(17,0.867145);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(18,0.5780967);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(19,0.2890483);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(24,0.2890483);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(1,0.8175522);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(2,1.259933);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(3,1.292663);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(4,0.9140511);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(5,0.8175522);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(6,0.9586649);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(7,0.867145);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(8,1.042179);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(9,0.6463317);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(10,0.867145);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(11,0.6463317);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(12,0.8175522);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(13,0.708021);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(14,0.4087761);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(15,0.76475);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(16,0.5006464);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(17,0.5006464);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(18,0.4087761);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(19,0.2890483);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(24,0.2890483);
   VbbHcc_both_H_dR_Bj0_stack_6->SetEntries(150);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_7 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(1,6.427248);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(2,14.9278);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(3,16.17178);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(4,8.707884);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(5,12.2325);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(6,5.597925);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(7,5.183264);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(8,4.146611);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(9,5.390595);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(10,3.109959);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(11,3.317289);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(12,3.52462);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(13,4.768603);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(14,3.317289);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(15,3.317289);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(16,2.902628);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(17,1.036653);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(18,0.8293223);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(19,1.451314);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(20,0.8293223);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(21,0.4146611);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(22,0.2073306);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(24,0.2073306);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(25,0.2073306);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(27,0.2073306);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(1,1.154368);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(2,1.759258);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(3,1.831094);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(4,1.343656);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(5,1.592536);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(6,1.077321);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(7,1.036653);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(8,0.9272105);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(9,1.057183);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(10,0.8029878);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(11,0.8293223);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(12,0.8548458);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(13,0.9943225);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(14,0.8293223);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(15,0.8293223);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(16,0.7757599);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(17,0.4636052);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(18,0.4146611);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(19,0.5485451);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(20,0.4146611);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(21,0.2932097);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(22,0.2073306);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(24,0.2073306);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(25,0.2073306);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(27,0.2073306);
   VbbHcc_both_H_dR_Bj0_stack_7->SetEntries(523);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_8 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(1,7.419213);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(2,16.48714);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(3,16.28105);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(4,10.30446);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(5,8.449659);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(6,6.182678);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(7,4.946142);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(8,5.152231);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(9,6.800945);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(10,6.388767);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(11,2.266982);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(12,3.091339);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(13,1.854803);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(14,5.976588);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(15,3.915696);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(16,2.67916);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(17,1.236536);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(18,1.854803);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(19,0.6182678);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(20,0.6182678);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(22,0.2060893);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(24,0.2060893);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(1,1.236536);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(2,1.843318);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(3,1.831761);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(4,1.457271);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(5,1.319615);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(6,1.128797);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(7,1.009627);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(8,1.030446);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(9,1.183893);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(10,1.147456);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(11,0.6835207);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(12,0.7981802);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(13,0.6182678);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(14,1.109825);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(15,0.8983222);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(16,0.7430654);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(17,0.5048135);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(18,0.6182678);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(19,0.3569571);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(20,0.3569571);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(22,0.2060893);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(24,0.2060893);
   VbbHcc_both_H_dR_Bj0_stack_8->SetEntries(548);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_9 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(1,4.317836);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(2,15.02214);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(3,13.36266);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(4,8.724817);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(5,6.123601);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(6,4.685846);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(7,4.155546);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(8,3.718962);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(9,3.355523);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(10,2.992084);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(11,2.900653);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(12,2.786364);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(13,2.555501);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(14,2.322351);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(15,2.244635);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(16,2.242349);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(17,1.259464);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(18,0.8228803);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(19,0.5440153);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(20,0.361153);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(21,0.2285779);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(22,0.1417183);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(23,0.1165747);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(24,0.09143115);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(25,0.03885824);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(26,0.02742934);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(27,0.01371467);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(28,0.009143115);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(29,0.002285779);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(30,0.004571557);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(31,0.009143115);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(1,0.09934595);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(2,0.1853032);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(3,0.1747687);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(4,0.1412197);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(5,0.1183097);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(6,0.103493);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(7,0.09746106);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(8,0.09219937);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(9,0.08757844);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(10,0.08269971);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(11,0.08142635);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(12,0.07980609);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(13,0.07642845);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(14,0.07285863);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(15,0.07162917);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(16,0.07159269);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(17,0.05365497);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(18,0.0433696);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(19,0.03526328);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(20,0.02873179);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(21,0.02285779);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(22,0.01799824);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(23,0.01632372);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(24,0.01445653);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(25,0.009424507);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(26,0.007918169);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(27,0.005598991);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(28,0.004571557);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(29,0.002285779);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(30,0.003232579);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(31,0.004571557);
   VbbHcc_both_H_dR_Bj0_stack_9->SetEntries(37266);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_10 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(1,3.473735);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(2,12.42485);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(3,12.71636);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(4,9.221165);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(5,6.408555);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(6,4.894347);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(7,4.181359);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(8,3.691924);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(9,3.383121);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(10,2.971781);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(11,2.735112);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(12,2.612306);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(13,2.472808);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(14,2.358944);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(15,2.220043);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(16,1.940451);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(17,1.246538);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(18,0.9019668);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(19,0.5979331);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(20,0.4250511);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(21,0.2807841);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(22,0.2116313);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(23,0.1603629);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(24,0.09359471);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(25,0.0560376);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(26,0.04590314);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(27,0.01967277);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(28,0.01013446);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(29,0.00774988);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(30,0.005961446);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(31,0.005961446);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(1,0.04550658);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(2,0.08606396);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(3,0.08706774);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(4,0.07414276);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(5,0.06180959);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(6,0.0540161);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(7,0.04992689);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(8,0.04691397);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(9,0.04490912);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(10,0.04209051);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(11,0.04037972);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(12,0.03946279);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(13,0.03839468);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(14,0.03750029);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(15,0.03637948);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(16,0.03401161);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(17,0.02726018);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(18,0.02318842);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(19,0.01888001);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(20,0.01591829);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(21,0.01293785);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(22,0.01123223);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(23,0.009777499);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(24,0.007469671);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(25,0.005779837);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(26,0.005231148);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(27,0.00342459);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(28,0.002457967);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(29,0.00214943);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(30,0.001885175);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(31,0.001885175);
   VbbHcc_both_H_dR_Bj0_stack_10->SetEntries(137175);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_11 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(1,0.07965167);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(2,0.382328);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(3,0.382328);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(4,0.334537);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(5,0.2048186);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(6,0.1137881);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(7,0.1137881);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(8,0.07282438);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(9,0.06827286);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(10,0.07054862);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(11,0.06372133);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(12,0.03641219);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(13,0.03868795);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(14,0.03868795);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(15,0.05234252);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(16,0.03413643);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(17,0.01593033);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(18,0.006827286);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(19,0.009103048);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(20,0.009103048);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(22,0.002275762);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(25,0.006827286);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(1,0.01346359);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(2,0.02949725);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(3,0.02949725);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(4,0.02759215);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(5,0.02158977);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(6,0.01609207);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(7,0.01609207);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(8,0.01287365);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(9,0.01246486);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(10,0.01267091);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(11,0.0120422);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(12,0.009103048);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(13,0.009383207);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(14,0.009383207);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(15,0.01091417);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(16,0.008813988);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(17,0.0060211);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(18,0.003941735);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(19,0.004551524);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(20,0.004551524);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(22,0.002275762);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(25,0.003941735);
   VbbHcc_both_H_dR_Bj0_stack_11->SetEntries(939);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_12 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(1,0.03356156);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(2,0.1564208);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(3,0.1851879);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(4,0.1552222);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(5,0.1168662);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(6,0.07910939);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(7,0.06023102);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(8,0.04045367);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(9,0.0332619);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(10,0.02607014);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(11,0.02816774);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(12,0.02607014);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(13,0.01797941);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(14,0.01767975);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(15,0.01708044);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(16,0.01618147);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(17,0.01078764);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(18,0.006892106);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(19,0.003595882);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(20,0.004794509);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(21,0.002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(22,0.0008989704);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(23,0.001198627);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(24,0.001498284);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(25,0.001198627);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(26,0.0002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(27,0.0002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(1,0.003171269);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(2,0.006846355);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(3,0.00744935);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(4,0.006820073);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(5,0.005917748);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(6,0.004868847);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(7,0.004248368);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(8,0.003481697);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(9,0.00315708);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(10,0.002795013);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(11,0.00290528);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(12,0.002795013);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(13,0.002321132);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(14,0.002301708);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(15,0.002262359);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(16,0.002202019);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(17,0.001797941);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(18,0.001437104);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(19,0.001038042);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(20,0.001198627);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(21,0.000947598);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(22,0.0005190208);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(23,0.0005993136);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(24,0.000670053);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(25,0.0005993136);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(26,0.0002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(27,0.0002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetEntries(3484);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR_Bj0__469 = new TH1D("VbbHcc_both_H_dR_Bj0__469","",30,0,6);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(1,124125);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(2,390461);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(3,381615);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(4,306094);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(5,253049);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(6,213758);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(7,182951);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(8,160317);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(9,142696);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(10,129899);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(11,119515);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(12,111350);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(13,104839);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(14,100480);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(15,96206);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(16,89668);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(17,64616);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(18,48854);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(19,37448);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(20,28759);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(21,21813);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(22,16197);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(23,11385);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(24,8087);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(25,5382);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(26,3410);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(27,1948);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(28,1053);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(29,492);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(30,234);
   VbbHcc_both_H_dR_Bj0__469->SetBinContent(31,473);
   VbbHcc_both_H_dR_Bj0__469->SetEntries(3157174);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0__469->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0__469->SetLineWidth(2);
   VbbHcc_both_H_dR_Bj0__469->SetMarkerStyle(20);
   VbbHcc_both_H_dR_Bj0__469->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_Bj0__469->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0__469->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__469->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__469->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__469->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__469->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__469->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__469->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__469->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0__469->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__469->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__469->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__469->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__469->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__469->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fx1469[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fy1469[30] = {
   102586.2,
   282347.7,
   267984.2,
   202063.8,
   160869.8,
   139128.7,
   117227,
   107677.3,
   95752.93,
   93822.06,
   80024.13,
   73026.75,
   69327.64,
   65686.71,
   64709.26,
   64569.21,
   46456.57,
   33350.38,
   27129.64,
   16600.15,
   14317.63,
   11337.9,
   5808.461,
   4799.332,
   3830.058,
   3193.013,
   1067.56,
   829.8973,
   566.8966,
   88.73388};
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fex1469[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fey1469[30] = {
   2426.353,
   5481.941,
   5521.498,
   5496.163,
   4382.84,
   4194.953,
   3631.837,
   4120.309,
   3932.026,
   3781.573,
   3271.81,
   3426.732,
   2520.95,
   2347.352,
   2438.927,
   2951.29,
   2708.583,
   1875.945,
   2319.205,
   1906.06,
   1202.942,
   1921.283,
   557.2935,
   724.7996,
   712.9021,
   783.6395,
   361.9132,
   356.51,
   349.2109,
   24.93974};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_Bj0_fx1469,Graph_from_VbbHcc_both_H_dR_Bj0_fy1469,Graph_from_VbbHcc_both_H_dR_Bj0_fex1469,Graph_from_VbbHcc_both_H_dR_Bj0_fey1469);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_Bj01469 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_Bj01469","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->SetMinimum(57.41473);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->SetMaximum(316606.3);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_Bj01469);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR_Bj0","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj0_both_18->cd();
  
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
   
   TH1D *data_mc_ratio__470 = new TH1D("data_mc_ratio__470","",30,0,6);
   data_mc_ratio__470->SetBinContent(1,1.209958);
   data_mc_ratio__470->SetBinContent(2,1.382908);
   data_mc_ratio__470->SetBinContent(3,1.42402);
   data_mc_ratio__470->SetBinContent(4,1.514838);
   data_mc_ratio__470->SetBinContent(5,1.573005);
   data_mc_ratio__470->SetBinContent(6,1.536405);
   data_mc_ratio__470->SetBinContent(7,1.560655);
   data_mc_ratio__470->SetBinContent(8,1.488866);
   data_mc_ratio__470->SetBinContent(9,1.490252);
   data_mc_ratio__470->SetBinContent(10,1.384525);
   data_mc_ratio__470->SetBinContent(11,1.493487);
   data_mc_ratio__470->SetBinContent(12,1.524784);
   data_mc_ratio__470->SetBinContent(13,1.512225);
   data_mc_ratio__470->SetBinContent(14,1.529685);
   data_mc_ratio__470->SetBinContent(15,1.486742);
   data_mc_ratio__470->SetBinContent(16,1.388711);
   data_mc_ratio__470->SetBinContent(17,1.390891);
   data_mc_ratio__470->SetBinContent(18,1.464871);
   data_mc_ratio__470->SetBinContent(19,1.380335);
   data_mc_ratio__470->SetBinContent(20,1.732454);
   data_mc_ratio__470->SetBinContent(21,1.523507);
   data_mc_ratio__470->SetBinContent(22,1.428571);
   data_mc_ratio__470->SetBinContent(23,1.960072);
   data_mc_ratio__470->SetBinContent(24,1.685026);
   data_mc_ratio__470->SetBinContent(25,1.405201);
   data_mc_ratio__470->SetBinContent(26,1.067957);
   data_mc_ratio__470->SetBinContent(27,1.824722);
   data_mc_ratio__470->SetBinContent(28,1.268832);
   data_mc_ratio__470->SetBinContent(29,0.8678831);
   data_mc_ratio__470->SetBinContent(30,2.637099);
   data_mc_ratio__470->SetBinContent(31,3.731209);
   data_mc_ratio__470->SetBinError(1,0.00343432);
   data_mc_ratio__470->SetBinError(2,0.002213118);
   data_mc_ratio__470->SetBinError(3,0.002305173);
   data_mc_ratio__470->SetBinError(4,0.002738034);
   data_mc_ratio__470->SetBinError(5,0.003127);
   data_mc_ratio__470->SetBinError(6,0.003323108);
   data_mc_ratio__470->SetBinError(7,0.003648712);
   data_mc_ratio__470->SetBinError(8,0.003718483);
   data_mc_ratio__470->SetBinError(9,0.003945062);
   data_mc_ratio__470->SetBinError(10,0.003841474);
   data_mc_ratio__470->SetBinError(11,0.004320065);
   data_mc_ratio__470->SetBinError(12,0.004569442);
   data_mc_ratio__470->SetBinError(13,0.00467041);
   data_mc_ratio__470->SetBinError(14,0.004825722);
   data_mc_ratio__470->SetBinError(15,0.004793301);
   data_mc_ratio__470->SetBinError(16,0.0046376);
   data_mc_ratio__470->SetBinError(17,0.005471708);
   data_mc_ratio__470->SetBinError(18,0.006627492);
   data_mc_ratio__470->SetBinError(19,0.007132967);
   data_mc_ratio__470->SetBinError(20,0.01021586);
   data_mc_ratio__470->SetBinError(21,0.01031541);
   data_mc_ratio__470->SetBinError(22,0.01122495);
   data_mc_ratio__470->SetBinError(23,0.01836984);
   data_mc_ratio__470->SetBinError(24,0.01873756);
   data_mc_ratio__470->SetBinError(25,0.01915431);
   data_mc_ratio__470->SetBinError(26,0.01828843);
   data_mc_ratio__470->SetBinError(27,0.04134302);
   data_mc_ratio__470->SetBinError(28,0.03910118);
   data_mc_ratio__470->SetBinError(29,0.03912719);
   data_mc_ratio__470->SetBinError(30,0.1723925);
   data_mc_ratio__470->SetBinError(31,1.051176);
   data_mc_ratio__470->SetMinimum(0.4);
   data_mc_ratio__470->SetMaximum(1.6);
   data_mc_ratio__470->SetEntries(1032.603);
   data_mc_ratio__470->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__470->SetLineColor(ci);
   data_mc_ratio__470->SetLineWidth(2);
   data_mc_ratio__470->SetMarkerStyle(20);
   data_mc_ratio__470->SetMarkerSize(1.2);
   data_mc_ratio__470->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__470->GetXaxis()->SetRange(1,30);
   data_mc_ratio__470->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__470->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__470->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__470->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__470->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__470->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__470->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__470->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__470->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__470->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__470->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__470->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__470->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__470->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__470->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__470->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__470->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1470[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1470[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1470[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1470[30] = {
   0.02365185,
   0.01941557,
   0.02060382,
   0.02720013,
   0.02724465,
   0.0301516,
   0.03098122,
   0.03826536,
   0.04106429,
   0.0403058,
   0.04088529,
   0.04692434,
   0.03636284,
   0.03573556,
   0.03769055,
   0.04570738,
   0.05830354,
   0.05624957,
   0.08548602,
   0.1148218,
   0.08401828,
   0.1694566,
   0.09594512,
   0.1510209,
   0.1861335,
   0.2454232,
   0.3390097,
   0.4295833,
   0.6160045,
   0.2810622};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1470,Graph_from_mc_statistical_error_fy1470,Graph_from_mc_statistical_error_fex1470,Graph_from_mc_statistical_error_fey1470);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1470 = new TH1F("Graph_Graph_from_mc_statistical_error1470","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1470->SetMinimum(0.2607946);
   Graph_Graph_from_mc_statistical_error1470->SetMaximum(1.739205);
   Graph_Graph_from_mc_statistical_error1470->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1470->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1470->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1470->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1470->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1470->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1470->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1470->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1470->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1470->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1470);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_both_18->cd();
   H_dR_Bj0_both_18->Modified();
   H_dR_Bj0_both_18->cd();
   H_dR_Bj0_both_18->SetSelected(H_dR_Bj0_both_18);
}
