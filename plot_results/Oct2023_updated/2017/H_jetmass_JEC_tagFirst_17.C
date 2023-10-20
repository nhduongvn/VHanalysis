#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_JEC_tagFirst_17()
{
//=========Macro generated from canvas: H_jetmass_JEC_tagFirst_17/H_jetmass_JEC_tagFirst_17
//=========  (Fri Oct 20 11:03:41 2023) by ROOT version 6.28/04
   TCanvas *H_jetmass_JEC_tagFirst_17 = new TCanvas("H_jetmass_JEC_tagFirst_17", "H_jetmass_JEC_tagFirst_17",0,0,600,600);
   H_jetmass_JEC_tagFirst_17->SetHighLightColor(2);
   H_jetmass_JEC_tagFirst_17->Range(0,0,1,1);
   H_jetmass_JEC_tagFirst_17->SetFillColor(0);
   H_jetmass_JEC_tagFirst_17->SetFillStyle(4000);
   H_jetmass_JEC_tagFirst_17->SetBorderMode(0);
   H_jetmass_JEC_tagFirst_17->SetBorderSize(2);
   H_jetmass_JEC_tagFirst_17->SetFrameFillStyle(1000);
   H_jetmass_JEC_tagFirst_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-2683.615,315.7258,2680942);
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
   st->SetMaximum(2412579);
   
   TH1F *st_stack_203 = new TH1F("st_stack_203","",150,0,300);
   st_stack_203->SetMinimum(0.01);
   st_stack_203->SetMaximum(2412579);
   st_stack_203->SetDirectory(nullptr);
   st_stack_203->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_203->SetLineColor(ci);
   st_stack_203->SetLineWidth(0);
   st_stack_203->GetXaxis()->SetRange(1,150);
   st_stack_203->GetXaxis()->SetLabelFont(42);
   st_stack_203->GetXaxis()->SetTitleOffset(1);
   st_stack_203->GetXaxis()->SetTitleFont(42);
   st_stack_203->GetYaxis()->SetTitle("Events/2.0");
   st_stack_203->GetYaxis()->SetLabelFont(42);
   st_stack_203->GetYaxis()->SetLabelSize(0.05);
   st_stack_203->GetYaxis()->SetTitleSize(0.057);
   st_stack_203->GetYaxis()->SetTitleOffset(1.2);
   st_stack_203->GetYaxis()->SetTitleFont(42);
   st_stack_203->GetZaxis()->SetLabelFont(42);
   st_stack_203->GetZaxis()->SetTitleOffset(1);
   st_stack_203->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_203);
   
   
   TH1D *VbbHcc_tagFirst_H_jetmass_JEC_stack_1 = new TH1D("VbbHcc_tagFirst_H_jetmass_JEC_stack_1","",150,0,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetBinContent(1,91000.2);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetBinContent(2,583582.4);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetBinContent(3,970310.9);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetBinContent(4,0.2042803);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetBinError(1,46035.51);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetBinError(2,13630.99);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetBinError(3,10499);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetBinError(4,0.2042803);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetEntries(171555);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetmass_JEC_stack_1,"");
   
   TH1D *VbbHcc_tagFirst_H_jetmass_JEC_stack_2 = new TH1D("VbbHcc_tagFirst_H_jetmass_JEC_stack_2","",150,0,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->SetBinContent(1,7.696313);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->SetBinContent(2,10913.46);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->SetBinContent(3,6874.882);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->SetBinError(1,1.300447);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->SetBinError(2,53.93607);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->SetBinError(3,40.33825);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->SetEntries(214700);

   ci = TColor::GetColor("#660066");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetmass_JEC_stack_2,"");
   
   TH1D *VbbHcc_tagFirst_H_jetmass_JEC_stack_3 = new TH1D("VbbHcc_tagFirst_H_jetmass_JEC_stack_3","",150,0,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->SetBinContent(1,9.261142);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->SetBinContent(2,230943.6);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->SetBinContent(3,95417.54);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->SetBinError(1,0.8897327);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->SetBinError(2,147.2469);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->SetBinError(3,93.95171);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->SetEntries(4978651);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetmass_JEC_stack_3,"");
   
   TH1D *VbbHcc_tagFirst_H_jetmass_JEC_stack_4 = new TH1D("VbbHcc_tagFirst_H_jetmass_JEC_stack_4","",150,0,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->SetBinContent(1,27.44967);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->SetBinContent(2,5623.776);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->SetBinContent(3,7835.666);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->SetBinError(1,9.255096);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->SetBinError(2,64.1079);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->SetBinError(3,47.6867);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->SetEntries(95533);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetmass_JEC_stack_4,"");
   
   TH1D *VbbHcc_tagFirst_H_jetmass_JEC_stack_5 = new TH1D("VbbHcc_tagFirst_H_jetmass_JEC_stack_5","",150,0,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->SetBinContent(1,37.15099);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->SetBinContent(2,2185.271);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->SetBinContent(3,4981.379);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->SetBinError(1,12.46694);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->SetBinError(2,66.61279);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->SetBinError(3,65.63154);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->SetEntries(45648);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetmass_JEC_stack_5,"");
   
   TH1D *VbbHcc_tagFirst_H_jetmass_JEC_stack_6 = new TH1D("VbbHcc_tagFirst_H_jetmass_JEC_stack_6","",150,0,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->SetBinContent(1,0.8356561);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->SetBinContent(2,21.59798);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->SetBinContent(3,44.649);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->SetBinError(1,0.4876239);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->SetBinError(2,2.883114);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->SetBinError(3,4.367192);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->SetEntries(204);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetmass_JEC_stack_6,"");
   
   TH1D *VbbHcc_tagFirst_H_jetmass_JEC_stack_7 = new TH1D("VbbHcc_tagFirst_H_jetmass_JEC_stack_7","",150,0,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->SetBinContent(1,1.19662);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->SetBinContent(2,84.44686);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->SetBinContent(3,83.84076);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->SetBinError(1,0.5469644);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->SetBinError(2,5.403456);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->SetBinError(3,5.764107);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->SetEntries(620);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetmass_JEC_stack_7,"");
   
   TH1D *VbbHcc_tagFirst_H_jetmass_JEC_stack_8 = new TH1D("VbbHcc_tagFirst_H_jetmass_JEC_stack_8","",150,0,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->SetBinContent(2,78.3344);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->SetBinContent(3,65.69038);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->SetBinError(2,8.274138);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->SetBinError(3,7.263392);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->SetEntries(229);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetmass_JEC_stack_8,"");
   
   TH1D *VbbHcc_tagFirst_H_jetmass_JEC_stack_9 = new TH1D("VbbHcc_tagFirst_H_jetmass_JEC_stack_9","",150,0,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->SetBinContent(1,0.03242826);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->SetBinContent(2,46.26761);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->SetBinContent(3,26.05277);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->SetBinError(1,0.007758139);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->SetBinError(2,0.3508877);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->SetBinError(3,0.2616437);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->SetEntries(39482);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetmass_JEC_stack_9,"");
   
   TH1D *VbbHcc_tagFirst_H_jetmass_JEC_stack_10 = new TH1D("VbbHcc_tagFirst_H_jetmass_JEC_stack_10","",150,0,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->SetBinContent(1,0.004473715);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->SetBinContent(2,30.89831);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->SetBinContent(3,19.27025);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->SetBinError(1,0.001307065);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->SetBinError(2,0.1090114);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->SetBinError(3,0.08609846);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->SetEntries(137175);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetmass_JEC_stack_10,"");
   
   TH1D *VbbHcc_tagFirst_H_jetmass_JEC_stack_11 = new TH1D("VbbHcc_tagFirst_H_jetmass_JEC_stack_11","",150,0,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->SetBinContent(2,1.254955);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->SetBinContent(3,0.4475389);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->SetBinError(2,0.04903826);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->SetBinError(3,0.02893792);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->SetEntries(1123);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetmass_JEC_stack_11,"");
   
   TH1D *VbbHcc_tagFirst_H_jetmass_JEC_stack_12 = new TH1D("VbbHcc_tagFirst_H_jetmass_JEC_stack_12","",150,0,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->SetBinContent(2,0.596741);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->SetBinContent(3,0.2427728);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->SetBinError(2,0.01191476);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->SetBinError(3,0.007405707);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->SetEntries(4223);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetmass_JEC_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tagFirst_H_jetmass_JEC__405 = new TH1D("VbbHcc_tagFirst_H_jetmass_JEC__405","",150,0,300);
   VbbHcc_tagFirst_H_jetmass_JEC__405->SetBinContent(1,8);
   VbbHcc_tagFirst_H_jetmass_JEC__405->SetBinContent(2,539704);
   VbbHcc_tagFirst_H_jetmass_JEC__405->SetBinContent(3,607593);
   VbbHcc_tagFirst_H_jetmass_JEC__405->SetBinContent(151,5);
   VbbHcc_tagFirst_H_jetmass_JEC__405->SetEntries(1147459);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetmass_JEC__405->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetmass_JEC__405->SetLineWidth(2);
   VbbHcc_tagFirst_H_jetmass_JEC__405->SetMarkerStyle(20);
   VbbHcc_tagFirst_H_jetmass_JEC__405->SetMarkerSize(1.2);
   VbbHcc_tagFirst_H_jetmass_JEC__405->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetmass_JEC__405->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC__405->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC__405->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC__405->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC__405->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC__405->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC__405->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC__405->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC__405->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tagFirst_H_jetmass_JEC_fx1405[150] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
   35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65,
   67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97,
   99, 101, 103, 105, 107, 109, 111, 113, 115, 117, 119, 121, 123, 125, 127, 129,
   131, 133, 135, 137, 139, 141, 143, 145, 147, 149, 151, 153, 155, 157, 159, 161,
   163, 165, 167, 169, 171, 173, 175, 177, 179, 181, 183, 185, 187, 189, 191, 193,
   195, 197, 199, 201, 203, 205, 207, 209, 211, 213, 215, 217, 219, 221, 223, 225,
   227, 229, 231, 233, 235, 237, 239, 241, 243, 245, 247, 249, 251, 253, 255, 257,
   259, 261, 263, 265, 267, 269, 271, 273, 275, 277, 279, 281, 283, 285, 287, 289,
   291, 293, 295, 297, 299 };
   Double_t Graph_from_VbbHcc_tagFirst_H_jetmass_JEC_fy1405[150] = { 91083.82, 833511.9, 1085661, 0.2042803, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   Double_t Graph_from_VbbHcc_tagFirst_H_jetmass_JEC_fex1405[150] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1 };
   Double_t Graph_from_VbbHcc_tagFirst_H_jetmass_JEC_fey1405[150] = { 46035.51, 13632.21, 10499.82, 0.2042803, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   TGraphErrors *gre = new TGraphErrors(150,Graph_from_VbbHcc_tagFirst_H_jetmass_JEC_fx1405,Graph_from_VbbHcc_tagFirst_H_jetmass_JEC_fy1405,Graph_from_VbbHcc_tagFirst_H_jetmass_JEC_fex1405,Graph_from_VbbHcc_tagFirst_H_jetmass_JEC_fey1405);
   gre->SetName("Graph_from_VbbHcc_tagFirst_H_jetmass_JEC");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1405 = new TH1F("Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1405","",150,0,330);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1405->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1405->SetMaximum(1205776);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1405->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1405->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1405->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1405->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1405->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1405->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1405->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1405->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1405->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1405->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1405->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1405);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tagFirst_H_jetmass_JEC","Data (BTagCSV, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetmass_JEC","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetmass_JEC","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetmass_JEC","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetmass_JEC","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetmass_JEC","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetmass_JEC","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetmass_JEC","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetmass_JEC","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetmass_JEC","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetmass_JEC","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetmass_JEC","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetmass_JEC","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tagFirst_H_jetmass_JEC","MC unc. (stat.)","fl");

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
   H_jetmass_JEC_tagFirst_17->cd();
  
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
   
   TH1D *data_mc_ratio__406 = new TH1D("data_mc_ratio__406","",150,0,300);
   data_mc_ratio__406->SetBinContent(1,8.783118e-05);
   data_mc_ratio__406->SetBinContent(2,0.647506);
   data_mc_ratio__406->SetBinContent(3,0.5596528);
   data_mc_ratio__406->SetBinError(1,3.105301e-05);
   data_mc_ratio__406->SetBinError(2,0.0008813857);
   data_mc_ratio__406->SetBinError(3,0.0007179799);
   data_mc_ratio__406->SetMinimum(0.4);
   data_mc_ratio__406->SetMaximum(1.6);
   data_mc_ratio__406->SetEntries(10210.42);
   data_mc_ratio__406->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__406->SetLineColor(ci);
   data_mc_ratio__406->SetLineWidth(2);
   data_mc_ratio__406->SetMarkerStyle(20);
   data_mc_ratio__406->SetMarkerSize(1.2);
   data_mc_ratio__406->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   data_mc_ratio__406->GetXaxis()->SetRange(1,150);
   data_mc_ratio__406->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__406->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__406->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__406->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__406->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__406->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__406->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__406->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__406->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__406->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__406->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__406->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__406->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__406->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__406->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__406->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1406[150] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
   35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65,
   67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97,
   99, 101, 103, 105, 107, 109, 111, 113, 115, 117, 119, 121, 123, 125, 127, 129,
   131, 133, 135, 137, 139, 141, 143, 145, 147, 149, 151, 153, 155, 157, 159, 161,
   163, 165, 167, 169, 171, 173, 175, 177, 179, 181, 183, 185, 187, 189, 191, 193,
   195, 197, 199, 201, 203, 205, 207, 209, 211, 213, 215, 217, 219, 221, 223, 225,
   227, 229, 231, 233, 235, 237, 239, 241, 243, 245, 247, 249, 251, 253, 255, 257,
   259, 261, 263, 265, 267, 269, 271, 273, 275, 277, 279, 281, 283, 285, 287, 289,
   291, 293, 295, 297, 299 };
   Double_t Graph_from_mc_statistical_error_fy1406[150] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1406[150] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fey1406[150] = { 0.5054192, 0.01635515, 0.009671366, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   gre = new TGraphErrors(150,Graph_from_mc_statistical_error_fx1406,Graph_from_mc_statistical_error_fy1406,Graph_from_mc_statistical_error_fex1406,Graph_from_mc_statistical_error_fey1406);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1406 = new TH1F("Graph_Graph_from_mc_statistical_error1406","",150,0,330);
   Graph_Graph_from_mc_statistical_error1406->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1406->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1406->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1406->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1406->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1406->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1406->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1406->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1406->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1406->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1406->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1406->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1406->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1406);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_jetmass_JEC_tagFirst_17->cd();
   H_jetmass_JEC_tagFirst_17->Modified();
   H_jetmass_JEC_tagFirst_17->cd();
   H_jetmass_JEC_tagFirst_17->SetSelected(H_jetmass_JEC_tagFirst_17);
}
