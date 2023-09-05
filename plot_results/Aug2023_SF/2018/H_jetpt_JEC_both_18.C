#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetpt_JEC_both_18()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_18/H_jetpt_JEC_both_18
//=========  (Tue Sep  5 11:02:22 2023) by ROOT version 6.28/04
   TCanvas *H_jetpt_JEC_both_18 = new TCanvas("H_jetpt_JEC_both_18", "H_jetpt_JEC_both_18",0,0,600,600);
   H_jetpt_JEC_both_18->SetHighLightColor(2);
   H_jetpt_JEC_both_18->Range(0,0,1,1);
   H_jetpt_JEC_both_18->SetFillColor(0);
   H_jetpt_JEC_both_18->SetFillStyle(4000);
   H_jetpt_JEC_both_18->SetBorderMode(0);
   H_jetpt_JEC_both_18->SetBorderSize(2);
   H_jetpt_JEC_both_18->SetFrameFillStyle(1000);
   H_jetpt_JEC_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-302.501,315.7258,302208.5);
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
   st->SetMaximum(271957.4);
   
   TH1F *st_stack_198 = new TH1F("st_stack_198","",150,0,300);
   st_stack_198->SetMinimum(0.01);
   st_stack_198->SetMaximum(271957.4);
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
   
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_1 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_1","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(0,155129.2);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(1,809.7541);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(2,104633.7);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(3,40901.53);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(0,9767.205);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(1,342.0737);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(2,12135.18);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(3,3032.339);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetEntries(10584);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_jetpt_JEC_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_jetpt_JEC_stack_1->SetLineColor(ci);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_jetpt_JEC_stack_1,"");
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_2 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_2","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinContent(0,935.3061);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinContent(1,7.802673);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinContent(2,692.3299);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinContent(3,286.6109);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinError(0,20.22085);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinError(1,2.437507);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinError(2,17.47474);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinError(3,12.03722);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetEntries(15606);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_jetpt_JEC_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_jetpt_JEC_stack_2->SetLineColor(ci);
   VbbHcc_both_H_jetpt_JEC_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_both_H_jetpt_JEC_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_jetpt_JEC_stack_2,"");
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_3 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_3","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinContent(0,20004.93);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinContent(1,109.3759);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinContent(2,15283.01);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinContent(3,4449.035);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinError(0,56.43145);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinError(1,6.168197);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinError(2,47.66);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinError(3,26.82063);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetEntries(455189);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_jetpt_JEC_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_jetpt_JEC_stack_3->SetLineColor(ci);
   VbbHcc_both_H_jetpt_JEC_stack_3->GetXaxis()->SetRange(1,300);
   VbbHcc_both_H_jetpt_JEC_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_jetpt_JEC_stack_3,"");
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_4 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_4","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinContent(0,2386.632);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinContent(1,10.04354);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinContent(2,1525.043);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinContent(3,819.9435);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinError(0,56.35547);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinError(1,2.264132);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinError(2,38.36535);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinError(3,20.81168);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetEntries(19244);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_jetpt_JEC_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_jetpt_JEC_stack_4->SetLineColor(ci);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetXaxis()->SetRange(1,300);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_jetpt_JEC_stack_4,"");
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_5 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_5","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetBinContent(0,285.4153);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetBinContent(1,0.8208268);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetBinContent(2,165.8062);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetBinContent(3,105.3989);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetBinError(0,22.8669);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetBinError(1,0.5065839);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetBinError(2,28.3445);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetBinError(3,7.651254);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetEntries(2454);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_jetpt_JEC_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_jetpt_JEC_stack_5->SetLineColor(ci);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetXaxis()->SetRange(1,300);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_jetpt_JEC_stack_5,"");
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_6 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_6","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_6->SetBinContent(0,1.103893);
   VbbHcc_both_H_jetpt_JEC_stack_6->SetBinContent(1,0.6909771);
   VbbHcc_both_H_jetpt_JEC_stack_6->SetBinContent(3,2.458714);
   VbbHcc_both_H_jetpt_JEC_stack_6->SetBinError(0,0.7815535);
   VbbHcc_both_H_jetpt_JEC_stack_6->SetBinError(1,0.6909771);
   VbbHcc_both_H_jetpt_JEC_stack_6->SetBinError(3,2.112312);
   VbbHcc_both_H_jetpt_JEC_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_jetpt_JEC_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_jetpt_JEC_stack_6->SetLineColor(ci);
   VbbHcc_both_H_jetpt_JEC_stack_6->GetXaxis()->SetRange(1,300);
   VbbHcc_both_H_jetpt_JEC_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_jetpt_JEC_stack_6,"");
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_7 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_7","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_7->SetBinContent(0,7.425535);
   VbbHcc_both_H_jetpt_JEC_stack_7->SetBinContent(2,7.961072);
   VbbHcc_both_H_jetpt_JEC_stack_7->SetBinContent(3,5.440523);
   VbbHcc_both_H_jetpt_JEC_stack_7->SetBinError(0,2.253521);
   VbbHcc_both_H_jetpt_JEC_stack_7->SetBinError(2,2.792333);
   VbbHcc_both_H_jetpt_JEC_stack_7->SetBinError(3,2.895042);
   VbbHcc_both_H_jetpt_JEC_stack_7->SetEntries(27);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_jetpt_JEC_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_jetpt_JEC_stack_7->SetLineColor(ci);
   VbbHcc_both_H_jetpt_JEC_stack_7->GetXaxis()->SetRange(1,300);
   VbbHcc_both_H_jetpt_JEC_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_jetpt_JEC_stack_7,"");
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_8 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_8","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_8->SetBinContent(0,40.28572);
   VbbHcc_both_H_jetpt_JEC_stack_8->SetBinContent(1,0.5739449);
   VbbHcc_both_H_jetpt_JEC_stack_8->SetBinContent(2,33.47969);
   VbbHcc_both_H_jetpt_JEC_stack_8->SetBinContent(3,8.443533);
   VbbHcc_both_H_jetpt_JEC_stack_8->SetBinError(0,4.034515);
   VbbHcc_both_H_jetpt_JEC_stack_8->SetBinError(1,0.380829);
   VbbHcc_both_H_jetpt_JEC_stack_8->SetBinError(2,3.764943);
   VbbHcc_both_H_jetpt_JEC_stack_8->SetBinError(3,1.880486);
   VbbHcc_both_H_jetpt_JEC_stack_8->SetEntries(232);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_jetpt_JEC_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_jetpt_JEC_stack_8->SetLineColor(ci);
   VbbHcc_both_H_jetpt_JEC_stack_8->GetXaxis()->SetRange(1,300);
   VbbHcc_both_H_jetpt_JEC_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_jetpt_JEC_stack_8,"");
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_9 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_9","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_9->SetBinContent(0,42.61465);
   VbbHcc_both_H_jetpt_JEC_stack_9->SetBinContent(1,0.1929175);
   VbbHcc_both_H_jetpt_JEC_stack_9->SetBinContent(2,29.46566);
   VbbHcc_both_H_jetpt_JEC_stack_9->SetBinContent(3,11.12901);
   VbbHcc_both_H_jetpt_JEC_stack_9->SetBinError(0,0.4714035);
   VbbHcc_both_H_jetpt_JEC_stack_9->SetBinError(1,0.02902822);
   VbbHcc_both_H_jetpt_JEC_stack_9->SetBinError(2,0.3531754);
   VbbHcc_both_H_jetpt_JEC_stack_9->SetBinError(3,0.2075643);
   VbbHcc_both_H_jetpt_JEC_stack_9->SetEntries(27714);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_jetpt_JEC_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_jetpt_JEC_stack_9->SetLineColor(ci);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetXaxis()->SetRange(1,300);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_jetpt_JEC_stack_9,"");
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_10 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_10","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_10->SetBinContent(0,13.00229);
   VbbHcc_both_H_jetpt_JEC_stack_10->SetBinContent(1,0.06143321);
   VbbHcc_both_H_jetpt_JEC_stack_10->SetBinContent(2,9.913645);
   VbbHcc_both_H_jetpt_JEC_stack_10->SetBinContent(3,3.080882);
   VbbHcc_both_H_jetpt_JEC_stack_10->SetBinError(0,0.08412492);
   VbbHcc_both_H_jetpt_JEC_stack_10->SetBinError(1,0.005875623);
   VbbHcc_both_H_jetpt_JEC_stack_10->SetBinError(2,0.07336851);
   VbbHcc_both_H_jetpt_JEC_stack_10->SetBinError(3,0.04088264);
   VbbHcc_both_H_jetpt_JEC_stack_10->SetEntries(50200);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_jetpt_JEC_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_jetpt_JEC_stack_10->SetLineColor(ci);
   VbbHcc_both_H_jetpt_JEC_stack_10->GetXaxis()->SetRange(1,300);
   VbbHcc_both_H_jetpt_JEC_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_jetpt_JEC_stack_10,"");
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_11 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_11","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_11->SetBinContent(0,0.1061654);
   VbbHcc_both_H_jetpt_JEC_stack_11->SetBinContent(2,0.08513433);
   VbbHcc_both_H_jetpt_JEC_stack_11->SetBinContent(3,0.01926239);
   VbbHcc_both_H_jetpt_JEC_stack_11->SetBinError(0,0.01691768);
   VbbHcc_both_H_jetpt_JEC_stack_11->SetBinError(2,0.01593935);
   VbbHcc_both_H_jetpt_JEC_stack_11->SetBinError(3,0.00692815);
   VbbHcc_both_H_jetpt_JEC_stack_11->SetEntries(84);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_jetpt_JEC_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_jetpt_JEC_stack_11->SetLineColor(ci);
   VbbHcc_both_H_jetpt_JEC_stack_11->GetXaxis()->SetRange(1,300);
   VbbHcc_both_H_jetpt_JEC_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_jetpt_JEC_stack_11,"");
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_12 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_12","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_12->SetBinContent(0,0.06019009);
   VbbHcc_both_H_jetpt_JEC_stack_12->SetBinContent(1,0.0005076766);
   VbbHcc_both_H_jetpt_JEC_stack_12->SetBinContent(2,0.04813665);
   VbbHcc_both_H_jetpt_JEC_stack_12->SetBinContent(3,0.01126263);
   VbbHcc_both_H_jetpt_JEC_stack_12->SetBinError(0,0.004943384);
   VbbHcc_both_H_jetpt_JEC_stack_12->SetBinError(1,0.000359058);
   VbbHcc_both_H_jetpt_JEC_stack_12->SetBinError(2,0.004697479);
   VbbHcc_both_H_jetpt_JEC_stack_12->SetBinError(3,0.002728729);
   VbbHcc_both_H_jetpt_JEC_stack_12->SetEntries(330);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_jetpt_JEC_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_jetpt_JEC_stack_12->SetLineColor(ci);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetXaxis()->SetRange(1,300);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_jetpt_JEC_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_jetpt_JEC__395 = new TH1D("VbbHcc_both_H_jetpt_JEC__395","",150,0,300);
   VbbHcc_both_H_jetpt_JEC__395->SetBinContent(0,159184);
   VbbHcc_both_H_jetpt_JEC__395->SetBinContent(1,542);
   VbbHcc_both_H_jetpt_JEC__395->SetBinContent(2,105423);
   VbbHcc_both_H_jetpt_JEC__395->SetBinContent(3,54273);
   VbbHcc_both_H_jetpt_JEC__395->SetEntries(319571);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_jetpt_JEC__395->SetLineColor(ci);
   VbbHcc_both_H_jetpt_JEC__395->SetLineWidth(2);
   VbbHcc_both_H_jetpt_JEC__395->SetMarkerStyle(20);
   VbbHcc_both_H_jetpt_JEC__395->SetMarkerSize(1.2);
   VbbHcc_both_H_jetpt_JEC__395->GetXaxis()->SetRange(1,300);
   VbbHcc_both_H_jetpt_JEC__395->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC__395->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC__395->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC__395->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC__395->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC__395->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC__395->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC__395->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC__395->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_jetpt_JEC_fx1395[150] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
   35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65,
   67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97,
   99, 101, 103, 105, 107, 109, 111, 113, 115, 117, 119, 121, 123, 125, 127, 129,
   131, 133, 135, 137, 139, 141, 143, 145, 147, 149, 151, 153, 155, 157, 159, 161,
   163, 165, 167, 169, 171, 173, 175, 177, 179, 181, 183, 185, 187, 189, 191, 193,
   195, 197, 199, 201, 203, 205, 207, 209, 211, 213, 215, 217, 219, 221, 223, 225,
   227, 229, 231, 233, 235, 237, 239, 241, 243, 245, 247, 249, 251, 253, 255, 257,
   259, 261, 263, 265, 267, 269, 271, 273, 275, 277, 279, 281, 283, 285, 287, 289,
   291, 293, 295, 297, 299 };
   Double_t Graph_from_VbbHcc_both_H_jetpt_JEC_fy1395[150] = { 939.3169, 122380.8, 46593.1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   Double_t Graph_from_VbbHcc_both_H_jetpt_JEC_fex1395[150] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1 };
   Double_t Graph_from_VbbHcc_both_H_jetpt_JEC_fey1395[150] = { 342.1467, 12135.38, 3032.565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   TGraphErrors *gre = new TGraphErrors(150,Graph_from_VbbHcc_both_H_jetpt_JEC_fx1395,Graph_from_VbbHcc_both_H_jetpt_JEC_fy1395,Graph_from_VbbHcc_both_H_jetpt_JEC_fex1395,Graph_from_VbbHcc_both_H_jetpt_JEC_fey1395);
   gre->SetName("Graph_from_VbbHcc_both_H_jetpt_JEC");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_jetpt_JEC1395 = new TH1F("Graph_Graph_from_VbbHcc_both_H_jetpt_JEC1395","",150,0,330);
   Graph_Graph_from_VbbHcc_both_H_jetpt_JEC1395->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_H_jetpt_JEC1395->SetMaximum(147967.8);
   Graph_Graph_from_VbbHcc_both_H_jetpt_JEC1395->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_both_H_jetpt_JEC1395->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_jetpt_JEC1395->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_jetpt_JEC1395->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_jetpt_JEC1395->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_both_H_jetpt_JEC1395->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_jetpt_JEC1395->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_jetpt_JEC1395->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_jetpt_JEC1395->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_jetpt_JEC1395->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_both_H_jetpt_JEC1395->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_jetpt_JEC1395);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_jetpt_JEC","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_jetpt_JEC","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_jetpt_JEC","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_jetpt_JEC","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_jetpt_JEC","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_jetpt_JEC","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_jetpt_JEC","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_jetpt_JEC","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_jetpt_JEC","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_jetpt_JEC","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_jetpt_JEC","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_jetpt_JEC","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_jetpt_JEC","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_jetpt_JEC","MC unc. (stat.)","fl");

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
   H_jetpt_JEC_both_18->cd();
  
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
   data_mc_ratio__396->SetBinContent(0,0.8900612);
   data_mc_ratio__396->SetBinContent(1,0.5770151);
   data_mc_ratio__396->SetBinContent(2,0.8614339);
   data_mc_ratio__396->SetBinContent(3,1.164829);
   data_mc_ratio__396->SetBinError(0,0.04866135);
   data_mc_ratio__396->SetBinError(1,0.02478492);
   data_mc_ratio__396->SetBinError(2,0.002653104);
   data_mc_ratio__396->SetBinError(3,0.005000003);
   data_mc_ratio__396->SetMinimum(0.4);
   data_mc_ratio__396->SetMaximum(1.6);
   data_mc_ratio__396->SetEntries(117.1172);
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
   Double_t Graph_from_mc_statistical_error_fey1396[150] = { 0.3642506, 0.09916082, 0.06508614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   Graph_Graph_from_mc_statistical_error1396->SetMinimum(0.5628993);
   Graph_Graph_from_mc_statistical_error1396->SetMaximum(1.437101);
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
   H_jetpt_JEC_both_18->cd();
   H_jetpt_JEC_both_18->Modified();
   H_jetpt_JEC_both_18->cd();
   H_jetpt_JEC_both_18->SetSelected(H_jetpt_JEC_both_18);
}
