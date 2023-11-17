#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_tagFirst_16()
{
//=========Macro generated from canvas: CutFlow_tagFirst_16/CutFlow_tagFirst_16
//=========  (Wed Nov 15 14:59:00 2023) by ROOT version 6.28/04
   TCanvas *CutFlow_tagFirst_16 = new TCanvas("CutFlow_tagFirst_16", "CutFlow_tagFirst_16",0,0,600,600);
   CutFlow_tagFirst_16->SetHighLightColor(2);
   CutFlow_tagFirst_16->Range(0,0,1,1);
   CutFlow_tagFirst_16->SetFillColor(0);
   CutFlow_tagFirst_16->SetFillStyle(4000);
   CutFlow_tagFirst_16->SetBorderMode(0);
   CutFlow_tagFirst_16->SetBorderSize(2);
   CutFlow_tagFirst_16->SetFrameFillStyle(1000);
   CutFlow_tagFirst_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.667974e+09,6.314516,2.665306e+12);
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
   st->SetMaximum(2.398509e+12);
   
   TH1F *st_stack_7 = new TH1F("st_stack_7","",5,0,5);
   st_stack_7->SetMinimum(0.01);
   st_stack_7->SetMaximum(2.398509e+12);
   st_stack_7->SetDirectory(nullptr);
   st_stack_7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_7->SetLineColor(ci);
   st_stack_7->SetLineWidth(0);
   st_stack_7->GetXaxis()->SetBinLabel(1,"Total");
   st_stack_7->GetXaxis()->SetBinLabel(2,"MET cut");
   st_stack_7->GetXaxis()->SetBinLabel(3,"jet cuts");
   st_stack_7->GetXaxis()->SetBinLabel(4,"triggers");
   st_stack_7->GetXaxis()->SetBinLabel(5,"tags cut");
   st_stack_7->GetXaxis()->SetRange(1,6);
   st_stack_7->GetXaxis()->SetLabelFont(42);
   st_stack_7->GetXaxis()->SetTitleOffset(1);
   st_stack_7->GetXaxis()->SetTitleFont(42);
   st_stack_7->GetYaxis()->SetTitle("Events/1.0");
   st_stack_7->GetYaxis()->SetLabelFont(42);
   st_stack_7->GetYaxis()->SetLabelSize(0.05);
   st_stack_7->GetYaxis()->SetTitleSize(0.057);
   st_stack_7->GetYaxis()->SetTitleOffset(1.2);
   st_stack_7->GetYaxis()->SetTitleFont(42);
   st_stack_7->GetZaxis()->SetLabelFont(42);
   st_stack_7->GetZaxis()->SetTitleOffset(1);
   st_stack_7->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_7);
   
   
   TH1D *VbbHcc_tagFirst_CutFlow_stack_1 = new TH1D("VbbHcc_tagFirst_CutFlow_stack_1","",5,0,5);
   VbbHcc_tagFirst_CutFlow_stack_1->SetBinContent(1,1.079073e+12);
   VbbHcc_tagFirst_CutFlow_stack_1->SetBinContent(2,1.079054e+12);
   VbbHcc_tagFirst_CutFlow_stack_1->SetBinContent(3,2.306133e+09);
   VbbHcc_tagFirst_CutFlow_stack_1->SetBinContent(4,1.526599e+08);
   VbbHcc_tagFirst_CutFlow_stack_1->SetBinContent(5,2768917);
   VbbHcc_tagFirst_CutFlow_stack_1->SetBinError(1,1.442534e+08);
   VbbHcc_tagFirst_CutFlow_stack_1->SetBinError(2,1.442527e+08);
   VbbHcc_tagFirst_CutFlow_stack_1->SetBinError(3,1899173);
   VbbHcc_tagFirst_CutFlow_stack_1->SetBinError(4,362843.8);
   VbbHcc_tagFirst_CutFlow_stack_1->SetBinError(5,44708.46);
   VbbHcc_tagFirst_CutFlow_stack_1->SetEntries(5.574264e+08);

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
   VbbHcc_tagFirst_CutFlow_stack_2->SetBinContent(1,1.035228e+07);
   VbbHcc_tagFirst_CutFlow_stack_2->SetBinContent(2,1.015222e+07);
   VbbHcc_tagFirst_CutFlow_stack_2->SetBinContent(3,838721.6);
   VbbHcc_tagFirst_CutFlow_stack_2->SetBinContent(4,236973.6);
   VbbHcc_tagFirst_CutFlow_stack_2->SetBinContent(5,27581.86);
   VbbHcc_tagFirst_CutFlow_stack_2->SetBinError(1,1035.39);
   VbbHcc_tagFirst_CutFlow_stack_2->SetBinError(2,1018.702);
   VbbHcc_tagFirst_CutFlow_stack_2->SetBinError(3,372.6278);
   VbbHcc_tagFirst_CutFlow_stack_2->SetBinError(4,196.438);
   VbbHcc_tagFirst_CutFlow_stack_2->SetBinError(5,67.88635);
   VbbHcc_tagFirst_CutFlow_stack_2->SetEntries(3.899957e+08);

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
   VbbHcc_tagFirst_CutFlow_stack_3->SetBinContent(1,2.989923e+07);
   VbbHcc_tagFirst_CutFlow_stack_3->SetBinContent(2,2.844793e+07);
   VbbHcc_tagFirst_CutFlow_stack_3->SetBinContent(3,9067321);
   VbbHcc_tagFirst_CutFlow_stack_3->SetBinContent(4,3238553);
   VbbHcc_tagFirst_CutFlow_stack_3->SetBinContent(5,479389.5);
   VbbHcc_tagFirst_CutFlow_stack_3->SetBinError(1,1299.153);
   VbbHcc_tagFirst_CutFlow_stack_3->SetBinError(2,1272.557);
   VbbHcc_tagFirst_CutFlow_stack_3->SetBinError(3,749.3068);
   VbbHcc_tagFirst_CutFlow_stack_3->SetBinError(4,449.297);
   VbbHcc_tagFirst_CutFlow_stack_3->SetBinError(5,174.0711);
   VbbHcc_tagFirst_CutFlow_stack_3->SetEntries(1.30185e+09);

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
   VbbHcc_tagFirst_CutFlow_stack_4->SetBinContent(1,4.14762e+07);
   VbbHcc_tagFirst_CutFlow_stack_4->SetBinContent(2,4.145526e+07);
   VbbHcc_tagFirst_CutFlow_stack_4->SetBinContent(3,3097458);
   VbbHcc_tagFirst_CutFlow_stack_4->SetBinContent(4,403479.3);
   VbbHcc_tagFirst_CutFlow_stack_4->SetBinContent(5,20907.28);
   VbbHcc_tagFirst_CutFlow_stack_4->SetBinError(1,9358.096);
   VbbHcc_tagFirst_CutFlow_stack_4->SetBinError(2,9357.724);
   VbbHcc_tagFirst_CutFlow_stack_4->SetBinError(3,1812.731);
   VbbHcc_tagFirst_CutFlow_stack_4->SetBinError(4,539.6424);
   VbbHcc_tagFirst_CutFlow_stack_4->SetBinError(5,103.2859);
   VbbHcc_tagFirst_CutFlow_stack_4->SetEntries(1.161466e+08);

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
   VbbHcc_tagFirst_CutFlow_stack_5->SetBinContent(1,1.680501e+08);
   VbbHcc_tagFirst_CutFlow_stack_5->SetBinContent(2,1.641396e+08);
   VbbHcc_tagFirst_CutFlow_stack_5->SetBinContent(3,8804598);
   VbbHcc_tagFirst_CutFlow_stack_5->SetBinContent(4,774652.4);
   VbbHcc_tagFirst_CutFlow_stack_5->SetBinContent(5,12063.96);
   VbbHcc_tagFirst_CutFlow_stack_5->SetBinError(1,25040.4);
   VbbHcc_tagFirst_CutFlow_stack_5->SetBinError(2,24984.66);
   VbbHcc_tagFirst_CutFlow_stack_5->SetBinError(3,5024.056);
   VbbHcc_tagFirst_CutFlow_stack_5->SetBinError(4,1295.23);
   VbbHcc_tagFirst_CutFlow_stack_5->SetBinError(5,123.3548);
   VbbHcc_tagFirst_CutFlow_stack_5->SetEntries(3.27809e+08);

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
   VbbHcc_tagFirst_CutFlow_stack_6->SetBinContent(1,4256819);
   VbbHcc_tagFirst_CutFlow_stack_6->SetBinContent(2,4192757);
   VbbHcc_tagFirst_CutFlow_stack_6->SetBinContent(3,84693.24);
   VbbHcc_tagFirst_CutFlow_stack_6->SetBinContent(4,7712.395);
   VbbHcc_tagFirst_CutFlow_stack_6->SetBinContent(5,104.4049);
   VbbHcc_tagFirst_CutFlow_stack_6->SetBinError(1,756.2975);
   VbbHcc_tagFirst_CutFlow_stack_6->SetBinError(2,750.585);
   VbbHcc_tagFirst_CutFlow_stack_6->SetBinError(3,106.6779);
   VbbHcc_tagFirst_CutFlow_stack_6->SetBinError(4,32.19175);
   VbbHcc_tagFirst_CutFlow_stack_6->SetBinError(5,3.745507);
   VbbHcc_tagFirst_CutFlow_stack_6->SetEntries(6.357171e+07);

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
   VbbHcc_tagFirst_CutFlow_stack_7->SetBinContent(1,1689100);
   VbbHcc_tagFirst_CutFlow_stack_7->SetBinContent(2,1651562);
   VbbHcc_tagFirst_CutFlow_stack_7->SetBinContent(3,42464.32);
   VbbHcc_tagFirst_CutFlow_stack_7->SetBinContent(4,5343.241);
   VbbHcc_tagFirst_CutFlow_stack_7->SetBinContent(5,278.4471);
   VbbHcc_tagFirst_CutFlow_stack_7->SetBinError(1,429.0457);
   VbbHcc_tagFirst_CutFlow_stack_7->SetBinError(2,424.2514);
   VbbHcc_tagFirst_CutFlow_stack_7->SetBinError(3,68.02804);
   VbbHcc_tagFirst_CutFlow_stack_7->SetBinError(4,24.13116);
   VbbHcc_tagFirst_CutFlow_stack_7->SetBinError(5,5.508675);
   VbbHcc_tagFirst_CutFlow_stack_7->SetEntries(3.109478e+07);

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
   VbbHcc_tagFirst_CutFlow_stack_8->SetBinContent(1,591723);
   VbbHcc_tagFirst_CutFlow_stack_8->SetBinContent(2,576919.5);
   VbbHcc_tagFirst_CutFlow_stack_8->SetBinContent(3,14992.5);
   VbbHcc_tagFirst_CutFlow_stack_8->SetBinContent(4,2397.536);
   VbbHcc_tagFirst_CutFlow_stack_8->SetBinContent(5,211.1038);
   VbbHcc_tagFirst_CutFlow_stack_8->SetBinError(1,379.3564);
   VbbHcc_tagFirst_CutFlow_stack_8->SetBinError(2,374.581);
   VbbHcc_tagFirst_CutFlow_stack_8->SetBinError(3,60.38447);
   VbbHcc_tagFirst_CutFlow_stack_8->SetBinError(4,24.14742);
   VbbHcc_tagFirst_CutFlow_stack_8->SetBinError(5,7.16533);
   VbbHcc_tagFirst_CutFlow_stack_8->SetEntries(4877503);

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
   VbbHcc_tagFirst_CutFlow_stack_9->SetBinContent(1,12889.16);
   VbbHcc_tagFirst_CutFlow_stack_9->SetBinContent(2,12871.73);
   VbbHcc_tagFirst_CutFlow_stack_9->SetBinContent(3,1603.022);
   VbbHcc_tagFirst_CutFlow_stack_9->SetBinContent(4,610.1293);
   VbbHcc_tagFirst_CutFlow_stack_9->SetBinContent(5,98.34067);
   VbbHcc_tagFirst_CutFlow_stack_9->SetBinError(1,4.348819);
   VbbHcc_tagFirst_CutFlow_stack_9->SetBinError(2,4.34593);
   VbbHcc_tagFirst_CutFlow_stack_9->SetBinError(3,1.500728);
   VbbHcc_tagFirst_CutFlow_stack_9->SetBinError(4,0.9257539);
   VbbHcc_tagFirst_CutFlow_stack_9->SetBinError(5,0.3719106);
   VbbHcc_tagFirst_CutFlow_stack_9->SetEntries(2.157284e+07);

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
   VbbHcc_tagFirst_CutFlow_stack_10->SetBinContent(1,1790.231);
   VbbHcc_tagFirst_CutFlow_stack_10->SetBinContent(2,1782.223);
   VbbHcc_tagFirst_CutFlow_stack_10->SetBinContent(3,659.0453);
   VbbHcc_tagFirst_CutFlow_stack_10->SetBinContent(4,282.651);
   VbbHcc_tagFirst_CutFlow_stack_10->SetBinContent(5,49.11499);
   VbbHcc_tagFirst_CutFlow_stack_10->SetBinError(1,0.8006157);
   VbbHcc_tagFirst_CutFlow_stack_10->SetBinError(2,0.7988229);
   VbbHcc_tagFirst_CutFlow_stack_10->SetBinError(3,0.4857661);
   VbbHcc_tagFirst_CutFlow_stack_10->SetBinError(4,0.3181228);
   VbbHcc_tagFirst_CutFlow_stack_10->SetBinError(5,0.1326101);
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
   VbbHcc_tagFirst_CutFlow_stack_11->SetBinContent(1,640.1367);
   VbbHcc_tagFirst_CutFlow_stack_11->SetBinContent(2,639.628);
   VbbHcc_tagFirst_CutFlow_stack_11->SetBinContent(3,86.77358);
   VbbHcc_tagFirst_CutFlow_stack_11->SetBinContent(4,20.48794);
   VbbHcc_tagFirst_CutFlow_stack_11->SetBinContent(5,2.456037);
   VbbHcc_tagFirst_CutFlow_stack_11->SetBinError(1,1.365306);
   VbbHcc_tagFirst_CutFlow_stack_11->SetBinError(2,1.36478);
   VbbHcc_tagFirst_CutFlow_stack_11->SetBinError(3,0.4924912);
   VbbHcc_tagFirst_CutFlow_stack_11->SetBinError(4,0.2390747);
   VbbHcc_tagFirst_CutFlow_stack_11->SetBinError(5,0.0825048);
   VbbHcc_tagFirst_CutFlow_stack_11->SetEntries(539178);

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
   VbbHcc_tagFirst_CutFlow_stack_12->SetBinContent(1,88.93776);
   VbbHcc_tagFirst_CutFlow_stack_12->SetBinContent(2,88.80772);
   VbbHcc_tagFirst_CutFlow_stack_12->SetBinContent(3,33.4951);
   VbbHcc_tagFirst_CutFlow_stack_12->SetBinContent(4,8.652979);
   VbbHcc_tagFirst_CutFlow_stack_12->SetBinContent(5,1.130032);
   VbbHcc_tagFirst_CutFlow_stack_12->SetBinError(1,0.1782538);
   VbbHcc_tagFirst_CutFlow_stack_12->SetBinError(2,0.1781235);
   VbbHcc_tagFirst_CutFlow_stack_12->SetBinError(3,0.1093922);
   VbbHcc_tagFirst_CutFlow_stack_12->SetBinError(4,0.05560048);
   VbbHcc_tagFirst_CutFlow_stack_12->SetBinError(5,0.02009283);
   VbbHcc_tagFirst_CutFlow_stack_12->SetEntries(618653);

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
   
   TH1D *VbbHcc_tagFirst_CutFlow__13 = new TH1D("VbbHcc_tagFirst_CutFlow__13","",5,0,5);
   VbbHcc_tagFirst_CutFlow__13->SetBinContent(1,3.640182e+08);
   VbbHcc_tagFirst_CutFlow__13->SetBinContent(2,3.626658e+08);
   VbbHcc_tagFirst_CutFlow__13->SetBinContent(3,1.225992e+08);
   VbbHcc_tagFirst_CutFlow__13->SetBinContent(4,5.394683e+07);
   VbbHcc_tagFirst_CutFlow__13->SetBinContent(5,3192488);
   VbbHcc_tagFirst_CutFlow__13->SetEntries(9.064225e+08);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_CutFlow__13->SetLineColor(ci);
   VbbHcc_tagFirst_CutFlow__13->SetLineWidth(2);
   VbbHcc_tagFirst_CutFlow__13->SetMarkerStyle(20);
   VbbHcc_tagFirst_CutFlow__13->SetMarkerSize(1.2);
   VbbHcc_tagFirst_CutFlow__13->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagFirst_CutFlow__13->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagFirst_CutFlow__13->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagFirst_CutFlow__13->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagFirst_CutFlow__13->GetXaxis()->SetBinLabel(5,"tags cut");
   VbbHcc_tagFirst_CutFlow__13->GetXaxis()->SetRange(1,5);
   VbbHcc_tagFirst_CutFlow__13->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow__13->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow__13->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow__13->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow__13->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow__13->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow__13->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow__13->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow__13->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tagFirst_CutFlow_fx1013[5] = { 0.5, 1.5, 2.5, 3.5, 4.5 };
   Double_t Graph_from_VbbHcc_tagFirst_CutFlow_fy1013[5] = { 1.079329e+12, 1.079305e+12, 2.328086e+09, 1.5733e+08, 3309604 };
   Double_t Graph_from_VbbHcc_tagFirst_CutFlow_fex1013[5] = { 0.5, 0.5, 0.5, 0.5, 0.5 };
   Double_t Graph_from_VbbHcc_tagFirst_CutFlow_fey1013[5] = { 1.442534e+08, 1.442527e+08, 1899181, 362846.9, 44709.14 };
   TGraphErrors *gre = new TGraphErrors(5,Graph_from_VbbHcc_tagFirst_CutFlow_fx1013,Graph_from_VbbHcc_tagFirst_CutFlow_fy1013,Graph_from_VbbHcc_tagFirst_CutFlow_fex1013,Graph_from_VbbHcc_tagFirst_CutFlow_fey1013);
   gre->SetName("Graph_from_VbbHcc_tagFirst_CutFlow");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tagFirst_CutFlow1013 = new TH1F("Graph_Graph_from_VbbHcc_tagFirst_CutFlow1013","",100,0,5.5);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1013->SetMinimum(2938406);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1013->SetMaximum(1.18742e+12);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1013->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1013->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1013->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1013->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1013->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1013->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1013->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1013->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tagFirst_CutFlow1013);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tagFirst_CutFlow","Data (BTagCSV, 2016)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   CutFlow_tagFirst_16->cd();
  
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
   
   TH1D *data_mc_ratio__14 = new TH1D("data_mc_ratio__14","",5,0,5);
   data_mc_ratio__14->SetBinContent(1,0.0003372635);
   data_mc_ratio__14->SetBinContent(2,0.0003360179);
   data_mc_ratio__14->SetBinContent(3,0.05266094);
   data_mc_ratio__14->SetBinContent(4,0.3428897);
   data_mc_ratio__14->SetBinContent(5,0.9646132);
   data_mc_ratio__14->SetBinError(1,1.767697e-08);
   data_mc_ratio__14->SetBinError(2,1.764449e-08);
   data_mc_ratio__14->SetBinError(3,4.756033e-06);
   data_mc_ratio__14->SetBinError(4,4.668437e-05);
   data_mc_ratio__14->SetBinError(5,0.0005398692);
   data_mc_ratio__14->SetMinimum(0.4);
   data_mc_ratio__14->SetMaximum(1.6);
   data_mc_ratio__14->SetEntries(10847.17);
   data_mc_ratio__14->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__14->SetLineColor(ci);
   data_mc_ratio__14->SetLineWidth(2);
   data_mc_ratio__14->SetMarkerStyle(20);
   data_mc_ratio__14->SetMarkerSize(1.2);
   data_mc_ratio__14->GetXaxis()->SetTitle(""Cut flow"");
   data_mc_ratio__14->GetXaxis()->SetBinLabel(1,"Total");
   data_mc_ratio__14->GetXaxis()->SetBinLabel(2,"MET cut");
   data_mc_ratio__14->GetXaxis()->SetBinLabel(3,"jet cuts");
   data_mc_ratio__14->GetXaxis()->SetBinLabel(4,"triggers");
   data_mc_ratio__14->GetXaxis()->SetBinLabel(5,"tags cut");
   data_mc_ratio__14->GetXaxis()->SetRange(1,6);
   data_mc_ratio__14->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__14->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__14->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__14->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__14->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__14->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__14->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__14->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__14->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__14->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__14->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__14->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__14->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__14->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__14->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__14->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1014[5] = { 0.5, 1.5, 2.5, 3.5, 4.5 };
   Double_t Graph_from_mc_statistical_error_fy1014[5] = { 1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1014[5] = { 0.5, 0.5, 0.5, 0.5, 0.5 };
   Double_t Graph_from_mc_statistical_error_fey1014[5] = { 0.000133651, 0.0001336533, 0.0008157694, 0.002306279, 0.01350891 };
   gre = new TGraphErrors(5,Graph_from_mc_statistical_error_fx1014,Graph_from_mc_statistical_error_fy1014,Graph_from_mc_statistical_error_fex1014,Graph_from_mc_statistical_error_fey1014);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1014 = new TH1F("Graph_Graph_from_mc_statistical_error1014","",100,0,5.5);
   Graph_Graph_from_mc_statistical_error1014->SetMinimum(0.9837893);
   Graph_Graph_from_mc_statistical_error1014->SetMaximum(1.016211);
   Graph_Graph_from_mc_statistical_error1014->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1014->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1014->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1014->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1014);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,7,1);
   line->Draw();
   bottomPad->Modified();
   CutFlow_tagFirst_16->cd();
   CutFlow_tagFirst_16->Modified();
   CutFlow_tagFirst_16->cd();
   CutFlow_tagFirst_16->SetSelected(CutFlow_tagFirst_16);
}
