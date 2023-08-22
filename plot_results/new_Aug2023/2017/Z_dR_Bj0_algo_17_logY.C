void Z_dR_Bj0_algo_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_17/Z_dR_Bj0_algo_17
//=========  (Tue Aug 22 09:17:27 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_algo_17 = new TCanvas("Z_dR_Bj0_algo_17", "Z_dR_Bj0_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_algo_17->SetHighLightColor(2);
   Z_dR_Bj0_algo_17->Range(0,0,1,1);
   Z_dR_Bj0_algo_17->SetFillColor(0);
   Z_dR_Bj0_algo_17->SetFillStyle(4000);
   Z_dR_Bj0_algo_17->SetBorderMode(0);
   Z_dR_Bj0_algo_17->SetBorderSize(2);
   Z_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.93091,6.314516,14.73333);
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
   st->SetMaximum(2.390856e+12);
   
   TH1F *st_stack_146 = new TH1F("st_stack_146","",30,0,6);
   st_stack_146->SetMinimum(0.001221109);
   st_stack_146->SetMaximum(9.266265e+12);
   st_stack_146->SetDirectory(0);
   st_stack_146->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_146->SetLineColor(ci);
   st_stack_146->GetXaxis()->SetRange(1,30);
   st_stack_146->GetXaxis()->SetLabelFont(42);
   st_stack_146->GetXaxis()->SetLabelSize(0.035);
   st_stack_146->GetXaxis()->SetTitleSize(0.035);
   st_stack_146->GetXaxis()->SetTitleFont(42);
   st_stack_146->GetYaxis()->SetTitle("Events/0.2");
   st_stack_146->GetYaxis()->SetLabelFont(42);
   st_stack_146->GetYaxis()->SetLabelSize(0.05);
   st_stack_146->GetYaxis()->SetTitleSize(0.057);
   st_stack_146->GetYaxis()->SetTitleOffset(1.2);
   st_stack_146->GetYaxis()->SetTitleFont(42);
   st_stack_146->GetZaxis()->SetLabelFont(42);
   st_stack_146->GetZaxis()->SetLabelSize(0.035);
   st_stack_146->GetZaxis()->SetTitleSize(0.035);
   st_stack_146->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_146);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,92159.36);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,323554.5);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,293542);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,218568.3);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,150336);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,86480.83);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,86141.74);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,57249.86);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,44998.98);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,48167.25);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,32373.26);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,38034.23);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(13,20377.29);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,17537.45);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(15,15741.28);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(16,12705.15);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(17,11145.44);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(18,5609.789);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(19,7316.275);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(20,6905.626);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(21,2879.903);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(22,2522.229);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(23,2600.107);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(24,800.432);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(25,490.3831);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(26,133.3558);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(27,73.40954);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(28,80.07765);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(29,109.4535);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(31,181.2194);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,2382.694);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,18275.52);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,7199.81);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,6387.567);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,17701.25);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,3757.369);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,17360.29);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,3328.923);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,3171.305);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,17199.64);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,2834.974);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,17124.69);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(13,1871.415);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,2027.12);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(15,1676.947);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(16,1472.034);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(17,1413.774);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(18,874.2274);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(19,1153.905);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(20,1544.414);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(21,672.9994);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(22,715.7771);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(23,1280.609);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(24,383.7558);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(25,274.6342);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(26,47.58001);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(27,37.89965);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(28,38.57987);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(29,46.30865);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(31,63.60674);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(106115);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,423.8293);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,2198.128);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,2424.454);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,1748.179);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,1113.426);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,745.1362);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,509.3042);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,392.4384);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,319.222);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,242.1574);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,208.5472);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,181.7656);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,154.4826);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,126.7977);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,122.1194);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,107.482);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(17,92.07608);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(18,77.99987);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(19,65.23585);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(20,43.15409);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(21,23.89052);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(22,13.90712);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(23,9.024661);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(24,6.398665);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(25,2.297183);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(26,3.108078);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(27,1.857203);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(28,1.907723);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(29,0.8149388);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(30,1.127312);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(31,2.224692);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,8.165268);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,17.98769);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,18.76941);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,16.0134);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,12.68342);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,10.47444);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,8.612543);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,7.502312);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,6.85492);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,5.865251);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,5.467882);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,5.091567);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,4.716916);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,4.171597);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,4.272834);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,3.931211);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(17,3.573855);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(18,3.406726);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(19,3.189865);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(20,2.536634);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(21,1.811012);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(22,1.330218);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(23,1.089615);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(24,0.9387472);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(25,0.4778387);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(26,0.7004999);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(27,0.4552755);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(28,0.5660291);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(29,0.3117815);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(30,0.4733823);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(31,0.5806864);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(142925);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_3 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(1,6845.127);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(2,43270.78);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(3,44735.59);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(4,28499.43);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(5,16923.22);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(6,10862.15);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(7,7537.754);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(8,5716.397);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(9,4513.608);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(10,3690.129);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(11,3134.762);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(12,2663.771);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(13,2356.947);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(14,2059.898);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(15,1848.581);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(16,1659.255);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(17,1439.731);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(18,1239.085);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(19,982.4659);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(20,662.7151);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(21,365.7479);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(22,172.471);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(23,86.29527);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(24,46.71014);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(25,31.37943);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(26,19.89769);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(27,14.5752);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(28,10.31726);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(29,7.703135);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(30,3.795733);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(31,12.49109);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(1,21.24768);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(2,53.20015);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(3,53.76735);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(4,42.68102);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(5,32.80693);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(6,26.24894);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(7,21.84493);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(8,19.00189);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(9,16.88635);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(10,15.24245);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(11,14.06825);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(12,12.97286);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(13,12.20825);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(14,11.41472);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(15,10.84766);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(16,10.30474);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(17,9.594548);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(18,8.92367);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(19,7.95784);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(20,6.523565);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(21,4.832267);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(22,3.296498);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(23,2.305372);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(24,1.6875);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(25,1.379393);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(26,1.088867);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(27,0.9502545);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(28,0.7848676);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(29,0.6822688);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(30,0.47052);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(31,0.8637171);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetEntries(3114170);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_4 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(1,510.8498);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(2,1987.514);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(3,1803.241);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(4,1220.446);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(5,787.8808);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(6,483.7268);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(7,374.1505);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(8,288.0999);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(9,225.4663);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(10,180.0376);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(11,141.7534);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(12,128.8894);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(13,98.82081);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(14,96.14398);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(15,76.94819);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(16,81.97727);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(17,56.76155);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(18,52.47042);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(19,32.25326);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(20,18.37587);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(21,13.7106);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(22,6.875511);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(23,4.656085);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(24,4.696837);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(25,1.418391);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(26,2.939288);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(27,1.603524);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(28,3.733404);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(29,0.4780918);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(30,0.1028374);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(31,1.500687);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(1,10.19571);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(2,27.34186);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(3,35.78527);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(4,29.81347);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(5,23.00723);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(6,16.60533);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(7,16.83604);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(8,14.60987);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(9,11.79039);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(10,9.200468);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(11,8.19531);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(12,9.032247);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(13,6.96688);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(14,7.535207);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(15,5.90538);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(16,9.410887);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(17,6.276981);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(18,6.240275);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(19,4.033527);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(20,1.9701);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(21,1.766468);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(22,1.303758);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(23,1.002367);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(24,1.035792);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(25,0.5231922);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(26,0.8769687);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(27,0.6052589);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(28,3.096943);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(29,0.2162329);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(30,0.1028374);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(31,0.5964585);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetEntries(54777);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_5 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(1,233.4853);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(2,718.6963);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(3,522.4001);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(4,415.9159);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(5,267.1523);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(6,175.5348);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(7,126.1842);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(8,110.4302);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(9,73.0161);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(10,63.37557);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(11,45.53328);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(12,36.78186);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(13,29.85867);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(14,43.61655);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(15,24.60783);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(16,18.46246);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(17,14.63778);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(18,14.38745);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(19,11.61387);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(20,8.895445);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(21,1.914782);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(22,1.716125);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(23,1.807773);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(24,0.8401506);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(25,1.542719);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(26,1.527089);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(28,1.219968);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(29,0.2144719);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(30,0.1695762);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(31,0.3678321);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(1,8.356784);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(2,33.11);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(3,24.79632);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(4,28.50241);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(5,21.77248);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(6,16.19765);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(7,13.58224);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(8,16.44173);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(9,9.873991);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(10,9.428878);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(11,5.423674);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(12,4.601848);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(13,4.329518);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(14,13.27623);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(15,3.9984);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(16,3.586951);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(17,3.085489);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(18,3.181875);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(19,3.02053);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(20,2.762727);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(21,0.5028145);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(22,0.4745378);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(23,0.6807959);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(24,0.3180152);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(25,1.194335);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(26,1.194233);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(28,1.175929);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(29,0.1754187);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(30,0.1695762);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(31,0.220304);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetEntries(15759);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(1,2.522447);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(2,7.567341);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(3,4.414282);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(4,3.783671);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(5,1.261224);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(6,0.9459177);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(7,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(8,0.6306118);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(9,1.576529);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(10,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(11,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(12,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(13,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(14,0.6306118);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(17,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(18,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(19,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(24,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(1,0.8918197);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(2,1.544677);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(3,1.179767);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(4,1.092252);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(5,0.6306118);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(6,0.5461258);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(7,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(8,0.4459099);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(9,0.7050454);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(10,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(11,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(12,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(13,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(14,0.4459099);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(17,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(18,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(19,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(24,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetEntries(83);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_7 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(1,5.568917);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(2,22.27567);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(3,13.25933);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(4,8.220783);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(5,3.447425);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(6,3.182238);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(7,3.182238);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(8,1.856306);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(9,2.386679);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(10,1.325933);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(11,1.060746);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(12,0.5303731);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(13,0.7955596);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(14,1.060746);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(15,1.325933);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(16,0.5303731);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(17,0.5303731);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(18,0.5303731);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(20,0.5303731);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(22,0.2651865);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(25,0.2651865);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(1,1.215237);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(2,2.430475);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(3,1.875152);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(4,1.476496);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(5,0.9561437);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(6,0.9186331);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(7,0.9186331);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(8,0.7016176);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(9,0.7955596);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(10,0.5929751);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(11,0.5303731);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(12,0.3750304);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(13,0.4593166);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(14,0.5303731);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(15,0.5929751);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(16,0.3750304);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(17,0.3750304);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(18,0.3750304);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(20,0.3750304);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(22,0.2651865);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(25,0.2651865);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetEntries(272);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_8 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(1,8.609671);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(2,35.19836);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(3,24.81611);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(4,10.63548);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(5,9.875799);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(6,3.291933);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(7,4.05161);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(8,3.038707);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(9,2.27903);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(10,2.025805);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(11,1.012902);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(12,2.025805);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(13,0.2532256);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(14,1.266128);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(15,1.519354);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(16,0.7596768);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(17,0.5064512);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(18,0.2532256);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(21,0.7596768);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(1,1.476546);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(2,2.985486);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(3,2.506806);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(4,1.64109);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(5,1.581393);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(6,0.9130179);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(7,1.012902);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(8,0.8771992);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(9,0.7596768);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(10,0.7162302);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(11,0.5064512);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(12,0.7162302);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(13,0.2532256);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(14,0.5662297);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(15,0.6202735);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(16,0.4385996);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(17,0.3581151);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(18,0.2532256);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(21,0.4385996);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetEntries(443);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_9 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(1,5.930709);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(2,27.36977);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(3,16.66639);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(4,8.09012);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(5,4.519097);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(6,3.162399);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(7,2.374222);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(8,2.083501);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(9,1.713639);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(10,1.392231);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(11,1.169345);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(12,0.870548);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(13,0.7639503);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(14,0.7542596);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(15,0.6428165);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(16,0.4780746);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(17,0.3973188);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(18,0.3537106);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(19,0.3246385);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(20,0.1970443);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(21,0.1130582);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(22,0.05814421);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(23,0.01615117);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(24,0.01130582);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(25,0.006460468);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(26,0.008075584);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(30,0.001615117);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(31,0.004845351);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(1,0.09787129);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(2,0.2102508);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(3,0.1640676);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(4,0.1143087);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(5,0.08543342);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(6,0.07146778);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(7,0.06192452);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(8,0.05800946);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(9,0.05260919);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(10,0.04741957);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(11,0.04345835);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(12,0.03749716);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(13,0.03512647);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(14,0.03490297);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(15,0.03222148);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(16,0.02778752);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(17,0.02533212);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(18,0.02390155);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(19,0.02289823);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(20,0.01783955);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(21,0.01351304);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(22,0.009690701);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(23,0.005107448);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(24,0.004273198);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(25,0.003230234);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(26,0.003611511);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(30,0.001615117);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(31,0.002797464);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetEntries(49206);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_10 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(1,1.879387);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(2,11.67757);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(3,10.62429);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(4,6.186437);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(5,3.652068);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(6,2.398652);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(7,1.764814);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(8,1.438306);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(9,1.1949);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(10,0.9313339);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(11,0.7503778);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(12,0.6451479);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(13,0.5836818);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(14,0.5118894);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(15,0.5005797);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(16,0.396825);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(17,0.3378175);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(18,0.2675003);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(19,0.206526);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(20,0.1519441);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(21,0.09539534);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(22,0.04278039);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(23,0.01966914);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(24,0.01426013);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(25,0.004425557);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(26,0.007375929);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(27,0.002458643);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(28,0.004917286);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(29,0.001966914);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(30,0.002950371);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(31,0.0034421);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(1,0.0303998);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(2,0.07577727);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(3,0.07227908);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(4,0.05515476);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(5,0.04237719);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(6,0.03434364);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(7,0.02945861);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(8,0.02659429);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(9,0.02423978);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(10,0.02140008);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(11,0.01920891);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(12,0.01781117);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(13,0.01694146);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(14,0.01586539);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(15,0.01568915);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(16,0.0139689);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(17,0.01288854);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(18,0.01146898);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(19,0.01007744);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(20,0.0086438);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(21,0.006848987);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(22,0.004586539);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(23,0.003109965);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(24,0.002648039);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(25,0.001475186);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(26,0.001904457);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(27,0.001099539);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(28,0.001554982);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(29,0.0009834572);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(30,0.001204484);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(31,0.001300992);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetEntries(94157);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(1,0.06162979);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(2,0.1975314);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(3,0.1311608);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(4,0.0679508);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(5,0.02844452);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(6,0.03476553);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(7,0.02054326);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(8,0.01422226);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(9,0.02212352);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(10,0.01896301);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(11,0.007901256);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(12,0.01106176);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(13,0.004740753);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(14,0.006321005);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(15,0.006321005);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(17,0.009481507);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(19,0.003160502);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(20,0.003160502);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(21,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(23,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(1,0.009868665);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(2,0.01766774);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(3,0.01439677);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(4,0.0103624);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(5,0.006704438);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(6,0.007412035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(7,0.005697677);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(8,0.004740753);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(9,0.005912758);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(10,0.005474151);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(11,0.003533549);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(12,0.004180952);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(13,0.002737075);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(14,0.003160502);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(15,0.003160502);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(17,0.003870809);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(19,0.002234813);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(20,0.002234813);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(21,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(23,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetEntries(413);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_12 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(1,0.01162592);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(2,0.07556846);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(3,0.06581099);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(4,0.04193634);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(5,0.02055296);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(6,0.0184769);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(7,0.01287155);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(8,0.01058789);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(9,0.008096621);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(10,0.009342254);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(11,0.004152113);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(12,0.004152113);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(13,0.004359719);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(14,0.002491268);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(15,0.002283662);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(16,0.003529296);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(17,0.002076057);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(18,0.001660845);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(19,0.00145324);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(20,0.000622817);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(21,0.0008304226);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(22,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(23,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(27,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(1,0.001553578);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(2,0.003960863);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(3,0.003696314);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(4,0.002950631);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(5,0.00206565);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(6,0.001958548);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(7,0.001634689);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(8,0.001482601);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(9,0.001296497);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(10,0.001392661);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(11,0.0009284407);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(12,0.0009284407);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(13,0.0009513686);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(14,0.0007191671);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(15,0.0006885501);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(16,0.00085598);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(17,0.0006565067);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(18,0.0005871975);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(19,0.0005492729);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(20,0.0003595835);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(21,0.0004152113);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(22,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(23,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(27,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetEntries(1460);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0__400 = new TH1D("VbbHcc_algo_Z_dR_Bj0__400","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(1,14854);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(2,49079);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(3,44474);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(4,33682);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(5,22457);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(6,14723);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(7,10750);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(8,8057);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(9,6506);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(10,5505);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(11,4566);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(12,3968);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(13,3284);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(14,2735);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(15,2451);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(16,2137);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(17,1716);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(18,1391);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(19,1047);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(20,791);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(21,526);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(22,278);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(23,163);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(24,130);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(25,95);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(26,62);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(27,53);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(28,41);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(29,21);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(30,24);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(31,44);
   VbbHcc_algo_Z_dR_Bj0__400->SetEntries(235639);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0__400->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0__400->SetLineWidth(2);
   VbbHcc_algo_Z_dR_Bj0__400->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR_Bj0__400->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR_Bj0__400->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0__400->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__400->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__400->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__400->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__400->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__400->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__400->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__400->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0__400->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__400->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__400->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__400->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__400->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__400->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fx1291[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fy1291[30] = {
   100197.2,
   371833.9,
   343097.7,
   250489.3,
   169450.5,
   98760.41,
   94700.86,
   63766.29,
   50139.47,
   52348.97,
   35908.18,
   41049.84,
   23020.12,
   19868.14,
   17817.53,
   14574.49,
   12750.75,
   6995.454,
   8408.695,
   7639.65,
   3286.138,
   2717.565,
   2701.929,
   859.4186,
   527.2969,
   160.8434,
   91.44814,
   97.26093,
   118.6661,
   5.200024};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fex1291[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fey1291[30] = {
   2382.84,
   18275.66,
   7200.168,
   6387.863,
   17701.32,
   3757.547,
   17360.32,
   3329.059,
   3171.395,
   17199.65,
   2835.031,
   17124.7,
   1871.479,
   2027.214,
   1677.003,
   1472.11,
   1413.828,
   874.3078,
   1153.948,
   1544.434,
   673.0218,
   715.7873,
   1280.612,
   383.7623,
   274.6413,
   47.62068,
   37.91912,
   38.73393,
   46.31557,
   0.696287};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_Bj0_fx1291,Graph_from_VbbHcc_algo_Z_dR_Bj0_fy1291,Graph_from_VbbHcc_algo_Z_dR_Bj0_fex1291,Graph_from_VbbHcc_algo_Z_dR_Bj0_fey1291);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->SetMinimum(4.053364);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->SetMaximum(429120.1);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR_Bj0","MC unc. (stat.)","fl");

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
   Z_dR_Bj0_algo_17->cd();
  
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
   
   TH1D *data_mc_ratio__401 = new TH1D("data_mc_ratio__401","",30,0,6);
   data_mc_ratio__401->SetBinContent(1,0.1482476);
   data_mc_ratio__401->SetBinContent(2,0.1319917);
   data_mc_ratio__401->SetBinContent(3,0.1296249);
   data_mc_ratio__401->SetBinContent(4,0.1344648);
   data_mc_ratio__401->SetBinContent(5,0.1325284);
   data_mc_ratio__401->SetBinContent(6,0.149078);
   data_mc_ratio__401->SetBinContent(7,0.1135153);
   data_mc_ratio__401->SetBinContent(8,0.126352);
   data_mc_ratio__401->SetBinContent(9,0.129758);
   data_mc_ratio__401->SetBinContent(10,0.1051597);
   data_mc_ratio__401->SetBinContent(11,0.1271577);
   data_mc_ratio__401->SetBinContent(12,0.09666299);
   data_mc_ratio__401->SetBinContent(13,0.1426578);
   data_mc_ratio__401->SetBinContent(14,0.1376576);
   data_mc_ratio__401->SetBinContent(15,0.1375611);
   data_mc_ratio__401->SetBinContent(16,0.146626);
   data_mc_ratio__401->SetBinContent(17,0.1345803);
   data_mc_ratio__401->SetBinContent(18,0.1988434);
   data_mc_ratio__401->SetBinContent(19,0.124514);
   data_mc_ratio__401->SetBinContent(20,0.1035388);
   data_mc_ratio__401->SetBinContent(21,0.1600663);
   data_mc_ratio__401->SetBinContent(22,0.1022975);
   data_mc_ratio__401->SetBinContent(23,0.06032728);
   data_mc_ratio__401->SetBinContent(24,0.151265);
   data_mc_ratio__401->SetBinContent(25,0.1801642);
   data_mc_ratio__401->SetBinContent(26,0.385468);
   data_mc_ratio__401->SetBinContent(27,0.5795635);
   data_mc_ratio__401->SetBinContent(28,0.4215465);
   data_mc_ratio__401->SetBinContent(29,0.1769671);
   data_mc_ratio__401->SetBinContent(30,4.615363);
   data_mc_ratio__401->SetBinContent(31,0.2224335);
   data_mc_ratio__401->SetBinError(1,0.001216371);
   data_mc_ratio__401->SetBinError(2,0.0005957977);
   data_mc_ratio__401->SetBinError(3,0.0006146605);
   data_mc_ratio__401->SetBinError(4,0.0007326722);
   data_mc_ratio__401->SetBinError(5,0.0008843679);
   data_mc_ratio__401->SetBinError(6,0.001228613);
   data_mc_ratio__401->SetBinError(7,0.001094839);
   data_mc_ratio__401->SetBinError(8,0.001407653);
   data_mc_ratio__401->SetBinError(9,0.001608708);
   data_mc_ratio__401->SetBinError(10,0.001417328);
   data_mc_ratio__401->SetBinError(11,0.001881805);
   data_mc_ratio__401->SetBinError(12,0.001534526);
   data_mc_ratio__401->SetBinError(13,0.002489396);
   data_mc_ratio__401->SetBinError(14,0.002632215);
   data_mc_ratio__401->SetBinError(15,0.002778588);
   data_mc_ratio__401->SetBinError(16,0.003171822);
   data_mc_ratio__401->SetBinError(17,0.003248799);
   data_mc_ratio__401->SetBinError(18,0.005331478);
   data_mc_ratio__401->SetBinError(19,0.003848086);
   data_mc_ratio__401->SetBinError(20,0.003681415);
   data_mc_ratio__401->SetBinError(21,0.006979224);
   data_mc_ratio__401->SetBinError(22,0.006135395);
   data_mc_ratio__401->SetBinError(23,0.004725197);
   data_mc_ratio__401->SetBinError(24,0.01326682);
   data_mc_ratio__401->SetBinError(25,0.01848445);
   data_mc_ratio__401->SetBinError(26,0.04895449);
   data_mc_ratio__401->SetBinError(27,0.07960916);
   data_mc_ratio__401->SetBinError(28,0.0658345);
   data_mc_ratio__401->SetBinError(29,0.03861738);
   data_mc_ratio__401->SetBinError(30,0.942107);
   data_mc_ratio__401->SetBinError(31,0.07900639);
   data_mc_ratio__401->SetMinimum(0.4);
   data_mc_ratio__401->SetMaximum(1.6);
   data_mc_ratio__401->SetEntries(63.7602);
   data_mc_ratio__401->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__401->SetLineColor(ci);
   data_mc_ratio__401->SetLineWidth(2);
   data_mc_ratio__401->SetMarkerStyle(20);
   data_mc_ratio__401->SetMarkerSize(1.2);
   data_mc_ratio__401->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__401->GetXaxis()->SetRange(1,30);
   data_mc_ratio__401->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__401->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__401->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__401->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__401->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__401->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__401->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__401->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__401->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__401->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__401->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__401->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__401->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__401->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__401->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__401->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__401->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1292[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1292[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1292[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1292[30] = {
   0.02378149,
   0.04915006,
   0.02098576,
   0.02550154,
   0.104463,
   0.0380471,
   0.1833175,
   0.05220719,
   0.06325147,
   0.3285576,
   0.07895224,
   0.4171685,
   0.08129754,
   0.1020334,
   0.09412097,
   0.1010059,
   0.110882,
   0.1249823,
   0.1372327,
   0.2021603,
   0.2048063,
   0.2633929,
   0.4739623,
   0.4465371,
   0.5208475,
   0.2960685,
   0.4146516,
   0.3982475,
   0.3903014,
   0.1339007};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1292,Graph_from_mc_statistical_error_fy1292,Graph_from_mc_statistical_error_fex1292,Graph_from_mc_statistical_error_fey1292);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1292 = new TH1F("Graph_Graph_from_mc_statistical_error1292","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1292->SetMinimum(0.374983);
   Graph_Graph_from_mc_statistical_error1292->SetMaximum(1.625017);
   Graph_Graph_from_mc_statistical_error1292->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1292->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1292->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1292->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1292->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1292->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1292->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1292->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1292->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1292->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1292->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1292->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1292->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1292->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1292->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1292->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1292);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_algo_17->cd();
   Z_dR_Bj0_algo_17->Modified();
   Z_dR_Bj0_algo_17->cd();
   Z_dR_Bj0_algo_17->SetSelected(Z_dR_Bj0_algo_17);
}
