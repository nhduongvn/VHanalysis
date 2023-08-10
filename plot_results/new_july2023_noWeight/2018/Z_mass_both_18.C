void Z_mass_both_18()
{
//=========Macro generated from canvas: Z_mass_both_18/Z_mass_both_18
//=========  (Thu Aug 10 12:29:03 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_both_18 = new TCanvas("Z_mass_both_18", "Z_mass_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_both_18->SetHighLightColor(2);
   Z_mass_both_18->Range(0,0,1,1);
   Z_mass_both_18->SetFillColor(0);
   Z_mass_both_18->SetFillStyle(4000);
   Z_mass_both_18->SetBorderMode(0);
   Z_mass_both_18->SetBorderSize(2);
   Z_mass_both_18->SetFrameFillStyle(1000);
   Z_mass_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-32.15314,315.7258,32130.98);
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
   st->SetMaximum(27537.78);
   
   TH1F *st_stack_195 = new TH1F("st_stack_195","",40,0,400);
   st_stack_195->SetMinimum(0.01);
   st_stack_195->SetMaximum(28914.67);
   st_stack_195->SetDirectory(0);
   st_stack_195->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_195->SetLineColor(ci);
   st_stack_195->GetXaxis()->SetRange(1,30);
   st_stack_195->GetXaxis()->SetLabelFont(42);
   st_stack_195->GetXaxis()->SetLabelSize(0.035);
   st_stack_195->GetXaxis()->SetTitleSize(0.035);
   st_stack_195->GetXaxis()->SetTitleFont(42);
   st_stack_195->GetYaxis()->SetTitle("Events/10.0");
   st_stack_195->GetYaxis()->SetLabelFont(42);
   st_stack_195->GetYaxis()->SetLabelSize(0.05);
   st_stack_195->GetYaxis()->SetTitleSize(0.057);
   st_stack_195->GetYaxis()->SetTitleOffset(1.2);
   st_stack_195->GetYaxis()->SetTitleFont(42);
   st_stack_195->GetZaxis()->SetLabelFont(42);
   st_stack_195->GetZaxis()->SetLabelSize(0.035);
   st_stack_195->GetZaxis()->SetTitleSize(0.035);
   st_stack_195->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_195);
   
   
   TH1D *VbbHcc_both_Z_mass_stack_1 = new TH1D("VbbHcc_both_Z_mass_stack_1","",40,0,400);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(3,9.789551);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(4,792.8847);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(5,4656.772);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(6,8646.367);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(7,10239.68);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(8,9245.51);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(9,8095.094);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(10,4828.711);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(11,6513.801);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(12,6161.66);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(13,5377.718);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(14,6310.155);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(15,4048.152);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(16,4518.333);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(17,4147.633);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(18,4813.524);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(19,5814.022);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(20,3582.414);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(21,2474.845);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(22,5475.636);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(23,3610.958);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(24,2523.934);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(25,4130.66);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(26,1653.517);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(27,2076.633);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(28,1916.932);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(29,3267.574);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(30,2108.925);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(31,2985.334);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(32,1767.732);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(33,1221.582);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(34,1349.819);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(35,1680.446);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(36,2039.74);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(37,2653.469);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(38,1107.89);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(39,1835.817);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(40,2199.688);
   VbbHcc_both_Z_mass_stack_1->SetBinContent(41,74061.81);
   VbbHcc_both_Z_mass_stack_1->SetBinError(3,9.789551);
   VbbHcc_both_Z_mass_stack_1->SetBinError(4,384.3935);
   VbbHcc_both_Z_mass_stack_1->SetBinError(5,1008.239);
   VbbHcc_both_Z_mass_stack_1->SetBinError(6,1462.827);
   VbbHcc_both_Z_mass_stack_1->SetBinError(7,2125.377);
   VbbHcc_both_Z_mass_stack_1->SetBinError(8,1283.283);
   VbbHcc_both_Z_mass_stack_1->SetBinError(9,1109.292);
   VbbHcc_both_Z_mass_stack_1->SetBinError(10,791.8);
   VbbHcc_both_Z_mass_stack_1->SetBinError(11,1088.402);
   VbbHcc_both_Z_mass_stack_1->SetBinError(12,1804.118);
   VbbHcc_both_Z_mass_stack_1->SetBinError(13,945.6627);
   VbbHcc_both_Z_mass_stack_1->SetBinError(14,1142.981);
   VbbHcc_both_Z_mass_stack_1->SetBinError(15,779.9811);
   VbbHcc_both_Z_mass_stack_1->SetBinError(16,866.3863);
   VbbHcc_both_Z_mass_stack_1->SetBinError(17,783.9684);
   VbbHcc_both_Z_mass_stack_1->SetBinError(18,1007.348);
   VbbHcc_both_Z_mass_stack_1->SetBinError(19,1905.315);
   VbbHcc_both_Z_mass_stack_1->SetBinError(20,773.1643);
   VbbHcc_both_Z_mass_stack_1->SetBinError(21,561.7788);
   VbbHcc_both_Z_mass_stack_1->SetBinError(22,1134.607);
   VbbHcc_both_Z_mass_stack_1->SetBinError(23,853.5002);
   VbbHcc_both_Z_mass_stack_1->SetBinError(24,666.9799);
   VbbHcc_both_Z_mass_stack_1->SetBinError(25,998.4463);
   VbbHcc_both_Z_mass_stack_1->SetBinError(26,408.6152);
   VbbHcc_both_Z_mass_stack_1->SetBinError(27,554.7297);
   VbbHcc_both_Z_mass_stack_1->SetBinError(28,420.4608);
   VbbHcc_both_Z_mass_stack_1->SetBinError(29,920.3909);
   VbbHcc_both_Z_mass_stack_1->SetBinError(30,556.3053);
   VbbHcc_both_Z_mass_stack_1->SetBinError(31,844.7309);
   VbbHcc_both_Z_mass_stack_1->SetBinError(32,412.6428);
   VbbHcc_both_Z_mass_stack_1->SetBinError(33,176.3549);
   VbbHcc_both_Z_mass_stack_1->SetBinError(34,400.7943);
   VbbHcc_both_Z_mass_stack_1->SetBinError(35,543.637);
   VbbHcc_both_Z_mass_stack_1->SetBinError(36,553.8598);
   VbbHcc_both_Z_mass_stack_1->SetBinError(37,760.391);
   VbbHcc_both_Z_mass_stack_1->SetBinError(38,165.3934);
   VbbHcc_both_Z_mass_stack_1->SetBinError(39,547.5293);
   VbbHcc_both_Z_mass_stack_1->SetBinError(40,662.8433);
   VbbHcc_both_Z_mass_stack_1->SetBinError(41,3888.841);
   VbbHcc_both_Z_mass_stack_1->SetEntries(10726);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_1->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_1,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_2 = new TH1D("VbbHcc_both_Z_mass_stack_2","",40,0,400);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(4,3.259466);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(5,12.84071);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(6,20.29631);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(7,29.02818);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(8,36.31879);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(9,40.84494);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(10,43.65031);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(11,41.17844);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(12,39.58493);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(13,43.06957);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(14,42.19944);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(15,39.82077);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(16,36.00622);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(17,33.55628);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(18,33.38086);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(19,29.54612);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(20,25.80166);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(21,27.49798);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(22,25.01082);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(23,25.74514);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(24,19.54066);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(25,20.58327);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(26,21.89925);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(27,15.35287);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(28,16.53954);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(29,18.12983);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(30,16.30603);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(31,19.38869);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(32,14.14273);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(33,16.83977);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(34,14.93726);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(35,14.55812);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(36,10.51799);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(37,12.5262);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(38,10.08148);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(39,12.15127);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(40,13.85184);
   VbbHcc_both_Z_mass_stack_2->SetBinContent(41,490.7405);
   VbbHcc_both_Z_mass_stack_2->SetBinError(4,0.7018021);
   VbbHcc_both_Z_mass_stack_2->SetBinError(5,1.478383);
   VbbHcc_both_Z_mass_stack_2->SetBinError(6,1.804457);
   VbbHcc_both_Z_mass_stack_2->SetBinError(7,2.146924);
   VbbHcc_both_Z_mass_stack_2->SetBinError(8,2.520309);
   VbbHcc_both_Z_mass_stack_2->SetBinError(9,2.624133);
   VbbHcc_both_Z_mass_stack_2->SetBinError(10,2.736143);
   VbbHcc_both_Z_mass_stack_2->SetBinError(11,2.628764);
   VbbHcc_both_Z_mass_stack_2->SetBinError(12,2.553623);
   VbbHcc_both_Z_mass_stack_2->SetBinError(13,2.733857);
   VbbHcc_both_Z_mass_stack_2->SetBinError(14,2.715869);
   VbbHcc_both_Z_mass_stack_2->SetBinError(15,2.629715);
   VbbHcc_both_Z_mass_stack_2->SetBinError(16,2.45554);
   VbbHcc_both_Z_mass_stack_2->SetBinError(17,2.388817);
   VbbHcc_both_Z_mass_stack_2->SetBinError(18,2.42134);
   VbbHcc_both_Z_mass_stack_2->SetBinError(19,2.271125);
   VbbHcc_both_Z_mass_stack_2->SetBinError(20,2.098524);
   VbbHcc_both_Z_mass_stack_2->SetBinError(21,2.210183);
   VbbHcc_both_Z_mass_stack_2->SetBinError(22,2.085864);
   VbbHcc_both_Z_mass_stack_2->SetBinError(23,2.113198);
   VbbHcc_both_Z_mass_stack_2->SetBinError(24,1.731462);
   VbbHcc_both_Z_mass_stack_2->SetBinError(25,1.834675);
   VbbHcc_both_Z_mass_stack_2->SetBinError(26,1.937949);
   VbbHcc_both_Z_mass_stack_2->SetBinError(27,1.636248);
   VbbHcc_both_Z_mass_stack_2->SetBinError(28,1.63435);
   VbbHcc_both_Z_mass_stack_2->SetBinError(29,1.759121);
   VbbHcc_both_Z_mass_stack_2->SetBinError(30,1.65597);
   VbbHcc_both_Z_mass_stack_2->SetBinError(31,1.930483);
   VbbHcc_both_Z_mass_stack_2->SetBinError(32,1.566547);
   VbbHcc_both_Z_mass_stack_2->SetBinError(33,1.752145);
   VbbHcc_both_Z_mass_stack_2->SetBinError(34,1.603043);
   VbbHcc_both_Z_mass_stack_2->SetBinError(35,1.58107);
   VbbHcc_both_Z_mass_stack_2->SetBinError(36,1.225228);
   VbbHcc_both_Z_mass_stack_2->SetBinError(37,1.450548);
   VbbHcc_both_Z_mass_stack_2->SetBinError(38,1.253688);
   VbbHcc_both_Z_mass_stack_2->SetBinError(39,1.436336);
   VbbHcc_both_Z_mass_stack_2->SetBinError(40,1.632703);
   VbbHcc_both_Z_mass_stack_2->SetBinError(41,9.136735);
   VbbHcc_both_Z_mass_stack_2->SetEntries(15898);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_mass_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_2->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_2,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_3 = new TH1D("VbbHcc_both_Z_mass_stack_3","",40,0,400);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(2,0.07462545);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(3,2.436155);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(4,63.92604);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(5,225.2621);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(6,408.4928);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(7,558.1051);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(8,704.3377);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(9,823.684);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(10,908.8027);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(11,927.9649);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(12,966.9182);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(13,959.9278);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(14,912.3214);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(15,841.6774);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(16,772.9994);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(17,709.2793);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(18,655.3685);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(19,607.2007);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(20,537.1383);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(21,507.6438);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(22,470.4739);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(23,449.0676);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(24,409.5326);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(25,399.8213);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(26,392.2729);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(27,354.855);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(28,349.0343);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(29,336.9825);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(30,327.3731);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(31,320.6769);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(32,298.8072);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(33,289.9839);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(34,276.1231);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(35,272.6603);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(36,259.2712);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(37,252.7252);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(38,249.8541);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(39,239.2132);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(40,232.1326);
   VbbHcc_both_Z_mass_stack_3->SetBinContent(41,9073.743);
   VbbHcc_both_Z_mass_stack_3->SetBinError(2,0.05276816);
   VbbHcc_both_Z_mass_stack_3->SetBinError(3,0.3869798);
   VbbHcc_both_Z_mass_stack_3->SetBinError(4,1.96835);
   VbbHcc_both_Z_mass_stack_3->SetBinError(5,3.698646);
   VbbHcc_both_Z_mass_stack_3->SetBinError(6,5.000226);
   VbbHcc_both_Z_mass_stack_3->SetBinError(7,5.853754);
   VbbHcc_both_Z_mass_stack_3->SetBinError(8,6.583034);
   VbbHcc_both_Z_mass_stack_3->SetBinError(9,7.145871);
   VbbHcc_both_Z_mass_stack_3->SetBinError(10,7.521117);
   VbbHcc_both_Z_mass_stack_3->SetBinError(11,7.613321);
   VbbHcc_both_Z_mass_stack_3->SetBinError(12,7.761973);
   VbbHcc_both_Z_mass_stack_3->SetBinError(13,7.744671);
   VbbHcc_both_Z_mass_stack_3->SetBinError(14,7.547371);
   VbbHcc_both_Z_mass_stack_3->SetBinError(15,7.242016);
   VbbHcc_both_Z_mass_stack_3->SetBinError(16,6.921965);
   VbbHcc_both_Z_mass_stack_3->SetBinError(17,6.631841);
   VbbHcc_both_Z_mass_stack_3->SetBinError(18,6.364708);
   VbbHcc_both_Z_mass_stack_3->SetBinError(19,6.124534);
   VbbHcc_both_Z_mass_stack_3->SetBinError(20,5.754607);
   VbbHcc_both_Z_mass_stack_3->SetBinError(21,5.58425);
   VbbHcc_both_Z_mass_stack_3->SetBinError(22,5.374969);
   VbbHcc_both_Z_mass_stack_3->SetBinError(23,5.255765);
   VbbHcc_both_Z_mass_stack_3->SetBinError(24,5.023867);
   VbbHcc_both_Z_mass_stack_3->SetBinError(25,4.951822);
   VbbHcc_both_Z_mass_stack_3->SetBinError(26,4.908042);
   VbbHcc_both_Z_mass_stack_3->SetBinError(27,4.668603);
   VbbHcc_both_Z_mass_stack_3->SetBinError(28,4.635044);
   VbbHcc_both_Z_mass_stack_3->SetBinError(29,4.553489);
   VbbHcc_both_Z_mass_stack_3->SetBinError(30,4.488634);
   VbbHcc_both_Z_mass_stack_3->SetBinError(31,4.436625);
   VbbHcc_both_Z_mass_stack_3->SetBinError(32,4.286387);
   VbbHcc_both_Z_mass_stack_3->SetBinError(33,4.231203);
   VbbHcc_both_Z_mass_stack_3->SetBinError(34,4.114995);
   VbbHcc_both_Z_mass_stack_3->SetBinError(35,4.106546);
   VbbHcc_both_Z_mass_stack_3->SetBinError(36,3.997548);
   VbbHcc_both_Z_mass_stack_3->SetBinError(37,3.952827);
   VbbHcc_both_Z_mass_stack_3->SetBinError(38,3.928429);
   VbbHcc_both_Z_mass_stack_3->SetBinError(39,3.842747);
   VbbHcc_both_Z_mass_stack_3->SetBinError(40,3.781447);
   VbbHcc_both_Z_mass_stack_3->SetBinError(41,23.67795);
   VbbHcc_both_Z_mass_stack_3->SetEntries(458232);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_mass_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_3->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_3,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_4 = new TH1D("VbbHcc_both_Z_mass_stack_4","",40,0,400);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(3,0.6152722);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(4,6.985879);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(5,27.72003);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(6,40.61921);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(7,77.31393);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(8,122.7105);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(9,187.546);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(10,260.5553);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(11,176.8347);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(12,114.3726);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(13,74.78729);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(14,83.43891);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(15,61.59776);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(16,58.92498);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(17,58.17077);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(18,59.9638);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(19,53.94512);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(20,49.28647);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(21,42.66958);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(22,44.74712);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(23,43.75419);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(24,41.69786);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(25,38.1523);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(26,48.49256);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(27,45.64206);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(28,39.58291);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(29,31.9598);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(30,30.73544);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(31,30.81604);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(32,39.82581);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(33,29.47945);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(34,32.81355);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(35,32.33768);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(36,27.22967);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(37,32.9385);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(38,36.26747);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(39,23.93589);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(40,27.3824);
   VbbHcc_both_Z_mass_stack_4->SetBinContent(41,1144.731);
   VbbHcc_both_Z_mass_stack_4->SetBinError(3,0.5053954);
   VbbHcc_both_Z_mass_stack_4->SetBinError(4,1.622151);
   VbbHcc_both_Z_mass_stack_4->SetBinError(5,4.932957);
   VbbHcc_both_Z_mass_stack_4->SetBinError(6,3.634461);
   VbbHcc_both_Z_mass_stack_4->SetBinError(7,7.330112);
   VbbHcc_both_Z_mass_stack_4->SetBinError(8,7.262237);
   VbbHcc_both_Z_mass_stack_4->SetBinError(9,9.904628);
   VbbHcc_both_Z_mass_stack_4->SetBinError(10,10.17046);
   VbbHcc_both_Z_mass_stack_4->SetBinError(11,8.993127);
   VbbHcc_both_Z_mass_stack_4->SetBinError(12,7.992087);
   VbbHcc_both_Z_mass_stack_4->SetBinError(13,4.641427);
   VbbHcc_both_Z_mass_stack_4->SetBinError(14,7.346821);
   VbbHcc_both_Z_mass_stack_4->SetBinError(15,4.120333);
   VbbHcc_both_Z_mass_stack_4->SetBinError(16,5.588909);
   VbbHcc_both_Z_mass_stack_4->SetBinError(17,5.598542);
   VbbHcc_both_Z_mass_stack_4->SetBinError(18,5.649701);
   VbbHcc_both_Z_mass_stack_4->SetBinError(19,5.319311);
   VbbHcc_both_Z_mass_stack_4->SetBinError(20,5.427897);
   VbbHcc_both_Z_mass_stack_4->SetBinError(21,3.531207);
   VbbHcc_both_Z_mass_stack_4->SetBinError(22,5.255791);
   VbbHcc_both_Z_mass_stack_4->SetBinError(23,5.134752);
   VbbHcc_both_Z_mass_stack_4->SetBinError(24,5.171621);
   VbbHcc_both_Z_mass_stack_4->SetBinError(25,3.328005);
   VbbHcc_both_Z_mass_stack_4->SetBinError(26,6.726547);
   VbbHcc_both_Z_mass_stack_4->SetBinError(27,6.649028);
   VbbHcc_both_Z_mass_stack_4->SetBinError(28,5.081617);
   VbbHcc_both_Z_mass_stack_4->SetBinError(29,2.950191);
   VbbHcc_both_Z_mass_stack_4->SetBinError(30,4.826483);
   VbbHcc_both_Z_mass_stack_4->SetBinError(31,3.090035);
   VbbHcc_both_Z_mass_stack_4->SetBinError(32,6.498597);
   VbbHcc_both_Z_mass_stack_4->SetBinError(33,2.907427);
   VbbHcc_both_Z_mass_stack_4->SetBinError(34,4.986387);
   VbbHcc_both_Z_mass_stack_4->SetBinError(35,4.944505);
   VbbHcc_both_Z_mass_stack_4->SetBinError(36,2.728121);
   VbbHcc_both_Z_mass_stack_4->SetBinError(37,3.2691);
   VbbHcc_both_Z_mass_stack_4->SetBinError(38,6.397726);
   VbbHcc_both_Z_mass_stack_4->SetBinError(39,2.558614);
   VbbHcc_both_Z_mass_stack_4->SetBinError(40,2.934279);
   VbbHcc_both_Z_mass_stack_4->SetBinError(41,21.59802);
   VbbHcc_both_Z_mass_stack_4->SetEntries(19394);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_mass_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_4->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_4,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_5 = new TH1D("VbbHcc_both_Z_mass_stack_5","",40,0,400);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(4,1.692935);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(5,9.024264);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(6,15.70076);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(7,18.37065);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(8,10.69522);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(9,15.3405);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(10,8.900098);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(11,8.898616);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(12,13.3016);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(13,6.55583);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(14,8.558903);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(15,4.502723);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(16,5.687039);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(17,7.400324);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(18,7.342543);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(19,6.822892);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(20,6.48971);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(21,5.293087);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(22,6.640522);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(23,4.126017);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(24,5.677267);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(25,4.888825);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(26,9.555565);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(27,2.9783);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(28,6.490036);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(29,5.633566);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(30,2.957664);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(31,1.412104);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(32,4.949059);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(33,4.211487);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(34,1.865762);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(35,3.816127);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(36,1.520279);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(37,3.343596);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(38,1.565467);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(39,3.057115);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(40,3.753493);
   VbbHcc_both_Z_mass_stack_5->SetBinContent(41,107.2431);
   VbbHcc_both_Z_mass_stack_5->SetBinError(4,0.6939959);
   VbbHcc_both_Z_mass_stack_5->SetBinError(5,3.155809);
   VbbHcc_both_Z_mass_stack_5->SetBinError(6,4.358456);
   VbbHcc_both_Z_mass_stack_5->SetBinError(7,10.57646);
   VbbHcc_both_Z_mass_stack_5->SetBinError(8,3.138602);
   VbbHcc_both_Z_mass_stack_5->SetBinError(9,3.33327);
   VbbHcc_both_Z_mass_stack_5->SetBinError(10,1.280477);
   VbbHcc_both_Z_mass_stack_5->SetBinError(11,2.282819);
   VbbHcc_both_Z_mass_stack_5->SetBinError(12,4.259589);
   VbbHcc_both_Z_mass_stack_5->SetBinError(13,1.092858);
   VbbHcc_both_Z_mass_stack_5->SetBinError(14,2.33052);
   VbbHcc_both_Z_mass_stack_5->SetBinError(15,0.907254);
   VbbHcc_both_Z_mass_stack_5->SetBinError(16,1.001068);
   VbbHcc_both_Z_mass_stack_5->SetBinError(17,2.316999);
   VbbHcc_both_Z_mass_stack_5->SetBinError(18,2.298277);
   VbbHcc_both_Z_mass_stack_5->SetBinError(19,2.267094);
   VbbHcc_both_Z_mass_stack_5->SetBinError(20,2.306609);
   VbbHcc_both_Z_mass_stack_5->SetBinError(21,2.210422);
   VbbHcc_both_Z_mass_stack_5->SetBinError(22,2.280374);
   VbbHcc_both_Z_mass_stack_5->SetBinError(23,0.9049252);
   VbbHcc_both_Z_mass_stack_5->SetBinError(24,1.803585);
   VbbHcc_both_Z_mass_stack_5->SetBinError(25,2.203564);
   VbbHcc_both_Z_mass_stack_5->SetBinError(26,3.14273);
   VbbHcc_both_Z_mass_stack_5->SetBinError(27,0.7913243);
   VbbHcc_both_Z_mass_stack_5->SetBinError(28,3.001789);
   VbbHcc_both_Z_mass_stack_5->SetBinError(29,2.264694);
   VbbHcc_both_Z_mass_stack_5->SetBinError(30,0.7358946);
   VbbHcc_both_Z_mass_stack_5->SetBinError(31,0.3994836);
   VbbHcc_both_Z_mass_stack_5->SetBinError(32,2.190209);
   VbbHcc_both_Z_mass_stack_5->SetBinError(33,2.204746);
   VbbHcc_both_Z_mass_stack_5->SetBinError(34,0.622649);
   VbbHcc_both_Z_mass_stack_5->SetBinError(35,2.131895);
   VbbHcc_both_Z_mass_stack_5->SetBinError(36,0.4155078);
   VbbHcc_both_Z_mass_stack_5->SetBinError(37,2.124127);
   VbbHcc_both_Z_mass_stack_5->SetBinError(38,0.4979213);
   VbbHcc_both_Z_mass_stack_5->SetBinError(39,0.8969321);
   VbbHcc_both_Z_mass_stack_5->SetBinError(40,2.161314);
   VbbHcc_both_Z_mass_stack_5->SetBinError(41,7.166775);
   VbbHcc_both_Z_mass_stack_5->SetEntries(2575);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_mass_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_5->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_5,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_6 = new TH1D("VbbHcc_both_Z_mass_stack_6","",40,0,400);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(7,0.4520427);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(8,0.4520427);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(14,0.4520427);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(23,0.4520427);
   VbbHcc_both_Z_mass_stack_6->SetBinContent(28,0.4520427);
   VbbHcc_both_Z_mass_stack_6->SetBinError(7,0.4520427);
   VbbHcc_both_Z_mass_stack_6->SetBinError(8,0.4520427);
   VbbHcc_both_Z_mass_stack_6->SetBinError(14,0.4520427);
   VbbHcc_both_Z_mass_stack_6->SetBinError(23,0.4520427);
   VbbHcc_both_Z_mass_stack_6->SetBinError(28,0.4520427);
   VbbHcc_both_Z_mass_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_mass_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_6->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_6,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_7 = new TH1D("VbbHcc_both_Z_mass_stack_7","",40,0,400);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(6,0.3541991);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(7,0.3541991);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(8,1.062597);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(9,1.770996);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(10,2.125195);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(11,0.7083982);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(12,0.3541991);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(13,0.3541991);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(15,0.7083982);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(16,0.3541991);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(22,0.3541991);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(34,0.3541991);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(35,0.3541991);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(38,0.3541991);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(41,2.125195);
   VbbHcc_both_Z_mass_stack_7->SetBinError(6,0.3541991);
   VbbHcc_both_Z_mass_stack_7->SetBinError(7,0.3541991);
   VbbHcc_both_Z_mass_stack_7->SetBinError(8,0.6134909);
   VbbHcc_both_Z_mass_stack_7->SetBinError(9,0.7920133);
   VbbHcc_both_Z_mass_stack_7->SetBinError(10,0.8676071);
   VbbHcc_both_Z_mass_stack_7->SetBinError(11,0.5009132);
   VbbHcc_both_Z_mass_stack_7->SetBinError(12,0.3541991);
   VbbHcc_both_Z_mass_stack_7->SetBinError(13,0.3541991);
   VbbHcc_both_Z_mass_stack_7->SetBinError(15,0.5009132);
   VbbHcc_both_Z_mass_stack_7->SetBinError(16,0.3541991);
   VbbHcc_both_Z_mass_stack_7->SetBinError(22,0.3541991);
   VbbHcc_both_Z_mass_stack_7->SetBinError(34,0.3541991);
   VbbHcc_both_Z_mass_stack_7->SetBinError(35,0.3541991);
   VbbHcc_both_Z_mass_stack_7->SetBinError(38,0.3541991);
   VbbHcc_both_Z_mass_stack_7->SetBinError(41,0.8676071);
   VbbHcc_both_Z_mass_stack_7->SetEntries(33);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_mass_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_7,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_8 = new TH1D("VbbHcc_both_Z_mass_stack_8","",40,0,400);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(5,0.2794144);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(6,0.5588287);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(7,1.117657);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(8,2.514729);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(9,5.867701);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(10,7.264773);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(11,5.867701);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(12,1.117657);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(13,0.2794144);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(14,1.397072);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(15,0.8382431);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(16,1.9559);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(17,0.8382431);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(18,0.2794144);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(19,0.2794144);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(20,0.8382431);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(22,0.2794144);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(23,0.8382431);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(24,0.2794144);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(25,0.8382431);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(26,0.5588287);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(27,0.5588287);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(28,0.8382431);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(29,0.8382431);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(30,1.676486);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(31,0.8382431);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(32,0.5588287);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(33,0.2794144);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(34,0.5588287);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(37,0.5588287);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(38,0.8382431);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(39,0.2794144);
   VbbHcc_both_Z_mass_stack_8->SetBinContent(41,22.91198);
   VbbHcc_both_Z_mass_stack_8->SetBinError(5,0.2794144);
   VbbHcc_both_Z_mass_stack_8->SetBinError(6,0.3951516);
   VbbHcc_both_Z_mass_stack_8->SetBinError(7,0.5588287);
   VbbHcc_both_Z_mass_stack_8->SetBinError(8,0.8382431);
   VbbHcc_both_Z_mass_stack_8->SetBinError(9,1.280437);
   VbbHcc_both_Z_mass_stack_8->SetBinError(10,1.424739);
   VbbHcc_both_Z_mass_stack_8->SetBinError(11,1.280437);
   VbbHcc_both_Z_mass_stack_8->SetBinError(12,0.5588287);
   VbbHcc_both_Z_mass_stack_8->SetBinError(13,0.2794144);
   VbbHcc_both_Z_mass_stack_8->SetBinError(14,0.6247895);
   VbbHcc_both_Z_mass_stack_8->SetBinError(15,0.4839599);
   VbbHcc_both_Z_mass_stack_8->SetBinError(16,0.7392609);
   VbbHcc_both_Z_mass_stack_8->SetBinError(17,0.4839599);
   VbbHcc_both_Z_mass_stack_8->SetBinError(18,0.2794144);
   VbbHcc_both_Z_mass_stack_8->SetBinError(19,0.2794144);
   VbbHcc_both_Z_mass_stack_8->SetBinError(20,0.4839599);
   VbbHcc_both_Z_mass_stack_8->SetBinError(22,0.2794144);
   VbbHcc_both_Z_mass_stack_8->SetBinError(23,0.4839599);
   VbbHcc_both_Z_mass_stack_8->SetBinError(24,0.2794144);
   VbbHcc_both_Z_mass_stack_8->SetBinError(25,0.4839599);
   VbbHcc_both_Z_mass_stack_8->SetBinError(26,0.3951516);
   VbbHcc_both_Z_mass_stack_8->SetBinError(27,0.3951516);
   VbbHcc_both_Z_mass_stack_8->SetBinError(28,0.4839599);
   VbbHcc_both_Z_mass_stack_8->SetBinError(29,0.4839599);
   VbbHcc_both_Z_mass_stack_8->SetBinError(30,0.6844226);
   VbbHcc_both_Z_mass_stack_8->SetBinError(31,0.4839599);
   VbbHcc_both_Z_mass_stack_8->SetBinError(32,0.3951516);
   VbbHcc_both_Z_mass_stack_8->SetBinError(33,0.2794144);
   VbbHcc_both_Z_mass_stack_8->SetBinError(34,0.3951516);
   VbbHcc_both_Z_mass_stack_8->SetBinError(37,0.3951516);
   VbbHcc_both_Z_mass_stack_8->SetBinError(38,0.4839599);
   VbbHcc_both_Z_mass_stack_8->SetBinError(39,0.2794144);
   VbbHcc_both_Z_mass_stack_8->SetBinError(41,2.530205);
   VbbHcc_both_Z_mass_stack_8->SetEntries(232);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_mass_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_8->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_8,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_9 = new TH1D("VbbHcc_both_Z_mass_stack_9","",40,0,400);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(3,0.002285779);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(4,0.04800135);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(5,0.1691476);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(6,0.3885824);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(7,0.7588785);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(8,1.821766);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(9,4.203547);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(10,5.5773);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(11,4.12583);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(12,3.408096);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(13,3.563529);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(14,2.795507);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(15,1.540615);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(16,0.918883);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(17,0.6697331);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(18,0.5714447);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(19,0.5257291);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(20,0.5120144);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(21,0.4777277);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(22,0.4777277);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(23,0.4708704);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(24,0.5074429);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(25,0.5120144);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(26,0.4571557);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(27,0.4800135);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(28,0.5143002);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(29,0.4937282);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(30,0.4982997);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(31,0.5120144);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(32,0.5600158);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(33,0.4297264);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(34,0.5623015);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(35,0.5737304);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(36,0.5257291);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(37,0.496014);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(38,0.4822993);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(39,0.5303006);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(40,0.4982997);
   VbbHcc_both_Z_mass_stack_9->SetBinContent(41,21.68747);
   VbbHcc_both_Z_mass_stack_9->SetBinError(3,0.002285779);
   VbbHcc_both_Z_mass_stack_9->SetBinError(4,0.01047475);
   VbbHcc_both_Z_mass_stack_9->SetBinError(5,0.01966301);
   VbbHcc_both_Z_mass_stack_9->SetBinError(6,0.02980291);
   VbbHcc_both_Z_mass_stack_9->SetBinError(7,0.04164887);
   VbbHcc_both_Z_mass_stack_9->SetBinError(8,0.06453025);
   VbbHcc_both_Z_mass_stack_9->SetBinError(9,0.09802233);
   VbbHcc_both_Z_mass_stack_9->SetBinError(10,0.1129091);
   VbbHcc_both_Z_mass_stack_9->SetBinError(11,0.09711197);
   VbbHcc_both_Z_mass_stack_9->SetBinError(12,0.08826184);
   VbbHcc_both_Z_mass_stack_9->SetBinError(13,0.09025208);
   VbbHcc_both_Z_mass_stack_9->SetBinError(14,0.07993692);
   VbbHcc_both_Z_mass_stack_9->SetBinError(15,0.05934227);
   VbbHcc_both_Z_mass_stack_9->SetBinError(16,0.04582972);
   VbbHcc_both_Z_mass_stack_9->SetBinError(17,0.03912623);
   VbbHcc_both_Z_mass_stack_9->SetBinError(18,0.03614133);
   VbbHcc_both_Z_mass_stack_9->SetBinError(19,0.03466555);
   VbbHcc_both_Z_mass_stack_9->SetBinError(20,0.0342104);
   VbbHcc_both_Z_mass_stack_9->SetBinError(21,0.03304512);
   VbbHcc_both_Z_mass_stack_9->SetBinError(22,0.03304512);
   VbbHcc_both_Z_mass_stack_9->SetBinError(23,0.0328071);
   VbbHcc_both_Z_mass_stack_9->SetBinError(24,0.03405733);
   VbbHcc_both_Z_mass_stack_9->SetBinError(25,0.0342104);
   VbbHcc_both_Z_mass_stack_9->SetBinError(26,0.03232579);
   VbbHcc_both_Z_mass_stack_9->SetBinError(27,0.03312408);
   VbbHcc_both_Z_mass_stack_9->SetBinError(28,0.03428668);
   VbbHcc_both_Z_mass_stack_9->SetBinError(29,0.03359395);
   VbbHcc_both_Z_mass_stack_9->SetBinError(30,0.03374912);
   VbbHcc_both_Z_mass_stack_9->SetBinError(31,0.0342104);
   VbbHcc_both_Z_mass_stack_9->SetBinError(32,0.0357781);
   VbbHcc_both_Z_mass_stack_9->SetBinError(33,0.03134102);
   VbbHcc_both_Z_mass_stack_9->SetBinError(34,0.03585104);
   VbbHcc_both_Z_mass_stack_9->SetBinError(35,0.03621354);
   VbbHcc_both_Z_mass_stack_9->SetBinError(36,0.03466555);
   VbbHcc_both_Z_mass_stack_9->SetBinError(37,0.03367162);
   VbbHcc_both_Z_mass_stack_9->SetBinError(38,0.03320285);
   VbbHcc_both_Z_mass_stack_9->SetBinError(39,0.03481594);
   VbbHcc_both_Z_mass_stack_9->SetBinError(40,0.03374912);
   VbbHcc_both_Z_mass_stack_9->SetBinError(41,0.2226494);
   VbbHcc_both_Z_mass_stack_9->SetEntries(27714);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_mass_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_9->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_9,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_10 = new TH1D("VbbHcc_both_Z_mass_stack_10","",40,0,400);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(3,0.0005961446);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(4,0.01848048);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(5,0.08047953);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(6,0.1919586);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(7,0.4322049);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(8,1.053388);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(9,2.075776);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(10,2.493077);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(11,1.898721);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(12,1.678743);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(13,1.533284);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(14,1.201231);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(15,0.8340064);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(16,0.5567991);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(17,0.4959923);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(18,0.3940516);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(19,0.4310126);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(20,0.3684174);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(21,0.3398024);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(22,0.3600714);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(23,0.3457639);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(24,0.3082068);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(25,0.3332449);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(26,0.3308603);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(27,0.301053);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(28,0.2956877);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(29,0.2986685);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(30,0.2933032);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(31,0.2849571);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(32,0.2706497);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(33,0.2778034);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(34,0.2533615);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(35,0.2599191);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(36,0.2503807);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(37,0.2509769);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(38,0.2366694);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(39,0.2241504);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(40,0.234881);
   VbbHcc_both_Z_mass_stack_10->SetBinContent(41,8.437831);
   VbbHcc_both_Z_mass_stack_10->SetBinError(3,0.0005961446);
   VbbHcc_both_Z_mass_stack_10->SetBinError(4,0.003319193);
   VbbHcc_both_Z_mass_stack_10->SetBinError(5,0.006926575);
   VbbHcc_both_Z_mass_stack_10->SetBinError(6,0.01069743);
   VbbHcc_both_Z_mass_stack_10->SetBinError(7,0.01605169);
   VbbHcc_both_Z_mass_stack_10->SetBinError(8,0.02505936);
   VbbHcc_both_Z_mass_stack_10->SetBinError(9,0.03517759);
   VbbHcc_both_Z_mass_stack_10->SetBinError(10,0.03855171);
   VbbHcc_both_Z_mass_stack_10->SetBinError(11,0.0336439);
   VbbHcc_both_Z_mass_stack_10->SetBinError(12,0.03163501);
   VbbHcc_both_Z_mass_stack_10->SetBinError(13,0.03023341);
   VbbHcc_both_Z_mass_stack_10->SetBinError(14,0.02676019);
   VbbHcc_both_Z_mass_stack_10->SetBinError(15,0.02229772);
   VbbHcc_both_Z_mass_stack_10->SetBinError(16,0.01821902);
   VbbHcc_both_Z_mass_stack_10->SetBinError(17,0.01719544);
   VbbHcc_both_Z_mass_stack_10->SetBinError(18,0.01532683);
   VbbHcc_both_Z_mass_stack_10->SetBinError(19,0.01602953);
   VbbHcc_both_Z_mass_stack_10->SetBinError(20,0.01481992);
   VbbHcc_both_Z_mass_stack_10->SetBinError(21,0.01423276);
   VbbHcc_both_Z_mass_stack_10->SetBinError(22,0.0146511);
   VbbHcc_both_Z_mass_stack_10->SetBinError(23,0.01435706);
   VbbHcc_both_Z_mass_stack_10->SetBinError(24,0.01355492);
   VbbHcc_both_Z_mass_stack_10->SetBinError(25,0.01409476);
   VbbHcc_both_Z_mass_stack_10->SetBinError(26,0.01404424);
   VbbHcc_both_Z_mass_stack_10->SetBinError(27,0.01339668);
   VbbHcc_both_Z_mass_stack_10->SetBinError(28,0.01327677);
   VbbHcc_both_Z_mass_stack_10->SetBinError(29,0.01334352);
   VbbHcc_both_Z_mass_stack_10->SetBinError(30,0.01322313);
   VbbHcc_both_Z_mass_stack_10->SetBinError(31,0.01303364);
   VbbHcc_both_Z_mass_stack_10->SetBinError(32,0.01270222);
   VbbHcc_both_Z_mass_stack_10->SetBinError(33,0.01286899);
   VbbHcc_both_Z_mass_stack_10->SetBinError(34,0.01228984);
   VbbHcc_both_Z_mass_stack_10->SetBinError(35,0.01244787);
   VbbHcc_both_Z_mass_stack_10->SetBinError(36,0.01221733);
   VbbHcc_both_Z_mass_stack_10->SetBinError(37,0.01223187);
   VbbHcc_both_Z_mass_stack_10->SetBinError(38,0.0118781);
   VbbHcc_both_Z_mass_stack_10->SetBinError(39,0.01155967);
   VbbHcc_both_Z_mass_stack_10->SetBinError(40,0.01183313);
   VbbHcc_both_Z_mass_stack_10->SetBinError(41,0.07092368);
   VbbHcc_both_Z_mass_stack_10->SetEntries(50200);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_mass_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_10->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_10,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_11 = new TH1D("VbbHcc_both_Z_mass_stack_11","",40,0,400);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(4,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(5,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(6,0.004551524);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(8,0.004551524);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(9,0.03641219);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(10,0.04096371);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(11,0.02503338);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(12,0.009103048);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(13,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(14,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(15,0.004551524);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(16,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(18,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(21,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(22,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(23,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(27,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(28,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(30,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(31,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(32,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(35,0.004551524);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(37,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(41,0.02730914);
   VbbHcc_both_Z_mass_stack_11->SetBinError(4,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinError(5,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinError(6,0.003218413);
   VbbHcc_both_Z_mass_stack_11->SetBinError(8,0.003218413);
   VbbHcc_both_Z_mass_stack_11->SetBinError(9,0.009103048);
   VbbHcc_both_Z_mass_stack_11->SetBinError(10,0.00965524);
   VbbHcc_both_Z_mass_stack_11->SetBinError(11,0.007547848);
   VbbHcc_both_Z_mass_stack_11->SetBinError(12,0.004551524);
   VbbHcc_both_Z_mass_stack_11->SetBinError(13,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinError(14,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinError(15,0.003218413);
   VbbHcc_both_Z_mass_stack_11->SetBinError(16,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinError(18,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinError(21,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinError(22,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinError(23,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinError(27,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinError(28,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinError(30,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinError(31,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinError(32,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinError(35,0.003218413);
   VbbHcc_both_Z_mass_stack_11->SetBinError(37,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinError(41,0.00788347);
   VbbHcc_both_Z_mass_stack_11->SetEntries(84);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_mass_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_11,"");
   
   TH1D *VbbHcc_both_Z_mass_stack_12 = new TH1D("VbbHcc_both_Z_mass_stack_12","",40,0,400);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(6,0.0002996568);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(7,0.002996568);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(8,0.005393822);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(9,0.01198627);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(10,0.0152825);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(11,0.01048799);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(12,0.003895538);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(13,0.003595882);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(14,0.002097598);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(15,0.001797941);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(16,0.001498284);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(17,0.0005993136);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(18,0.001198627);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(19,0.001498284);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(20,0.001797941);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(21,0.0005993136);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(22,0.0002996568);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(23,0.0008989704);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(24,0.0002996568);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(25,0.001198627);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(26,0.0008989704);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(27,0.0002996568);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(28,0.0008989704);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(30,0.0008989704);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(32,0.0005993136);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(33,0.0002996568);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(34,0.0002996568);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(35,0.001198627);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(36,0.0002996568);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(37,0.0002996568);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(39,0.0002996568);
   VbbHcc_both_Z_mass_stack_12->SetBinContent(41,0.02487151);
   VbbHcc_both_Z_mass_stack_12->SetBinError(6,0.0002996568);
   VbbHcc_both_Z_mass_stack_12->SetBinError(7,0.000947598);
   VbbHcc_both_Z_mass_stack_12->SetBinError(8,0.001271336);
   VbbHcc_both_Z_mass_stack_12->SetBinError(9,0.001895196);
   VbbHcc_both_Z_mass_stack_12->SetBinError(10,0.002139978);
   VbbHcc_both_Z_mass_stack_12->SetBinError(11,0.001772794);
   VbbHcc_both_Z_mass_stack_12->SetBinError(12,0.001080428);
   VbbHcc_both_Z_mass_stack_12->SetBinError(13,0.001038042);
   VbbHcc_both_Z_mass_stack_12->SetBinError(14,0.0007928174);
   VbbHcc_both_Z_mass_stack_12->SetBinError(15,0.0007340063);
   VbbHcc_both_Z_mass_stack_12->SetBinError(16,0.000670053);
   VbbHcc_both_Z_mass_stack_12->SetBinError(17,0.0004237787);
   VbbHcc_both_Z_mass_stack_12->SetBinError(18,0.0005993136);
   VbbHcc_both_Z_mass_stack_12->SetBinError(19,0.000670053);
   VbbHcc_both_Z_mass_stack_12->SetBinError(20,0.0007340063);
   VbbHcc_both_Z_mass_stack_12->SetBinError(21,0.0004237787);
   VbbHcc_both_Z_mass_stack_12->SetBinError(22,0.0002996568);
   VbbHcc_both_Z_mass_stack_12->SetBinError(23,0.0005190208);
   VbbHcc_both_Z_mass_stack_12->SetBinError(24,0.0002996568);
   VbbHcc_both_Z_mass_stack_12->SetBinError(25,0.0005993136);
   VbbHcc_both_Z_mass_stack_12->SetBinError(26,0.0005190208);
   VbbHcc_both_Z_mass_stack_12->SetBinError(27,0.0002996568);
   VbbHcc_both_Z_mass_stack_12->SetBinError(28,0.0005190208);
   VbbHcc_both_Z_mass_stack_12->SetBinError(30,0.0005190208);
   VbbHcc_both_Z_mass_stack_12->SetBinError(32,0.0004237787);
   VbbHcc_both_Z_mass_stack_12->SetBinError(33,0.0002996568);
   VbbHcc_both_Z_mass_stack_12->SetBinError(34,0.0002996568);
   VbbHcc_both_Z_mass_stack_12->SetBinError(35,0.0005993136);
   VbbHcc_both_Z_mass_stack_12->SetBinError(36,0.0002996568);
   VbbHcc_both_Z_mass_stack_12->SetBinError(37,0.0002996568);
   VbbHcc_both_Z_mass_stack_12->SetBinError(39,0.0002996568);
   VbbHcc_both_Z_mass_stack_12->SetBinError(41,0.002730003);
   VbbHcc_both_Z_mass_stack_12->SetEntries(330);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_mass_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_mass_stack_12->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_mass_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_mass__535 = new TH1D("VbbHcc_both_Z_mass__535","",40,0,400);
   VbbHcc_both_Z_mass__535->SetBinContent(3,42);
   VbbHcc_both_Z_mass__535->SetBinContent(4,1306);
   VbbHcc_both_Z_mass__535->SetBinContent(5,5305);
   VbbHcc_both_Z_mass__535->SetBinContent(6,9482);
   VbbHcc_both_Z_mass__535->SetBinContent(7,11853);
   VbbHcc_both_Z_mass__535->SetBinContent(15,8097);
   VbbHcc_both_Z_mass__535->SetBinContent(16,7548);
   VbbHcc_both_Z_mass__535->SetBinContent(17,7133);
   VbbHcc_both_Z_mass__535->SetBinContent(18,6673);
   VbbHcc_both_Z_mass__535->SetBinContent(19,6235);
   VbbHcc_both_Z_mass__535->SetBinContent(20,5654);
   VbbHcc_both_Z_mass__535->SetBinContent(21,5494);
   VbbHcc_both_Z_mass__535->SetBinContent(22,5069);
   VbbHcc_both_Z_mass__535->SetBinContent(23,4858);
   VbbHcc_both_Z_mass__535->SetBinContent(24,4647);
   VbbHcc_both_Z_mass__535->SetBinContent(25,4398);
   VbbHcc_both_Z_mass__535->SetBinContent(26,4220);
   VbbHcc_both_Z_mass__535->SetBinContent(27,3921);
   VbbHcc_both_Z_mass__535->SetBinContent(28,3891);
   VbbHcc_both_Z_mass__535->SetBinContent(29,3878);
   VbbHcc_both_Z_mass__535->SetBinContent(30,3612);
   VbbHcc_both_Z_mass__535->SetBinContent(31,3592);
   VbbHcc_both_Z_mass__535->SetBinContent(32,3367);
   VbbHcc_both_Z_mass__535->SetBinContent(33,3204);
   VbbHcc_both_Z_mass__535->SetBinContent(34,3155);
   VbbHcc_both_Z_mass__535->SetBinContent(35,3096);
   VbbHcc_both_Z_mass__535->SetBinContent(36,3075);
   VbbHcc_both_Z_mass__535->SetBinContent(37,3001);
   VbbHcc_both_Z_mass__535->SetBinContent(38,2911);
   VbbHcc_both_Z_mass__535->SetBinContent(39,2743);
   VbbHcc_both_Z_mass__535->SetBinContent(40,2778);
   VbbHcc_both_Z_mass__535->SetBinContent(41,107404);
   VbbHcc_both_Z_mass__535->SetEntries(326407);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_mass__535->SetLineColor(ci);
   VbbHcc_both_Z_mass__535->SetLineWidth(2);
   VbbHcc_both_Z_mass__535->SetMarkerStyle(20);
   VbbHcc_both_Z_mass__535->SetMarkerSize(1.2);
   VbbHcc_both_Z_mass__535->GetXaxis()->SetRange(1,400);
   VbbHcc_both_Z_mass__535->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__535->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass__535->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass__535->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__535->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__535->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass__535->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass__535->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass__535->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__535->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__535->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass__535->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass__535->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__535->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_mass_fx1389[40] = {
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
   Double_t Graph_from_VbbHcc_both_Z_mass_fy1389[40] = {
   0,
   0.07462545,
   12.84386,
   868.8177,
   4932.15,
   9132.974,
   10925.62,
   10126.49,
   9176.476,
   6068.136,
   7681.314,
   7302.409,
   6467.795,
   7362.524,
   4999.678,
   5395.74,
   4958.044,
   5570.828,
   6512.774,
   4202.85,
   3058.77,
   6023.982,
   4135.761,
   3001.478,
   4595.791,
   2127.085,
   2496.804,
   2330.682,
   3661.91,
   2488.769,
   3359.265,
   2126.849,
   1563.084,
   1677.288,
   2005.012,
   2339.056,
   2956.311,
   1407.57,
   2115.209,
   2477.542};
   Double_t Graph_from_VbbHcc_both_Z_mass_fex1389[40] = {
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
   Double_t Graph_from_VbbHcc_both_Z_mass_fey1389[40] = {
   0,
   0.05276816,
   9.810224,
   384.4033,
   1008.264,
   1462.848,
   2125.426,
   1283.327,
   1109.368,
   791.9086,
   1088.472,
   1804.16,
   945.7105,
   1143.035,
   780.0308,
   866.4364,
   784.0236,
   1007.39,
   1905.335,
   773.2112,
   561.8263,
   1134.637,
   853.5352,
   667.0237,
   998.4684,
   408.7169,
   554.7923,
   420.5315,
   920.4115,
   556.3477,
   844.7506,
   412.7252,
   176.4524,
   400.8504,
   543.6816,
   553.8825,
   760.4127,
   165.5703,
   547.5515,
   662.8661};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_both_Z_mass_fx1389,Graph_from_VbbHcc_both_Z_mass_fy1389,Graph_from_VbbHcc_both_Z_mass_fex1389,Graph_from_VbbHcc_both_Z_mass_fey1389);
   gre->SetName("Graph_from_VbbHcc_both_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_mass1389 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_mass1389","",100,0,440);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->SetMaximum(14356.15);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_mass1389->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_mass1389->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_mass1389);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_mass","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_mass_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_mass","MC unc. (stat.)","fl");

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
   Z_mass_both_18->cd();
  
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
   
   TH1D *data_mc_ratio__536 = new TH1D("data_mc_ratio__536","",40,0,400);
   data_mc_ratio__536->SetBinContent(3,3.270045);
   data_mc_ratio__536->SetBinContent(4,1.503192);
   data_mc_ratio__536->SetBinContent(5,1.075596);
   data_mc_ratio__536->SetBinContent(6,1.038216);
   data_mc_ratio__536->SetBinContent(7,1.084882);
   data_mc_ratio__536->SetBinContent(8,1.223722);
   data_mc_ratio__536->SetBinContent(9,1.33123);
   data_mc_ratio__536->SetBinContent(10,1.886741);
   data_mc_ratio__536->SetBinContent(11,1.374374);
   data_mc_ratio__536->SetBinContent(12,1.374889);
   data_mc_ratio__536->SetBinContent(13,1.428926);
   data_mc_ratio__536->SetBinContent(14,1.199317);
   data_mc_ratio__536->SetBinContent(15,1.619504);
   data_mc_ratio__536->SetBinContent(16,1.398881);
   data_mc_ratio__536->SetBinContent(17,1.438672);
   data_mc_ratio__536->SetBinContent(18,1.197847);
   data_mc_ratio__536->SetBinContent(19,0.9573493);
   data_mc_ratio__536->SetBinContent(20,1.345277);
   data_mc_ratio__536->SetBinContent(21,1.796147);
   data_mc_ratio__536->SetBinContent(22,0.84147);
   data_mc_ratio__536->SetBinContent(23,1.174633);
   data_mc_ratio__536->SetBinContent(24,1.548237);
   data_mc_ratio__536->SetBinContent(25,0.9569626);
   data_mc_ratio__536->SetBinContent(26,1.983936);
   data_mc_ratio__536->SetBinContent(27,1.570408);
   data_mc_ratio__536->SetBinContent(28,1.669468);
   data_mc_ratio__536->SetBinContent(29,1.05901);
   data_mc_ratio__536->SetBinContent(30,1.45132);
   data_mc_ratio__536->SetBinContent(31,1.069282);
   data_mc_ratio__536->SetBinContent(32,1.583093);
   data_mc_ratio__536->SetBinContent(33,2.049794);
   data_mc_ratio__536->SetBinContent(34,1.881013);
   data_mc_ratio__536->SetBinContent(35,1.54413);
   data_mc_ratio__536->SetBinContent(36,1.314633);
   data_mc_ratio__536->SetBinContent(37,1.015116);
   data_mc_ratio__536->SetBinContent(38,2.068103);
   data_mc_ratio__536->SetBinContent(39,1.296799);
   data_mc_ratio__536->SetBinContent(40,1.121273);
   data_mc_ratio__536->SetBinContent(41,1.264566);
   data_mc_ratio__536->SetBinError(3,0.5045789);
   data_mc_ratio__536->SetBinError(4,0.04159517);
   data_mc_ratio__536->SetBinError(5,0.01476748);
   data_mc_ratio__536->SetBinError(6,0.01066198);
   data_mc_ratio__536->SetBinError(7,0.009964792);
   data_mc_ratio__536->SetBinError(8,0.01099289);
   data_mc_ratio__536->SetBinError(9,0.01204449);
   data_mc_ratio__536->SetBinError(10,0.01763309);
   data_mc_ratio__536->SetBinError(11,0.01337626);
   data_mc_ratio__536->SetBinError(12,0.01372147);
   data_mc_ratio__536->SetBinError(13,0.01486369);
   data_mc_ratio__536->SetBinError(14,0.01276303);
   data_mc_ratio__536->SetBinError(15,0.01799783);
   data_mc_ratio__536->SetBinError(16,0.01610145);
   data_mc_ratio__536->SetBinError(17,0.01703436);
   data_mc_ratio__536->SetBinError(18,0.01466361);
   data_mc_ratio__536->SetBinError(19,0.01212418);
   data_mc_ratio__536->SetBinError(20,0.01789097);
   data_mc_ratio__536->SetBinError(21,0.02423246);
   data_mc_ratio__536->SetBinError(22,0.01181891);
   data_mc_ratio__536->SetBinError(23,0.01685285);
   data_mc_ratio__536->SetBinError(24,0.02271178);
   data_mc_ratio__536->SetBinError(25,0.01443003);
   data_mc_ratio__536->SetBinError(26,0.03054017);
   data_mc_ratio__536->SetBinError(27,0.02507922);
   data_mc_ratio__536->SetBinError(28,0.02676379);
   data_mc_ratio__536->SetBinError(29,0.01700577);
   data_mc_ratio__536->SetBinError(30,0.02414845);
   data_mc_ratio__536->SetBinError(31,0.01784119);
   data_mc_ratio__536->SetBinError(32,0.02728255);
   data_mc_ratio__536->SetBinError(33,0.03621295);
   data_mc_ratio__536->SetBinError(34,0.03348822);
   data_mc_ratio__536->SetBinError(35,0.02775131);
   data_mc_ratio__536->SetBinError(36,0.02370729);
   data_mc_ratio__536->SetBinError(37,0.01853032);
   data_mc_ratio__536->SetBinError(38,0.03833108);
   data_mc_ratio__536->SetBinError(39,0.02476051);
   data_mc_ratio__536->SetBinError(40,0.0212738);
   data_mc_ratio__536->SetBinError(41,0.05803123);
   data_mc_ratio__536->SetMinimum(0.4);
   data_mc_ratio__536->SetMaximum(1.6);
   data_mc_ratio__536->SetEntries(309.5519);
   data_mc_ratio__536->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__536->SetLineColor(ci);
   data_mc_ratio__536->SetLineWidth(2);
   data_mc_ratio__536->SetMarkerStyle(20);
   data_mc_ratio__536->SetMarkerSize(1.2);
   data_mc_ratio__536->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__536->GetXaxis()->SetRange(1,30);
   data_mc_ratio__536->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__536->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__536->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__536->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__536->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__536->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__536->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__536->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__536->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__536->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__536->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__536->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__536->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__536->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__536->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__536->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__536->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1390[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1390[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1390[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1390[40] = {
   0,
   0.7071068,
   0.7638065,
   0.4424441,
   0.2044268,
   0.1601721,
   0.194536,
   0.1267297,
   0.1208926,
   0.1305028,
   0.1417039,
   0.2470637,
   0.1462184,
   0.1552505,
   0.1560162,
   0.1605779,
   0.1581316,
   0.180833,
   0.2925535,
   0.183973,
   0.1836772,
   0.1883533,
   0.2063792,
   0.2222318,
   0.2172571,
   0.1921488,
   0.222201,
   0.1804328,
   0.2513474,
   0.2235434,
   0.2514689,
   0.1940548,
   0.1128873,
   0.2389872,
   0.2711613,
   0.2367975,
   0.2572168,
   0.1176284,
   0.258864,
   0.2675499};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1390,Graph_from_mc_statistical_error_fy1390,Graph_from_mc_statistical_error_fex1390,Graph_from_mc_statistical_error_fey1390);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1390 = new TH1F("Graph_Graph_from_mc_statistical_error1390","",100,0,440);
   Graph_Graph_from_mc_statistical_error1390->SetMinimum(0.0834322);
   Graph_Graph_from_mc_statistical_error1390->SetMaximum(1.916568);
   Graph_Graph_from_mc_statistical_error1390->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1390->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1390->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1390->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1390->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1390->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1390->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1390->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1390->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1390->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1390->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1390->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1390->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1390->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1390->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1390->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1390);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_both_18->cd();
   Z_mass_both_18->Modified();
   Z_mass_both_18->cd();
   Z_mass_both_18->SetSelected(Z_mass_both_18);
}
