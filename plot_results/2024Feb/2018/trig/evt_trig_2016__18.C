#ifdef __CLING__
#pragma cling optimize(0)
#endif
void evt_trig_2016__18()
{
//=========Macro generated from canvas: evt_trig_2016__18/evt_trig_2016__18
//=========  (Wed Feb 14 13:07:08 2024) by ROOT version 6.28/10
   TCanvas *evt_trig_2016__18 = new TCanvas("evt_trig_2016__18", "evt_trig_2016__18",0,0,600,600);
   evt_trig_2016__18->SetHighLightColor(2);
   evt_trig_2016__18->Range(0,0,1,1);
   evt_trig_2016__18->SetFillColor(0);
   evt_trig_2016__18->SetFillStyle(4000);
   evt_trig_2016__18->SetBorderMode(0);
   evt_trig_2016__18->SetBorderSize(2);
   evt_trig_2016__18->SetFrameFillStyle(1000);
   evt_trig_2016__18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.6129016,-388761.9,4.209678,3.883731e+08);
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
   st->SetMaximum(3.494969e+08);
   
   TH1F *st_stack_3 = new TH1F("st_stack_3","",4,0,4);
   st_stack_3->SetMinimum(0.01);
   st_stack_3->SetMaximum(3.494969e+08);
   st_stack_3->SetDirectory(nullptr);
   st_stack_3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_3->SetLineColor(ci);
   st_stack_3->SetLineWidth(0);
   st_stack_3->GetXaxis()->SetBinLabel(1,"Total");
   st_stack_3->GetXaxis()->SetBinLabel(2,"Passed Both");
   st_stack_3->GetXaxis()->SetBinLabel(3,"Passed Quad");
   st_stack_3->GetXaxis()->SetBinLabel(4,"Passed Double");
   st_stack_3->GetXaxis()->SetLabelFont(42);
   st_stack_3->GetXaxis()->SetTitleOffset(1);
   st_stack_3->GetXaxis()->SetTitleFont(42);
   st_stack_3->GetYaxis()->SetTitle("Events/1.0");
   st_stack_3->GetYaxis()->SetLabelFont(42);
   st_stack_3->GetYaxis()->SetLabelSize(0.05);
   st_stack_3->GetYaxis()->SetTitleSize(0.057);
   st_stack_3->GetYaxis()->SetTitleOffset(1.2);
   st_stack_3->GetYaxis()->SetTitleFont(42);
   st_stack_3->GetZaxis()->SetLabelFont(42);
   st_stack_3->GetZaxis()->SetTitleOffset(1);
   st_stack_3->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_3);
   
   
   TH1D *evt_trig_2016_stack_1 = new TH1D("evt_trig_2016_stack_1","",4,0,4);
   evt_trig_2016_stack_1->SetBinContent(1,1.572727e+08);
   evt_trig_2016_stack_1->SetBinContent(2,2.020674e+07);
   evt_trig_2016_stack_1->SetBinContent(3,1.872821e+07);
   evt_trig_2016_stack_1->SetBinContent(4,2.016407e+07);
   evt_trig_2016_stack_1->SetBinError(1,35189.98);
   evt_trig_2016_stack_1->SetBinError(2,12418.05);
   evt_trig_2016_stack_1->SetBinError(3,11938.56);
   evt_trig_2016_stack_1->SetBinError(4,12405.53);
   evt_trig_2016_stack_1->SetEntries(3.961363e+07);

   ci = TColor::GetColor("#ff6600");
   evt_trig_2016_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   evt_trig_2016_stack_1->SetLineColor(ci);
   evt_trig_2016_stack_1->GetXaxis()->SetBinLabel(1,"Total");
   evt_trig_2016_stack_1->GetXaxis()->SetBinLabel(2,"Passed Both");
   evt_trig_2016_stack_1->GetXaxis()->SetBinLabel(3,"Passed Quad");
   evt_trig_2016_stack_1->GetXaxis()->SetBinLabel(4,"Passed Double");
   evt_trig_2016_stack_1->GetXaxis()->SetRange(1,4);
   evt_trig_2016_stack_1->GetXaxis()->SetLabelFont(42);
   evt_trig_2016_stack_1->GetXaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_1->GetXaxis()->SetTitleFont(42);
   evt_trig_2016_stack_1->GetYaxis()->SetLabelFont(42);
   evt_trig_2016_stack_1->GetYaxis()->SetTitleFont(42);
   evt_trig_2016_stack_1->GetZaxis()->SetLabelFont(42);
   evt_trig_2016_stack_1->GetZaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(evt_trig_2016_stack_1,"");
   
   TH1D *evt_trig_2016_stack_2 = new TH1D("evt_trig_2016_stack_2","",4,0,4);

   ci = TColor::GetColor("#660066");
   evt_trig_2016_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   evt_trig_2016_stack_2->SetLineColor(ci);
   evt_trig_2016_stack_2->GetXaxis()->SetBinLabel(1,"Total");
   evt_trig_2016_stack_2->GetXaxis()->SetBinLabel(2,"Passed Both");
   evt_trig_2016_stack_2->GetXaxis()->SetBinLabel(3,"Passed Quad");
   evt_trig_2016_stack_2->GetXaxis()->SetBinLabel(4,"Passed Double");
   evt_trig_2016_stack_2->GetXaxis()->SetRange(1,4);
   evt_trig_2016_stack_2->GetXaxis()->SetLabelFont(42);
   evt_trig_2016_stack_2->GetXaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_2->GetXaxis()->SetTitleFont(42);
   evt_trig_2016_stack_2->GetYaxis()->SetLabelFont(42);
   evt_trig_2016_stack_2->GetYaxis()->SetTitleFont(42);
   evt_trig_2016_stack_2->GetZaxis()->SetLabelFont(42);
   evt_trig_2016_stack_2->GetZaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(evt_trig_2016_stack_2,"");
   
   TH1D *evt_trig_2016_stack_3 = new TH1D("evt_trig_2016_stack_3","",4,0,4);

   ci = TColor::GetColor("#cc00cc");
   evt_trig_2016_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   evt_trig_2016_stack_3->SetLineColor(ci);
   evt_trig_2016_stack_3->GetXaxis()->SetBinLabel(1,"Total");
   evt_trig_2016_stack_3->GetXaxis()->SetBinLabel(2,"Passed Both");
   evt_trig_2016_stack_3->GetXaxis()->SetBinLabel(3,"Passed Quad");
   evt_trig_2016_stack_3->GetXaxis()->SetBinLabel(4,"Passed Double");
   evt_trig_2016_stack_3->GetXaxis()->SetRange(1,4);
   evt_trig_2016_stack_3->GetXaxis()->SetLabelFont(42);
   evt_trig_2016_stack_3->GetXaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_3->GetXaxis()->SetTitleFont(42);
   evt_trig_2016_stack_3->GetYaxis()->SetLabelFont(42);
   evt_trig_2016_stack_3->GetYaxis()->SetTitleFont(42);
   evt_trig_2016_stack_3->GetZaxis()->SetLabelFont(42);
   evt_trig_2016_stack_3->GetZaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(evt_trig_2016_stack_3,"");
   
   TH1D *evt_trig_2016_stack_4 = new TH1D("evt_trig_2016_stack_4","",4,0,4);

   ci = TColor::GetColor("#00cccc");
   evt_trig_2016_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   evt_trig_2016_stack_4->SetLineColor(ci);
   evt_trig_2016_stack_4->GetXaxis()->SetBinLabel(1,"Total");
   evt_trig_2016_stack_4->GetXaxis()->SetBinLabel(2,"Passed Both");
   evt_trig_2016_stack_4->GetXaxis()->SetBinLabel(3,"Passed Quad");
   evt_trig_2016_stack_4->GetXaxis()->SetBinLabel(4,"Passed Double");
   evt_trig_2016_stack_4->GetXaxis()->SetRange(1,4);
   evt_trig_2016_stack_4->GetXaxis()->SetLabelFont(42);
   evt_trig_2016_stack_4->GetXaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_4->GetXaxis()->SetTitleFont(42);
   evt_trig_2016_stack_4->GetYaxis()->SetLabelFont(42);
   evt_trig_2016_stack_4->GetYaxis()->SetTitleFont(42);
   evt_trig_2016_stack_4->GetZaxis()->SetLabelFont(42);
   evt_trig_2016_stack_4->GetZaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(evt_trig_2016_stack_4,"");
   
   TH1D *evt_trig_2016_stack_5 = new TH1D("evt_trig_2016_stack_5","",4,0,4);

   ci = TColor::GetColor("#ff99cc");
   evt_trig_2016_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   evt_trig_2016_stack_5->SetLineColor(ci);
   evt_trig_2016_stack_5->GetXaxis()->SetBinLabel(1,"Total");
   evt_trig_2016_stack_5->GetXaxis()->SetBinLabel(2,"Passed Both");
   evt_trig_2016_stack_5->GetXaxis()->SetBinLabel(3,"Passed Quad");
   evt_trig_2016_stack_5->GetXaxis()->SetBinLabel(4,"Passed Double");
   evt_trig_2016_stack_5->GetXaxis()->SetRange(1,4);
   evt_trig_2016_stack_5->GetXaxis()->SetLabelFont(42);
   evt_trig_2016_stack_5->GetXaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_5->GetXaxis()->SetTitleFont(42);
   evt_trig_2016_stack_5->GetYaxis()->SetLabelFont(42);
   evt_trig_2016_stack_5->GetYaxis()->SetTitleFont(42);
   evt_trig_2016_stack_5->GetZaxis()->SetLabelFont(42);
   evt_trig_2016_stack_5->GetZaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(evt_trig_2016_stack_5,"");
   
   TH1D *evt_trig_2016_stack_6 = new TH1D("evt_trig_2016_stack_6","",4,0,4);

   ci = TColor::GetColor("#9933ff");
   evt_trig_2016_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   evt_trig_2016_stack_6->SetLineColor(ci);
   evt_trig_2016_stack_6->GetXaxis()->SetBinLabel(1,"Total");
   evt_trig_2016_stack_6->GetXaxis()->SetBinLabel(2,"Passed Both");
   evt_trig_2016_stack_6->GetXaxis()->SetBinLabel(3,"Passed Quad");
   evt_trig_2016_stack_6->GetXaxis()->SetBinLabel(4,"Passed Double");
   evt_trig_2016_stack_6->GetXaxis()->SetRange(1,4);
   evt_trig_2016_stack_6->GetXaxis()->SetLabelFont(42);
   evt_trig_2016_stack_6->GetXaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_6->GetXaxis()->SetTitleFont(42);
   evt_trig_2016_stack_6->GetYaxis()->SetLabelFont(42);
   evt_trig_2016_stack_6->GetYaxis()->SetTitleFont(42);
   evt_trig_2016_stack_6->GetZaxis()->SetLabelFont(42);
   evt_trig_2016_stack_6->GetZaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(evt_trig_2016_stack_6,"");
   
   TH1D *evt_trig_2016_stack_7 = new TH1D("evt_trig_2016_stack_7","",4,0,4);

   ci = TColor::GetColor("#3399ff");
   evt_trig_2016_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   evt_trig_2016_stack_7->SetLineColor(ci);
   evt_trig_2016_stack_7->GetXaxis()->SetBinLabel(1,"Total");
   evt_trig_2016_stack_7->GetXaxis()->SetBinLabel(2,"Passed Both");
   evt_trig_2016_stack_7->GetXaxis()->SetBinLabel(3,"Passed Quad");
   evt_trig_2016_stack_7->GetXaxis()->SetBinLabel(4,"Passed Double");
   evt_trig_2016_stack_7->GetXaxis()->SetRange(1,4);
   evt_trig_2016_stack_7->GetXaxis()->SetLabelFont(42);
   evt_trig_2016_stack_7->GetXaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_7->GetXaxis()->SetTitleFont(42);
   evt_trig_2016_stack_7->GetYaxis()->SetLabelFont(42);
   evt_trig_2016_stack_7->GetYaxis()->SetTitleFont(42);
   evt_trig_2016_stack_7->GetZaxis()->SetLabelFont(42);
   evt_trig_2016_stack_7->GetZaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(evt_trig_2016_stack_7,"");
   
   TH1D *evt_trig_2016_stack_8 = new TH1D("evt_trig_2016_stack_8","",4,0,4);

   ci = TColor::GetColor("#33ff99");
   evt_trig_2016_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   evt_trig_2016_stack_8->SetLineColor(ci);
   evt_trig_2016_stack_8->GetXaxis()->SetBinLabel(1,"Total");
   evt_trig_2016_stack_8->GetXaxis()->SetBinLabel(2,"Passed Both");
   evt_trig_2016_stack_8->GetXaxis()->SetBinLabel(3,"Passed Quad");
   evt_trig_2016_stack_8->GetXaxis()->SetBinLabel(4,"Passed Double");
   evt_trig_2016_stack_8->GetXaxis()->SetRange(1,4);
   evt_trig_2016_stack_8->GetXaxis()->SetLabelFont(42);
   evt_trig_2016_stack_8->GetXaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_8->GetXaxis()->SetTitleFont(42);
   evt_trig_2016_stack_8->GetYaxis()->SetLabelFont(42);
   evt_trig_2016_stack_8->GetYaxis()->SetTitleFont(42);
   evt_trig_2016_stack_8->GetZaxis()->SetLabelFont(42);
   evt_trig_2016_stack_8->GetZaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(evt_trig_2016_stack_8,"");
   
   TH1D *evt_trig_2016_stack_9 = new TH1D("evt_trig_2016_stack_9","",4,0,4);

   ci = TColor::GetColor("#cccc00");
   evt_trig_2016_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   evt_trig_2016_stack_9->SetLineColor(ci);
   evt_trig_2016_stack_9->GetXaxis()->SetBinLabel(1,"Total");
   evt_trig_2016_stack_9->GetXaxis()->SetBinLabel(2,"Passed Both");
   evt_trig_2016_stack_9->GetXaxis()->SetBinLabel(3,"Passed Quad");
   evt_trig_2016_stack_9->GetXaxis()->SetBinLabel(4,"Passed Double");
   evt_trig_2016_stack_9->GetXaxis()->SetRange(1,4);
   evt_trig_2016_stack_9->GetXaxis()->SetLabelFont(42);
   evt_trig_2016_stack_9->GetXaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_9->GetXaxis()->SetTitleFont(42);
   evt_trig_2016_stack_9->GetYaxis()->SetLabelFont(42);
   evt_trig_2016_stack_9->GetYaxis()->SetTitleFont(42);
   evt_trig_2016_stack_9->GetZaxis()->SetLabelFont(42);
   evt_trig_2016_stack_9->GetZaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(evt_trig_2016_stack_9,"");
   
   TH1D *evt_trig_2016_stack_10 = new TH1D("evt_trig_2016_stack_10","",4,0,4);
   evt_trig_2016_stack_10->SetBinContent(1,914.9905);
   evt_trig_2016_stack_10->SetBinContent(2,398.2593);
   evt_trig_2016_stack_10->SetBinContent(3,375.83);
   evt_trig_2016_stack_10->SetBinContent(4,320.029);
   evt_trig_2016_stack_10->SetBinError(1,0.6877636);
   evt_trig_2016_stack_10->SetBinError(2,0.4577788);
   evt_trig_2016_stack_10->SetBinError(3,0.4452283);
   evt_trig_2016_stack_10->SetBinError(4,0.4144307);
   evt_trig_2016_stack_10->SetEntries(3995012);

   ci = TColor::GetColor("#0000cc");
   evt_trig_2016_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   evt_trig_2016_stack_10->SetLineColor(ci);
   evt_trig_2016_stack_10->GetXaxis()->SetBinLabel(1,"Total");
   evt_trig_2016_stack_10->GetXaxis()->SetBinLabel(2,"Passed Both");
   evt_trig_2016_stack_10->GetXaxis()->SetBinLabel(3,"Passed Quad");
   evt_trig_2016_stack_10->GetXaxis()->SetBinLabel(4,"Passed Double");
   evt_trig_2016_stack_10->GetXaxis()->SetRange(1,4);
   evt_trig_2016_stack_10->GetXaxis()->SetLabelFont(42);
   evt_trig_2016_stack_10->GetXaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_10->GetXaxis()->SetTitleFont(42);
   evt_trig_2016_stack_10->GetYaxis()->SetLabelFont(42);
   evt_trig_2016_stack_10->GetYaxis()->SetTitleFont(42);
   evt_trig_2016_stack_10->GetZaxis()->SetLabelFont(42);
   evt_trig_2016_stack_10->GetZaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(evt_trig_2016_stack_10,"");
   
   TH1D *evt_trig_2016_stack_11 = new TH1D("evt_trig_2016_stack_11","",4,0,4);

   ci = TColor::GetColor("#cc0000");
   evt_trig_2016_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   evt_trig_2016_stack_11->SetLineColor(ci);
   evt_trig_2016_stack_11->GetXaxis()->SetBinLabel(1,"Total");
   evt_trig_2016_stack_11->GetXaxis()->SetBinLabel(2,"Passed Both");
   evt_trig_2016_stack_11->GetXaxis()->SetBinLabel(3,"Passed Quad");
   evt_trig_2016_stack_11->GetXaxis()->SetBinLabel(4,"Passed Double");
   evt_trig_2016_stack_11->GetXaxis()->SetRange(1,4);
   evt_trig_2016_stack_11->GetXaxis()->SetLabelFont(42);
   evt_trig_2016_stack_11->GetXaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_11->GetXaxis()->SetTitleFont(42);
   evt_trig_2016_stack_11->GetYaxis()->SetLabelFont(42);
   evt_trig_2016_stack_11->GetYaxis()->SetTitleFont(42);
   evt_trig_2016_stack_11->GetZaxis()->SetLabelFont(42);
   evt_trig_2016_stack_11->GetZaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(evt_trig_2016_stack_11,"");
   
   TH1D *evt_trig_2016_stack_12 = new TH1D("evt_trig_2016_stack_12","",4,0,4);

   ci = TColor::GetColor("#00cc00");
   evt_trig_2016_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   evt_trig_2016_stack_12->SetLineColor(ci);
   evt_trig_2016_stack_12->GetXaxis()->SetBinLabel(1,"Total");
   evt_trig_2016_stack_12->GetXaxis()->SetBinLabel(2,"Passed Both");
   evt_trig_2016_stack_12->GetXaxis()->SetBinLabel(3,"Passed Quad");
   evt_trig_2016_stack_12->GetXaxis()->SetBinLabel(4,"Passed Double");
   evt_trig_2016_stack_12->GetXaxis()->SetRange(1,4);
   evt_trig_2016_stack_12->GetXaxis()->SetLabelFont(42);
   evt_trig_2016_stack_12->GetXaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_12->GetXaxis()->SetTitleFont(42);
   evt_trig_2016_stack_12->GetYaxis()->SetLabelFont(42);
   evt_trig_2016_stack_12->GetYaxis()->SetTitleFont(42);
   evt_trig_2016_stack_12->GetZaxis()->SetLabelFont(42);
   evt_trig_2016_stack_12->GetZaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(evt_trig_2016_stack_12,"");
   st->Draw("hist");
   
   TH1D *evt_trig_2016__5 = new TH1D("evt_trig_2016__5","",4,0,4);
   evt_trig_2016__5->SetEntries(3);

   ci = TColor::GetColor("#000099");
   evt_trig_2016__5->SetLineColor(ci);
   evt_trig_2016__5->SetLineWidth(2);
   evt_trig_2016__5->SetMarkerStyle(20);
   evt_trig_2016__5->SetMarkerSize(1.2);
   evt_trig_2016__5->GetXaxis()->SetBinLabel(1,"Total");
   evt_trig_2016__5->GetXaxis()->SetBinLabel(2,"Passed Both");
   evt_trig_2016__5->GetXaxis()->SetBinLabel(3,"Passed Quad");
   evt_trig_2016__5->GetXaxis()->SetBinLabel(4,"Passed Double");
   evt_trig_2016__5->GetXaxis()->SetRange(1,4);
   evt_trig_2016__5->GetXaxis()->SetLabelFont(42);
   evt_trig_2016__5->GetXaxis()->SetTitleOffset(1);
   evt_trig_2016__5->GetXaxis()->SetTitleFont(42);
   evt_trig_2016__5->GetYaxis()->SetLabelFont(42);
   evt_trig_2016__5->GetYaxis()->SetTitleFont(42);
   evt_trig_2016__5->GetZaxis()->SetLabelFont(42);
   evt_trig_2016__5->GetZaxis()->SetTitleOffset(1);
   evt_trig_2016__5->GetZaxis()->SetTitleFont(42);
   evt_trig_2016__5->Draw("same E");
   
   Double_t Graph_from_evt_trig_2016_fx1005[4] = { 0.5, 1.5, 2.5, 3.5 };
   Double_t Graph_from_evt_trig_2016_fy1005[4] = { 1.572736e+08, 2.020714e+07, 1.872859e+07, 2.016439e+07 };
   Double_t Graph_from_evt_trig_2016_fex1005[4] = { 0.5, 0.5, 0.5, 0.5 };
   Double_t Graph_from_evt_trig_2016_fey1005[4] = { 35189.98, 12418.05, 11938.56, 12405.53 };
   TGraphErrors *gre = new TGraphErrors(4,Graph_from_evt_trig_2016_fx1005,Graph_from_evt_trig_2016_fy1005,Graph_from_evt_trig_2016_fex1005,Graph_from_evt_trig_2016_fey1005);
   gre->SetName("Graph_from_evt_trig_2016");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_evt_trig_20161005 = new TH1F("Graph_Graph_from_evt_trig_20161005","",100,0,4.4);
   Graph_Graph_from_evt_trig_20161005->SetMinimum(4857432);
   Graph_Graph_from_evt_trig_20161005->SetMaximum(1.71168e+08);
   Graph_Graph_from_evt_trig_20161005->SetDirectory(nullptr);
   Graph_Graph_from_evt_trig_20161005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_evt_trig_20161005->SetLineColor(ci);
   Graph_Graph_from_evt_trig_20161005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_evt_trig_20161005->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_evt_trig_20161005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_evt_trig_20161005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_evt_trig_20161005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_evt_trig_20161005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_evt_trig_20161005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_evt_trig_20161005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_evt_trig_20161005);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("evt_trig_2016","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("evt_trig_2016","ggZHcc","F");

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
   entry=leg->AddEntry("evt_trig_2016","ZHcc","F");

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
   entry=leg->AddEntry("evt_trig_2016","ggZHbb","F");

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
   entry=leg->AddEntry("evt_trig_2016","ZHbb","F");

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
   entry=leg->AddEntry("evt_trig_2016","ZZ","F");

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
   entry=leg->AddEntry("evt_trig_2016","WZ","F");

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
   entry=leg->AddEntry("evt_trig_2016","WW","F");

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
   entry=leg->AddEntry("evt_trig_2016","W + jets","F");

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
   entry=leg->AddEntry("evt_trig_2016","Z + jets","F");

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
   entry=leg->AddEntry("evt_trig_2016","t#bar{t}","F");

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
   entry=leg->AddEntry("evt_trig_2016","Single top","F");

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
   entry=leg->AddEntry("evt_trig_2016","QCD","F");

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
   entry=leg->AddEntry("Graph_from_evt_trig_2016","MC unc. (stat.)","fl");

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
   evt_trig_2016__18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.6129016,-0.2774193,4.209678,1.658065);
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
   
   TH1D *data_mc_ratio__6 = new TH1D("data_mc_ratio__6","",4,0,4);
   data_mc_ratio__6->SetMinimum(0.4);
   data_mc_ratio__6->SetMaximum(1.6);
   data_mc_ratio__6->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__6->SetLineColor(ci);
   data_mc_ratio__6->SetLineWidth(2);
   data_mc_ratio__6->SetMarkerStyle(20);
   data_mc_ratio__6->SetMarkerSize(1.2);
   data_mc_ratio__6->GetXaxis()->SetTitle("Trigger Events");
   data_mc_ratio__6->GetXaxis()->SetBinLabel(1,"Total");
   data_mc_ratio__6->GetXaxis()->SetBinLabel(2,"Passed Both");
   data_mc_ratio__6->GetXaxis()->SetBinLabel(3,"Passed Quad");
   data_mc_ratio__6->GetXaxis()->SetBinLabel(4,"Passed Double");
   data_mc_ratio__6->GetXaxis()->SetRange(1,4);
   data_mc_ratio__6->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__6->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__6->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__6->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__6->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__6->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__6->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__6->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__6->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__6->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__6->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__6->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__6->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__6->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__6->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__6->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1006[4] = { 0.5, 1.5, 2.5, 3.5 };
   Double_t Graph_from_mc_statistical_error_fy1006[4] = { 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1006[4] = { 0.5, 0.5, 0.5, 0.5 };
   Double_t Graph_from_mc_statistical_error_fey1006[4] = { 0.00022375, 0.0006145379, 0.000637451, 0.00061522 };
   gre = new TGraphErrors(4,Graph_from_mc_statistical_error_fx1006,Graph_from_mc_statistical_error_fy1006,Graph_from_mc_statistical_error_fex1006,Graph_from_mc_statistical_error_fey1006);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1006 = new TH1F("Graph_Graph_from_mc_statistical_error1006","",100,0,4.4);
   Graph_Graph_from_mc_statistical_error1006->SetMinimum(0.9992351);
   Graph_Graph_from_mc_statistical_error1006->SetMaximum(1.000765);
   Graph_Graph_from_mc_statistical_error1006->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1006->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1006);
   
   gre->Draw("e2");
   bottomPad->Modified();
   evt_trig_2016__18->cd();
   evt_trig_2016__18->Modified();
   evt_trig_2016__18->cd();
   evt_trig_2016__18->SetSelected(evt_trig_2016__18);
}
