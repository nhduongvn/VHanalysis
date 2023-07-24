void Z_dR_algo_17()
{
//=========Macro generated from canvas: Z_dR_algo_17/Z_dR_algo_17
//=========  (Mon Jul 24 10:11:42 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_algo_17 = new TCanvas("Z_dR_algo_17", "Z_dR_algo_17",0,0,600,600);
   Z_dR_algo_17->SetHighLightColor(2);
   Z_dR_algo_17->Range(0,0,1,1);
   Z_dR_algo_17->SetFillColor(0);
   Z_dR_algo_17->SetFillStyle(4000);
   Z_dR_algo_17->SetBorderMode(0);
   Z_dR_algo_17->SetBorderSize(2);
   Z_dR_algo_17->SetFrameFillStyle(1000);
   Z_dR_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-66.4666,6.314516,66410.13);
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
   st->SetMaximum(56916.64);
   
   TH1F *st_stack_114 = new TH1F("st_stack_114","",30,0,6);
   st_stack_114->SetMinimum(0.01);
   st_stack_114->SetMaximum(59762.47);
   st_stack_114->SetDirectory(0);
   st_stack_114->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_114->SetLineColor(ci);
   st_stack_114->GetXaxis()->SetRange(1,30);
   st_stack_114->GetXaxis()->SetLabelFont(42);
   st_stack_114->GetXaxis()->SetLabelSize(0.035);
   st_stack_114->GetXaxis()->SetTitleSize(0.035);
   st_stack_114->GetXaxis()->SetTitleFont(42);
   st_stack_114->GetYaxis()->SetTitle("Events/0.2");
   st_stack_114->GetYaxis()->SetLabelFont(42);
   st_stack_114->GetYaxis()->SetLabelSize(0.05);
   st_stack_114->GetYaxis()->SetTitleSize(0.057);
   st_stack_114->GetYaxis()->SetTitleOffset(1.2);
   st_stack_114->GetYaxis()->SetTitleFont(42);
   st_stack_114->GetZaxis()->SetLabelFont(42);
   st_stack_114->GetZaxis()->SetLabelSize(0.035);
   st_stack_114->GetZaxis()->SetTitleSize(0.035);
   st_stack_114->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_114);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(2,0.1813901);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,21900.94);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,24336.64);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,17724.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,13568.68);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,9234.546);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,12530.19);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,10880.26);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,8425.94);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,6974.531);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,4374.531);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,5827.354);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,3090.557);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,3783.15);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,7964.669);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,2943.796);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,2437.08);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,1882.069);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,1476.265);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,3211.965);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,1478.781);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(23,1768.831);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(24,1762.28);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(25,2164.15);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(26,2513.037);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(27,2386.416);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(28,3857.079);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(29,2158.284);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(30,1160.855);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(31,897.6519);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(2,0.1813901);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,1628.501);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,2025.374);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,1701.409);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,1561.457);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,1104.832);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,2010.747);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,1588.563);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,1430.725);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,1118.046);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,755.9101);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,989.022);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,530.781);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,814.8461);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,2525.349);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,689.1593);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,597.2212);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,398.6117);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,260.8818);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,796.3206);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,407.3466);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(23,521.7656);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(24,355.8278);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(25,644.6938);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(26,614.6204);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(27,680.6269);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(28,897.2134);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(29,606.1537);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(30,335.3416);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(31,253.2243);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(13510);

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
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,39.98354);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,77.85478);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,78.18984);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,94.76056);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,94.67996);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,107.862);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,102.4342);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,85.5147);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,86.06935);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,77.35879);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,73.0831);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,56.84036);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,49.92674);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,46.52718);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,40.78307);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,34.74038);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,27.51701);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,30.98545);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,29.38084);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,28.18811);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,25.91732);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(24,25.70036);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,23.93784);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(26,25.2524);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(27,15.23914);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(28,17.65427);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(29,13.38355);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(30,7.729486);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(31,4.985925);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,2.890575);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,3.894151);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,3.84572);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,4.310653);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,4.203255);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,4.588823);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,4.421774);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,3.87263);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,3.97144);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,3.598358);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,3.606163);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,3.059719);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,2.940185);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,2.807471);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,2.645267);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,2.482494);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,2.093187);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,2.29662);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,2.165808);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,2.111986);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,2.089651);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(24,2.16699);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,1.950424);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(26,2.016238);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(27,1.594701);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(28,1.850037);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(29,1.568585);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(30,1.201825);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(31,0.8897781);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(19837);

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
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(2,0.479096);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(3,445.8684);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(4,860.3333);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(5,1043.471);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(6,1149.743);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(7,1186.276);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(8,1149.712);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(9,1138.847);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(10,1049.512);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(11,976.2674);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(12,853.2302);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(13,761.0187);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(14,672.0687);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(15,579.6629);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(16,523.5159);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(17,461.7407);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(18,421.0404);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(19,405.8957);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(20,387.1114);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(21,374.2788);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(22,365.7545);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(23,346.9656);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(24,319.915);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(25,295.3126);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(26,263.231);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(27,212.6875);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(28,176.1587);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(29,126.9965);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(30,74.60563);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(31,61.36915);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(2,0.1671064);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(3,5.84673);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(4,8.078299);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(5,8.888627);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(6,9.276011);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(7,9.395727);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(8,9.198084);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(9,9.141354);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(10,8.730072);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(11,8.4102);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(12,7.819298);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(13,7.380675);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(14,6.940679);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(15,6.420371);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(16,6.10623);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(17,5.735172);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(18,5.480555);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(19,5.388237);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(20,5.262238);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(21,5.208032);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(22,5.145094);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(23,5.008275);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(24,4.828562);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(25,4.656248);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(26,4.420306);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(27,3.948698);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(28,3.617967);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(29,3.094835);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(30,2.361451);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(31,2.119786);
   VbbHcc_algo_Z_dR_stack_3->SetEntries(257832);

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
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(2,0.128112);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(3,157.5384);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(4,209.822);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(5,193.2076);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(6,147.7722);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(7,85.87232);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(8,75.264);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(9,59.47908);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(10,60.3375);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(11,47.29627);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(12,39.00728);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(13,38.99682);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(14,33.18693);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(15,25.63575);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(16,23.85587);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(17,17.55178);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(18,16.82287);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(19,16.96077);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(20,14.33398);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(21,10.85341);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(22,11.55932);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(23,13.26447);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(24,12.85329);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(25,15.20753);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(26,12.6726);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(27,16.08519);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(28,17.98429);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(29,15.26745);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(30,9.674156);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(31,5.396929);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(2,0.09084465);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(3,6.790026);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(4,9.069974);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(5,12.32905);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(6,12.88274);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(7,9.398445);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(8,8.655739);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(9,7.140313);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(10,7.558526);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(11,6.4381);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(12,6.113176);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(13,6.162835);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(14,2.97684);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(15,2.506685);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(16,3.843364);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(17,1.907875);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(18,2.041876);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(19,2.109139);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(20,1.729728);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(21,1.543172);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(22,1.516317);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(23,1.946571);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(24,1.770671);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(25,2.992926);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(26,1.774649);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(27,2.242547);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(28,3.180614);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(29,1.937764);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(30,1.398247);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(31,0.9152479);
   VbbHcc_algo_Z_dR_stack_4->SetEntries(8463);

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
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(3,96.24874);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(4,116.5551);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(5,64.85563);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(6,63.57518);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(7,37.8106);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(8,37.94225);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(9,19.95716);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(10,27.5001);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(11,26.56969);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(12,17.805);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(13,12.96836);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(14,13.86533);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(15,28.0054);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(16,10.93955);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(17,8.699146);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(18,8.909216);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(19,8.805367);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(20,8.0382);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(21,8.514795);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(22,6.32069);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(23,3.40612);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(24,24.63463);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(25,9.508626);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(26,6.270024);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(27,15.49792);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(28,8.28548);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(29,16.96335);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(30,3.877633);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(31,4.818309);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(3,8.120792);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(4,13.86115);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(5,6.65679);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(6,9.033281);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(7,5.348059);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(8,5.307722);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(9,3.37981);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(10,4.153506);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(11,4.614192);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(12,3.299348);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(13,2.246049);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(14,3.051189);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(15,7.140078);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(16,2.613339);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(17,2.055408);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(18,2.372111);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(19,2.3707);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(20,2.195658);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(21,2.242168);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(22,1.878113);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(23,0.6470388);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(24,11.86365);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(25,2.896322);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(26,1.469595);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(27,8.814177);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(28,2.565449);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(29,7.950879);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(30,0.7531141);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(31,1.651942);
   VbbHcc_algo_Z_dR_stack_5->SetEntries(3604);

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
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(3,0.2569566);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(4,0.4835798);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(5,0.3859079);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(7,0.6403836);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(10,0.1723813);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(11,0.2503705);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(12,0.1527423);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(14,0.468744);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(15,0.249543);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(16,0.2494577);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(17,0.2486027);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(18,0.0571328);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(20,0.50741);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(22,0.2548807);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(23,0.232992);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(30,0.2528531);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(3,0.2569566);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(4,0.3425608);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(5,0.2750944);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(7,0.3725897);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(10,0.1723813);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(11,0.2503705);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(12,0.1527423);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(14,0.3314587);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(15,0.249543);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(16,0.2494577);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(17,0.2486027);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(18,0.0571328);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(20,0.3588106);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(22,0.2548807);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(23,0.232992);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(30,0.2528531);
   VbbHcc_algo_Z_dR_stack_6->SetEntries(22);

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
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(3,3.163763);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(4,5.180704);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(5,3.665581);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(6,1.542271);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(7,0.9050872);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(8,0.3279952);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(9,0.3377769);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(11,0.1745527);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(12,0.182755);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(14,0.1080167);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(15,0.1773891);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(18,0.1785666);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(19,0.1760317);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(24,0.1773893);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(25,0.1154548);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(26,0.3673064);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(27,0.2107857);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(28,0.3542187);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(29,0.1823042);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(31,0.2172757);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(3,0.7460475);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(4,0.9407763);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(5,0.7956394);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(6,0.5161964);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(7,0.3810773);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(8,0.2326996);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(9,0.248347);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(11,0.1745527);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(12,0.182755);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(14,0.1080167);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(15,0.1773891);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(18,0.1785666);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(19,0.1760317);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(24,0.1773893);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(25,0.1154548);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(26,0.2597272);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(27,0.2107857);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(28,0.2506846);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(29,0.1823042);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(31,0.2172757);
   VbbHcc_algo_Z_dR_stack_7->SetEntries(106);

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
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(3,3.740853);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(4,3.144854);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(5,3.106728);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(6,2.321615);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(7,1.444452);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(8,0.1937502);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(9,0.2373516);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(11,0.2337005);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(12,0.8958423);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(14,0.1957738);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(15,0.2706537);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(17,0.3805198);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(18,0.4447715);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(20,0.2367069);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(21,0.2175047);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(27,0.5665514);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(28,0.373455);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(31,0.1416166);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(3,0.9221458);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(4,0.8188281);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(5,0.8126153);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(6,0.7077974);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(7,0.5912954);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(8,0.1937502);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(9,0.2373516);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(11,0.2337005);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(12,0.4493653);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(14,0.1957738);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(15,0.2706537);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(17,0.2720151);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(18,0.3152308);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(20,0.2367069);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(21,0.2175047);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(27,0.3355687);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(28,0.2688481);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(31,0.1416166);
   VbbHcc_algo_Z_dR_stack_8->SetEntries(86);

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
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(3,0.666815);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(4,1.52957);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(5,1.656731);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(6,1.32203);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(7,0.9874722);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(8,0.5888805);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(9,0.3000616);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(10,0.2405346);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(11,0.200716);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(12,0.1633786);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(13,0.1052456);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(14,0.1417722);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(15,0.1286958);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(16,0.1176998);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(17,0.1180142);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(18,0.0791982);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(19,0.07036675);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(20,0.0688191);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(21,0.07272354);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(22,0.06854619);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(23,0.06844438);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(24,0.1024202);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(25,0.09916755);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(26,0.119549);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(27,0.1637051);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(28,0.1872648);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(29,0.1681084);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(30,0.09144122);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(31,0.0467025);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(3,0.03599388);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(4,0.05461313);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(5,0.05707273);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(6,0.05126452);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(7,0.04408676);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(8,0.03397258);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(9,0.0239254);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(10,0.02118896);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(11,0.01918781);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(12,0.01739948);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(13,0.01453427);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(14,0.01627419);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(15,0.01518257);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(16,0.01476678);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(17,0.01505321);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(18,0.01226601);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(19,0.01153731);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(20,0.01158472);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(21,0.01192073);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(22,0.0114429);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(23,0.01146321);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(24,0.01376064);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(25,0.01401784);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(26,0.01532511);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(27,0.01779956);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(28,0.01918782);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(29,0.01807305);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(30,0.01284174);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(31,0.009822762);
   VbbHcc_algo_Z_dR_stack_9->SetEntries(5585);

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
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(2,0.0004982403);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(3,0.3930568);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(4,0.7961252);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(5,0.9867386);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(6,0.9784501);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(7,0.8289641);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(8,0.5427753);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(9,0.3488094);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(10,0.2314308);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(11,0.1766254);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(12,0.1449386);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(13,0.1268961);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(14,0.1025413);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(15,0.08674918);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(16,0.08716731);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(17,0.07349739);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(18,0.06201185);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(19,0.0701496);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(20,0.06721197);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(21,0.07433841);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(22,0.07815114);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(23,0.0733454);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(24,0.0994062);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(25,0.09104007);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(26,0.1150507);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(27,0.1062023);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(28,0.1171045);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(29,0.08065419);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(30,0.05590638);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(31,0.03748617);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(2,0.0004982403);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(3,0.01315421);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(4,0.0187932);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(5,0.02093882);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(6,0.02084079);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(7,0.01922683);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(8,0.01554469);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(9,0.01240873);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(10,0.01013819);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(11,0.008836866);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(12,0.007986329);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(13,0.007443052);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(14,0.006712708);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(15,0.006152119);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(16,0.006201169);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(17,0.005693411);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(18,0.005198466);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(19,0.005574273);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(20,0.00542854);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(21,0.00572171);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(22,0.005864967);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(23,0.005692346);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(24,0.006622933);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(25,0.006355042);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(26,0.007160467);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(27,0.006887071);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(28,0.007216765);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(29,0.006008741);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(30,0.004974437);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(31,0.004080445);
   VbbHcc_algo_Z_dR_stack_10->SetEntries(16167);

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
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(3,0.0651357);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(4,0.1098293);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(5,0.1039113);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(6,0.07055165);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(7,0.01109536);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(8,0.0202848);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(9,0.004709405);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(10,0.00885132);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(11,0.00153003);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(12,0.005340752);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(13,0.004592117);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(15,0.003214622);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(16,0.001531853);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(17,0.003449304);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(18,0.003259758);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(19,0.004056931);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(20,0.0004027325);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(22,0.005490955);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(24,0.001498648);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(25,0.00118482);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(26,0.003706043);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(27,0.008629885);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(28,0.006911254);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(29,0.006507976);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(30,0.00362127);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(31,0.003806854);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(3,0.01163142);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(4,0.01485454);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(5,0.01395199);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(6,0.01156427);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(7,0.004336019);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(8,0.00620459);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(9,0.002764372);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(10,0.003984491);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(11,0.00153003);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(12,0.003113933);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(13,0.002698967);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(15,0.002329905);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(16,0.001531853);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(17,0.002471773);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(18,0.002529043);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(19,0.002872246);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(20,0.0004027325);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(22,0.003199225);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(24,0.001498648);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(25,0.00118482);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(26,0.002628934);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(27,0.00392966);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(28,0.00351216);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(29,0.00332443);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(30,0.002568776);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(31,0.002770122);
   VbbHcc_algo_Z_dR_stack_11->SetEntries(279);

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
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(3,0.01563499);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(4,0.03879067);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(5,0.05081842);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(6,0.03218909);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(7,0.01237231);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(8,0.004136451);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(9,0.002985976);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(10,0.00207223);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(11,0.001894603);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(12,0.002177793);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(13,0.001896592);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(14,0.002157063);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(15,0.0006682297);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(16,0.0004691541);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(17,0.0006518486);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(18,0.0009701763);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(19,0.0001636466);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(20,0.001200439);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(21,0.0007822033);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(23,0.000391508);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(24,0.0004305976);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(25,0.0009978718);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(26,0.00219235);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(27,0.002814851);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(28,0.003261168);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(29,0.003517718);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(30,0.001243668);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(31,0.001221686);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(3,0.001891775);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(4,0.003034966);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(5,0.003497667);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(6,0.002792848);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(7,0.001744852);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(8,0.001010612);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(9,0.0008758101);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(10,0.0007004431);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(11,0.0006747674);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(12,0.0007275776);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(13,0.0006908305);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(14,0.0007005229);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(15,0.0003930399);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(16,0.0003319491);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(17,0.0003807164);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(18,0.00048667);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(19,0.0001636466);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(20,0.0005455717);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(21,0.0004605125);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(23,0.0002825751);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(24,0.0003087907);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(25,0.0004557211);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(26,0.0007390931);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(27,0.0008236984);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(28,0.0008717675);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(29,0.0009189379);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(30,0.0005631747);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(31,0.0005494592);
   VbbHcc_algo_Z_dR_stack_12->SetEntries(816);

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
   
   TH1D *VbbHcc_algo_Z_dR__227 = new TH1D("VbbHcc_algo_Z_dR__227","",30,0,6);
   VbbHcc_algo_Z_dR__227->SetBinContent(2,2);
   VbbHcc_algo_Z_dR__227->SetBinContent(3,2976);
   VbbHcc_algo_Z_dR__227->SetBinContent(4,3202);
   VbbHcc_algo_Z_dR__227->SetBinContent(5,2345);
   VbbHcc_algo_Z_dR__227->SetBinContent(6,1995);
   VbbHcc_algo_Z_dR__227->SetBinContent(7,1830);
   VbbHcc_algo_Z_dR__227->SetBinContent(8,1679);
   VbbHcc_algo_Z_dR__227->SetBinContent(9,1594);
   VbbHcc_algo_Z_dR__227->SetBinContent(10,1457);
   VbbHcc_algo_Z_dR__227->SetBinContent(11,1313);
   VbbHcc_algo_Z_dR__227->SetBinContent(12,1184);
   VbbHcc_algo_Z_dR__227->SetBinContent(13,1082);
   VbbHcc_algo_Z_dR__227->SetBinContent(14,960);
   VbbHcc_algo_Z_dR__227->SetBinContent(15,883);
   VbbHcc_algo_Z_dR__227->SetBinContent(16,835);
   VbbHcc_algo_Z_dR__227->SetBinContent(17,697);
   VbbHcc_algo_Z_dR__227->SetBinContent(18,619);
   VbbHcc_algo_Z_dR__227->SetBinContent(19,583);
   VbbHcc_algo_Z_dR__227->SetBinContent(20,518);
   VbbHcc_algo_Z_dR__227->SetBinContent(21,514);
   VbbHcc_algo_Z_dR__227->SetBinContent(22,450);
   VbbHcc_algo_Z_dR__227->SetBinContent(23,437);
   VbbHcc_algo_Z_dR__227->SetBinContent(24,400);
   VbbHcc_algo_Z_dR__227->SetBinContent(25,384);
   VbbHcc_algo_Z_dR__227->SetBinContent(26,387);
   VbbHcc_algo_Z_dR__227->SetBinContent(27,329);
   VbbHcc_algo_Z_dR__227->SetBinContent(28,371);
   VbbHcc_algo_Z_dR__227->SetBinContent(29,334);
   VbbHcc_algo_Z_dR__227->SetBinContent(30,219);
   VbbHcc_algo_Z_dR__227->SetBinContent(31,164);
   VbbHcc_algo_Z_dR__227->SetEntries(29772);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR__227->SetLineColor(ci);
   VbbHcc_algo_Z_dR__227->SetLineWidth(2);
   VbbHcc_algo_Z_dR__227->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR__227->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR__227->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR__227->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__227->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__227->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__227->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__227->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__227->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__227->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__227->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR__227->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__227->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__227->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__227->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__227->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__227->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_fx1227[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_fy1227[30] = {
   0,
   0.7890963,
   22648.88,
   25612.49,
   19113.78,
   15030.79,
   10644.01,
   13902.65,
   12202.21,
   9649.46,
   8111.773,
   5363.48,
   6713.66,
   3867.537,
   4467.298,
   8569.964,
   3473.396,
   2919.418,
   2341.569,
   1917.616,
   3635.358,
   1891.011,
   2158.759,
   2145.764,
   2508.424,
   2821.071,
   2646.985,
   4078.204,
   2331.336,
   1257.147};
   Double_t Graph_from_VbbHcc_algo_Z_dR_fex1227[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_fey1227[30] = {
   0,
   0.2628306,
   1628.549,
   2025.462,
   1701.495,
   1561.57,
   1104.933,
   2010.799,
   1588.615,
   1430.783,
   1118.113,
   755.9912,
   989.0779,
   530.8524,
   814.9119,
   2525.363,
   689.1941,
   597.2598,
   398.6663,
   260.9603,
   796.3453,
   407.3918,
   521.7979,
   356.0693,
   644.7271,
   614.644,
   680.7011,
   897.232,
   606.2189,
   335.3559};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_fx1227,Graph_from_VbbHcc_algo_Z_dR_fy1227,Graph_from_VbbHcc_algo_Z_dR_fex1227,Graph_from_VbbHcc_algo_Z_dR_fey1227);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR1227 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR1227","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->SetMaximum(30401.74);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1227->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR1227);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR","Data (JetHT, 2017)","p");
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_algo_17->cd();
  
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
   
   TH1D *data_mc_ratio__228 = new TH1D("data_mc_ratio__228","",30,0,6);
   data_mc_ratio__228->SetBinContent(2,2.534545);
   data_mc_ratio__228->SetBinContent(3,0.1313972);
   data_mc_ratio__228->SetBinContent(4,0.1250171);
   data_mc_ratio__228->SetBinContent(5,0.1226863);
   data_mc_ratio__228->SetBinContent(6,0.1327275);
   data_mc_ratio__228->SetBinContent(7,0.1719276);
   data_mc_ratio__228->SetBinContent(8,0.1207683);
   data_mc_ratio__228->SetBinContent(9,0.1306321);
   data_mc_ratio__228->SetBinContent(10,0.1509929);
   data_mc_ratio__228->SetBinContent(11,0.1618635);
   data_mc_ratio__228->SetBinContent(12,0.2207522);
   data_mc_ratio__228->SetBinContent(13,0.161164);
   data_mc_ratio__228->SetBinContent(14,0.24822);
   data_mc_ratio__228->SetBinContent(15,0.1976586);
   data_mc_ratio__228->SetBinContent(16,0.09743332);
   data_mc_ratio__228->SetBinContent(17,0.2006682);
   data_mc_ratio__228->SetBinContent(18,0.2120285);
   data_mc_ratio__228->SetBinContent(19,0.2489783);
   data_mc_ratio__228->SetBinContent(20,0.2701271);
   data_mc_ratio__228->SetBinContent(21,0.1413891);
   data_mc_ratio__228->SetBinContent(22,0.237968);
   data_mc_ratio__228->SetBinContent(23,0.2024311);
   data_mc_ratio__228->SetBinContent(24,0.1864138);
   data_mc_ratio__228->SetBinContent(25,0.1530841);
   data_mc_ratio__228->SetBinContent(26,0.1371819);
   data_mc_ratio__228->SetBinContent(27,0.1242924);
   data_mc_ratio__228->SetBinContent(28,0.09097142);
   data_mc_ratio__228->SetBinContent(29,0.1432655);
   data_mc_ratio__228->SetBinContent(30,0.174204);
   data_mc_ratio__228->SetBinContent(31,0.168262);
   data_mc_ratio__228->SetBinError(2,1.792194);
   data_mc_ratio__228->SetBinError(3,0.002408628);
   data_mc_ratio__228->SetBinError(4,0.002209322);
   data_mc_ratio__228->SetBinError(5,0.002533523);
   data_mc_ratio__228->SetBinError(6,0.002971594);
   data_mc_ratio__228->SetBinError(7,0.004019019);
   data_mc_ratio__228->SetBinError(8,0.002947323);
   data_mc_ratio__228->SetBinError(9,0.003271944);
   data_mc_ratio__228->SetBinError(10,0.003955731);
   data_mc_ratio__228->SetBinError(11,0.004467006);
   data_mc_ratio__228->SetBinError(12,0.006415481);
   data_mc_ratio__228->SetBinError(13,0.004899529);
   data_mc_ratio__228->SetBinError(14,0.008011266);
   data_mc_ratio__228->SetBinError(15,0.006651743);
   data_mc_ratio__228->SetBinError(16,0.003371819);
   data_mc_ratio__228->SetBinError(17,0.007600849);
   data_mc_ratio__228->SetBinError(18,0.008522146);
   data_mc_ratio__228->SetBinError(19,0.01031163);
   data_mc_ratio__228->SetBinError(20,0.0118687);
   data_mc_ratio__228->SetBinError(21,0.006236406);
   data_mc_ratio__228->SetBinError(22,0.01121792);
   data_mc_ratio__228->SetBinError(23,0.009683593);
   data_mc_ratio__228->SetBinError(24,0.009320689);
   data_mc_ratio__228->SetBinError(25,0.007812042);
   data_mc_ratio__228->SetBinError(26,0.00697335);
   data_mc_ratio__228->SetBinError(27,0.00685246);
   data_mc_ratio__228->SetBinError(28,0.004723001);
   data_mc_ratio__228->SetBinError(29,0.007839138);
   data_mc_ratio__228->SetBinError(30,0.01177161);
   data_mc_ratio__228->SetBinError(31,0.04565008);
   data_mc_ratio__228->SetMinimum(0.4);
   data_mc_ratio__228->SetMaximum(1.6);
   data_mc_ratio__228->SetEntries(13.22245);
   data_mc_ratio__228->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__228->SetLineColor(ci);
   data_mc_ratio__228->SetLineWidth(2);
   data_mc_ratio__228->SetMarkerStyle(20);
   data_mc_ratio__228->SetMarkerSize(1.2);
   data_mc_ratio__228->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__228->GetXaxis()->SetRange(1,30);
   data_mc_ratio__228->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__228->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__228->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__228->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__228->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__228->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__228->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__228->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__228->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__228->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__228->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__228->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__228->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__228->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__228->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__228->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__228->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1228[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1228[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1228[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1228[30] = {
   0,
   0.333078,
   0.07190419,
   0.07908103,
   0.08901927,
   0.1038914,
   0.103808,
   0.1446342,
   0.1301908,
   0.148276,
   0.1378383,
   0.1409516,
   0.1473232,
   0.1372585,
   0.1824172,
   0.294676,
   0.1984208,
   0.2045818,
   0.1702561,
   0.1360858,
   0.2190555,
   0.215436,
   0.2417119,
   0.1659406,
   0.2570247,
   0.2178761,
   0.2571609,
   0.2200066,
   0.2600307,
   0.2667595};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1228,Graph_from_mc_statistical_error_fy1228,Graph_from_mc_statistical_error_fex1228,Graph_from_mc_statistical_error_fey1228);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1228 = new TH1F("Graph_Graph_from_mc_statistical_error1228","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1228->SetMinimum(0.6003065);
   Graph_Graph_from_mc_statistical_error1228->SetMaximum(1.399694);
   Graph_Graph_from_mc_statistical_error1228->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1228->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1228->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1228->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1228->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1228);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_algo_17->cd();
   Z_dR_algo_17->Modified();
   Z_dR_algo_17->cd();
   Z_dR_algo_17->SetSelected(Z_dR_algo_17);
}
