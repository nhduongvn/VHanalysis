#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algoFirst_17()
{
//=========Macro generated from canvas: Sphericity_algoFirst_17/Sphericity_algoFirst_17
//=========  (Tue Nov 14 11:28:15 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_algoFirst_17 = new TCanvas("Sphericity_algoFirst_17", "Sphericity_algoFirst_17",0,0,600,600);
   Sphericity_algoFirst_17->SetHighLightColor(2);
   Sphericity_algoFirst_17->Range(0,0,1,1);
   Sphericity_algoFirst_17->SetFillColor(0);
   Sphericity_algoFirst_17->SetFillStyle(4000);
   Sphericity_algoFirst_17->SetBorderMode(0);
   Sphericity_algoFirst_17->SetBorderSize(2);
   Sphericity_algoFirst_17->SetFrameFillStyle(1000);
   Sphericity_algoFirst_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-149.9805,1.052419,149840.5);
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
   st->SetMaximum(134841.4);
   
   TH1F *st_stack_39 = new TH1F("st_stack_39","",25,0,1);
   st_stack_39->SetMinimum(0.01);
   st_stack_39->SetMaximum(134841.4);
   st_stack_39->SetDirectory(nullptr);
   st_stack_39->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_39->SetLineColor(ci);
   st_stack_39->SetLineWidth(0);
   st_stack_39->GetXaxis()->SetRange(1,25);
   st_stack_39->GetXaxis()->SetLabelFont(42);
   st_stack_39->GetXaxis()->SetTitleOffset(1);
   st_stack_39->GetXaxis()->SetTitleFont(42);
   st_stack_39->GetYaxis()->SetTitle("Events/0.04");
   st_stack_39->GetYaxis()->SetLabelFont(42);
   st_stack_39->GetYaxis()->SetLabelSize(0.05);
   st_stack_39->GetYaxis()->SetTitleSize(0.057);
   st_stack_39->GetYaxis()->SetTitleOffset(1.2);
   st_stack_39->GetYaxis()->SetTitleFont(42);
   st_stack_39->GetZaxis()->SetLabelFont(42);
   st_stack_39->GetZaxis()->SetTitleOffset(1);
   st_stack_39->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_39);
   
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_1 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_1","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(1,55013.56);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(2,47916.07);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(3,26283.04);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(4,13468.34);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(5,8559.842);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(6,2871.546);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(7,3100.764);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(8,94.60936);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(9,39.22578);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(10,16.17786);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(11,12.86386);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(12,23.53202);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(13,11.71571);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(14,2.707437);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(17,1.022029);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(1,2749.912);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(2,2703.638);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(3,2378.932);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(4,1447.203);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(5,1659.546);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(6,702.4595);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(7,2829.135);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(8,27.04141);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(9,27.99473);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(10,13.78126);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(11,6.649922);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(12,20.09386);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(13,8.338447);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(14,2.707437);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(17,1.022029);
   VbbHcc_algoFirst_Sphericity_stack_1->SetEntries(13967);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algoFirst_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_2 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_2","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(1,406.8622);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(2,362.0646);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(3,213.8533);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(4,116.8427);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(5,49.38411);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(6,26.2881);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(7,8.574013);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(8,3.605031);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(9,1.493814);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(10,0.4182258);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(11,0.1274164);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(12,0.2531443);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(13,0.4444236);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(14,0.4593156);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(15,0.06741132);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(16,0.09540343);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(19,0.02948166);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(1,8.757407);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(2,7.95707);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(3,6.559592);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(4,4.870672);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(5,3.235627);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(6,2.721522);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(7,1.476357);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(8,0.7942697);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(9,0.5612518);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(10,0.1658133);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(11,0.09195984);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(12,0.2165928);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(13,0.375454);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(14,0.3017305);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(15,0.04785907);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(16,0.05570146);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(19,0.04428941);
   VbbHcc_algoFirst_Sphericity_stack_2->SetEntries(19516);

   ci = TColor::GetColor("#660066");
   VbbHcc_algoFirst_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_2,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_3 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_3","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(1,4612.691);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(2,4351.146);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(3,2461.401);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(4,1307.085);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(5,684.4344);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(6,325.6397);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(7,145.1067);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(8,69.43305);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(9,32.90096);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(10,20.92769);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(11,11.38717);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(12,7.507599);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(13,4.17698);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(14,2.795049);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(15,1.903602);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(16,1.035539);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(17,0.8576668);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(18,0.6045273);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(19,0.2473457);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(20,0.1407149);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(21,0.08054386);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(22,0.02234377);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(23,0.02053093);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(1,18.63546);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(2,17.93991);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(3,13.6151);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(4,9.821049);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(5,7.240186);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(6,4.948927);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(7,3.202213);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(8,2.206674);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(9,1.528217);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(10,1.164077);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(11,0.8760147);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(12,0.6694647);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(13,0.4639165);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(14,0.3713107);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(15,0.3195973);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(16,0.2238368);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(17,0.225946);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(18,0.1704764);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(19,0.1007271);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(20,0.08464763);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(21,0.06295239);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(22,0.02234377);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(23,0.02053093);
   VbbHcc_algoFirst_Sphericity_stack_3->SetEntries(264355);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algoFirst_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_3->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_3,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_4 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_4","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(1,420.9065);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(2,342.6994);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(3,206.6917);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(4,124.63);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(5,66.47357);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(6,25.95654);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(7,9.293012);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(8,2.301902);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(9,0.3541966);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(10,0.4599212);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(14,0.1054903);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(17,0.04756646);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(1,13.98113);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(2,14.60114);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(3,9.42089);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(4,8.679473);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(5,5.723108);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(6,2.754014);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(7,1.559429);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(8,0.7400929);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(9,0.1597967);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(10,0.3341641);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(14,0.1054903);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(17,0.04756646);
   VbbHcc_algoFirst_Sphericity_stack_4->SetEntries(8145);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algoFirst_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_4->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_4,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_5 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_5","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(1,200.587);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(2,167.9183);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(3,93.53016);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(4,51.09099);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(5,29.89969);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(6,17.88801);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(7,7.421947);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(8,0.5455678);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(9,0.1085216);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(10,0.1518046);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(12,0.1038073);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(13,0.01888421);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(14,0.0007322768);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(15,0.04337177);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(1,11.14689);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(2,13.04188);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(3,8.868325);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(4,5.481196);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(5,4.829989);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(6,4.950334);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(7,3.838253);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(8,0.2517254);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(9,0.1074372);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(10,0.1518046);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(12,0.1038073);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(13,0.01888421);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(14,0.0007322768);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(15,0.04337177);
   VbbHcc_algoFirst_Sphericity_stack_5->SetEntries(3610);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algoFirst_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_5->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_5,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_6 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_6","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_6->SetBinContent(1,4.664568);
   VbbHcc_algoFirst_Sphericity_stack_6->SetBinContent(2,1.091879);
   VbbHcc_algoFirst_Sphericity_stack_6->SetBinContent(3,0.4891395);
   VbbHcc_algoFirst_Sphericity_stack_6->SetBinError(1,1.245499);
   VbbHcc_algoFirst_Sphericity_stack_6->SetBinError(2,0.570001);
   VbbHcc_algoFirst_Sphericity_stack_6->SetBinError(3,0.3518516);
   VbbHcc_algoFirst_Sphericity_stack_6->SetEntries(22);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algoFirst_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_6->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_6,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_7 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_7","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinContent(1,8.814657);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinContent(2,7.867293);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinContent(3,3.363957);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinContent(4,2.342452);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinContent(5,2.089383);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinContent(6,1.383468);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinContent(7,0.3373847);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinError(1,1.963755);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinError(2,1.513772);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinError(3,1.003183);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinError(4,0.9659165);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinError(5,0.7402381);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinError(6,0.6200284);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinError(7,0.3373847);
   VbbHcc_algoFirst_Sphericity_stack_7->SetEntries(106);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algoFirst_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_7->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_7,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_8 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_8","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinContent(1,6.106188);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinContent(2,5.210357);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinContent(3,2.469675);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinContent(4,3.656139);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinContent(5,1.690203);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinContent(6,0.5761601);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinError(1,1.832413);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinError(2,1.767655);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinError(3,1.141904);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinError(4,1.949217);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinError(5,0.8488932);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinError(6,0.5761601);
   VbbHcc_algoFirst_Sphericity_stack_8->SetEntries(40);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algoFirst_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_8->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_8,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_9 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_9","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(1,2.67926);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(2,2.333802);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(3,1.308478);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(4,0.8866344);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(5,0.6541523);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(6,0.279862);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(7,0.09196161);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(8,0.008017425);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(9,0.00401612);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(11,0.003181495);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(1,0.07597557);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(2,0.06838734);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(3,0.05211892);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(4,0.04206847);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(5,0.03817081);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(6,0.02521013);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(7,0.0148081);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(8,0.003430053);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(9,0.00285336);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(11,0.002534673);
   VbbHcc_algoFirst_Sphericity_stack_9->SetEntries(5585);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algoFirst_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_9->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_9,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_10 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_10","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(1,1.605042);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(2,1.527342);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(3,0.8832438);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(4,0.5372743);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(5,0.3061704);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(6,0.1486723);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(7,0.04605218);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(8,0.01332082);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(9,0.003197071);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(10,0.001885747);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(11,0.001053048);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(12,0.0009565744);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(13,0.001043147);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(14,0.0003981895);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(16,0.000252707);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(18,0.0003137445);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(1,0.02306989);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(2,0.02232386);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(3,0.01708432);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(4,0.01335656);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(5,0.01003121);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(6,0.007056243);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(7,0.003911819);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(8,0.002029181);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(9,0.001033578);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(10,0.0007929096);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(11,0.0006209109);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(12,0.0004820207);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(13,0.0005228442);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(14,0.0003981895);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(16,0.000252707);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(18,0.0003137445);
   VbbHcc_algoFirst_Sphericity_stack_10->SetEntries(16167);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algoFirst_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_10->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_10,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_11 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_11","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinContent(1,0.1280477);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinContent(2,0.08054933);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinContent(3,0.05867178);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinContent(4,0.03135164);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinContent(5,0.02800649);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinContent(6,0.01128462);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinContent(9,0.002418137);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinError(1,0.01411197);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinError(2,0.01166625);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinError(3,0.0102772);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinError(4,0.007122652);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinError(5,0.007416084);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinError(6,0.003858097);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinError(9,0.001711941);
   VbbHcc_algoFirst_Sphericity_stack_11->SetEntries(279);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algoFirst_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_11->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_11,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_12 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_12","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(1,0.04114306);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(2,0.04490003);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(3,0.02054238);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(4,0.01224409);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(5,0.00933151);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(6,0.003297845);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(7,0.001807048);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(8,0.0009647378);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(10,0.0002373703);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(11,0.0001783633);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(1,0.002819508);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(2,0.002920475);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(3,0.001937357);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(4,0.001523846);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(5,0.001286113);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(6,0.0007806259);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(7,0.0006282205);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(8,0.0004067551);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(10,0.0002373703);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(11,0.0001783633);
   VbbHcc_algoFirst_Sphericity_stack_12->SetEntries(816);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algoFirst_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_12->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algoFirst_Sphericity__77 = new TH1D("VbbHcc_algoFirst_Sphericity__77","",25,0,1);
   VbbHcc_algoFirst_Sphericity__77->SetBinContent(1,9402);
   VbbHcc_algoFirst_Sphericity__77->SetBinContent(2,7395);
   VbbHcc_algoFirst_Sphericity__77->SetBinContent(3,4224);
   VbbHcc_algoFirst_Sphericity__77->SetBinContent(4,2412);
   VbbHcc_algoFirst_Sphericity__77->SetBinContent(5,1316);
   VbbHcc_algoFirst_Sphericity__77->SetBinContent(6,552);
   VbbHcc_algoFirst_Sphericity__77->SetBinContent(7,208);
   VbbHcc_algoFirst_Sphericity__77->SetBinContent(8,76);
   VbbHcc_algoFirst_Sphericity__77->SetBinContent(9,30);
   VbbHcc_algoFirst_Sphericity__77->SetBinContent(10,24);
   VbbHcc_algoFirst_Sphericity__77->SetBinContent(11,8);
   VbbHcc_algoFirst_Sphericity__77->SetBinContent(12,7);
   VbbHcc_algoFirst_Sphericity__77->SetBinContent(13,2);
   VbbHcc_algoFirst_Sphericity__77->SetBinContent(14,3);
   VbbHcc_algoFirst_Sphericity__77->SetBinContent(15,3);
   VbbHcc_algoFirst_Sphericity__77->SetBinContent(16,2);
   VbbHcc_algoFirst_Sphericity__77->SetBinContent(17,1);
   VbbHcc_algoFirst_Sphericity__77->SetBinContent(18,1);
   VbbHcc_algoFirst_Sphericity__77->SetEntries(25690);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity__77->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity__77->SetLineWidth(2);
   VbbHcc_algoFirst_Sphericity__77->SetMarkerStyle(20);
   VbbHcc_algoFirst_Sphericity__77->SetMarkerSize(1.2);
   VbbHcc_algoFirst_Sphericity__77->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity__77->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity__77->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity__77->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity__77->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity__77->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity__77->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity__77->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity__77->GetZaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity__77->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algoFirst_Sphericity_fx1077[25] = { 0.02, 0.06, 0.1, 0.14, 0.18, 0.22, 0.26, 0.3, 0.34, 0.38, 0.42, 0.46, 0.5, 0.54, 0.58, 0.62, 0.66,
   0.7, 0.74, 0.78, 0.82, 0.86, 0.9, 0.94, 0.98 };
   Double_t Graph_from_VbbHcc_algoFirst_Sphericity_fy1077[25] = { 60678.64, 53158.06, 29267.11, 15075.45, 9394.811, 3269.721, 3271.637, 170.5172, 74.0929, 38.13763, 24.38286, 31.39752, 16.35704, 6.068422, 2.014386, 1.131195, 1.927262,
   0.604841, 0.2768274, 0.1407149, 0.08054386, 0.02234377, 0.02053093, 0, 0 };
   Double_t Graph_from_VbbHcc_algoFirst_Sphericity_fex1077[25] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02,
   0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_VbbHcc_algoFirst_Sphericity_fey1077[25] = { 2750.049, 2703.781, 2379.015, 1447.282, 1659.582, 702.5056, 2829.14, 27.15418, 28.04269, 13.8362, 6.708004, 20.10644, 8.359799, 2.75141, 0.3260583, 0.2306635, 1.047787,
   0.1704767, 0.110034, 0.08464763, 0.06295239, 0.02234377, 0.02053093, 0, 0 };
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_algoFirst_Sphericity_fx1077,Graph_from_VbbHcc_algoFirst_Sphericity_fy1077,Graph_from_VbbHcc_algoFirst_Sphericity_fex1077,Graph_from_VbbHcc_algoFirst_Sphericity_fey1077);
   gre->SetName("Graph_from_VbbHcc_algoFirst_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algoFirst_Sphericity1077 = new TH1F("Graph_Graph_from_VbbHcc_algoFirst_Sphericity1077","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1077->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1077->SetMaximum(69771.56);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1077->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1077->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1077->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1077->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1077->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1077->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1077->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1077->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1077->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1077->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1077->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algoFirst_Sphericity1077);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","Data (BTagCSV, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algoFirst_Sphericity","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_algoFirst_17->cd();
  
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
   
   TH1D *data_mc_ratio__78 = new TH1D("data_mc_ratio__78","",25,0,1);
   data_mc_ratio__78->SetBinContent(1,0.1549474);
   data_mc_ratio__78->SetBinContent(2,0.1391134);
   data_mc_ratio__78->SetBinContent(3,0.1443258);
   data_mc_ratio__78->SetBinContent(4,0.1599952);
   data_mc_ratio__78->SetBinContent(5,0.1400773);
   data_mc_ratio__78->SetBinContent(6,0.1688217);
   data_mc_ratio__78->SetBinContent(7,0.06357673);
   data_mc_ratio__78->SetBinContent(8,0.4457028);
   data_mc_ratio__78->SetBinContent(9,0.4048971);
   data_mc_ratio__78->SetBinContent(10,0.6292998);
   data_mc_ratio__78->SetBinContent(11,0.3280994);
   data_mc_ratio__78->SetBinContent(12,0.2229475);
   data_mc_ratio__78->SetBinContent(13,0.1222715);
   data_mc_ratio__78->SetBinContent(14,0.4943624);
   data_mc_ratio__78->SetBinContent(15,1.489288);
   data_mc_ratio__78->SetBinContent(16,1.768042);
   data_mc_ratio__78->SetBinContent(17,0.5188708);
   data_mc_ratio__78->SetBinContent(18,1.653327);
   data_mc_ratio__78->SetBinError(1,0.001597991);
   data_mc_ratio__78->SetBinError(2,0.001617707);
   data_mc_ratio__78->SetBinError(3,0.00222066);
   data_mc_ratio__78->SetBinError(4,0.003257754);
   data_mc_ratio__78->SetBinError(5,0.003861356);
   data_mc_ratio__78->SetBinError(6,0.00718553);
   data_mc_ratio__78->SetBinError(7,0.004408253);
   data_mc_ratio__78->SetBinError(8,0.05112562);
   data_mc_ratio__78->SetBinError(9,0.07392376);
   data_mc_ratio__78->SetBinError(10,0.1284553);
   data_mc_ratio__78->SetBinError(11,0.1160006);
   data_mc_ratio__78->SetBinError(12,0.08426625);
   data_mc_ratio__78->SetBinError(13,0.08645902);
   data_mc_ratio__78->SetBinError(14,0.2854203);
   data_mc_ratio__78->SetBinError(15,0.8598408);
   data_mc_ratio__78->SetBinError(16,1.250194);
   data_mc_ratio__78->SetBinError(17,0.5188708);
   data_mc_ratio__78->SetBinError(18,1.653327);
   data_mc_ratio__78->SetMinimum(0.4);
   data_mc_ratio__78->SetMaximum(1.6);
   data_mc_ratio__78->SetEntries(13.43652);
   data_mc_ratio__78->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__78->SetLineColor(ci);
   data_mc_ratio__78->SetLineWidth(2);
   data_mc_ratio__78->SetMarkerStyle(20);
   data_mc_ratio__78->SetMarkerSize(1.2);
   data_mc_ratio__78->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__78->GetXaxis()->SetRange(1,25);
   data_mc_ratio__78->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__78->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__78->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__78->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__78->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__78->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__78->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__78->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__78->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__78->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__78->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__78->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__78->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__78->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__78->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__78->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1078[25] = { 0.02, 0.06, 0.1, 0.14, 0.18, 0.22, 0.26, 0.3, 0.34, 0.38, 0.42, 0.46, 0.5, 0.54, 0.58, 0.62, 0.66,
   0.7, 0.74, 0.78, 0.82, 0.86, 0.9, 0.94, 0.98 };
   Double_t Graph_from_mc_statistical_error_fy1078[25] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1078[25] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02,
   0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_mc_statistical_error_fey1078[25] = { 0.04532153, 0.05086304, 0.08128632, 0.09600258, 0.1766488, 0.2148518, 0.8647475, 0.159246, 0.3784801, 0.3627967, 0.2751115, 0.6403831, 0.5110827, 0.4533979, 0.1618649, 0.2039113, 0.5436659,
   0.2818538, 0.3974825, 0.601554, 0.7815915, 1, 1, 0, 0 };
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1078,Graph_from_mc_statistical_error_fy1078,Graph_from_mc_statistical_error_fex1078,Graph_from_mc_statistical_error_fey1078);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1078 = new TH1F("Graph_Graph_from_mc_statistical_error1078","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1078->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1078->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1078->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1078->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1078->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1078->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1078->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1078->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1078->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1078->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1078->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1078->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1078->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1078);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_algoFirst_17->cd();
   Sphericity_algoFirst_17->Modified();
   Sphericity_algoFirst_17->cd();
   Sphericity_algoFirst_17->SetSelected(Sphericity_algoFirst_17);
}
