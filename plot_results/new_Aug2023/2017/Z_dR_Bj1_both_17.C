void Z_dR_Bj1_both_17()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_17/Z_dR_Bj1_both_17
//=========  (Tue Aug 22 09:23:11 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_both_17 = new TCanvas("Z_dR_Bj1_both_17", "Z_dR_Bj1_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_both_17->SetHighLightColor(2);
   Z_dR_Bj1_both_17->Range(0,0,1,1);
   Z_dR_Bj1_both_17->SetFillColor(0);
   Z_dR_Bj1_both_17->SetFillStyle(4000);
   Z_dR_Bj1_both_17->SetBorderMode(0);
   Z_dR_Bj1_both_17->SetBorderSize(2);
   Z_dR_Bj1_both_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-116.8284,6.314516,116721.5);
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
   st->SetMaximum(100035.9);
   
   TH1F *st_stack_246 = new TH1F("st_stack_246","",30,0,6);
   st_stack_246->SetMinimum(0.01);
   st_stack_246->SetMaximum(105037.7);
   st_stack_246->SetDirectory(0);
   st_stack_246->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_246->SetLineColor(ci);
   st_stack_246->GetXaxis()->SetRange(1,30);
   st_stack_246->GetXaxis()->SetLabelFont(42);
   st_stack_246->GetXaxis()->SetLabelSize(0.035);
   st_stack_246->GetXaxis()->SetTitleSize(0.035);
   st_stack_246->GetXaxis()->SetTitleFont(42);
   st_stack_246->GetYaxis()->SetTitle("Events/0.2");
   st_stack_246->GetYaxis()->SetLabelFont(42);
   st_stack_246->GetYaxis()->SetLabelSize(0.05);
   st_stack_246->GetYaxis()->SetTitleSize(0.057);
   st_stack_246->GetYaxis()->SetTitleOffset(1.2);
   st_stack_246->GetYaxis()->SetTitleFont(42);
   st_stack_246->GetZaxis()->SetLabelFont(42);
   st_stack_246->GetZaxis()->SetLabelSize(0.035);
   st_stack_246->GetZaxis()->SetTitleSize(0.035);
   st_stack_246->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_246);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(1,6216.103);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(2,27662.28);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(3,41487.62);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(4,20904.9);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(5,14729.22);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(6,12249.03);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(7,9103.667);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(8,9706.807);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(9,23130.66);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(10,7961.855);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(11,6068.645);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(12,4106.222);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(13,6880.273);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(14,4063.133);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(15,4834.17);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(16,2772.718);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(17,2301.342);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(18,2268.929);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(19,1276.861);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(20,1395.559);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(21,1760.274);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(22,1567.41);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(23,724.0597);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(24,267.3632);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(25,468.9088);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(26,430.7496);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(27,100.1903);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(28,611.6991);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(29,49.7546);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(30,17.46607);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(31,56.36193);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(1,750.8593);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(2,1941.936);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(3,17130.83);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(4,1894.675);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(5,1550.732);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(6,1424.47);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(7,1559.3);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(8,1284.503);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(9,17052.59);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(10,1614.464);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(11,1021.713);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(12,821.288);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(13,1152.164);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(14,780.796);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(15,942.4428);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(16,621.7573);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(17,557.1014);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(18,558.5699);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(19,394.3078);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(20,474.5505);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(21,547.9509);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(22,543.6699);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(23,282.297);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(24,67.72013);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(25,274.2155);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(26,272.1094);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(27,39.46164);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(28,380.1951);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(29,27.55068);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(30,9.312968);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(31,36.00557);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetEntries(9795);

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
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(1,31.97103);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(2,129.3579);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(3,133.1402);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(4,121.4612);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(5,106.9255);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(6,84.43953);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(7,64.82159);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(8,56.1846);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(9,45.20891);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(10,37.2244);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(11,31.97362);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(12,28.04767);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(13,29.27476);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(14,24.44014);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(15,21.20339);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(16,18.21827);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(17,16.54461);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(18,13.63778);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(19,10.5287);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(20,9.020018);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(21,8.556513);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(22,5.984414);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(23,5.379863);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(24,3.596152);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(25,2.258059);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(26,1.242692);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(27,1.379428);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(28,0.759823);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(29,0.7338718);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(30,0.4554185);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(31,0.344634);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(1,2.315187);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(2,4.50501);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(3,4.458436);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(4,4.287988);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(5,4.247549);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(6,3.711369);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(7,3.13398);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(8,2.922152);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(9,2.653789);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(10,2.336659);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(11,2.242104);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(12,1.997701);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(13,2.224337);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(14,1.908104);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(15,1.805086);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(16,1.697482);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(17,1.585643);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(18,1.501213);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(19,1.283423);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(20,1.088493);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(21,1.198738);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(22,1.0146);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(23,0.9108318);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(24,0.6380879);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(25,0.5809438);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(26,0.4185427);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(27,0.4252566);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(28,0.3068712);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(29,0.3868688);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(30,0.2795899);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(31,0.1304143);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetEntries(12402);

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
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(1,503.6036);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(2,2310.995);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(3,2932.212);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(4,2606.638);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(5,2118.632);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(6,1643.612);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(7,1312.771);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(8,1042.583);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(9,877.7453);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(10,740.8484);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(11,654.6011);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(12,584.4177);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(13,521.9124);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(14,463.497);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(15,400.4201);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(16,362.7528);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(17,292.6637);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(18,253.2559);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(19,215.023);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(20,182.7539);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(21,145.9458);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(22,114.8756);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(23,92.70192);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(24,70.38942);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(25,49.77344);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(26,38.40937);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(27,23.81066);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(28,15.09433);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(29,8.741777);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(30,4.846046);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(31,7.559608);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(1,5.708865);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(2,12.21754);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(3,13.80203);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(4,13.00663);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(5,11.70578);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(6,10.3076);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(7,9.197131);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(8,8.197323);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(9,7.523982);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(10,6.912467);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(11,6.497486);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(12,6.142237);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(13,5.81354);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(14,5.47427);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(15,5.08328);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(16,4.84899);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(17,4.34534);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(18,4.043671);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(19,3.723243);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(20,3.446383);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(21,3.066549);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(22,2.71784);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(23,2.447184);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(24,2.123331);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(25,1.789791);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(26,1.569484);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(27,1.232962);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(28,0.9816948);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(29,0.7462512);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(30,0.5442092);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(31,0.6914592);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetEntries(333238);

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
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(1,108.3356);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(2,380.3829);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(3,405.693);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(4,303.3284);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(5,199.5816);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(6,172.2145);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(7,128.5306);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(8,104.1368);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(9,90.66867);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(10,74.27347);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(11,73.26456);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(12,61.41481);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(13,53.19964);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(14,46.10156);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(15,44.71101);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(16,38.01577);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(17,31.06875);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(18,33.97232);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(19,19.46415);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(20,21.33297);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(21,15.36439);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(22,13.01866);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(23,16.02708);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(24,7.008864);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(25,3.940287);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(26,4.757669);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(27,2.455616);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(28,2.28105);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(29,1.361292);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(30,0.4521017);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(31,0.6115758);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(1,3.535671);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(2,12.46211);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(3,12.99121);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(4,12.31128);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(5,9.251253);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(6,10.29016);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(7,8.358761);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(8,6.227159);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(9,5.985129);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(10,5.609283);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(11,6.387401);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(12,4.640063);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(13,4.330355);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(14,3.018326);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(15,3.065972);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(16,4.992934);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(17,3.855272);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(18,4.966067);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(19,1.874366);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(20,3.589535);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(21,1.760675);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(22,3.36906);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(23,4.544091);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(24,1.157944);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(25,0.6841274);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(26,0.9553576);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(27,0.5887857);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(28,0.6933065);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(29,0.4268996);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(30,0.3323044);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(31,0.2359357);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetEntries(18334);

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
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(1,20.11902);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(2,51.26949);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(3,38.19815);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(4,25.50011);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(5,28.76653);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(6,12.37813);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(7,11.84972);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(8,11.2549);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(9,8.686624);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(10,7.449161);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(11,7.086439);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(12,3.908724);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(13,3.00258);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(14,5.226985);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(15,2.530914);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(16,4.446627);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(17,3.183741);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(18,2.056664);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(19,2.977854);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(20,1.559379);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(21,1.195118);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(22,9.891415);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(23,1.056451);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(24,0.4307725);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(25,0.7787613);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(26,0.6862046);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(27,0.1685838);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(28,0.108058);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(29,0.4174647);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(30,0.1068507);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(31,0.1082427);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(1,1.992994);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(2,4.824059);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(3,4.339634);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(4,3.180922);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(5,8.004042);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(6,2.083863);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(7,2.097993);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(8,2.077422);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(9,2.554237);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(10,1.900048);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(11,1.831859);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(12,0.7453773);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(13,0.6912749);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(14,1.76287);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(15,0.6454373);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(16,1.731067);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(17,1.274916);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(18,0.5350419);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(19,1.261694);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(20,0.5318856);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(21,0.4022204);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(22,7.502853);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(23,0.3480785);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(24,0.2253812);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(25,0.2983474);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(26,0.2694845);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(27,0.1040522);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(28,0.09255777);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(29,0.4162592);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(30,0.0925499);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(31,0.1070422);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetEntries(2217);

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
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(2,0.3153059);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(4,0.6306118);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(11,0.3153059);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(12,0.3153059);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(2,0.3153059);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(4,0.4459099);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(11,0.3153059);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(12,0.3153059);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetEntries(5);

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
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(1,0.5303731);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(2,2.121492);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(3,1.060746);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(4,0.2651865);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(5,0.2651865);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(6,0.5303731);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(7,0.5303731);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(8,0.2651865);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(9,0.2651865);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(12,0.2651865);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(14,0.2651865);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(17,0.2651865);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(26,0.2651865);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(1,0.3750304);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(2,0.7500608);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(3,0.5303731);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(4,0.2651865);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(5,0.2651865);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(6,0.3750304);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(7,0.3750304);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(8,0.2651865);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(9,0.2651865);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(12,0.2651865);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(14,0.2651865);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(17,0.2651865);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(26,0.2651865);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetEntries(26);

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
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(1,2.27903);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(2,11.14193);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(3,5.824189);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(4,6.077415);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(5,3.798384);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(6,1.519354);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(7,1.772579);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(8,1.266128);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(9,2.27903);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(10,3.038707);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(11,1.519354);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(12,0.7596768);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(13,0.7596768);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(14,0.5064512);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(15,0.5064512);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(16,1.012902);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(18,1.012902);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(19,0.7596768);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(20,0.5064512);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(22,0.2532256);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(1,0.7596768);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(2,1.679709);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(3,1.214427);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(4,1.240547);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(5,0.9807386);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(6,0.6202735);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(7,0.669972);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(8,0.5662297);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(9,0.7596768);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(10,0.8771992);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(11,0.6202735);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(12,0.4385996);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(13,0.4385996);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(14,0.3581151);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(15,0.3581151);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(16,0.5064512);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(18,0.5064512);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(19,0.4385996);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(20,0.3581151);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(22,0.2532256);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetEntries(184);

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
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(1,1.823467);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(2,7.998059);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(3,8.584346);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(4,6.202049);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(5,4.125009);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(6,2.826455);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(7,2.238552);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(8,1.766938);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(9,1.592505);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(10,1.548897);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(11,1.397076);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(12,1.322781);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(13,1.151578);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(14,0.9884515);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(15,0.8479364);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(16,0.6783491);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(17,0.5362188);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(18,0.3940885);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(19,0.2810303);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(20,0.206735);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(21,0.2051198);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(22,0.1566663);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(23,0.1598966);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(24,0.1179035);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(25,0.09367678);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(26,0.05652909);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(27,0.04683839);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(28,0.0193814);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(29,0.001615117);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(31,0.001615117);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(1,0.05426889);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(2,0.1136565);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(3,0.1177486);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(4,0.1000851);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(5,0.08162335);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(6,0.06756519);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(7,0.06012922);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(8,0.05342107);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(9,0.0507157);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(10,0.0500165);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(11,0.04750201);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(12,0.0462217);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(13,0.04312695);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(14,0.03995578);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(15,0.03700698);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(16,0.03310005);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(17,0.02942883);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(18,0.02522893);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(19,0.02130485);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(20,0.01827296);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(21,0.01820144);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(22,0.01590706);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(23,0.01607021);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(24,0.01379956);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(25,0.01230036);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(26,0.00955516);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(27,0.008697671);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(28,0.005594929);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(29,0.001615117);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(31,0.001615117);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetEntries(29329);

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
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(1,0.6889117);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(2,3.12641);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(3,3.773525);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(4,2.957747);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(5,1.980191);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(6,1.327175);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(7,0.9667384);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(8,0.7818484);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(9,0.6756351);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(10,0.5890908);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(11,0.56893);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(12,0.4995962);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(13,0.4410805);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(14,0.4061678);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(15,0.338801);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(16,0.2650417);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(17,0.2414387);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(18,0.1794809);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(19,0.1760388);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(20,0.1460434);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(21,0.1160479);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(22,0.09146152);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(23,0.0860525);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(24,0.07031719);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(25,0.04081347);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(26,0.03687964);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(27,0.01622704);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(28,0.0068842);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(29,0.0034421);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(30,0.0004917286);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(31,0.0004917286);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(1,0.01840537);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(2,0.03920899);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(3,0.0430761);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(4,0.03813671);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(5,0.03120443);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(6,0.02554623);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(7,0.02180305);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(8,0.01960758);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(9,0.01822715);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(10,0.01701978);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(11,0.016726);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(12,0.01567373);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(13,0.01472725);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(14,0.01413239);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(15,0.01290729);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(16,0.01141615);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(17,0.01089598);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(18,0.009394461);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(19,0.009303941);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(20,0.008474297);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(21,0.007554078);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(22,0.006706284);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(23,0.006504958);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(24,0.005880219);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(25,0.004479861);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(26,0.004258494);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(27,0.002824766);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(28,0.00183988);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(29,0.001300992);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(30,0.0004917286);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(31,0.0004917286);
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
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(1,0.01264201);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(2,0.03476553);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(3,0.03634578);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(4,0.01738276);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(5,0.01106176);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(6,0.006321005);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(7,0.004740753);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(8,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(9,0.003160502);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(10,0.003160502);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(12,0.004740753);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(13,0.003160502);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(14,0.003160502);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(15,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(18,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(19,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(20,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(26,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(1,0.004469625);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(2,0.007412035);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(3,0.007578618);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(4,0.0052411);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(5,0.004180952);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(6,0.003160502);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(7,0.002737075);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(8,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(9,0.002234813);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(10,0.002234813);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(12,0.002737075);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(13,0.002234813);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(14,0.002234813);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(15,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(18,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(19,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(20,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(26,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetEntries(95);

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
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(1,0.002491268);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(2,0.01557042);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(3,0.0145324);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(4,0.008096621);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(5,0.003944507);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(6,0.00332169);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(7,0.002283662);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(8,0.002698874);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(9,0.001245634);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(10,0.00145324);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(11,0.00145324);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(12,0.001660845);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(13,0.001038028);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(14,0.000622817);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(15,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(16,0.000622817);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(17,0.0004152113);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(18,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(19,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(20,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(21,0.0008304226);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(23,0.0004152113);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(27,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(28,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(1,0.0007191671);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(2,0.001797918);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(3,0.001736954);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(4,0.001296497);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(5,0.0009049321);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(6,0.0008304226);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(7,0.0006885501);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(8,0.0007485328);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(9,0.0005085279);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(10,0.0005492729);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(11,0.0005492729);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(12,0.0005871975);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(13,0.0004642204);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(14,0.0003595835);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(15,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(16,0.0003595835);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(17,0.0002935987);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(18,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(19,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(20,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(21,0.0004152113);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(23,0.0002935987);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(27,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(28,0.0002076057);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetEntries(308);

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
   
   TH1D *VbbHcc_both_Z_dR_Bj1__675 = new TH1D("VbbHcc_both_Z_dR_Bj1__675","",30,0,6);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(1,3217);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(2,10848);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(3,9925);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(4,7530);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(5,5831);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(6,4625);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(7,3664);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(8,3002);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(9,2502);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(10,2169);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(11,1915);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(12,1766);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(13,1568);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(14,1339);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(15,1168);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(16,1075);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(17,892);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(18,773);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(19,679);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(20,575);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(21,379);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(22,373);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(23,345);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(24,242);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(25,215);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(26,154);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(27,103);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(28,70);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(29,41);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(30,21);
   VbbHcc_both_Z_dR_Bj1__675->SetBinContent(31,30);
   VbbHcc_both_Z_dR_Bj1__675->SetEntries(67065);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1__675->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1__675->SetLineWidth(2);
   VbbHcc_both_Z_dR_Bj1__675->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_Bj1__675->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_Bj1__675->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1__675->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__675->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__675->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__675->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__675->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__675->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__675->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__675->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1__675->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__675->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__675->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__675->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__675->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__675->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fx1491[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fy1491[30] = {
   6885.469,
   30559.04,
   45016.16,
   23977.99,
   17193.31,
   14167.88,
   10627.16,
   10925.05,
   24157.79,
   8826.832,
   6839.373,
   4787.18,
   7490.019,
   4604.568,
   5304.73,
   3198.108,
   2645.846,
   2573.44,
   1526.073,
   1611.086,
   1931.658,
   1711.681,
   839.4714,
   348.9767,
   525.7938,
   476.2057,
   128.0678,
   629.9688,
   61.01407,
   23.32698};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fex1491[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fey1491[30] = {
   750.896,
   1942.026,
   17130.84,
   1894.768,
   1550.83,
   1424.551,
   1559.354,
   1284.549,
   17052.6,
   1614.492,
   1021.758,
   821.3271,
   1152.189,
   780.8255,
   942.4635,
   621.8012,
   557.1355,
   558.6091,
   394.3342,
   474.5782,
   547.9638,
   543.7399,
   282.3459,
   67.76669,
   274.2229,
   272.1162,
   39.48771,
   380.1971,
   27.56995,
   9.339417};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_Bj1_fx1491,Graph_from_VbbHcc_both_Z_dR_Bj1_fy1491,Graph_from_VbbHcc_both_Z_dR_Bj1_fex1491,Graph_from_VbbHcc_both_Z_dR_Bj1_fey1491);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->SetMinimum(12.5888);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->SetMaximum(68360.3);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_Bj11491);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1","Data (JetHT, 2017)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj1_both_17->cd();
  
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
   
   TH1D *data_mc_ratio__676 = new TH1D("data_mc_ratio__676","",30,0,6);
   data_mc_ratio__676->SetBinContent(1,0.4672158);
   data_mc_ratio__676->SetBinContent(2,0.3549849);
   data_mc_ratio__676->SetBinContent(3,0.2204764);
   data_mc_ratio__676->SetBinContent(4,0.3140381);
   data_mc_ratio__676->SetBinContent(5,0.3391436);
   data_mc_ratio__676->SetBinContent(6,0.3264426);
   data_mc_ratio__676->SetBinContent(7,0.3447771);
   data_mc_ratio__676->SetBinContent(8,0.2747813);
   data_mc_ratio__676->SetBinContent(9,0.1035691);
   data_mc_ratio__676->SetBinContent(10,0.245728);
   data_mc_ratio__676->SetBinContent(11,0.2799964);
   data_mc_ratio__676->SetBinContent(12,0.3689019);
   data_mc_ratio__676->SetBinContent(13,0.2093453);
   data_mc_ratio__676->SetBinContent(14,0.2907982);
   data_mc_ratio__676->SetBinContent(15,0.2201809);
   data_mc_ratio__676->SetBinContent(16,0.3361362);
   data_mc_ratio__676->SetBinContent(17,0.3371323);
   data_mc_ratio__676->SetBinContent(18,0.3003761);
   data_mc_ratio__676->SetBinContent(19,0.4449328);
   data_mc_ratio__676->SetBinContent(20,0.356902);
   data_mc_ratio__676->SetBinContent(21,0.1962045);
   data_mc_ratio__676->SetBinContent(22,0.2179144);
   data_mc_ratio__676->SetBinContent(23,0.4109729);
   data_mc_ratio__676->SetBinContent(24,0.6934561);
   data_mc_ratio__676->SetBinContent(25,0.4089055);
   data_mc_ratio__676->SetBinContent(26,0.3233897);
   data_mc_ratio__676->SetBinContent(27,0.8042613);
   data_mc_ratio__676->SetBinContent(28,0.1111166);
   data_mc_ratio__676->SetBinContent(29,0.6719762);
   data_mc_ratio__676->SetBinContent(30,0.9002453);
   data_mc_ratio__676->SetBinContent(31,0.461623);
   data_mc_ratio__676->SetBinError(1,0.008237435);
   data_mc_ratio__676->SetBinError(2,0.003408279);
   data_mc_ratio__676->SetBinError(3,0.002213078);
   data_mc_ratio__676->SetBinError(4,0.003618968);
   data_mc_ratio__676->SetBinError(5,0.00444132);
   data_mc_ratio__676->SetBinError(6,0.004800107);
   data_mc_ratio__676->SetBinError(7,0.005695878);
   data_mc_ratio__676->SetBinError(8,0.005015126);
   data_mc_ratio__676->SetBinError(9,0.002070554);
   data_mc_ratio__676->SetBinError(10,0.005276245);
   data_mc_ratio__676->SetBinError(11,0.006398352);
   data_mc_ratio__676->SetBinError(12,0.008778404);
   data_mc_ratio__676->SetBinError(13,0.005286766);
   data_mc_ratio__676->SetBinError(14,0.007946966);
   data_mc_ratio__676->SetBinError(15,0.006442555);
   data_mc_ratio__676->SetBinError(16,0.01025206);
   data_mc_ratio__676->SetBinError(17,0.01128802);
   data_mc_ratio__676->SetBinError(18,0.01080378);
   data_mc_ratio__676->SetBinError(19,0.01707495);
   data_mc_ratio__676->SetBinError(20,0.01488384);
   data_mc_ratio__676->SetBinError(21,0.01007835);
   data_mc_ratio__676->SetBinError(22,0.01128318);
   data_mc_ratio__676->SetBinError(23,0.02212604);
   data_mc_ratio__676->SetBinError(24,0.04457705);
   data_mc_ratio__676->SetBinError(25,0.02788713);
   data_mc_ratio__676->SetBinError(26,0.02605948);
   data_mc_ratio__676->SetBinError(27,0.07924622);
   data_mc_ratio__676->SetBinError(28,0.01328098);
   data_mc_ratio__676->SetBinError(29,0.1049451);
   data_mc_ratio__676->SetBinError(30,0.1964496);
   data_mc_ratio__676->SetBinError(31,0.2693362);
   data_mc_ratio__676->SetMinimum(0.4);
   data_mc_ratio__676->SetMaximum(1.6);
   data_mc_ratio__676->SetEntries(216.2769);
   data_mc_ratio__676->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__676->SetLineColor(ci);
   data_mc_ratio__676->SetLineWidth(2);
   data_mc_ratio__676->SetMarkerStyle(20);
   data_mc_ratio__676->SetMarkerSize(1.2);
   data_mc_ratio__676->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__676->GetXaxis()->SetRange(1,30);
   data_mc_ratio__676->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__676->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__676->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__676->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__676->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__676->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__676->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__676->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__676->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__676->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__676->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__676->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__676->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__676->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__676->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__676->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__676->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1492[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1492[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1492[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1492[30] = {
   0.1090552,
   0.06354997,
   0.3805487,
   0.07902114,
   0.09019965,
   0.1005479,
   0.146733,
   0.1175784,
   0.705884,
   0.1829073,
   0.1493936,
   0.171568,
   0.1538299,
   0.1695763,
   0.1776647,
   0.1944278,
   0.2105699,
   0.2170671,
   0.2583979,
   0.2945703,
   0.2836753,
   0.3176642,
   0.3363377,
   0.1941869,
   0.5215408,
   0.5714257,
   0.3083344,
   0.6035173,
   0.4518622,
   0.4003698};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1492,Graph_from_mc_statistical_error_fy1492,Graph_from_mc_statistical_error_fex1492,Graph_from_mc_statistical_error_fey1492);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1492 = new TH1F("Graph_Graph_from_mc_statistical_error1492","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1492->SetMinimum(0.1529392);
   Graph_Graph_from_mc_statistical_error1492->SetMaximum(1.847061);
   Graph_Graph_from_mc_statistical_error1492->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1492->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1492->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1492->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1492->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1492->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1492->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1492->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1492->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1492->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1492->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1492->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1492->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1492->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1492->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1492->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1492);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_both_17->cd();
   Z_dR_Bj1_both_17->Modified();
   Z_dR_Bj1_both_17->cd();
   Z_dR_Bj1_both_17->SetSelected(Z_dR_Bj1_both_17);
}
