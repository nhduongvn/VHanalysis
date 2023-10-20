#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_JEC_tagFirst_16()
{
//=========Macro generated from canvas: H_jetmass_JEC_tagFirst_16/H_jetmass_JEC_tagFirst_16
//=========  (Fri Oct 20 11:03:41 2023) by ROOT version 6.28/04
   TCanvas *H_jetmass_JEC_tagFirst_16 = new TCanvas("H_jetmass_JEC_tagFirst_16", "H_jetmass_JEC_tagFirst_16",0,0,600,600);
   H_jetmass_JEC_tagFirst_16->SetHighLightColor(2);
   H_jetmass_JEC_tagFirst_16->Range(0,0,1,1);
   H_jetmass_JEC_tagFirst_16->SetFillColor(0);
   H_jetmass_JEC_tagFirst_16->SetFillStyle(4000);
   H_jetmass_JEC_tagFirst_16->SetBorderMode(0);
   H_jetmass_JEC_tagFirst_16->SetBorderSize(2);
   H_jetmass_JEC_tagFirst_16->SetFrameFillStyle(1000);
   H_jetmass_JEC_tagFirst_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-3966.645,315.7258,3962688);
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
   st->SetMaximum(3566022);
   
   TH1F *st_stack_202 = new TH1F("st_stack_202","",150,0,300);
   st_stack_202->SetMinimum(0.01);
   st_stack_202->SetMaximum(3566022);
   st_stack_202->SetDirectory(nullptr);
   st_stack_202->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_202->SetLineColor(ci);
   st_stack_202->SetLineWidth(0);
   st_stack_202->GetXaxis()->SetRange(1,150);
   st_stack_202->GetXaxis()->SetLabelFont(42);
   st_stack_202->GetXaxis()->SetTitleOffset(1);
   st_stack_202->GetXaxis()->SetTitleFont(42);
   st_stack_202->GetYaxis()->SetTitle("Events/2.0");
   st_stack_202->GetYaxis()->SetLabelFont(42);
   st_stack_202->GetYaxis()->SetLabelSize(0.05);
   st_stack_202->GetYaxis()->SetTitleSize(0.057);
   st_stack_202->GetYaxis()->SetTitleOffset(1.2);
   st_stack_202->GetYaxis()->SetTitleFont(42);
   st_stack_202->GetZaxis()->SetLabelFont(42);
   st_stack_202->GetZaxis()->SetTitleOffset(1);
   st_stack_202->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_202);
   
   
   TH1D *VbbHcc_tagFirst_H_jetmass_JEC_stack_1 = new TH1D("VbbHcc_tagFirst_H_jetmass_JEC_stack_1","",150,0,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetBinContent(1,1363.573);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetBinContent(2,1043980);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetBinContent(3,1258377);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetBinContent(4,0.1764044);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetBinError(1,922.4784);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetBinError(2,37335.42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetBinError(3,12216.51);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetBinError(4,0.1764044);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetEntries(186449);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetmass_JEC_stack_1,"");
   
   TH1D *VbbHcc_tagFirst_H_jetmass_JEC_stack_2 = new TH1D("VbbHcc_tagFirst_H_jetmass_JEC_stack_2","",150,0,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->SetBinContent(1,2.96727);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->SetBinContent(2,14831.65);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->SetBinContent(3,8648.19);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->SetBinError(1,0.7545924);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->SetBinError(2,48.30943);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->SetBinError(3,34.84931);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->SetEntries(400441);

   ci = TColor::GetColor("#660066");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetmass_JEC_stack_2,"");
   
   TH1D *VbbHcc_tagFirst_H_jetmass_JEC_stack_3 = new TH1D("VbbHcc_tagFirst_H_jetmass_JEC_stack_3","",150,0,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->SetBinContent(1,3.667493);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->SetBinContent(2,291926.8);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->SetBinContent(3,113782.2);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->SetBinError(1,0.4390605);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->SetBinError(2,127.8398);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->SetBinError(3,79.33662);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->SetEntries(7925609);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetmass_JEC_stack_3,"");
   
   TH1D *VbbHcc_tagFirst_H_jetmass_JEC_stack_4 = new TH1D("VbbHcc_tagFirst_H_jetmass_JEC_stack_4","",150,0,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->SetBinContent(1,2.578684);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->SetBinContent(2,6987.354);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->SetBinContent(3,11215.21);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->SetBinError(1,1.46591);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->SetBinError(2,69.4253);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->SetBinError(3,46.69217);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->SetEntries(172036);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetmass_JEC_stack_4,"");
   
   TH1D *VbbHcc_tagFirst_H_jetmass_JEC_stack_5 = new TH1D("VbbHcc_tagFirst_H_jetmass_JEC_stack_5","",150,0,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->SetBinContent(1,2.358746);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->SetBinContent(2,3102.454);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->SetBinContent(3,7398.765);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->SetBinError(1,1.020287);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->SetBinError(2,79.25435);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->SetBinError(3,60.43296);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->SetEntries(119104);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetmass_JEC_stack_5,"");
   
   TH1D *VbbHcc_tagFirst_H_jetmass_JEC_stack_6 = new TH1D("VbbHcc_tagFirst_H_jetmass_JEC_stack_6","",150,0,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->SetBinContent(2,42.37021);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->SetBinContent(3,47.40232);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->SetBinError(2,2.254395);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->SetBinError(3,2.415076);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->SetEntries(777);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetmass_JEC_stack_6,"");
   
   TH1D *VbbHcc_tagFirst_H_jetmass_JEC_stack_7 = new TH1D("VbbHcc_tagFirst_H_jetmass_JEC_stack_7","",150,0,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->SetBinContent(1,0.1630344);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->SetBinContent(2,123.3901);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->SetBinContent(3,115.9869);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->SetBinError(1,0.1155714);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->SetBinError(2,3.47356);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->SetBinError(3,3.380293);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->SetEntries(2555);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetmass_JEC_stack_7,"");
   
   TH1D *VbbHcc_tagFirst_H_jetmass_JEC_stack_8 = new TH1D("VbbHcc_tagFirst_H_jetmass_JEC_stack_8","",150,0,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->SetBinContent(1,0.1592312);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->SetBinContent(2,102.3892);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->SetBinContent(3,74.68082);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->SetBinError(1,0.1592312);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->SetBinError(2,4.684504);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->SetBinError(3,4.005792);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->SetEntries(868);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetmass_JEC_stack_8,"");
   
   TH1D *VbbHcc_tagFirst_H_jetmass_JEC_stack_9 = new TH1D("VbbHcc_tagFirst_H_jetmass_JEC_stack_9","",150,0,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->SetBinContent(1,0.01283986);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->SetBinContent(2,54.50491);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->SetBinContent(3,29.60727);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->SetBinError(1,0.003804999);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->SetBinError(2,0.2616548);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->SetBinError(3,0.1930941);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->SetEntries(72695);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetmass_JEC_stack_9,"");
   
   TH1D *VbbHcc_tagFirst_H_jetmass_JEC_stack_10 = new TH1D("VbbHcc_tagFirst_H_jetmass_JEC_stack_10","",150,0,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->SetBinContent(1,0.003863237);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->SetBinContent(2,26.68196);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->SetBinContent(3,16.64066);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->SetBinError(1,0.001128705);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->SetBinError(2,0.09413581);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->SetBinError(3,0.07434956);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->SetEntries(137175);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetmass_JEC_stack_10,"");
   
   TH1D *VbbHcc_tagFirst_H_jetmass_JEC_stack_11 = new TH1D("VbbHcc_tagFirst_H_jetmass_JEC_stack_11","",150,0,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->SetBinContent(2,1.366083);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->SetBinContent(3,0.556757);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->SetBinError(2,0.05531974);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->SetBinError(3,0.03563391);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->SetEntries(910);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetmass_JEC_stack_11,"");
   
   TH1D *VbbHcc_tagFirst_H_jetmass_JEC_stack_12 = new TH1D("VbbHcc_tagFirst_H_jetmass_JEC_stack_12","",150,0,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->SetBinContent(2,0.6123278);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->SetBinContent(3,0.2835486);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->SetBinError(2,0.01337997);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->SetBinError(3,0.009138118);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->SetEntries(3163);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetmass_JEC_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tagFirst_H_jetmass_JEC__403 = new TH1D("VbbHcc_tagFirst_H_jetmass_JEC__403","",150,0,300);
   VbbHcc_tagFirst_H_jetmass_JEC__403->SetBinContent(1,16);
   VbbHcc_tagFirst_H_jetmass_JEC__403->SetBinContent(2,1587762);
   VbbHcc_tagFirst_H_jetmass_JEC__403->SetBinContent(3,1604710);
   VbbHcc_tagFirst_H_jetmass_JEC__403->SetEntries(3192637);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetmass_JEC__403->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetmass_JEC__403->SetLineWidth(2);
   VbbHcc_tagFirst_H_jetmass_JEC__403->SetMarkerStyle(20);
   VbbHcc_tagFirst_H_jetmass_JEC__403->SetMarkerSize(1.2);
   VbbHcc_tagFirst_H_jetmass_JEC__403->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetmass_JEC__403->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC__403->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC__403->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC__403->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC__403->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC__403->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC__403->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC__403->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC__403->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tagFirst_H_jetmass_JEC_fx1403[150] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
   35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65,
   67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97,
   99, 101, 103, 105, 107, 109, 111, 113, 115, 117, 119, 121, 123, 125, 127, 129,
   131, 133, 135, 137, 139, 141, 143, 145, 147, 149, 151, 153, 155, 157, 159, 161,
   163, 165, 167, 169, 171, 173, 175, 177, 179, 181, 183, 185, 187, 189, 191, 193,
   195, 197, 199, 201, 203, 205, 207, 209, 211, 213, 215, 217, 219, 221, 223, 225,
   227, 229, 231, 233, 235, 237, 239, 241, 243, 245, 247, 249, 251, 253, 255, 257,
   259, 261, 263, 265, 267, 269, 271, 273, 275, 277, 279, 281, 283, 285, 287, 289,
   291, 293, 295, 297, 299 };
   Double_t Graph_from_VbbHcc_tagFirst_H_jetmass_JEC_fy1403[150] = { 1375.484, 1361179, 1399706, 0.1764044, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   Double_t Graph_from_VbbHcc_tagFirst_H_jetmass_JEC_fex1403[150] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1 };
   Double_t Graph_from_VbbHcc_tagFirst_H_jetmass_JEC_fey1403[150] = { 922.4806, 37335.82, 12217.06, 0.1764044, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   TGraphErrors *gre = new TGraphErrors(150,Graph_from_VbbHcc_tagFirst_H_jetmass_JEC_fx1403,Graph_from_VbbHcc_tagFirst_H_jetmass_JEC_fy1403,Graph_from_VbbHcc_tagFirst_H_jetmass_JEC_fex1403,Graph_from_VbbHcc_tagFirst_H_jetmass_JEC_fey1403);
   gre->SetName("Graph_from_VbbHcc_tagFirst_H_jetmass_JEC");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1403 = new TH1F("Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1403","",150,0,330);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1403->SetMinimum(-141192.3);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1403->SetMaximum(1553116);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1403->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1403->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1403->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1403->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1403->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1403->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1403->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1403->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1403->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1403->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1403->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1403);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tagFirst_H_jetmass_JEC","Data (BTagCSV, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetmass_JEC","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetmass_JEC","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetmass_JEC","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetmass_JEC","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetmass_JEC","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetmass_JEC","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetmass_JEC","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetmass_JEC","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetmass_JEC","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetmass_JEC","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetmass_JEC","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetmass_JEC","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tagFirst_H_jetmass_JEC","MC unc. (stat.)","fl");

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
   H_jetmass_JEC_tagFirst_16->cd();
  
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
   
   TH1D *data_mc_ratio__404 = new TH1D("data_mc_ratio__404","",150,0,300);
   data_mc_ratio__404->SetBinContent(1,0.01163227);
   data_mc_ratio__404->SetBinContent(2,1.16646);
   data_mc_ratio__404->SetBinContent(3,1.146462);
   data_mc_ratio__404->SetBinError(1,0.002908067);
   data_mc_ratio__404->SetBinError(2,0.000925715);
   data_mc_ratio__404->SetBinError(3,0.0009050266);
   data_mc_ratio__404->SetMinimum(0.4);
   data_mc_ratio__404->SetMaximum(1.6);
   data_mc_ratio__404->SetEntries(4522.567);
   data_mc_ratio__404->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__404->SetLineColor(ci);
   data_mc_ratio__404->SetLineWidth(2);
   data_mc_ratio__404->SetMarkerStyle(20);
   data_mc_ratio__404->SetMarkerSize(1.2);
   data_mc_ratio__404->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   data_mc_ratio__404->GetXaxis()->SetRange(1,150);
   data_mc_ratio__404->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__404->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__404->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__404->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__404->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__404->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__404->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__404->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__404->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__404->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__404->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__404->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__404->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__404->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__404->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__404->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1404[150] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
   35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65,
   67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97,
   99, 101, 103, 105, 107, 109, 111, 113, 115, 117, 119, 121, 123, 125, 127, 129,
   131, 133, 135, 137, 139, 141, 143, 145, 147, 149, 151, 153, 155, 157, 159, 161,
   163, 165, 167, 169, 171, 173, 175, 177, 179, 181, 183, 185, 187, 189, 191, 193,
   195, 197, 199, 201, 203, 205, 207, 209, 211, 213, 215, 217, 219, 221, 223, 225,
   227, 229, 231, 233, 235, 237, 239, 241, 243, 245, 247, 249, 251, 253, 255, 257,
   259, 261, 263, 265, 267, 269, 271, 273, 275, 277, 279, 281, 283, 285, 287, 289,
   291, 293, 295, 297, 299 };
   Double_t Graph_from_mc_statistical_error_fy1404[150] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1404[150] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fey1404[150] = { 0.6706587, 0.02742902, 0.008728302, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   gre = new TGraphErrors(150,Graph_from_mc_statistical_error_fx1404,Graph_from_mc_statistical_error_fy1404,Graph_from_mc_statistical_error_fex1404,Graph_from_mc_statistical_error_fey1404);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1404 = new TH1F("Graph_Graph_from_mc_statistical_error1404","",150,0,330);
   Graph_Graph_from_mc_statistical_error1404->SetMinimum(-0.2);
   Graph_Graph_from_mc_statistical_error1404->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1404->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1404->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1404->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1404->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1404->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1404->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1404->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1404->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1404->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1404->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1404->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1404);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_jetmass_JEC_tagFirst_16->cd();
   H_jetmass_JEC_tagFirst_16->Modified();
   H_jetmass_JEC_tagFirst_16->cd();
   H_jetmass_JEC_tagFirst_16->SetSelected(H_jetmass_JEC_tagFirst_16);
}
