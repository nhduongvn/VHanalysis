#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_tags_17_logY()
{
//=========Macro generated from canvas: CutFlow_tags_17/CutFlow_tags_17
//=========  (Wed Dec  7 11:48:24 2022) by ROOT version 6.26/06
   TCanvas *CutFlow_tags_17 = new TCanvas("CutFlow_tags_17", "CutFlow_tags_17",0,0,600,600);
   CutFlow_tags_17->SetHighLightColor(2);
   CutFlow_tags_17->Range(-1.310117,3.392917,7.029799,14.29628);
   CutFlow_tags_17->SetFillColor(0);
   CutFlow_tags_17->SetFillStyle(4000);
   CutFlow_tags_17->SetBorderMode(0);
   CutFlow_tags_17->SetBorderSize(2);
   CutFlow_tags_17->SetLogy();
   CutFlow_tags_17->SetLeftMargin(0.15709);
   CutFlow_tags_17->SetRightMargin(0.1234783);
   CutFlow_tags_17->SetBottomMargin(0.12);
   CutFlow_tags_17->SetFrameFillStyle(1000);
   CutFlow_tags_17->SetFrameBorderMode(0);
   CutFlow_tags_17->SetFrameFillStyle(1000);
   CutFlow_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(237160.1);
   st->SetMaximum(6.460363e+12);
   
   TH1F *st_stack_2 = new TH1F("st_stack_2","",5,0,5);
   st_stack_2->SetMinimum(50271.27);
   st_stack_2->SetMaximum(1.60672e+13);
   st_stack_2->SetDirectory(0);
   st_stack_2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_2->SetLineColor(ci);
   st_stack_2->GetXaxis()->SetTitle(""Cut flow"");
   st_stack_2->GetXaxis()->SetBinLabel(1,"Total");
   st_stack_2->GetXaxis()->SetBinLabel(2,"MET cut");
   st_stack_2->GetXaxis()->SetBinLabel(3,"jet cuts");
   st_stack_2->GetXaxis()->SetBinLabel(4,"b-tags");
   st_stack_2->GetXaxis()->SetBinLabel(5,"c-tags");
   st_stack_2->GetXaxis()->SetRange(1,6);
   st_stack_2->GetXaxis()->SetLabelFont(42);
   st_stack_2->GetXaxis()->SetTitleOffset(1);
   st_stack_2->GetXaxis()->SetTitleFont(42);
   st_stack_2->GetYaxis()->SetTitle("Events/1.0");
   st_stack_2->GetYaxis()->SetLabelFont(42);
   st_stack_2->GetYaxis()->SetTitleSize(0.037);
   st_stack_2->GetYaxis()->SetTitleFont(42);
   st_stack_2->GetZaxis()->SetLabelFont(42);
   st_stack_2->GetZaxis()->SetTitleOffset(1);
   st_stack_2->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_2);
   
   
   TH1D *VbbHcc_tags_CutFlow_stack_1 = new TH1D("VbbHcc_tags_CutFlow_stack_1","",5,0,5);
   VbbHcc_tags_CutFlow_stack_1->SetBinContent(1,6.453607e+10);
   VbbHcc_tags_CutFlow_stack_1->SetBinContent(2,6.452709e+10);
   VbbHcc_tags_CutFlow_stack_1->SetBinContent(3,6.469859e+09);
   VbbHcc_tags_CutFlow_stack_1->SetBinContent(4,2.248785e+08);
   VbbHcc_tags_CutFlow_stack_1->SetBinContent(5,1.919319e+07);
   VbbHcc_tags_CutFlow_stack_1->SetBinError(1,8599642);
   VbbHcc_tags_CutFlow_stack_1->SetBinError(2,8599044);
   VbbHcc_tags_CutFlow_stack_1->SetBinError(3,2722868);
   VbbHcc_tags_CutFlow_stack_1->SetBinError(4,507636.8);
   VbbHcc_tags_CutFlow_stack_1->SetBinError(5,148303.9);
   VbbHcc_tags_CutFlow_stack_1->SetEntries(1.184863e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_CutFlow_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_1->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_1,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_2 = new TH1D("VbbHcc_tags_CutFlow_stack_2","",5,0,5);
   VbbHcc_tags_CutFlow_stack_2->SetBinContent(1,1.198818e+07);
   VbbHcc_tags_CutFlow_stack_2->SetBinContent(2,1.173641e+07);
   VbbHcc_tags_CutFlow_stack_2->SetBinContent(3,2739251);
   VbbHcc_tags_CutFlow_stack_2->SetBinContent(4,981175.4);
   VbbHcc_tags_CutFlow_stack_2->SetBinContent(5,198763.5);
   VbbHcc_tags_CutFlow_stack_2->SetBinError(1,1160.853);
   VbbHcc_tags_CutFlow_stack_2->SetBinError(2,1140.951);
   VbbHcc_tags_CutFlow_stack_2->SetBinError(3,656.3892);
   VbbHcc_tags_CutFlow_stack_2->SetBinError(4,374.5709);
   VbbHcc_tags_CutFlow_stack_2->SetBinError(5,179.1346);
   VbbHcc_tags_CutFlow_stack_2->SetEntries(4.524293e+08);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_CutFlow_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_2->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_2,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_3 = new TH1D("VbbHcc_tags_CutFlow_stack_3","",5,0,5);
   VbbHcc_tags_CutFlow_stack_3->SetBinContent(1,3.453136e+07);
   VbbHcc_tags_CutFlow_stack_3->SetBinContent(2,3.275417e+07);
   VbbHcc_tags_CutFlow_stack_3->SetBinContent(3,2.025484e+07);
   VbbHcc_tags_CutFlow_stack_3->SetBinContent(4,1.082376e+07);
   VbbHcc_tags_CutFlow_stack_3->SetBinContent(5,2859482);
   VbbHcc_tags_CutFlow_stack_3->SetBinError(1,1401.81);
   VbbHcc_tags_CutFlow_stack_3->SetBinError(2,1373.092);
   VbbHcc_tags_CutFlow_stack_3->SetBinError(3,1119.974);
   VbbHcc_tags_CutFlow_stack_3->SetBinError(4,814.4144);
   VbbHcc_tags_CutFlow_stack_3->SetBinError(5,427.7487);
   VbbHcc_tags_CutFlow_stack_3->SetEntries(1.859596e+09);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_CutFlow_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_3->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_3->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_3->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_3->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_3->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_3->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_3->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_3,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_4 = new TH1D("VbbHcc_tags_CutFlow_stack_4","",5,0,5);
   VbbHcc_tags_CutFlow_stack_4->SetBinContent(1,4742612);
   VbbHcc_tags_CutFlow_stack_4->SetBinContent(2,4734952);
   VbbHcc_tags_CutFlow_stack_4->SetBinContent(3,2405713);
   VbbHcc_tags_CutFlow_stack_4->SetBinContent(4,301922.3);
   VbbHcc_tags_CutFlow_stack_4->SetBinContent(5,47881.05);
   VbbHcc_tags_CutFlow_stack_4->SetBinError(1,1323.134);
   VbbHcc_tags_CutFlow_stack_4->SetBinError(2,1322.065);
   VbbHcc_tags_CutFlow_stack_4->SetBinError(3,942.3602);
   VbbHcc_tags_CutFlow_stack_4->SetBinError(4,333.8433);
   VbbHcc_tags_CutFlow_stack_4->SetBinError(5,132.9465);
   VbbHcc_tags_CutFlow_stack_4->SetEntries(3.313948e+07);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_CutFlow_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_4->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_4->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_4->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_4->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_4->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_4->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_4->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_4,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_5 = new TH1D("VbbHcc_tags_CutFlow_stack_5","",5,0,5);
   VbbHcc_tags_CutFlow_stack_5->SetBinContent(1,1.148277e+07);
   VbbHcc_tags_CutFlow_stack_5->SetBinContent(2,1.146745e+07);
   VbbHcc_tags_CutFlow_stack_5->SetBinContent(3,5717617);
   VbbHcc_tags_CutFlow_stack_5->SetBinContent(4,145024.7);
   VbbHcc_tags_CutFlow_stack_5->SetBinContent(5,29901.19);
   VbbHcc_tags_CutFlow_stack_5->SetBinError(1,3645.482);
   VbbHcc_tags_CutFlow_stack_5->SetBinError(2,3643.05);
   VbbHcc_tags_CutFlow_stack_5->SetBinError(3,2572.404);
   VbbHcc_tags_CutFlow_stack_5->SetBinError(4,409.6874);
   VbbHcc_tags_CutFlow_stack_5->SetBinError(5,186.027);
   VbbHcc_tags_CutFlow_stack_5->SetEntries(2.492147e+07);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_CutFlow_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_5->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_5->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_5->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_5->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_5->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_5->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_5->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_5,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_6 = new TH1D("VbbHcc_tags_CutFlow_stack_6","",5,0,5);
   VbbHcc_tags_CutFlow_stack_6->SetBinContent(1,3152051);
   VbbHcc_tags_CutFlow_stack_6->SetBinContent(2,3100626);
   VbbHcc_tags_CutFlow_stack_6->SetBinContent(3,246172.8);
   VbbHcc_tags_CutFlow_stack_6->SetBinContent(4,5550.481);
   VbbHcc_tags_CutFlow_stack_6->SetBinContent(5,954.9091);
   VbbHcc_tags_CutFlow_stack_6->SetBinError(1,851.5326);
   VbbHcc_tags_CutFlow_stack_6->SetBinError(2,844.5577);
   VbbHcc_tags_CutFlow_stack_6->SetBinError(3,237.9714);
   VbbHcc_tags_CutFlow_stack_6->SetBinError(4,35.73304);
   VbbHcc_tags_CutFlow_stack_6->SetBinError(5,14.82128);
   VbbHcc_tags_CutFlow_stack_6->SetEntries(2.827885e+07);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_CutFlow_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_6->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_6->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_6->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_6->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_6->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_6->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_6->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_6,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_7 = new TH1D("VbbHcc_tags_CutFlow_stack_7","",5,0,5);
   VbbHcc_tags_CutFlow_stack_7->SetBinContent(1,1144955);
   VbbHcc_tags_CutFlow_stack_7->SetBinContent(2,1117858);
   VbbHcc_tags_CutFlow_stack_7->SetBinContent(3,103364);
   VbbHcc_tags_CutFlow_stack_7->SetBinContent(4,10909.8);
   VbbHcc_tags_CutFlow_stack_7->SetBinContent(5,1727.954);
   VbbHcc_tags_CutFlow_stack_7->SetBinError(1,407.6404);
   VbbHcc_tags_CutFlow_stack_7->SetBinError(2,402.7879);
   VbbHcc_tags_CutFlow_stack_7->SetBinError(3,122.4808);
   VbbHcc_tags_CutFlow_stack_7->SetBinError(4,39.7916);
   VbbHcc_tags_CutFlow_stack_7->SetBinError(5,15.83614);
   VbbHcc_tags_CutFlow_stack_7->SetEntries(1.639058e+07);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_CutFlow_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_7->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_7->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_7->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_7->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_7->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_7->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_7->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_7,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_8 = new TH1D("VbbHcc_tags_CutFlow_stack_8","",5,0,5);
   VbbHcc_tags_CutFlow_stack_8->SetBinContent(1,505407.9);
   VbbHcc_tags_CutFlow_stack_8->SetBinContent(2,492197.8);
   VbbHcc_tags_CutFlow_stack_8->SetBinContent(3,50499.33);
   VbbHcc_tags_CutFlow_stack_8->SetBinContent(4,9527.729);
   VbbHcc_tags_CutFlow_stack_8->SetBinContent(5,1570.713);
   VbbHcc_tags_CutFlow_stack_8->SetBinError(1,446.7217);
   VbbHcc_tags_CutFlow_stack_8->SetBinError(2,440.845);
   VbbHcc_tags_CutFlow_stack_8->SetBinError(3,141.2079);
   VbbHcc_tags_CutFlow_stack_8->SetBinError(4,61.33534);
   VbbHcc_tags_CutFlow_stack_8->SetBinError(5,24.90373);
   VbbHcc_tags_CutFlow_stack_8->SetEntries(2682547);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_CutFlow_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_8->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_8->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_8->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_8->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_8->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_8->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_8->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_8,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_9 = new TH1D("VbbHcc_tags_CutFlow_stack_9","",5,0,5);
   VbbHcc_tags_CutFlow_stack_9->SetBinContent(1,14925.94);
   VbbHcc_tags_CutFlow_stack_9->SetBinContent(2,14899.73);
   VbbHcc_tags_CutFlow_stack_9->SetBinContent(3,4767.615);
   VbbHcc_tags_CutFlow_stack_9->SetBinContent(4,2951.305);
   VbbHcc_tags_CutFlow_stack_9->SetBinContent(5,532.0728);
   VbbHcc_tags_CutFlow_stack_9->SetBinError(1,5.064251);
   VbbHcc_tags_CutFlow_stack_9->SetBinError(2,5.059887);
   VbbHcc_tags_CutFlow_stack_9->SetBinError(3,2.809331);
   VbbHcc_tags_CutFlow_stack_9->SetBinError(4,2.213097);
   VbbHcc_tags_CutFlow_stack_9->SetBinError(5,0.9383857);
   VbbHcc_tags_CutFlow_stack_9->SetEntries(2.488681e+07);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_CutFlow_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_9->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_9->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_9->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_9->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_9->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_9->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_9->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_9,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_10 = new TH1D("VbbHcc_tags_CutFlow_stack_10","",5,0,5);
   VbbHcc_tags_CutFlow_stack_10->SetBinContent(1,2073.128);
   VbbHcc_tags_CutFlow_stack_10->SetBinContent(2,2063.854);
   VbbHcc_tags_CutFlow_stack_10->SetBinContent(3,1278.076);
   VbbHcc_tags_CutFlow_stack_10->SetBinContent(4,717.5493);
   VbbHcc_tags_CutFlow_stack_10->SetBinContent(5,150.5775);
   VbbHcc_tags_CutFlow_stack_10->SetBinError(1,0.9271309);
   VbbHcc_tags_CutFlow_stack_10->SetBinError(2,0.9250548);
   VbbHcc_tags_CutFlow_stack_10->SetBinError(3,0.7279581);
   VbbHcc_tags_CutFlow_stack_10->SetBinError(4,0.5454487);
   VbbHcc_tags_CutFlow_stack_10->SetBinError(5,0.2498665);
   VbbHcc_tags_CutFlow_stack_10->SetEntries(1.515388e+07);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_CutFlow_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_10->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_10->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_10->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_10->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_10->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_10->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_10->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_10,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_11 = new TH1D("VbbHcc_tags_CutFlow_stack_11","",5,0,5);
   VbbHcc_tags_CutFlow_stack_11->SetBinContent(1,741.2927);
   VbbHcc_tags_CutFlow_stack_11->SetBinContent(2,740.3785);
   VbbHcc_tags_CutFlow_stack_11->SetBinContent(3,259.7746);
   VbbHcc_tags_CutFlow_stack_11->SetBinContent(4,46.60615);
   VbbHcc_tags_CutFlow_stack_11->SetBinContent(5,9.814494);
   VbbHcc_tags_CutFlow_stack_11->SetBinError(1,1.117623);
   VbbHcc_tags_CutFlow_stack_11->SetBinError(2,1.116952);
   VbbHcc_tags_CutFlow_stack_11->SetBinError(3,0.6502782);
   VbbHcc_tags_CutFlow_stack_11->SetBinError(4,0.2756221);
   VbbHcc_tags_CutFlow_stack_11->SetBinError(5,0.1269266);
   VbbHcc_tags_CutFlow_stack_11->SetEntries(1195641);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_CutFlow_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_11->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_11->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_11->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_11->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_11->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_11->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_11->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_11,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_12 = new TH1D("VbbHcc_tags_CutFlow_stack_12","",5,0,5);
   VbbHcc_tags_CutFlow_stack_12->SetBinContent(1,102.9919);
   VbbHcc_tags_CutFlow_stack_12->SetBinContent(2,102.748);
   VbbHcc_tags_CutFlow_stack_12->SetBinContent(3,66.10757);
   VbbHcc_tags_CutFlow_stack_12->SetBinContent(4,12.89375);
   VbbHcc_tags_CutFlow_stack_12->SetBinContent(5,2.790165);
   VbbHcc_tags_CutFlow_stack_12->SetBinError(1,0.1507917);
   VbbHcc_tags_CutFlow_stack_12->SetBinError(2,0.150613);
   VbbHcc_tags_CutFlow_stack_12->SetBinError(3,0.1208096);
   VbbHcc_tags_CutFlow_stack_12->SetBinError(4,0.0533538);
   VbbHcc_tags_CutFlow_stack_12->SetBinError(5,0.02481937);
   VbbHcc_tags_CutFlow_stack_12->SetEntries(1302368);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_CutFlow_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_12->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_12->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_12->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_12->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_12->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_12->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_12->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_12,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_2","Single Top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_tags_17->Modified();
   CutFlow_tags_17->cd();
   CutFlow_tags_17->SetSelected(CutFlow_tags_17);
}
