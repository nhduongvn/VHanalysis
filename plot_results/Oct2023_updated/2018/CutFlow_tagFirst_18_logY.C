#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_tagFirst_18_logY()
{
//=========Macro generated from canvas: CutFlow_tagFirst_18/CutFlow_tagFirst_18
//=========  (Wed Nov 15 14:59:18 2023) by ROOT version 6.28/04
   TCanvas *CutFlow_tagFirst_18 = new TCanvas("CutFlow_tagFirst_18", "CutFlow_tagFirst_18",0,0,600,600);
   CutFlow_tagFirst_18->SetHighLightColor(2);
   CutFlow_tagFirst_18->Range(0,0,1,1);
   CutFlow_tagFirst_18->SetFillColor(0);
   CutFlow_tagFirst_18->SetFillStyle(4000);
   CutFlow_tagFirst_18->SetBorderMode(0);
   CutFlow_tagFirst_18->SetBorderSize(2);
   CutFlow_tagFirst_18->SetFrameFillStyle(1000);
   CutFlow_tagFirst_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-3.228348,6.314516,31.54519);
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
   st->SetMaximum(1.707536e+27);
   
   TH1F *st_stack_9 = new TH1F("st_stack_9","",5,0,5);
   st_stack_9->SetMinimum(0.0006403613);
   st_stack_9->SetMaximum(1.16906e+28);
   st_stack_9->SetDirectory(nullptr);
   st_stack_9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_9->SetLineColor(ci);
   st_stack_9->SetLineWidth(0);
   st_stack_9->GetXaxis()->SetBinLabel(1,"Total");
   st_stack_9->GetXaxis()->SetBinLabel(2,"MET cut");
   st_stack_9->GetXaxis()->SetBinLabel(3,"jet cuts");
   st_stack_9->GetXaxis()->SetBinLabel(4,"triggers");
   st_stack_9->GetXaxis()->SetBinLabel(5,"tags cut");
   st_stack_9->GetXaxis()->SetRange(1,6);
   st_stack_9->GetXaxis()->SetLabelFont(42);
   st_stack_9->GetXaxis()->SetTitleOffset(1);
   st_stack_9->GetXaxis()->SetTitleFont(42);
   st_stack_9->GetYaxis()->SetTitle("Events/1.0");
   st_stack_9->GetYaxis()->SetLabelFont(42);
   st_stack_9->GetYaxis()->SetLabelSize(0.05);
   st_stack_9->GetYaxis()->SetTitleSize(0.057);
   st_stack_9->GetYaxis()->SetTitleOffset(1.2);
   st_stack_9->GetYaxis()->SetTitleFont(42);
   st_stack_9->GetZaxis()->SetLabelFont(42);
   st_stack_9->GetZaxis()->SetTitleOffset(1);
   st_stack_9->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_9);
   
   
   TH1D *VbbHcc_tagFirst_CutFlow_stack_1 = new TH1D("VbbHcc_tagFirst_CutFlow_stack_1","",5,0,5);
   VbbHcc_tagFirst_CutFlow_stack_1->SetBinContent(1,1.796649e+12);
   VbbHcc_tagFirst_CutFlow_stack_1->SetBinContent(2,1.796543e+12);
   VbbHcc_tagFirst_CutFlow_stack_1->SetBinContent(3,3.882291e+09);
   VbbHcc_tagFirst_CutFlow_stack_1->SetBinContent(4,3.402801e+07);
   VbbHcc_tagFirst_CutFlow_stack_1->SetBinContent(5,1880215);
   VbbHcc_tagFirst_CutFlow_stack_1->SetBinError(1,1.838189e+08);
   VbbHcc_tagFirst_CutFlow_stack_1->SetBinError(2,1.838145e+08);
   VbbHcc_tagFirst_CutFlow_stack_1->SetBinError(3,2665041);
   VbbHcc_tagFirst_CutFlow_stack_1->SetBinError(4,101938.6);
   VbbHcc_tagFirst_CutFlow_stack_1->SetBinError(5,17407.1);
   VbbHcc_tagFirst_CutFlow_stack_1->SetEntries(7.028271e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tagFirst_CutFlow_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_CutFlow_stack_1->SetLineColor(ci);
   VbbHcc_tagFirst_CutFlow_stack_1->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagFirst_CutFlow_stack_1->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagFirst_CutFlow_stack_1->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagFirst_CutFlow_stack_1->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagFirst_CutFlow_stack_1->GetXaxis()->SetBinLabel(5,"tags cut");
   VbbHcc_tagFirst_CutFlow_stack_1->GetXaxis()->SetRange(1,5);
   VbbHcc_tagFirst_CutFlow_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_CutFlow_stack_1,"");
   
   TH1D *VbbHcc_tagFirst_CutFlow_stack_2 = new TH1D("VbbHcc_tagFirst_CutFlow_stack_2","",5,0,5);
   VbbHcc_tagFirst_CutFlow_stack_2->SetBinContent(1,1.723649e+07);
   VbbHcc_tagFirst_CutFlow_stack_2->SetBinContent(2,1.687543e+07);
   VbbHcc_tagFirst_CutFlow_stack_2->SetBinContent(3,1400622);
   VbbHcc_tagFirst_CutFlow_stack_2->SetBinContent(4,74176.47);
   VbbHcc_tagFirst_CutFlow_stack_2->SetBinContent(5,19535.13);
   VbbHcc_tagFirst_CutFlow_stack_2->SetBinError(1,1399.008);
   VbbHcc_tagFirst_CutFlow_stack_2->SetBinError(2,1375.293);
   VbbHcc_tagFirst_CutFlow_stack_2->SetBinError(3,501.2743);
   VbbHcc_tagFirst_CutFlow_stack_2->SetBinError(4,115.5819);
   VbbHcc_tagFirst_CutFlow_stack_2->SetBinError(5,60.91914);
   VbbHcc_tagFirst_CutFlow_stack_2->SetEntries(5.691524e+08);

   ci = TColor::GetColor("#660066");
   VbbHcc_tagFirst_CutFlow_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_CutFlow_stack_2->SetLineColor(ci);
   VbbHcc_tagFirst_CutFlow_stack_2->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagFirst_CutFlow_stack_2->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagFirst_CutFlow_stack_2->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagFirst_CutFlow_stack_2->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagFirst_CutFlow_stack_2->GetXaxis()->SetBinLabel(5,"tags cut");
   VbbHcc_tagFirst_CutFlow_stack_2->GetXaxis()->SetRange(1,5);
   VbbHcc_tagFirst_CutFlow_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_CutFlow_stack_2,"");
   
   TH1D *VbbHcc_tagFirst_CutFlow_stack_3 = new TH1D("VbbHcc_tagFirst_CutFlow_stack_3","",5,0,5);
   VbbHcc_tagFirst_CutFlow_stack_3->SetBinContent(1,4.978202e+07);
   VbbHcc_tagFirst_CutFlow_stack_3->SetBinContent(2,4.722954e+07);
   VbbHcc_tagFirst_CutFlow_stack_3->SetBinContent(3,1.516e+07);
   VbbHcc_tagFirst_CutFlow_stack_3->SetBinContent(4,1281740);
   VbbHcc_tagFirst_CutFlow_stack_3->SetBinContent(5,367826.1);
   VbbHcc_tagFirst_CutFlow_stack_3->SetBinError(1,1671.997);
   VbbHcc_tagFirst_CutFlow_stack_3->SetBinError(2,1637.058);
   VbbHcc_tagFirst_CutFlow_stack_3->SetBinError(3,973.539);
   VbbHcc_tagFirst_CutFlow_stack_3->SetBinError(4,284.0048);
   VbbHcc_tagFirst_CutFlow_stack_3->SetBinError(5,153.5858);
   VbbHcc_tagFirst_CutFlow_stack_3->SetEntries(2.124247e+09);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tagFirst_CutFlow_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_CutFlow_stack_3->SetLineColor(ci);
   VbbHcc_tagFirst_CutFlow_stack_3->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagFirst_CutFlow_stack_3->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagFirst_CutFlow_stack_3->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagFirst_CutFlow_stack_3->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagFirst_CutFlow_stack_3->GetXaxis()->SetBinLabel(5,"tags cut");
   VbbHcc_tagFirst_CutFlow_stack_3->GetXaxis()->SetRange(1,5);
   VbbHcc_tagFirst_CutFlow_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_CutFlow_stack_3,"");
   
   TH1D *VbbHcc_tagFirst_CutFlow_stack_4 = new TH1D("VbbHcc_tagFirst_CutFlow_stack_4","",5,0,5);
   VbbHcc_tagFirst_CutFlow_stack_4->SetBinContent(1,6.90576e+07);
   VbbHcc_tagFirst_CutFlow_stack_4->SetBinContent(2,6.900855e+07);
   VbbHcc_tagFirst_CutFlow_stack_4->SetBinContent(3,5160393);
   VbbHcc_tagFirst_CutFlow_stack_4->SetBinContent(4,80411.11);
   VbbHcc_tagFirst_CutFlow_stack_4->SetBinContent(5,14712.12);
   VbbHcc_tagFirst_CutFlow_stack_4->SetBinError(1,15617.62);
   VbbHcc_tagFirst_CutFlow_stack_4->SetBinError(2,15616.12);
   VbbHcc_tagFirst_CutFlow_stack_4->SetBinError(3,3037.733);
   VbbHcc_tagFirst_CutFlow_stack_4->SetBinError(4,200.8106);
   VbbHcc_tagFirst_CutFlow_stack_4->SetBinError(5,78.77078);
   VbbHcc_tagFirst_CutFlow_stack_4->SetEntries(1.171659e+08);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tagFirst_CutFlow_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_CutFlow_stack_4->SetLineColor(ci);
   VbbHcc_tagFirst_CutFlow_stack_4->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagFirst_CutFlow_stack_4->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagFirst_CutFlow_stack_4->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagFirst_CutFlow_stack_4->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagFirst_CutFlow_stack_4->GetXaxis()->SetBinLabel(5,"tags cut");
   VbbHcc_tagFirst_CutFlow_stack_4->GetXaxis()->SetRange(1,5);
   VbbHcc_tagFirst_CutFlow_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_CutFlow_stack_4,"");
   
   TH1D *VbbHcc_tagFirst_CutFlow_stack_5 = new TH1D("VbbHcc_tagFirst_CutFlow_stack_5","",5,0,5);
   VbbHcc_tagFirst_CutFlow_stack_5->SetBinContent(1,2.798024e+08);
   VbbHcc_tagFirst_CutFlow_stack_5->SetBinContent(2,2.7289e+08);
   VbbHcc_tagFirst_CutFlow_stack_5->SetBinContent(3,1.463291e+07);
   VbbHcc_tagFirst_CutFlow_stack_5->SetBinContent(4,56797);
   VbbHcc_tagFirst_CutFlow_stack_5->SetBinContent(5,7420.838);
   VbbHcc_tagFirst_CutFlow_stack_5->SetBinError(1,42136.17);
   VbbHcc_tagFirst_CutFlow_stack_5->SetBinError(2,42055.82);
   VbbHcc_tagFirst_CutFlow_stack_5->SetBinError(3,8593.642);
   VbbHcc_tagFirst_CutFlow_stack_5->SetBinError(4,314.9181);
   VbbHcc_tagFirst_CutFlow_stack_5->SetBinError(5,98.93372);
   VbbHcc_tagFirst_CutFlow_stack_5->SetEntries(3.804249e+08);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tagFirst_CutFlow_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_CutFlow_stack_5->SetLineColor(ci);
   VbbHcc_tagFirst_CutFlow_stack_5->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagFirst_CutFlow_stack_5->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagFirst_CutFlow_stack_5->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagFirst_CutFlow_stack_5->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagFirst_CutFlow_stack_5->GetXaxis()->SetBinLabel(5,"tags cut");
   VbbHcc_tagFirst_CutFlow_stack_5->GetXaxis()->SetRange(1,5);
   VbbHcc_tagFirst_CutFlow_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_CutFlow_stack_5,"");
   
   TH1D *VbbHcc_tagFirst_CutFlow_stack_6 = new TH1D("VbbHcc_tagFirst_CutFlow_stack_6","",5,0,5);
   VbbHcc_tagFirst_CutFlow_stack_6->SetBinContent(1,7087577);
   VbbHcc_tagFirst_CutFlow_stack_6->SetBinContent(2,6972701);
   VbbHcc_tagFirst_CutFlow_stack_6->SetBinContent(3,141386.3);
   VbbHcc_tagFirst_CutFlow_stack_6->SetBinContent(4,541.9992);
   VbbHcc_tagFirst_CutFlow_stack_6->SetBinContent(5,67.8064);
   VbbHcc_tagFirst_CutFlow_stack_6->SetBinError(1,1789.941);
   VbbHcc_tagFirst_CutFlow_stack_6->SetBinError(2,1775.376);
   VbbHcc_tagFirst_CutFlow_stack_6->SetBinError(3,252.8095);
   VbbHcc_tagFirst_CutFlow_stack_6->SetBinError(4,15.65269);
   VbbHcc_tagFirst_CutFlow_stack_6->SetBinError(5,5.536369);
   VbbHcc_tagFirst_CutFlow_stack_6->SetEntries(3.1418e+07);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tagFirst_CutFlow_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_CutFlow_stack_6->SetLineColor(ci);
   VbbHcc_tagFirst_CutFlow_stack_6->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagFirst_CutFlow_stack_6->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagFirst_CutFlow_stack_6->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagFirst_CutFlow_stack_6->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagFirst_CutFlow_stack_6->GetXaxis()->SetBinLabel(5,"tags cut");
   VbbHcc_tagFirst_CutFlow_stack_6->GetXaxis()->SetRange(1,5);
   VbbHcc_tagFirst_CutFlow_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_CutFlow_stack_6,"");
   
   TH1D *VbbHcc_tagFirst_CutFlow_stack_7 = new TH1D("VbbHcc_tagFirst_CutFlow_stack_7","",5,0,5);
   VbbHcc_tagFirst_CutFlow_stack_7->SetBinContent(1,2812341);
   VbbHcc_tagFirst_CutFlow_stack_7->SetBinContent(2,2746083);
   VbbHcc_tagFirst_CutFlow_stack_7->SetBinContent(3,71073.24);
   VbbHcc_tagFirst_CutFlow_stack_7->SetBinContent(4,962.359);
   VbbHcc_tagFirst_CutFlow_stack_7->SetBinContent(5,185.2461);
   VbbHcc_tagFirst_CutFlow_stack_7->SetBinError(1,998.0625);
   VbbHcc_tagFirst_CutFlow_stack_7->SetBinError(2,986.2353);
   VbbHcc_tagFirst_CutFlow_stack_7->SetBinError(3,158.6634);
   VbbHcc_tagFirst_CutFlow_stack_7->SetBinError(4,18.46258);
   VbbHcc_tagFirst_CutFlow_stack_7->SetBinError(5,8.100248);
   VbbHcc_tagFirst_CutFlow_stack_7->SetEntries(1.589683e+07);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tagFirst_CutFlow_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_CutFlow_stack_7->SetLineColor(ci);
   VbbHcc_tagFirst_CutFlow_stack_7->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagFirst_CutFlow_stack_7->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagFirst_CutFlow_stack_7->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagFirst_CutFlow_stack_7->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagFirst_CutFlow_stack_7->GetXaxis()->SetBinLabel(5,"tags cut");
   VbbHcc_tagFirst_CutFlow_stack_7->GetXaxis()->SetRange(1,5);
   VbbHcc_tagFirst_CutFlow_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_CutFlow_stack_7,"");
   
   TH1D *VbbHcc_tagFirst_CutFlow_stack_8 = new TH1D("VbbHcc_tagFirst_CutFlow_stack_8","",5,0,5);
   VbbHcc_tagFirst_CutFlow_stack_8->SetBinContent(1,985215);
   VbbHcc_tagFirst_CutFlow_stack_8->SetBinContent(2,959307.7);
   VbbHcc_tagFirst_CutFlow_stack_8->SetBinContent(3,25169.92);
   VbbHcc_tagFirst_CutFlow_stack_8->SetBinContent(4,711.3889);
   VbbHcc_tagFirst_CutFlow_stack_8->SetBinContent(5,153.1191);
   VbbHcc_tagFirst_CutFlow_stack_8->SetBinError(1,524.6744);
   VbbHcc_tagFirst_CutFlow_stack_8->SetBinError(2,517.73);
   VbbHcc_tagFirst_CutFlow_stack_8->SetBinError(3,83.86202);
   VbbHcc_tagFirst_CutFlow_stack_8->SetBinError(4,14.09866);
   VbbHcc_tagFirst_CutFlow_stack_8->SetBinError(5,6.540922);
   VbbHcc_tagFirst_CutFlow_stack_8->SetEntries(7052455);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tagFirst_CutFlow_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_CutFlow_stack_8->SetLineColor(ci);
   VbbHcc_tagFirst_CutFlow_stack_8->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagFirst_CutFlow_stack_8->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagFirst_CutFlow_stack_8->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagFirst_CutFlow_stack_8->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagFirst_CutFlow_stack_8->GetXaxis()->SetBinLabel(5,"tags cut");
   VbbHcc_tagFirst_CutFlow_stack_8->GetXaxis()->SetRange(1,5);
   VbbHcc_tagFirst_CutFlow_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_CutFlow_stack_8,"");
   
   TH1D *VbbHcc_tagFirst_CutFlow_stack_9 = new TH1D("VbbHcc_tagFirst_CutFlow_stack_9","",5,0,5);
   VbbHcc_tagFirst_CutFlow_stack_9->SetBinContent(1,21460.37);
   VbbHcc_tagFirst_CutFlow_stack_9->SetBinContent(2,21425);
   VbbHcc_tagFirst_CutFlow_stack_9->SetBinContent(3,2685.5);
   VbbHcc_tagFirst_CutFlow_stack_9->SetBinContent(4,339.5158);
   VbbHcc_tagFirst_CutFlow_stack_9->SetBinContent(5,83.74636);
   VbbHcc_tagFirst_CutFlow_stack_9->SetBinError(1,7.224385);
   VbbHcc_tagFirst_CutFlow_stack_9->SetBinError(2,7.218542);
   VbbHcc_tagFirst_CutFlow_stack_9->SetBinError(3,2.50043);
   VbbHcc_tagFirst_CutFlow_stack_9->SetBinError(4,0.8885772);
   VbbHcc_tagFirst_CutFlow_stack_9->SetBinError(5,0.4412559);
   VbbHcc_tagFirst_CutFlow_stack_9->SetEntries(2.134739e+07);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tagFirst_CutFlow_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_CutFlow_stack_9->SetLineColor(ci);
   VbbHcc_tagFirst_CutFlow_stack_9->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagFirst_CutFlow_stack_9->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagFirst_CutFlow_stack_9->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagFirst_CutFlow_stack_9->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagFirst_CutFlow_stack_9->GetXaxis()->SetBinLabel(5,"tags cut");
   VbbHcc_tagFirst_CutFlow_stack_9->GetXaxis()->SetRange(1,5);
   VbbHcc_tagFirst_CutFlow_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_CutFlow_stack_9,"");
   
   TH1D *VbbHcc_tagFirst_CutFlow_stack_10 = new TH1D("VbbHcc_tagFirst_CutFlow_stack_10","",5,0,5);
   VbbHcc_tagFirst_CutFlow_stack_10->SetBinContent(1,2980.723);
   VbbHcc_tagFirst_CutFlow_stack_10->SetBinContent(2,2967.389);
   VbbHcc_tagFirst_CutFlow_stack_10->SetBinContent(3,1097.306);
   VbbHcc_tagFirst_CutFlow_stack_10->SetBinContent(4,470.6121);
   VbbHcc_tagFirst_CutFlow_stack_10->SetBinContent(5,81.77614);
   VbbHcc_tagFirst_CutFlow_stack_10->SetBinError(1,1.33302);
   VbbHcc_tagFirst_CutFlow_stack_10->SetBinError(2,1.330035);
   VbbHcc_tagFirst_CutFlow_stack_10->SetBinError(3,0.8087974);
   VbbHcc_tagFirst_CutFlow_stack_10->SetBinError(4,0.5296724);
   VbbHcc_tagFirst_CutFlow_stack_10->SetBinError(5,0.2207949);
   VbbHcc_tagFirst_CutFlow_stack_10->SetEntries(1.27449e+07);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tagFirst_CutFlow_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_CutFlow_stack_10->SetLineColor(ci);
   VbbHcc_tagFirst_CutFlow_stack_10->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagFirst_CutFlow_stack_10->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagFirst_CutFlow_stack_10->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagFirst_CutFlow_stack_10->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagFirst_CutFlow_stack_10->GetXaxis()->SetBinLabel(5,"tags cut");
   VbbHcc_tagFirst_CutFlow_stack_10->GetXaxis()->SetRange(1,5);
   VbbHcc_tagFirst_CutFlow_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_CutFlow_stack_10,"");
   
   TH1D *VbbHcc_tagFirst_CutFlow_stack_11 = new TH1D("VbbHcc_tagFirst_CutFlow_stack_11","",5,0,5);
   VbbHcc_tagFirst_CutFlow_stack_11->SetBinContent(1,1065.823);
   VbbHcc_tagFirst_CutFlow_stack_11->SetBinContent(2,1064.799);
   VbbHcc_tagFirst_CutFlow_stack_11->SetBinContent(3,145.3825);
   VbbHcc_tagFirst_CutFlow_stack_11->SetBinContent(4,6.114972);
   VbbHcc_tagFirst_CutFlow_stack_11->SetBinContent(5,2.068668);
   VbbHcc_tagFirst_CutFlow_stack_11->SetBinError(1,1.608294);
   VbbHcc_tagFirst_CutFlow_stack_11->SetBinError(2,1.607521);
   VbbHcc_tagFirst_CutFlow_stack_11->SetBinError(3,0.5808278);
   VbbHcc_tagFirst_CutFlow_stack_11->SetBinError(4,0.1192768);
   VbbHcc_tagFirst_CutFlow_stack_11->SetBinError(5,0.06973642);
   VbbHcc_tagFirst_CutFlow_stack_11->SetEntries(1067211);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tagFirst_CutFlow_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_CutFlow_stack_11->SetLineColor(ci);
   VbbHcc_tagFirst_CutFlow_stack_11->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagFirst_CutFlow_stack_11->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagFirst_CutFlow_stack_11->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagFirst_CutFlow_stack_11->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagFirst_CutFlow_stack_11->GetXaxis()->SetBinLabel(5,"tags cut");
   VbbHcc_tagFirst_CutFlow_stack_11->GetXaxis()->SetRange(1,5);
   VbbHcc_tagFirst_CutFlow_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_CutFlow_stack_11,"");
   
   TH1D *VbbHcc_tagFirst_CutFlow_stack_12 = new TH1D("VbbHcc_tagFirst_CutFlow_stack_12","",5,0,5);
   VbbHcc_tagFirst_CutFlow_stack_12->SetBinContent(1,148.0808);
   VbbHcc_tagFirst_CutFlow_stack_12->SetBinContent(2,147.7778);
   VbbHcc_tagFirst_CutFlow_stack_12->SetBinContent(3,55.86831);
   VbbHcc_tagFirst_CutFlow_stack_12->SetBinContent(4,2.99477);
   VbbHcc_tagFirst_CutFlow_stack_12->SetBinContent(5,1.044004);
   VbbHcc_tagFirst_CutFlow_stack_12->SetBinError(1,0.21065);
   VbbHcc_tagFirst_CutFlow_stack_12->SetBinError(2,0.2104344);
   VbbHcc_tagFirst_CutFlow_stack_12->SetBinError(3,0.1293883);
   VbbHcc_tagFirst_CutFlow_stack_12->SetBinError(4,0.02995669);
   VbbHcc_tagFirst_CutFlow_stack_12->SetBinError(5,0.01768737);
   VbbHcc_tagFirst_CutFlow_stack_12->SetEntries(1187244);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tagFirst_CutFlow_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_CutFlow_stack_12->SetLineColor(ci);
   VbbHcc_tagFirst_CutFlow_stack_12->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagFirst_CutFlow_stack_12->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagFirst_CutFlow_stack_12->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagFirst_CutFlow_stack_12->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagFirst_CutFlow_stack_12->GetXaxis()->SetBinLabel(5,"tags cut");
   VbbHcc_tagFirst_CutFlow_stack_12->GetXaxis()->SetRange(1,5);
   VbbHcc_tagFirst_CutFlow_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_CutFlow_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tagFirst_CutFlow__17 = new TH1D("VbbHcc_tagFirst_CutFlow__17","",5,0,5);
   VbbHcc_tagFirst_CutFlow__17->SetBinContent(1,6.229517e+08);
   VbbHcc_tagFirst_CutFlow__17->SetBinContent(2,6.08307e+08);
   VbbHcc_tagFirst_CutFlow__17->SetBinContent(3,1.716969e+08);
   VbbHcc_tagFirst_CutFlow__17->SetBinContent(4,2.112727e+07);
   VbbHcc_tagFirst_CutFlow__17->SetBinContent(5,3078837);
   VbbHcc_tagFirst_CutFlow__17->SetEntries(1.427162e+09);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_CutFlow__17->SetLineColor(ci);
   VbbHcc_tagFirst_CutFlow__17->SetLineWidth(2);
   VbbHcc_tagFirst_CutFlow__17->SetMarkerStyle(20);
   VbbHcc_tagFirst_CutFlow__17->SetMarkerSize(1.2);
   VbbHcc_tagFirst_CutFlow__17->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagFirst_CutFlow__17->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagFirst_CutFlow__17->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagFirst_CutFlow__17->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagFirst_CutFlow__17->GetXaxis()->SetBinLabel(5,"tags cut");
   VbbHcc_tagFirst_CutFlow__17->GetXaxis()->SetRange(1,5);
   VbbHcc_tagFirst_CutFlow__17->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow__17->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow__17->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow__17->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow__17->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow__17->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow__17->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow__17->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow__17->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tagFirst_CutFlow_fx1017[5] = { 0.5, 1.5, 2.5, 3.5, 4.5 };
   Double_t Graph_from_VbbHcc_tagFirst_CutFlow_fy1017[5] = { 1.797076e+12, 1.79696e+12, 3.918887e+09, 3.552417e+07, 2290284 };
   Double_t Graph_from_VbbHcc_tagFirst_CutFlow_fex1017[5] = { 0.5, 0.5, 0.5, 0.5, 0.5 };
   Double_t Graph_from_VbbHcc_tagFirst_CutFlow_fey1017[5] = { 1.838189e+08, 1.838145e+08, 2665057, 101939.8, 17408.35 };
   TGraphErrors *gre = new TGraphErrors(5,Graph_from_VbbHcc_tagFirst_CutFlow_fx1017,Graph_from_VbbHcc_tagFirst_CutFlow_fy1017,Graph_from_VbbHcc_tagFirst_CutFlow_fex1017,Graph_from_VbbHcc_tagFirst_CutFlow_fey1017);
   gre->SetName("Graph_from_VbbHcc_tagFirst_CutFlow");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tagFirst_CutFlow1017 = new TH1F("Graph_Graph_from_VbbHcc_tagFirst_CutFlow1017","",100,0,5.5);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1017->SetMinimum(2045588);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1017->SetMaximum(1.976985e+12);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1017->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1017->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1017->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1017->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1017->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1017->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1017->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1017->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tagFirst_CutFlow1017);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tagFirst_CutFlow","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tagFirst_CutFlow","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_CutFlow","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_CutFlow","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_CutFlow","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_CutFlow","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_CutFlow","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_CutFlow","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_CutFlow","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_CutFlow","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_CutFlow","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_CutFlow","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_CutFlow","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tagFirst_CutFlow","MC unc. (stat.)","fl");

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
   CutFlow_tagFirst_18->cd();
  
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
   
   TH1D *data_mc_ratio__18 = new TH1D("data_mc_ratio__18","",5,0,5);
   data_mc_ratio__18->SetBinContent(1,0.0003466474);
   data_mc_ratio__18->SetBinContent(2,0.0003385201);
   data_mc_ratio__18->SetBinContent(3,0.04381268);
   data_mc_ratio__18->SetBinContent(4,0.5947294);
   data_mc_ratio__18->SetBinContent(5,1.344303);
   data_mc_ratio__18->SetBinError(1,1.388867e-08);
   data_mc_ratio__18->SetBinError(2,1.372534e-08);
   data_mc_ratio__18->SetBinError(3,3.343633e-06);
   data_mc_ratio__18->SetBinError(4,0.0001293891);
   data_mc_ratio__18->SetBinError(5,0.0007661327);
   data_mc_ratio__18->SetMinimum(0.4);
   data_mc_ratio__18->SetMaximum(1.6);
   data_mc_ratio__18->SetEntries(36455.06);
   data_mc_ratio__18->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__18->SetLineColor(ci);
   data_mc_ratio__18->SetLineWidth(2);
   data_mc_ratio__18->SetMarkerStyle(20);
   data_mc_ratio__18->SetMarkerSize(1.2);
   data_mc_ratio__18->GetXaxis()->SetTitle(""Cut flow"");
   data_mc_ratio__18->GetXaxis()->SetBinLabel(1,"Total");
   data_mc_ratio__18->GetXaxis()->SetBinLabel(2,"MET cut");
   data_mc_ratio__18->GetXaxis()->SetBinLabel(3,"jet cuts");
   data_mc_ratio__18->GetXaxis()->SetBinLabel(4,"triggers");
   data_mc_ratio__18->GetXaxis()->SetBinLabel(5,"tags cut");
   data_mc_ratio__18->GetXaxis()->SetRange(1,6);
   data_mc_ratio__18->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__18->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__18->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__18->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__18->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__18->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__18->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__18->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__18->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__18->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__18->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__18->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__18->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__18->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__18->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__18->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1018[5] = { 0.5, 1.5, 2.5, 3.5, 4.5 };
   Double_t Graph_from_mc_statistical_error_fy1018[5] = { 1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1018[5] = { 0.5, 0.5, 0.5, 0.5, 0.5 };
   Double_t Graph_from_mc_statistical_error_fey1018[5] = { 0.0001022878, 0.0001022919, 0.0006800546, 0.00286959, 0.007600955 };
   gre = new TGraphErrors(5,Graph_from_mc_statistical_error_fx1018,Graph_from_mc_statistical_error_fy1018,Graph_from_mc_statistical_error_fex1018,Graph_from_mc_statistical_error_fey1018);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1018 = new TH1F("Graph_Graph_from_mc_statistical_error1018","",100,0,5.5);
   Graph_Graph_from_mc_statistical_error1018->SetMinimum(0.9908789);
   Graph_Graph_from_mc_statistical_error1018->SetMaximum(1.009121);
   Graph_Graph_from_mc_statistical_error1018->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1018->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1018->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1018->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1018->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1018->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1018->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1018->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1018);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,7,1);
   line->Draw();
   bottomPad->Modified();
   CutFlow_tagFirst_18->cd();
   CutFlow_tagFirst_18->Modified();
   CutFlow_tagFirst_18->cd();
   CutFlow_tagFirst_18->SetSelected(CutFlow_tagFirst_18);
}
