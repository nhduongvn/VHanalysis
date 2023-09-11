#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_17()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Thu Sep  7 11:47:46 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(0,0,1,1);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetFillStyle(4000);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetFrameFillStyle(1000);
   Aplanarity_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-516.9417,1.052419,516434.8);
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
   st->SetMaximum(464739.6);
   
   TH1F *st_stack_47 = new TH1F("st_stack_47","",50,0,1);
   st_stack_47->SetMinimum(0.01);
   st_stack_47->SetMaximum(464739.6);
   st_stack_47->SetDirectory(nullptr);
   st_stack_47->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_47->SetLineColor(ci);
   st_stack_47->SetLineWidth(0);
   st_stack_47->GetXaxis()->SetRange(1,50);
   st_stack_47->GetXaxis()->SetLabelFont(42);
   st_stack_47->GetXaxis()->SetTitleOffset(1);
   st_stack_47->GetXaxis()->SetTitleFont(42);
   st_stack_47->GetYaxis()->SetTitle("Events/0.02");
   st_stack_47->GetYaxis()->SetLabelFont(42);
   st_stack_47->GetYaxis()->SetLabelSize(0.05);
   st_stack_47->GetYaxis()->SetTitleSize(0.057);
   st_stack_47->GetYaxis()->SetTitleOffset(1.2);
   st_stack_47->GetYaxis()->SetTitleFont(42);
   st_stack_47->GetZaxis()->SetLabelFont(42);
   st_stack_47->GetZaxis()->SetTitleOffset(1);
   st_stack_47->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_47);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,189288.6);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,55220.63);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,4200.134);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,1682.544);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,428.4851);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,159.357);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,52.53203);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,55.77264);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,126.142);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,27.93945);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,26.95413);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,33234.9);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,34870.61);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,818.3462);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,482.9804);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,210.0051);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,50.60241);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,23.61972);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,31.42764);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,106.0641);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,22.20002);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,22.20696);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(9980);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,773.9376);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,111.5104);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,32.07301);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,11.74247);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,6.559838);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,2.381064);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,1.532464);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,0.3707802);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.1319372);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.2750149);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.03867419);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,0.2227156);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.07174841);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,0.04774815);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,14.33312);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,5.737854);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,2.791921);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,1.728659);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,1.19312);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.7336107);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.6074624);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.1602374);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.07712686);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.1997617);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.02810193);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.1465595);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.07174841);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,0.04774815);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(11831);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_3 = new TH1D("VbbHcc_tags_Aplanarity_stack_3","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(1,16289.14);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(2,2355.73);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(3,638.4842);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(4,244.3512);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(5,116.8381);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(6,55.80879);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(7,31.49439);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(8,19.87123);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(9,11.27622);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(10,6.932432);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(11,3.227293);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(12,2.342636);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(13,2.54052);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(14,0.980008);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(15,0.705632);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(16,0.693568);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(17,0.08549906);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(18,0.4680807);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(19,0.3773158);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(20,0.05289664);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(1,40.3708);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(2,15.19825);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(3,7.919567);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(4,5.125319);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(5,3.560067);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(6,2.375225);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(7,1.84046);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(8,1.449583);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(9,1.025725);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(10,0.8632294);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(11,0.4926891);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(12,0.4533573);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(13,0.5246803);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(14,0.2946991);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(15,0.2278358);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(16,0.2474617);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(17,0.06209683);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(18,0.3153568);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(19,0.3773158);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(20,0.05289664);
   VbbHcc_tags_Aplanarity_stack_3->SetEntries(317714);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_4 = new TH1D("VbbHcc_tags_Aplanarity_stack_4","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(1,2417.732);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(2,266.5049);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(3,61.21647);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(4,19.01606);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(5,11.16235);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(6,5.17275);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(7,3.654356);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(8,2.053476);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(9,1.034403);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(10,1.111148);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(11,0.3692413);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(12,0.2938477);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(13,0.5157133);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(15,0.05131495);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(16,0.09463722);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(1,38.50817);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(2,13.65288);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(3,5.24589);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(4,2.139517);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(5,2.17077);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(6,1.2526);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(7,1.151065);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(8,0.7271432);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(9,0.4449018);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(10,0.6133264);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(11,0.3116801);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(12,0.1792538);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(13,0.3349632);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(15,0.05131495);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(16,0.09463722);
   VbbHcc_tags_Aplanarity_stack_4->SetEntries(14973);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_5 = new TH1D("VbbHcc_tags_Aplanarity_stack_5","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(1,239.0484);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(2,26.19243);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(3,9.626901);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(4,2.374247);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(5,0.4812038);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(6,0.5705427);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(7,0.08627621);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(8,4.990917);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(9,0.08898435);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(11,0.08627528);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(1,16.13551);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(2,4.125395);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(3,2.628457);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(4,0.5926247);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(5,0.2681196);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(6,0.329962);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(7,0.08627621);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(8,4.855603);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(9,0.08898435);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(11,0.08627528);
   VbbHcc_tags_Aplanarity_stack_5->SetEntries(2170);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_6 = new TH1D("VbbHcc_tags_Aplanarity_stack_6","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(1,0.8413915);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(2,0.5361026);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(1,0.4283341);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(2,0.5361026);
   VbbHcc_tags_Aplanarity_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_7 = new TH1D("VbbHcc_tags_Aplanarity_stack_7","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(1,5.107622);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(2,1.525274);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(3,0.1872993);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(5,0.1805954);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(1,1.370248);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(2,0.8895523);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(3,0.1872993);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(5,0.1805954);
   VbbHcc_tags_Aplanarity_stack_7->SetEntries(24);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_8 = new TH1D("VbbHcc_tags_Aplanarity_stack_8","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(1,54.01084);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(2,2.783602);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(3,0.1441474);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(4,0.2052233);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(5,0.2146217);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(1,5.449718);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(2,1.004025);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(3,0.1441474);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(4,0.2052233);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(5,0.2146217);
   VbbHcc_tags_Aplanarity_stack_8->SetEntries(178);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_9 = new TH1D("VbbHcc_tags_Aplanarity_stack_9","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(1,48.76039);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(2,3.649576);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(3,0.6336691);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(4,0.2855644);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(5,0.09373896);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(6,0.08032502);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(7,0.01487855);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(8,0.03537177);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(9,0.005910646);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(10,0.002989885);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(11,0.004041115);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(12,0.004023195);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(13,0.001355404);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(16,0.001402105);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(1,0.399713);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(2,0.1063653);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(3,0.04379303);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(4,0.0344876);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(5,0.01791283);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(6,0.01597252);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(7,0.005872227);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(8,0.01049932);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(9,0.002669331);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(10,0.002152702);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(11,0.002218748);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(12,0.002373707);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(13,0.001355404);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(16,0.001402105);
   VbbHcc_tags_Aplanarity_stack_9->SetEntries(28819);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_10 = new TH1D("VbbHcc_tags_Aplanarity_stack_10","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(1,15.43738);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(2,1.598947);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(3,0.3815444);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(4,0.1422751);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(5,0.05424667);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(6,0.0291498);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(7,0.01787367);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(8,0.009136401);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(9,0.008817804);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(10,0.005319606);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(11,0.001945626);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(12,0.001603281);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(13,0.00166312);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(14,0.0007730821);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(15,0.0004154246);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(16,0.0004443382);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(17,0.0003058984);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(18,0.001373349);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(1,0.07636481);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(2,0.02434662);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(3,0.01210556);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(4,0.007354906);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(5,0.004599012);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(6,0.00337805);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(7,0.002543779);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(8,0.001862439);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(9,0.001872096);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(10,0.001468912);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(11,0.0008982704);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(12,0.0008166274);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(13,0.0007534882);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(14,0.0005490072);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(15,0.0004154246);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(16,0.0004443382);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(17,0.0003058984);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(18,0.0008094311);
   VbbHcc_tags_Aplanarity_stack_10->SetEntries(49090);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_11 = new TH1D("VbbHcc_tags_Aplanarity_stack_11","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(1,0.1122226);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(2,0.01414773);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(3,0.000845874);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(6,0.004702949);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(1,0.01533215);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(2,0.005806688);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(3,0.000845874);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(6,0.003547622);
   VbbHcc_tags_Aplanarity_stack_11->SetEntries(87);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_12 = new TH1D("VbbHcc_tags_Aplanarity_stack_12","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(1,0.0465231);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(2,0.005423832);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(3,0.0009139155);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(4,0.0007358915);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(6,0.0001034089);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(12,0.0001924844);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(1,0.003322928);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(2,0.00118098);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(3,0.0003809877);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(4,0.0005445345);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(6,0.0001034089);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(12,0.0001924844);
   VbbHcc_tags_Aplanarity_stack_12->SetEntries(277);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Aplanarity__93 = new TH1D("VbbHcc_tags_Aplanarity__93","",50,0,1);
   VbbHcc_tags_Aplanarity__93->SetBinContent(1,45549);
   VbbHcc_tags_Aplanarity__93->SetBinContent(2,5835);
   VbbHcc_tags_Aplanarity__93->SetBinContent(3,1724);
   VbbHcc_tags_Aplanarity__93->SetBinContent(4,697);
   VbbHcc_tags_Aplanarity__93->SetBinContent(5,347);
   VbbHcc_tags_Aplanarity__93->SetBinContent(6,175);
   VbbHcc_tags_Aplanarity__93->SetBinContent(7,91);
   VbbHcc_tags_Aplanarity__93->SetBinContent(8,79);
   VbbHcc_tags_Aplanarity__93->SetBinContent(9,40);
   VbbHcc_tags_Aplanarity__93->SetBinContent(10,21);
   VbbHcc_tags_Aplanarity__93->SetBinContent(11,16);
   VbbHcc_tags_Aplanarity__93->SetBinContent(12,10);
   VbbHcc_tags_Aplanarity__93->SetBinContent(13,10);
   VbbHcc_tags_Aplanarity__93->SetBinContent(14,3);
   VbbHcc_tags_Aplanarity__93->SetBinContent(15,7);
   VbbHcc_tags_Aplanarity__93->SetBinContent(16,1);
   VbbHcc_tags_Aplanarity__93->SetEntries(54654);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity__93->SetLineColor(ci);
   VbbHcc_tags_Aplanarity__93->SetLineWidth(2);
   VbbHcc_tags_Aplanarity__93->SetMarkerStyle(20);
   VbbHcc_tags_Aplanarity__93->SetMarkerSize(1.2);
   VbbHcc_tags_Aplanarity__93->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity__93->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__93->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__93->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__93->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__93->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__93->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__93->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__93->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__93->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fx1093[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fy1093[50] = { 209132.8, 57990.68, 4942.883, 1960.662, 564.0698, 223.4044, 89.33227, 83.10355, 138.6882, 36.26636, 30.6816, 2.865018, 3.131, 1.028529, 0.7573624, 0.7900517, 0.08580496,
   0.4694541, 0.3773158, 0.05289664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fex1093[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fey1093[50] = { 33234.96, 34870.62, 818.4104, 483.0158, 210.0502, 50.68, 23.7272, 31.84226, 106.0701, 22.22616, 22.2148, 0.5090685, 0.6266099, 0.2985427, 0.2335435, 0.2649447, 0.06209758,
   0.3153578, 0.3773158, 0.05289664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_tags_Aplanarity_fx1093,Graph_from_VbbHcc_tags_Aplanarity_fy1093,Graph_from_VbbHcc_tags_Aplanarity_fex1093,Graph_from_VbbHcc_tags_Aplanarity_fey1093);
   gre->SetName("Graph_from_VbbHcc_tags_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Aplanarity1093 = new TH1F("Graph_Graph_from_VbbHcc_tags_Aplanarity1093","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1093->SetMinimum(-24236.78);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1093->SetMaximum(266604.6);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1093->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1093->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Aplanarity1093->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1093->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1093->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1093->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1093->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1093->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1093->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1093->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Aplanarity1093);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_tags_17->cd();
  
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
   
   TH1D *data_mc_ratio__94 = new TH1D("data_mc_ratio__94","",50,0,1);
   data_mc_ratio__94->SetBinContent(1,0.2177994);
   data_mc_ratio__94->SetBinContent(2,0.1006196);
   data_mc_ratio__94->SetBinContent(3,0.3487843);
   data_mc_ratio__94->SetBinContent(4,0.3554922);
   data_mc_ratio__94->SetBinContent(5,0.6151721);
   data_mc_ratio__94->SetBinContent(6,0.7833328);
   data_mc_ratio__94->SetBinContent(7,1.018669);
   data_mc_ratio__94->SetBinContent(8,0.9506212);
   data_mc_ratio__94->SetBinContent(9,0.2884167);
   data_mc_ratio__94->SetBinContent(10,0.579049);
   data_mc_ratio__94->SetBinContent(11,0.5214851);
   data_mc_ratio__94->SetBinContent(12,3.490379);
   data_mc_ratio__94->SetBinContent(13,3.193868);
   data_mc_ratio__94->SetBinContent(14,2.916786);
   data_mc_ratio__94->SetBinContent(15,9.242603);
   data_mc_ratio__94->SetBinContent(16,1.26574);
   data_mc_ratio__94->SetBinError(1,0.00102051);
   data_mc_ratio__94->SetBinError(2,0.001317232);
   data_mc_ratio__94->SetBinError(3,0.008400175);
   data_mc_ratio__94->SetBinError(4,0.01346523);
   data_mc_ratio__94->SetBinError(5,0.03302417);
   data_mc_ratio__94->SetBinError(6,0.05921439);
   data_mc_ratio__94->SetBinError(7,0.1067855);
   data_mc_ratio__94->SetBinError(8,0.1069532);
   data_mc_ratio__94->SetBinError(9,0.04560268);
   data_mc_ratio__94->SetBinError(10,0.1263589);
   data_mc_ratio__94->SetBinError(11,0.1303713);
   data_mc_ratio__94->SetBinError(12,1.103755);
   data_mc_ratio__94->SetBinError(13,1.00999);
   data_mc_ratio__94->SetBinError(14,1.684007);
   data_mc_ratio__94->SetBinError(15,3.493376);
   data_mc_ratio__94->SetBinError(16,1.26574);
   data_mc_ratio__94->SetMinimum(0.4);
   data_mc_ratio__94->SetMaximum(1.6);
   data_mc_ratio__94->SetEntries(22.81337);
   data_mc_ratio__94->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__94->SetLineColor(ci);
   data_mc_ratio__94->SetLineWidth(2);
   data_mc_ratio__94->SetMarkerStyle(20);
   data_mc_ratio__94->SetMarkerSize(1.2);
   data_mc_ratio__94->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__94->GetXaxis()->SetRange(1,50);
   data_mc_ratio__94->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__94->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__94->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__94->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__94->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__94->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__94->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__94->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__94->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__94->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__94->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__94->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__94->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__94->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__94->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__94->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1094[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1094[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1094[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1094[50] = { 0.1589179, 0.6013141, 0.1655735, 0.2463534, 0.3723834, 0.2268531, 0.2656061, 0.3831636, 0.7648094, 0.6128589, 0.724043, 0.1776842, 0.2001309, 0.2902617, 0.3083643, 0.335351, 0.7237062,
   0.6717544, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1094,Graph_from_mc_statistical_error_fy1094,Graph_from_mc_statistical_error_fex1094,Graph_from_mc_statistical_error_fey1094);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1094 = new TH1F("Graph_Graph_from_mc_statistical_error1094","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1094->SetMinimum(-0.2);
   Graph_Graph_from_mc_statistical_error1094->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1094->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1094->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1094->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1094);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tags_17->cd();
   Aplanarity_tags_17->Modified();
   Aplanarity_tags_17->cd();
   Aplanarity_tags_17->SetSelected(Aplanarity_tags_17);
}
