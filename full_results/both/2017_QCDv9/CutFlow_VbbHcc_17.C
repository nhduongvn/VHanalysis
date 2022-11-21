void CutFlow_VbbHcc_17()
{
//=========Macro generated from canvas: CutFlow_VbbHcc_17/CutFlow_VbbHcc_17
//=========  (Mon Nov 21 13:07:01 2022) by ROOT version 6.14/09
   TCanvas *CutFlow_VbbHcc_17 = new TCanvas("CutFlow_VbbHcc_17", "CutFlow_VbbHcc_17",0,0,600,600);
   CutFlow_VbbHcc_17->SetHighLightColor(2);
   CutFlow_VbbHcc_17->Range(0,0,1,1);
   CutFlow_VbbHcc_17->SetFillColor(0);
   CutFlow_VbbHcc_17->SetFillStyle(4000);
   CutFlow_VbbHcc_17->SetBorderMode(0);
   CutFlow_VbbHcc_17->SetBorderSize(2);
   CutFlow_VbbHcc_17->SetFrameFillStyle(1000);
   CutFlow_VbbHcc_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-3.177585,6.314516,27.92588);
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
   st->SetMaximum(1.053964e+24);
   
   TH1F *st_stack_34 = new TH1F("st_stack_34","",5,0,5);
   st_stack_34->SetMinimum(0.0007137039);
   st_stack_34->SetMaximum(6.539391e+24);
   st_stack_34->SetDirectory(0);
   st_stack_34->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_34->SetLineColor(ci);
   st_stack_34->GetXaxis()->SetBinLabel(1,"Total");
   st_stack_34->GetXaxis()->SetBinLabel(2,"MET cut");
   st_stack_34->GetXaxis()->SetBinLabel(3,"jet cuts");
   st_stack_34->GetXaxis()->SetBinLabel(4,"b-tags");
   st_stack_34->GetXaxis()->SetBinLabel(5,"c-tags");
   st_stack_34->GetXaxis()->SetRange(1,6);
   st_stack_34->GetXaxis()->SetLabelFont(42);
   st_stack_34->GetXaxis()->SetLabelSize(0.035);
   st_stack_34->GetXaxis()->SetTitleSize(0.035);
   st_stack_34->GetXaxis()->SetTitleFont(42);
   st_stack_34->GetYaxis()->SetTitle("Events/1.0");
   st_stack_34->GetYaxis()->SetLabelFont(42);
   st_stack_34->GetYaxis()->SetLabelSize(0.05);
   st_stack_34->GetYaxis()->SetTitleSize(0.057);
   st_stack_34->GetYaxis()->SetTitleOffset(1.2);
   st_stack_34->GetYaxis()->SetTitleFont(42);
   st_stack_34->GetZaxis()->SetLabelFont(42);
   st_stack_34->GetZaxis()->SetLabelSize(0.035);
   st_stack_34->GetZaxis()->SetTitleSize(0.035);
   st_stack_34->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_34);
   
   
   TH1D *VbbHcc_duong_CutFlow_stack_1 = new TH1D("VbbHcc_duong_CutFlow_stack_1","",5,0,5);
   VbbHcc_duong_CutFlow_stack_1->SetBinContent(1,6.453607e+10);
   VbbHcc_duong_CutFlow_stack_1->SetBinContent(2,6.452713e+10);
   VbbHcc_duong_CutFlow_stack_1->SetBinContent(3,6.470291e+09);
   VbbHcc_duong_CutFlow_stack_1->SetBinContent(4,1.968925e+07);
   VbbHcc_duong_CutFlow_stack_1->SetBinContent(5,1.968925e+07);
   VbbHcc_duong_CutFlow_stack_1->SetBinError(1,8511159);
   VbbHcc_duong_CutFlow_stack_1->SetBinError(2,8510570);
   VbbHcc_duong_CutFlow_stack_1->SetBinError(3,2694942);
   VbbHcc_duong_CutFlow_stack_1->SetBinError(4,148662.7);
   VbbHcc_duong_CutFlow_stack_1->SetBinError(5,148662.7);
   VbbHcc_duong_CutFlow_stack_1->SetEntries(1.207808e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_duong_CutFlow_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_CutFlow_stack_1->SetLineColor(ci);
   VbbHcc_duong_CutFlow_stack_1->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_duong_CutFlow_stack_1->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_duong_CutFlow_stack_1->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_duong_CutFlow_stack_1->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_duong_CutFlow_stack_1->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_duong_CutFlow_stack_1->GetXaxis()->SetRange(1,5);
   VbbHcc_duong_CutFlow_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_CutFlow_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_CutFlow_stack_1,"");
   
   TH1D *VbbHcc_duong_CutFlow_stack_2 = new TH1D("VbbHcc_duong_CutFlow_stack_2","",5,0,5);
   VbbHcc_duong_CutFlow_stack_2->SetBinContent(1,1.198818e+07);
   VbbHcc_duong_CutFlow_stack_2->SetBinContent(2,1.173642e+07);
   VbbHcc_duong_CutFlow_stack_2->SetBinContent(3,2738942);
   VbbHcc_duong_CutFlow_stack_2->SetBinContent(4,205708.1);
   VbbHcc_duong_CutFlow_stack_2->SetBinContent(5,205708.1);
   VbbHcc_duong_CutFlow_stack_2->SetBinError(1,1120.847);
   VbbHcc_duong_CutFlow_stack_2->SetBinError(2,1101.902);
   VbbHcc_duong_CutFlow_stack_2->SetBinError(3,630.4643);
   VbbHcc_duong_CutFlow_stack_2->SetBinError(4,175.2344);
   VbbHcc_duong_CutFlow_stack_2->SetBinError(5,175.2344);
   VbbHcc_duong_CutFlow_stack_2->SetEntries(4.552281e+08);

   ci = TColor::GetColor("#660066");
   VbbHcc_duong_CutFlow_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_CutFlow_stack_2->SetLineColor(ci);
   VbbHcc_duong_CutFlow_stack_2->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_duong_CutFlow_stack_2->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_duong_CutFlow_stack_2->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_duong_CutFlow_stack_2->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_duong_CutFlow_stack_2->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_duong_CutFlow_stack_2->GetXaxis()->SetRange(1,5);
   VbbHcc_duong_CutFlow_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_CutFlow_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_CutFlow_stack_2,"");
   
   TH1D *VbbHcc_duong_CutFlow_stack_3 = new TH1D("VbbHcc_duong_CutFlow_stack_3","",5,0,5);
   VbbHcc_duong_CutFlow_stack_3->SetBinContent(1,3.453136e+07);
   VbbHcc_duong_CutFlow_stack_3->SetBinContent(2,3.275408e+07);
   VbbHcc_duong_CutFlow_stack_3->SetBinContent(3,2.02548e+07);
   VbbHcc_duong_CutFlow_stack_3->SetBinContent(4,2990293);
   VbbHcc_duong_CutFlow_stack_3->SetBinContent(5,2990293);
   VbbHcc_duong_CutFlow_stack_3->SetBinError(1,1386.565);
   VbbHcc_duong_CutFlow_stack_3->SetBinError(2,1358.379);
   VbbHcc_duong_CutFlow_stack_3->SetBinError(3,1108.581);
   VbbHcc_duong_CutFlow_stack_3->SetBinError(4,433.3217);
   VbbHcc_duong_CutFlow_stack_3->SetBinError(5,433.3217);
   VbbHcc_duong_CutFlow_stack_3->SetEntries(1.763814e+09);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_duong_CutFlow_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_CutFlow_stack_3->SetLineColor(ci);
   VbbHcc_duong_CutFlow_stack_3->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_duong_CutFlow_stack_3->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_duong_CutFlow_stack_3->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_duong_CutFlow_stack_3->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_duong_CutFlow_stack_3->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_duong_CutFlow_stack_3->GetXaxis()->SetRange(1,5);
   VbbHcc_duong_CutFlow_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_CutFlow_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_CutFlow_stack_3,"");
   
   TH1D *VbbHcc_duong_CutFlow_stack_4 = new TH1D("VbbHcc_duong_CutFlow_stack_4","",5,0,5);
   VbbHcc_duong_CutFlow_stack_4->SetBinContent(1,4742612);
   VbbHcc_duong_CutFlow_stack_4->SetBinContent(2,4734947);
   VbbHcc_duong_CutFlow_stack_4->SetBinContent(3,2405500);
   VbbHcc_duong_CutFlow_stack_4->SetBinContent(4,50268.42);
   VbbHcc_duong_CutFlow_stack_4->SetBinContent(5,50268.42);
   VbbHcc_duong_CutFlow_stack_4->SetBinError(1,1266.741);
   VbbHcc_duong_CutFlow_stack_4->SetBinError(2,1265.717);
   VbbHcc_duong_CutFlow_stack_4->SetBinError(3,902.1563);
   VbbHcc_duong_CutFlow_stack_4->SetBinError(4,130.4148);
   VbbHcc_duong_CutFlow_stack_4->SetBinError(5,130.4148);
   VbbHcc_duong_CutFlow_stack_4->SetEntries(3.54184e+07);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_duong_CutFlow_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_CutFlow_stack_4->SetLineColor(ci);
   VbbHcc_duong_CutFlow_stack_4->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_duong_CutFlow_stack_4->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_duong_CutFlow_stack_4->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_duong_CutFlow_stack_4->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_duong_CutFlow_stack_4->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_duong_CutFlow_stack_4->GetXaxis()->SetRange(1,5);
   VbbHcc_duong_CutFlow_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_CutFlow_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_CutFlow_stack_4,"");
   
   TH1D *VbbHcc_duong_CutFlow_stack_5 = new TH1D("VbbHcc_duong_CutFlow_stack_5","",5,0,5);
   VbbHcc_duong_CutFlow_stack_5->SetBinContent(1,1.148277e+07);
   VbbHcc_duong_CutFlow_stack_5->SetBinContent(2,1.146745e+07);
   VbbHcc_duong_CutFlow_stack_5->SetBinContent(3,5717605);
   VbbHcc_duong_CutFlow_stack_5->SetBinContent(4,30696.92);
   VbbHcc_duong_CutFlow_stack_5->SetBinContent(5,30696.92);
   VbbHcc_duong_CutFlow_stack_5->SetBinError(1,3644.351);
   VbbHcc_duong_CutFlow_stack_5->SetBinError(2,3641.92);
   VbbHcc_duong_CutFlow_stack_5->SetBinError(3,2571.603);
   VbbHcc_duong_CutFlow_stack_5->SetBinError(4,188.4275);
   VbbHcc_duong_CutFlow_stack_5->SetBinError(5,188.4275);
   VbbHcc_duong_CutFlow_stack_5->SetEntries(2.483876e+07);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_duong_CutFlow_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_CutFlow_stack_5->SetLineColor(ci);
   VbbHcc_duong_CutFlow_stack_5->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_duong_CutFlow_stack_5->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_duong_CutFlow_stack_5->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_duong_CutFlow_stack_5->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_duong_CutFlow_stack_5->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_duong_CutFlow_stack_5->GetXaxis()->SetRange(1,5);
   VbbHcc_duong_CutFlow_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_CutFlow_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_CutFlow_stack_5,"");
   
   TH1D *VbbHcc_duong_CutFlow_stack_6 = new TH1D("VbbHcc_duong_CutFlow_stack_6","",5,0,5);
   VbbHcc_duong_CutFlow_stack_6->SetBinContent(1,3152051);
   VbbHcc_duong_CutFlow_stack_6->SetBinContent(2,3100617);
   VbbHcc_duong_CutFlow_stack_6->SetBinContent(3,246164.8);
   VbbHcc_duong_CutFlow_stack_6->SetBinContent(4,979.8496);
   VbbHcc_duong_CutFlow_stack_6->SetBinContent(5,979.8496);
   VbbHcc_duong_CutFlow_stack_6->SetBinError(1,797.1833);
   VbbHcc_duong_CutFlow_stack_6->SetBinError(2,790.6525);
   VbbHcc_duong_CutFlow_stack_6->SetBinError(3,222.7792);
   VbbHcc_duong_CutFlow_stack_6->SetBinError(4,14.05534);
   VbbHcc_duong_CutFlow_stack_6->SetBinError(5,14.05534);
   VbbHcc_duong_CutFlow_stack_6->SetEntries(3.224357e+07);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_duong_CutFlow_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_CutFlow_stack_6->SetLineColor(ci);
   VbbHcc_duong_CutFlow_stack_6->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_duong_CutFlow_stack_6->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_duong_CutFlow_stack_6->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_duong_CutFlow_stack_6->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_duong_CutFlow_stack_6->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_duong_CutFlow_stack_6->GetXaxis()->SetRange(1,5);
   VbbHcc_duong_CutFlow_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_CutFlow_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_CutFlow_stack_6,"");
   
   TH1D *VbbHcc_duong_CutFlow_stack_7 = new TH1D("VbbHcc_duong_CutFlow_stack_7","",5,0,5);
   VbbHcc_duong_CutFlow_stack_7->SetBinContent(1,1144955);
   VbbHcc_duong_CutFlow_stack_7->SetBinContent(2,1117858);
   VbbHcc_duong_CutFlow_stack_7->SetBinContent(3,103364);
   VbbHcc_duong_CutFlow_stack_7->SetBinContent(4,1777.009);
   VbbHcc_duong_CutFlow_stack_7->SetBinContent(5,1777.009);
   VbbHcc_duong_CutFlow_stack_7->SetBinError(1,407.6404);
   VbbHcc_duong_CutFlow_stack_7->SetBinError(2,402.7879);
   VbbHcc_duong_CutFlow_stack_7->SetBinError(3,122.4808);
   VbbHcc_duong_CutFlow_stack_7->SetBinError(4,16.05935);
   VbbHcc_duong_CutFlow_stack_7->SetBinError(5,16.05935);
   VbbHcc_duong_CutFlow_stack_7->SetEntries(1.632799e+07);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_duong_CutFlow_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_CutFlow_stack_7->SetLineColor(ci);
   VbbHcc_duong_CutFlow_stack_7->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_duong_CutFlow_stack_7->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_duong_CutFlow_stack_7->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_duong_CutFlow_stack_7->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_duong_CutFlow_stack_7->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_duong_CutFlow_stack_7->GetXaxis()->SetRange(1,5);
   VbbHcc_duong_CutFlow_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_CutFlow_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_CutFlow_stack_7,"");
   
   TH1D *VbbHcc_duong_CutFlow_stack_8 = new TH1D("VbbHcc_duong_CutFlow_stack_8","",5,0,5);
   VbbHcc_duong_CutFlow_stack_8->SetBinContent(1,505407.9);
   VbbHcc_duong_CutFlow_stack_8->SetBinContent(2,492130.6);
   VbbHcc_duong_CutFlow_stack_8->SetBinContent(3,50561.34);
   VbbHcc_duong_CutFlow_stack_8->SetBinContent(4,1652.195);
   VbbHcc_duong_CutFlow_stack_8->SetBinContent(5,1652.195);
   VbbHcc_duong_CutFlow_stack_8->SetBinError(1,307.2403);
   VbbHcc_duong_CutFlow_stack_8->SetBinError(2,303.1777);
   VbbHcc_duong_CutFlow_stack_8->SetBinError(3,97.17765);
   VbbHcc_duong_CutFlow_stack_8->SetBinError(4,17.5666);
   VbbHcc_duong_CutFlow_stack_8->SetBinError(5,17.5666);
   VbbHcc_duong_CutFlow_stack_8->SetEntries(5629314);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_duong_CutFlow_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_CutFlow_stack_8->SetLineColor(ci);
   VbbHcc_duong_CutFlow_stack_8->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_duong_CutFlow_stack_8->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_duong_CutFlow_stack_8->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_duong_CutFlow_stack_8->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_duong_CutFlow_stack_8->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_duong_CutFlow_stack_8->GetXaxis()->SetRange(1,5);
   VbbHcc_duong_CutFlow_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_CutFlow_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_CutFlow_stack_8,"");
   
   TH1D *VbbHcc_duong_CutFlow_stack_9 = new TH1D("VbbHcc_duong_CutFlow_stack_9","",5,0,5);
   VbbHcc_duong_CutFlow_stack_9->SetBinContent(1,14925.94);
   VbbHcc_duong_CutFlow_stack_9->SetBinContent(2,14899.73);
   VbbHcc_duong_CutFlow_stack_9->SetBinContent(3,4767.615);
   VbbHcc_duong_CutFlow_stack_9->SetBinContent(4,577.4576);
   VbbHcc_duong_CutFlow_stack_9->SetBinContent(5,577.4576);
   VbbHcc_duong_CutFlow_stack_9->SetBinError(1,5.064251);
   VbbHcc_duong_CutFlow_stack_9->SetBinError(2,5.059887);
   VbbHcc_duong_CutFlow_stack_9->SetBinError(3,2.809331);
   VbbHcc_duong_CutFlow_stack_9->SetBinError(4,0.9770496);
   VbbHcc_duong_CutFlow_stack_9->SetBinError(5,0.9770496);
   VbbHcc_duong_CutFlow_stack_9->SetEntries(2.34036e+07);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_duong_CutFlow_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_CutFlow_stack_9->SetLineColor(ci);
   VbbHcc_duong_CutFlow_stack_9->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_duong_CutFlow_stack_9->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_duong_CutFlow_stack_9->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_duong_CutFlow_stack_9->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_duong_CutFlow_stack_9->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_duong_CutFlow_stack_9->GetXaxis()->SetRange(1,5);
   VbbHcc_duong_CutFlow_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_CutFlow_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_CutFlow_stack_9,"");
   
   TH1D *VbbHcc_duong_CutFlow_stack_10 = new TH1D("VbbHcc_duong_CutFlow_stack_10","",5,0,5);
   VbbHcc_duong_CutFlow_stack_10->SetBinContent(1,2073.128);
   VbbHcc_duong_CutFlow_stack_10->SetBinContent(2,2063.854);
   VbbHcc_duong_CutFlow_stack_10->SetBinContent(3,1278.076);
   VbbHcc_duong_CutFlow_stack_10->SetBinContent(4,167.6725);
   VbbHcc_duong_CutFlow_stack_10->SetBinContent(5,167.6725);
   VbbHcc_duong_CutFlow_stack_10->SetBinError(1,0.9271309);
   VbbHcc_duong_CutFlow_stack_10->SetBinError(2,0.9250548);
   VbbHcc_duong_CutFlow_stack_10->SetBinError(3,0.7279581);
   VbbHcc_duong_CutFlow_stack_10->SetBinError(4,0.2636689);
   VbbHcc_duong_CutFlow_stack_10->SetBinError(5,0.2636689);
   VbbHcc_duong_CutFlow_stack_10->SetEntries(1.386891e+07);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_duong_CutFlow_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_CutFlow_stack_10->SetLineColor(ci);
   VbbHcc_duong_CutFlow_stack_10->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_duong_CutFlow_stack_10->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_duong_CutFlow_stack_10->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_duong_CutFlow_stack_10->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_duong_CutFlow_stack_10->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_duong_CutFlow_stack_10->GetXaxis()->SetRange(1,5);
   VbbHcc_duong_CutFlow_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_CutFlow_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_CutFlow_stack_10,"");
   
   TH1D *VbbHcc_duong_CutFlow_stack_11 = new TH1D("VbbHcc_duong_CutFlow_stack_11","",5,0,5);
   VbbHcc_duong_CutFlow_stack_11->SetBinContent(1,741.2927);
   VbbHcc_duong_CutFlow_stack_11->SetBinContent(2,740.3785);
   VbbHcc_duong_CutFlow_stack_11->SetBinContent(3,259.7746);
   VbbHcc_duong_CutFlow_stack_11->SetBinContent(4,11.18414);
   VbbHcc_duong_CutFlow_stack_11->SetBinContent(5,11.18414);
   VbbHcc_duong_CutFlow_stack_11->SetBinError(1,1.117623);
   VbbHcc_duong_CutFlow_stack_11->SetBinError(2,1.116952);
   VbbHcc_duong_CutFlow_stack_11->SetBinError(3,0.6502782);
   VbbHcc_duong_CutFlow_stack_11->SetBinError(4,0.1353677);
   VbbHcc_duong_CutFlow_stack_11->SetBinError(5,0.1353677);
   VbbHcc_duong_CutFlow_stack_11->SetEntries(1173635);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_duong_CutFlow_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_CutFlow_stack_11->SetLineColor(ci);
   VbbHcc_duong_CutFlow_stack_11->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_duong_CutFlow_stack_11->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_duong_CutFlow_stack_11->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_duong_CutFlow_stack_11->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_duong_CutFlow_stack_11->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_duong_CutFlow_stack_11->GetXaxis()->SetRange(1,5);
   VbbHcc_duong_CutFlow_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_CutFlow_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_CutFlow_stack_11,"");
   
   TH1D *VbbHcc_duong_CutFlow_stack_12 = new TH1D("VbbHcc_duong_CutFlow_stack_12","",5,0,5);
   VbbHcc_duong_CutFlow_stack_12->SetBinContent(1,2193012);
   VbbHcc_duong_CutFlow_stack_12->SetBinContent(2,2187817);
   VbbHcc_duong_CutFlow_stack_12->SetBinContent(3,1407631);
   VbbHcc_duong_CutFlow_stack_12->SetBinContent(4,68639.15);
   VbbHcc_duong_CutFlow_stack_12->SetBinContent(5,68639.15);
   VbbHcc_duong_CutFlow_stack_12->SetBinError(1,3210.814);
   VbbHcc_duong_CutFlow_stack_12->SetBinError(2,3207.009);
   VbbHcc_duong_CutFlow_stack_12->SetBinError(3,2572.404);
   VbbHcc_duong_CutFlow_stack_12->SetBinError(4,568.0422);
   VbbHcc_duong_CutFlow_stack_12->SetBinError(5,568.0422);
   VbbHcc_duong_CutFlow_stack_12->SetEntries(1260530);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_duong_CutFlow_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_CutFlow_stack_12->SetLineColor(ci);
   VbbHcc_duong_CutFlow_stack_12->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_duong_CutFlow_stack_12->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_duong_CutFlow_stack_12->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_duong_CutFlow_stack_12->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_duong_CutFlow_stack_12->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_duong_CutFlow_stack_12->GetXaxis()->SetRange(1,5);
   VbbHcc_duong_CutFlow_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_CutFlow_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_CutFlow_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_duong_CutFlow__67 = new TH1D("VbbHcc_duong_CutFlow__67","",5,0,5);
   VbbHcc_duong_CutFlow__67->SetBinContent(1,3.063729e+08);
   VbbHcc_duong_CutFlow__67->SetBinContent(2,3.025317e+08);
   VbbHcc_duong_CutFlow__67->SetBinContent(3,9.926474e+07);
   VbbHcc_duong_CutFlow__67->SetBinContent(4,3906433);
   VbbHcc_duong_CutFlow__67->SetBinContent(5,3906433);
   VbbHcc_duong_CutFlow__67->SetEntries(7.159822e+08);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_CutFlow__67->SetLineColor(ci);
   VbbHcc_duong_CutFlow__67->SetLineWidth(2);
   VbbHcc_duong_CutFlow__67->SetMarkerStyle(20);
   VbbHcc_duong_CutFlow__67->SetMarkerSize(1.2);
   VbbHcc_duong_CutFlow__67->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_duong_CutFlow__67->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_duong_CutFlow__67->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_duong_CutFlow__67->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_duong_CutFlow__67->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_duong_CutFlow__67->GetXaxis()->SetRange(1,5);
   VbbHcc_duong_CutFlow__67->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow__67->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow__67->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow__67->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow__67->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow__67->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow__67->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow__67->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_CutFlow__67->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow__67->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow__67->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow__67->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow__67->GetZaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow__67->Draw("same E");
   
   Double_t Graph_from_VbbHcc_duong_CutFlow_fx1067[5] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5};
   Double_t Graph_from_VbbHcc_duong_CutFlow_fy1067[5] = {
   6.460582e+10,
   6.459474e+10,
   6.503222e+09,
   2.304003e+07,
   2.304003e+07};
   Double_t Graph_from_VbbHcc_duong_CutFlow_fex1067[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_VbbHcc_duong_CutFlow_fey1067[5] = {
   8511161,
   8510572,
   2694945,
   148664.7,
   148664.7};
   TGraphErrors *gre = new TGraphErrors(5,Graph_from_VbbHcc_duong_CutFlow_fx1067,Graph_from_VbbHcc_duong_CutFlow_fy1067,Graph_from_VbbHcc_duong_CutFlow_fex1067,Graph_from_VbbHcc_duong_CutFlow_fey1067);
   gre->SetName("Graph_from_VbbHcc_duong_CutFlow");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_duong_CutFlow1067 = new TH1F("Graph_Graph_from_VbbHcc_duong_CutFlow1067","",100,0,5.5);
   Graph_Graph_from_VbbHcc_duong_CutFlow1067->SetMinimum(2.060223e+07);
   Graph_Graph_from_VbbHcc_duong_CutFlow1067->SetMaximum(7.107348e+10);
   Graph_Graph_from_VbbHcc_duong_CutFlow1067->SetDirectory(0);
   Graph_Graph_from_VbbHcc_duong_CutFlow1067->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_duong_CutFlow1067->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_duong_CutFlow1067->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_CutFlow1067->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_CutFlow1067->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_CutFlow1067->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_CutFlow1067->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_CutFlow1067->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_CutFlow1067->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_CutFlow1067->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_duong_CutFlow1067->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_CutFlow1067->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_CutFlow1067->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_CutFlow1067->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_CutFlow1067->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_duong_CutFlow1067);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_duong_CutFlow","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_duong_CutFlow_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_duong_CutFlow_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_duong_CutFlow_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_duong_CutFlow_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_duong_CutFlow_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_duong_CutFlow_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_duong_CutFlow_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_duong_CutFlow_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_duong_CutFlow_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_duong_CutFlow_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_duong_CutFlow_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_duong_CutFlow_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_duong_CutFlow","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   CutFlow_VbbHcc_17->cd();
  
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
   
   TH1D *data_mc_ratio__68 = new TH1D("data_mc_ratio__68","",5,0,5);
   data_mc_ratio__68->SetBinContent(1,0.004742187);
   data_mc_ratio__68->SetBinContent(2,0.004683534);
   data_mc_ratio__68->SetBinContent(3,0.01526393);
   data_mc_ratio__68->SetBinContent(4,0.1695499);
   data_mc_ratio__68->SetBinContent(5,0.1695499);
   data_mc_ratio__68->SetBinError(1,2.709278e-07);
   data_mc_ratio__68->SetBinError(2,2.692702e-07);
   data_mc_ratio__68->SetBinError(3,1.532036e-06);
   data_mc_ratio__68->SetBinError(4,8.578418e-05);
   data_mc_ratio__68->SetBinError(5,8.578418e-05);
   data_mc_ratio__68->SetMinimum(0.4);
   data_mc_ratio__68->SetMaximum(1.6);
   data_mc_ratio__68->SetEntries(54948.43);
   data_mc_ratio__68->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__68->SetLineColor(ci);
   data_mc_ratio__68->SetLineWidth(2);
   data_mc_ratio__68->SetMarkerStyle(20);
   data_mc_ratio__68->SetMarkerSize(1.2);
   data_mc_ratio__68->GetXaxis()->SetTitle(""Cut flow"");
   data_mc_ratio__68->GetXaxis()->SetBinLabel(1,"Total");
   data_mc_ratio__68->GetXaxis()->SetBinLabel(2,"MET cut");
   data_mc_ratio__68->GetXaxis()->SetBinLabel(3,"jet cuts");
   data_mc_ratio__68->GetXaxis()->SetBinLabel(4,"b-tags");
   data_mc_ratio__68->GetXaxis()->SetBinLabel(5,"c-tags");
   data_mc_ratio__68->GetXaxis()->SetRange(1,6);
   data_mc_ratio__68->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__68->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__68->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__68->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__68->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__68->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__68->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__68->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__68->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__68->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__68->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__68->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__68->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__68->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__68->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__68->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__68->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1068[5] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5};
   Double_t Graph_from_mc_statistical_error_fy1068[5] = {
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1068[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_mc_statistical_error_fey1068[5] = {
   0.0001317398,
   0.0001317533,
   0.0004144014,
   0.006452455,
   0.006452455};
   gre = new TGraphErrors(5,Graph_from_mc_statistical_error_fx1068,Graph_from_mc_statistical_error_fy1068,Graph_from_mc_statistical_error_fex1068,Graph_from_mc_statistical_error_fey1068);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1068 = new TH1F("Graph_Graph_from_mc_statistical_error1068","",100,0,5.5);
   Graph_Graph_from_mc_statistical_error1068->SetMinimum(0.9922571);
   Graph_Graph_from_mc_statistical_error1068->SetMaximum(1.007743);
   Graph_Graph_from_mc_statistical_error1068->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1068->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1068->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1068->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1068->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1068->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1068->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1068->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1068->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1068->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1068->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1068->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1068->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1068->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1068->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1068->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1068);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,7,1);
   line->Draw();
   bottomPad->Modified();
   CutFlow_VbbHcc_17->cd();
   CutFlow_VbbHcc_17->Modified();
   CutFlow_VbbHcc_17->cd();
   CutFlow_VbbHcc_17->SetSelected(CutFlow_VbbHcc_17);
}
