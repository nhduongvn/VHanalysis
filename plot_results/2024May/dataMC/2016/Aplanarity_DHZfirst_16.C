#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_DHZfirst_16()
{
//=========Macro generated from canvas: Aplanarity_DHZfirst_16/Aplanarity_DHZfirst_16
//=========  (Thu May 23 12:59:58 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_DHZfirst_16 = new TCanvas("Aplanarity_DHZfirst_16", "Aplanarity_DHZfirst_16",0,0,600,600);
   Aplanarity_DHZfirst_16->SetHighLightColor(2);
   Aplanarity_DHZfirst_16->Range(0,0,1,1);
   Aplanarity_DHZfirst_16->SetFillColor(0);
   Aplanarity_DHZfirst_16->SetFillStyle(4000);
   Aplanarity_DHZfirst_16->SetBorderMode(0);
   Aplanarity_DHZfirst_16->SetBorderSize(2);
   Aplanarity_DHZfirst_16->SetFrameFillStyle(1000);
   Aplanarity_DHZfirst_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-883.7745,1.052419,882900.7);
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
   st->SetMaximum(794522.2);
   
   TH1F *st_stack_118 = new TH1F("st_stack_118","",50,0,1);
   st_stack_118->SetMinimum(0.01);
   st_stack_118->SetMaximum(794522.2);
   st_stack_118->SetDirectory(nullptr);
   st_stack_118->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_118->SetLineColor(ci);
   st_stack_118->SetLineWidth(0);
   st_stack_118->GetXaxis()->SetRange(1,50);
   st_stack_118->GetXaxis()->SetLabelFont(42);
   st_stack_118->GetXaxis()->SetTitleOffset(1);
   st_stack_118->GetXaxis()->SetTitleFont(42);
   st_stack_118->GetYaxis()->SetTitle("Events/0.02");
   st_stack_118->GetYaxis()->SetLabelFont(42);
   st_stack_118->GetYaxis()->SetLabelSize(0.05);
   st_stack_118->GetYaxis()->SetTitleSize(0.057);
   st_stack_118->GetYaxis()->SetTitleOffset(1.2);
   st_stack_118->GetYaxis()->SetTitleFont(42);
   st_stack_118->GetZaxis()->SetLabelFont(42);
   st_stack_118->GetZaxis()->SetTitleOffset(1);
   st_stack_118->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_118);
   
   
   TH1D *VH_DHZfirst_Aplanarity_stack_1 = new TH1D("VH_DHZfirst_Aplanarity_stack_1","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(1,264980.1);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(2,33222.29);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(3,8275.42);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(4,1133.066);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(5,58.20238);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(6,2.435955);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(7,2.328363);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(8,15.74406);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(9,6.578973);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(13,20.07859);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(1,8123.369);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(2,3436.792);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(3,1900.003);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(4,414.335);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(5,24.23375);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(6,2.435955);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(7,2.328363);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(8,15.74406);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(9,6.578973);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(13,20.07859);
   VH_DHZfirst_Aplanarity_stack_1->SetEntries(16195);

   ci = TColor::GetColor("#ff6600");
   VH_DHZfirst_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_1->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_1,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_2 = new TH1D("VH_DHZfirst_Aplanarity_stack_2","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(1,1897.021);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(2,270.7653);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(3,59.53358);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(4,13.90341);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(5,4.068304);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(6,1.143475);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(7,1.097861);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(8,0.7843381);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(9,0.04909048);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(10,0.1139752);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(11,0.02464697);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(12,0.06360254);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(1,15.56487);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(2,5.811703);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(3,2.672323);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(4,1.259116);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(5,0.6815908);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(6,0.3402642);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(7,0.3784624);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(8,0.3838116);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(9,0.04205972);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(10,0.06583358);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(11,0.02464697);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(12,0.04507091);
   VH_DHZfirst_Aplanarity_stack_2->SetEntries(39210);

   ci = TColor::GetColor("#660066");
   VH_DHZfirst_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_2->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_2,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_3 = new TH1D("VH_DHZfirst_Aplanarity_stack_3","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(1,18404.3);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(2,2659.659);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(3,603.9956);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(4,185.3817);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(5,66.06923);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(6,26.17719);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(7,11.07212);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(8,5.010404);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(9,2.322559);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(10,1.88355);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(11,1.114626);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(12,0.5759612);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(13,0.479037);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(14,0.2042448);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(15,0.09836129);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(16,0.05700534);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(1,33.2999);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(2,12.46111);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(3,5.871696);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(4,3.250589);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(5,1.905983);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(6,1.185054);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(7,0.7640619);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(8,0.5109518);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(9,0.3391363);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(10,0.3005055);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(11,0.2490208);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(12,0.1703888);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(13,0.1584667);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(14,0.1124069);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(15,0.05693891);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(16,0.05700534);
   VH_DHZfirst_Aplanarity_stack_3->SetEntries(408287);

   ci = TColor::GetColor("#cc00cc");
   VH_DHZfirst_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_3->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_3,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_4 = new TH1D("VH_DHZfirst_Aplanarity_stack_4","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(1,1780.412);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(2,171.307);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(3,37.19621);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(4,7.479325);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(5,1.842683);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(6,0.06360331);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(8,0.02485038);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(1,30.56344);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(2,11.48331);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(3,5.850341);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(4,2.950362);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(5,0.5480508);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(6,0.06360331);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(8,0.02485038);
   VH_DHZfirst_Aplanarity_stack_4->SetEntries(15554);

   ci = TColor::GetColor("#00cccc");
   VH_DHZfirst_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_4->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_4,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_5 = new TH1D("VH_DHZfirst_Aplanarity_stack_5","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(1,1030.217);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(2,105.6015);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(3,25.19947);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(4,3.741808);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(5,2.307108);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(7,0.06787235);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(11,0.1352765);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(1,36.26475);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(2,14.24736);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(3,7.369983);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(4,1.67375);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(5,1.457713);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(7,0.06787235);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(11,0.1352765);
   VH_DHZfirst_Aplanarity_stack_5->SetEntries(9167);

   ci = TColor::GetColor("#ff99cc");
   VH_DHZfirst_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_5->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_5,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_6 = new TH1D("VH_DHZfirst_Aplanarity_stack_6","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_6->SetBinContent(1,6.677341);
   VH_DHZfirst_Aplanarity_stack_6->SetBinContent(2,0.3957358);
   VH_DHZfirst_Aplanarity_stack_6->SetBinContent(3,0.08282056);
   VH_DHZfirst_Aplanarity_stack_6->SetBinContent(4,0.06869593);
   VH_DHZfirst_Aplanarity_stack_6->SetBinError(1,0.871444);
   VH_DHZfirst_Aplanarity_stack_6->SetBinError(2,0.2097638);
   VH_DHZfirst_Aplanarity_stack_6->SetBinError(3,0.08282056);
   VH_DHZfirst_Aplanarity_stack_6->SetBinError(4,0.06869593);
   VH_DHZfirst_Aplanarity_stack_6->SetEntries(67);

   ci = TColor::GetColor("#9933ff");
   VH_DHZfirst_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_6->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_6,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_7 = new TH1D("VH_DHZfirst_Aplanarity_stack_7","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_7->SetBinContent(1,39.66258);
   VH_DHZfirst_Aplanarity_stack_7->SetBinContent(2,2.809891);
   VH_DHZfirst_Aplanarity_stack_7->SetBinContent(6,0.07623354);
   VH_DHZfirst_Aplanarity_stack_7->SetBinError(1,1.934269);
   VH_DHZfirst_Aplanarity_stack_7->SetBinError(2,0.5065401);
   VH_DHZfirst_Aplanarity_stack_7->SetBinError(6,0.07623354);
   VH_DHZfirst_Aplanarity_stack_7->SetEntries(469);

   ci = TColor::GetColor("#3399ff");
   VH_DHZfirst_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_7->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_7,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_8 = new TH1D("VH_DHZfirst_Aplanarity_stack_8","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_8->SetBinContent(1,27.1394);
   VH_DHZfirst_Aplanarity_stack_8->SetBinContent(2,2.700199);
   VH_DHZfirst_Aplanarity_stack_8->SetBinContent(3,0.1720666);
   VH_DHZfirst_Aplanarity_stack_8->SetBinContent(5,0.1744355);
   VH_DHZfirst_Aplanarity_stack_8->SetBinError(1,2.360449);
   VH_DHZfirst_Aplanarity_stack_8->SetBinError(2,0.7289116);
   VH_DHZfirst_Aplanarity_stack_8->SetBinError(3,0.1720666);
   VH_DHZfirst_Aplanarity_stack_8->SetBinError(5,0.1744355);
   VH_DHZfirst_Aplanarity_stack_8->SetEntries(155);

   ci = TColor::GetColor("#33ff99");
   VH_DHZfirst_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_8->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_8,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_9 = new TH1D("VH_DHZfirst_Aplanarity_stack_9","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(1,11.93461);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(2,0.9256719);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(3,0.1405279);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(4,0.02757633);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(5,0.007719617);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(6,0.003225181);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(8,0.002917125);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(1,0.114896);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(2,0.03127603);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(3,0.01235127);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(4,0.005386388);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(5,0.00293187);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(6,0.001865281);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(8,0.001685004);
   VH_DHZfirst_Aplanarity_stack_9->SetEntries(12341);

   ci = TColor::GetColor("#cccc00");
   VH_DHZfirst_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_9->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_9,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_10 = new TH1D("VH_DHZfirst_Aplanarity_stack_10","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(1,4.872884);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(2,0.4445117);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(3,0.07623616);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(4,0.01781434);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(5,0.002627708);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(6,0.001859368);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(7,0.0005703174);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(1,0.03963191);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(2,0.01176462);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(3,0.004782578);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(4,0.002354875);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(5,0.0008963108);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(6,0.0008045697);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(7,0.0004034712);
   VH_DHZfirst_Aplanarity_stack_10->SetEntries(17705);

   ci = TColor::GetColor("#0000cc");
   VH_DHZfirst_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_10->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_10,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_11 = new TH1D("VH_DHZfirst_Aplanarity_stack_11","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_11->SetBinContent(1,0.3988141);
   VH_DHZfirst_Aplanarity_stack_11->SetBinContent(2,0.02421101);
   VH_DHZfirst_Aplanarity_stack_11->SetBinError(1,0.02819308);
   VH_DHZfirst_Aplanarity_stack_11->SetBinError(2,0.00690051);
   VH_DHZfirst_Aplanarity_stack_11->SetEntries(220);

   ci = TColor::GetColor("#cc0000");
   VH_DHZfirst_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_11->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_11,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_12 = new TH1D("VH_DHZfirst_Aplanarity_stack_12","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(1,0.1462326);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(2,0.01253114);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(3,0.001222259);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(4,0.0007401707);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(6,0.0002570347);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(1,0.006410139);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(2,0.001817881);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(3,0.000613679);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(4,0.0004284907);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(6,0.0002570347);
   VH_DHZfirst_Aplanarity_stack_12->SetEntries(593);

   ci = TColor::GetColor("#00cc00");
   VH_DHZfirst_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_12->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_DHZfirst_Aplanarity__235 = new TH1D("VH_DHZfirst_Aplanarity__235","",50,0,1);
   VH_DHZfirst_Aplanarity__235->SetBinContent(1,357535);
   VH_DHZfirst_Aplanarity__235->SetBinContent(2,44567);
   VH_DHZfirst_Aplanarity__235->SetBinContent(3,9268);
   VH_DHZfirst_Aplanarity__235->SetBinContent(4,2135);
   VH_DHZfirst_Aplanarity__235->SetBinContent(5,529);
   VH_DHZfirst_Aplanarity__235->SetBinContent(6,159);
   VH_DHZfirst_Aplanarity__235->SetBinContent(7,61);
   VH_DHZfirst_Aplanarity__235->SetBinContent(8,21);
   VH_DHZfirst_Aplanarity__235->SetBinContent(9,18);
   VH_DHZfirst_Aplanarity__235->SetBinContent(10,7);
   VH_DHZfirst_Aplanarity__235->SetBinContent(11,3);
   VH_DHZfirst_Aplanarity__235->SetBinContent(12,6);
   VH_DHZfirst_Aplanarity__235->SetBinContent(13,4);
   VH_DHZfirst_Aplanarity__235->SetBinContent(16,1);
   VH_DHZfirst_Aplanarity__235->SetBinError(1,597.9423);
   VH_DHZfirst_Aplanarity__235->SetBinError(2,211.109);
   VH_DHZfirst_Aplanarity__235->SetBinError(3,96.27045);
   VH_DHZfirst_Aplanarity__235->SetBinError(4,46.20606);
   VH_DHZfirst_Aplanarity__235->SetBinError(5,23);
   VH_DHZfirst_Aplanarity__235->SetBinError(6,12.60952);
   VH_DHZfirst_Aplanarity__235->SetBinError(7,7.81025);
   VH_DHZfirst_Aplanarity__235->SetBinError(8,4.582576);
   VH_DHZfirst_Aplanarity__235->SetBinError(9,4.242641);
   VH_DHZfirst_Aplanarity__235->SetBinError(10,2.645751);
   VH_DHZfirst_Aplanarity__235->SetBinError(11,1.732051);
   VH_DHZfirst_Aplanarity__235->SetBinError(12,2.44949);
   VH_DHZfirst_Aplanarity__235->SetBinError(13,2);
   VH_DHZfirst_Aplanarity__235->SetBinError(16,1);
   VH_DHZfirst_Aplanarity__235->SetEntries(414363);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__235->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__235->SetLineWidth(2);
   VH_DHZfirst_Aplanarity__235->SetMarkerStyle(20);
   VH_DHZfirst_Aplanarity__235->SetMarkerSize(1.2);
   VH_DHZfirst_Aplanarity__235->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity__235->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__235->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__235->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__235->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__235->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__235->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__235->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__235->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__235->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fx1235[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fy1235[50] = { 288182.9, 36436.93, 9001.817, 1343.687, 132.6745, 29.9018, 14.56679, 21.56657, 8.950622, 1.997526, 1.27455, 0.6395638, 20.55763, 0.2042448, 0.09836129, 0.05700534, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fex1235[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fey1235[50] = { 8123.591, 3436.869, 1900.037, 414.3636, 24.36858, 2.732008, 2.480505, 15.75704, 6.587842, 0.3076323, 0.2844619, 0.176249, 20.07922, 0.1124069, 0.05693891, 0.05700534, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VH_DHZfirst_Aplanarity_fx1235,Graph_from_VH_DHZfirst_Aplanarity_fy1235,Graph_from_VH_DHZfirst_Aplanarity_fex1235,Graph_from_VH_DHZfirst_Aplanarity_fey1235);
   gre->SetName("Graph_from_VH_DHZfirst_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_Aplanarity1235 = new TH1F("Graph_Graph_from_VH_DHZfirst_Aplanarity1235","",100,0,1.1);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->SetMinimum(0);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->SetMaximum(325937.1);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_Aplanarity1235);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_Aplanarity","Data (BTagCSV, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_DHZfirst_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_DHZfirst_16->cd();
  
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
   
   TH1D *data_mc_ratio__236 = new TH1D("data_mc_ratio__236","",50,0,1);
   data_mc_ratio__236->SetBinContent(1,1.240653);
   data_mc_ratio__236->SetBinContent(2,1.223127);
   data_mc_ratio__236->SetBinContent(3,1.02957);
   data_mc_ratio__236->SetBinContent(4,1.588912);
   data_mc_ratio__236->SetBinContent(5,3.987202);
   data_mc_ratio__236->SetBinContent(6,5.317406);
   data_mc_ratio__236->SetBinContent(7,4.187607);
   data_mc_ratio__236->SetBinContent(8,0.9737293);
   data_mc_ratio__236->SetBinContent(9,2.011033);
   data_mc_ratio__236->SetBinContent(10,3.504336);
   data_mc_ratio__236->SetBinContent(11,2.353772);
   data_mc_ratio__236->SetBinContent(12,9.381395);
   data_mc_ratio__236->SetBinContent(13,0.1945749);
   data_mc_ratio__236->SetBinContent(16,17.54222);
   data_mc_ratio__236->SetBinError(1,0.002074871);
   data_mc_ratio__236->SetBinError(2,0.005793818);
   data_mc_ratio__236->SetBinError(3,0.01069456);
   data_mc_ratio__236->SetBinError(4,0.03438752);
   data_mc_ratio__236->SetBinError(5,0.1733566);
   data_mc_ratio__236->SetBinError(6,0.4216978);
   data_mc_ratio__236->SetBinError(7,0.5361682);
   data_mc_ratio__236->SetBinError(8,0.2124851);
   data_mc_ratio__236->SetBinError(9,0.4740051);
   data_mc_ratio__236->SetBinError(10,1.324514);
   data_mc_ratio__236->SetBinError(11,1.358951);
   data_mc_ratio__236->SetBinError(12,3.829938);
   data_mc_ratio__236->SetBinError(13,0.09728747);
   data_mc_ratio__236->SetBinError(16,17.54222);
   data_mc_ratio__236->SetMinimum(0.4);
   data_mc_ratio__236->SetMaximum(1.6);
   data_mc_ratio__236->SetEntries(4.603401);
   data_mc_ratio__236->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__236->SetLineColor(ci);
   data_mc_ratio__236->SetLineWidth(2);
   data_mc_ratio__236->SetMarkerStyle(20);
   data_mc_ratio__236->SetMarkerSize(1.2);
   data_mc_ratio__236->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__236->GetXaxis()->SetRange(1,50);
   data_mc_ratio__236->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__236->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__236->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__236->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__236->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__236->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__236->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__236->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__236->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__236->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__236->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__236->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__236->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__236->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__236->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__236->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1236[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1236[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1236[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1236[50] = { 0.02818901, 0.09432376, 0.2110727, 0.3083781, 0.1836719, 0.09136603, 0.1702849, 0.7306236, 0.7360206, 0.1540067, 0.2231861, 0.2755769, 0.9767283, 0.5503537, 0.5788752, 1, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1236,Graph_from_mc_statistical_error_fy1236,Graph_from_mc_statistical_error_fex1236,Graph_from_mc_statistical_error_fey1236);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1236 = new TH1F("Graph_Graph_from_mc_statistical_error1236","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1236->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1236->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1236->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1236->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1236->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1236->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1236->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1236->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1236);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_DHZfirst_16->cd();
   Aplanarity_DHZfirst_16->Modified();
   Aplanarity_DHZfirst_16->cd();
   Aplanarity_DHZfirst_16->SetSelected(Aplanarity_DHZfirst_16);
}
