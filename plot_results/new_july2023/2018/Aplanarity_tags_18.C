void Aplanarity_tags_18()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Fri Jul 14 13:38:03 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(0,0,1,1);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetFillStyle(4000);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetFrameFillStyle(1000);
   Aplanarity_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-6506.65,1.052419,6500153);
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
   st->SetMaximum(5570940);
   
   TH1F *st_stack_63 = new TH1F("st_stack_63","",50,0,1);
   st_stack_63->SetMinimum(0.01);
   st_stack_63->SetMaximum(5849487);
   st_stack_63->SetDirectory(0);
   st_stack_63->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_63->SetLineColor(ci);
   st_stack_63->GetXaxis()->SetRange(1,50);
   st_stack_63->GetXaxis()->SetLabelFont(42);
   st_stack_63->GetXaxis()->SetLabelSize(0.035);
   st_stack_63->GetXaxis()->SetTitleSize(0.035);
   st_stack_63->GetXaxis()->SetTitleFont(42);
   st_stack_63->GetYaxis()->SetTitle("Events/0.02");
   st_stack_63->GetYaxis()->SetLabelFont(42);
   st_stack_63->GetYaxis()->SetLabelSize(0.05);
   st_stack_63->GetYaxis()->SetTitleSize(0.057);
   st_stack_63->GetYaxis()->SetTitleOffset(1.2);
   st_stack_63->GetYaxis()->SetTitleFont(42);
   st_stack_63->GetZaxis()->SetLabelFont(42);
   st_stack_63->GetZaxis()->SetLabelSize(0.035);
   st_stack_63->GetZaxis()->SetTitleSize(0.035);
   st_stack_63->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_63);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,1516373);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,186761.2);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,42632.15);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,14974.26);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,5826.596);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,2891.032);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,993.0487);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,4140.135);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,467.6392);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,253.4066);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,111.3009);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(12,47.96537);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(13,476.9071);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(14,16.42552);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,40.49029);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(16,0.6916499);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(17,24.10358);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,16585.43);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,6724.81);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,2538.47);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,1604.127);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,814.5691);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,624.4434);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,126.5087);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,3145.942);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,81.31475);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,74.41819);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,32.15647);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(12,20.6954);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(13,430.2147);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(14,12.45187);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,18.2618);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(16,0.6916499);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(17,16.65228);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(155876);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,17379.76);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,2328.928);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,611.7146);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,225.8261);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,92.93891);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,39.41688);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,23.49278);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,16.24388);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,7.315925);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,3.441013);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,1.884002);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,1.8971);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,1.318557);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,0.7903632);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(15,0.5002709);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(16,0.4357542);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,0.5235543);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(18,0.1232521);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,65.81411);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,22.72868);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,12.86635);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,7.111936);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,5.137516);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,2.782677);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,3.519774);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,1.975517);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,1.171829);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.8294095);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.6121523);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.6045717);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.4813496);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,0.4145559);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(15,0.3461683);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(16,0.3133641);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,0.3313189);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(18,0.07547179);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(222347);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_3 = new TH1D("VbbHcc_tags_Aplanarity_stack_3","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(1,324305.7);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(2,43484.97);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(3,11246.58);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(4,4044.503);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(5,1851.845);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(6,935.8454);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(7,524.7621);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(8,308.5342);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(9,178.1827);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(10,119.9904);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(11,76.97093);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(12,51.45652);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(13,28.81389);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(14,20.75908);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(15,11.31954);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(16,6.366813);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(17,5.44089);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(18,2.345653);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(19,1.50839);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(20,0.2050616);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(21,0.4600923);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(22,0.07727437);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(1,165.415);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(2,60.10626);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(3,30.64432);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(4,18.00463);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(5,12.64905);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(6,8.632613);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(7,6.425691);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(8,4.961212);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(9,3.708733);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(10,3.05322);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(11,2.367757);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(12,2.024836);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(13,1.459227);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(14,3.338045);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(15,0.9320277);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(16,0.6844052);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(17,1.014903);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(18,0.4256436);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(19,0.3394282);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(20,0.1185586);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(21,0.170563);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(22,0.07727437);
   VbbHcc_tags_Aplanarity_stack_3->SetEntries(5745643);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_4 = new TH1D("VbbHcc_tags_Aplanarity_stack_4","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(1,13215.78);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(2,1448.994);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(3,349.3827);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(4,115.6632);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(5,54.51374);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(6,24.97954);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(7,16.49678);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(8,8.526835);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(9,6.036224);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(10,3.4419);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(11,1.885585);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(12,0.6762746);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(13,0.5095053);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(14,0.3180424);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(15,0.2594278);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(16,0.1030044);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(17,0.01344924);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(18,0.5829431);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(19,0.1251113);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(1,83.52353);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(2,30.60887);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(3,12.92294);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(4,6.24834);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(5,4.103612);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(6,2.82354);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(7,5.63336);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(8,1.350748);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(9,1.291911);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(10,1.371584);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(11,0.6568297);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(12,0.3166977);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(13,0.2545936);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(14,0.1837528);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(15,0.1895646);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(16,0.1030044);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(17,0.01344924);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(18,0.4908676);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(19,0.1251113);
   VbbHcc_tags_Aplanarity_stack_4->SetEntries(86588);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_5 = new TH1D("VbbHcc_tags_Aplanarity_stack_5","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(1,6861.227);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(2,692.6485);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(3,228.4279);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(4,67.55859);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(5,30.93641);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(6,25.16147);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(7,10.44204);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(8,6.604331);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(9,0.7874803);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(10,1.474238);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(11,0.5130401);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(12,1.105534);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(14,0.1552484);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(16,0.1282162);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(17,0.1333172);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(18,2.226874);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(1,103.838);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(2,31.00284);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(3,25.69435);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(4,8.7053);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(5,8.236539);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(6,10.28363);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(7,3.611317);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(8,2.704193);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(9,0.3275299);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(10,0.5024007);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(11,0.3482045);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(12,0.6223202);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(14,0.1361624);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(16,0.1282162);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(17,0.1333172);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(18,2.226874);
   VbbHcc_tags_Aplanarity_stack_5->SetEntries(38399);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_6 = new TH1D("VbbHcc_tags_Aplanarity_stack_6","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(1,38.79577);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(2,3.873265);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(3,0.7907203);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(5,0.7365655);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(7,0.3114526);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(1,3.543161);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(2,1.096487);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(3,0.4679991);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(5,0.5209373);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(7,0.3114526);
   VbbHcc_tags_Aplanarity_stack_6->SetEntries(144);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_7 = new TH1D("VbbHcc_tags_Aplanarity_stack_7","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(1,101.9852);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(2,11.17732);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(3,2.810611);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(4,2.522183);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(1,4.994412);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(2,1.675239);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(3,0.8337996);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(4,0.8064935);
   VbbHcc_tags_Aplanarity_stack_7->SetEntries(512);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_8 = new TH1D("VbbHcc_tags_Aplanarity_stack_8","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(1,106.7796);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(2,8.491138);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(3,1.809256);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(4,0.2135524);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(1,5.140852);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(2,1.41822);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(3,0.649122);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(4,0.2135524);
   VbbHcc_tags_Aplanarity_stack_8->SetEntries(509);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_9 = new TH1D("VbbHcc_tags_Aplanarity_stack_9","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(1,73.78926);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(2,6.492004);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(3,1.455245);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(4,0.4255115);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(5,0.2287625);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(6,0.09682476);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(7,0.04759279);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(8,0.04979518);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(9,0.01312116);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(10,0.02539124);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(11,0.01719895);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(14,0.004879847);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(16,0.005410653);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(18,0.002315574);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(1,0.4873265);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(2,0.1344075);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(3,0.06238046);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(4,0.03409469);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(5,0.02464415);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(6,0.0156543);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(7,0.01112063);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(8,0.01249455);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(9,0.00594117);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(10,0.008217007);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(11,0.007081154);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(14,0.003450874);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(16,0.003826404);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(18,0.002315574);
   VbbHcc_tags_Aplanarity_stack_9->SetEntries(32696);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_10 = new TH1D("VbbHcc_tags_Aplanarity_stack_10","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(1,67.31972);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(2,7.708958);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(3,1.820926);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(4,0.6024073);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(5,0.2941126);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(6,0.1208743);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(7,0.08857467);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(8,0.03962177);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(9,0.0241315);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(10,0.01781177);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(11,0.007760174);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(12,0.006019071);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(13,0.003202285);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(14,0.003296665);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(16,0.0009236812);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(17,0.0006814223);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(19,0.0006814223);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(21,0.000620625);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(1,0.2070501);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(2,0.0700415);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(3,0.03398526);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(4,0.01959302);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(5,0.01363528);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(6,0.00870813);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(7,0.007502239);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(8,0.00501405);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(9,0.003920312);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(10,0.003316277);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(11,0.002221926);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(12,0.001871714);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(13,0.001433608);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(14,0.00147553);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(16,0.0006919539);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(17,0.0006814223);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(19,0.0006814223);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(21,0.000620625);
   VbbHcc_tags_Aplanarity_stack_10->SetEntries(124885);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_11 = new TH1D("VbbHcc_tags_Aplanarity_stack_11","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(1,2.02937);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(2,0.1679141);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(3,0.03445536);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(4,0.005491045);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(5,0.004530286);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(6,0.001731544);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(7,0.005607871);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(8,0.003340468);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(1,0.08199593);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(2,0.02129369);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(3,0.009445465);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(4,0.003885096);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(5,0.003208831);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(6,0.001731544);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(7,0.003983941);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(8,0.003340468);
   VbbHcc_tags_Aplanarity_stack_11->SetEntries(903);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_12 = new TH1D("VbbHcc_tags_Aplanarity_stack_12","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(1,0.9805894);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(2,0.09894524);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(3,0.02245398);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(4,0.006146334);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(5,0.002229413);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(6,0.0007406657);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(8,0.001490461);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(9,0.001061152);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(10,0.0002658739);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(12,0.0006439316);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(14,0.0006549438);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(1,0.01911658);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(2,0.005832765);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(3,0.002774989);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(4,0.001442313);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(5,0.0009226276);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(6,0.0005321741);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(8,0.0006847317);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(9,0.0006205479);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(10,0.0002658739);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(12,0.0004556166);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(14,0.0004677797);
   VbbHcc_tags_Aplanarity_stack_12->SetEntries(3336);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Aplanarity__125 = new TH1D("VbbHcc_tags_Aplanarity__125","",50,0,1);
   VbbHcc_tags_Aplanarity__125->SetBinContent(0,2);
   VbbHcc_tags_Aplanarity__125->SetBinContent(1,2506923);
   VbbHcc_tags_Aplanarity__125->SetBinContent(2,326751);
   VbbHcc_tags_Aplanarity__125->SetBinContent(3,84593);
   VbbHcc_tags_Aplanarity__125->SetBinContent(4,28443);
   VbbHcc_tags_Aplanarity__125->SetBinContent(5,11775);
   VbbHcc_tags_Aplanarity__125->SetBinContent(6,5818);
   VbbHcc_tags_Aplanarity__125->SetBinContent(7,3079);
   VbbHcc_tags_Aplanarity__125->SetBinContent(8,1788);
   VbbHcc_tags_Aplanarity__125->SetBinContent(9,1070);
   VbbHcc_tags_Aplanarity__125->SetBinContent(10,710);
   VbbHcc_tags_Aplanarity__125->SetBinContent(11,429);
   VbbHcc_tags_Aplanarity__125->SetBinContent(12,284);
   VbbHcc_tags_Aplanarity__125->SetBinContent(13,197);
   VbbHcc_tags_Aplanarity__125->SetBinContent(14,81);
   VbbHcc_tags_Aplanarity__125->SetBinContent(15,65);
   VbbHcc_tags_Aplanarity__125->SetBinContent(16,43);
   VbbHcc_tags_Aplanarity__125->SetBinContent(17,32);
   VbbHcc_tags_Aplanarity__125->SetBinContent(18,12);
   VbbHcc_tags_Aplanarity__125->SetBinContent(19,9);
   VbbHcc_tags_Aplanarity__125->SetBinContent(20,1);
   VbbHcc_tags_Aplanarity__125->SetBinContent(21,1);
   VbbHcc_tags_Aplanarity__125->SetEntries(2972106);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity__125->SetLineColor(ci);
   VbbHcc_tags_Aplanarity__125->SetLineWidth(2);
   VbbHcc_tags_Aplanarity__125->SetMarkerStyle(20);
   VbbHcc_tags_Aplanarity__125->SetMarkerSize(1.2);
   VbbHcc_tags_Aplanarity__125->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity__125->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__125->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__125->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__125->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__125->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__125->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__125->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__125->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity__125->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__125->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__125->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__125->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__125->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__125->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fx1125[50] = {
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
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fy1125[50] = {
   1878528,
   234754.8,
   55076.99,
   19431.59,
   7858.096,
   3916.656,
   1568.696,
   4480.139,
   659.9998,
   381.7976,
   192.5794,
   103.1075,
   507.5522,
   38.45709,
   52.56953,
   7.731772,
   30.21547,
   5.281038,
   1.634182,
   0.2050616,
   0.4607129,
   0.07727437,
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
   0,
   0};
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fex1125[50] = {
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
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fey1125[50] = {
   16586.93,
   6725.258,
   2538.85,
   1604.279,
   814.7356,
   624.6003,
   126.8976,
   3145.948,
   81.41863,
   74.49974,
   32.2579,
   20.81472,
   430.2176,
   12.90023,
   18.28983,
   1.035399,
   16.68701,
   2.320947,
   0.3617524,
   0.1185586,
   0.1705641,
   0.07727437,
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
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_tags_Aplanarity_fx1125,Graph_from_VbbHcc_tags_Aplanarity_fy1125,Graph_from_VbbHcc_tags_Aplanarity_fex1125,Graph_from_VbbHcc_tags_Aplanarity_fey1125);
   gre->SetName("Graph_from_VbbHcc_tags_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Aplanarity1125 = new TH1F("Graph_Graph_from_VbbHcc_tags_Aplanarity1125","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->SetMaximum(2084626);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Aplanarity1125);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_tags_18->cd();
  
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
   
   TH1D *data_mc_ratio__126 = new TH1D("data_mc_ratio__126","",50,0,1);
   data_mc_ratio__126->SetBinContent(1,1.334515);
   data_mc_ratio__126->SetBinContent(2,1.391882);
   data_mc_ratio__126->SetBinContent(3,1.535904);
   data_mc_ratio__126->SetBinContent(4,1.463751);
   data_mc_ratio__126->SetBinContent(5,1.498455);
   data_mc_ratio__126->SetBinContent(6,1.485451);
   data_mc_ratio__126->SetBinContent(7,1.962777);
   data_mc_ratio__126->SetBinContent(8,0.3990948);
   data_mc_ratio__126->SetBinContent(9,1.621213);
   data_mc_ratio__126->SetBinContent(10,1.859624);
   data_mc_ratio__126->SetBinContent(11,2.227652);
   data_mc_ratio__126->SetBinContent(12,2.754408);
   data_mc_ratio__126->SetBinContent(13,0.3881374);
   data_mc_ratio__126->SetBinContent(14,2.106244);
   data_mc_ratio__126->SetBinContent(15,1.236458);
   data_mc_ratio__126->SetBinContent(16,5.561467);
   data_mc_ratio__126->SetBinContent(17,1.05906);
   data_mc_ratio__126->SetBinContent(18,2.272281);
   data_mc_ratio__126->SetBinContent(19,5.507341);
   data_mc_ratio__126->SetBinContent(20,4.876582);
   data_mc_ratio__126->SetBinContent(21,2.170549);
   data_mc_ratio__126->SetBinError(1,0.0008428551);
   data_mc_ratio__126->SetBinError(2,0.002434972);
   data_mc_ratio__126->SetBinError(3,0.005280767);
   data_mc_ratio__126->SetBinError(4,0.008679195);
   data_mc_ratio__126->SetBinError(5,0.01380903);
   data_mc_ratio__126->SetBinError(6,0.01947473);
   data_mc_ratio__126->SetBinError(7,0.03537253);
   data_mc_ratio__126->SetBinError(8,0.009438268);
   data_mc_ratio__126->SetBinError(9,0.04956191);
   data_mc_ratio__126->SetBinError(10,0.06979044);
   data_mc_ratio__126->SetBinError(11,0.1075521);
   data_mc_ratio__126->SetBinError(12,0.163444);
   data_mc_ratio__126->SetBinError(13,0.02765364);
   data_mc_ratio__126->SetBinError(14,0.2340271);
   data_mc_ratio__126->SetBinError(15,0.1533637);
   data_mc_ratio__126->SetBinError(16,0.8481158);
   data_mc_ratio__126->SetBinError(17,0.1872171);
   data_mc_ratio__126->SetBinError(18,0.6559509);
   data_mc_ratio__126->SetBinError(19,1.83578);
   data_mc_ratio__126->SetBinError(20,4.876582);
   data_mc_ratio__126->SetBinError(21,2.170549);
   data_mc_ratio__126->SetMinimum(0.4);
   data_mc_ratio__126->SetMaximum(1.6);
   data_mc_ratio__126->SetEntries(42.7489);
   data_mc_ratio__126->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__126->SetLineColor(ci);
   data_mc_ratio__126->SetLineWidth(2);
   data_mc_ratio__126->SetMarkerStyle(20);
   data_mc_ratio__126->SetMarkerSize(1.2);
   data_mc_ratio__126->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__126->GetXaxis()->SetRange(1,50);
   data_mc_ratio__126->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__126->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__126->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__126->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__126->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__126->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__126->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__126->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__126->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__126->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__126->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__126->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__126->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__126->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__126->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__126->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__126->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1126[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1126[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1126[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1126[50] = {
   0.008829748,
   0.02864801,
   0.04609639,
   0.0825604,
   0.1036811,
   0.1594729,
   0.08089369,
   0.7021989,
   0.1233616,
   0.1951289,
   0.1675044,
   0.2018741,
   0.8476321,
   0.3354447,
   0.3479169,
   0.1339149,
   0.552267,
   0.4394868,
   0.221366,
   0.5781609,
   0.3702178,
   1,
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
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1126,Graph_from_mc_statistical_error_fy1126,Graph_from_mc_statistical_error_fex1126,Graph_from_mc_statistical_error_fey1126);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1126 = new TH1F("Graph_Graph_from_mc_statistical_error1126","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1126->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1126->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1126->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1126->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1126->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1126->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1126->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1126->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1126->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1126->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1126->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1126->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1126->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1126->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1126->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1126->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1126->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1126->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1126);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}
