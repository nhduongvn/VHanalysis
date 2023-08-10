void Sphericity_tags_16_logY()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Thu Aug 10 12:20:16 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(0,0,1,1);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetFillStyle(4000);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetFrameFillStyle(1000);
   Sphericity_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-2.885626,1.052419,12.95485);
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
   st->SetMaximum(6.590148e+10);
   
   TH1F *st_stack_57 = new TH1F("st_stack_57","",25,0,1);
   st_stack_57->SetMinimum(0.001349628);
   st_stack_57->SetMaximum(2.348583e+11);
   st_stack_57->SetDirectory(0);
   st_stack_57->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_57->SetLineColor(ci);
   st_stack_57->GetXaxis()->SetRange(1,25);
   st_stack_57->GetXaxis()->SetLabelFont(42);
   st_stack_57->GetXaxis()->SetLabelSize(0.035);
   st_stack_57->GetXaxis()->SetTitleSize(0.035);
   st_stack_57->GetXaxis()->SetTitleFont(42);
   st_stack_57->GetYaxis()->SetTitle("Events/0.04");
   st_stack_57->GetYaxis()->SetLabelFont(42);
   st_stack_57->GetYaxis()->SetLabelSize(0.05);
   st_stack_57->GetYaxis()->SetTitleSize(0.057);
   st_stack_57->GetYaxis()->SetTitleOffset(1.2);
   st_stack_57->GetYaxis()->SetTitleFont(42);
   st_stack_57->GetZaxis()->SetLabelFont(42);
   st_stack_57->GetZaxis()->SetLabelSize(0.035);
   st_stack_57->GetZaxis()->SetTitleSize(0.035);
   st_stack_57->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_57);
   
   
   TH1D *VbbHcc_tags_Sphericity_stack_1 = new TH1D("VbbHcc_tags_Sphericity_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,68093.31);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,53012.42);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,27466.28);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,18313.35);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,6180.629);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,5607.314);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,1291.31);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,1323.231);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,697.9253);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,241.5123);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,238.1088);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,191.8697);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,118.7194);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,94.37821);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(15,74.4131);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,94.92458);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,39.88799);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(18,48.29916);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(19,17.96825);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,5274.671);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,4345.699);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,3408.367);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,2312.556);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,905.8582);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,1874.414);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,309.288);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,390.1108);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,318.4339);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,57.98671);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,63.28034);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,52.51339);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,34.16156);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,38.44359);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(15,21.3933);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,31.96839);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,23.75692);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(18,27.89522);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(19,9.020549);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(9435);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_2 = new TH1D("VbbHcc_tags_Sphericity_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,242.2449);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,185.2883);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,111.915);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,68.2478);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,36.54097);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,21.41761);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,14.00139);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,7.241858);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,6.606294);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,3.365185);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,1.908115);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,1.324791);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,1.43223);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,1.142712);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,1.308836);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,0.3723771);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,0.5419088);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,0.04827152);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,0.1249709);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,6.61672);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,5.740043);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,4.50475);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,3.649895);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,2.580061);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,2.035661);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,1.589179);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,1.141754);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,1.113474);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,0.7549499);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,0.6274208);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,0.4086581);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,0.4540511);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,0.4249609);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,0.5346282);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,0.288298);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,0.3208434);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,0.09526657);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,0.07297557);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(9214);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_2,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_3 = new TH1D("VbbHcc_tags_Sphericity_stack_3","",25,0,1);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(1,4698.77);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(2,3988.475);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(3,2290.81);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(4,1317.309);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(5,771.228);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(6,445.9446);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(7,264.4417);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(8,164.1415);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(9,107.5524);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(10,75.52008);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(11,54.35926);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(12,36.00753);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(13,26.48478);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(14,20.42475);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(15,15.22733);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(16,12.29904);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(17,8.795346);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(18,5.710207);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(19,2.714583);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(20,1.300111);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(21,0.5130947);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(22,0.07559134);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(1,18.06589);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(2,16.68413);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(3,12.6506);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(4,9.584722);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(5,7.343189);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(6,5.57882);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(7,4.26132);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(8,3.363839);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(9,2.712097);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(10,2.28401);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(11,1.948067);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(12,1.575692);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(13,1.343724);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(14,1.18762);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(15,1.022127);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(16,0.9094009);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(17,0.7774022);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(18,0.6304303);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(19,0.4259498);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(20,0.2921422);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(21,0.1960131);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(22,0.07559134);
   VbbHcc_tags_Sphericity_stack_3->SetEntries(221451);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_3->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_3,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_4 = new TH1D("VbbHcc_tags_Sphericity_stack_4","",25,0,1);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(1,722.1689);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(2,594.3846);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(3,348.5106);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(4,225.2151);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(5,97.92515);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(6,58.47949);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(7,25.74803);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(8,15.91084);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(9,12.166);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(10,11.76567);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(11,5.324681);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(12,4.314857);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(13,2.068962);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(14,2.377255);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(15,2.564052);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(16,2.083792);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(17,2.078809);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(18,0.6586578);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(19,0.3410771);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(20,0.07121139);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(21,0.0727655);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(1,20.46114);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(2,20.39036);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(3,16.31824);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(4,14.05192);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(5,4.985832);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(6,5.191266);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(7,1.988989);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(8,1.414402);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(9,1.224186);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(10,2.825337);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(11,0.831078);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(12,0.8726321);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(13,0.3879583);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(14,0.5540987);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(15,0.5714803);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(16,0.4930372);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(17,0.4769472);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(18,0.2222803);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(19,0.1533376);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(20,0.07121139);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(21,0.0727655);
   VbbHcc_tags_Sphericity_stack_4->SetEntries(14977);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_4->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_4,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_5 = new TH1D("VbbHcc_tags_Sphericity_stack_5","",25,0,1);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(1,80.6202);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(2,39.53565);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(3,33.16711);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(4,16.1531);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(5,12.31899);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(6,4.352639);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(7,3.684147);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(8,0.9134231);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(9,1.494189);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(10,1.378309);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(11,0.6795883);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(12,0.6434752);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(13,1.92856);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(14,0.09267052);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(15,0.08672542);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(16,0.2670805);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(17,0.007017162);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(18,0.07559766);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(19,0.08634022);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(20,0.178064);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(1,9.019756);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(2,3.820904);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(3,7.829263);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(4,2.367081);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(5,2.224888);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(6,0.6037053);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(7,1.072404);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(8,0.2756993);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(9,0.4720827);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(10,1.101373);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(11,0.2197854);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(12,0.2471406);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(13,1.043974);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(14,0.07692066);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(15,0.07044878);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(16,0.1412942);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(17,0.006466144);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(18,0.07531624);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(19,0.07966502);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(20,0.178064);
   VbbHcc_tags_Sphericity_stack_5->SetEntries(3105);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_5->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_5,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_6 = new TH1D("VbbHcc_tags_Sphericity_stack_6","",25,0,1);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(1,0.2932385);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(2,0.1333553);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(3,0.615672);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(4,0.2809202);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(5,0.139529);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(7,0.08576627);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(1,0.2080593);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(2,0.1333553);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(3,0.3080947);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(4,0.1987044);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(5,0.139529);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(7,0.08576627);
   VbbHcc_tags_Sphericity_stack_6->SetEntries(11);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_6->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_6,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_7 = new TH1D("VbbHcc_tags_Sphericity_stack_7","",25,0,1);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(1,1.597463);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(2,1.567767);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(3,0.4816121);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(4,0.9379762);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(5,0.2374315);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(6,0.1175925);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(7,0.3388531);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(9,0.1272975);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(12,0.1075422);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(14,0.09773476);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(1,0.4280684);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(2,0.4354872);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(3,0.2413193);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(4,0.3343424);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(5,0.1679246);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(6,0.1175925);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(7,0.195705);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(9,0.1272975);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(12,0.1075422);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(14,0.09773476);
   VbbHcc_tags_Sphericity_stack_7->SetEntries(48);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_7->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_7,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_8 = new TH1D("VbbHcc_tags_Sphericity_stack_8","",25,0,1);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(1,17.98608);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(2,11.88137);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(3,5.624898);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(4,4.501859);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(5,2.19367);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(6,2.415814);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(8,0.2634371);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(12,0.2573153);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(16,0.2151647);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(1,2.202319);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(2,1.761048);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(3,1.205275);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(4,1.092785);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(5,0.7766873);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(6,0.806271);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(8,0.2634371);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(12,0.2573153);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(16,0.2151647);
   VbbHcc_tags_Sphericity_stack_8->SetEntries(173);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_8->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_8,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_9 = new TH1D("VbbHcc_tags_Sphericity_stack_9","",25,0,1);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(1,12.75561);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(2,11.4835);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(3,6.35975);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(4,4.293397);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(5,2.837454);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(6,1.418672);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(7,0.5322013);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(8,0.230229);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(9,0.1601829);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(10,0.1255752);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(11,0.06527887);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(12,0.04696836);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(13,0.03950455);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(14,0.0281951);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(15,0.02695335);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(16,0.01605247);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(17,0.01229207);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(18,0.01197147);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(19,0.003040754);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(1,0.140755);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(2,0.1336029);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(3,0.09968283);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(4,0.08165479);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(5,0.06641127);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(6,0.0469543);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(7,0.02825522);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(8,0.01850708);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(9,0.01562542);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(10,0.01374314);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(11,0.009843449);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(12,0.008369787);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(13,0.007681122);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(14,0.006652627);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(15,0.00626499);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(16,0.004841964);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(17,0.004353702);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(18,0.00424607);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(19,0.002152051);
   VbbHcc_tags_Sphericity_stack_9->SetEntries(28234);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_9->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_9,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_10 = new TH1D("VbbHcc_tags_Sphericity_stack_10","",25,0,1);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(1,6.096862);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(2,5.114237);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(3,2.829606);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(4,1.850789);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(5,1.109019);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(6,0.6305941);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(7,0.3288859);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(8,0.1871346);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(9,0.1390203);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(10,0.1042436);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(11,0.07044158);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(12,0.05669365);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(13,0.04565653);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(14,0.03570469);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(15,0.03514264);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(16,0.02147046);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(17,0.01624033);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(18,0.01456802);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(19,0.006404467);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(20,0.00154);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(21,0.001168028);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(22,0.0008354348);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(23,0.000389678);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(1,0.04858703);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(2,0.04452513);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(3,0.03314191);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(4,0.02677369);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(5,0.02073597);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(6,0.01562552);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(7,0.01125555);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(8,0.00848743);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(9,0.007270875);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(10,0.006332875);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(11,0.005221002);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(12,0.004650134);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(13,0.004171331);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(14,0.003677689);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(15,0.003658785);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(16,0.00285128);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(17,0.002497317);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(18,0.002348098);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(19,0.001572957);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(20,0.0007734799);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(21,0.0006755663);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(22,0.0005907416);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(23,0.000389678);
   VbbHcc_tags_Sphericity_stack_10->SetEntries(48968);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_10->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_10,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_11 = new TH1D("VbbHcc_tags_Sphericity_stack_11","",25,0,1);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(1,0.04133043);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(2,0.04652795);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(3,0.008742404);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(4,0.005157262);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(6,0.002938115);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(1,0.01106653);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(2,0.01165164);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(3,0.005048622);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(4,0.003676582);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(6,0.002938115);
   VbbHcc_tags_Sphericity_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_11->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_11,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_12 = new TH1D("VbbHcc_tags_Sphericity_stack_12","",25,0,1);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(1,0.01744303);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(2,0.01387887);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(3,0.004942549);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(4,0.005428706);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(5,0.002939447);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(6,0.001133519);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(7,0.0007564142);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(8,0.0003223444);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(9,0.000691924);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(12,0.0005257999);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(1,0.002581961);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(2,0.002319443);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(3,0.001373235);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(4,0.001452699);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(5,0.001047592);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(6,0.0006546531);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(7,0.0005348718);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(8,0.0003223444);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(9,0.0004948071);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(12,0.0004108979);
   VbbHcc_tags_Sphericity_stack_12->SetEntries(127);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_12->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Sphericity__155 = new TH1D("VbbHcc_tags_Sphericity__155","",25,0,1);
   VbbHcc_tags_Sphericity__155->SetBinContent(1,34610);
   VbbHcc_tags_Sphericity__155->SetBinContent(2,24975);
   VbbHcc_tags_Sphericity__155->SetBinContent(3,14506);
   VbbHcc_tags_Sphericity__155->SetBinContent(4,8651);
   VbbHcc_tags_Sphericity__155->SetBinContent(5,5250);
   VbbHcc_tags_Sphericity__155->SetBinContent(6,3163);
   VbbHcc_tags_Sphericity__155->SetBinContent(7,1850);
   VbbHcc_tags_Sphericity__155->SetBinContent(8,1162);
   VbbHcc_tags_Sphericity__155->SetBinContent(9,818);
   VbbHcc_tags_Sphericity__155->SetBinContent(10,579);
   VbbHcc_tags_Sphericity__155->SetBinContent(11,439);
   VbbHcc_tags_Sphericity__155->SetBinContent(12,302);
   VbbHcc_tags_Sphericity__155->SetBinContent(13,248);
   VbbHcc_tags_Sphericity__155->SetBinContent(14,176);
   VbbHcc_tags_Sphericity__155->SetBinContent(15,156);
   VbbHcc_tags_Sphericity__155->SetBinContent(16,111);
   VbbHcc_tags_Sphericity__155->SetBinContent(17,90);
   VbbHcc_tags_Sphericity__155->SetBinContent(18,63);
   VbbHcc_tags_Sphericity__155->SetBinContent(19,25);
   VbbHcc_tags_Sphericity__155->SetBinContent(20,8);
   VbbHcc_tags_Sphericity__155->SetBinContent(21,2);
   VbbHcc_tags_Sphericity__155->SetBinContent(22,1);
   VbbHcc_tags_Sphericity__155->SetEntries(97209);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity__155->SetLineColor(ci);
   VbbHcc_tags_Sphericity__155->SetLineWidth(2);
   VbbHcc_tags_Sphericity__155->SetMarkerStyle(20);
   VbbHcc_tags_Sphericity__155->SetMarkerSize(1.2);
   VbbHcc_tags_Sphericity__155->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity__155->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__155->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__155->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__155->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__155->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__155->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__155->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__155->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity__155->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__155->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__155->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__155->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__155->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__155->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Sphericity_fx1113[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_VbbHcc_tags_Sphericity_fy1113[25] = {
   73875.91,
   57850.35,
   30266.61,
   19952.15,
   7105.162,
   6142.095,
   1600.472,
   1512.119,
   826.1713,
   333.7714,
   300.5161,
   234.6294,
   150.719,
   118.5772,
   93.66214,
   110.1996,
   51.3396,
   54.81843,
   21.24466,
   1.550926,
   0.5870282,
   0.07642677,
   0.000389678,
   0,
   0};
   Double_t Graph_from_VbbHcc_tags_Sphericity_fex1113[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_VbbHcc_tags_Sphericity_fey1113[25] = {
   5274.754,
   4345.785,
   3408.442,
   2312.623,
   905.9084,
   1874.431,
   309.3298,
   390.1298,
   318.4501,
   58.11576,
   63.31927,
   52.54718,
   34.20913,
   38.46847,
   21.43212,
   31.98746,
   23.77659,
   27.90349,
   9.032548,
   0.3494646,
   0.2090847,
   0.07559365,
   0.000389678,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_tags_Sphericity_fx1113,Graph_from_VbbHcc_tags_Sphericity_fy1113,Graph_from_VbbHcc_tags_Sphericity_fex1113,Graph_from_VbbHcc_tags_Sphericity_fey1113);
   gre->SetName("Graph_from_VbbHcc_tags_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Sphericity1113 = new TH1F("Graph_Graph_from_VbbHcc_tags_Sphericity1113","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->SetMinimum(87.06573);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->SetMaximum(87065.73);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1113->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Sphericity1113);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Sphericity","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Sphericity","MC unc. (stat.)","fl");

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
   Sphericity_tags_16->cd();
  
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
   
   TH1D *data_mc_ratio__156 = new TH1D("data_mc_ratio__156","",25,0,1);
   data_mc_ratio__156->SetBinContent(1,0.4684883);
   data_mc_ratio__156->SetBinContent(2,0.4317174);
   data_mc_ratio__156->SetBinContent(3,0.4792741);
   data_mc_ratio__156->SetBinContent(4,0.4335874);
   data_mc_ratio__156->SetBinContent(5,0.7388994);
   data_mc_ratio__156->SetBinContent(6,0.5149709);
   data_mc_ratio__156->SetBinContent(7,1.155909);
   data_mc_ratio__156->SetBinContent(8,0.7684579);
   data_mc_ratio__156->SetBinContent(9,0.9901094);
   data_mc_ratio__156->SetBinContent(10,1.73472);
   data_mc_ratio__156->SetBinContent(11,1.46082);
   data_mc_ratio__156->SetBinContent(12,1.287136);
   data_mc_ratio__156->SetBinContent(13,1.645446);
   data_mc_ratio__156->SetBinContent(14,1.484265);
   data_mc_ratio__156->SetBinContent(15,1.665561);
   data_mc_ratio__156->SetBinContent(16,1.007264);
   data_mc_ratio__156->SetBinContent(17,1.753033);
   data_mc_ratio__156->SetBinContent(18,1.149248);
   data_mc_ratio__156->SetBinContent(19,1.176766);
   data_mc_ratio__156->SetBinContent(20,5.158208);
   data_mc_ratio__156->SetBinContent(21,3.406991);
   data_mc_ratio__156->SetBinContent(22,13.08442);
   data_mc_ratio__156->SetBinError(1,0.002518245);
   data_mc_ratio__156->SetBinError(2,0.002731787);
   data_mc_ratio__156->SetBinError(3,0.003979331);
   data_mc_ratio__156->SetBinError(4,0.004661691);
   data_mc_ratio__156->SetBinError(5,0.01019778);
   data_mc_ratio__156->SetBinError(6,0.009156576);
   data_mc_ratio__156->SetBinError(7,0.02687434);
   data_mc_ratio__156->SetBinError(8,0.02254327);
   data_mc_ratio__156->SetBinError(9,0.03461836);
   data_mc_ratio__156->SetBinError(10,0.07209252);
   data_mc_ratio__156->SetBinError(11,0.06972114);
   data_mc_ratio__156->SetBinError(12,0.07406637);
   data_mc_ratio__156->SetBinError(13,0.1044859);
   data_mc_ratio__156->SetBinError(14,0.1118807);
   data_mc_ratio__156->SetBinError(15,0.1333516);
   data_mc_ratio__156->SetBinError(16,0.09560523);
   data_mc_ratio__156->SetBinError(17,0.1847859);
   data_mc_ratio__156->SetBinError(18,0.1447917);
   data_mc_ratio__156->SetBinError(19,0.2353532);
   data_mc_ratio__156->SetBinError(20,1.823702);
   data_mc_ratio__156->SetBinError(21,2.409107);
   data_mc_ratio__156->SetBinError(22,13.08442);
   data_mc_ratio__156->SetMinimum(0.4);
   data_mc_ratio__156->SetMaximum(1.6);
   data_mc_ratio__156->SetEntries(4.992893);
   data_mc_ratio__156->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__156->SetLineColor(ci);
   data_mc_ratio__156->SetLineWidth(2);
   data_mc_ratio__156->SetMarkerStyle(20);
   data_mc_ratio__156->SetMarkerSize(1.2);
   data_mc_ratio__156->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__156->GetXaxis()->SetRange(1,25);
   data_mc_ratio__156->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__156->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__156->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__156->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__156->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__156->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__156->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__156->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__156->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__156->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__156->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__156->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__156->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__156->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__156->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__156->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__156->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1114[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_mc_statistical_error_fy1114[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1114[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_mc_statistical_error_fey1114[25] = {
   0.07140019,
   0.07512116,
   0.1126139,
   0.1159085,
   0.1275,
   0.3051778,
   0.1932741,
   0.258002,
   0.3854528,
   0.1741185,
   0.2107017,
   0.2239582,
   0.2269728,
   0.324417,
   0.2288237,
   0.2902685,
   0.4631238,
   0.5090165,
   0.4251678,
   0.2253264,
   0.3561749,
   0.989099,
   1,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1114,Graph_from_mc_statistical_error_fy1114,Graph_from_mc_statistical_error_fex1114,Graph_from_mc_statistical_error_fey1114);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1114 = new TH1F("Graph_Graph_from_mc_statistical_error1114","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1114->SetMinimum(-0.2);
   Graph_Graph_from_mc_statistical_error1114->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1114->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1114->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1114->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1114->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1114->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1114->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1114->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1114->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1114->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1114->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1114->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1114->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1114->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1114->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1114->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1114->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1114);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->SetSelected(Sphericity_tags_16);
}
