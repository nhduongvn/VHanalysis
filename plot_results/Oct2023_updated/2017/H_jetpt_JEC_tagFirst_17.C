#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetpt_JEC_tagFirst_17()
{
//=========Macro generated from canvas: H_jetpt_JEC_tagFirst_17/H_jetpt_JEC_tagFirst_17
//=========  (Tue Nov 14 11:17:10 2023) by ROOT version 6.28/04
   TCanvas *H_jetpt_JEC_tagFirst_17 = new TCanvas("H_jetpt_JEC_tagFirst_17", "H_jetpt_JEC_tagFirst_17",0,0,600,600);
   H_jetpt_JEC_tagFirst_17->SetHighLightColor(2);
   H_jetpt_JEC_tagFirst_17->Range(0,0,1,1);
   H_jetpt_JEC_tagFirst_17->SetFillColor(0);
   H_jetpt_JEC_tagFirst_17->SetFillStyle(4000);
   H_jetpt_JEC_tagFirst_17->SetBorderMode(0);
   H_jetpt_JEC_tagFirst_17->SetBorderSize(2);
   H_jetpt_JEC_tagFirst_17->SetFrameFillStyle(1000);
   H_jetpt_JEC_tagFirst_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-1456.976,315.7258,1455529);
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
   st->SetMaximum(1309830);
   
   TH1F *st_stack_66 = new TH1F("st_stack_66","",150,0,300);
   st_stack_66->SetMinimum(0.01);
   st_stack_66->SetMaximum(1309830);
   st_stack_66->SetDirectory(nullptr);
   st_stack_66->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_66->SetLineColor(ci);
   st_stack_66->SetLineWidth(0);
   st_stack_66->GetXaxis()->SetRange(1,150);
   st_stack_66->GetXaxis()->SetLabelFont(42);
   st_stack_66->GetXaxis()->SetTitleOffset(1);
   st_stack_66->GetXaxis()->SetTitleFont(42);
   st_stack_66->GetYaxis()->SetTitle("Events/2.0");
   st_stack_66->GetYaxis()->SetLabelFont(42);
   st_stack_66->GetYaxis()->SetLabelSize(0.05);
   st_stack_66->GetYaxis()->SetTitleSize(0.057);
   st_stack_66->GetYaxis()->SetTitleOffset(1.2);
   st_stack_66->GetYaxis()->SetTitleFont(42);
   st_stack_66->GetZaxis()->SetLabelFont(42);
   st_stack_66->GetZaxis()->SetTitleOffset(1);
   st_stack_66->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_66);
   
   
   TH1D *VbbHcc_tagFirst_H_jetpt_JEC_stack_1 = new TH1D("VbbHcc_tagFirst_H_jetpt_JEC_stack_1","",150,0,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinContent(0,691716.8);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinContent(1,69290.54);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinContent(2,457067.5);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinContent(3,224047.5);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinContent(151,13483.32);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinError(0,11011.09);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinError(1,38757.66);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinError(2,9629.76);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinError(3,4184.414);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinError(151,12560.12);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetEntries(171555);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetpt_JEC_stack_1,"");
   
   TH1D *VbbHcc_tagFirst_H_jetpt_JEC_stack_2 = new TH1D("VbbHcc_tagFirst_H_jetpt_JEC_stack_2","",150,0,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinContent(0,7955.971);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinContent(1,43.09309);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinContent(2,6119.588);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinContent(3,1626.677);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinContent(151,2.808508);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinError(0,42.31664);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinError(1,3.189123);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinError(2,37.65756);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinError(3,18.28104);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinError(151,0.691255);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetEntries(214700);

   ci = TColor::GetColor("#660066");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetpt_JEC_stack_2,"");
   
   TH1D *VbbHcc_tagFirst_H_jetpt_JEC_stack_3 = new TH1D("VbbHcc_tagFirst_H_jetpt_JEC_stack_3","",150,0,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinContent(0,145709.2);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinContent(1,879.9934);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinContent(2,120269.1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinContent(3,21950.28);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinContent(151,4.372858);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinError(0,109.744);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinError(1,8.621515);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinError(2,99.86769);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinError(3,42.42199);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinError(151,0.5639571);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetEntries(4978651);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetpt_JEC_stack_3,"");
   
   TH1D *VbbHcc_tagFirst_H_jetpt_JEC_stack_4 = new TH1D("VbbHcc_tagFirst_H_jetpt_JEC_stack_4","",150,0,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinContent(0,5936.417);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinContent(1,34.94881);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinContent(2,4031.198);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinContent(3,1921.152);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinContent(151,11.15626);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinError(0,47.21044);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinError(1,7.561462);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinError(2,47.83029);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinError(3,21.7654);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinError(151,4.328064);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetEntries(95533);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetpt_JEC_stack_4,"");
   
   TH1D *VbbHcc_tagFirst_H_jetpt_JEC_stack_5 = new TH1D("VbbHcc_tagFirst_H_jetpt_JEC_stack_5","",150,0,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinContent(0,3271.737);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinContent(1,33.79258);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinContent(2,1795.34);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinContent(3,1265.32);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinContent(151,8.624768);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinError(0,62.48441);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinError(1,9.832176);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinError(2,47.68767);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinError(3,25.73444);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinError(151,5.683261);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetEntries(45648);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetpt_JEC_stack_5,"");
   
   TH1D *VbbHcc_tagFirst_H_jetpt_JEC_stack_6 = new TH1D("VbbHcc_tagFirst_H_jetpt_JEC_stack_6","",150,0,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinContent(0,34.94503);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinContent(1,0.4516467);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinContent(2,13.15832);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinContent(3,10.52018);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinContent(151,0.2878453);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinError(0,3.56605);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinError(1,0.3214747);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinError(2,2.183935);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinError(3,1.989576);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinError(151,0.2878453);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetEntries(204);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetpt_JEC_stack_6,"");
   
   TH1D *VbbHcc_tagFirst_H_jetpt_JEC_stack_7 = new TH1D("VbbHcc_tagFirst_H_jetpt_JEC_stack_7","",150,0,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetBinContent(0,83.59122);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetBinContent(2,46.2972);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetBinContent(3,19.03329);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetBinContent(151,1.058918);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetBinError(0,5.239569);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetBinError(2,3.912302);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetBinError(3,2.474483);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetBinError(151,0.4840218);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetEntries(620);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetpt_JEC_stack_7,"");
   
   TH1D *VbbHcc_tagFirst_H_jetpt_JEC_stack_8 = new TH1D("VbbHcc_tagFirst_H_jetpt_JEC_stack_8","",150,0,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetBinContent(0,72.96219);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetBinContent(2,38.08601);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetBinContent(3,16.40275);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetBinError(0,7.448777);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetBinError(2,5.324685);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetBinError(3,3.329901);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetEntries(229);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetpt_JEC_stack_8,"");
   
   TH1D *VbbHcc_tagFirst_H_jetpt_JEC_stack_9 = new TH1D("VbbHcc_tagFirst_H_jetpt_JEC_stack_9","",150,0,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinContent(0,32.04025);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinContent(1,0.1894569);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinContent(2,24.93179);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinContent(3,6.854433);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinContent(151,0.01077865);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinError(0,0.2742816);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinError(1,0.02034022);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinError(2,0.2418866);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinError(3,0.1260892);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinError(151,0.004418661);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetEntries(39482);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetpt_JEC_stack_9,"");
   
   TH1D *VbbHcc_tagFirst_H_jetpt_JEC_stack_10 = new TH1D("VbbHcc_tagFirst_H_jetpt_JEC_stack_10","",150,0,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetBinContent(0,22.21761);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetBinContent(1,0.1171788);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetBinContent(2,17.63852);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetBinContent(3,4.426006);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetBinError(0,0.08693012);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetBinError(1,0.006276292);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetBinError(2,0.0775708);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetBinError(3,0.03871317);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetEntries(137175);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetpt_JEC_stack_10,"");
   
   TH1D *VbbHcc_tagFirst_H_jetpt_JEC_stack_11 = new TH1D("VbbHcc_tagFirst_H_jetpt_JEC_stack_11","",150,0,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetBinContent(0,0.7548977);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetBinContent(1,0.003836026);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetBinContent(2,0.6214863);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetBinContent(3,0.1263575);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetBinError(0,0.035578);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetBinError(1,0.002286121);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetBinError(2,0.0325531);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetBinError(3,0.01442826);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetEntries(1123);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetpt_JEC_stack_11,"");
   
   TH1D *VbbHcc_tagFirst_H_jetpt_JEC_stack_12 = new TH1D("VbbHcc_tagFirst_H_jetpt_JEC_stack_12","",150,0,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetBinContent(0,0.3806708);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetBinContent(1,0.001856161);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetBinContent(2,0.3031926);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetBinContent(3,0.05718627);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetBinError(0,0.008909151);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetBinError(1,0.0007441433);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetBinError(2,0.007923804);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetBinError(3,0.003376909);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetEntries(4223);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetpt_JEC_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tagFirst_H_jetpt_JEC__131 = new TH1D("VbbHcc_tagFirst_H_jetpt_JEC__131","",150,0,300);
   VbbHcc_tagFirst_H_jetpt_JEC__131->SetBinContent(0,591413);
   VbbHcc_tagFirst_H_jetpt_JEC__131->SetBinContent(1,2494);
   VbbHcc_tagFirst_H_jetpt_JEC__131->SetBinContent(2,419132);
   VbbHcc_tagFirst_H_jetpt_JEC__131->SetBinContent(3,150743);
   VbbHcc_tagFirst_H_jetpt_JEC__131->SetEntries(1163931);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetpt_JEC__131->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetpt_JEC__131->SetLineWidth(2);
   VbbHcc_tagFirst_H_jetpt_JEC__131->SetMarkerStyle(20);
   VbbHcc_tagFirst_H_jetpt_JEC__131->SetMarkerSize(1.2);
   VbbHcc_tagFirst_H_jetpt_JEC__131->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetpt_JEC__131->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC__131->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC__131->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC__131->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC__131->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC__131->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC__131->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC__131->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC__131->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tagFirst_H_jetpt_JEC_fx1131[150] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
   35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65,
   67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97,
   99, 101, 103, 105, 107, 109, 111, 113, 115, 117, 119, 121, 123, 125, 127, 129,
   131, 133, 135, 137, 139, 141, 143, 145, 147, 149, 151, 153, 155, 157, 159, 161,
   163, 165, 167, 169, 171, 173, 175, 177, 179, 181, 183, 185, 187, 189, 191, 193,
   195, 197, 199, 201, 203, 205, 207, 209, 211, 213, 215, 217, 219, 221, 223, 225,
   227, 229, 231, 233, 235, 237, 239, 241, 243, 245, 247, 249, 251, 253, 255, 257,
   259, 261, 263, 265, 267, 269, 271, 273, 275, 277, 279, 281, 283, 285, 287, 289,
   291, 293, 295, 297, 299 };
   Double_t Graph_from_VbbHcc_tagFirst_H_jetpt_JEC_fy1131[150] = { 70283.13, 589423.7, 250868.3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   Double_t Graph_from_VbbHcc_tagFirst_H_jetpt_JEC_fex1131[150] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1 };
   Double_t Graph_from_VbbHcc_tagFirst_H_jetpt_JEC_fey1131[150] = { 38757.66, 9630.59, 4184.807, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   TGraphErrors *gre = new TGraphErrors(150,Graph_from_VbbHcc_tagFirst_H_jetpt_JEC_fx1131,Graph_from_VbbHcc_tagFirst_H_jetpt_JEC_fy1131,Graph_from_VbbHcc_tagFirst_H_jetpt_JEC_fex1131,Graph_from_VbbHcc_tagFirst_H_jetpt_JEC_fey1131);
   gre->SetName("Graph_from_VbbHcc_tagFirst_H_jetpt_JEC");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1131 = new TH1F("Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1131","",150,0,330);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1131->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1131->SetMaximum(658959.7);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1131->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1131->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1131->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1131->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1131->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1131->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1131->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1131->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1131->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1131->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1131->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1131);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tagFirst_H_jetpt_JEC","Data (BTagCSV, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetpt_JEC","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetpt_JEC","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetpt_JEC","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetpt_JEC","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetpt_JEC","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetpt_JEC","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetpt_JEC","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetpt_JEC","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetpt_JEC","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetpt_JEC","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetpt_JEC","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetpt_JEC","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tagFirst_H_jetpt_JEC","MC unc. (stat.)","fl");

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
   H_jetpt_JEC_tagFirst_17->cd();
  
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
   
   TH1D *data_mc_ratio__132 = new TH1D("data_mc_ratio__132","",150,0,300);
   data_mc_ratio__132->SetBinContent(0,0.691843);
   data_mc_ratio__132->SetBinContent(1,0.03548504);
   data_mc_ratio__132->SetBinContent(2,0.7110878);
   data_mc_ratio__132->SetBinContent(3,0.600885);
   data_mc_ratio__132->SetBinError(0,0.008957601);
   data_mc_ratio__132->SetBinError(1,0.0007105541);
   data_mc_ratio__132->SetBinError(2,0.001098368);
   data_mc_ratio__132->SetBinError(3,0.00154765);
   data_mc_ratio__132->SetMinimum(0.4);
   data_mc_ratio__132->SetMaximum(1.6);
   data_mc_ratio__132->SetEntries(2916.776);
   data_mc_ratio__132->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__132->SetLineColor(ci);
   data_mc_ratio__132->SetLineWidth(2);
   data_mc_ratio__132->SetMarkerStyle(20);
   data_mc_ratio__132->SetMarkerSize(1.2);
   data_mc_ratio__132->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   data_mc_ratio__132->GetXaxis()->SetRange(1,150);
   data_mc_ratio__132->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__132->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__132->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__132->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__132->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__132->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__132->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__132->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__132->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__132->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__132->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__132->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__132->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__132->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__132->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__132->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1132[150] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
   35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65,
   67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97,
   99, 101, 103, 105, 107, 109, 111, 113, 115, 117, 119, 121, 123, 125, 127, 129,
   131, 133, 135, 137, 139, 141, 143, 145, 147, 149, 151, 153, 155, 157, 159, 161,
   163, 165, 167, 169, 171, 173, 175, 177, 179, 181, 183, 185, 187, 189, 191, 193,
   195, 197, 199, 201, 203, 205, 207, 209, 211, 213, 215, 217, 219, 221, 223, 225,
   227, 229, 231, 233, 235, 237, 239, 241, 243, 245, 247, 249, 251, 253, 255, 257,
   259, 261, 263, 265, 267, 269, 271, 273, 275, 277, 279, 281, 283, 285, 287, 289,
   291, 293, 295, 297, 299 };
   Double_t Graph_from_mc_statistical_error_fy1132[150] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1132[150] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fey1132[150] = { 0.5514505, 0.01633899, 0.01668129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   gre = new TGraphErrors(150,Graph_from_mc_statistical_error_fx1132,Graph_from_mc_statistical_error_fy1132,Graph_from_mc_statistical_error_fex1132,Graph_from_mc_statistical_error_fey1132);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1132 = new TH1F("Graph_Graph_from_mc_statistical_error1132","",150,0,330);
   Graph_Graph_from_mc_statistical_error1132->SetMinimum(0.3382594);
   Graph_Graph_from_mc_statistical_error1132->SetMaximum(1.661741);
   Graph_Graph_from_mc_statistical_error1132->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1132->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1132->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1132->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1132->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1132->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1132->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1132->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1132->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1132->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1132->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1132);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_jetpt_JEC_tagFirst_17->cd();
   H_jetpt_JEC_tagFirst_17->Modified();
   H_jetpt_JEC_tagFirst_17->cd();
   H_jetpt_JEC_tagFirst_17->SetSelected(H_jetpt_JEC_tagFirst_17);
}
