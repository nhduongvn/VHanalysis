#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_16()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Tue Sep  5 11:02:15 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(0,0,1,1);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetFillStyle(4000);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetFrameFillStyle(1000);
   Aplanarity_algo_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-6177.093,1.052419,6170925);
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
   st->SetMaximum(5553215);
   
   TH1F *st_stack_118 = new TH1F("st_stack_118","",50,0,1);
   st_stack_118->SetMinimum(0.01);
   st_stack_118->SetMaximum(5553215);
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
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,2200214);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,350116.1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,74440.44);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,16877.55);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,3542.605);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,1189.107);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,115.4541);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,105.5329);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,36.68908);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,11.26493);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,10.44725);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,3.367961);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,15.41324);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,1.93987);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,37547.95);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,17406.42);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,4556.908);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,2130.964);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,748.607);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,424.4565);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,41.95935);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,40.33617);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,20.99781);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,11.26493);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,10.44725);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,3.367961);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,12.0388);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,1.93987);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(133403);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,14745.14);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,2092.04);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,463.9864);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,130.636);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,43.3652);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,16.73489);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,7.897867);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,4.060735);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,1.48547);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.9320209);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.5135863);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.3993656);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,0.08156662);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,0.2708114);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,0.07652617);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(18,0.01663799);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,43.9283);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,16.37664);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,7.683329);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,4.149019);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,2.293279);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,1.453816);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,1.004808);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.781865);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.4958084);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.2941713);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.244898);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.2080615);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,0.07132158);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,0.2147962);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,0.05062004);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(18,0.01663799);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(355416);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_3 = new TH1D("VbbHcc_algo_Aplanarity_stack_3","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(1,267276);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(2,35732.32);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(3,7492.457);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(4,2114.776);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(5,705.033);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(6,280.1215);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(7,124.7421);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(8,57.01359);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(9,30.27849);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(10,14.24845);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(11,9.15364);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(12,5.16017);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(13,3.568742);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(14,1.681098);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(15,1.035069);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(16,0.5366877);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(17,0.3476945);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(18,0.2415103);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(19,0.03581466);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(22,0.03072364);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(1,118.0181);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(2,42.54281);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(3,19.30642);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(4,10.16298);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(5,5.807465);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(6,3.649411);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(7,2.421952);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(8,1.621198);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(9,1.186048);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(10,0.7986853);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(11,0.647524);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(12,0.4868574);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(13,0.4123619);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(14,0.2785664);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(15,0.2091496);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(16,0.1606668);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(17,0.1274772);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(18,0.09940655);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(19,0.03581466);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(22,0.03072364);
   VbbHcc_algo_Aplanarity_stack_3->SetEntries(6564600);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_4 = new TH1D("VbbHcc_algo_Aplanarity_stack_4","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(1,10727.25);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(2,1362.01);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(3,318.3278);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(4,68.45616);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(5,23.42758);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(6,5.402809);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(7,5.506933);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(8,2.532284);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(9,0.3794122);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(10,0.2468423);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(11,0.1271494);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(13,0.2009486);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(1,78.01064);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(2,31.97194);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(3,16.26591);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(4,6.899603);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(5,5.25695);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(6,2.655086);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(7,2.805032);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(8,1.973983);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(9,0.270522);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(10,0.1966584);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(11,0.09059632);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(13,0.2009486);
   VbbHcc_algo_Aplanarity_stack_4->SetEntries(93738);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_5 = new TH1D("VbbHcc_algo_Aplanarity_stack_5","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(1,5617.626);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(2,634.1624);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(3,142.2546);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(4,26.6843);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(5,3.845076);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(6,7.357886);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(7,5.650766);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(8,0.3983807);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(9,0.3811393);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(10,0.2578444);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(11,0.02166571);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(1,79.55161);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(2,32.59022);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(3,15.04362);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(4,6.441144);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(5,0.9770378);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(6,4.992086);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(7,4.987661);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(8,0.2942605);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(9,0.3513091);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(10,0.2352612);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(11,0.02166571);
   VbbHcc_algo_Aplanarity_stack_5->SetEntries(71880);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_6 = new TH1D("VbbHcc_algo_Aplanarity_stack_6","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(1,55.99477);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(2,5.025076);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(3,1.134483);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(4,0.3054822);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(5,0.08772261);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(7,0.06968364);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(1,2.542318);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(2,0.7399734);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(3,0.3456541);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(4,0.1764176);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(5,0.08772261);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(7,0.06968364);
   VbbHcc_algo_Aplanarity_stack_6->SetEntries(573);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_7 = new TH1D("VbbHcc_algo_Aplanarity_stack_7","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(1,89.90557);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(2,10.13379);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(3,2.08279);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(4,0.2938515);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(5,0.2507553);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(6,0.1780332);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(7,0.08744308);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(1,2.887466);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(2,0.9451663);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(3,0.4329796);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(4,0.1543556);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(5,0.145229);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(6,0.1267066);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(7,0.08744308);
   VbbHcc_algo_Aplanarity_stack_7->SetEntries(1159);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_8 = new TH1D("VbbHcc_algo_Aplanarity_stack_8","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(1,115.6519);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(2,15.5879);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(3,2.326376);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(4,0.4984337);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(6,0.1716056);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(1,4.941221);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(2,1.805156);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(3,0.661492);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(4,0.3562816);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(6,0.1716056);
   VbbHcc_algo_Aplanarity_stack_8->SetEntries(665);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_9 = new TH1D("VbbHcc_algo_Aplanarity_stack_9","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(1,73.67307);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(2,6.767997);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(3,1.140486);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(4,0.2771021);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(5,0.06345032);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(6,0.02098822);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(7,0.004964298);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(8,0.007027793);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(9,0.001886221);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(10,0.001037855);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(1,0.3027379);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(2,0.08994199);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(3,0.03672339);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(4,0.01805414);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(5,0.008460901);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(6,0.004812542);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(7,0.002268007);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(8,0.002894277);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(9,0.001369183);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(10,0.001037855);
   VbbHcc_algo_Aplanarity_stack_9->SetEntries(72469);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_10 = new TH1D("VbbHcc_algo_Aplanarity_stack_10","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(1,30.04193);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(2,3.349542);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(3,0.642268);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(4,0.1392934);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(5,0.04541169);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(6,0.01454054);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(7,0.004740466);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(8,0.002637741);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(9,0.001466048);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(10,0.0005684325);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(11,0.0002412116);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(12,9.602353e-05);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(1,0.09781195);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(2,0.03233603);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(3,0.01412525);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(4,0.006563613);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(5,0.003647089);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(6,0.002128995);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(7,0.001182126);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(8,0.000904947);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(9,0.0006658306);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(10,0.0003678036);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(11,0.0002412116);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(12,9.602353e-05);
   VbbHcc_algo_Aplanarity_stack_10->SetEntries(112352);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_11 = new TH1D("VbbHcc_algo_Aplanarity_stack_11","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(1,0.690956);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(2,0.04937799);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(3,0.01254755);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(4,0.004178867);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(6,0.002192605);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(1,0.03927195);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(2,0.01054777);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(3,0.005160555);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(4,0.002959077);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(6,0.002192605);
   VbbHcc_algo_Aplanarity_stack_11->SetEntries(376);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_12 = new TH1D("VbbHcc_algo_Aplanarity_stack_12","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(1,0.2708498);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(2,0.0350512);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(3,0.006869039);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(4,0.001315612);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(5,0.000745945);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(1,0.008829179);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(2,0.003174437);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(3,0.001368587);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(4,0.0005942915);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(5,0.000431681);
   VbbHcc_algo_Aplanarity_stack_12->SetEntries(1132);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Aplanarity__235 = new TH1D("VbbHcc_algo_Aplanarity__235","",50,0,1);
   VbbHcc_algo_Aplanarity__235->SetBinContent(1,712286);
   VbbHcc_algo_Aplanarity__235->SetBinContent(2,89434);
   VbbHcc_algo_Aplanarity__235->SetBinContent(3,19863);
   VbbHcc_algo_Aplanarity__235->SetBinContent(4,5257);
   VbbHcc_algo_Aplanarity__235->SetBinContent(5,1524);
   VbbHcc_algo_Aplanarity__235->SetBinContent(6,548);
   VbbHcc_algo_Aplanarity__235->SetBinContent(7,220);
   VbbHcc_algo_Aplanarity__235->SetBinContent(8,99);
   VbbHcc_algo_Aplanarity__235->SetBinContent(9,56);
   VbbHcc_algo_Aplanarity__235->SetBinContent(10,32);
   VbbHcc_algo_Aplanarity__235->SetBinContent(11,21);
   VbbHcc_algo_Aplanarity__235->SetBinContent(12,8);
   VbbHcc_algo_Aplanarity__235->SetBinContent(13,7);
   VbbHcc_algo_Aplanarity__235->SetBinContent(14,3);
   VbbHcc_algo_Aplanarity__235->SetBinContent(15,2);
   VbbHcc_algo_Aplanarity__235->SetBinContent(16,4);
   VbbHcc_algo_Aplanarity__235->SetBinContent(17,1);
   VbbHcc_algo_Aplanarity__235->SetBinContent(18,2);
   VbbHcc_algo_Aplanarity__235->SetEntries(829416);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity__235->SetLineColor(ci);
   VbbHcc_algo_Aplanarity__235->SetLineWidth(2);
   VbbHcc_algo_Aplanarity__235->SetMarkerStyle(20);
   VbbHcc_algo_Aplanarity__235->SetMarkerSize(1.2);
   VbbHcc_algo_Aplanarity__235->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity__235->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__235->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity__235->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__235->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__235->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__235->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__235->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity__235->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__235->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fx1235[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fy1235[50] = { 2498947, 389977.6, 82864.81, 19219.62, 4318.724, 1499.112, 259.4186, 169.5476, 69.21694, 26.9517, 20.26354, 8.927593, 19.2645, 1.95191, 3.051465, 0.5366877, 0.3476945,
   0.2581483, 0.03581466, 0, 0, 0.03072364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fex1235[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fey1235[50] = { 37548.33, 17406.54, 4557.01, 2131.013, 748.6522, 424.5123, 42.429, 40.4256, 21.0418, 11.3012, 10.47058, 3.409323, 12.04775, 0.3517622, 1.951769, 0.1606668, 0.1274772,
   0.1007893, 0.03581466, 0, 0, 0.03072364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_algo_Aplanarity_fx1235,Graph_from_VbbHcc_algo_Aplanarity_fy1235,Graph_from_VbbHcc_algo_Aplanarity_fex1235,Graph_from_VbbHcc_algo_Aplanarity_fey1235);
   gre->SetName("Graph_from_VbbHcc_algo_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Aplanarity1235 = new TH1F("Graph_Graph_from_VbbHcc_algo_Aplanarity1235","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1235->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1235->SetMaximum(2790145);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1235->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1235->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Aplanarity1235->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1235->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1235->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1235->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1235->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1235->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1235->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1235->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1235->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Aplanarity1235);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_algo_16->cd();
  
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
   data_mc_ratio__236->SetBinContent(1,0.2850345);
   data_mc_ratio__236->SetBinContent(2,0.2293311);
   data_mc_ratio__236->SetBinContent(3,0.2397037);
   data_mc_ratio__236->SetBinContent(4,0.2735226);
   data_mc_ratio__236->SetBinContent(5,0.352882);
   data_mc_ratio__236->SetBinContent(6,0.3655498);
   data_mc_ratio__236->SetBinContent(7,0.8480503);
   data_mc_ratio__236->SetBinContent(8,0.5839069);
   data_mc_ratio__236->SetBinContent(9,0.8090504);
   data_mc_ratio__236->SetBinContent(10,1.187309);
   data_mc_ratio__236->SetBinContent(11,1.036344);
   data_mc_ratio__236->SetBinContent(12,0.8960982);
   data_mc_ratio__236->SetBinContent(13,0.3633626);
   data_mc_ratio__236->SetBinContent(14,1.536956);
   data_mc_ratio__236->SetBinContent(15,0.6554229);
   data_mc_ratio__236->SetBinContent(16,7.453124);
   data_mc_ratio__236->SetBinContent(17,2.876088);
   data_mc_ratio__236->SetBinContent(18,7.747484);
   data_mc_ratio__236->SetBinError(1,0.0003377304);
   data_mc_ratio__236->SetBinError(2,0.0007668522);
   data_mc_ratio__236->SetBinError(3,0.001700796);
   data_mc_ratio__236->SetBinError(4,0.003772456);
   data_mc_ratio__236->SetBinError(5,0.009039347);
   data_mc_ratio__236->SetBinError(6,0.01561551);
   data_mc_ratio__236->SetBinError(7,0.05717554);
   data_mc_ratio__236->SetBinError(8,0.05868485);
   data_mc_ratio__236->SetBinError(9,0.1081139);
   data_mc_ratio__236->SetBinError(10,0.2098886);
   data_mc_ratio__236->SetBinError(11,0.2261489);
   data_mc_ratio__236->SetBinError(12,0.3168186);
   data_mc_ratio__236->SetBinError(13,0.1373382);
   data_mc_ratio__236->SetBinError(14,0.8873621);
   data_mc_ratio__236->SetBinError(15,0.463454);
   data_mc_ratio__236->SetBinError(16,3.726562);
   data_mc_ratio__236->SetBinError(17,2.876088);
   data_mc_ratio__236->SetBinError(18,5.478299);
   data_mc_ratio__236->SetMinimum(0.4);
   data_mc_ratio__236->SetMaximum(1.6);
   data_mc_ratio__236->SetEntries(11.03697);
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
   Double_t Graph_from_mc_statistical_error_fey1236[50] = { 0.01502566, 0.04463472, 0.0549933, 0.110877, 0.1733503, 0.2831759, 0.1635542, 0.2384322, 0.3039978, 0.4193132, 0.5167203, 0.381886, 0.6253858, 0.1802143, 0.6396169, 0.2993674, 0.3666358,
   0.3904318, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   Aplanarity_algo_16->cd();
   Aplanarity_algo_16->Modified();
   Aplanarity_algo_16->cd();
   Aplanarity_algo_16->SetSelected(Aplanarity_algo_16);
}
