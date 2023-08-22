void Z_dR_Bj1_both_16_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_16/Z_dR_Bj1_both_16
//=========  (Tue Aug 22 09:18:42 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_both_16 = new TCanvas("Z_dR_Bj1_both_16", "Z_dR_Bj1_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_both_16->SetHighLightColor(2);
   Z_dR_Bj1_both_16->Range(0,0,1,1);
   Z_dR_Bj1_both_16->SetFillColor(0);
   Z_dR_Bj1_both_16->SetFillStyle(4000);
   Z_dR_Bj1_both_16->SetBorderMode(0);
   Z_dR_Bj1_both_16->SetBorderSize(2);
   Z_dR_Bj1_both_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.861113,6.314516,12.05977);
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
   st->SetMaximum(1.08468e+10);
   
   TH1F *st_stack_245 = new TH1F("st_stack_245","",30,0,6);
   st_stack_245->SetMinimum(0.001424978);
   st_stack_245->SetMaximum(3.69557e+10);
   st_stack_245->SetDirectory(0);
   st_stack_245->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_245->SetLineColor(ci);
   st_stack_245->GetXaxis()->SetRange(1,30);
   st_stack_245->GetXaxis()->SetLabelFont(42);
   st_stack_245->GetXaxis()->SetLabelSize(0.035);
   st_stack_245->GetXaxis()->SetTitleSize(0.035);
   st_stack_245->GetXaxis()->SetTitleFont(42);
   st_stack_245->GetYaxis()->SetTitle("Events/0.2");
   st_stack_245->GetYaxis()->SetLabelFont(42);
   st_stack_245->GetYaxis()->SetLabelSize(0.05);
   st_stack_245->GetYaxis()->SetTitleSize(0.057);
   st_stack_245->GetYaxis()->SetTitleOffset(1.2);
   st_stack_245->GetYaxis()->SetTitleFont(42);
   st_stack_245->GetZaxis()->SetLabelFont(42);
   st_stack_245->GetZaxis()->SetLabelSize(0.035);
   st_stack_245->GetZaxis()->SetTitleSize(0.035);
   st_stack_245->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_245);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(1,6652.014);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(2,30659.37);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(3,27641.23);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(4,18228.33);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(5,11165);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(6,14327.15);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(7,12303.31);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(8,6910.959);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(9,5497.997);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(10,6268.027);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(11,7808.168);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(12,7591.872);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(13,4223.431);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(14,2727.02);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(15,3397.712);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(16,2564.547);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(17,1978.774);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(18,1394.018);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(19,812.8249);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(20,2655.355);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(21,1761.349);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(22,1334.102);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(23,698.0011);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(24,617.7318);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(25,556.5194);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(26,488.9996);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(27,95.00693);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(28,22.53513);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(29,21.13014);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(30,15.08267);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(31,57.15934);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(1,957.954);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(2,3102.681);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(3,3311.852);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(4,2327.373);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(5,1415.479);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(6,2627.812);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(7,2516.421);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(8,1745.408);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(9,999.4486);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(10,1767.14);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(11,1897.18);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(12,1896.74);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(13,1622.919);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(14,640.7383);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(15,831.0164);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(16,764.9532);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(17,554.6837);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(18,542.9055);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(19,123.2191);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(20,1557.473);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(21,626.8245);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(22,542.6036);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(23,320.2487);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(24,318.783);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(25,317.3418);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(26,314.2625);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(27,39.59729);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(28,10.21562);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(29,9.447281);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(30,8.042131);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(31,37.0601);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetEntries(9183);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(1,28.27776);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(2,98.82458);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(3,109.2984);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(4,93.3272);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(5,69.01152);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(6,58.01073);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(7,49.44403);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(8,44.0861);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(9,34.80074);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(10,29.84074);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(11,28.3587);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(12,23.71545);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(13,19.60101);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(14,17.03997);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(15,16.86905);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(16,14.2108);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(17,12.44601);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(18,8.852748);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(19,8.040721);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(20,6.12715);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(21,5.774957);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(22,5.965478);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(23,2.407828);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(24,2.886966);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(25,3.202636);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(26,1.659426);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(27,0.6625239);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(28,0.3779167);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(31,0.3543504);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(1,2.253167);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(2,4.015171);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(3,4.145015);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(4,3.807009);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(5,3.187236);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(6,2.974393);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(7,2.768138);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(8,2.70162);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(9,2.420494);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(10,2.204325);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(11,2.187362);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(12,1.944867);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(13,1.708253);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(14,1.650486);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(15,1.655372);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(16,1.576901);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(17,1.359492);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(18,1.144509);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(19,1.108345);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(20,0.9419087);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(21,1.026312);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(22,1.054779);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(23,0.4849637);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(24,0.7102151);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(25,0.7992458);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(26,0.5706316);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(27,0.185933);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(28,0.1444036);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(31,0.2723291);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetEntries(9517);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_3 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(1,374.6386);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(2,1674.776);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(3,2119.654);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(4,1924.25);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(5,1525.563);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(6,1198.649);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(7,924.4991);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(8,756.3734);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(9,623.4241);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(10,536.0529);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(11,460.7107);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(12,413.3735);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(13,360.389);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(14,320.4335);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(15,282.3539);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(16,249.0387);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(17,216.4424);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(18,184.9801);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(19,156.9945);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(20,131.0913);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(21,105.2228);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(22,85.3219);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(23,64.97966);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(24,50.49967);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(25,35.90942);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(26,26.68345);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(27,17.09521);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(28,10.02279);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(29,6.215068);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(30,3.107287);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(31,5.322803);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(1,4.968538);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(2,10.47185);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(3,11.80731);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(4,11.25098);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(5,10.02178);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(6,8.870133);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(7,7.792923);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(8,7.027153);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(9,6.390914);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(10,5.926063);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(11,5.499123);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(12,5.21512);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(13,4.868818);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(14,4.586099);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(15,4.317165);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(16,4.043103);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(17,3.771692);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(18,3.485965);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(19,3.208529);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(20,2.930844);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(21,2.619088);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(22,2.3648);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(23,2.058063);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(24,1.813472);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(25,1.532793);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(26,1.323329);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(27,1.050698);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(28,0.8046435);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(29,0.6283536);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(30,0.4507295);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(31,0.5872287);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetEntries(232621);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_4 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(1,85.15183);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(2,303.9308);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(3,344.0599);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(4,264.3483);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(5,177.1791);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(6,130.4156);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(7,98.70021);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(8,93.19847);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(9,89.25259);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(10,73.28289);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(11,56.204);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(12,54.88042);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(13,38.73504);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(14,38.72114);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(15,35.3753);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(16,24.84338);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(17,26.97738);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(18,22.35863);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(19,16.31069);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(20,18.12521);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(21,10.99272);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(22,11.05486);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(23,9.127249);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(24,4.952806);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(25,6.887264);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(26,4.207525);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(27,2.746609);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(28,2.128017);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(29,0.8229019);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(30,0.3583763);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(31,0.3475353);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(1,3.826659);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(2,10.83449);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(3,13.56469);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(4,13.71197);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(5,10.52204);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(6,8.772754);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(7,6.924224);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(8,6.901176);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(9,9.045804);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(10,7.785863);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(11,5.436717);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(12,6.216402);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(13,3.50382);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(14,4.632314);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(15,4.502924);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(16,2.186272);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(17,4.328155);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(18,3.022837);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(19,2.787049);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(20,4.152365);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(21,1.380477);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(22,2.588567);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(23,1.326878);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(24,0.8846241);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(25,2.374133);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(26,0.9021509);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(27,0.675082);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(28,0.5663144);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(29,0.3790731);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(30,0.1607101);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(31,0.1557247);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetEntries(15013);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_5 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(1,16.55289);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(2,47.22429);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(3,31.92995);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(4,15.57863);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(5,14.56084);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(6,14.54668);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(7,8.184232);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(8,8.672556);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(9,4.839499);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(10,5.306059);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(11,12.59659);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(12,3.847621);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(13,4.380787);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(14,2.524232);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(15,1.520918);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(16,2.374275);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(17,1.937344);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(18,2.347129);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(19,1.840256);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(20,1.096561);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(21,0.567298);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(22,1.340143);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(23,0.8642345);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(24,0.4048304);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(25,0.4429418);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(26,0.1248779);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(27,0.2578757);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(28,0.1900975);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(29,0.1545928);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(1,1.338546);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(2,8.135628);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(3,3.364226);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(4,2.136846);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(5,2.357665);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(6,2.383064);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(7,1.921846);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(8,2.005869);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(9,1.218274);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(10,1.607148);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(11,7.282012);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(12,1.173314);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(13,1.226207);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(14,0.6131536);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(15,0.3741422);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(16,0.6470125);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(17,0.443337);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(18,1.086704);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(19,0.4576457);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(20,0.3418036);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(21,0.2310654);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(22,0.4967542);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(23,0.2976525);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(24,0.1730323);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(25,0.1790792);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(26,0.09035839);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(27,0.1719455);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(28,0.1026178);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(29,0.1091465);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetEntries(3486);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_6 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(3,0.3022236);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(4,0.3022236);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(5,0.1511118);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(6,0.3022236);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(7,0.1511118);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(17,0.1511118);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(21,0.1511118);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(3,0.2137044);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(4,0.2137044);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(5,0.1511118);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(6,0.2137044);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(7,0.1511118);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(17,0.1511118);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(21,0.1511118);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetEntries(10);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_7 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(1,0.5611256);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(2,1.234476);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(3,0.2244502);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(4,0.7855758);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(5,0.8978009);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(6,0.1122251);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(7,0.2244502);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(8,0.3366753);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(9,0.2244502);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(10,0.2244502);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(12,0.1122251);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(14,0.1122251);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(15,0.2244502);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(16,0.1122251);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(24,0.1122251);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(1,0.250943);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(2,0.3722086);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(3,0.1587103);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(4,0.2969197);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(5,0.3174206);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(6,0.1122251);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(7,0.1587103);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(8,0.1943796);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(9,0.1587103);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(10,0.1587103);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(12,0.1122251);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(14,0.1122251);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(15,0.1587103);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(16,0.1122251);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(24,0.1122251);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetEntries(49);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_8 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(1,1.330312);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(2,6.3855);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(3,9.312188);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(4,5.32125);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(5,3.990937);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(6,2.660625);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(7,2.926687);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(8,1.330312);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(9,1.596375);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(10,0.532125);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(12,1.596375);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(13,1.330312);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(14,0.532125);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(15,0.7981875);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(17,0.7981875);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(19,0.2660625);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(21,0.2660625);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(24,0.532125);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(25,0.532125);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(1,0.5949338);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(2,1.303435);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(3,1.574047);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(4,1.189868);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(5,1.030456);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(6,0.8413635);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(7,0.8824295);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(8,0.5949338);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(9,0.6517174);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(10,0.3762692);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(12,0.6517174);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(13,0.5949338);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(14,0.3762692);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(15,0.4608338);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(17,0.4608338);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(19,0.2660625);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(21,0.2660625);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(24,0.3762692);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(25,0.3762692);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetEntries(158);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_9 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(1,1.402804);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(2,6.41635);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(3,7.236599);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(4,5.387261);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(5,3.491209);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(6,2.44838);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(7,1.931775);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(8,1.442648);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(9,1.281896);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(10,1.286018);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(11,1.134883);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(12,1.066186);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(13,0.9631395);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(14,0.8710848);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(15,0.7597948);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(16,0.5701896);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(17,0.4492819);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(18,0.3489835);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(19,0.2624246);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(20,0.2005968);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(21,0.2088405);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(22,0.1731178);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(23,0.1442648);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(24,0.07968915);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(25,0.0810631);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(26,0.04946223);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(27,0.03434877);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(28,0.01511346);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(29,0.006869754);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(31,0.002747902);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(1,0.04390197);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(2,0.09389222);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(3,0.09971324);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(4,0.0860339);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(5,0.06925857);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(6,0.0579996);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(7,0.05151857);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(8,0.04452109);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(9,0.04196739);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(10,0.04203481);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(11,0.03948764);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(12,0.03827384);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(13,0.03637728);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(14,0.0345952);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(15,0.03230976);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(16,0.02798951);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(17,0.02484535);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(18,0.02189717);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(19,0.01898838);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(20,0.01660151);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(21,0.0169392);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(22,0.01542256);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(23,0.01407881);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(24,0.0104637);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(25,0.01055352);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(26,0.008243705);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(27,0.006869754);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(28,0.004556879);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(29,0.003072247);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(31,0.00194306);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetEntries(28929);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_10 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(1,0.5949036);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(2,2.699784);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(3,3.258594);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(4,2.554137);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(5,1.709976);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(6,1.146071);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(7,0.8348184);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(8,0.6751583);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(9,0.5834387);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(10,0.5087042);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(11,0.4912944);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(12,0.4314219);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(13,0.3808912);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(14,0.3507426);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(15,0.2925686);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(16,0.2288744);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(17,0.2084923);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(18,0.1549892);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(19,0.1520168);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(20,0.1261145);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(21,0.1002122);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(22,0.07898078);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(23,0.07430987);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(24,0.06072178);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(25,0.03524411);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(26,0.03184709);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(27,0.01401272);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(28,0.00594479);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(29,0.002972395);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(30,0.0004246279);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(31,0.0004246279);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(1,0.01589379);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(2,0.03385858);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(3,0.03719798);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(4,0.03293262);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(5,0.02694631);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(6,0.02206022);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(7,0.01882783);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(8,0.01693195);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(9,0.0157399);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(10,0.01469728);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(11,0.01444359);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(12,0.01353491);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(13,0.01271759);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(14,0.0122039);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(15,0.01114598);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(16,0.009858319);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(17,0.009409125);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(18,0.008112504);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(19,0.008034336);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(20,0.007317904);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(21,0.006523257);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(22,0.005791152);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(23,0.005617299);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(24,0.005077811);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(25,0.003868544);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(26,0.003677385);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(27,0.002439301);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(28,0.001588812);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(29,0.00112346);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(30,0.0004246279);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(31,0.0004246279);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetEntries(41891);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_11 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(1,0.008205022);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(2,0.02461507);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(3,0.01367504);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(4,0.01641004);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(5,0.005470015);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(6,0.008205022);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(7,0.005470015);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(14,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(15,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(18,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(24,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(25,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(26,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(1,0.004737172);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(2,0.008205022);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(3,0.006115663);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(4,0.006699373);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(5,0.003867885);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(6,0.004737172);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(7,0.003867885);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(14,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(15,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(18,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(24,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(25,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(26,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_12 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(1,0.002858127);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(2,0.01071798);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(3,0.007859849);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(4,0.007859849);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(5,0.003929924);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(6,0.001429063);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(7,0.0007145317);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(8,0.001071798);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(9,0.002858127);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(10,0.0007145317);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(11,0.001429063);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(12,0.001071798);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(13,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(14,0.0007145317);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(15,0.0007145317);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(16,0.0007145317);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(17,0.0007145317);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(19,0.001429063);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(20,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(21,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(23,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(27,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(29,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(1,0.0010105);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(2,0.001956826);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(3,0.001675725);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(4,0.001675725);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(5,0.001184917);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(6,0.0007145317);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(7,0.0005052502);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(8,0.0006188026);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(9,0.0010105);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(10,0.0005052502);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(11,0.0007145317);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(12,0.0006188026);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(13,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(14,0.0005052502);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(15,0.0005052502);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(16,0.0005052502);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(17,0.0005052502);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(19,0.0007145317);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(20,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(21,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(23,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(27,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(29,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetEntries(137);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR_Bj1__672 = new TH1D("VbbHcc_both_Z_dR_Bj1__672","",30,0,6);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(1,4965);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(2,16163);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(3,14798);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(4,10949);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(5,8829);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(6,6636);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(7,5327);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(8,4447);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(9,3681);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(10,3199);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(11,2814);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(12,2508);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(13,2218);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(14,2000);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(15,1868);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(16,1642);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(17,1332);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(18,1173);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(19,961);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(20,867);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(21,747);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(22,569);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(23,493);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(24,387);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(25,308);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(26,220);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(27,159);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(28,111);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(29,57);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(30,29);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(31,34);
   VbbHcc_both_Z_dR_Bj1__672->SetEntries(99520);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1__672->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1__672->SetLineWidth(2);
   VbbHcc_both_Z_dR_Bj1__672->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_Bj1__672->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_Bj1__672->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1__672->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__672->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__672->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__672->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__672->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__672->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__672->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__672->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1__672->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__672->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__672->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__672->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__672->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__672->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fx1489[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fy1489[30] = {
   7160.536,
   32800.9,
   30266.53,
   20540.2,
   12961.57,
   15735.45,
   13390.22,
   7817.075,
   6254.003,
   6915.061,
   8367.666,
   8090.896,
   4649.211,
   3107.609,
   3735.909,
   2855.926,
   2238.185,
   1613.063,
   996.693,
   2812.123,
   1884.633,
   1438.037,
   775.599,
   677.2636,
   603.6128,
   521.7589,
   115.8179,
   35.27501,
   28.3329,
   18.54876};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fex1489[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fey1489[30] = {
   957.9784,
   3102.731,
   3311.905,
   2327.445,
   1415.56,
   2627.845,
   2516.445,
   1745.439,
   999.5139,
   1767.169,
   1897.211,
   1896.759,
   1622.932,
   640.774,
   831.0417,
   764.9689,
   554.7155,
   542.9274,
   123.2985,
   1557.482,
   626.8324,
   542.6162,
   320.2586,
   318.7904,
   317.3556,
   314.2671,
   39.61779,
   10.26443,
   9.476369,
   8.056355};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_Bj1_fx1489,Graph_from_VbbHcc_both_Z_dR_Bj1_fy1489,Graph_from_VbbHcc_both_Z_dR_Bj1_fex1489,Graph_from_VbbHcc_both_Z_dR_Bj1_fey1489);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->SetMinimum(9.44316);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->SetMaximum(39492.94);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR_Bj1","MC unc. (stat.)","fl");

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
   Z_dR_Bj1_both_16->cd();
  
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
   
   TH1D *data_mc_ratio__673 = new TH1D("data_mc_ratio__673","",30,0,6);
   data_mc_ratio__673->SetBinContent(1,0.6933839);
   data_mc_ratio__673->SetBinContent(2,0.4927609);
   data_mc_ratio__673->SetBinContent(3,0.4889229);
   data_mc_ratio__673->SetBinContent(4,0.5330521);
   data_mc_ratio__673->SetBinContent(5,0.6811675);
   data_mc_ratio__673->SetBinContent(6,0.421723);
   data_mc_ratio__673->SetBinContent(7,0.3978278);
   data_mc_ratio__673->SetBinContent(8,0.5688828);
   data_mc_ratio__673->SetBinContent(9,0.588583);
   data_mc_ratio__673->SetBinContent(10,0.4626134);
   data_mc_ratio__673->SetBinContent(11,0.3362945);
   data_mc_ratio__673->SetBinContent(12,0.309978);
   data_mc_ratio__673->SetBinContent(13,0.4770702);
   data_mc_ratio__673->SetBinContent(14,0.6435816);
   data_mc_ratio__673->SetBinContent(15,0.5000121);
   data_mc_ratio__673->SetBinContent(16,0.5749448);
   data_mc_ratio__673->SetBinContent(17,0.5951251);
   data_mc_ratio__673->SetBinContent(18,0.7271879);
   data_mc_ratio__673->SetBinContent(19,0.9641885);
   data_mc_ratio__673->SetBinContent(20,0.308308);
   data_mc_ratio__673->SetBinContent(21,0.3963636);
   data_mc_ratio__673->SetBinContent(22,0.3956784);
   data_mc_ratio__673->SetBinContent(23,0.6356377);
   data_mc_ratio__673->SetBinContent(24,0.5714171);
   data_mc_ratio__673->SetBinContent(25,0.5102609);
   data_mc_ratio__673->SetBinContent(26,0.4216507);
   data_mc_ratio__673->SetBinContent(27,1.372845);
   data_mc_ratio__673->SetBinContent(28,3.146703);
   data_mc_ratio__673->SetBinContent(29,2.011795);
   data_mc_ratio__673->SetBinContent(30,1.563447);
   data_mc_ratio__673->SetBinContent(31,0.5380836);
   data_mc_ratio__673->SetBinError(1,0.009840431);
   data_mc_ratio__673->SetBinError(2,0.003875924);
   data_mc_ratio__673->SetBinError(3,0.004019193);
   data_mc_ratio__673->SetBinError(4,0.005094276);
   data_mc_ratio__673->SetBinError(5,0.007249335);
   data_mc_ratio__673->SetBinError(6,0.005176951);
   data_mc_ratio__673->SetBinError(7,0.005450719);
   data_mc_ratio__673->SetBinError(8,0.00853079);
   data_mc_ratio__673->SetBinError(9,0.009701186);
   data_mc_ratio__673->SetBinError(10,0.008179205);
   data_mc_ratio__673->SetBinError(11,0.00633954);
   data_mc_ratio__673->SetBinError(12,0.006189665);
   data_mc_ratio__673->SetBinError(13,0.01012981);
   data_mc_ratio__673->SetBinError(14,0.01439092);
   data_mc_ratio__673->SetBinError(15,0.0115689);
   data_mc_ratio__673->SetBinError(16,0.0141886);
   data_mc_ratio__673->SetBinError(17,0.01630633);
   data_mc_ratio__673->SetBinError(18,0.02123233);
   data_mc_ratio__673->SetBinError(19,0.03110286);
   data_mc_ratio__673->SetBinError(20,0.01047069);
   data_mc_ratio__673->SetBinError(21,0.01450218);
   data_mc_ratio__673->SetBinError(22,0.0165877);
   data_mc_ratio__673->SetBinError(23,0.02862768);
   data_mc_ratio__673->SetBinError(24,0.02904676);
   data_mc_ratio__673->SetBinError(25,0.02907481);
   data_mc_ratio__673->SetBinError(26,0.02842768);
   data_mc_ratio__673->SetBinError(27,0.1088737);
   data_mc_ratio__673->SetBinError(28,0.2986718);
   data_mc_ratio__673->SetBinError(29,0.2664688);
   data_mc_ratio__673->SetBinError(30,0.2903249);
   data_mc_ratio__673->SetBinError(31,0.3288567);
   data_mc_ratio__673->SetMinimum(0.4);
   data_mc_ratio__673->SetMaximum(1.6);
   data_mc_ratio__673->SetEntries(167.0148);
   data_mc_ratio__673->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__673->SetLineColor(ci);
   data_mc_ratio__673->SetLineWidth(2);
   data_mc_ratio__673->SetMarkerStyle(20);
   data_mc_ratio__673->SetMarkerSize(1.2);
   data_mc_ratio__673->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__673->GetXaxis()->SetRange(1,30);
   data_mc_ratio__673->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__673->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__673->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__673->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__673->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__673->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__673->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__673->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__673->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__673->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__673->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__673->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__673->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__673->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__673->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__673->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__673->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1490[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1490[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1490[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1490[30] = {
   0.1337859,
   0.09459288,
   0.1094247,
   0.1133117,
   0.1092121,
   0.1670016,
   0.1879316,
   0.2232855,
   0.1598199,
   0.2555536,
   0.2267313,
   0.2344312,
   0.3490768,
   0.2061952,
   0.222447,
   0.2678532,
   0.2478417,
   0.3365816,
   0.1237076,
   0.5538455,
   0.3326018,
   0.3773312,
   0.4129177,
   0.4707036,
   0.5257603,
   0.6023226,
   0.3420698,
   0.2909831,
   0.3344652,
   0.434334};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1490,Graph_from_mc_statistical_error_fy1490,Graph_from_mc_statistical_error_fex1490,Graph_from_mc_statistical_error_fey1490);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1490 = new TH1F("Graph_Graph_from_mc_statistical_error1490","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1490->SetMinimum(0.2772129);
   Graph_Graph_from_mc_statistical_error1490->SetMaximum(1.722787);
   Graph_Graph_from_mc_statistical_error1490->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1490->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1490->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1490->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1490->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1490->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1490->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1490->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1490->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1490->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1490->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1490->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1490->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1490->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1490->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1490->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1490);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_both_16->cd();
   Z_dR_Bj1_both_16->Modified();
   Z_dR_Bj1_both_16->cd();
   Z_dR_Bj1_both_16->SetSelected(Z_dR_Bj1_both_16);
}
