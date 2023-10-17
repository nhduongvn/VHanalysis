#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetpt_JEC_tagFirst_18()
{
//=========Macro generated from canvas: H_jetpt_JEC_tagFirst_18/H_jetpt_JEC_tagFirst_18
//=========  (Tue Oct 17 10:20:04 2023) by ROOT version 6.28/04
   TCanvas *H_jetpt_JEC_tagFirst_18 = new TCanvas("H_jetpt_JEC_tagFirst_18", "H_jetpt_JEC_tagFirst_18",0,0,600,600);
   H_jetpt_JEC_tagFirst_18->SetHighLightColor(2);
   H_jetpt_JEC_tagFirst_18->Range(0,0,1,1);
   H_jetpt_JEC_tagFirst_18->SetFillColor(0);
   H_jetpt_JEC_tagFirst_18->SetFillStyle(4000);
   H_jetpt_JEC_tagFirst_18->SetBorderMode(0);
   H_jetpt_JEC_tagFirst_18->SetBorderSize(2);
   H_jetpt_JEC_tagFirst_18->SetFrameFillStyle(1000);
   H_jetpt_JEC_tagFirst_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-2630.295,315.7258,2627675);
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
   st->SetMaximum(2364644);
   
   TH1F *st_stack_198 = new TH1F("st_stack_198","",150,0,300);
   st_stack_198->SetMinimum(0.01);
   st_stack_198->SetMaximum(2364644);
   st_stack_198->SetDirectory(nullptr);
   st_stack_198->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_198->SetLineColor(ci);
   st_stack_198->SetLineWidth(0);
   st_stack_198->GetXaxis()->SetRange(1,150);
   st_stack_198->GetXaxis()->SetLabelFont(42);
   st_stack_198->GetXaxis()->SetTitleOffset(1);
   st_stack_198->GetXaxis()->SetTitleFont(42);
   st_stack_198->GetYaxis()->SetTitle("Events/2.0");
   st_stack_198->GetYaxis()->SetLabelFont(42);
   st_stack_198->GetYaxis()->SetLabelSize(0.05);
   st_stack_198->GetYaxis()->SetTitleSize(0.057);
   st_stack_198->GetYaxis()->SetTitleOffset(1.2);
   st_stack_198->GetYaxis()->SetTitleFont(42);
   st_stack_198->GetZaxis()->SetLabelFont(42);
   st_stack_198->GetZaxis()->SetTitleOffset(1);
   st_stack_198->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_198);
   
   
   TH1D *VbbHcc_tagFirst_H_jetpt_JEC_stack_1 = new TH1D("VbbHcc_tagFirst_H_jetpt_JEC_stack_1","",150,0,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinContent(0,1253353);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinContent(1,8129.672);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinContent(2,794657.3);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinContent(3,376718.1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinContent(151,39668.09);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinError(0,25767.28);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinError(1,2718.892);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinError(2,21149.6);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinError(3,8571.677);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinError(151,23470.7);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetEntries(168645);

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
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinContent(0,15000.99);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinContent(1,77.22114);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinContent(2,11402.18);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinContent(3,3524.775);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinContent(151,5.364231);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinError(0,82.79981);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinError(1,5.382788);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinError(2,71.42423);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinError(3,36.99496);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinError(151,1.626527);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetEntries(236948);

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
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinContent(0,280015.1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinContent(1,1639.853);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinContent(2,228269.5);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinContent(3,46233.13);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinContent(151,9.575387);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinError(0,207.4438);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinError(1,15.32674);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinError(2,189.0634);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinError(3,83.40226);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinError(151,1.066029);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetEntries(6056042);

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
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinContent(0,11226.05);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinContent(1,55.58246);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinContent(2,7409.991);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinContent(3,3702.22);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinContent(151,6.501005);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinError(0,100.1823);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinError(1,10.43522);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinError(2,85.52543);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinError(3,47.45499);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinError(151,4.160206);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetEntries(94472);

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
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinContent(0,5909.7);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinContent(1,54.06891);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinContent(2,3404.556);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinContent(3,2354.935);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinContent(151,7.633565);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinError(0,133.5018);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinError(1,15.88716);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinError(2,107.1996);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinError(3,70.83691);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinError(151,2.533586);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetEntries(41442);

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
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinContent(0,38.538);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinContent(1,1.952827);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinContent(2,33.50902);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinContent(3,20.03281);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinContent(151,0.4458894);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinError(0,5.382473);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinError(1,1.132353);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinError(2,4.883704);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinError(3,4.560963);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinError(151,0.4458894);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetEntries(150);

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
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetBinContent(0,128.9474);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetBinContent(2,106.4201);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetBinContent(3,42.66133);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetBinContent(151,0.3342908);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetBinError(0,10.31533);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetBinError(2,8.397119);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetBinError(3,5.173522);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetBinError(151,0.3342908);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetEntries(523);

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
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetBinContent(0,105.5943);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetBinContent(1,0.3528816);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetBinContent(2,74.60864);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetBinContent(3,25.54911);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetBinContent(151,0.4409955);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetBinError(0,7.52446);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetBinError(1,0.2988037);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetBinError(2,5.650696);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetBinError(3,3.320483);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetBinError(151,0.4409955);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetEntries(548);

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
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinContent(0,60.89344);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinContent(1,0.2985798);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinContent(2,45.55533);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinContent(3,13.61137);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinContent(151,0.01288285);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinError(0,0.5808588);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinError(1,0.03839286);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinError(2,0.5377238);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinError(3,0.2425853);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinError(151,0.005431045);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetEntries(37266);

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
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetBinContent(0,36.09832);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetBinContent(1,0.1903877);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetBinContent(2,28.6584);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetBinContent(3,7.191206);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetBinError(0,0.1412408);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetBinError(1,0.01019748);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetBinError(2,0.1260341);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetBinError(3,0.06289968);
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
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetBinContent(0,1.163416);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetBinContent(1,0.01022354);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetBinContent(2,1.070154);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetBinContent(3,0.2832547);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetBinError(0,0.06826949);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetBinError(1,0.005237499);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetBinError(2,0.06365327);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetBinError(3,0.02926612);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetEntries(939);

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
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetBinContent(0,0.6410761);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetBinContent(1,0.00190666);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetBinContent(2,0.5167876);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetBinContent(3,0.1046235);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetBinError(0,0.01660956);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetBinError(1,0.0007241223);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetBinError(2,0.01532715);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetBinError(3,0.00748262);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetEntries(3484);

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
   
   TH1D *VbbHcc_tagFirst_H_jetpt_JEC__395 = new TH1D("VbbHcc_tagFirst_H_jetpt_JEC__395","",150,0,300);
   VbbHcc_tagFirst_H_jetpt_JEC__395->SetBinContent(0,1545912);
   VbbHcc_tagFirst_H_jetpt_JEC__395->SetBinContent(1,5885);
   VbbHcc_tagFirst_H_jetpt_JEC__395->SetBinContent(2,1064090);
   VbbHcc_tagFirst_H_jetpt_JEC__395->SetBinContent(3,486166);
   VbbHcc_tagFirst_H_jetpt_JEC__395->SetEntries(3102202);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetpt_JEC__395->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetpt_JEC__395->SetLineWidth(2);
   VbbHcc_tagFirst_H_jetpt_JEC__395->SetMarkerStyle(20);
   VbbHcc_tagFirst_H_jetpt_JEC__395->SetMarkerSize(1.2);
   VbbHcc_tagFirst_H_jetpt_JEC__395->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetpt_JEC__395->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC__395->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC__395->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC__395->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC__395->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC__395->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC__395->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC__395->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC__395->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tagFirst_H_jetpt_JEC_fx1395[150] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
   35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65,
   67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97,
   99, 101, 103, 105, 107, 109, 111, 113, 115, 117, 119, 121, 123, 125, 127, 129,
   131, 133, 135, 137, 139, 141, 143, 145, 147, 149, 151, 153, 155, 157, 159, 161,
   163, 165, 167, 169, 171, 173, 175, 177, 179, 181, 183, 185, 187, 189, 191, 193,
   195, 197, 199, 201, 203, 205, 207, 209, 211, 213, 215, 217, 219, 221, 223, 225,
   227, 229, 231, 233, 235, 237, 239, 241, 243, 245, 247, 249, 251, 253, 255, 257,
   259, 261, 263, 265, 267, 269, 271, 273, 275, 277, 279, 281, 283, 285, 287, 289,
   291, 293, 295, 297, 299 };
   Double_t Graph_from_VbbHcc_tagFirst_H_jetpt_JEC_fy1395[150] = { 9959.204, 1045434, 432642.6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   Double_t Graph_from_VbbHcc_tagFirst_H_jetpt_JEC_fex1395[150] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1 };
   Double_t Graph_from_VbbHcc_tagFirst_H_jetpt_JEC_fey1395[150] = { 2719.007, 21151.02, 8572.59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   TGraphErrors *gre = new TGraphErrors(150,Graph_from_VbbHcc_tagFirst_H_jetpt_JEC_fx1395,Graph_from_VbbHcc_tagFirst_H_jetpt_JEC_fy1395,Graph_from_VbbHcc_tagFirst_H_jetpt_JEC_fex1395,Graph_from_VbbHcc_tagFirst_H_jetpt_JEC_fey1395);
   gre->SetName("Graph_from_VbbHcc_tagFirst_H_jetpt_JEC");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1395 = new TH1F("Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1395","",150,0,330);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1395->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1395->SetMaximum(1173243);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1395->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1395->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1395->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1395->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1395->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1395->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1395->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1395->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1395->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1395->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1395->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1395);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tagFirst_H_jetpt_JEC","Data (JetHT, 2018)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_jetpt_JEC_tagFirst_18->cd();
  
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
   
   TH1D *data_mc_ratio__396 = new TH1D("data_mc_ratio__396","",150,0,300);
   data_mc_ratio__396->SetBinContent(0,0.9872499);
   data_mc_ratio__396->SetBinContent(1,0.5909107);
   data_mc_ratio__396->SetBinContent(2,1.017845);
   data_mc_ratio__396->SetBinContent(3,1.123713);
   data_mc_ratio__396->SetBinError(0,0.01626603);
   data_mc_ratio__396->SetBinError(1,0.0077028);
   data_mc_ratio__396->SetBinError(2,0.0009867171);
   data_mc_ratio__396->SetBinError(3,0.001611621);
   data_mc_ratio__396->SetMinimum(0.4);
   data_mc_ratio__396->SetMaximum(1.6);
   data_mc_ratio__396->SetEntries(276.4387);
   data_mc_ratio__396->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__396->SetLineColor(ci);
   data_mc_ratio__396->SetLineWidth(2);
   data_mc_ratio__396->SetMarkerStyle(20);
   data_mc_ratio__396->SetMarkerSize(1.2);
   data_mc_ratio__396->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   data_mc_ratio__396->GetXaxis()->SetRange(1,150);
   data_mc_ratio__396->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__396->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__396->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__396->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__396->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__396->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__396->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__396->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__396->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__396->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__396->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__396->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__396->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__396->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__396->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__396->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1396[150] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
   35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65,
   67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97,
   99, 101, 103, 105, 107, 109, 111, 113, 115, 117, 119, 121, 123, 125, 127, 129,
   131, 133, 135, 137, 139, 141, 143, 145, 147, 149, 151, 153, 155, 157, 159, 161,
   163, 165, 167, 169, 171, 173, 175, 177, 179, 181, 183, 185, 187, 189, 191, 193,
   195, 197, 199, 201, 203, 205, 207, 209, 211, 213, 215, 217, 219, 221, 223, 225,
   227, 229, 231, 233, 235, 237, 239, 241, 243, 245, 247, 249, 251, 253, 255, 257,
   259, 261, 263, 265, 267, 269, 271, 273, 275, 277, 279, 281, 283, 285, 287, 289,
   291, 293, 295, 297, 299 };
   Double_t Graph_from_mc_statistical_error_fy1396[150] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1396[150] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fey1396[150] = { 0.2730145, 0.02023181, 0.01981449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   gre = new TGraphErrors(150,Graph_from_mc_statistical_error_fx1396,Graph_from_mc_statistical_error_fy1396,Graph_from_mc_statistical_error_fex1396,Graph_from_mc_statistical_error_fey1396);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1396 = new TH1F("Graph_Graph_from_mc_statistical_error1396","",150,0,330);
   Graph_Graph_from_mc_statistical_error1396->SetMinimum(0.6723826);
   Graph_Graph_from_mc_statistical_error1396->SetMaximum(1.327617);
   Graph_Graph_from_mc_statistical_error1396->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1396->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1396->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1396->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1396->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1396->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1396->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1396->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1396->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1396->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1396->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1396);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_jetpt_JEC_tagFirst_18->cd();
   H_jetpt_JEC_tagFirst_18->Modified();
   H_jetpt_JEC_tagFirst_18->cd();
   H_jetpt_JEC_tagFirst_18->SetSelected(H_jetpt_JEC_tagFirst_18);
}
