void Z_dR_algo_18()
{
//=========Macro generated from canvas: Z_dR_algo_18/Z_dR_algo_18
//=========  (Fri Jul 14 13:38:19 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_algo_18 = new TCanvas("Z_dR_algo_18", "Z_dR_algo_18",0,0,600,600);
   Z_dR_algo_18->SetHighLightColor(2);
   Z_dR_algo_18->Range(0,0,1,1);
   Z_dR_algo_18->SetFillColor(0);
   Z_dR_algo_18->SetFillStyle(4000);
   Z_dR_algo_18->SetBorderMode(0);
   Z_dR_algo_18->SetBorderSize(2);
   Z_dR_algo_18->SetFrameFillStyle(1000);
   Z_dR_algo_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-85.68744,6.314516,85611.74);
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
   st->SetMaximum(73373.33);
   
   TH1F *st_stack_115 = new TH1F("st_stack_115","",30,0,6);
   st_stack_115->SetMinimum(0.01);
   st_stack_115->SetMaximum(77042);
   st_stack_115->SetDirectory(0);
   st_stack_115->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_115->SetLineColor(ci);
   st_stack_115->GetXaxis()->SetRange(1,30);
   st_stack_115->GetXaxis()->SetLabelFont(42);
   st_stack_115->GetXaxis()->SetLabelSize(0.035);
   st_stack_115->GetXaxis()->SetTitleSize(0.035);
   st_stack_115->GetXaxis()->SetTitleFont(42);
   st_stack_115->GetYaxis()->SetTitle("Events/0.2");
   st_stack_115->GetYaxis()->SetLabelFont(42);
   st_stack_115->GetYaxis()->SetLabelSize(0.05);
   st_stack_115->GetYaxis()->SetTitleSize(0.057);
   st_stack_115->GetYaxis()->SetTitleOffset(1.2);
   st_stack_115->GetYaxis()->SetTitleFont(42);
   st_stack_115->GetZaxis()->SetLabelFont(42);
   st_stack_115->GetZaxis()->SetLabelSize(0.035);
   st_stack_115->GetZaxis()->SetTitleSize(0.035);
   st_stack_115->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_115);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(2,0.2608009);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,24727.71);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,26169.45);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,16683.73);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,18565.5);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,11740.34);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,10936.95);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,11989.24);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,7453.332);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,8101.159);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,5431.017);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,5031.328);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,5339.726);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,4621.586);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,4473.097);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,3867.394);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,2943.556);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,3342.668);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,2014.725);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,3026.149);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,5458.04);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(23,2629.698);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(24,2805.219);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(25,1635.757);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(26,3408.95);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(27,2433.298);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(28,2690.959);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(29,3175.721);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(30,1688.602);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(31,1303.481);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(2,0.2608009);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,1701.401);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,3549.825);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,1519.435);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,1980.072);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,1298.245);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,1422.429);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,1707.876);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,948.0185);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,1309.794);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,976.3602);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,772.7005);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,1875.198);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,986.4552);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,1003.905);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,871.7913);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,670.4345);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,853.3167);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,513.9681);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,624.7609);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,2555.955);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(23,673.0638);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(24,749.5491);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(25,407.8115);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(26,838.8273);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(27,746.325);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(28,662.7861);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(29,851.3841);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(30,427.9035);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(31,375.9289);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(13324);

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
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,52.12603);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,84.44692);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,101.2419);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,111.4038);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,120.9201);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,113.4128);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,115.9315);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,100.297);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,106.236);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,84.50586);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,79.51602);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,74.28423);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,62.45935);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,56.84884);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,45.76753);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,45.28419);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,43.18727);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,41.2634);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,38.77016);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,35.53699);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,38.76465);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(24,38.30672);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,30.46064);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(26,29.00214);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(27,25.74825);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(28,23.96801);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(29,19.51933);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(30,12.34732);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(31,11.53002);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,5.641928);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,4.328311);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,4.6144);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,4.741362);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,5.118934);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,4.59951);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,4.763347);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,4.969731);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,4.44924);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,3.78009);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,3.956175);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,3.596609);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,3.435106);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,3.330757);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,2.867864);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,2.835283);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,2.785015);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,2.829791);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,2.63934);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,2.568447);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,2.586365);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(24,3.234571);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,2.530877);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(26,2.467101);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(27,2.20326);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(28,2.379582);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(29,2.137983);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(30,1.500167);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(31,1.572596);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(21685);

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
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(2,0.5330378);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(3,585.1229);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(4,1101.9);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(5,1300.089);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(6,1408.494);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(7,1398.461);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(8,1342.984);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(9,1273.622);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(10,1191.446);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(11,1116.326);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(12,1020.667);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(13,919.5574);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(14,822.2333);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(15,738.0989);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(16,660.2456);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(17,584.706);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(18,534.9006);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(19,513.1794);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(20,516.5392);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(21,493.8767);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(22,472.0469);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(23,447.2193);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(24,413.7237);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(25,374.1622);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(26,331.5461);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(27,292.2881);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(28,236.3815);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(29,180.3415);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(30,115.8514);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(31,85.36668);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(2,0.2082586);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(3,6.84473);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(4,9.460486);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(5,10.16283);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(6,11.87706);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(7,10.38763);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(8,10.26632);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(9,10.32686);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(10,9.683837);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(11,9.22219);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(12,9.080033);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(13,8.329881);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(14,7.905888);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(15,7.529552);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(16,6.935718);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(17,6.550172);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(18,6.64008);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(19,6.327154);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(20,6.967284);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(21,6.107579);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(22,5.93339);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(23,6.000608);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(24,5.561097);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(25,5.191384);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(26,5.571657);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(27,5.073105);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(28,4.200386);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(29,3.857604);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(30,3.018947);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(31,2.453797);
   VbbHcc_algo_Z_dR_stack_3->SetEntries(319331);

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
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(3,198.7813);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(4,296.904);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(5,225.1318);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(6,154.4433);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(7,99.08697);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(8,82.35849);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(9,60.64809);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(10,46.39084);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(11,59.81084);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(12,48.37375);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(13,51.43117);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(14,35.53168);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(15,35.14712);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(16,20.92873);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(17,24.71965);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(18,23.96878);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(19,19.61242);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(20,21.56291);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(21,18.52796);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(22,19.44667);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(23,19.87227);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(24,19.68627);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(25,19.20811);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(26,23.86912);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(27,24.53477);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(28,27.54845);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(29,29.87919);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(30,20.822);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(31,12.18604);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(3,7.374785);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(4,11.70863);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(5,14.01698);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(6,12.00611);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(7,11.30736);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(8,6.857023);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(9,4.51006);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(10,3.796475);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(11,8.149218);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(12,4.979448);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(13,9.591091);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(14,3.460691);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(15,3.384146);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(16,2.358412);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(17,2.713412);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(18,6.778143);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(19,2.60764);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(20,2.673911);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(21,2.365668);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(22,6.075246);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(23,2.553901);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(24,2.648868);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(25,2.539882);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(26,6.230547);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(27,3.153049);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(28,6.950433);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(29,5.129016);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(30,2.856332);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(31,2.075436);
   VbbHcc_algo_Z_dR_stack_4->SetEntries(8300);

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
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(3,125.8052);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(4,115.9586);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(5,89.35878);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(6,81.56827);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(7,60.48192);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(8,44.98486);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(9,29.76418);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(10,26.14764);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(11,35.74823);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(12,21.73932);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(13,35.05854);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(14,12.9382);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(15,29.31589);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(16,16.12563);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(17,10.66918);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(18,12.91371);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(19,14.43722);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(20,18.02776);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(21,9.53403);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(22,10.82236);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(23,10.2277);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(24,10.32812);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(25,4.769868);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(26,9.32558);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(27,10.26277);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(28,9.591933);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(29,10.42011);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(30,9.580308);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(31,5.335432);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(3,11.99689);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(4,12.03546);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(5,10.33083);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(6,15.20162);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(7,13.54001);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(8,7.308544);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(9,5.602468);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(10,6.019142);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(11,7.107289);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(12,4.64196);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(13,12.74606);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(14,2.567369);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(15,12.11916);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(16,6.101303);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(17,3.619895);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(18,4.651017);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(19,4.149096);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(20,5.484005);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(21,2.925663);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(22,3.485788);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(23,3.690182);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(24,3.104089);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(25,1.048617);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(26,2.703803);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(27,3.346969);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(28,2.767605);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(29,2.64408);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(30,3.251321);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(31,2.312318);
   VbbHcc_algo_Z_dR_stack_5->SetEntries(3417);

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
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(3,0.4233786);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(5,0.179752);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(8,0.3366028);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(9,0.419823);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(19,0.179752);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(20,0.3044658);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(21,0.1594108);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(22,0.2709334);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(3,0.4233786);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(5,0.179752);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(8,0.3366028);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(9,0.419823);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(19,0.179752);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(20,0.3044658);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(21,0.1594108);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(22,0.2709334);
   VbbHcc_algo_Z_dR_stack_6->SetEntries(8);

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
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(3,3.308554);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(4,5.942589);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(5,4.919123);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(6,1.192097);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(7,0.9766088);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(9,0.3138997);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(11,0.2242351);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(12,0.6779189);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(13,0.3026994);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(15,0.194337);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(17,0.3007647);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(26,0.5029439);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(27,0.7473668);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(28,0.5258312);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(29,0.2205047);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(3,0.8875004);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(4,1.183554);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(5,1.07323);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(6,0.5117474);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(7,0.4444161);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(9,0.2646116);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(11,0.2242351);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(12,0.3915849);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(13,0.3026994);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(15,0.194337);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(17,0.3007647);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(26,0.357949);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(27,0.4361847);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(28,0.3738651);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(29,0.2205047);
   VbbHcc_algo_Z_dR_stack_7->SetEntries(92);

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
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(3,4.124113);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(4,6.209062);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(5,3.589391);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(6,2.716875);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(7,0.4292404);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(8,0.4420771);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(9,0.7199856);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(10,0.74236);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(11,0.441764);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(12,0.5480148);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(13,0.395032);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(14,0.4814532);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(15,0.2263142);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(18,0.2963851);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(20,0.2478375);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(27,0.3006179);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(28,0.1931734);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(29,0.4649193);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(30,0.2204648);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(3,0.962296);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(4,1.227531);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(5,0.9348055);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(6,0.7797473);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(7,0.3036313);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(8,0.3126067);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(9,0.4156839);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(10,0.4332691);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(11,0.3313175);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(12,0.3941898);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(13,0.281901);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(14,0.342601);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(15,0.2263142);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(18,0.2963851);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(20,0.2478375);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(27,0.3006179);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(28,0.1931734);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(29,0.3294661);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(30,0.2204648);
   VbbHcc_algo_Z_dR_stack_8->SetEntries(99);

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
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(3,1.033768);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(4,2.162074);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(5,2.226555);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(6,1.883463);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(7,1.285007);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(8,0.5334365);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(9,0.3849109);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(10,0.2333477);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(11,0.2211175);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(12,0.2219387);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(13,0.1951972);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(14,0.2393979);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(15,0.124015);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(16,0.173199);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(17,0.1686163);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(18,0.1630058);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(19,0.1290359);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(20,0.1398212);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(21,0.1032932);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(22,0.08700294);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(23,0.09506473);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(24,0.1270319);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(25,0.1068129);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(26,0.1959489);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(27,0.2533425);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(28,0.2441987);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(29,0.174785);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(30,0.1697678);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(31,0.05667527);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(3,0.05612615);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(4,0.07786624);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(5,0.07960242);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(6,0.07246297);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(7,0.06334438);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(8,0.03767028);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(9,0.03217183);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(10,0.02538198);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(11,0.02448399);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(12,0.02432838);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(13,0.0228296);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(14,0.04712737);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(15,0.01829504);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(16,0.02171796);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(17,0.0213649);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(18,0.02099221);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(19,0.01868398);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(20,0.02140216);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(21,0.0193135);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(22,0.01538897);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(23,0.0156394);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(24,0.03223267);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(25,0.01759519);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(26,0.0231892);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(27,0.02637364);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(28,0.02588561);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(29,0.02186229);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(30,0.04478126);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(31,0.01222136);
   VbbHcc_algo_Z_dR_stack_9->SetEntries(5213);

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
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(2,0.0007163652);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(3,0.5651332);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(4,1.144661);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(5,1.418723);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(6,1.406806);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(7,1.191877);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(8,0.7803972);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(9,0.5015149);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(10,0.332749);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(11,0.2539503);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(12,0.2083914);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(13,0.18245);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(14,0.1474328);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(15,0.1247271);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(16,0.1253283);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(17,0.1056739);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(18,0.08916005);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(19,0.1008604);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(20,0.09663673);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(21,0.1068831);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(22,0.112365);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(23,0.1054553);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(24,0.1429253);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(25,0.1308965);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(26,0.1654189);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(27,0.1526966);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(28,0.1683717);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(29,0.1159638);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(30,0.08038167);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(31,0.05389726);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(2,0.0007163652);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(3,0.018913);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(4,0.02702068);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(5,0.03010564);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(6,0.02996469);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(7,0.02764415);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(8,0.02235);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(9,0.01784115);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(10,0.01457659);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(11,0.01270556);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(12,0.01148267);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(13,0.01070155);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(14,0.009651468);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(15,0.008845458);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(16,0.008915982);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(17,0.008185932);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(18,0.007474305);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(19,0.008014637);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(20,0.007805103);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(21,0.008226619);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(22,0.008432594);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(23,0.0081844);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(24,0.00952239);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(25,0.009137219);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(26,0.01029525);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(27,0.009902164);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(28,0.0103762);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(29,0.008639311);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(30,0.007152198);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(31,0.005866824);
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
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(3,0.1346601);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(4,0.1642079);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(5,0.1254108);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(6,0.04501078);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(7,0.008758258);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(8,0.006869914);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(9,0.00790732);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(10,0.004979856);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(12,0.002499098);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(13,0.005884049);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(14,0.002434505);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(15,0.004567642);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(16,0.002452157);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(17,0.004313654);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(18,0.002019195);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(19,0.002582708);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(20,0.002582708);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(22,0.005631038);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(24,0.002650172);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(25,0.002582708);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(26,0.005925844);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(27,0.01144525);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(28,0.009834728);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(29,0.01188141);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(30,0.002220358);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(31,0.003433951);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(3,0.0186416);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(4,0.02235064);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(5,0.01859877);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(6,0.01095544);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(7,0.004696344);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(8,0.004070651);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(9,0.004597049);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(10,0.003523734);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(12,0.002499098);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(13,0.004191567);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(14,0.002434505);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(15,0.003236833);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(16,0.002452157);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(17,0.003158556);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(18,0.002019195);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(19,0.002582708);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(20,0.002582708);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(22,0.004033934);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(24,0.002650172);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(25,0.002582708);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(26,0.004202393);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(27,0.005796358);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(28,0.004919521);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(29,0.005967337);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(30,0.004267184);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(31,0.003433951);
   VbbHcc_algo_Z_dR_stack_11->SetEntries(246);

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
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(3,0.02329802);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(4,0.05891201);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(5,0.05174383);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(6,0.02577944);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(7,0.01128523);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(8,0.005915108);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(9,0.00360576);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(10,0.00150679);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(11,0.003359375);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(12,0.002795836);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(13,0.001483819);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(14,0.001678408);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(15,0.0008904661);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(16,0.0003186975);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(17,0.002339522);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(18,0.002336746);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(19,0.000857153);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(20,0.001245289);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(21,0.0006460157);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(22,0.001001756);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(23,0.0007587871);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(24,0.0003334233);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(25,0.001059488);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(26,0.001225022);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(27,0.004701451);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(28,0.00585212);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(29,0.003102726);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(30,0.002072519);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(31,0.0006361991);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(3,0.002853963);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(4,0.005249985);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(5,0.004257466);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(6,0.002941182);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(7,0.00201498);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(8,0.001434573);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(9,0.001302504);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(10,0.0007627665);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(11,0.001043167);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(12,0.001013455);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(13,0.0007505164);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(14,0.0007532111);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(15,0.00054189);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(16,0.0003186975);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(17,0.0009623651);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(18,0.0008342797);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(19,0.0005262486);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(20,0.0006236373);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(21,0.0004568046);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(22,0.0006231669);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(23,0.0005422141);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(24,0.0003334233);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(25,0.0006172743);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(26,0.0006129089);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(27,0.001267703);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(28,0.001403081);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(29,0.001007929);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(30,0.0008524416);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(31,0.0004498741);
   VbbHcc_algo_Z_dR_stack_12->SetEntries(653);

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
   
   TH1D *VbbHcc_algo_Z_dR__229 = new TH1D("VbbHcc_algo_Z_dR__229","",30,0,6);
   VbbHcc_algo_Z_dR__229->SetBinContent(2,11);
   VbbHcc_algo_Z_dR__229->SetBinContent(3,27515);
   VbbHcc_algo_Z_dR__229->SetBinContent(4,33018);
   VbbHcc_algo_Z_dR__229->SetBinContent(5,25790);
   VbbHcc_algo_Z_dR__229->SetBinContent(6,21996);
   VbbHcc_algo_Z_dR__229->SetBinContent(7,19254);
   VbbHcc_algo_Z_dR__229->SetBinContent(8,17307);
   VbbHcc_algo_Z_dR__229->SetBinContent(9,15709);
   VbbHcc_algo_Z_dR__229->SetBinContent(10,14159);
   VbbHcc_algo_Z_dR__229->SetBinContent(11,12811);
   VbbHcc_algo_Z_dR__229->SetBinContent(12,11519);
   VbbHcc_algo_Z_dR__229->SetBinContent(13,10497);
   VbbHcc_algo_Z_dR__229->SetBinContent(14,9197);
   VbbHcc_algo_Z_dR__229->SetBinContent(15,8368);
   VbbHcc_algo_Z_dR__229->SetBinContent(16,7713);
   VbbHcc_algo_Z_dR__229->SetBinContent(17,6566);
   VbbHcc_algo_Z_dR__229->SetBinContent(18,5846);
   VbbHcc_algo_Z_dR__229->SetBinContent(19,5399);
   VbbHcc_algo_Z_dR__229->SetBinContent(20,4941);
   VbbHcc_algo_Z_dR__229->SetBinContent(21,4969);
   VbbHcc_algo_Z_dR__229->SetBinContent(22,4726);
   VbbHcc_algo_Z_dR__229->SetBinContent(23,4617);
   VbbHcc_algo_Z_dR__229->SetBinContent(24,4538);
   VbbHcc_algo_Z_dR__229->SetBinContent(25,4439);
   VbbHcc_algo_Z_dR__229->SetBinContent(26,4265);
   VbbHcc_algo_Z_dR__229->SetBinContent(27,4307);
   VbbHcc_algo_Z_dR__229->SetBinContent(28,4276);
   VbbHcc_algo_Z_dR__229->SetBinContent(29,4179);
   VbbHcc_algo_Z_dR__229->SetBinContent(30,2847);
   VbbHcc_algo_Z_dR__229->SetBinContent(31,2292);
   VbbHcc_algo_Z_dR__229->SetEntries(303071);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR__229->SetLineColor(ci);
   VbbHcc_algo_Z_dR__229->SetLineWidth(2);
   VbbHcc_algo_Z_dR__229->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR__229->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR__229->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR__229->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__229->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__229->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__229->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__229->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__229->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__229->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__229->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR__229->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__229->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__229->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__229->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__229->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__229->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_fx1229[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_fy1229[30] = {
   0,
   0.7945551,
   25699.15,
   27784.34,
   18412.07,
   20328.68,
   13423.19,
   12522.8,
   13471.55,
   8818.928,
   9420.425,
   6607.965,
   6117.974,
   6285.586,
   5487.282,
   5227.547,
   4533.838,
   3561.176,
   3933.497,
   2612.911,
   3587.228,
   5996.37,
   3145.983,
   3287.537,
   2064.599,
   3803.565,
   2787.602,
   2989.596,
   3416.872,
   1847.678};
   Double_t Graph_from_VbbHcc_algo_Z_dR_fex1229[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_fey1229[30] = {
   0,
   0.3337504,
   1701.483,
   3549.881,
   1519.576,
   1980.208,
   1298.417,
   1422.509,
   1707.93,
   948.1078,
   1309.879,
   976.4336,
   772.9203,
   1875.223,
   986.5702,
   1003.956,
   871.8324,
   670.5239,
   853.3587,
   514.0595,
   624.8076,
   2555.973,
   673.1105,
   749.5879,
   407.8616,
   838.877,
   746.3599,
   662.8461,
   851.4152,
   427.9387};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_fx1229,Graph_from_VbbHcc_algo_Z_dR_fy1229,Graph_from_VbbHcc_algo_Z_dR_fex1229,Graph_from_VbbHcc_algo_Z_dR_fey1229);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR1229 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR1229","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->SetMaximum(34467.64);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1229->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR1229);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_algo_18->cd();
  
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
   
   TH1D *data_mc_ratio__230 = new TH1D("data_mc_ratio__230","",30,0,6);
   data_mc_ratio__230->SetBinContent(2,13.84423);
   data_mc_ratio__230->SetBinContent(3,1.070658);
   data_mc_ratio__230->SetBinContent(4,1.188367);
   data_mc_ratio__230->SetBinContent(5,1.400712);
   data_mc_ratio__230->SetBinContent(6,1.082018);
   data_mc_ratio__230->SetBinContent(7,1.434383);
   data_mc_ratio__230->SetBinContent(8,1.382039);
   data_mc_ratio__230->SetBinContent(9,1.166087);
   data_mc_ratio__230->SetBinContent(10,1.605524);
   data_mc_ratio__230->SetBinContent(11,1.359917);
   data_mc_ratio__230->SetBinContent(12,1.743199);
   data_mc_ratio__230->SetBinContent(13,1.715764);
   data_mc_ratio__230->SetBinContent(14,1.463189);
   data_mc_ratio__230->SetBinContent(15,1.524981);
   data_mc_ratio__230->SetBinContent(16,1.475453);
   data_mc_ratio__230->SetBinContent(17,1.448221);
   data_mc_ratio__230->SetBinContent(18,1.641592);
   data_mc_ratio__230->SetBinContent(19,1.37257);
   data_mc_ratio__230->SetBinContent(20,1.890994);
   data_mc_ratio__230->SetBinContent(21,1.385192);
   data_mc_ratio__230->SetBinContent(22,0.7881435);
   data_mc_ratio__230->SetBinContent(23,1.467586);
   data_mc_ratio__230->SetBinContent(24,1.380365);
   data_mc_ratio__230->SetBinContent(25,2.150054);
   data_mc_ratio__230->SetBinContent(26,1.121316);
   data_mc_ratio__230->SetBinContent(27,1.545055);
   data_mc_ratio__230->SetBinContent(28,1.430294);
   data_mc_ratio__230->SetBinContent(29,1.223049);
   data_mc_ratio__230->SetBinContent(30,1.540853);
   data_mc_ratio__230->SetBinContent(31,1.616346);
   data_mc_ratio__230->SetBinError(2,4.174191);
   data_mc_ratio__230->SetBinError(3,0.006454549);
   data_mc_ratio__230->SetBinError(4,0.006539963);
   data_mc_ratio__230->SetBinError(5,0.008722142);
   data_mc_ratio__230->SetBinError(6,0.007295627);
   data_mc_ratio__230->SetBinError(7,0.01033724);
   data_mc_ratio__230->SetBinError(8,0.01050533);
   data_mc_ratio__230->SetBinError(9,0.009303719);
   data_mc_ratio__230->SetBinError(10,0.01349275);
   data_mc_ratio__230->SetBinError(11,0.01201492);
   data_mc_ratio__230->SetBinError(12,0.01624201);
   data_mc_ratio__230->SetBinError(13,0.01674654);
   data_mc_ratio__230->SetBinError(14,0.01525729);
   data_mc_ratio__230->SetBinError(15,0.01667069);
   data_mc_ratio__230->SetBinError(16,0.01680017);
   data_mc_ratio__230->SetBinError(17,0.01787247);
   data_mc_ratio__230->SetBinError(18,0.02147019);
   data_mc_ratio__230->SetBinError(19,0.01868004);
   data_mc_ratio__230->SetBinError(20,0.02690189);
   data_mc_ratio__230->SetBinError(21,0.01965059);
   data_mc_ratio__230->SetBinError(22,0.01146459);
   data_mc_ratio__230->SetBinError(23,0.0215985);
   data_mc_ratio__230->SetBinError(24,0.02049093);
   data_mc_ratio__230->SetBinError(25,0.03227058);
   data_mc_ratio__230->SetBinError(26,0.01716994);
   data_mc_ratio__230->SetBinError(27,0.02354272);
   data_mc_ratio__230->SetBinError(28,0.0218729);
   data_mc_ratio__230->SetBinError(29,0.01891941);
   data_mc_ratio__230->SetBinError(30,0.02887802);
   data_mc_ratio__230->SetBinError(31,0.429864);
   data_mc_ratio__230->SetMinimum(0.4);
   data_mc_ratio__230->SetMaximum(1.6);
   data_mc_ratio__230->SetEntries(54.29204);
   data_mc_ratio__230->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__230->SetLineColor(ci);
   data_mc_ratio__230->SetLineWidth(2);
   data_mc_ratio__230->SetMarkerStyle(20);
   data_mc_ratio__230->SetMarkerSize(1.2);
   data_mc_ratio__230->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__230->GetXaxis()->SetRange(1,30);
   data_mc_ratio__230->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__230->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__230->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__230->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__230->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__230->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__230->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__230->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__230->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__230->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__230->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__230->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__230->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__230->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__230->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__230->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__230->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1230[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1230[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1230[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1230[30] = {
   0,
   0.4200468,
   0.06620773,
   0.1277655,
   0.08253152,
   0.09740958,
   0.09672934,
   0.1135935,
   0.1267804,
   0.1075083,
   0.1390467,
   0.1477662,
   0.126336,
   0.298337,
   0.1797921,
   0.1920511,
   0.1922946,
   0.1882872,
   0.2169466,
   0.1967382,
   0.1741756,
   0.4262534,
   0.2139587,
   0.228009,
   0.19755,
   0.2205502,
   0.2677426,
   0.2217176,
   0.2491797,
   0.2316089};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1230,Graph_from_mc_statistical_error_fy1230,Graph_from_mc_statistical_error_fex1230,Graph_from_mc_statistical_error_fey1230);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1230 = new TH1F("Graph_Graph_from_mc_statistical_error1230","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1230->SetMinimum(0.4884959);
   Graph_Graph_from_mc_statistical_error1230->SetMaximum(1.511504);
   Graph_Graph_from_mc_statistical_error1230->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1230->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1230->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1230);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_algo_18->cd();
   Z_dR_algo_18->Modified();
   Z_dR_algo_18->cd();
   Z_dR_algo_18->SetSelected(Z_dR_algo_18);
}
