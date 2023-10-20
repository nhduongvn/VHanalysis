#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetpt_JEC_tagFirst_16()
{
//=========Macro generated from canvas: H_jetpt_JEC_tagFirst_16/H_jetpt_JEC_tagFirst_16
//=========  (Fri Oct 20 11:03:40 2023) by ROOT version 6.28/04
   TCanvas *H_jetpt_JEC_tagFirst_16 = new TCanvas("H_jetpt_JEC_tagFirst_16", "H_jetpt_JEC_tagFirst_16",0,0,600,600);
   H_jetpt_JEC_tagFirst_16->SetHighLightColor(2);
   H_jetpt_JEC_tagFirst_16->Range(0,0,1,1);
   H_jetpt_JEC_tagFirst_16->SetFillColor(0);
   H_jetpt_JEC_tagFirst_16->SetFillStyle(4000);
   H_jetpt_JEC_tagFirst_16->SetBorderMode(0);
   H_jetpt_JEC_tagFirst_16->SetBorderSize(2);
   H_jetpt_JEC_tagFirst_16->SetFrameFillStyle(1000);
   H_jetpt_JEC_tagFirst_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-2906.39,315.7258,2903493);
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
   st->SetMaximum(2612853);
   
   TH1F *st_stack_196 = new TH1F("st_stack_196","",150,0,300);
   st_stack_196->SetMinimum(0.01);
   st_stack_196->SetMaximum(2612853);
   st_stack_196->SetDirectory(nullptr);
   st_stack_196->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_196->SetLineColor(ci);
   st_stack_196->SetLineWidth(0);
   st_stack_196->GetXaxis()->SetRange(1,150);
   st_stack_196->GetXaxis()->SetLabelFont(42);
   st_stack_196->GetXaxis()->SetTitleOffset(1);
   st_stack_196->GetXaxis()->SetTitleFont(42);
   st_stack_196->GetYaxis()->SetTitle("Events/2.0");
   st_stack_196->GetYaxis()->SetLabelFont(42);
   st_stack_196->GetYaxis()->SetLabelSize(0.05);
   st_stack_196->GetYaxis()->SetTitleSize(0.057);
   st_stack_196->GetYaxis()->SetTitleOffset(1.2);
   st_stack_196->GetYaxis()->SetTitleFont(42);
   st_stack_196->GetZaxis()->SetLabelFont(42);
   st_stack_196->GetZaxis()->SetTitleOffset(1);
   st_stack_196->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_196);
   
   
   TH1D *VbbHcc_tagFirst_H_jetpt_JEC_stack_1 = new TH1D("VbbHcc_tagFirst_H_jetpt_JEC_stack_1","",150,0,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinContent(0,1172588);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinContent(1,5000.351);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinContent(2,806238.9);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinContent(3,319893.5);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinError(0,21480.92);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinError(1,1201.469);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinError(2,32386.02);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinError(3,5683.332);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetEntries(186449);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetpt_JEC_stack_1,"");
   
   TH1D *VbbHcc_tagFirst_H_jetpt_JEC_stack_2 = new TH1D("VbbHcc_tagFirst_H_jetpt_JEC_stack_2","",150,0,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinContent(0,11836.73);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinContent(1,66.23205);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinContent(2,9300.45);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinContent(3,2279.394);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinError(0,42.30874);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinError(1,3.274463);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinError(2,37.85911);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinError(3,17.74209);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetEntries(400441);

   ci = TColor::GetColor("#660066");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetpt_JEC_stack_2,"");
   
   TH1D *VbbHcc_tagFirst_H_jetpt_JEC_stack_3 = new TH1D("VbbHcc_tagFirst_H_jetpt_JEC_stack_3","",150,0,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinContent(0,204605.3);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinContent(1,1243.052);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinContent(2,170302.2);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinContent(3,29562.04);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinError(0,106.8462);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinError(1,8.340873);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinError(2,97.53941);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinError(3,40.47082);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetEntries(7925609);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetpt_JEC_stack_3,"");
   
   TH1D *VbbHcc_tagFirst_H_jetpt_JEC_stack_4 = new TH1D("VbbHcc_tagFirst_H_jetpt_JEC_stack_4","",150,0,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinContent(0,9198.897);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinContent(1,36.51192);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinContent(2,5910.47);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinContent(3,3059.261);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinError(0,59.53111);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinError(1,5.10362);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinError(2,52.94732);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinError(3,25.07512);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetEntries(172036);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetpt_JEC_stack_4,"");
   
   TH1D *VbbHcc_tagFirst_H_jetpt_JEC_stack_5 = new TH1D("VbbHcc_tagFirst_H_jetpt_JEC_stack_5","",150,0,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinContent(0,5258.285);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinContent(1,18.48025);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinContent(2,3136.011);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinContent(3,2090.801);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinError(0,69.91482);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinError(1,3.106208);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinError(2,63.63522);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinError(3,31.42074);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetEntries(119104);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetpt_JEC_stack_5,"");
   
   TH1D *VbbHcc_tagFirst_H_jetpt_JEC_stack_6 = new TH1D("VbbHcc_tagFirst_H_jetpt_JEC_stack_6","",150,0,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinContent(0,43.11396);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinContent(1,0.1268171);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinContent(2,31.14166);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinContent(3,15.39009);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinError(0,2.287933);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinError(1,0.1268171);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinError(2,1.953447);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinError(3,1.359489);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetEntries(777);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetpt_JEC_stack_6,"");
   
   TH1D *VbbHcc_tagFirst_H_jetpt_JEC_stack_7 = new TH1D("VbbHcc_tagFirst_H_jetpt_JEC_stack_7","",150,0,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetBinContent(0,123.2173);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetBinContent(1,0.5977941);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetBinContent(2,83.28264);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetBinContent(3,32.44229);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetBinError(0,3.485579);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetBinError(1,0.2490366);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetBinError(2,2.846933);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetBinError(3,1.785791);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetEntries(2555);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetpt_JEC_stack_7,"");
   
   TH1D *VbbHcc_tagFirst_H_jetpt_JEC_stack_8 = new TH1D("VbbHcc_tagFirst_H_jetpt_JEC_stack_8","",150,0,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetBinContent(0,88.1038);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetBinContent(1,0.4327947);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetBinContent(2,65.78781);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetBinContent(3,22.9048);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetBinError(0,4.382725);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetBinError(1,0.3165305);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetBinError(2,3.73477);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetBinError(3,2.181589);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetEntries(868);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetpt_JEC_stack_8,"");
   
   TH1D *VbbHcc_tagFirst_H_jetpt_JEC_stack_9 = new TH1D("VbbHcc_tagFirst_H_jetpt_JEC_stack_9","",150,0,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinContent(0,41.8415);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinContent(1,0.1995855);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinContent(2,33.1005);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinContent(3,8.983434);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinError(0,0.2293378);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinError(1,0.01579047);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinError(2,0.2039721);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinError(3,0.1063638);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetEntries(72695);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetpt_JEC_stack_9,"");
   
   TH1D *VbbHcc_tagFirst_H_jetpt_JEC_stack_10 = new TH1D("VbbHcc_tagFirst_H_jetpt_JEC_stack_10","",150,0,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetBinContent(0,21.68076);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetBinContent(1,0.1143474);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetBinContent(2,17.21232);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetBinContent(3,4.319059);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetBinError(0,0.08482961);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetBinError(1,0.006124636);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetBinError(2,0.07569644);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetBinError(3,0.03777773);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetEntries(137175);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetpt_JEC_stack_10,"");
   
   TH1D *VbbHcc_tagFirst_H_jetpt_JEC_stack_11 = new TH1D("VbbHcc_tagFirst_H_jetpt_JEC_stack_11","",150,0,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetBinContent(0,1.036507);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetBinContent(1,0.004483362);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetBinContent(2,0.6890788);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetBinContent(3,0.1927701);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetBinError(0,0.04825143);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetBinError(1,0.00317208);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetBinError(2,0.03936367);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetBinError(3,0.02103065);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetEntries(910);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetpt_JEC_stack_11,"");
   
   TH1D *VbbHcc_tagFirst_H_jetpt_JEC_stack_12 = new TH1D("VbbHcc_tagFirst_H_jetpt_JEC_stack_12","",150,0,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetBinContent(0,0.4487355);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetBinContent(1,0.004902228);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetBinContent(2,0.3679617);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetBinContent(3,0.07427699);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetBinError(0,0.01144836);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetBinError(1,0.001244253);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetBinError(2,0.01039376);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetBinError(3,0.004678175);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetEntries(3163);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_H_jetpt_JEC_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tagFirst_H_jetpt_JEC__391 = new TH1D("VbbHcc_tagFirst_H_jetpt_JEC__391","",150,0,300);
   VbbHcc_tagFirst_H_jetpt_JEC__391->SetBinContent(0,1608588);
   VbbHcc_tagFirst_H_jetpt_JEC__391->SetBinContent(1,6679);
   VbbHcc_tagFirst_H_jetpt_JEC__391->SetBinContent(2,1175784);
   VbbHcc_tagFirst_H_jetpt_JEC__391->SetBinContent(3,401437);
   VbbHcc_tagFirst_H_jetpt_JEC__391->SetEntries(3192637);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetpt_JEC__391->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetpt_JEC__391->SetLineWidth(2);
   VbbHcc_tagFirst_H_jetpt_JEC__391->SetMarkerStyle(20);
   VbbHcc_tagFirst_H_jetpt_JEC__391->SetMarkerSize(1.2);
   VbbHcc_tagFirst_H_jetpt_JEC__391->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetpt_JEC__391->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC__391->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC__391->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC__391->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC__391->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC__391->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC__391->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC__391->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC__391->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tagFirst_H_jetpt_JEC_fx1391[150] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
   35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65,
   67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97,
   99, 101, 103, 105, 107, 109, 111, 113, 115, 117, 119, 121, 123, 125, 127, 129,
   131, 133, 135, 137, 139, 141, 143, 145, 147, 149, 151, 153, 155, 157, 159, 161,
   163, 165, 167, 169, 171, 173, 175, 177, 179, 181, 183, 185, 187, 189, 191, 193,
   195, 197, 199, 201, 203, 205, 207, 209, 211, 213, 215, 217, 219, 221, 223, 225,
   227, 229, 231, 233, 235, 237, 239, 241, 243, 245, 247, 249, 251, 253, 255, 257,
   259, 261, 263, 265, 267, 269, 271, 273, 275, 277, 279, 281, 283, 285, 287, 289,
   291, 293, 295, 297, 299 };
   Double_t Graph_from_VbbHcc_tagFirst_H_jetpt_JEC_fy1391[150] = { 6366.109, 995119.7, 356969.3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   Double_t Graph_from_VbbHcc_tagFirst_H_jetpt_JEC_fex1391[150] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1 };
   Double_t Graph_from_VbbHcc_tagFirst_H_jetpt_JEC_fey1391[150] = { 1201.517, 32386.29, 5683.647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   TGraphErrors *gre = new TGraphErrors(150,Graph_from_VbbHcc_tagFirst_H_jetpt_JEC_fx1391,Graph_from_VbbHcc_tagFirst_H_jetpt_JEC_fy1391,Graph_from_VbbHcc_tagFirst_H_jetpt_JEC_fex1391,Graph_from_VbbHcc_tagFirst_H_jetpt_JEC_fey1391);
   gre->SetName("Graph_from_VbbHcc_tagFirst_H_jetpt_JEC");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1391 = new TH1F("Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1391","",150,0,330);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1391->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1391->SetMaximum(1130257);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1391->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1391->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1391->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1391->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1391->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1391->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1391->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1391->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1391->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1391->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1391->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1391);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tagFirst_H_jetpt_JEC","Data (BTagCSV, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetpt_JEC","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetpt_JEC","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetpt_JEC","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetpt_JEC","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetpt_JEC","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetpt_JEC","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetpt_JEC","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetpt_JEC","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetpt_JEC","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetpt_JEC","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetpt_JEC","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_H_jetpt_JEC","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tagFirst_H_jetpt_JEC","MC unc. (stat.)","fl");

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
   H_jetpt_JEC_tagFirst_16->cd();
  
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
   
   TH1D *data_mc_ratio__392 = new TH1D("data_mc_ratio__392","",150,0,300);
   data_mc_ratio__392->SetBinContent(0,1.145876);
   data_mc_ratio__392->SetBinContent(1,1.04915);
   data_mc_ratio__392->SetBinContent(2,1.18155);
   data_mc_ratio__392->SetBinContent(3,1.12457);
   data_mc_ratio__392->SetBinError(0,0.01755776);
   data_mc_ratio__392->SetBinError(1,0.01283754);
   data_mc_ratio__392->SetBinError(2,0.001089654);
   data_mc_ratio__392->SetBinError(3,0.001774916);
   data_mc_ratio__392->SetMinimum(0.4);
   data_mc_ratio__392->SetMaximum(1.6);
   data_mc_ratio__392->SetEntries(273.3978);
   data_mc_ratio__392->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__392->SetLineColor(ci);
   data_mc_ratio__392->SetLineWidth(2);
   data_mc_ratio__392->SetMarkerStyle(20);
   data_mc_ratio__392->SetMarkerSize(1.2);
   data_mc_ratio__392->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   data_mc_ratio__392->GetXaxis()->SetRange(1,150);
   data_mc_ratio__392->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__392->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__392->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__392->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__392->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__392->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__392->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__392->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__392->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__392->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__392->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__392->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__392->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__392->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__392->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__392->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1392[150] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
   35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65,
   67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97,
   99, 101, 103, 105, 107, 109, 111, 113, 115, 117, 119, 121, 123, 125, 127, 129,
   131, 133, 135, 137, 139, 141, 143, 145, 147, 149, 151, 153, 155, 157, 159, 161,
   163, 165, 167, 169, 171, 173, 175, 177, 179, 181, 183, 185, 187, 189, 191, 193,
   195, 197, 199, 201, 203, 205, 207, 209, 211, 213, 215, 217, 219, 221, 223, 225,
   227, 229, 231, 233, 235, 237, 239, 241, 243, 245, 247, 249, 251, 253, 255, 257,
   259, 261, 263, 265, 267, 269, 271, 273, 275, 277, 279, 281, 283, 285, 287, 289,
   291, 293, 295, 297, 299 };
   Double_t Graph_from_mc_statistical_error_fy1392[150] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1392[150] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fey1392[150] = { 0.1887365, 0.03254512, 0.01592195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   gre = new TGraphErrors(150,Graph_from_mc_statistical_error_fx1392,Graph_from_mc_statistical_error_fy1392,Graph_from_mc_statistical_error_fex1392,Graph_from_mc_statistical_error_fey1392);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1392 = new TH1F("Graph_Graph_from_mc_statistical_error1392","",150,0,330);
   Graph_Graph_from_mc_statistical_error1392->SetMinimum(0.7735162);
   Graph_Graph_from_mc_statistical_error1392->SetMaximum(1.226484);
   Graph_Graph_from_mc_statistical_error1392->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1392->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1392->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1392->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1392->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1392->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1392->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1392->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1392->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1392->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1392->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1392);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_jetpt_JEC_tagFirst_16->cd();
   H_jetpt_JEC_tagFirst_16->Modified();
   H_jetpt_JEC_tagFirst_16->cd();
   H_jetpt_JEC_tagFirst_16->SetSelected(H_jetpt_JEC_tagFirst_16);
}
