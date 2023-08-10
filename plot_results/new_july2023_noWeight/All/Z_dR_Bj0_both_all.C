void Z_dR_Bj0_both_all()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_all/Z_dR_Bj0_both_all
//=========  (Thu Aug 10 12:29:27 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_both_all = new TCanvas("Z_dR_Bj0_both_all", "Z_dR_Bj0_both_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_both_all->SetHighLightColor(2);
   Z_dR_Bj0_both_all->Range(0,0,1,1);
   Z_dR_Bj0_both_all->SetFillColor(0);
   Z_dR_Bj0_both_all->SetFillStyle(4000);
   Z_dR_Bj0_both_all->SetBorderMode(0);
   Z_dR_Bj0_both_all->SetBorderSize(2);
   Z_dR_Bj0_both_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-314.9211,6.314516,314906.1);
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
   st->SetMinimum(0.3);
   st->SetMaximum(269889.5);
   
   TH1F *st_stack_244 = new TH1F("st_stack_244","",30,0,6);
   st_stack_244->SetMinimum(0.3);
   st_stack_244->SetMaximum(283384);
   st_stack_244->SetDirectory(0);
   st_stack_244->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_244->SetLineColor(ci);
   st_stack_244->GetXaxis()->SetRange(1,30);
   st_stack_244->GetXaxis()->SetLabelFont(42);
   st_stack_244->GetXaxis()->SetLabelSize(0.035);
   st_stack_244->GetXaxis()->SetTitleSize(0.035);
   st_stack_244->GetXaxis()->SetTitleFont(42);
   st_stack_244->GetYaxis()->SetTitle("Events/0.2");
   st_stack_244->GetYaxis()->SetLabelFont(42);
   st_stack_244->GetYaxis()->SetLabelSize(0.05);
   st_stack_244->GetYaxis()->SetTitleSize(0.057);
   st_stack_244->GetYaxis()->SetTitleOffset(1.2);
   st_stack_244->GetYaxis()->SetTitleFont(42);
   st_stack_244->GetZaxis()->SetLabelFont(42);
   st_stack_244->GetZaxis()->SetLabelSize(0.035);
   st_stack_244->GetZaxis()->SetTitleSize(0.035);
   st_stack_244->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_244);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(1,24003.49);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(2,97300.67);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(3,109933);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(4,66169.92);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(5,49198.41);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(6,43730.39);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(7,26105.56);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(8,25898.02);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(9,21313.87);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(10,37572.7);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(11,15706.27);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(12,15613.6);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(13,10236.41);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(14,10800.35);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(15,9364.209);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(16,8717.635);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(17,6816.06);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(18,5294.283);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(19,6247.229);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(20,4649.147);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(21,2764.599);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(22,2581.27);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(23,2043.962);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(24,1659.215);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(25,1031.619);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(26,1116.3);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(27,469.0927);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(28,581.8649);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(29,124.06);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(30,54.40569);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(31,90.5497);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(1,1532.324);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(2,4358.694);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(3,15657.84);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(4,4279.68);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(5,3298.307);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(6,3694.896);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(7,2533.343);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(8,2814.31);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(9,2291.368);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(10,15011.22);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(11,1617.152);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(12,2100.677);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(13,1234.814);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(14,1385.986);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(15,1142.99);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(16,1297.147);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(17,1089.076);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(18,1534.066);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(19,1055.411);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(20,903.3918);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(21,565.4822);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(22,618.1915);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(23,488.3433);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(24,482.6579);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(25,292.8496);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(26,464.7926);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(27,86.0631);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(28,374.5842);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(29,51.6794);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(30,34.58534);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(31,45.49013);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetEntries(31751);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(1,118.7042);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(2,429.3008);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(3,480.8759);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(4,380.9116);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(5,307.1379);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(6,242.9369);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(7,186.8988);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(8,153.9951);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(9,131.3395);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(10,119.1792);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(11,101.6504);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(12,89.82137);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(13,77.59254);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(14,65.02398);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(15,58.21025);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(16,53.18554);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(17,38.98236);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(18,36.79434);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(19,29.74311);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(20,26.73681);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(21,20.27992);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(22,18.60554);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(23,16.61564);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(24,10.70175);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(25,8.905182);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(26,6.746087);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(27,5.318252);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(28,3.727239);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(29,1.910911);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(30,1.513343);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(31,1.51274);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(1,4.558021);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(2,8.356882);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(3,8.819728);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(4,7.836471);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(5,7.015447);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(6,6.291145);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(7,5.414034);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(8,4.961239);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(9,4.534705);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(10,4.362965);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(11,4.047271);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(12,3.857691);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(13,3.593958);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(14,3.205639);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(15,3.054003);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(16,2.919334);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(17,2.394357);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(18,2.46534);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(19,2.277389);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(20,2.126357);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(21,1.73771);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(22,1.732875);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(23,1.698244);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(24,1.409047);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(25,1.258608);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(26,1.04551);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(27,1.006531);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(28,0.8180273);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(29,0.5175917);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(30,0.5155659);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(31,0.5159783);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetEntries(38814);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_3 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(1,1775.983);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(2,7994.235);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(3,9498.078);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(4,8180.03);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(5,6327.625);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(6,4842.314);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(7,3794.063);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(8,3067.531);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(9,2534.507);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(10,2182.324);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(11,1896.775);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(12,1663.595);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(13,1458.408);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(14,1288.047);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(15,1118.933);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(16,975.2627);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(17,827.2989);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(18,707.9611);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(19,610.3123);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(20,481.9357);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(21,403.0425);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(22,313.877);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(23,247.9047);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(24,187.0582);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(25,135.7947);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(26,100.1971);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(27,65.2304);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(28,39.87569);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(29,24.7825);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(30,13.28074);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(31,24.67113);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(1,10.53812);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(2,22.3114);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(3,24.35287);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(4,22.6045);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(5,19.88263);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(6,17.37217);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(7,15.37052);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(8,13.81766);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(9,12.55549);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(10,11.65688);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(11,10.86962);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(12,10.18595);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(13,9.535048);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(14,8.960493);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(15,8.354919);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(16,7.79751);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(17,7.186589);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(18,6.642669);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(19,6.172776);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(20,5.467721);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(21,5.000093);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(22,4.402551);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(23,3.927993);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(24,3.405938);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(25,2.897659);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(26,2.494794);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(27,2.009255);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(28,1.563436);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(29,1.234178);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(30,0.8979669);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(31,1.218775);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetEntries(1047064);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_4 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(1,326.4239);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(2,1268.242);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(3,1328.684);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(4,970.0503);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(5,676.0708);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(6,512.9222);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(7,384.3838);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(8,331.8464);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(9,309.2308);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(10,264.7949);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(11,217.7774);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(12,192.6173);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(13,183.0012);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(14,167.2072);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(15,129.405);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(16,126.3669);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(17,90.49741);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(18,80.67176);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(19,80.39781);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(20,58.17021);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(21,59.89212);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(22,34.66311);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(23,24.36567);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(24,23.3712);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(25,18.73852);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(26,11.70954);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(27,9.732784);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(28,4.584472);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(29,2.576981);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(30,1.599125);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(31,2.900843);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(1,6.80043);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(2,20.87977);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(3,27.20849);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(4,23.34805);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(5,19.14124);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(6,16.76416);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(7,13.52328);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(8,13.73441);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(9,15.62901);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(10,12.78093);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(11,10.93507);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(12,10.98302);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(13,10.30952);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(14,10.50605);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(15,7.036103);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(16,8.823214);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(17,5.753604);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(18,5.599349);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(19,6.751124);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(20,4.538766);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(21,6.078968);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(22,3.801143);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(23,2.183232);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(24,2.196928);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(25,1.962727);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(26,1.48663);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(27,1.255414);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(28,0.8319009);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(29,0.6064686);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(30,0.5791955);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(31,0.7437543);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetEntries(52623);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_5 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(1,57.71266);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(2,140.9017);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(3,134.8009);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(4,91.21874);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(5,59.29484);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(6,44.1479);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(7,37.78731);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(8,31.91586);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(9,28.53295);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(10,19.26933);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(11,18.51534);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(12,27.42248);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(13,16.37608);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(14,14.99947);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(15,13.29522);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(16,10.56249);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(17,8.265365);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(18,9.821376);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(19,7.121122);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(20,6.607932);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(21,5.612826);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(22,7.373398);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(23,6.250727);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(24,2.03698);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(25,2.539058);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(26,3.600149);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(27,1.109561);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(28,1.153269);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(29,0.5278322);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(30,0.08254511);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(31,0.3545357);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(1,5.38071);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(2,9.251519);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(3,13.29173);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(4,12.791);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(5,5.735826);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(6,4.405572);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(7,4.751741);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(8,4.254443);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(9,3.488216);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(10,3.306254);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(11,3.335227);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(12,5.011574);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(13,2.764802);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(14,2.493922);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(15,2.299183);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(16,2.209476);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(17,1.120773);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(18,2.506093);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(19,1.481926);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(20,2.234287);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(21,1.444936);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(22,2.501617);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(23,1.908346);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(24,0.4762823);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(25,0.5787292);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(26,1.321221);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(27,0.343514);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(28,0.4033603);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(29,0.2191535);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(30,0.08120808);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(31,0.2101271);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetEntries(8810);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_6 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(1,1.038455);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(2,0.586412);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(3,1.082654);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(5,0.5840445);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(7,0.5840445);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(8,0.586412);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(11,0.4496752);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(12,0.1343693);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(19,0.1343693);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(21,0.1343693);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(1,0.6532536);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(2,0.4715906);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(3,0.6349631);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(5,0.3681413);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(7,0.3681413);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(8,0.4715906);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(11,0.3427432);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(12,0.1343693);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(19,0.1343693);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(21,0.1343693);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetEntries(21);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_7 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(1,1.013144);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(2,1.542629);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(3,2.391358);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(4,0.4362346);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(5,0.4243645);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(6,0.2181173);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(7,0.4243645);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(8,0.6701599);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(9,0.4362346);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(10,0.4362346);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(11,0.5334232);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(12,0.2181173);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(13,0.1090586);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(14,0.1090586);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(15,0.1090586);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(16,0.1090586);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(17,0.1090586);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(19,0.1090586);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(20,0.1090586);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(1,0.6485206);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(2,0.5685776);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(3,0.7388529);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(4,0.2181173);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(5,0.3336339);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(6,0.1542322);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(7,0.3336339);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(8,0.4776297);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(9,0.2181173);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(10,0.2181173);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(11,0.3510062);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(12,0.1542322);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(13,0.1090586);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(14,0.1090586);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(15,0.1090586);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(16,0.1090586);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(17,0.1090586);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(19,0.1090586);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(20,0.1090586);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetEntries(62);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_8 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(1,8.74541);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(2,30.59392);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(3,29.18274);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(4,16.29917);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(5,10.94043);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(6,6.092003);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(7,6.916586);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(8,5.605589);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(9,6.811831);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(10,6.005929);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(11,4.096254);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(12,4.454235);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(13,2.054279);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(14,2.136712);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(15,2.110523);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(16,2.110523);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(17,1.246091);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(18,1.324657);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(19,1.344694);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(20,1.055261);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(21,0.4864143);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(23,1.282298);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(24,1.009036);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(25,1.055261);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(26,0.7758471);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(28,0.2432072);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(1,1.524576);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(2,2.833327);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(3,2.75011);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(4,2.073786);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(5,1.691355);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(6,1.244987);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(7,1.358897);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(8,1.196534);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(9,1.338209);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(10,1.254806);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(11,1.025635);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(12,1.082519);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(13,0.7279875);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(14,0.7568253);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(15,0.7475529);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(16,0.7475529);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(17,0.557377);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(18,0.5937311);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(19,0.6020495);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(20,0.5285997);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(21,0.3439469);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(23,0.5741008);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(24,0.5054914);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(25,0.5285997);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(26,0.4487152);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(28,0.2432072);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetEntries(591);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_9 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(1,6.081767);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(2,27.68213);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(3,28.74248);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(4,19.49018);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(5,12.39602);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(6,8.368069);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(7,6.464513);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(8,5.526374);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(9,5.022646);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(10,4.581603);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(11,4.402543);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(12,4.152232);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(13,3.497351);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(14,2.806758);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(15,2.371123);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(16,1.935713);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(17,1.548973);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(18,1.156944);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(19,0.8773747);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(20,0.6734546);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(21,0.623793);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(22,0.5421888);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(23,0.4540617);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(24,0.3546734);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(25,0.2780096);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(26,0.2024359);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(27,0.1269229);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(28,0.0662546);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(29,0.02704489);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(30,0.001373951);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(31,0.009846404);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(1,0.1064069);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(2,0.226673);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(3,0.2295643);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(4,0.1880254);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(5,0.1497825);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(6,0.123506);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(7,0.1086216);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(8,0.1008945);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(9,0.09596185);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(10,0.09146714);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(11,0.08998377);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(12,0.08761119);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(13,0.08006774);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(14,0.0718141);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(15,0.0656147);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(16,0.059692);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(17,0.05331239);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(18,0.04579208);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(19,0.03984438);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(20,0.03503707);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(21,0.03353875);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(22,0.03152576);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(23,0.02921086);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(24,0.02558254);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(25,0.02296005);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(26,0.01934839);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(27,0.01517332);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(28,0.01115771);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(29,0.007156942);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(30,0.001373951);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(31,0.00449118);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetEntries(85972);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_10 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(1,2.270866);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(2,11.1011);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(3,13.29121);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(4,9.744604);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(5,6.485452);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(6,4.370631);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(7,3.212612);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(8,2.619915);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(9,2.158623);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(10,2.04638);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(11,1.858853);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(12,1.53855);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(13,1.351022);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(14,1.194977);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(15,1.069046);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(16,0.8828866);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(17,0.7199974);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(18,0.6022792);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(19,0.4558159);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(20,0.402432);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(21,0.3216719);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(22,0.2997708);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(23,0.253231);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(24,0.1587827);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(25,0.1245623);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(26,0.07391608);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(27,0.0588591);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(28,0.02326988);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(29,0.01779461);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(30,0.004106449);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(31,0.001368816);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(1,0.03297687);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(2,0.07291162);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(3,0.07978035);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(4,0.06831181);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(5,0.05572933);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(6,0.04574944);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(7,0.03922318);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(8,0.03542071);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(9,0.03215157);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(10,0.03130451);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(11,0.0298357);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(12,0.02714373);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(13,0.02543577);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(14,0.02392178);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(15,0.02262621);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(16,0.02056204);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(17,0.0185686);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(18,0.01698293);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(19,0.01477435);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(20,0.01388225);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(21,0.01241138);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(22,0.01198142);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(23,0.01101215);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(24,0.008719976);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(25,0.007723373);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(26,0.005949537);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(27,0.005309095);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(28,0.003338188);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(29,0.002919161);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(30,0.001402319);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(31,0.0008096295);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetEntries(150600);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_11 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(1,0.03042261);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(2,0.1194014);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(3,0.09171379);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(4,0.0631077);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(5,0.02023231);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(6,0.01430305);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(7,0.01245278);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(8,0.01703805);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(9,0.008866782);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(10,0.01114254);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(11,0.00589551);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(12,0.007286531);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(13,0.001580251);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(14,0.01568078);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(15,0.003160502);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(16,0.002275762);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(17,0.003856013);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(18,0.005436264);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(21,0.001580251);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(23,0.002735007);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(31,0.001580251);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(1,0.007993508);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(2,0.01587278);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(3,0.01398318);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(4,0.01159789);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(5,0.006911644);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(6,0.005523506);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(7,0.004779556);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(8,0.006163553);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(9,0.004509506);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(10,0.005051211);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(11,0.003531947);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(12,0.004223559);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(13,0.001580251);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(14,0.006116588);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(15,0.002234813);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(16,0.002275762);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(17,0.002770611);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(18,0.003189589);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(21,0.001580251);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(23,0.002735007);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(31,0.001580251);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetEntries(215);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_12 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(1,0.008669796);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(2,0.0524718);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(3,0.04262817);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(4,0.03102171);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(5,0.01686643);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(6,0.009406205);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(7,0.005994425);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(8,0.005071952);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(9,0.006028531);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(10,0.003989552);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(11,0.004691519);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(12,0.003250844);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(13,0.002535976);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(14,0.001821444);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(15,0.001014525);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(16,0.003458113);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(17,0.002501534);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(18,0.001521787);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(19,0.001671448);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(20,0.001971104);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(21,0.0007724772);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(22,0.0007148681);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(23,0.001014525);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(24,0.0008069192);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(25,0.0009565794);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(26,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(27,0.0005072625);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(1,0.001522233);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(2,0.003898372);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(3,0.003518717);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(4,0.00297942);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(5,0.002142341);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(6,0.001640349);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(7,0.001306371);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(8,0.001219635);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(9,0.001339678);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(10,0.0009829406);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(11,0.001153636);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(12,0.0009590356);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(13,0.0008624122);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(14,0.0006989114);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(15,0.0005155469);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(16,0.001020849);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(17,0.0008572663);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(18,0.0006314134);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(19,0.0006951415);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(20,0.0007569781);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(21,0.0004624274);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(22,0.0004195169);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(23,0.0005155469);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(24,0.0004718988);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(25,0.0005542809);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(26,0.0002935987);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(27,0.0003645467);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetEntries(775);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all__670 = new TH1D("VbbHcc_both_Z_dR_Bj0_all__670","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(1,22564);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(2,83793);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(3,77205);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(4,57293);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(5,43976);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(6,33819);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(7,26853);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(8,22001);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(9,18769);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(10,15979);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(11,14130);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(12,12750);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(13,11148);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(14,9959);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(15,8794);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(16,7632);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(17,6270);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(18,5508);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(19,4766);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(20,3855);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(21,3315);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(22,2726);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(23,2143);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(24,1736);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(25,1376);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(26,1048);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(27,695);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(28,428);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(29,269);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(30,139);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(31,226);
   VbbHcc_both_Z_dR_Bj0_all__670->SetEntries(501194);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all__670->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all__670->SetLineWidth(2);
   VbbHcc_both_Z_dR_Bj0_all__670->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_Bj0_all__670->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_Bj0_all__670->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all__670->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all__670->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all__670->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all__670->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all__670->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all__670->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all__670->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all__670->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all__670->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all__670->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all__670->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all__670->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all__670->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all__670->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_all_fx1487[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_all_fy1487[30] = {
   26301.5,
   107205,
   121450.3,
   75838.19,
   56599.41,
   49391.78,
   30526.32,
   29498.34,
   24331.93,
   40171.35,
   17952.34,
   17597.57,
   11978.81,
   12341.9,
   10689.72,
   9888.056,
   7784.735,
   6132.623,
   6977.726,
   5224.84,
   3254.995,
   2956.632,
   2341.092,
   1883.907,
   1199.055,
   1239.605,
   550.6699,
   631.5383,
   153.903,
   70.88692};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_all_fex1487[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_all_fey1487[30] = {
   1532.393,
   4358.82,
   15657.89,
   4279.83,
   3298.436,
   3694.983,
   2533.436,
   2814.385,
   2291.463,
   15011.23,
   1617.235,
   2100.74,
   1234.903,
   1386.061,
   1143.049,
   1297.205,
   1089.119,
   1534.094,
   1055.454,
   903.4252,
   565.5416,
   618.2264,
   488.371,
   482.6775,
   292.8743,
   464.8049,
   86.10227,
   374.5895,
   51.70075,
   34.60578};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_Bj0_all_fx1487,Graph_from_VbbHcc_both_Z_dR_Bj0_all_fy1487,Graph_from_VbbHcc_both_Z_dR_Bj0_all_fex1487,Graph_from_VbbHcc_both_Z_dR_Bj0_all_fey1487);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_Bj0_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->SetMinimum(32.65303);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->SetMaximum(150815.4);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR_Bj0_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj0_both_all->cd();
  
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
   
   TH1D *data_mc_ratio__671 = new TH1D("data_mc_ratio__671","",30,0,6);
   data_mc_ratio__671->SetBinContent(1,0.8578977);
   data_mc_ratio__671->SetBinContent(2,0.7816145);
   data_mc_ratio__671->SetBinContent(3,0.6356922);
   data_mc_ratio__671->SetBinContent(4,0.7554637);
   data_mc_ratio__671->SetBinContent(5,0.7769692);
   data_mc_ratio__671->SetBinContent(6,0.6847091);
   data_mc_ratio__671->SetBinContent(7,0.8796672);
   data_mc_ratio__671->SetBinContent(8,0.7458386);
   data_mc_ratio__671->SetBinContent(9,0.7713734);
   data_mc_ratio__671->SetBinContent(10,0.397771);
   data_mc_ratio__671->SetBinContent(11,0.7870841);
   data_mc_ratio__671->SetBinContent(12,0.724532);
   data_mc_ratio__671->SetBinContent(13,0.9306437);
   data_mc_ratio__671->SetBinContent(14,0.8069262);
   data_mc_ratio__671->SetBinContent(15,0.8226598);
   data_mc_ratio__671->SetBinContent(16,0.7718403);
   data_mc_ratio__671->SetBinContent(17,0.8054225);
   data_mc_ratio__671->SetBinContent(18,0.8981476);
   data_mc_ratio__671->SetBinContent(19,0.6830305);
   data_mc_ratio__671->SetBinContent(20,0.7378217);
   data_mc_ratio__671->SetBinContent(21,1.018435);
   data_mc_ratio__671->SetBinContent(22,0.921995);
   data_mc_ratio__671->SetBinContent(23,0.9153849);
   data_mc_ratio__671->SetBinContent(24,0.9214894);
   data_mc_ratio__671->SetBinContent(25,1.14757);
   data_mc_ratio__671->SetBinContent(26,0.8454304);
   data_mc_ratio__671->SetBinContent(27,1.262099);
   data_mc_ratio__671->SetBinContent(28,0.6777102);
   data_mc_ratio__671->SetBinContent(29,1.747854);
   data_mc_ratio__671->SetBinContent(30,1.960869);
   data_mc_ratio__671->SetBinContent(31,1.883306);
   data_mc_ratio__671->SetBinError(1,0.005711201);
   data_mc_ratio__671->SetBinError(2,0.002700155);
   data_mc_ratio__671->SetBinError(3,0.002287832);
   data_mc_ratio__671->SetBinError(4,0.003156188);
   data_mc_ratio__671->SetBinError(5,0.003705066);
   data_mc_ratio__671->SetBinError(6,0.00372328);
   data_mc_ratio__671->SetBinError(7,0.005368117);
   data_mc_ratio__671->SetBinError(8,0.005028329);
   data_mc_ratio__671->SetBinError(9,0.005630462);
   data_mc_ratio__671->SetBinError(10,0.003146722);
   data_mc_ratio__671->SetBinError(11,0.006621404);
   data_mc_ratio__671->SetBinError(12,0.006416563);
   data_mc_ratio__671->SetBinError(13,0.008814242);
   data_mc_ratio__671->SetBinError(14,0.008085855);
   data_mc_ratio__671->SetBinError(15,0.008772574);
   data_mc_ratio__671->SetBinError(16,0.008835035);
   data_mc_ratio__671->SetBinError(17,0.01017162);
   data_mc_ratio__671->SetBinError(18,0.01210182);
   data_mc_ratio__671->SetBinError(19,0.009893799);
   data_mc_ratio__671->SetBinError(20,0.01188336);
   data_mc_ratio__671->SetBinError(21,0.01768852);
   data_mc_ratio__671->SetBinError(22,0.01765898);
   data_mc_ratio__671->SetBinError(23,0.01977392);
   data_mc_ratio__671->SetBinError(24,0.02211645);
   data_mc_ratio__671->SetBinError(25,0.03093641);
   data_mc_ratio__671->SetBinError(26,0.02611543);
   data_mc_ratio__671->SetBinError(27,0.04787414);
   data_mc_ratio__671->SetBinError(28,0.03275836);
   data_mc_ratio__671->SetBinError(29,0.1065685);
   data_mc_ratio__671->SetBinError(30,0.1663188);
   data_mc_ratio__671->SetBinError(31,0.7252287);
   data_mc_ratio__671->SetMinimum(0.4);
   data_mc_ratio__671->SetMaximum(1.6);
   data_mc_ratio__671->SetEntries(348.6923);
   data_mc_ratio__671->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__671->SetLineColor(ci);
   data_mc_ratio__671->SetLineWidth(2);
   data_mc_ratio__671->SetMarkerStyle(20);
   data_mc_ratio__671->SetMarkerSize(1.2);
   data_mc_ratio__671->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__671->GetXaxis()->SetRange(1,30);
   data_mc_ratio__671->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__671->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__671->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__671->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__671->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__671->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__671->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__671->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__671->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__671->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__671->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__671->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__671->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__671->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__671->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__671->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__671->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1488[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1488[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1488[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1488[30] = {
   0.05826255,
   0.04065873,
   0.1289243,
   0.05643371,
   0.05827685,
   0.07480967,
   0.08299187,
   0.09540827,
   0.09417515,
   0.37368,
   0.09008491,
   0.1193767,
   0.1030906,
   0.1123054,
   0.1069298,
   0.1311891,
   0.1399044,
   0.2501531,
   0.1512605,
   0.1729096,
   0.1737458,
   0.2090982,
   0.2086082,
   0.2562109,
   0.2442542,
   0.374962,
   0.1563591,
   0.5931382,
   0.3359307,
   0.4881829};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1488,Graph_from_mc_statistical_error_fy1488,Graph_from_mc_statistical_error_fex1488,Graph_from_mc_statistical_error_fey1488);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1488 = new TH1F("Graph_Graph_from_mc_statistical_error1488","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1488->SetMinimum(0.2882341);
   Graph_Graph_from_mc_statistical_error1488->SetMaximum(1.711766);
   Graph_Graph_from_mc_statistical_error1488->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1488->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1488->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1488->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1488->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1488->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1488->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1488->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1488->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1488->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1488);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_both_all->cd();
   Z_dR_Bj0_both_all->Modified();
   Z_dR_Bj0_both_all->cd();
   Z_dR_Bj0_both_all->SetSelected(Z_dR_Bj0_both_all);
}
