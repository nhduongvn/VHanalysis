void H_mass_algo_17()
{
//=========Macro generated from canvas: H_mass_algo_17/H_mass_algo_17
//=========  (Fri Jul 14 13:38:11 2023) by ROOT version 6.14/09
   TCanvas *H_mass_algo_17 = new TCanvas("H_mass_algo_17", "H_mass_algo_17",0,0,600,600);
   H_mass_algo_17->SetHighLightColor(2);
   H_mass_algo_17->Range(0,0,1,1);
   H_mass_algo_17->SetFillColor(0);
   H_mass_algo_17->SetFillStyle(4000);
   H_mass_algo_17->SetBorderMode(0);
   H_mass_algo_17->SetBorderSize(2);
   H_mass_algo_17->SetFrameFillStyle(1000);
   H_mass_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-16.07268,315.7258,16066.61);
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
   st->SetMaximum(13769.85);
   
   TH1F *st_stack_102 = new TH1F("st_stack_102","",40,0,400);
   st_stack_102->SetMinimum(0.01);
   st_stack_102->SetMaximum(14458.34);
   st_stack_102->SetDirectory(0);
   st_stack_102->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_102->SetLineColor(ci);
   st_stack_102->GetXaxis()->SetRange(1,30);
   st_stack_102->GetXaxis()->SetLabelFont(42);
   st_stack_102->GetXaxis()->SetLabelSize(0.035);
   st_stack_102->GetXaxis()->SetTitleSize(0.035);
   st_stack_102->GetXaxis()->SetTitleFont(42);
   st_stack_102->GetYaxis()->SetTitle("Events/10.0");
   st_stack_102->GetYaxis()->SetLabelFont(42);
   st_stack_102->GetYaxis()->SetLabelSize(0.05);
   st_stack_102->GetYaxis()->SetTitleSize(0.057);
   st_stack_102->GetYaxis()->SetTitleOffset(1.2);
   st_stack_102->GetYaxis()->SetTitleFont(42);
   st_stack_102->GetZaxis()->SetLabelFont(42);
   st_stack_102->GetZaxis()->SetLabelSize(0.035);
   st_stack_102->GetZaxis()->SetTitleSize(0.035);
   st_stack_102->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_102);
   
   
   TH1D *VbbHcc_algo_H_mass_stack_1 = new TH1D("VbbHcc_algo_H_mass_stack_1","",40,0,400);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(5,612.1394);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(6,2997.543);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(7,4110.005);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(8,3739.694);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(9,4166.062);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(10,5519.26);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(11,3762.466);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(12,3257.136);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(13,2662.023);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(14,2888.508);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(15,3107.228);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(16,4150.856);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(17,2884.587);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(18,3577.652);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(19,3566.885);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(20,2365.502);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(21,1701.361);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(22,5535.078);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(23,2450.5);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(24,3791.073);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(25,2073.407);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(26,2401.991);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(27,1293.856);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(28,2519.733);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(29,2231.416);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(30,2943.693);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(31,2229.384);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(32,2309.443);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(33,2477.556);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(34,2004.434);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(35,2319.625);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(36,3363.97);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(37,2227.415);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(38,1800.172);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(39,1750.004);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(40,686.5372);
   VbbHcc_algo_H_mass_stack_1->SetBinContent(41,81236.61);
   VbbHcc_algo_H_mass_stack_1->SetBinError(5,403.824);
   VbbHcc_algo_H_mass_stack_1->SetBinError(6,865.4647);
   VbbHcc_algo_H_mass_stack_1->SetBinError(7,1060.762);
   VbbHcc_algo_H_mass_stack_1->SetBinError(8,861.4077);
   VbbHcc_algo_H_mass_stack_1->SetBinError(9,872.3734);
   VbbHcc_algo_H_mass_stack_1->SetBinError(10,1102.36);
   VbbHcc_algo_H_mass_stack_1->SetBinError(11,780.2144);
   VbbHcc_algo_H_mass_stack_1->SetBinError(12,752.2936);
   VbbHcc_algo_H_mass_stack_1->SetBinError(13,595.3748);
   VbbHcc_algo_H_mass_stack_1->SetBinError(14,725.2482);
   VbbHcc_algo_H_mass_stack_1->SetBinError(15,742.3822);
   VbbHcc_algo_H_mass_stack_1->SetBinError(16,950.6791);
   VbbHcc_algo_H_mass_stack_1->SetBinError(17,694.1161);
   VbbHcc_algo_H_mass_stack_1->SetBinError(18,802.3206);
   VbbHcc_algo_H_mass_stack_1->SetBinError(19,837.1947);
   VbbHcc_algo_H_mass_stack_1->SetBinError(20,577.1878);
   VbbHcc_algo_H_mass_stack_1->SetBinError(21,360.0663);
   VbbHcc_algo_H_mass_stack_1->SetBinError(22,2003.148);
   VbbHcc_algo_H_mass_stack_1->SetBinError(23,1041.755);
   VbbHcc_algo_H_mass_stack_1->SetBinError(24,895.4794);
   VbbHcc_algo_H_mass_stack_1->SetBinError(25,482.2867);
   VbbHcc_algo_H_mass_stack_1->SetBinError(26,664.1167);
   VbbHcc_algo_H_mass_stack_1->SetBinError(27,314.9653);
   VbbHcc_algo_H_mass_stack_1->SetBinError(28,712.53);
   VbbHcc_algo_H_mass_stack_1->SetBinError(29,642.859);
   VbbHcc_algo_H_mass_stack_1->SetBinError(30,774.3435);
   VbbHcc_algo_H_mass_stack_1->SetBinError(31,665.302);
   VbbHcc_algo_H_mass_stack_1->SetBinError(32,633.1157);
   VbbHcc_algo_H_mass_stack_1->SetBinError(33,728.5591);
   VbbHcc_algo_H_mass_stack_1->SetBinError(34,647.9453);
   VbbHcc_algo_H_mass_stack_1->SetBinError(35,675.693);
   VbbHcc_algo_H_mass_stack_1->SetBinError(36,1527.795);
   VbbHcc_algo_H_mass_stack_1->SetBinError(37,705.7126);
   VbbHcc_algo_H_mass_stack_1->SetBinError(38,549.4929);
   VbbHcc_algo_H_mass_stack_1->SetBinError(39,535.1757);
   VbbHcc_algo_H_mass_stack_1->SetBinError(40,99.56092);
   VbbHcc_algo_H_mass_stack_1->SetBinError(41,3532.427);
   VbbHcc_algo_H_mass_stack_1->SetEntries(13510);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_mass_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_mass_stack_1->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_H_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_mass_stack_1,"");
   
   TH1D *VbbHcc_algo_H_mass_stack_2 = new TH1D("VbbHcc_algo_H_mass_stack_2","",40,0,400);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(5,1.090337);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(6,4.590785);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(7,8.530834);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(8,30.42716);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(9,54.94647);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(10,41.5082);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(11,20.33497);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(12,15.95849);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(13,18.1235);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(14,15.83481);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(15,17.98572);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(16,17.33055);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(17,17.17736);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(18,19.58717);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(19,17.53195);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(20,21.81278);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(21,19.31455);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(22,19.18405);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(23,17.79283);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(24,18.19173);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(25,15.93862);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(26,17.23082);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(27,17.04454);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(28,16.97234);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(29,16.09459);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(30,18.53654);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(31,15.33983);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(32,19.88334);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(33,15.85035);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(34,17.34307);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(35,17.34413);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(36,14.27758);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(37,12.41746);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(38,14.43703);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(39,17.33498);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(40,15.15224);
   VbbHcc_algo_H_mass_stack_2->SetBinContent(41,764.0286);
   VbbHcc_algo_H_mass_stack_2->SetBinError(5,0.2467552);
   VbbHcc_algo_H_mass_stack_2->SetBinError(6,0.9278125);
   VbbHcc_algo_H_mass_stack_2->SetBinError(7,1.304267);
   VbbHcc_algo_H_mass_stack_2->SetBinError(8,2.735363);
   VbbHcc_algo_H_mass_stack_2->SetBinError(9,3.82005);
   VbbHcc_algo_H_mass_stack_2->SetBinError(10,3.210692);
   VbbHcc_algo_H_mass_stack_2->SetBinError(11,2.085899);
   VbbHcc_algo_H_mass_stack_2->SetBinError(12,1.771864);
   VbbHcc_algo_H_mass_stack_2->SetBinError(13,1.837609);
   VbbHcc_algo_H_mass_stack_2->SetBinError(14,1.697759);
   VbbHcc_algo_H_mass_stack_2->SetBinError(15,1.813365);
   VbbHcc_algo_H_mass_stack_2->SetBinError(16,1.644462);
   VbbHcc_algo_H_mass_stack_2->SetBinError(17,1.712568);
   VbbHcc_algo_H_mass_stack_2->SetBinError(18,1.76686);
   VbbHcc_algo_H_mass_stack_2->SetBinError(19,1.546957);
   VbbHcc_algo_H_mass_stack_2->SetBinError(20,1.931562);
   VbbHcc_algo_H_mass_stack_2->SetBinError(21,1.771697);
   VbbHcc_algo_H_mass_stack_2->SetBinError(22,1.838043);
   VbbHcc_algo_H_mass_stack_2->SetBinError(23,1.704017);
   VbbHcc_algo_H_mass_stack_2->SetBinError(24,1.811705);
   VbbHcc_algo_H_mass_stack_2->SetBinError(25,1.60037);
   VbbHcc_algo_H_mass_stack_2->SetBinError(26,1.792572);
   VbbHcc_algo_H_mass_stack_2->SetBinError(27,1.550694);
   VbbHcc_algo_H_mass_stack_2->SetBinError(28,1.719839);
   VbbHcc_algo_H_mass_stack_2->SetBinError(29,1.628128);
   VbbHcc_algo_H_mass_stack_2->SetBinError(30,1.758003);
   VbbHcc_algo_H_mass_stack_2->SetBinError(31,1.569313);
   VbbHcc_algo_H_mass_stack_2->SetBinError(32,1.909946);
   VbbHcc_algo_H_mass_stack_2->SetBinError(33,1.550781);
   VbbHcc_algo_H_mass_stack_2->SetBinError(34,1.664368);
   VbbHcc_algo_H_mass_stack_2->SetBinError(35,1.731739);
   VbbHcc_algo_H_mass_stack_2->SetBinError(36,1.458662);
   VbbHcc_algo_H_mass_stack_2->SetBinError(37,1.319895);
   VbbHcc_algo_H_mass_stack_2->SetBinError(38,1.559943);
   VbbHcc_algo_H_mass_stack_2->SetBinError(39,1.784421);
   VbbHcc_algo_H_mass_stack_2->SetBinError(40,1.629819);
   VbbHcc_algo_H_mass_stack_2->SetBinError(41,11.59322);
   VbbHcc_algo_H_mass_stack_2->SetEntries(19837);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_mass_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_mass_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_mass_stack_2->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_H_mass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_mass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_mass_stack_2,"");
   
   TH1D *VbbHcc_algo_H_mass_stack_3 = new TH1D("VbbHcc_algo_H_mass_stack_3","",40,0,400);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(4,1.391528);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(5,15.75817);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(6,52.35527);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(7,122.5771);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(8,348.3711);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(9,644.057);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(10,545.5198);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(11,388.0047);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(12,372.6757);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(13,374.0124);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(14,374.8763);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(15,374.9899);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(16,356.9141);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(17,337.6427);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(18,327.7878);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(19,311.8153);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(20,291.1115);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(21,267.1701);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(22,245.5593);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(23,252.0292);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(24,226.949);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(25,223.1998);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(26,209.2393);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(27,201.4851);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(28,198.4556);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(29,187.4275);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(30,189.827);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(31,185.7207);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(32,179.0841);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(33,177.4319);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(34,158.3728);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(35,162.4807);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(36,160.0011);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(37,146.8935);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(38,151.548);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(39,142.9904);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(40,148.4618);
   VbbHcc_algo_H_mass_stack_3->SetBinContent(41,7628.881);
   VbbHcc_algo_H_mass_stack_3->SetBinError(4,0.3008181);
   VbbHcc_algo_H_mass_stack_3->SetBinError(5,1.061309);
   VbbHcc_algo_H_mass_stack_3->SetBinError(6,1.909624);
   VbbHcc_algo_H_mass_stack_3->SetBinError(7,2.934519);
   VbbHcc_algo_H_mass_stack_3->SetBinError(8,4.974191);
   VbbHcc_algo_H_mass_stack_3->SetBinError(9,6.797431);
   VbbHcc_algo_H_mass_stack_3->SetBinError(10,6.304815);
   VbbHcc_algo_H_mass_stack_3->SetBinError(11,5.356367);
   VbbHcc_algo_H_mass_stack_3->SetBinError(12,5.297396);
   VbbHcc_algo_H_mass_stack_3->SetBinError(13,5.320188);
   VbbHcc_algo_H_mass_stack_3->SetBinError(14,5.30648);
   VbbHcc_algo_H_mass_stack_3->SetBinError(15,5.329705);
   VbbHcc_algo_H_mass_stack_3->SetBinError(16,5.172345);
   VbbHcc_algo_H_mass_stack_3->SetBinError(17,5.031774);
   VbbHcc_algo_H_mass_stack_3->SetBinError(18,4.937711);
   VbbHcc_algo_H_mass_stack_3->SetBinError(19,4.8207);
   VbbHcc_algo_H_mass_stack_3->SetBinError(20,4.640671);
   VbbHcc_algo_H_mass_stack_3->SetBinError(21,4.421327);
   VbbHcc_algo_H_mass_stack_3->SetBinError(22,4.223673);
   VbbHcc_algo_H_mass_stack_3->SetBinError(23,4.294982);
   VbbHcc_algo_H_mass_stack_3->SetBinError(24,4.054587);
   VbbHcc_algo_H_mass_stack_3->SetBinError(25,4.02213);
   VbbHcc_algo_H_mass_stack_3->SetBinError(26,3.914059);
   VbbHcc_algo_H_mass_stack_3->SetBinError(27,3.812784);
   VbbHcc_algo_H_mass_stack_3->SetBinError(28,3.771599);
   VbbHcc_algo_H_mass_stack_3->SetBinError(29,3.6889);
   VbbHcc_algo_H_mass_stack_3->SetBinError(30,3.720198);
   VbbHcc_algo_H_mass_stack_3->SetBinError(31,3.684851);
   VbbHcc_algo_H_mass_stack_3->SetBinError(32,3.592329);
   VbbHcc_algo_H_mass_stack_3->SetBinError(33,3.591722);
   VbbHcc_algo_H_mass_stack_3->SetBinError(34,3.374979);
   VbbHcc_algo_H_mass_stack_3->SetBinError(35,3.437805);
   VbbHcc_algo_H_mass_stack_3->SetBinError(36,3.416805);
   VbbHcc_algo_H_mass_stack_3->SetBinError(37,3.249847);
   VbbHcc_algo_H_mass_stack_3->SetBinError(38,3.314783);
   VbbHcc_algo_H_mass_stack_3->SetBinError(39,3.213223);
   VbbHcc_algo_H_mass_stack_3->SetBinError(40,3.281875);
   VbbHcc_algo_H_mass_stack_3->SetBinError(41,23.61129);
   VbbHcc_algo_H_mass_stack_3->SetEntries(257832);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_mass_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_mass_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_mass_stack_3->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_H_mass_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_mass_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_mass_stack_3,"");
   
   TH1D *VbbHcc_algo_H_mass_stack_4 = new TH1D("VbbHcc_algo_H_mass_stack_4","",40,0,400);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(4,0.3828214);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(5,3.57692);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(6,18.82138);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(7,22.23549);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(8,31.74683);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(9,41.32662);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(10,53.75726);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(11,40.8154);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(12,31.60797);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(13,33.38986);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(14,37.97048);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(15,33.92212);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(16,26.27614);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(17,28.49133);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(18,20.8152);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(19,21.30623);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(20,20.87301);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(21,27.41629);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(22,28.17875);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(23,17.70392);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(24,19.57769);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(25,20.1806);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(26,19.59931);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(27,13.41279);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(28,18.89606);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(29,14.06434);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(30,10.59461);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(31,15.22814);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(32,11.67329);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(33,14.6997);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(34,18.6547);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(35,15.23758);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(36,10.22788);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(37,10.36736);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(38,11.39794);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(39,15.523);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(40,10.6345);
   VbbHcc_algo_H_mass_stack_4->SetBinContent(41,613.3046);
   VbbHcc_algo_H_mass_stack_4->SetBinError(4,0.3828214);
   VbbHcc_algo_H_mass_stack_4->SetBinError(5,1.203064);
   VbbHcc_algo_H_mass_stack_4->SetBinError(6,5.144785);
   VbbHcc_algo_H_mass_stack_4->SetBinError(7,4.249094);
   VbbHcc_algo_H_mass_stack_4->SetBinError(8,4.764463);
   VbbHcc_algo_H_mass_stack_4->SetBinError(9,5.254224);
   VbbHcc_algo_H_mass_stack_4->SetBinError(10,7.241931);
   VbbHcc_algo_H_mass_stack_4->SetBinError(11,6.044198);
   VbbHcc_algo_H_mass_stack_4->SetBinError(12,5.728122);
   VbbHcc_algo_H_mass_stack_4->SetBinError(13,4.576201);
   VbbHcc_algo_H_mass_stack_4->SetBinError(14,7.004491);
   VbbHcc_algo_H_mass_stack_4->SetBinError(15,5.716428);
   VbbHcc_algo_H_mass_stack_4->SetBinError(16,3.988448);
   VbbHcc_algo_H_mass_stack_4->SetBinError(17,5.747216);
   VbbHcc_algo_H_mass_stack_4->SetBinError(18,3.627811);
   VbbHcc_algo_H_mass_stack_4->SetBinError(19,4.456134);
   VbbHcc_algo_H_mass_stack_4->SetBinError(20,3.97596);
   VbbHcc_algo_H_mass_stack_4->SetBinError(21,5.313923);
   VbbHcc_algo_H_mass_stack_4->SetBinError(22,6.033914);
   VbbHcc_algo_H_mass_stack_4->SetBinError(23,2.332877);
   VbbHcc_algo_H_mass_stack_4->SetBinError(24,4.709907);
   VbbHcc_algo_H_mass_stack_4->SetBinError(25,4.00749);
   VbbHcc_algo_H_mass_stack_4->SetBinError(26,4.568179);
   VbbHcc_algo_H_mass_stack_4->SetBinError(27,3.487854);
   VbbHcc_algo_H_mass_stack_4->SetBinError(28,2.465888);
   VbbHcc_algo_H_mass_stack_4->SetBinError(29,1.927405);
   VbbHcc_algo_H_mass_stack_4->SetBinError(30,1.594231);
   VbbHcc_algo_H_mass_stack_4->SetBinError(31,4.476793);
   VbbHcc_algo_H_mass_stack_4->SetBinError(32,1.819219);
   VbbHcc_algo_H_mass_stack_4->SetBinError(33,3.674968);
   VbbHcc_algo_H_mass_stack_4->SetBinError(34,2.377223);
   VbbHcc_algo_H_mass_stack_4->SetBinError(35,3.940246);
   VbbHcc_algo_H_mass_stack_4->SetBinError(36,1.753526);
   VbbHcc_algo_H_mass_stack_4->SetBinError(37,1.755664);
   VbbHcc_algo_H_mass_stack_4->SetBinError(38,1.723566);
   VbbHcc_algo_H_mass_stack_4->SetBinError(39,4.940196);
   VbbHcc_algo_H_mass_stack_4->SetBinError(40,1.61577);
   VbbHcc_algo_H_mass_stack_4->SetBinError(41,16.07942);
   VbbHcc_algo_H_mass_stack_4->SetEntries(8463);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_mass_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_mass_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_mass_stack_4->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_H_mass_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_mass_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_mass_stack_4,"");
   
   TH1D *VbbHcc_algo_H_mass_stack_5 = new TH1D("VbbHcc_algo_H_mass_stack_5","",40,0,400);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(6,7.499633);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(7,8.79364);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(8,25.87045);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(9,45.04823);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(10,27.72117);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(11,15.3863);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(12,10.98879);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(13,9.977725);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(14,20.74152);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(15,8.228875);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(16,22.05961);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(17,19.42435);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(18,8.759373);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(19,13.80259);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(20,13.18776);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(21,9.770626);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(22,13.64983);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(23,5.80295);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(24,6.230687);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(25,12.0671);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(26,6.915438);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(27,13.19454);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(28,3.763452);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(29,10.94002);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(30,4.490687);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(31,8.540737);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(32,18.69238);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(33,7.315321);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(34,2.77638);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(35,4.360045);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(36,5.415074);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(37,6.026218);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(38,5.961846);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(39,7.519001);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(40,4.087401);
   VbbHcc_algo_H_mass_stack_5->SetBinContent(41,302.1378);
   VbbHcc_algo_H_mass_stack_5->SetBinError(6,3.032072);
   VbbHcc_algo_H_mass_stack_5->SetBinError(7,3.114216);
   VbbHcc_algo_H_mass_stack_5->SetBinError(8,8.487704);
   VbbHcc_algo_H_mass_stack_5->SetBinError(9,8.635383);
   VbbHcc_algo_H_mass_stack_5->SetBinError(10,8.525539);
   VbbHcc_algo_H_mass_stack_5->SetBinError(11,3.790281);
   VbbHcc_algo_H_mass_stack_5->SetBinError(12,2.603036);
   VbbHcc_algo_H_mass_stack_5->SetBinError(13,2.546349);
   VbbHcc_algo_H_mass_stack_5->SetBinError(14,4.684088);
   VbbHcc_algo_H_mass_stack_5->SetBinError(15,2.532002);
   VbbHcc_algo_H_mass_stack_5->SetBinError(16,9.30146);
   VbbHcc_algo_H_mass_stack_5->SetBinError(17,4.431179);
   VbbHcc_algo_H_mass_stack_5->SetBinError(18,2.195627);
   VbbHcc_algo_H_mass_stack_5->SetBinError(19,3.644234);
   VbbHcc_algo_H_mass_stack_5->SetBinError(20,3.561702);
   VbbHcc_algo_H_mass_stack_5->SetBinError(21,2.719553);
   VbbHcc_algo_H_mass_stack_5->SetBinError(22,5.853497);
   VbbHcc_algo_H_mass_stack_5->SetBinError(23,1.778746);
   VbbHcc_algo_H_mass_stack_5->SetBinError(24,1.725459);
   VbbHcc_algo_H_mass_stack_5->SetBinError(25,3.302896);
   VbbHcc_algo_H_mass_stack_5->SetBinError(26,2.265002);
   VbbHcc_algo_H_mass_stack_5->SetBinError(27,8.447443);
   VbbHcc_algo_H_mass_stack_5->SetBinError(28,1.398472);
   VbbHcc_algo_H_mass_stack_5->SetBinError(29,2.860527);
   VbbHcc_algo_H_mass_stack_5->SetBinError(30,1.162508);
   VbbHcc_algo_H_mass_stack_5->SetBinError(31,2.693143);
   VbbHcc_algo_H_mass_stack_5->SetBinError(32,8.797406);
   VbbHcc_algo_H_mass_stack_5->SetBinError(33,2.201943);
   VbbHcc_algo_H_mass_stack_5->SetBinError(34,0.7850283);
   VbbHcc_algo_H_mass_stack_5->SetBinError(35,1.354622);
   VbbHcc_algo_H_mass_stack_5->SetBinError(36,1.920038);
   VbbHcc_algo_H_mass_stack_5->SetBinError(37,2.132706);
   VbbHcc_algo_H_mass_stack_5->SetBinError(38,2.096787);
   VbbHcc_algo_H_mass_stack_5->SetBinError(39,2.62549);
   VbbHcc_algo_H_mass_stack_5->SetBinError(40,1.587115);
   VbbHcc_algo_H_mass_stack_5->SetBinError(41,14.60621);
   VbbHcc_algo_H_mass_stack_5->SetEntries(3604);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_mass_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_mass_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_mass_stack_5->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_H_mass_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_mass_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_mass_stack_5,"");
   
   TH1D *VbbHcc_algo_H_mass_stack_6 = new TH1D("VbbHcc_algo_H_mass_stack_6","",40,0,400);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(7,0.2090628);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(10,0.2563355);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(13,0.2272443);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(32,0.2328852);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(36,0.1527423);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(40,0.2494577);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(41,3.53621);
   VbbHcc_algo_H_mass_stack_6->SetBinError(7,0.2090628);
   VbbHcc_algo_H_mass_stack_6->SetBinError(10,0.2563355);
   VbbHcc_algo_H_mass_stack_6->SetBinError(13,0.2272443);
   VbbHcc_algo_H_mass_stack_6->SetBinError(32,0.2328852);
   VbbHcc_algo_H_mass_stack_6->SetBinError(36,0.1527423);
   VbbHcc_algo_H_mass_stack_6->SetBinError(40,0.2494577);
   VbbHcc_algo_H_mass_stack_6->SetBinError(41,0.9078094);
   VbbHcc_algo_H_mass_stack_6->SetEntries(22);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_mass_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_mass_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_mass_stack_6->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_H_mass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_mass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_mass_stack_6,"");
   
   TH1D *VbbHcc_algo_H_mass_stack_7 = new TH1D("VbbHcc_algo_H_mass_stack_7","",40,0,400);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(7,0.709976);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(8,2.055506);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(9,2.149397);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(10,2.849248);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(11,1.016148);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(12,0.1844353);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(13,0.4796134);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(14,0.5728179);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(15,0.5074435);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(16,0.1722793);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(17,0.1211596);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(18,0.5858626);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(19,0.3718175);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(20,0.1669084);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(21,0.3258839);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(24,0.3618246);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(28,0.2115813);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(33,0.1837938);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(37,0.1080167);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(39,0.1760317);
   VbbHcc_algo_H_mass_stack_7->SetBinContent(41,4.435479);
   VbbHcc_algo_H_mass_stack_7->SetBinError(7,0.3555017);
   VbbHcc_algo_H_mass_stack_7->SetBinError(8,0.5987088);
   VbbHcc_algo_H_mass_stack_7->SetBinError(9,0.6092315);
   VbbHcc_algo_H_mass_stack_7->SetBinError(10,0.6974382);
   VbbHcc_algo_H_mass_stack_7->SetBinError(11,0.4204424);
   VbbHcc_algo_H_mass_stack_7->SetBinError(12,0.1844353);
   VbbHcc_algo_H_mass_stack_7->SetBinError(13,0.2796004);
   VbbHcc_algo_H_mass_stack_7->SetBinError(14,0.3312417);
   VbbHcc_algo_H_mass_stack_7->SetBinError(15,0.2951213);
   VbbHcc_algo_H_mass_stack_7->SetBinError(16,0.1722793);
   VbbHcc_algo_H_mass_stack_7->SetBinError(17,0.1211596);
   VbbHcc_algo_H_mass_stack_7->SetBinError(18,0.339456);
   VbbHcc_algo_H_mass_stack_7->SetBinError(19,0.2652581);
   VbbHcc_algo_H_mass_stack_7->SetBinError(20,0.1669084);
   VbbHcc_algo_H_mass_stack_7->SetBinError(21,0.230606);
   VbbHcc_algo_H_mass_stack_7->SetBinError(24,0.2558972);
   VbbHcc_algo_H_mass_stack_7->SetBinError(28,0.2115813);
   VbbHcc_algo_H_mass_stack_7->SetBinError(33,0.1837938);
   VbbHcc_algo_H_mass_stack_7->SetBinError(37,0.1080167);
   VbbHcc_algo_H_mass_stack_7->SetBinError(39,0.1760317);
   VbbHcc_algo_H_mass_stack_7->SetBinError(41,0.8638098);
   VbbHcc_algo_H_mass_stack_7->SetEntries(106);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_mass_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_mass_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_mass_stack_7->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_H_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_mass_stack_7,"");
   
   TH1D *VbbHcc_algo_H_mass_stack_8 = new TH1D("VbbHcc_algo_H_mass_stack_8","",40,0,400);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(8,0.5981776);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(9,2.38553);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(10,2.917607);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(11,2.596982);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(12,0.4567555);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(13,0.2498736);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(16,0.4586288);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(18,0.1800692);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(19,0.2175047);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(22,0.5027895);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(24,0.1546539);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(26,0.2215026);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(28,0.2367069);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(30,0.1810699);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(31,0.2375942);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(32,0.2380403);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(35,0.2184959);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(38,0.2790303);
   VbbHcc_algo_H_mass_stack_8->SetBinContent(41,5.815688);
   VbbHcc_algo_H_mass_stack_8->SetBinError(8,0.3460913);
   VbbHcc_algo_H_mass_stack_8->SetBinError(9,0.6987958);
   VbbHcc_algo_H_mass_stack_8->SetBinError(10,0.7874261);
   VbbHcc_algo_H_mass_stack_8->SetBinError(11,0.7360914);
   VbbHcc_algo_H_mass_stack_8->SetBinError(12,0.3229749);
   VbbHcc_algo_H_mass_stack_8->SetBinError(13,0.2498736);
   VbbHcc_algo_H_mass_stack_8->SetBinError(16,0.3320095);
   VbbHcc_algo_H_mass_stack_8->SetBinError(18,0.1630257);
   VbbHcc_algo_H_mass_stack_8->SetBinError(19,0.2175047);
   VbbHcc_algo_H_mass_stack_8->SetBinError(22,0.3562502);
   VbbHcc_algo_H_mass_stack_8->SetBinError(24,0.1546539);
   VbbHcc_algo_H_mass_stack_8->SetBinError(26,0.2215026);
   VbbHcc_algo_H_mass_stack_8->SetBinError(28,0.2367069);
   VbbHcc_algo_H_mass_stack_8->SetBinError(30,0.1810699);
   VbbHcc_algo_H_mass_stack_8->SetBinError(31,0.2375942);
   VbbHcc_algo_H_mass_stack_8->SetBinError(32,0.2380403);
   VbbHcc_algo_H_mass_stack_8->SetBinError(35,0.2184959);
   VbbHcc_algo_H_mass_stack_8->SetBinError(38,0.2790303);
   VbbHcc_algo_H_mass_stack_8->SetBinError(41,1.152029);
   VbbHcc_algo_H_mass_stack_8->SetEntries(86);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_mass_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_mass_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_mass_stack_8->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_H_mass_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_mass_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_mass_stack_8,"");
   
   TH1D *VbbHcc_algo_H_mass_stack_9 = new TH1D("VbbHcc_algo_H_mass_stack_9","",40,0,400);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(5,0.003914142);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(6,0.04043449);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(7,0.08047147);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(8,0.2496502);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(9,0.9073393);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(10,1.75809);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(11,1.222253);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(12,0.4942725);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(13,0.2787438);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(14,0.2198076);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(15,0.104931);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(16,0.09161428);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(17,0.1044666);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(18,0.076551);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(19,0.07647113);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(20,0.06964046);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(21,0.06113097);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(22,0.08318033);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(23,0.07303688);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(24,0.05365826);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(25,0.05915729);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(26,0.051645);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(27,0.04768151);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(28,0.05450254);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(29,0.07496479);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(30,0.05411318);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(31,0.06094213);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(32,0.05146377);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(33,0.06474109);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(34,0.0570763);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(35,0.05460619);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(36,0.04291338);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(37,0.04307875);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(38,0.05447564);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(39,0.0638892);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(40,0.0472111);
   VbbHcc_algo_H_mass_stack_9->SetBinContent(41,2.741955);
   VbbHcc_algo_H_mass_stack_9->SetBinError(5,0.002399216);
   VbbHcc_algo_H_mass_stack_9->SetBinError(6,0.008594938);
   VbbHcc_algo_H_mass_stack_9->SetBinError(7,0.01293065);
   VbbHcc_algo_H_mass_stack_9->SetBinError(8,0.02248631);
   VbbHcc_algo_H_mass_stack_9->SetBinError(9,0.04254617);
   VbbHcc_algo_H_mass_stack_9->SetBinError(10,0.05926964);
   VbbHcc_algo_H_mass_stack_9->SetBinError(11,0.04946097);
   VbbHcc_algo_H_mass_stack_9->SetBinError(12,0.03050737);
   VbbHcc_algo_H_mass_stack_9->SetBinError(13,0.02363832);
   VbbHcc_algo_H_mass_stack_9->SetBinError(14,0.02078599);
   VbbHcc_algo_H_mass_stack_9->SetBinError(15,0.01433491);
   VbbHcc_algo_H_mass_stack_9->SetBinError(16,0.01344005);
   VbbHcc_algo_H_mass_stack_9->SetBinError(17,0.01370354);
   VbbHcc_algo_H_mass_stack_9->SetBinError(18,0.01237157);
   VbbHcc_algo_H_mass_stack_9->SetBinError(19,0.01190868);
   VbbHcc_algo_H_mass_stack_9->SetBinError(20,0.01136488);
   VbbHcc_algo_H_mass_stack_9->SetBinError(21,0.01057156);
   VbbHcc_algo_H_mass_stack_9->SetBinError(22,0.01276856);
   VbbHcc_algo_H_mass_stack_9->SetBinError(23,0.0118926);
   VbbHcc_algo_H_mass_stack_9->SetBinError(24,0.01036473);
   VbbHcc_algo_H_mass_stack_9->SetBinError(25,0.01037503);
   VbbHcc_algo_H_mass_stack_9->SetBinError(26,0.01006099);
   VbbHcc_algo_H_mass_stack_9->SetBinError(27,0.009380407);
   VbbHcc_algo_H_mass_stack_9->SetBinError(28,0.01031642);
   VbbHcc_algo_H_mass_stack_9->SetBinError(29,0.01190667);
   VbbHcc_algo_H_mass_stack_9->SetBinError(30,0.0099535);
   VbbHcc_algo_H_mass_stack_9->SetBinError(31,0.01062179);
   VbbHcc_algo_H_mass_stack_9->SetBinError(32,0.009772213);
   VbbHcc_algo_H_mass_stack_9->SetBinError(33,0.01125978);
   VbbHcc_algo_H_mass_stack_9->SetBinError(34,0.01019402);
   VbbHcc_algo_H_mass_stack_9->SetBinError(35,0.01026573);
   VbbHcc_algo_H_mass_stack_9->SetBinError(36,0.008976859);
   VbbHcc_algo_H_mass_stack_9->SetBinError(37,0.008588916);
   VbbHcc_algo_H_mass_stack_9->SetBinError(38,0.009938674);
   VbbHcc_algo_H_mass_stack_9->SetBinError(39,0.01093127);
   VbbHcc_algo_H_mass_stack_9->SetBinError(40,0.009310988);
   VbbHcc_algo_H_mass_stack_9->SetBinError(41,0.07216592);
   VbbHcc_algo_H_mass_stack_9->SetEntries(5585);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_mass_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_mass_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_mass_stack_9->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_H_mass_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_mass_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_mass_stack_9,"");
   
   TH1D *VbbHcc_algo_H_mass_stack_10 = new TH1D("VbbHcc_algo_H_mass_stack_10","",40,0,400);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(4,0.0004878429);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(5,0.006071546);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(6,0.01953514);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(7,0.05940835);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(8,0.199185);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(9,0.5662221);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(10,0.8659638);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(11,0.5631955);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(12,0.322152);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(13,0.1966958);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(14,0.1422907);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(15,0.1227238);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(16,0.08010272);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(17,0.08066082);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(18,0.08539649);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(19,0.07307355);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(20,0.0736211);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(21,0.0742357);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(22,0.06574147);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(23,0.06338865);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(24,0.06056405);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(25,0.05585822);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(26,0.06268005);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(27,0.06354042);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(28,0.0583302);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(29,0.05144878);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(30,0.05241823);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(31,0.05026093);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(32,0.05245451);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(33,0.0406319);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(34,0.05283081);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(35,0.04824455);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(36,0.04762583);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(37,0.03314698);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(38,0.04454272);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(39,0.0363112);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(40,0.03789673);
   VbbHcc_algo_H_mass_stack_10->SetBinContent(41,2.524385);
   VbbHcc_algo_H_mass_stack_10->SetBinError(4,0.0004878429);
   VbbHcc_algo_H_mass_stack_10->SetBinError(5,0.001662672);
   VbbHcc_algo_H_mass_stack_10->SetBinError(6,0.002957654);
   VbbHcc_algo_H_mass_stack_10->SetBinError(7,0.005115155);
   VbbHcc_algo_H_mass_stack_10->SetBinError(8,0.009442121);
   VbbHcc_algo_H_mass_stack_10->SetBinError(9,0.01588402);
   VbbHcc_algo_H_mass_stack_10->SetBinError(10,0.01967215);
   VbbHcc_algo_H_mass_stack_10->SetBinError(11,0.01586813);
   VbbHcc_algo_H_mass_stack_10->SetBinError(12,0.01199769);
   VbbHcc_algo_H_mass_stack_10->SetBinError(13,0.009351111);
   VbbHcc_algo_H_mass_stack_10->SetBinError(14,0.007934449);
   VbbHcc_algo_H_mass_stack_10->SetBinError(15,0.007366991);
   VbbHcc_algo_H_mass_stack_10->SetBinError(16,0.005913515);
   VbbHcc_algo_H_mass_stack_10->SetBinError(17,0.005985177);
   VbbHcc_algo_H_mass_stack_10->SetBinError(18,0.006138071);
   VbbHcc_algo_H_mass_stack_10->SetBinError(19,0.005681928);
   VbbHcc_algo_H_mass_stack_10->SetBinError(20,0.005749151);
   VbbHcc_algo_H_mass_stack_10->SetBinError(21,0.005718791);
   VbbHcc_algo_H_mass_stack_10->SetBinError(22,0.005388268);
   VbbHcc_algo_H_mass_stack_10->SetBinError(23,0.005276353);
   VbbHcc_algo_H_mass_stack_10->SetBinError(24,0.005161518);
   VbbHcc_algo_H_mass_stack_10->SetBinError(25,0.00495968);
   VbbHcc_algo_H_mass_stack_10->SetBinError(26,0.005258791);
   VbbHcc_algo_H_mass_stack_10->SetBinError(27,0.005296055);
   VbbHcc_algo_H_mass_stack_10->SetBinError(28,0.005085483);
   VbbHcc_algo_H_mass_stack_10->SetBinError(29,0.004717803);
   VbbHcc_algo_H_mass_stack_10->SetBinError(30,0.004812205);
   VbbHcc_algo_H_mass_stack_10->SetBinError(31,0.004703804);
   VbbHcc_algo_H_mass_stack_10->SetBinError(32,0.004793485);
   VbbHcc_algo_H_mass_stack_10->SetBinError(33,0.004247764);
   VbbHcc_algo_H_mass_stack_10->SetBinError(34,0.004826088);
   VbbHcc_algo_H_mass_stack_10->SetBinError(35,0.004593683);
   VbbHcc_algo_H_mass_stack_10->SetBinError(36,0.00456789);
   VbbHcc_algo_H_mass_stack_10->SetBinError(37,0.00379585);
   VbbHcc_algo_H_mass_stack_10->SetBinError(38,0.004449243);
   VbbHcc_algo_H_mass_stack_10->SetBinError(39,0.004043803);
   VbbHcc_algo_H_mass_stack_10->SetBinError(40,0.004086835);
   VbbHcc_algo_H_mass_stack_10->SetBinError(41,0.0333759);
   VbbHcc_algo_H_mass_stack_10->SetEntries(16167);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_mass_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_mass_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_mass_stack_10->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_H_mass_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_mass_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_mass_stack_10,"");
   
   TH1D *VbbHcc_algo_H_mass_stack_11 = new TH1D("VbbHcc_algo_H_mass_stack_11","",40,0,400);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(6,0.001955239);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(7,-0.001514608);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(8,0.003647641);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(9,0.004814106);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(10,0.01148132);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(11,0.02343835);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(12,0.06108073);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(13,0.06779298);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(14,0.07643334);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(15,0.04049073);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(16,0.01148815);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(17,0.01031049);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(18,0.00792121);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(19,0.007398925);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(21,0.00542152);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(23,0.001991154);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(24,0.005429466);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(26,0.002001201);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(28,0.002909454);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(29,0.001696335);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(30,0.0004027325);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(34,0.001531853);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(36,0.001985209);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(37,0.001479404);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(38,0.001753361);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(40,0.003833639);
   VbbHcc_algo_H_mass_stack_11->SetBinContent(41,0.1059307);
   VbbHcc_algo_H_mass_stack_11->SetBinError(6,0.001955239);
   VbbHcc_algo_H_mass_stack_11->SetBinError(7,0.001514608);
   VbbHcc_algo_H_mass_stack_11->SetBinError(8,0.002678521);
   VbbHcc_algo_H_mass_stack_11->SetBinError(9,0.002802758);
   VbbHcc_algo_H_mass_stack_11->SetBinError(10,0.004749961);
   VbbHcc_algo_H_mass_stack_11->SetBinError(11,0.007535654);
   VbbHcc_algo_H_mass_stack_11->SetBinError(12,0.01161216);
   VbbHcc_algo_H_mass_stack_11->SetBinError(13,0.01104786);
   VbbHcc_algo_H_mass_stack_11->SetBinError(14,0.01194746);
   VbbHcc_algo_H_mass_stack_11->SetBinError(15,0.008601659);
   VbbHcc_algo_H_mass_stack_11->SetBinError(16,0.004416044);
   VbbHcc_algo_H_mass_stack_11->SetBinError(17,0.004272669);
   VbbHcc_algo_H_mass_stack_11->SetBinError(18,0.003961017);
   VbbHcc_algo_H_mass_stack_11->SetBinError(19,0.003712993);
   VbbHcc_algo_H_mass_stack_11->SetBinError(21,0.003162102);
   VbbHcc_algo_H_mass_stack_11->SetBinError(23,0.001991154);
   VbbHcc_algo_H_mass_stack_11->SetBinError(24,0.003167137);
   VbbHcc_algo_H_mass_stack_11->SetBinError(26,0.002001201);
   VbbHcc_algo_H_mass_stack_11->SetBinError(28,0.002204102);
   VbbHcc_algo_H_mass_stack_11->SetBinError(29,0.001696335);
   VbbHcc_algo_H_mass_stack_11->SetBinError(30,0.0004027325);
   VbbHcc_algo_H_mass_stack_11->SetBinError(34,0.001531853);
   VbbHcc_algo_H_mass_stack_11->SetBinError(36,0.001985209);
   VbbHcc_algo_H_mass_stack_11->SetBinError(37,0.001479404);
   VbbHcc_algo_H_mass_stack_11->SetBinError(38,0.001753361);
   VbbHcc_algo_H_mass_stack_11->SetBinError(40,0.002710792);
   VbbHcc_algo_H_mass_stack_11->SetBinError(41,0.01381716);
   VbbHcc_algo_H_mass_stack_11->SetEntries(279);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_mass_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_mass_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_mass_stack_11->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_H_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_mass_stack_11,"");
   
   TH1D *VbbHcc_algo_H_mass_stack_12 = new TH1D("VbbHcc_algo_H_mass_stack_12","",40,0,400);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(6,0.0008286776);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(7,0.001139229);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(8,0.001225017);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(9,0.001927637);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(10,0.006727189);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(11,0.00609896);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(12,0.01631497);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(13,0.03038506);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(14,0.02610108);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(15,0.01907468);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(16,0.01273651);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(17,0.004564641);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(18,0.002632101);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(19,0.001454177);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(20,0.00236876);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(21,0.000796968);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(22,0.001101178);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(23,0.001113772);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(24,0.0008627543);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(25,0.001236974);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(26,0.0009841017);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(27,0.0002398048);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(28,0.0002167258);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(29,0.001513385);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(30,0.0004396682);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(31,0.0005084644);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(32,0.0002516251);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(33,0.0009410351);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(34,0.0003774303);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(35,0.0004690098);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(36,0.0002353266);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(37,0.0009792482);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(38,0.001123812);
   VbbHcc_algo_H_mass_stack_12->SetBinContent(41,0.04113333);
   VbbHcc_algo_H_mass_stack_12->SetBinError(6,0.0004827818);
   VbbHcc_algo_H_mass_stack_12->SetBinError(7,0.0005131841);
   VbbHcc_algo_H_mass_stack_12->SetBinError(8,0.0005609357);
   VbbHcc_algo_H_mass_stack_12->SetBinError(9,0.0006889246);
   VbbHcc_algo_H_mass_stack_12->SetBinError(10,0.001260261);
   VbbHcc_algo_H_mass_stack_12->SetBinError(11,0.001216282);
   VbbHcc_algo_H_mass_stack_12->SetBinError(12,0.00196385);
   VbbHcc_algo_H_mass_stack_12->SetBinError(13,0.002714554);
   VbbHcc_algo_H_mass_stack_12->SetBinError(14,0.00249611);
   VbbHcc_algo_H_mass_stack_12->SetBinError(15,0.002113965);
   VbbHcc_algo_H_mass_stack_12->SetBinError(16,0.001756011);
   VbbHcc_algo_H_mass_stack_12->SetBinError(17,0.001027352);
   VbbHcc_algo_H_mass_stack_12->SetBinError(18,0.0008003484);
   VbbHcc_algo_H_mass_stack_12->SetBinError(19,0.0005612144);
   VbbHcc_algo_H_mass_stack_12->SetBinError(20,0.0007524818);
   VbbHcc_algo_H_mass_stack_12->SetBinError(21,0.0004657525);
   VbbHcc_algo_H_mass_stack_12->SetBinError(22,0.000489594);
   VbbHcc_algo_H_mass_stack_12->SetBinError(23,0.0005093634);
   VbbHcc_algo_H_mass_stack_12->SetBinError(24,0.0004358443);
   VbbHcc_algo_H_mass_stack_12->SetBinError(25,0.0005632117);
   VbbHcc_algo_H_mass_stack_12->SetBinError(26,0.0004935808);
   VbbHcc_algo_H_mass_stack_12->SetBinError(27,0.0002398048);
   VbbHcc_algo_H_mass_stack_12->SetBinError(28,0.0002167258);
   VbbHcc_algo_H_mass_stack_12->SetBinError(29,0.0005935701);
   VbbHcc_algo_H_mass_stack_12->SetBinError(30,0.0003141584);
   VbbHcc_algo_H_mass_stack_12->SetBinError(31,0.0003596889);
   VbbHcc_algo_H_mass_stack_12->SetBinError(32,0.0002516251);
   VbbHcc_algo_H_mass_stack_12->SetBinError(33,0.0004752381);
   VbbHcc_algo_H_mass_stack_12->SetBinError(34,0.0002692279);
   VbbHcc_algo_H_mass_stack_12->SetBinError(35,0.0003327348);
   VbbHcc_algo_H_mass_stack_12->SetBinError(36,0.0002353266);
   VbbHcc_algo_H_mass_stack_12->SetBinError(37,0.0004967529);
   VbbHcc_algo_H_mass_stack_12->SetBinError(38,0.0005122043);
   VbbHcc_algo_H_mass_stack_12->SetBinError(41,0.003160089);
   VbbHcc_algo_H_mass_stack_12->SetEntries(816);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_mass_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_mass_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_mass_stack_12->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_H_mass_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_mass_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_mass_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_mass__203 = new TH1D("VbbHcc_algo_H_mass__203","",40,0,400);
   VbbHcc_algo_H_mass__203->SetBinContent(4,2);
   VbbHcc_algo_H_mass__203->SetBinContent(5,35);
   VbbHcc_algo_H_mass__203->SetBinContent(6,111);
   VbbHcc_algo_H_mass__203->SetBinContent(7,268);
   VbbHcc_algo_H_mass__203->SetBinContent(8,387);
   VbbHcc_algo_H_mass__203->SetBinContent(9,473);
   VbbHcc_algo_H_mass__203->SetBinContent(10,515);
   VbbHcc_algo_H_mass__203->SetBinContent(11,520);
   VbbHcc_algo_H_mass__203->SetBinContent(12,508);
   VbbHcc_algo_H_mass__203->SetBinContent(13,499);
   VbbHcc_algo_H_mass__203->SetBinContent(14,529);
   VbbHcc_algo_H_mass__203->SetBinContent(15,513);
   VbbHcc_algo_H_mass__203->SetBinContent(16,445);
   VbbHcc_algo_H_mass__203->SetBinContent(17,442);
   VbbHcc_algo_H_mass__203->SetBinContent(18,452);
   VbbHcc_algo_H_mass__203->SetBinContent(19,448);
   VbbHcc_algo_H_mass__203->SetBinContent(20,424);
   VbbHcc_algo_H_mass__203->SetBinContent(21,455);
   VbbHcc_algo_H_mass__203->SetBinContent(22,371);
   VbbHcc_algo_H_mass__203->SetBinContent(23,380);
   VbbHcc_algo_H_mass__203->SetBinContent(24,372);
   VbbHcc_algo_H_mass__203->SetBinContent(25,361);
   VbbHcc_algo_H_mass__203->SetBinContent(26,349);
   VbbHcc_algo_H_mass__203->SetBinContent(27,326);
   VbbHcc_algo_H_mass__203->SetBinContent(28,333);
   VbbHcc_algo_H_mass__203->SetBinContent(29,341);
   VbbHcc_algo_H_mass__203->SetBinContent(30,323);
   VbbHcc_algo_H_mass__203->SetBinContent(31,352);
   VbbHcc_algo_H_mass__203->SetBinContent(32,247);
   VbbHcc_algo_H_mass__203->SetBinContent(33,290);
   VbbHcc_algo_H_mass__203->SetBinContent(34,282);
   VbbHcc_algo_H_mass__203->SetBinContent(35,251);
   VbbHcc_algo_H_mass__203->SetBinContent(36,279);
   VbbHcc_algo_H_mass__203->SetBinContent(37,260);
   VbbHcc_algo_H_mass__203->SetBinContent(38,275);
   VbbHcc_algo_H_mass__203->SetBinContent(39,298);
   VbbHcc_algo_H_mass__203->SetBinContent(40,279);
   VbbHcc_algo_H_mass__203->SetBinContent(41,16748);
   VbbHcc_algo_H_mass__203->SetEntries(29743);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_mass__203->SetLineColor(ci);
   VbbHcc_algo_H_mass__203->SetLineWidth(2);
   VbbHcc_algo_H_mass__203->SetMarkerStyle(20);
   VbbHcc_algo_H_mass__203->SetMarkerSize(1.2);
   VbbHcc_algo_H_mass__203->GetXaxis()->SetRange(1,400);
   VbbHcc_algo_H_mass__203->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__203->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass__203->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass__203->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__203->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__203->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass__203->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass__203->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_mass__203->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__203->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__203->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass__203->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass__203->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__203->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_mass_fx1203[40] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295,
   305,
   315,
   325,
   335,
   345,
   355,
   365,
   375,
   385,
   395};
   Double_t Graph_from_VbbHcc_algo_H_mass_fy1203[40] = {
   0,
   0,
   0,
   1.774838,
   632.5748,
   3080.873,
   4273.201,
   4179.217,
   4957.456,
   6196.432,
   4232.435,
   3689.902,
   3099.057,
   3338.968,
   3543.149,
   4574.263,
   3287.644,
   3955.54,
   3932.088,
   2712.799,
   2025.5,
   5842.303,
   2743.968,
   4062.659,
   2344.91,
   2655.314,
   1539.105,
   2758.385,
   2460.072,
   3167.43,
   2454.563,
   2539.351,
   2693.143,
   2201.692,
   2519.369,
   3554.137,
   2403.306,
   1983.898,
   1933.648,
   865.2115};
   Double_t Graph_from_VbbHcc_algo_H_mass_fex1203[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_VbbHcc_algo_H_mass_fey1203[40] = {
   0,
   0,
   0,
   0.4868716,
   403.8273,
   865.4879,
   1060.78,
   861.4817,
   872.4673,
   1102.44,
   780.2687,
   752.3408,
   595.4246,
   725.3186,
   742.4299,
   950.7486,
   694.1744,
   802.349,
   837.2299,
   577.2344,
   360.1473,
   2003.171,
   1041.769,
   895.5045,
   482.3341,
   664.1503,
   315.1247,
   712.5478,
   642.8809,
   774.357,
   665.3346,
   633.1925,
   728.5822,
   647.9611,
   675.7168,
   1527.802,
   705.7267,
   549.5118,
   535.2176,
   99.65439};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_algo_H_mass_fx1203,Graph_from_VbbHcc_algo_H_mass_fy1203,Graph_from_VbbHcc_algo_H_mass_fex1203,Graph_from_VbbHcc_algo_H_mass_fey1203);
   gre->SetName("Graph_from_VbbHcc_algo_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_mass1203 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_mass1203","",100,0,440);
   Graph_Graph_from_VbbHcc_algo_H_mass1203->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_H_mass1203->SetMaximum(8630.021);
   Graph_Graph_from_VbbHcc_algo_H_mass1203->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_mass1203->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_mass1203->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_mass1203->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_mass1203->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_mass1203->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_mass1203->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_mass1203->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_mass1203->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_mass1203->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_mass1203->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_mass1203->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_mass1203->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_mass1203->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_mass1203->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_mass1203->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_mass1203);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_mass","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_mass_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_mass_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_mass_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_mass_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_mass_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_mass_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_mass_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_mass_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_mass_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_mass_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_mass_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_mass_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_mass","MC unc. (stat.)","fl");

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
   H_mass_algo_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-45.96762,-0.2774193,315.7258,1.658065);
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
   
   TH1D *data_mc_ratio__204 = new TH1D("data_mc_ratio__204","",40,0,400);
   data_mc_ratio__204->SetBinContent(4,1.126864);
   data_mc_ratio__204->SetBinContent(5,0.05532942);
   data_mc_ratio__204->SetBinContent(6,0.03602875);
   data_mc_ratio__204->SetBinContent(7,0.06271645);
   data_mc_ratio__204->SetBinContent(8,0.09260107);
   data_mc_ratio__204->SetBinContent(9,0.09541184);
   data_mc_ratio__204->SetBinContent(10,0.08311235);
   data_mc_ratio__204->SetBinContent(11,0.1228607);
   data_mc_ratio__204->SetBinContent(12,0.137673);
   data_mc_ratio__204->SetBinContent(13,0.1610167);
   data_mc_ratio__204->SetBinContent(14,0.1584322);
   data_mc_ratio__204->SetBinContent(15,0.1447865);
   data_mc_ratio__204->SetBinContent(16,0.09728343);
   data_mc_ratio__204->SetBinContent(17,0.1344428);
   data_mc_ratio__204->SetBinContent(18,0.1142701);
   data_mc_ratio__204->SetBinContent(19,0.1139344);
   data_mc_ratio__204->SetBinContent(20,0.1562961);
   data_mc_ratio__204->SetBinContent(21,0.2246359);
   data_mc_ratio__204->SetBinContent(22,0.06350236);
   data_mc_ratio__204->SetBinContent(23,0.1384856);
   data_mc_ratio__204->SetBinContent(24,0.09156564);
   data_mc_ratio__204->SetBinContent(25,0.1539505);
   data_mc_ratio__204->SetBinContent(26,0.1314345);
   data_mc_ratio__204->SetBinContent(27,0.2118114);
   data_mc_ratio__204->SetBinContent(28,0.1207228);
   data_mc_ratio__204->SetBinContent(29,0.1386138);
   data_mc_ratio__204->SetBinContent(30,0.1019754);
   data_mc_ratio__204->SetBinContent(31,0.1434064);
   data_mc_ratio__204->SetBinContent(32,0.09726895);
   data_mc_ratio__204->SetBinContent(33,0.1076809);
   data_mc_ratio__204->SetBinContent(34,0.1280833);
   data_mc_ratio__204->SetBinContent(35,0.09962813);
   data_mc_ratio__204->SetBinContent(36,0.07850007);
   data_mc_ratio__204->SetBinContent(37,0.1081843);
   data_mc_ratio__204->SetBinContent(38,0.138616);
   data_mc_ratio__204->SetBinContent(39,0.1541129);
   data_mc_ratio__204->SetBinContent(40,0.3224645);
   data_mc_ratio__204->SetBinContent(41,0.1849297);
   data_mc_ratio__204->SetBinError(4,0.796813);
   data_mc_ratio__204->SetBinError(5,0.00935238);
   data_mc_ratio__204->SetBinError(6,0.003419697);
   data_mc_ratio__204->SetBinError(7,0.003831017);
   data_mc_ratio__204->SetBinError(8,0.004707177);
   data_mc_ratio__204->SetBinError(9,0.004387041);
   data_mc_ratio__204->SetBinError(10,0.003662368);
   data_mc_ratio__204->SetBinError(11,0.005387799);
   data_mc_ratio__204->SetBinError(12,0.006108254);
   data_mc_ratio__204->SetBinError(13,0.007208098);
   data_mc_ratio__204->SetBinError(14,0.006888355);
   data_mc_ratio__204->SetBinError(15,0.006392478);
   data_mc_ratio__204->SetBinError(16,0.004611677);
   data_mc_ratio__204->SetBinError(17,0.00639479);
   data_mc_ratio__204->SetBinError(18,0.005374814);
   data_mc_ratio__204->SetBinError(19,0.005382893);
   data_mc_ratio__204->SetBinError(20,0.007590411);
   data_mc_ratio__204->SetBinError(21,0.01053109);
   data_mc_ratio__204->SetBinError(22,0.003296878);
   data_mc_ratio__204->SetBinError(23,0.00710416);
   data_mc_ratio__204->SetBinError(24,0.004747457);
   data_mc_ratio__204->SetBinError(25,0.008102657);
   data_mc_ratio__204->SetBinError(26,0.007035529);
   data_mc_ratio__204->SetBinError(27,0.01173115);
   data_mc_ratio__204->SetBinError(28,0.00661557);
   data_mc_ratio__204->SetBinError(29,0.00750636);
   data_mc_ratio__204->SetBinError(30,0.005674063);
   data_mc_ratio__204->SetBinError(31,0.007643585);
   data_mc_ratio__204->SetBinError(32,0.006189075);
   data_mc_ratio__204->SetBinError(33,0.006323239);
   data_mc_ratio__204->SetBinError(34,0.007627249);
   data_mc_ratio__204->SetBinError(35,0.006288472);
   data_mc_ratio__204->SetBinError(36,0.004699676);
   data_mc_ratio__204->SetBinError(37,0.006709305);
   data_mc_ratio__204->SetBinError(38,0.008358861);
   data_mc_ratio__204->SetBinError(39,0.008927519);
   data_mc_ratio__204->SetBinError(40,0.01930545);
   data_mc_ratio__204->SetBinError(41,0.007353638);
   data_mc_ratio__204->SetMinimum(0.4);
   data_mc_ratio__204->SetMaximum(1.6);
   data_mc_ratio__204->SetEntries(41.60211);
   data_mc_ratio__204->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__204->SetLineColor(ci);
   data_mc_ratio__204->SetLineWidth(2);
   data_mc_ratio__204->SetMarkerStyle(20);
   data_mc_ratio__204->SetMarkerSize(1.2);
   data_mc_ratio__204->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__204->GetXaxis()->SetRange(1,30);
   data_mc_ratio__204->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__204->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__204->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__204->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__204->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__204->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__204->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__204->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__204->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__204->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__204->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__204->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__204->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__204->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__204->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__204->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__204->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1204[40] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295,
   305,
   315,
   325,
   335,
   345,
   355,
   365,
   375,
   385,
   395};
   Double_t Graph_from_mc_statistical_error_fy1204[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1204[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_mc_statistical_error_fey1204[40] = {
   0,
   0,
   0,
   0.274319,
   0.6383866,
   0.2809229,
   0.2482401,
   0.2061347,
   0.1759909,
   0.1779153,
   0.1843545,
   0.2038918,
   0.1921309,
   0.2172284,
   0.2095396,
   0.2078474,
   0.2111464,
   0.2028418,
   0.2129224,
   0.2127819,
   0.1778066,
   0.3428735,
   0.3796578,
   0.2204232,
   0.2056941,
   0.2501211,
   0.2047455,
   0.2583207,
   0.2613261,
   0.2444748,
   0.2710603,
   0.2493521,
   0.2705323,
   0.2943014,
   0.2682088,
   0.4298658,
   0.2936483,
   0.276986,
   0.2767917,
   0.1151792};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1204,Graph_from_mc_statistical_error_fy1204,Graph_from_mc_statistical_error_fex1204,Graph_from_mc_statistical_error_fey1204);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1204 = new TH1F("Graph_Graph_from_mc_statistical_error1204","",100,0,440);
   Graph_Graph_from_mc_statistical_error1204->SetMinimum(0.2339361);
   Graph_Graph_from_mc_statistical_error1204->SetMaximum(1.766064);
   Graph_Graph_from_mc_statistical_error1204->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1204->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1204->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1204->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1204->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1204->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1204->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1204->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1204->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1204->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1204->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1204->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1204->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1204->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1204->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1204->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1204);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_algo_17->cd();
   H_mass_algo_17->Modified();
   H_mass_algo_17->cd();
   H_mass_algo_17->SetSelected(H_mass_algo_17);
}
