void Aplanarity_both_17()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Fri Jul 14 13:38:56 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(0,0,1,1);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetFillStyle(4000);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetFrameFillStyle(1000);
   Aplanarity_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-3473.23,1.052419,3469767);
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
   st->SetMaximum(2973755);
   
   TH1F *st_stack_254 = new TH1F("st_stack_254","",50,0,1);
   st_stack_254->SetMinimum(0.01);
   st_stack_254->SetMaximum(3122443);
   st_stack_254->SetDirectory(0);
   st_stack_254->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_254->SetLineColor(ci);
   st_stack_254->GetXaxis()->SetRange(1,50);
   st_stack_254->GetXaxis()->SetLabelFont(42);
   st_stack_254->GetXaxis()->SetLabelSize(0.035);
   st_stack_254->GetXaxis()->SetTitleSize(0.035);
   st_stack_254->GetXaxis()->SetTitleFont(42);
   st_stack_254->GetYaxis()->SetTitle("Events/0.02");
   st_stack_254->GetYaxis()->SetLabelFont(42);
   st_stack_254->GetYaxis()->SetLabelSize(0.05);
   st_stack_254->GetYaxis()->SetTitleSize(0.057);
   st_stack_254->GetYaxis()->SetTitleOffset(1.2);
   st_stack_254->GetYaxis()->SetTitleFont(42);
   st_stack_254->GetZaxis()->SetLabelFont(42);
   st_stack_254->GetZaxis()->SetLabelSize(0.035);
   st_stack_254->GetZaxis()->SetTitleSize(0.035);
   st_stack_254->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_254);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,1109076);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,240708.9);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,111916.5);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,51327.72);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,35760.74);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,19792.33);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,12270.28);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,5241.924);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,5779.748);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,3594.761);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,2014.309);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,2567.431);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,567.8797);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,1281.142);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,758.6281);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,521.3526);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,290.9934);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,239.757);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,225.7918);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(20,25.6144);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(21,8.664137);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,31592.02);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,6459.785);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,4578.499);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,3219.64);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,2887.699);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,1731.005);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,1900.125);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,554.539);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,1244.32);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,762.1659);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,474.893);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,735.2851);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,95.55983);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,500.2711);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,447.2783);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,367.6227);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,182.2378);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,195.6232);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,188.185);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(20,25.6144);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(21,7.967267);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(166831);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,11478.04);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,3096.157);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,1383.846);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,727.5255);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,413.2115);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,282.9922);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,190.8257);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,115.2312);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,80.2709);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,57.36876);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,41.23045);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,26.86698);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,20.11724);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,11.51303);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,7.820901);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,2.867655);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,4.858527);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,1.284577);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,0.7178379);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(20,0.9349461);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(21,0.1936129);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,47.51154);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,24.94281);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,16.81446);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,12.45372);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,9.391602);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,7.999751);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,6.621351);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,5.097348);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,4.235208);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,3.687096);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,3.057688);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,2.529088);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,2.238416);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,1.564791);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,1.307506);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.7252035);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,1.091048);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.5506822);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,0.3634411);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(20,0.4640336);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(21,0.1936129);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(217888);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_3 = new TH1D("VbbHcc_both_Aplanarity_stack_3","",50,0,1);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(1,203863.9);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(2,60890.15);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(3,27622.39);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(4,14990.16);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(5,8841.078);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(6,5528.177);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(7,3621.453);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(8,2439.203);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(9,1600.409);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(10,1124.724);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(11,754.371);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(12,508.1222);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(13,337.5249);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(14,228.5492);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(15,149.2216);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(16,89.31274);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(17,54.56808);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(18,33.9894);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(19,15.98818);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(20,9.950312);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(21,3.8482);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(22,0.9222126);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(23,0.3084085);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(1,125.0426);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(2,68.56453);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(3,46.24426);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(4,34.12113);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(5,26.20128);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(6,20.72697);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(7,16.77715);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(8,13.77504);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(9,11.15587);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(10,9.331792);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(11,7.659712);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(12,6.290736);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(13,5.140297);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(14,4.215666);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(15,3.420011);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(16,2.641223);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(17,2.0667);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(18,1.636569);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(19,1.126218);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(20,0.8667676);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(21,0.5403815);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(22,0.2610401);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(23,0.1505595);
   VbbHcc_both_Aplanarity_stack_3->SetEntries(4843140);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_4 = new TH1D("VbbHcc_both_Aplanarity_stack_4","",50,0,1);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(1,8594.899);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(2,2188.506);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(3,972.0132);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(4,516.467);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(5,307.4709);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(6,188.3578);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(7,115.4372);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(8,83.26223);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(9,54.49115);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(10,46.24096);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(11,20.33198);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(12,15.54366);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(13,12.52907);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(14,5.896695);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(15,4.524685);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(16,6.190095);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(17,1.630316);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(18,0.2724689);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(19,0.5132569);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(20,0.2927476);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(1,59.62265);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(2,33.90801);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(3,24.29516);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(4,16.9462);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(5,15.76481);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(6,10.43086);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(7,8.414915);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(8,7.93903);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(9,4.327803);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(10,7.021454);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(11,2.280242);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(12,2.108228);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(13,3.399207);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(14,1.158674);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(15,1.154865);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(16,3.437589);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(17,0.7091729);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(18,0.1617799);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(19,0.4255483);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(20,0.1558719);
   VbbHcc_both_Aplanarity_stack_4->SetEntries(99118);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_5 = new TH1D("VbbHcc_both_Aplanarity_stack_5","",50,0,1);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(1,4936.496);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(2,1179.469);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(3,500.5983);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(4,246.7773);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(5,152.3899);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(6,89.29658);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(7,51.79916);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(8,37.7169);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(9,39.83028);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(10,13.46412);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(11,10.76042);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(12,7.305531);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(13,2.804127);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(14,3.22779);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(15,1.477563);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(16,0.4971923);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(17,0.08462542);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(22,0.1018803);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(1,76.63141);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(2,43.15489);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(3,29.69896);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(4,19.57807);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(5,16.94532);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(6,10.74699);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(7,5.610482);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(8,5.492739);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(9,9.931928);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(10,2.926419);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(11,2.630824);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(12,2.34803);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(13,0.7724535);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(14,1.254915);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(15,0.5686113);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(16,0.2168903);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(17,0.06469842);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(22,0.1018803);
   VbbHcc_both_Aplanarity_stack_5->SetEntries(45557);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_6 = new TH1D("VbbHcc_both_Aplanarity_stack_6","",50,0,1);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(1,27.99714);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(2,7.36568);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(3,2.397922);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(4,1.905986);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(5,0.8365013);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(6,0.6433582);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(7,1.911767);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(8,0.1682816);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(9,0.4033041);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(10,0.1512027);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(12,0.2094082);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(1,2.534364);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(2,1.282567);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(3,0.7408211);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(4,0.6620029);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(5,0.4245568);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(6,0.3895032);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(7,0.6769405);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(8,0.1682816);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(9,0.2939731);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(10,0.1512027);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(12,0.2094082);
   VbbHcc_both_Aplanarity_stack_6->SetEntries(204);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_7 = new TH1D("VbbHcc_both_Aplanarity_stack_7","",50,0,1);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(1,68.22846);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(2,17.27761);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(3,7.121172);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(4,2.314368);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(5,1.776716);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(6,0.8610204);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(7,0.4562783);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(8,0.7057163);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(9,0.2935036);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(10,0.3501035);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(11,0.1207762);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(12,0.138757);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(14,0.2335708);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(16,0.1817758);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(1,3.414228);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(2,1.705148);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(3,1.089764);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(4,0.6020788);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(5,0.5520744);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(6,0.3872872);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(7,0.2646022);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(8,0.3532931);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(9,0.2139325);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(10,0.2477432);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(11,0.1207762);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(12,0.138757);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(14,0.1655415);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(16,0.1817758);
   VbbHcc_both_Aplanarity_stack_7->SetEntries(620);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_8 = new TH1D("VbbHcc_both_Aplanarity_stack_8","",50,0,1);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(1,62.78379);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(2,18.49437);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(3,7.570422);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(4,4.376288);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(5,2.91127);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(6,1.589706);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(7,0.5272202);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(8,1.017945);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(9,0.9725325);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(10,0.3516893);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(11,0.2447037);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(1,3.695385);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(2,2.014899);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(3,1.303448);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(4,0.9733162);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(5,0.7939417);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(6,0.5707424);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(7,0.3579357);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(8,0.5103177);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(9,0.4872529);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(10,0.2502739);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(11,0.2447037);
   VbbHcc_both_Aplanarity_stack_8->SetEntries(481);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_9 = new TH1D("VbbHcc_both_Aplanarity_stack_9","",50,0,1);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(1,42.63935);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(2,12.3743);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(3,5.776793);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(4,3.15309);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(5,1.816725);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(6,1.216324);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(7,0.7746027);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(8,0.4758832);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(9,0.3363257);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(10,0.1951047);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(11,0.1554174);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(12,0.1204239);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(13,0.0649468);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(14,0.02322738);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(15,0.03054912);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(16,0.01618302);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(17,0.00312326);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(18,0.01245124);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(19,0.005453046);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(20,0.003857314);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(21,0.002053476);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(1,0.2844045);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(2,0.1536173);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(3,0.1049787);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(4,0.07796791);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(5,0.0589565);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(6,0.04796478);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(7,0.03831873);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(8,0.02994752);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(9,0.02562708);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(10,0.01945192);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(11,0.01709893);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(12,0.01521008);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(13,0.01094324);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(14,0.006978535);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(15,0.007482255);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(16,0.00549291);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(17,0.003680969);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(18,0.005103222);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(19,0.003149545);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(20,0.002728289);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(21,0.002053476);
   VbbHcc_both_Aplanarity_stack_9->SetEntries(39482);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_10 = new TH1D("VbbHcc_both_Aplanarity_stack_10","",50,0,1);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(1,37.41849);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(2,10.24839);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(3,4.724608);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(4,2.675507);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(5,1.590079);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(6,0.9868697);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(7,0.6686466);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(8,0.4461495);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(9,0.2970473);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(10,0.1827559);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(11,0.1376086);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(12,0.09266922);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(13,0.06300211);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(14,0.03240715);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(15,0.02468614);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(16,0.0132063);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(17,0.01126705);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(18,0.004637483);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(19,0.00123564);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(20,0.0004091505);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(1,0.1285522);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(2,0.06746383);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(3,0.04583894);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(4,0.03446973);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(5,0.02662843);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(6,0.02094563);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(7,0.01727064);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(8,0.01408896);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(9,0.0115322);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(10,0.00899169);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(11,0.007830011);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(12,0.006443393);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(13,0.005259432);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(14,0.003793219);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(15,0.003330614);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(16,0.002457465);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(17,0.002259263);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(18,0.001416082);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(19,0.0007247667);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(20,0.0004091505);
   VbbHcc_both_Aplanarity_stack_10->SetEntries(137175);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_11 = new TH1D("VbbHcc_both_Aplanarity_stack_11","",50,0,1);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(1,1.230727);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(2,0.3059249);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(3,0.1658091);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(4,0.08699919);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(5,0.04271839);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(6,0.03674362);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(7,0.02740343);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(8,0.01317978);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(9,0.007578576);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(10,0.006388937);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(11,0.003862868);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(12,0.006064188);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(17,0.001193347);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(18,0.001842579);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(20,0.001441091);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(1,0.04820417);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(2,0.02390758);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(3,0.01753657);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(4,0.01265011);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(5,0.008665322);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(6,0.007980635);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(7,0.007116236);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(8,0.005034741);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(9,0.003802114);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(10,0.003699974);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(11,0.00273146);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(12,0.003155878);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(17,0.001193347);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(18,0.001842579);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(20,0.001441091);
   VbbHcc_both_Aplanarity_stack_11->SetEntries(1123);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_12 = new TH1D("VbbHcc_both_Aplanarity_stack_12","",50,0,1);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(1,0.5640506);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(2,0.1701721);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(3,0.08900211);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(4,0.05598476);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(5,0.03363218);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(6,0.01673472);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(7,0.01498904);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(8,0.007418737);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(9,0.007523924);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(10,0.003177731);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(11,0.00173425);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(12,0.002648244);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(13,0.0001877288);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(14,0.001509188);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(15,0.0001631518);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(19,0.0002420281);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(1,0.011631);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(2,0.006384479);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(3,0.004610328);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(4,0.003691266);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(5,0.002856872);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(6,0.002013578);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(7,0.001869208);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(8,0.00134257);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(9,0.001314631);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(10,0.0008706641);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(11,0.0006565778);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(12,0.0008486516);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(13,0.0001877288);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(14,0.0006166574);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(15,0.0001631518);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(19,0.0002420281);
   VbbHcc_both_Aplanarity_stack_12->SetEntries(4223);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Aplanarity__507 = new TH1D("VbbHcc_both_Aplanarity__507","",50,0,1);
   VbbHcc_both_Aplanarity__507->SetBinContent(1,374170);
   VbbHcc_both_Aplanarity__507->SetBinContent(2,91299);
   VbbHcc_both_Aplanarity__507->SetBinContent(3,40089);
   VbbHcc_both_Aplanarity__507->SetBinContent(4,21317);
   VbbHcc_both_Aplanarity__507->SetBinContent(5,12577);
   VbbHcc_both_Aplanarity__507->SetBinContent(6,7664);
   VbbHcc_both_Aplanarity__507->SetBinContent(7,5018);
   VbbHcc_both_Aplanarity__507->SetBinContent(8,3280);
   VbbHcc_both_Aplanarity__507->SetBinContent(9,2163);
   VbbHcc_both_Aplanarity__507->SetBinContent(10,1498);
   VbbHcc_both_Aplanarity__507->SetBinContent(11,1056);
   VbbHcc_both_Aplanarity__507->SetBinContent(12,715);
   VbbHcc_both_Aplanarity__507->SetBinContent(13,440);
   VbbHcc_both_Aplanarity__507->SetBinContent(14,284);
   VbbHcc_both_Aplanarity__507->SetBinContent(15,192);
   VbbHcc_both_Aplanarity__507->SetBinContent(16,117);
   VbbHcc_both_Aplanarity__507->SetBinContent(17,75);
   VbbHcc_both_Aplanarity__507->SetBinContent(18,29);
   VbbHcc_both_Aplanarity__507->SetBinContent(19,20);
   VbbHcc_both_Aplanarity__507->SetBinContent(20,5);
   VbbHcc_both_Aplanarity__507->SetBinContent(21,5);
   VbbHcc_both_Aplanarity__507->SetBinContent(22,3);
   VbbHcc_both_Aplanarity__507->SetEntries(562016);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity__507->SetLineColor(ci);
   VbbHcc_both_Aplanarity__507->SetLineWidth(2);
   VbbHcc_both_Aplanarity__507->SetMarkerStyle(20);
   VbbHcc_both_Aplanarity__507->SetMarkerSize(1.2);
   VbbHcc_both_Aplanarity__507->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity__507->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__507->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__507->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__507->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__507->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__507->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__507->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__507->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity__507->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__507->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__507->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__507->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__507->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__507->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Aplanarity_fx1507[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_VbbHcc_both_Aplanarity_fy1507[50] = {
   1338190,
   308129.4,
   142423.2,
   67823.22,
   45483.9,
   25886.5,
   16254.18,
   7920.172,
   7557.068,
   4837.799,
   2841.667,
   3125.84,
   940.9832,
   1530.619,
   921.7282,
   620.4315,
   352.1506,
   275.3224,
   243.018,
   36.79811,
   12.708,
   1.024093,
   0.3084085,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_both_Aplanarity_fex1507[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_VbbHcc_both_Aplanarity_fey1507[50] = {
   31592.45,
   6460.431,
   4578.924,
   3219.949,
   2887.927,
   1731.212,
   1900.238,
   554.8179,
   1244.425,
   762.27,
   474.9775,
   735.3232,
   95.78761,
   500.2942,
   447.2951,
   367.6491,
   182.2542,
   195.6308,
   188.1892,
   25.63373,
   7.987919,
   0.2802169,
   0.1505595,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_both_Aplanarity_fx1507,Graph_from_VbbHcc_both_Aplanarity_fy1507,Graph_from_VbbHcc_both_Aplanarity_fex1507,Graph_from_VbbHcc_both_Aplanarity_fey1507);
   gre->SetName("Graph_from_VbbHcc_both_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Aplanarity1507 = new TH1F("Graph_Graph_from_VbbHcc_both_Aplanarity1507","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->SetMaximum(1506761);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Aplanarity1507);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_both_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
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
   
   TH1D *data_mc_ratio__508 = new TH1D("data_mc_ratio__508","",50,0,1);
   data_mc_ratio__508->SetBinContent(1,0.2796091);
   data_mc_ratio__508->SetBinContent(2,0.2963008);
   data_mc_ratio__508->SetBinContent(3,0.281478);
   data_mc_ratio__508->SetBinContent(4,0.3143024);
   data_mc_ratio__508->SetBinContent(5,0.2765154);
   data_mc_ratio__508->SetBinContent(6,0.2960616);
   data_mc_ratio__508->SetBinContent(7,0.3087206);
   data_mc_ratio__508->SetBinContent(8,0.4141324);
   data_mc_ratio__508->SetBinContent(9,0.2862221);
   data_mc_ratio__508->SetBinContent(10,0.3096449);
   data_mc_ratio__508->SetBinContent(11,0.3716129);
   data_mc_ratio__508->SetBinContent(12,0.2287385);
   data_mc_ratio__508->SetBinContent(13,0.467596);
   data_mc_ratio__508->SetBinContent(14,0.1855458);
   data_mc_ratio__508->SetBinContent(15,0.2083043);
   data_mc_ratio__508->SetBinContent(16,0.1885784);
   data_mc_ratio__508->SetBinContent(17,0.2129771);
   data_mc_ratio__508->SetBinContent(18,0.1053311);
   data_mc_ratio__508->SetBinContent(19,0.08229844);
   data_mc_ratio__508->SetBinContent(20,0.1358765);
   data_mc_ratio__508->SetBinContent(21,0.3934529);
   data_mc_ratio__508->SetBinContent(22,2.929422);
   data_mc_ratio__508->SetBinError(1,0.0004571058);
   data_mc_ratio__508->SetBinError(2,0.0009806179);
   data_mc_ratio__508->SetBinError(3,0.001405827);
   data_mc_ratio__508->SetBinError(4,0.002152706);
   data_mc_ratio__508->SetBinError(5,0.002465647);
   data_mc_ratio__508->SetBinError(6,0.00338185);
   data_mc_ratio__508->SetBinError(7,0.004358131);
   data_mc_ratio__508->SetBinError(8,0.007231066);
   data_mc_ratio__508->SetBinError(9,0.006154247);
   data_mc_ratio__508->SetBinError(10,0.008000333);
   data_mc_ratio__508->SetBinError(11,0.0114356);
   data_mc_ratio__508->SetBinError(12,0.008554336);
   data_mc_ratio__508->SetBinError(13,0.02229177);
   data_mc_ratio__508->SetBinError(14,0.01101012);
   data_mc_ratio__508->SetBinError(15,0.01503307);
   data_mc_ratio__508->SetBinError(16,0.01743408);
   data_mc_ratio__508->SetBinError(17,0.02459248);
   data_mc_ratio__508->SetBinError(18,0.01955949);
   data_mc_ratio__508->SetBinError(19,0.01840249);
   data_mc_ratio__508->SetBinError(20,0.06076584);
   data_mc_ratio__508->SetBinError(21,0.1759575);
   data_mc_ratio__508->SetBinError(22,1.691302);
   data_mc_ratio__508->SetMinimum(0.4);
   data_mc_ratio__508->SetMaximum(1.6);
   data_mc_ratio__508->SetEntries(19.99386);
   data_mc_ratio__508->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__508->SetLineColor(ci);
   data_mc_ratio__508->SetLineWidth(2);
   data_mc_ratio__508->SetMarkerStyle(20);
   data_mc_ratio__508->SetMarkerSize(1.2);
   data_mc_ratio__508->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__508->GetXaxis()->SetRange(1,50);
   data_mc_ratio__508->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__508->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__508->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__508->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__508->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__508->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__508->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__508->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__508->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__508->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__508->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__508->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__508->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__508->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__508->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__508->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__508->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1508[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_mc_statistical_error_fy1508[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1508[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_mc_statistical_error_fey1508[50] = {
   0.02360835,
   0.02096661,
   0.03215013,
   0.04747562,
   0.06349338,
   0.06687701,
   0.1169076,
   0.07005124,
   0.1646704,
   0.1575654,
   0.1671475,
   0.2352402,
   0.1017952,
   0.3268574,
   0.4852788,
   0.5925701,
   0.5175461,
   0.7105518,
   0.7743837,
   0.6966046,
   0.6285739,
   0.2736245,
   0.488182,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1508,Graph_from_mc_statistical_error_fy1508,Graph_from_mc_statistical_error_fex1508,Graph_from_mc_statistical_error_fey1508);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1508 = new TH1F("Graph_Graph_from_mc_statistical_error1508","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1508->SetMinimum(0.07073959);
   Graph_Graph_from_mc_statistical_error1508->SetMaximum(1.92926);
   Graph_Graph_from_mc_statistical_error1508->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1508->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1508->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1508->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1508->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1508->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1508->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1508->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1508->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1508->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1508->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1508->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1508->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1508->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1508->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1508->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1508);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_both_17->cd();
   Aplanarity_both_17->Modified();
   Aplanarity_both_17->cd();
   Aplanarity_both_17->SetSelected(Aplanarity_both_17);
}
