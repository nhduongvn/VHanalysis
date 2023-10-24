#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetpt_JEC_tagFirst_17()
{
//=========Macro generated from canvas: H_jetpt_JEC_tagFirst_17/H_jetpt_JEC_tagFirst_17
//=========  (Fri Oct 20 15:09:17 2023) by ROOT version 6.28/04
   TCanvas *H_jetpt_JEC_tagFirst_17 = new TCanvas("H_jetpt_JEC_tagFirst_17", "H_jetpt_JEC_tagFirst_17",0,0,600,600);
   H_jetpt_JEC_tagFirst_17->SetHighLightColor(2);
   H_jetpt_JEC_tagFirst_17->Range(0,0,1,1);
   H_jetpt_JEC_tagFirst_17->SetFillColor(0);
   H_jetpt_JEC_tagFirst_17->SetFillStyle(4000);
   H_jetpt_JEC_tagFirst_17->SetBorderMode(0);
   H_jetpt_JEC_tagFirst_17->SetBorderSize(2);
   H_jetpt_JEC_tagFirst_17->SetFrameFillStyle(1000);
   H_jetpt_JEC_tagFirst_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-1646.444,315.7258,1644807);
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
   st->SetMaximum(1480162);
   
   TH1F *st_stack_197 = new TH1F("st_stack_197","",150,0,300);
   st_stack_197->SetMinimum(0.01);
   st_stack_197->SetMaximum(1480162);
   st_stack_197->SetDirectory(nullptr);
   st_stack_197->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_197->SetLineColor(ci);
   st_stack_197->SetLineWidth(0);
   st_stack_197->GetXaxis()->SetRange(1,150);
   st_stack_197->GetXaxis()->SetLabelFont(42);
   st_stack_197->GetXaxis()->SetTitleOffset(1);
   st_stack_197->GetXaxis()->SetTitleFont(42);
   st_stack_197->GetYaxis()->SetTitle("Events/2.0");
   st_stack_197->GetYaxis()->SetLabelFont(42);
   st_stack_197->GetYaxis()->SetLabelSize(0.05);
   st_stack_197->GetYaxis()->SetTitleSize(0.057);
   st_stack_197->GetYaxis()->SetTitleOffset(1.2);
   st_stack_197->GetYaxis()->SetTitleFont(42);
   st_stack_197->GetZaxis()->SetLabelFont(42);
   st_stack_197->GetZaxis()->SetTitleOffset(1);
   st_stack_197->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_197);
   
   
   TH1D *VbbHcc_tagFirst_H_jetpt_JEC_stack_1 = new TH1D("VbbHcc_tagFirst_H_jetpt_JEC_stack_1","",150,0,300);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinContent(0,781668.2);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinContent(1,78301.14);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinContent(2,516504.9);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinContent(3,253182.8);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinContent(151,15236.7);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinError(0,12442.98);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinError(1,43797.74);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinError(2,10882.02);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinError(3,4728.558);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetBinError(151,14193.45);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_1->SetEntries(171555);

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
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinContent(0,8990.572);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinContent(1,48.69695);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinContent(2,6915.384);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinContent(3,1838.211);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinContent(151,3.173728);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinError(0,47.81953);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinError(1,3.603839);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinError(2,42.55458);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinError(3,20.65832);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetBinError(151,0.7811464);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_2->SetEntries(214700);

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
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinContent(0,164657.4);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinContent(1,994.4285);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinContent(2,135909);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinContent(3,24804.71);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinContent(151,4.941508);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinError(0,124.0152);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinError(1,9.742664);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinError(2,112.8546);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinError(3,47.93858);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetBinError(151,0.6372945);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_3->SetEntries(4978651);

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
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinContent(0,6708.393);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinContent(1,39.49359);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinContent(2,4555.418);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinContent(3,2170.98);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinContent(151,12.60703);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinError(0,53.34972);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinError(1,8.544761);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinError(2,54.05018);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinError(3,24.59579);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetBinError(151,4.890889);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_4->SetEntries(95533);

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
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinContent(0,3697.197);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinContent(1,38.187);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinContent(2,2028.807);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinContent(3,1429.863);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinContent(151,9.74634);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinError(0,70.60994);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinError(1,11.11076);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinError(2,53.88902);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinError(3,29.08097);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetBinError(151,6.422317);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_5->SetEntries(45648);

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
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinContent(0,39.48931);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinContent(1,0.5103792);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinContent(2,14.86944);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinContent(3,11.88824);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinContent(151,0.325277);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinError(0,4.029782);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinError(1,0.3632795);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinError(2,2.467936);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinError(3,2.248302);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetBinError(151,0.325277);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_6->SetEntries(204);

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
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetBinContent(0,94.46149);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetBinContent(2,52.31773);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetBinContent(3,21.5084);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetBinContent(151,1.19662);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetBinError(0,5.920927);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetBinError(2,4.421061);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetBinError(3,2.796266);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetBinError(151,0.5469644);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_7->SetEntries(620);

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
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetBinContent(0,82.45025);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetBinContent(2,43.03874);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetBinContent(3,18.53578);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetBinError(0,8.417422);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetBinError(2,6.017111);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetBinError(3,3.762925);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_8->SetEntries(229);

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
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinContent(0,36.20679);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinContent(1,0.214094);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinContent(2,28.17395);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinContent(3,7.745789);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinContent(151,0.01218031);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinError(0,0.3099494);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinError(1,0.02298528);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinError(2,0.2733417);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinError(3,0.1424859);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetBinError(151,0.004993267);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_9->SetEntries(39482);

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
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetBinContent(0,25.1068);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetBinContent(1,0.1324169);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetBinContent(2,19.93225);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetBinContent(3,5.001567);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetBinError(0,0.09823459);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetBinError(1,0.007092466);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetBinError(2,0.08765817);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_10->SetBinError(3,0.04374746);
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
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetBinContent(0,0.8530652);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetBinContent(1,0.004334866);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetBinContent(2,0.7023049);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetBinContent(3,0.1427891);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetBinError(0,0.04020459);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetBinError(1,0.00258341);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetBinError(2,0.03678633);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetBinError(3,0.01630452);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_11->SetEntries(1123);

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
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetBinContent(0,0.4301735);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetBinContent(1,0.002097538);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetBinContent(2,0.34262);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetBinContent(3,0.06462282);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetBinError(0,0.0100677);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetBinError(1,0.0008409123);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetBinError(2,0.008954222);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetBinError(3,0.003816045);
   VbbHcc_tagFirst_H_jetpt_JEC_stack_12->SetEntries(4223);

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
   
   TH1D *VbbHcc_tagFirst_H_jetpt_JEC__393 = new TH1D("VbbHcc_tagFirst_H_jetpt_JEC__393","",150,0,300);
   VbbHcc_tagFirst_H_jetpt_JEC__393->SetBinContent(0,591413);
   VbbHcc_tagFirst_H_jetpt_JEC__393->SetBinContent(1,2494);
   VbbHcc_tagFirst_H_jetpt_JEC__393->SetBinContent(2,419132);
   VbbHcc_tagFirst_H_jetpt_JEC__393->SetBinContent(3,150743);
   VbbHcc_tagFirst_H_jetpt_JEC__393->SetEntries(1163931);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetpt_JEC__393->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetpt_JEC__393->SetLineWidth(2);
   VbbHcc_tagFirst_H_jetpt_JEC__393->SetMarkerStyle(20);
   VbbHcc_tagFirst_H_jetpt_JEC__393->SetMarkerSize(1.2);
   VbbHcc_tagFirst_H_jetpt_JEC__393->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetpt_JEC__393->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC__393->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC__393->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC__393->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC__393->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC__393->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC__393->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetpt_JEC__393->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetpt_JEC__393->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tagFirst_H_jetpt_JEC_fx1393[150] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
   35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65,
   67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97,
   99, 101, 103, 105, 107, 109, 111, 113, 115, 117, 119, 121, 123, 125, 127, 129,
   131, 133, 135, 137, 139, 141, 143, 145, 147, 149, 151, 153, 155, 157, 159, 161,
   163, 165, 167, 169, 171, 173, 175, 177, 179, 181, 183, 185, 187, 189, 191, 193,
   195, 197, 199, 201, 203, 205, 207, 209, 211, 213, 215, 217, 219, 221, 223, 225,
   227, 229, 231, 233, 235, 237, 239, 241, 243, 245, 247, 249, 251, 253, 255, 257,
   259, 261, 263, 265, 267, 269, 271, 273, 275, 277, 279, 281, 283, 285, 287, 289,
   291, 293, 295, 297, 299 };
   Double_t Graph_from_VbbHcc_tagFirst_H_jetpt_JEC_fy1393[150] = { 79422.8, 666072.8, 283491.4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   Double_t Graph_from_VbbHcc_tagFirst_H_jetpt_JEC_fex1393[150] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1 };
   Double_t Graph_from_VbbHcc_tagFirst_H_jetpt_JEC_fey1393[150] = { 43797.74, 10882.96, 4729.003, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   TGraphErrors *gre = new TGraphErrors(150,Graph_from_VbbHcc_tagFirst_H_jetpt_JEC_fx1393,Graph_from_VbbHcc_tagFirst_H_jetpt_JEC_fy1393,Graph_from_VbbHcc_tagFirst_H_jetpt_JEC_fex1393,Graph_from_VbbHcc_tagFirst_H_jetpt_JEC_fey1393);
   gre->SetName("Graph_from_VbbHcc_tagFirst_H_jetpt_JEC");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1393 = new TH1F("Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1393","",150,0,330);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1393->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1393->SetMaximum(744651.4);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1393->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1393->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1393->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1393->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1393->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1393->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1393->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1393->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1393->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1393->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1393->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tagFirst_H_jetpt_JEC1393);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tagFirst_H_jetpt_JEC","Data (BTagCSV, 2017)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_jetpt_JEC_tagFirst_17->cd();
  
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
   
   TH1D *data_mc_ratio__394 = new TH1D("data_mc_ratio__394","",150,0,300);
   data_mc_ratio__394->SetBinContent(0,0.6122283);
   data_mc_ratio__394->SetBinContent(1,0.03140156);
   data_mc_ratio__394->SetBinContent(2,0.6292585);
   data_mc_ratio__394->SetBinContent(3,0.5317374);
   data_mc_ratio__394->SetBinError(0,0.007926795);
   data_mc_ratio__394->SetBinError(1,0.0006287862);
   data_mc_ratio__394->SetBinError(2,0.0009719718);
   data_mc_ratio__394->SetBinError(3,0.001369552);
   data_mc_ratio__394->SetMinimum(0.4);
   data_mc_ratio__394->SetMaximum(1.6);
   data_mc_ratio__394->SetEntries(2916.776);
   data_mc_ratio__394->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__394->SetLineColor(ci);
   data_mc_ratio__394->SetLineWidth(2);
   data_mc_ratio__394->SetMarkerStyle(20);
   data_mc_ratio__394->SetMarkerSize(1.2);
   data_mc_ratio__394->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   data_mc_ratio__394->GetXaxis()->SetRange(1,150);
   data_mc_ratio__394->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__394->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__394->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__394->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__394->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__394->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__394->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__394->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__394->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__394->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__394->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__394->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__394->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__394->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__394->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__394->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1394[150] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
   35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65,
   67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97,
   99, 101, 103, 105, 107, 109, 111, 113, 115, 117, 119, 121, 123, 125, 127, 129,
   131, 133, 135, 137, 139, 141, 143, 145, 147, 149, 151, 153, 155, 157, 159, 161,
   163, 165, 167, 169, 171, 173, 175, 177, 179, 181, 183, 185, 187, 189, 191, 193,
   195, 197, 199, 201, 203, 205, 207, 209, 211, 213, 215, 217, 219, 221, 223, 225,
   227, 229, 231, 233, 235, 237, 239, 241, 243, 245, 247, 249, 251, 253, 255, 257,
   259, 261, 263, 265, 267, 269, 271, 273, 275, 277, 279, 281, 283, 285, 287, 289,
   291, 293, 295, 297, 299 };
   Double_t Graph_from_mc_statistical_error_fy1394[150] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1394[150] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fey1394[150] = { 0.5514505, 0.01633899, 0.01668129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   gre = new TGraphErrors(150,Graph_from_mc_statistical_error_fx1394,Graph_from_mc_statistical_error_fy1394,Graph_from_mc_statistical_error_fex1394,Graph_from_mc_statistical_error_fey1394);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1394 = new TH1F("Graph_Graph_from_mc_statistical_error1394","",150,0,330);
   Graph_Graph_from_mc_statistical_error1394->SetMinimum(0.3382594);
   Graph_Graph_from_mc_statistical_error1394->SetMaximum(1.661741);
   Graph_Graph_from_mc_statistical_error1394->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1394->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1394->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1394->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1394->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1394->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1394->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1394->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1394->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1394->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1394->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1394);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_jetpt_JEC_tagFirst_17->cd();
   H_jetpt_JEC_tagFirst_17->Modified();
   H_jetpt_JEC_tagFirst_17->cd();
   H_jetpt_JEC_tagFirst_17->SetSelected(H_jetpt_JEC_tagFirst_17);
}
