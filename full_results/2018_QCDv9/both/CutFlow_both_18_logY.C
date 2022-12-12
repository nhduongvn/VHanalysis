#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_both_18_logY()
{
//=========Macro generated from canvas: CutFlow_both_18/CutFlow_both_18
//=========  (Fri Dec  9 13:00:01 2022) by ROOT version 6.26/06
   TCanvas *CutFlow_both_18 = new TCanvas("CutFlow_both_18", "CutFlow_both_18",0,0,600,600);
   CutFlow_both_18->SetHighLightColor(2);
   CutFlow_both_18->Range(-1.091764,5.288996,5.858166,14.20194);
   CutFlow_both_18->SetFillColor(0);
   CutFlow_both_18->SetFillStyle(4000);
   CutFlow_both_18->SetBorderMode(0);
   CutFlow_both_18->SetBorderSize(2);
   CutFlow_both_18->SetLogy();
   CutFlow_both_18->SetLeftMargin(0.15709);
   CutFlow_both_18->SetRightMargin(0.1234783);
   CutFlow_both_18->SetBottomMargin(0.12);
   CutFlow_both_18->SetFrameFillStyle(1000);
   CutFlow_both_18->SetFrameBorderMode(0);
   CutFlow_both_18->SetFrameFillStyle(1000);
   CutFlow_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(9140881);
   st->SetMaximum(9.288648e+12);
   
   TH1F *st_stack_91 = new TH1F("st_stack_91","",4,0,4);
   st_stack_91->SetMinimum(2283233);
   st_stack_91->SetMaximum(2.044796e+13);
   st_stack_91->SetDirectory(0);
   st_stack_91->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_91->SetLineColor(ci);
   st_stack_91->GetXaxis()->SetTitle(""Cut flow"");
   st_stack_91->GetXaxis()->SetBinLabel(1,"Total");
   st_stack_91->GetXaxis()->SetBinLabel(2,"MET cut");
   st_stack_91->GetXaxis()->SetBinLabel(3,"jet cuts");
   st_stack_91->GetXaxis()->SetBinLabel(4,"tags cut");
   st_stack_91->GetXaxis()->SetRange(1,5);
   st_stack_91->GetXaxis()->SetLabelFont(42);
   st_stack_91->GetXaxis()->SetTitleOffset(1);
   st_stack_91->GetXaxis()->SetTitleFont(42);
   st_stack_91->GetYaxis()->SetTitle("Events/1.0");
   st_stack_91->GetYaxis()->SetLabelFont(42);
   st_stack_91->GetYaxis()->SetTitleSize(0.037);
   st_stack_91->GetYaxis()->SetTitleFont(42);
   st_stack_91->GetZaxis()->SetLabelFont(42);
   st_stack_91->GetZaxis()->SetTitleOffset(1);
   st_stack_91->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_91);
   
   
   TH1D *VbbHcc_both_CutFlow_stack_1 = new TH1D("VbbHcc_both_CutFlow_stack_1","",4,0,4);
   VbbHcc_both_CutFlow_stack_1->SetBinContent(1,9.278934e+10);
   VbbHcc_both_CutFlow_stack_1->SetBinContent(2,9.278073e+10);
   VbbHcc_both_CutFlow_stack_1->SetBinContent(3,9.09571e+09);
   VbbHcc_both_CutFlow_stack_1->SetBinContent(4,2.488579e+07);
   VbbHcc_both_CutFlow_stack_1->SetBinError(1,1.220363e+07);
   VbbHcc_both_CutFlow_stack_1->SetBinError(2,1.220306e+07);
   VbbHcc_both_CutFlow_stack_1->SetBinError(3,3820834);
   VbbHcc_both_CutFlow_stack_1->SetBinError(4,199855.3);
   VbbHcc_both_CutFlow_stack_1->SetEntries(1.213013e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_CutFlow_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_CutFlow_stack_1->SetLineColor(ci);
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_1,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_2 = new TH1D("VbbHcc_both_CutFlow_stack_2","",4,0,4);
   VbbHcc_both_CutFlow_stack_2->SetBinContent(1,1.723649e+07);
   VbbHcc_both_CutFlow_stack_2->SetBinContent(2,1.687534e+07);
   VbbHcc_both_CutFlow_stack_2->SetBinContent(3,3908647);
   VbbHcc_both_CutFlow_stack_2->SetBinContent(4,274411.8);
   VbbHcc_both_CutFlow_stack_2->SetBinError(1,1499.19);
   VbbHcc_both_CutFlow_stack_2->SetBinError(2,1473.466);
   VbbHcc_both_CutFlow_stack_2->SetBinError(3,845.777);
   VbbHcc_both_CutFlow_stack_2->SetBinError(4,227.311);
   VbbHcc_both_CutFlow_stack_2->SetEntries(5.468209e+08);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_CutFlow_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_CutFlow_stack_2->SetLineColor(ci);
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_2,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_3 = new TH1D("VbbHcc_both_CutFlow_stack_3","",4,0,4);
   VbbHcc_both_CutFlow_stack_3->SetBinContent(1,4.964886e+07);
   VbbHcc_both_CutFlow_stack_3->SetBinContent(2,4.710353e+07);
   VbbHcc_both_CutFlow_stack_3->SetBinContent(3,2.90549e+07);
   VbbHcc_both_CutFlow_stack_3->SetBinContent(4,4055841);
   VbbHcc_both_CutFlow_stack_3->SetBinError(1,1799.086);
   VbbHcc_both_CutFlow_stack_3->SetBinError(2,1761.097);
   VbbHcc_both_CutFlow_stack_3->SetBinError(3,1429.889);
   VbbHcc_both_CutFlow_stack_3->SetBinError(4,542.0873);
   VbbHcc_both_CutFlow_stack_3->SetEntries(2.077169e+09);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_CutFlow_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_CutFlow_stack_3->SetLineColor(ci);
   VbbHcc_both_CutFlow_stack_3->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow_stack_3->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow_stack_3->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow_stack_3->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow_stack_3->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_3,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_4 = new TH1D("VbbHcc_both_CutFlow_stack_4","",4,0,4);
   VbbHcc_both_CutFlow_stack_4->SetBinContent(1,6818882);
   VbbHcc_both_CutFlow_stack_4->SetBinContent(2,6808640);
   VbbHcc_both_CutFlow_stack_4->SetBinContent(3,3445106);
   VbbHcc_both_CutFlow_stack_4->SetBinContent(4,66290.19);
   VbbHcc_both_CutFlow_stack_4->SetBinError(1,1874.621);
   VbbHcc_both_CutFlow_stack_4->SetBinError(2,1873.213);
   VbbHcc_both_CutFlow_stack_4->SetBinError(3,1332.472);
   VbbHcc_both_CutFlow_stack_4->SetBinError(4,184.8339);
   VbbHcc_both_CutFlow_stack_4->SetEntries(3.325597e+07);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_CutFlow_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_CutFlow_stack_4->SetLineColor(ci);
   VbbHcc_both_CutFlow_stack_4->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow_stack_4->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow_stack_4->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow_stack_4->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow_stack_4->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_4,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_5 = new TH1D("VbbHcc_both_CutFlow_stack_5","",4,0,4);
   VbbHcc_both_CutFlow_stack_5->SetBinContent(1,1.650982e+07);
   VbbHcc_both_CutFlow_stack_5->SetBinContent(2,1.648925e+07);
   VbbHcc_both_CutFlow_stack_5->SetBinContent(3,8186729);
   VbbHcc_both_CutFlow_stack_5->SetBinContent(4,38089.57);
   VbbHcc_both_CutFlow_stack_5->SetBinError(1,6040.614);
   VbbHcc_both_CutFlow_stack_5->SetBinError(2,6036.852);
   VbbHcc_both_CutFlow_stack_5->SetBinError(3,4253.684);
   VbbHcc_both_CutFlow_stack_5->SetBinError(4,290.1436);
   VbbHcc_both_CutFlow_stack_5->SetEntries(1.865215e+07);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_CutFlow_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_CutFlow_stack_5->SetLineColor(ci);
   VbbHcc_both_CutFlow_stack_5->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow_stack_5->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow_stack_5->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow_stack_5->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow_stack_5->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_5,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_6 = new TH1D("VbbHcc_both_CutFlow_stack_6","",4,0,4);
   VbbHcc_both_CutFlow_stack_6->SetBinContent(1,4531989);
   VbbHcc_both_CutFlow_stack_6->SetBinContent(2,4458534);
   VbbHcc_both_CutFlow_stack_6->SetBinContent(3,348640.9);
   VbbHcc_both_CutFlow_stack_6->SetBinContent(4,1218.339);
   VbbHcc_both_CutFlow_stack_6->SetBinError(1,1144.537);
   VbbHcc_both_CutFlow_stack_6->SetBinError(2,1135.223);
   VbbHcc_both_CutFlow_stack_6->SetBinError(3,317.4493);
   VbbHcc_both_CutFlow_stack_6->SetBinError(4,18.76589);
   VbbHcc_both_CutFlow_stack_6->SetEntries(3.231426e+07);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_CutFlow_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_CutFlow_stack_6->SetLineColor(ci);
   VbbHcc_both_CutFlow_stack_6->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow_stack_6->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow_stack_6->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow_stack_6->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow_stack_6->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_6,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_7 = new TH1D("VbbHcc_both_CutFlow_stack_7","",4,0,4);
   VbbHcc_both_CutFlow_stack_7->SetBinContent(1,1646205);
   VbbHcc_both_CutFlow_stack_7->SetBinContent(2,1607425);
   VbbHcc_both_CutFlow_stack_7->SetBinContent(3,147015.1);
   VbbHcc_both_CutFlow_stack_7->SetBinContent(4,2289.385);
   VbbHcc_both_CutFlow_stack_7->SetBinError(1,647.9414);
   VbbHcc_both_CutFlow_stack_7->SetBinError(2,640.2641);
   VbbHcc_both_CutFlow_stack_7->SetBinError(3,193.631);
   VbbHcc_both_CutFlow_stack_7->SetBinError(4,24.16313);
   VbbHcc_both_CutFlow_stack_7->SetEntries(1.334338e+07);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_CutFlow_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_CutFlow_stack_7->SetLineColor(ci);
   VbbHcc_both_CutFlow_stack_7->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow_stack_7->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow_stack_7->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow_stack_7->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow_stack_7->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_7,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_8 = new TH1D("VbbHcc_both_CutFlow_stack_8","",4,0,4);
   VbbHcc_both_CutFlow_stack_8->SetBinContent(1,726670.7);
   VbbHcc_both_CutFlow_stack_8->SetBinContent(2,707583.6);
   VbbHcc_both_CutFlow_stack_8->SetBinContent(3,71620.11);
   VbbHcc_both_CutFlow_stack_8->SetBinContent(4,2209.677);
   VbbHcc_both_CutFlow_stack_8->SetBinError(1,418.6375);
   VbbHcc_both_CutFlow_stack_8->SetBinError(2,413.1028);
   VbbHcc_both_CutFlow_stack_8->SetBinError(3,131.4277);
   VbbHcc_both_CutFlow_stack_8->SetBinError(4,23.0852);
   VbbHcc_both_CutFlow_stack_8->SetEntries(6252980);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_CutFlow_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_CutFlow_stack_8->SetLineColor(ci);
   VbbHcc_both_CutFlow_stack_8->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow_stack_8->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow_stack_8->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow_stack_8->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow_stack_8->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_8,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_9 = new TH1D("VbbHcc_both_CutFlow_stack_9","",4,0,4);
   VbbHcc_both_CutFlow_stack_9->SetBinContent(1,21460.37);
   VbbHcc_both_CutFlow_stack_9->SetBinContent(2,21425);
   VbbHcc_both_CutFlow_stack_9->SetBinContent(3,6802.672);
   VbbHcc_both_CutFlow_stack_9->SetBinContent(4,789.8988);
   VbbHcc_both_CutFlow_stack_9->SetBinError(1,7.224385);
   VbbHcc_both_CutFlow_stack_9->SetBinError(2,7.218542);
   VbbHcc_both_CutFlow_stack_9->SetBinError(3,3.991838);
   VbbHcc_both_CutFlow_stack_9->SetBinError(4,1.359577);
   VbbHcc_both_CutFlow_stack_9->SetEntries(2.3366e+07);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_CutFlow_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_CutFlow_stack_9->SetLineColor(ci);
   VbbHcc_both_CutFlow_stack_9->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow_stack_9->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow_stack_9->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow_stack_9->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow_stack_9->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_9,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_10 = new TH1D("VbbHcc_both_CutFlow_stack_10","",4,0,4);
   VbbHcc_both_CutFlow_stack_10->SetBinContent(1,2980.723);
   VbbHcc_both_CutFlow_stack_10->SetBinContent(2,2967.389);
   VbbHcc_both_CutFlow_stack_10->SetBinContent(3,1837.606);
   VbbHcc_both_CutFlow_stack_10->SetBinContent(4,241.0779);
   VbbHcc_both_CutFlow_stack_10->SetBinError(1,1.33302);
   VbbHcc_both_CutFlow_stack_10->SetBinError(2,1.330035);
   VbbHcc_both_CutFlow_stack_10->SetBinError(3,1.046651);
   VbbHcc_both_CutFlow_stack_10->SetBinError(4,0.3791007);
   VbbHcc_both_CutFlow_stack_10->SetEntries(1.346451e+07);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_CutFlow_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_CutFlow_stack_10->SetLineColor(ci);
   VbbHcc_both_CutFlow_stack_10->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow_stack_10->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow_stack_10->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow_stack_10->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow_stack_10->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_10,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_11 = new TH1D("VbbHcc_both_CutFlow_stack_11","",4,0,4);
   VbbHcc_both_CutFlow_stack_11->SetBinContent(1,1065.823);
   VbbHcc_both_CutFlow_stack_11->SetBinContent(2,1064.704);
   VbbHcc_both_CutFlow_stack_11->SetBinContent(3,374.8702);
   VbbHcc_both_CutFlow_stack_11->SetBinContent(4,15.31135);
   VbbHcc_both_CutFlow_stack_11->SetBinError(1,1.622075);
   VbbHcc_both_CutFlow_stack_11->SetBinError(2,1.621259);
   VbbHcc_both_CutFlow_stack_11->SetBinError(3,0.9449904);
   VbbHcc_both_CutFlow_stack_11->SetBinError(4,0.1910582);
   VbbHcc_both_CutFlow_stack_11->SetEntries(1146496);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_CutFlow_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_CutFlow_stack_11->SetLineColor(ci);
   VbbHcc_both_CutFlow_stack_11->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow_stack_11->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow_stack_11->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow_stack_11->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow_stack_11->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_11,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_12 = new TH1D("VbbHcc_both_CutFlow_stack_12","",4,0,4);
   VbbHcc_both_CutFlow_stack_12->SetBinContent(1,148.0808);
   VbbHcc_both_CutFlow_stack_12->SetBinContent(2,147.61);
   VbbHcc_both_CutFlow_stack_12->SetBinContent(3,96.68236);
   VbbHcc_both_CutFlow_stack_12->SetBinContent(4,4.851466);
   VbbHcc_both_CutFlow_stack_12->SetBinError(1,0.2097327);
   VbbHcc_both_CutFlow_stack_12->SetBinError(2,0.209399);
   VbbHcc_both_CutFlow_stack_12->SetBinError(3,0.1694691);
   VbbHcc_both_CutFlow_stack_12->SetBinError(4,0.03796237);
   VbbHcc_both_CutFlow_stack_12->SetEntries(1337219);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_CutFlow_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_CutFlow_stack_12->SetLineColor(ci);
   VbbHcc_both_CutFlow_stack_12->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow_stack_12->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow_stack_12->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow_stack_12->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow_stack_12->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_12,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_CutFlow_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_CutFlow_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_CutFlow_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_CutFlow_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_CutFlow_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_CutFlow_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_CutFlow_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_CutFlow_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_CutFlow_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_CutFlow_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_CutFlow_stack_2","Single Top","F");

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
   entry=leg->AddEntry("VbbHcc_both_CutFlow_stack_1","QCD","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_both_18->Modified();
   CutFlow_both_18->cd();
   CutFlow_both_18->SetSelected(CutFlow_both_18);
}
