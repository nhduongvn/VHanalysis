#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_algo_18_logY()
{
//=========Macro generated from canvas: CutFlow_algo_18/CutFlow_algo_18
//=========  (Wed Dec  7 11:48:26 2022) by ROOT version 6.26/06
   TCanvas *CutFlow_algo_18 = new TCanvas("CutFlow_algo_18", "CutFlow_algo_18",0,0,600,600);
   CutFlow_algo_18->SetHighLightColor(2);
   CutFlow_algo_18->Range(-1.310117,2.733405,7.029799,14.57029);
   CutFlow_algo_18->SetFillColor(0);
   CutFlow_algo_18->SetFillStyle(4000);
   CutFlow_algo_18->SetBorderMode(0);
   CutFlow_algo_18->SetBorderSize(2);
   CutFlow_algo_18->SetLogy();
   CutFlow_algo_18->SetLeftMargin(0.15709);
   CutFlow_algo_18->SetRightMargin(0.1234783);
   CutFlow_algo_18->SetBottomMargin(0.12);
   CutFlow_algo_18->SetFrameFillStyle(1000);
   CutFlow_algo_18->SetFrameBorderMode(0);
   CutFlow_algo_18->SetFrameFillStyle(1000);
   CutFlow_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(72039.08);
   st->SetMaximum(9.288648e+12);
   
   TH1F *st_stack_47 = new TH1F("st_stack_47","",5,0,5);
   st_stack_47->SetMinimum(14250.51);
   st_stack_47->SetMaximum(2.435555e+13);
   st_stack_47->SetDirectory(0);
   st_stack_47->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_47->SetLineColor(ci);
   st_stack_47->GetXaxis()->SetTitle(""Cut flow"");
   st_stack_47->GetXaxis()->SetBinLabel(1,"Total");
   st_stack_47->GetXaxis()->SetBinLabel(2,"MET cut");
   st_stack_47->GetXaxis()->SetBinLabel(3,"jet cuts");
   st_stack_47->GetXaxis()->SetBinLabel(4,"b-tags");
   st_stack_47->GetXaxis()->SetBinLabel(5,"c-tags");
   st_stack_47->GetXaxis()->SetRange(1,6);
   st_stack_47->GetXaxis()->SetLabelFont(42);
   st_stack_47->GetXaxis()->SetTitleOffset(1);
   st_stack_47->GetXaxis()->SetTitleFont(42);
   st_stack_47->GetYaxis()->SetTitle("Events/1.0");
   st_stack_47->GetYaxis()->SetLabelFont(42);
   st_stack_47->GetYaxis()->SetTitleSize(0.037);
   st_stack_47->GetYaxis()->SetTitleFont(42);
   st_stack_47->GetZaxis()->SetLabelFont(42);
   st_stack_47->GetZaxis()->SetTitleOffset(1);
   st_stack_47->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_47);
   
   
   TH1D *VbbHcc_algo_CutFlow_stack_1 = new TH1D("VbbHcc_algo_CutFlow_stack_1","",5,0,5);
   VbbHcc_algo_CutFlow_stack_1->SetBinContent(1,9.278934e+10);
   VbbHcc_algo_CutFlow_stack_1->SetBinContent(2,9.278073e+10);
   VbbHcc_algo_CutFlow_stack_1->SetBinContent(3,9.09571e+09);
   VbbHcc_algo_CutFlow_stack_1->SetBinContent(4,6.972997e+07);
   VbbHcc_algo_CutFlow_stack_1->SetBinContent(5,3572768);
   VbbHcc_algo_CutFlow_stack_1->SetBinError(1,1.220363e+07);
   VbbHcc_algo_CutFlow_stack_1->SetBinError(2,1.220306e+07);
   VbbHcc_algo_CutFlow_stack_1->SetBinError(3,3820834);
   VbbHcc_algo_CutFlow_stack_1->SetBinError(4,334541.2);
   VbbHcc_algo_CutFlow_stack_1->SetBinError(5,75725.52);
   VbbHcc_algo_CutFlow_stack_1->SetEntries(1.213315e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_CutFlow_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_CutFlow_stack_1->SetLineColor(ci);
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetRange(1,5);
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_CutFlow_stack_1,"");
   
   TH1D *VbbHcc_algo_CutFlow_stack_2 = new TH1D("VbbHcc_algo_CutFlow_stack_2","",5,0,5);
   VbbHcc_algo_CutFlow_stack_2->SetBinContent(1,1.723649e+07);
   VbbHcc_algo_CutFlow_stack_2->SetBinContent(2,1.687534e+07);
   VbbHcc_algo_CutFlow_stack_2->SetBinContent(3,3908647);
   VbbHcc_algo_CutFlow_stack_2->SetBinContent(4,221373.2);
   VbbHcc_algo_CutFlow_stack_2->SetBinContent(5,20627.13);
   VbbHcc_algo_CutFlow_stack_2->SetBinError(1,1499.19);
   VbbHcc_algo_CutFlow_stack_2->SetBinError(2,1473.466);
   VbbHcc_algo_CutFlow_stack_2->SetBinError(3,845.777);
   VbbHcc_algo_CutFlow_stack_2->SetBinError(4,184.2935);
   VbbHcc_algo_CutFlow_stack_2->SetBinError(5,56.91365);
   VbbHcc_algo_CutFlow_stack_2->SetEntries(5.468726e+08);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_CutFlow_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_CutFlow_stack_2->SetLineColor(ci);
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetRange(1,5);
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_CutFlow_stack_2,"");
   
   TH1D *VbbHcc_algo_CutFlow_stack_3 = new TH1D("VbbHcc_algo_CutFlow_stack_3","",5,0,5);
   VbbHcc_algo_CutFlow_stack_3->SetBinContent(1,4.964886e+07);
   VbbHcc_algo_CutFlow_stack_3->SetBinContent(2,4.710353e+07);
   VbbHcc_algo_CutFlow_stack_3->SetBinContent(3,2.90549e+07);
   VbbHcc_algo_CutFlow_stack_3->SetBinContent(4,1949028);
   VbbHcc_algo_CutFlow_stack_3->SetBinContent(5,176964.1);
   VbbHcc_algo_CutFlow_stack_3->SetBinError(1,1799.086);
   VbbHcc_algo_CutFlow_stack_3->SetBinError(2,1761.097);
   VbbHcc_algo_CutFlow_stack_3->SetBinError(3,1429.889);
   VbbHcc_algo_CutFlow_stack_3->SetBinError(4,363.7038);
   VbbHcc_algo_CutFlow_stack_3->SetBinError(5,110.3809);
   VbbHcc_algo_CutFlow_stack_3->SetEntries(2.051523e+09);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_CutFlow_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_CutFlow_stack_3->SetLineColor(ci);
   VbbHcc_algo_CutFlow_stack_3->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow_stack_3->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow_stack_3->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow_stack_3->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_algo_CutFlow_stack_3->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_algo_CutFlow_stack_3->GetXaxis()->SetRange(1,5);
   VbbHcc_algo_CutFlow_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_CutFlow_stack_3,"");
   
   TH1D *VbbHcc_algo_CutFlow_stack_4 = new TH1D("VbbHcc_algo_CutFlow_stack_4","",5,0,5);
   VbbHcc_algo_CutFlow_stack_4->SetBinContent(1,6818882);
   VbbHcc_algo_CutFlow_stack_4->SetBinContent(2,6808640);
   VbbHcc_algo_CutFlow_stack_4->SetBinContent(3,3445106);
   VbbHcc_algo_CutFlow_stack_4->SetBinContent(4,97967.02);
   VbbHcc_algo_CutFlow_stack_4->SetBinContent(5,6339.488);
   VbbHcc_algo_CutFlow_stack_4->SetBinError(1,1874.621);
   VbbHcc_algo_CutFlow_stack_4->SetBinError(2,1873.213);
   VbbHcc_algo_CutFlow_stack_4->SetBinError(3,1332.472);
   VbbHcc_algo_CutFlow_stack_4->SetBinError(4,224.6968);
   VbbHcc_algo_CutFlow_stack_4->SetBinError(5,57.15892);
   VbbHcc_algo_CutFlow_stack_4->SetEntries(3.332974e+07);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_CutFlow_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_CutFlow_stack_4->SetLineColor(ci);
   VbbHcc_algo_CutFlow_stack_4->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow_stack_4->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow_stack_4->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow_stack_4->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_algo_CutFlow_stack_4->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_algo_CutFlow_stack_4->GetXaxis()->SetRange(1,5);
   VbbHcc_algo_CutFlow_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_CutFlow_stack_4,"");
   
   TH1D *VbbHcc_algo_CutFlow_stack_5 = new TH1D("VbbHcc_algo_CutFlow_stack_5","",5,0,5);
   VbbHcc_algo_CutFlow_stack_5->SetBinContent(1,1.650982e+07);
   VbbHcc_algo_CutFlow_stack_5->SetBinContent(2,1.648925e+07);
   VbbHcc_algo_CutFlow_stack_5->SetBinContent(3,8186729);
   VbbHcc_algo_CutFlow_stack_5->SetBinContent(4,30667.92);
   VbbHcc_algo_CutFlow_stack_5->SetBinContent(5,2835.611);
   VbbHcc_algo_CutFlow_stack_5->SetBinError(1,6040.614);
   VbbHcc_algo_CutFlow_stack_5->SetBinError(2,6036.852);
   VbbHcc_algo_CutFlow_stack_5->SetBinError(3,4253.684);
   VbbHcc_algo_CutFlow_stack_5->SetBinError(4,260.3467);
   VbbHcc_algo_CutFlow_stack_5->SetBinError(5,79.16502);
   VbbHcc_algo_CutFlow_stack_5->SetEntries(1.865008e+07);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_CutFlow_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_CutFlow_stack_5->SetLineColor(ci);
   VbbHcc_algo_CutFlow_stack_5->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow_stack_5->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow_stack_5->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow_stack_5->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_algo_CutFlow_stack_5->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_algo_CutFlow_stack_5->GetXaxis()->SetRange(1,5);
   VbbHcc_algo_CutFlow_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_CutFlow_stack_5,"");
   
   TH1D *VbbHcc_algo_CutFlow_stack_6 = new TH1D("VbbHcc_algo_CutFlow_stack_6","",5,0,5);
   VbbHcc_algo_CutFlow_stack_6->SetBinContent(1,4531989);
   VbbHcc_algo_CutFlow_stack_6->SetBinContent(2,4458534);
   VbbHcc_algo_CutFlow_stack_6->SetBinContent(3,348640.9);
   VbbHcc_algo_CutFlow_stack_6->SetBinContent(4,1048.378);
   VbbHcc_algo_CutFlow_stack_6->SetBinContent(5,95.38595);
   VbbHcc_algo_CutFlow_stack_6->SetBinError(1,1144.537);
   VbbHcc_algo_CutFlow_stack_6->SetBinError(2,1135.223);
   VbbHcc_algo_CutFlow_stack_6->SetBinError(3,317.4493);
   VbbHcc_algo_CutFlow_stack_6->SetBinError(4,17.40782);
   VbbHcc_algo_CutFlow_stack_6->SetBinError(5,5.250824);
   VbbHcc_algo_CutFlow_stack_6->SetEntries(3.2314e+07);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_CutFlow_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_CutFlow_stack_6->SetLineColor(ci);
   VbbHcc_algo_CutFlow_stack_6->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow_stack_6->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow_stack_6->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow_stack_6->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_algo_CutFlow_stack_6->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_algo_CutFlow_stack_6->GetXaxis()->SetRange(1,5);
   VbbHcc_algo_CutFlow_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_CutFlow_stack_6,"");
   
   TH1D *VbbHcc_algo_CutFlow_stack_7 = new TH1D("VbbHcc_algo_CutFlow_stack_7","",5,0,5);
   VbbHcc_algo_CutFlow_stack_7->SetBinContent(1,1646205);
   VbbHcc_algo_CutFlow_stack_7->SetBinContent(2,1607425);
   VbbHcc_algo_CutFlow_stack_7->SetBinContent(3,147015.1);
   VbbHcc_algo_CutFlow_stack_7->SetBinContent(4,3820.572);
   VbbHcc_algo_CutFlow_stack_7->SetBinContent(5,343.2675);
   VbbHcc_algo_CutFlow_stack_7->SetBinError(1,647.9414);
   VbbHcc_algo_CutFlow_stack_7->SetBinError(2,640.2641);
   VbbHcc_algo_CutFlow_stack_7->SetBinError(3,193.631);
   VbbHcc_algo_CutFlow_stack_7->SetBinError(4,31.21462);
   VbbHcc_algo_CutFlow_stack_7->SetBinError(5,9.356429);
   VbbHcc_algo_CutFlow_stack_7->SetEntries(1.335073e+07);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_CutFlow_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_CutFlow_stack_7->SetLineColor(ci);
   VbbHcc_algo_CutFlow_stack_7->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow_stack_7->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow_stack_7->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow_stack_7->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_algo_CutFlow_stack_7->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_algo_CutFlow_stack_7->GetXaxis()->SetRange(1,5);
   VbbHcc_algo_CutFlow_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_CutFlow_stack_7,"");
   
   TH1D *VbbHcc_algo_CutFlow_stack_8 = new TH1D("VbbHcc_algo_CutFlow_stack_8","",5,0,5);
   VbbHcc_algo_CutFlow_stack_8->SetBinContent(1,726670.7);
   VbbHcc_algo_CutFlow_stack_8->SetBinContent(2,707583.6);
   VbbHcc_algo_CutFlow_stack_8->SetBinContent(3,71620.11);
   VbbHcc_algo_CutFlow_stack_8->SetBinContent(4,3764.796);
   VbbHcc_algo_CutFlow_stack_8->SetBinContent(5,350.1911);
   VbbHcc_algo_CutFlow_stack_8->SetBinError(1,418.6375);
   VbbHcc_algo_CutFlow_stack_8->SetBinError(2,413.1028);
   VbbHcc_algo_CutFlow_stack_8->SetBinError(3,131.4277);
   VbbHcc_algo_CutFlow_stack_8->SetBinError(4,30.13283);
   VbbHcc_algo_CutFlow_stack_8->SetBinError(5,9.190134);
   VbbHcc_algo_CutFlow_stack_8->SetEntries(6260880);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_CutFlow_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_CutFlow_stack_8->SetLineColor(ci);
   VbbHcc_algo_CutFlow_stack_8->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow_stack_8->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow_stack_8->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow_stack_8->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_algo_CutFlow_stack_8->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_algo_CutFlow_stack_8->GetXaxis()->SetRange(1,5);
   VbbHcc_algo_CutFlow_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_CutFlow_stack_8,"");
   
   TH1D *VbbHcc_algo_CutFlow_stack_9 = new TH1D("VbbHcc_algo_CutFlow_stack_9","",5,0,5);
   VbbHcc_algo_CutFlow_stack_9->SetBinContent(1,21460.37);
   VbbHcc_algo_CutFlow_stack_9->SetBinContent(2,21425);
   VbbHcc_algo_CutFlow_stack_9->SetBinContent(3,6802.672);
   VbbHcc_algo_CutFlow_stack_9->SetBinContent(4,1129.252);
   VbbHcc_algo_CutFlow_stack_9->SetBinContent(5,90.07339);
   VbbHcc_algo_CutFlow_stack_9->SetBinError(1,7.224385);
   VbbHcc_algo_CutFlow_stack_9->SetBinError(2,7.218542);
   VbbHcc_algo_CutFlow_stack_9->SetBinError(3,3.991838);
   VbbHcc_algo_CutFlow_stack_9->SetBinError(4,1.63276);
   VbbHcc_algo_CutFlow_stack_9->SetBinError(5,0.4613877);
   VbbHcc_algo_CutFlow_stack_9->SetEntries(2.35632e+07);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_CutFlow_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_CutFlow_stack_9->SetLineColor(ci);
   VbbHcc_algo_CutFlow_stack_9->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow_stack_9->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow_stack_9->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow_stack_9->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_algo_CutFlow_stack_9->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_algo_CutFlow_stack_9->GetXaxis()->SetRange(1,5);
   VbbHcc_algo_CutFlow_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_CutFlow_stack_9,"");
   
   TH1D *VbbHcc_algo_CutFlow_stack_10 = new TH1D("VbbHcc_algo_CutFlow_stack_10","",5,0,5);
   VbbHcc_algo_CutFlow_stack_10->SetBinContent(1,2980.723);
   VbbHcc_algo_CutFlow_stack_10->SetBinContent(2,2967.389);
   VbbHcc_algo_CutFlow_stack_10->SetBinContent(3,1837.606);
   VbbHcc_algo_CutFlow_stack_10->SetBinContent(4,281.4482);
   VbbHcc_algo_CutFlow_stack_10->SetBinContent(5,23.39748);
   VbbHcc_algo_CutFlow_stack_10->SetBinError(1,1.33302);
   VbbHcc_algo_CutFlow_stack_10->SetBinError(2,1.330035);
   VbbHcc_algo_CutFlow_stack_10->SetBinError(3,1.046651);
   VbbHcc_algo_CutFlow_stack_10->SetBinError(4,0.4096143);
   VbbHcc_algo_CutFlow_stack_10->SetBinError(5,0.1181029);
   VbbHcc_algo_CutFlow_stack_10->SetEntries(1.357148e+07);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_CutFlow_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_CutFlow_stack_10->SetLineColor(ci);
   VbbHcc_algo_CutFlow_stack_10->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow_stack_10->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow_stack_10->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow_stack_10->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_algo_CutFlow_stack_10->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_algo_CutFlow_stack_10->GetXaxis()->SetRange(1,5);
   VbbHcc_algo_CutFlow_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_CutFlow_stack_10,"");
   
   TH1D *VbbHcc_algo_CutFlow_stack_11 = new TH1D("VbbHcc_algo_CutFlow_stack_11","",5,0,5);
   VbbHcc_algo_CutFlow_stack_11->SetBinContent(1,1065.823);
   VbbHcc_algo_CutFlow_stack_11->SetBinContent(2,1064.704);
   VbbHcc_algo_CutFlow_stack_11->SetBinContent(3,374.8702);
   VbbHcc_algo_CutFlow_stack_11->SetBinContent(4,17.21424);
   VbbHcc_algo_CutFlow_stack_11->SetBinContent(5,3.259761);
   VbbHcc_algo_CutFlow_stack_11->SetBinError(1,1.622075);
   VbbHcc_algo_CutFlow_stack_11->SetBinError(2,1.621259);
   VbbHcc_algo_CutFlow_stack_11->SetBinError(3,0.9449904);
   VbbHcc_algo_CutFlow_stack_11->SetBinError(4,0.2037338);
   VbbHcc_algo_CutFlow_stack_11->SetBinError(5,0.08874743);
   VbbHcc_algo_CutFlow_stack_11->SetEntries(1148882);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_CutFlow_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_CutFlow_stack_11->SetLineColor(ci);
   VbbHcc_algo_CutFlow_stack_11->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow_stack_11->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow_stack_11->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow_stack_11->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_algo_CutFlow_stack_11->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_algo_CutFlow_stack_11->GetXaxis()->SetRange(1,5);
   VbbHcc_algo_CutFlow_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_CutFlow_stack_11,"");
   
   TH1D *VbbHcc_algo_CutFlow_stack_12 = new TH1D("VbbHcc_algo_CutFlow_stack_12","",5,0,5);
   VbbHcc_algo_CutFlow_stack_12->SetBinContent(1,148.0808);
   VbbHcc_algo_CutFlow_stack_12->SetBinContent(2,147.61);
   VbbHcc_algo_CutFlow_stack_12->SetBinContent(3,96.68236);
   VbbHcc_algo_CutFlow_stack_12->SetBinContent(4,4.743635);
   VbbHcc_algo_CutFlow_stack_12->SetBinContent(5,0.8662058);
   VbbHcc_algo_CutFlow_stack_12->SetBinError(1,0.2097327);
   VbbHcc_algo_CutFlow_stack_12->SetBinError(2,0.209399);
   VbbHcc_algo_CutFlow_stack_12->SetBinError(3,0.1694691);
   VbbHcc_algo_CutFlow_stack_12->SetBinError(4,0.03753811);
   VbbHcc_algo_CutFlow_stack_12->SetBinError(5,0.01604085);
   VbbHcc_algo_CutFlow_stack_12->SetEntries(1339772);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_CutFlow_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_CutFlow_stack_12->SetLineColor(ci);
   VbbHcc_algo_CutFlow_stack_12->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow_stack_12->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow_stack_12->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow_stack_12->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_algo_CutFlow_stack_12->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_algo_CutFlow_stack_12->GetXaxis()->SetRange(1,5);
   VbbHcc_algo_CutFlow_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_CutFlow_stack_12,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_CutFlow_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_CutFlow_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_CutFlow_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_CutFlow_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_CutFlow_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_CutFlow_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_CutFlow_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_CutFlow_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_CutFlow_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_CutFlow_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_CutFlow_stack_2","Single Top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_CutFlow_stack_1","QCD","F");

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
   CutFlow_algo_18->Modified();
   CutFlow_algo_18->cd();
   CutFlow_algo_18->SetSelected(CutFlow_algo_18);
}
