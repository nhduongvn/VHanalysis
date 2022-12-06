void CutFlow_both_17()
{
//=========Macro generated from canvas: CutFlow_both_17/CutFlow_both_17
//=========  (Tue Dec  6 10:45:04 2022) by ROOT version 6.14/09
   TCanvas *CutFlow_both_17 = new TCanvas("CutFlow_both_17", "CutFlow_both_17",0,0,600,600);
   CutFlow_both_17->SetHighLightColor(2);
   CutFlow_both_17->Range(-0.625,-1.383328e+23,5.625,1.244995e+24);
   CutFlow_both_17->SetFillColor(0);
   CutFlow_both_17->SetFillStyle(4000);
   CutFlow_both_17->SetBorderMode(0);
   CutFlow_both_17->SetBorderSize(2);
   CutFlow_both_17->SetFrameFillStyle(1000);
   CutFlow_both_17->SetFrameBorderMode(0);
   CutFlow_both_17->SetFrameFillStyle(1000);
   CutFlow_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(1.053964e+24);
   
   TH1F *st_stack_122 = new TH1F("st_stack_122","",4,0,4);
   st_stack_122->SetMinimum(1);
   st_stack_122->SetMaximum(1.106663e+24);
   st_stack_122->SetDirectory(0);
   st_stack_122->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_122->SetLineColor(ci);
   st_stack_122->GetXaxis()->SetBinLabel(1,"Total");
   st_stack_122->GetXaxis()->SetBinLabel(2,"MET cut");
   st_stack_122->GetXaxis()->SetBinLabel(3,"jet cuts");
   st_stack_122->GetXaxis()->SetBinLabel(4,"tags cut");
   st_stack_122->GetXaxis()->SetRange(1,5);
   st_stack_122->GetXaxis()->SetLabelFont(42);
   st_stack_122->GetXaxis()->SetLabelSize(0.035);
   st_stack_122->GetXaxis()->SetTitleSize(0.035);
   st_stack_122->GetXaxis()->SetTitleFont(42);
   st_stack_122->GetYaxis()->SetTitle("Events/1.0");
   st_stack_122->GetYaxis()->SetLabelFont(42);
   st_stack_122->GetYaxis()->SetLabelSize(0.05);
   st_stack_122->GetYaxis()->SetTitleSize(0.057);
   st_stack_122->GetYaxis()->SetTitleOffset(1.2);
   st_stack_122->GetYaxis()->SetTitleFont(42);
   st_stack_122->GetZaxis()->SetLabelFont(42);
   st_stack_122->GetZaxis()->SetLabelSize(0.035);
   st_stack_122->GetZaxis()->SetTitleSize(0.035);
   st_stack_122->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_122);
   
   
   TH1D *VbbHcc_both_CutFlow_stack_1 = new TH1D("VbbHcc_both_CutFlow_stack_1","",4,0,4);
   VbbHcc_both_CutFlow_stack_1->SetBinContent(1,6.453607e+10);
   VbbHcc_both_CutFlow_stack_1->SetBinContent(2,6.452709e+10);
   VbbHcc_both_CutFlow_stack_1->SetBinContent(3,6.469859e+09);
   VbbHcc_both_CutFlow_stack_1->SetBinContent(4,1.967333e+07);
   VbbHcc_both_CutFlow_stack_1->SetBinError(1,8599642);
   VbbHcc_both_CutFlow_stack_1->SetBinError(2,8599044);
   VbbHcc_both_CutFlow_stack_1->SetBinError(3,2722868);
   VbbHcc_both_CutFlow_stack_1->SetBinError(4,150147.5);
   VbbHcc_both_CutFlow_stack_1->SetEntries(1.182905e+08);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_CutFlow_stack_1->SetLineColor(ci);
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_CutFlow_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_1,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_2 = new TH1D("VbbHcc_both_CutFlow_stack_2","",4,0,4);
   VbbHcc_both_CutFlow_stack_2->SetBinContent(1,1.198818e+07);
   VbbHcc_both_CutFlow_stack_2->SetBinContent(2,1.173641e+07);
   VbbHcc_both_CutFlow_stack_2->SetBinContent(3,2739251);
   VbbHcc_both_CutFlow_stack_2->SetBinContent(4,205749.3);
   VbbHcc_both_CutFlow_stack_2->SetBinError(1,1160.853);
   VbbHcc_both_CutFlow_stack_2->SetBinError(2,1140.951);
   VbbHcc_both_CutFlow_stack_2->SetBinError(3,656.3892);
   VbbHcc_both_CutFlow_stack_2->SetBinError(4,182.4906);
   VbbHcc_both_CutFlow_stack_2->SetEntries(4.370477e+08);

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
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_CutFlow_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_2,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_3 = new TH1D("VbbHcc_both_CutFlow_stack_3","",4,0,4);
   VbbHcc_both_CutFlow_stack_3->SetBinContent(1,3.453136e+07);
   VbbHcc_both_CutFlow_stack_3->SetBinContent(2,3.275417e+07);
   VbbHcc_both_CutFlow_stack_3->SetBinContent(3,2.025484e+07);
   VbbHcc_both_CutFlow_stack_3->SetBinContent(4,2990401);
   VbbHcc_both_CutFlow_stack_3->SetBinError(1,1401.81);
   VbbHcc_both_CutFlow_stack_3->SetBinError(2,1373.092);
   VbbHcc_both_CutFlow_stack_3->SetBinError(3,1119.974);
   VbbHcc_both_CutFlow_stack_3->SetBinError(4,437.5305);
   VbbHcc_both_CutFlow_stack_3->SetEntries(1.673264e+09);

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
   VbbHcc_both_CutFlow_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_CutFlow_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_3,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_4 = new TH1D("VbbHcc_both_CutFlow_stack_4","",4,0,4);
   VbbHcc_both_CutFlow_stack_4->SetBinContent(1,4742612);
   VbbHcc_both_CutFlow_stack_4->SetBinContent(2,4734952);
   VbbHcc_both_CutFlow_stack_4->SetBinContent(3,2405713);
   VbbHcc_both_CutFlow_stack_4->SetBinContent(4,50265.32);
   VbbHcc_both_CutFlow_stack_4->SetBinError(1,1323.134);
   VbbHcc_both_CutFlow_stack_4->SetBinError(2,1322.065);
   VbbHcc_both_CutFlow_stack_4->SetBinError(3,942.3602);
   VbbHcc_both_CutFlow_stack_4->SetBinError(4,136.2164);
   VbbHcc_both_CutFlow_stack_4->SetEntries(3.232803e+07);

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
   VbbHcc_both_CutFlow_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_CutFlow_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_4,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_5 = new TH1D("VbbHcc_both_CutFlow_stack_5","",4,0,4);
   VbbHcc_both_CutFlow_stack_5->SetBinContent(1,1.148277e+07);
   VbbHcc_both_CutFlow_stack_5->SetBinContent(2,1.146745e+07);
   VbbHcc_both_CutFlow_stack_5->SetBinContent(3,5717617);
   VbbHcc_both_CutFlow_stack_5->SetBinContent(4,30696.29);
   VbbHcc_both_CutFlow_stack_5->SetBinError(1,3645.482);
   VbbHcc_both_CutFlow_stack_5->SetBinError(2,3643.05);
   VbbHcc_both_CutFlow_stack_5->SetBinError(3,2572.404);
   VbbHcc_both_CutFlow_stack_5->SetBinError(4,188.484);
   VbbHcc_both_CutFlow_stack_5->SetEntries(2.479685e+07);

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
   VbbHcc_both_CutFlow_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_CutFlow_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_5,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_6 = new TH1D("VbbHcc_both_CutFlow_stack_6","",4,0,4);
   VbbHcc_both_CutFlow_stack_6->SetBinContent(1,3152051);
   VbbHcc_both_CutFlow_stack_6->SetBinContent(2,3100626);
   VbbHcc_both_CutFlow_stack_6->SetBinContent(3,246172.8);
   VbbHcc_both_CutFlow_stack_6->SetBinContent(4,978.1434);
   VbbHcc_both_CutFlow_stack_6->SetBinError(1,851.5326);
   VbbHcc_both_CutFlow_stack_6->SetBinError(2,844.5577);
   VbbHcc_both_CutFlow_stack_6->SetBinError(3,237.9714);
   VbbHcc_both_CutFlow_stack_6->SetBinError(4,15.00051);
   VbbHcc_both_CutFlow_stack_6->SetEntries(2.825482e+07);

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
   VbbHcc_both_CutFlow_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_CutFlow_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_6,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_7 = new TH1D("VbbHcc_both_CutFlow_stack_7","",4,0,4);
   VbbHcc_both_CutFlow_stack_7->SetBinContent(1,1144955);
   VbbHcc_both_CutFlow_stack_7->SetBinContent(2,1117858);
   VbbHcc_both_CutFlow_stack_7->SetBinContent(3,103364);
   VbbHcc_both_CutFlow_stack_7->SetBinContent(4,1777.009);
   VbbHcc_both_CutFlow_stack_7->SetBinError(1,407.6404);
   VbbHcc_both_CutFlow_stack_7->SetBinError(2,402.7879);
   VbbHcc_both_CutFlow_stack_7->SetBinError(3,122.4808);
   VbbHcc_both_CutFlow_stack_7->SetBinError(4,16.05935);
   VbbHcc_both_CutFlow_stack_7->SetEntries(1.631574e+07);

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
   VbbHcc_both_CutFlow_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_CutFlow_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_7,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_8 = new TH1D("VbbHcc_both_CutFlow_stack_8","",4,0,4);
   VbbHcc_both_CutFlow_stack_8->SetBinContent(1,505407.9);
   VbbHcc_both_CutFlow_stack_8->SetBinContent(2,492197.8);
   VbbHcc_both_CutFlow_stack_8->SetBinContent(3,50499.33);
   VbbHcc_both_CutFlow_stack_8->SetBinContent(4,1639.022);
   VbbHcc_both_CutFlow_stack_8->SetBinError(1,446.7217);
   VbbHcc_both_CutFlow_stack_8->SetBinError(2,440.845);
   VbbHcc_both_CutFlow_stack_8->SetBinError(3,141.2079);
   VbbHcc_both_CutFlow_stack_8->SetBinError(4,25.43949);
   VbbHcc_both_CutFlow_stack_8->SetEntries(2658590);

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
   VbbHcc_both_CutFlow_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_CutFlow_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_8,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_9 = new TH1D("VbbHcc_both_CutFlow_stack_9","",4,0,4);
   VbbHcc_both_CutFlow_stack_9->SetBinContent(1,14925.94);
   VbbHcc_both_CutFlow_stack_9->SetBinContent(2,14899.73);
   VbbHcc_both_CutFlow_stack_9->SetBinContent(3,4767.615);
   VbbHcc_both_CutFlow_stack_9->SetBinContent(4,577.4576);
   VbbHcc_both_CutFlow_stack_9->SetBinError(1,5.064251);
   VbbHcc_both_CutFlow_stack_9->SetBinError(2,5.059887);
   VbbHcc_both_CutFlow_stack_9->SetBinError(3,2.809331);
   VbbHcc_both_CutFlow_stack_9->SetBinError(4,0.9770496);
   VbbHcc_both_CutFlow_stack_9->SetEntries(2.303765e+07);

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
   VbbHcc_both_CutFlow_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_CutFlow_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_9,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_10 = new TH1D("VbbHcc_both_CutFlow_stack_10","",4,0,4);
   VbbHcc_both_CutFlow_stack_10->SetBinContent(1,2073.128);
   VbbHcc_both_CutFlow_stack_10->SetBinContent(2,2063.854);
   VbbHcc_both_CutFlow_stack_10->SetBinContent(3,1278.076);
   VbbHcc_both_CutFlow_stack_10->SetBinContent(4,167.6725);
   VbbHcc_both_CutFlow_stack_10->SetBinError(1,0.9271309);
   VbbHcc_both_CutFlow_stack_10->SetBinError(2,0.9250548);
   VbbHcc_both_CutFlow_stack_10->SetBinError(3,0.7279581);
   VbbHcc_both_CutFlow_stack_10->SetBinError(4,0.2636689);
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
   VbbHcc_both_CutFlow_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_CutFlow_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_10,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_11 = new TH1D("VbbHcc_both_CutFlow_stack_11","",4,0,4);
   VbbHcc_both_CutFlow_stack_11->SetBinContent(1,741.2927);
   VbbHcc_both_CutFlow_stack_11->SetBinContent(2,740.3785);
   VbbHcc_both_CutFlow_stack_11->SetBinContent(3,259.7746);
   VbbHcc_both_CutFlow_stack_11->SetBinContent(4,11.40792);
   VbbHcc_both_CutFlow_stack_11->SetBinError(1,1.117623);
   VbbHcc_both_CutFlow_stack_11->SetBinError(2,1.116952);
   VbbHcc_both_CutFlow_stack_11->SetBinError(3,0.6502782);
   VbbHcc_both_CutFlow_stack_11->SetBinError(4,0.1366547);
   VbbHcc_both_CutFlow_stack_11->SetEntries(1166499);

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
   VbbHcc_both_CutFlow_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_CutFlow_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_11,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_12 = new TH1D("VbbHcc_both_CutFlow_stack_12","",4,0,4);
   VbbHcc_both_CutFlow_stack_12->SetBinContent(1,2193012);
   VbbHcc_both_CutFlow_stack_12->SetBinContent(2,2187817);
   VbbHcc_both_CutFlow_stack_12->SetBinContent(3,1407631);
   VbbHcc_both_CutFlow_stack_12->SetBinContent(4,70947.33);
   VbbHcc_both_CutFlow_stack_12->SetBinError(1,3210.814);
   VbbHcc_both_CutFlow_stack_12->SetBinError(2,3207.009);
   VbbHcc_both_CutFlow_stack_12->SetBinError(3,2572.404);
   VbbHcc_both_CutFlow_stack_12->SetBinError(4,577.5142);
   VbbHcc_both_CutFlow_stack_12->SetEntries(1246420);

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
   VbbHcc_both_CutFlow_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_CutFlow_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_CutFlow_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_CutFlow_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_12,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_CutFlow_stack_1","QCD","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_CutFlow_stack_12","ggZHcc","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_both_17->Modified();
   CutFlow_both_17->cd();
   CutFlow_both_17->SetSelected(CutFlow_both_17);
}
