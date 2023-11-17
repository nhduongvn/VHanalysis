#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_JEC_tagFirst_17()
{
//=========Macro generated from canvas: H_jetmass_JEC_tagFirst_17/H_jetmass_JEC_tagFirst_17
//=========  (Tue Nov 14 11:28:17 2023) by ROOT version 6.28/04
   TCanvas *H_jetmass_JEC_tagFirst_17 = new TCanvas("H_jetmass_JEC_tagFirst_17", "H_jetmass_JEC_tagFirst_17",0,0,600,600);
   H_jetmass_JEC_tagFirst_17->SetHighLightColor(2);
   H_jetmass_JEC_tagFirst_17->Range(0,0,1,1);
   H_jetmass_JEC_tagFirst_17->SetFillColor(0);
   H_jetmass_JEC_tagFirst_17->SetFillStyle(4000);
   H_jetmass_JEC_tagFirst_17->SetBorderMode(0);
   H_jetmass_JEC_tagFirst_17->SetBorderSize(2);
   H_jetmass_JEC_tagFirst_17->SetFrameFillStyle(1000);
   H_jetmass_JEC_tagFirst_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-2374.794,315.7258,2372429);
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
   st->SetMaximum(2134949);
   
   TH1F *st_stack_68 = new TH1F("st_stack_68","",150,0,300);
   st_stack_68->SetMinimum(0.01);
   st_stack_68->SetMaximum(2134949);
   st_stack_68->SetDirectory(nullptr);
   st_stack_68->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_68->SetLineColor(ci);
   st_stack_68->SetLineWidth(0);
   st_stack_68->GetXaxis()->SetRange(1,150);
   st_stack_68->GetXaxis()->SetLabelFont(42);
   st_stack_68->GetXaxis()->SetTitleOffset(1);
   st_stack_68->GetXaxis()->SetTitleFont(42);
   st_stack_68->GetYaxis()->SetTitle("Events/2.0");
   st_stack_68->GetYaxis()->SetLabelFont(42);
   st_stack_68->GetYaxis()->SetLabelSize(0.05);
   st_stack_68->GetYaxis()->SetTitleSize(0.057);
   st_stack_68->GetYaxis()->SetTitleOffset(1.2);
   st_stack_68->GetYaxis()->SetTitleFont(42);
   st_stack_68->GetZaxis()->SetLabelFont(42);
   st_stack_68->GetZaxis()->SetTitleOffset(1);
   st_stack_68->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_68);
   
   
   TH1D *VbbHcc_tagFirst_H_jetmass_JEC_stack_1 = new TH1D("VbbHcc_tagFirst_H_jetmass_JEC_stack_1","",150,0,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetBinContent(1,80528.24);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetBinContent(2,516425.9);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetBinContent(3,858651.2);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetBinContent(4,0.1807725);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetBinError(1,40737.92);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetBinError(2,12062.39);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetBinError(3,9290.819);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetBinError(4,0.1807725);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetEntries(171555);

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
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->SetBinContent(1,6.81065);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->SetBinContent(2,9657.581);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->SetBinContent(3,6083.747);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->SetBinError(1,1.150796);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->SetBinError(2,47.72931);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->SetBinError(3,35.69627);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->SetEntries(214700);

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
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->SetBinContent(1,8.195405);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->SetBinContent(2,204367.5);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->SetBinContent(3,84437.26);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->SetBinError(1,0.7873456);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->SetBinError(2,130.3023);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->SetBinError(3,83.14011);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->SetEntries(4978651);

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
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->SetBinContent(1,24.29087);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->SetBinContent(2,4976.613);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->SetBinContent(3,6933.968);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->SetBinError(1,8.190054);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->SetBinError(2,56.73061);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->SetBinError(3,42.19909);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->SetEntries(95533);

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
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->SetBinContent(1,32.87579);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->SetBinContent(2,1933.798);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->SetBinContent(3,4408.14);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->SetBinError(1,11.03229);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->SetBinError(2,58.94724);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->SetBinError(3,58.07891);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->SetEntries(45648);

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
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->SetBinContent(1,0.739492);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->SetBinContent(2,19.11257);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->SetBinContent(3,39.51096);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->SetBinError(1,0.43151);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->SetBinError(2,2.551336);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->SetBinError(3,3.864632);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->SetEntries(204);

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
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->SetBinContent(1,1.058918);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->SetBinContent(2,74.72903);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->SetBinContent(3,74.19268);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->SetBinError(1,0.4840218);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->SetBinError(2,4.781646);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->SetBinError(3,5.100795);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->SetEntries(620);

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
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->SetBinContent(2,69.31997);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->SetBinContent(3,58.13098);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->SetBinError(2,7.321982);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->SetBinError(3,6.427548);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->SetEntries(229);

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
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->SetBinContent(1,0.02869654);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->SetBinContent(2,40.94331);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->SetBinContent(3,23.05471);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->SetBinError(1,0.006865362);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->SetBinError(2,0.3105089);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->SetBinError(3,0.2315348);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->SetEntries(39482);

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
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->SetBinContent(1,0.003958897);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->SetBinContent(2,27.34265);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->SetBinContent(3,17.0527);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->SetBinError(1,0.001156653);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->SetBinError(2,0.09646676);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->SetBinError(3,0.07619058);
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
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->SetBinContent(2,1.11054);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->SetBinContent(3,0.3960378);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->SetBinError(2,0.04339513);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->SetBinError(3,0.02560785);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->SetEntries(1123);

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
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->SetBinContent(2,0.5280703);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->SetBinContent(3,0.2148355);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->SetBinError(2,0.01054366);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->SetBinError(3,0.006553486);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->SetEntries(4223);

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
   
   TH1D *VbbHcc_tagFirst_H_jetmass_JEC__135 = new TH1D("VbbHcc_tagFirst_H_jetmass_JEC__135","",150,0,300);
   VbbHcc_tagFirst_H_jetmass_JEC__135->SetBinContent(1,14);
   VbbHcc_tagFirst_H_jetmass_JEC__135->SetBinContent(2,214262);
   VbbHcc_tagFirst_H_jetmass_JEC__135->SetBinContent(3,267307);
   VbbHcc_tagFirst_H_jetmass_JEC__135->SetBinContent(151,23);
   VbbHcc_tagFirst_H_jetmass_JEC__135->SetEntries(481755);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetmass_JEC__135->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetmass_JEC__135->SetLineWidth(2);
   VbbHcc_tagFirst_H_jetmass_JEC__135->SetMarkerStyle(20);
   VbbHcc_tagFirst_H_jetmass_JEC__135->SetMarkerSize(1.2);
   VbbHcc_tagFirst_H_jetmass_JEC__135->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetmass_JEC__135->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC__135->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC__135->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC__135->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC__135->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC__135->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC__135->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC__135->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC__135->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tagFirst_H_jetmass_JEC_fx1135[150] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
   35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65,
   67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97,
   99, 101, 103, 105, 107, 109, 111, 113, 115, 117, 119, 121, 123, 125, 127, 129,
   131, 133, 135, 137, 139, 141, 143, 145, 147, 149, 151, 153, 155, 157, 159, 161,
   163, 165, 167, 169, 171, 173, 175, 177, 179, 181, 183, 185, 187, 189, 191, 193,
   195, 197, 199, 201, 203, 205, 207, 209, 211, 213, 215, 217, 219, 221, 223, 225,
   227, 229, 231, 233, 235, 237, 239, 241, 243, 245, 247, 249, 251, 253, 255, 257,
   259, 261, 263, 265, 267, 269, 271, 273, 275, 277, 279, 281, 283, 285, 287, 289,
   291, 293, 295, 297, 299 };
   Double_t Graph_from_VbbHcc_tagFirst_H_jetmass_JEC_fy1135[150] = { 80602.24, 737594.5, 960726.9, 0.1807725, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   Double_t Graph_from_VbbHcc_tagFirst_H_jetmass_JEC_fex1135[150] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1 };
   Double_t Graph_from_VbbHcc_tagFirst_H_jetmass_JEC_fey1135[150] = { 40737.92, 12063.47, 9291.541, 0.1807725, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   TGraphErrors *gre = new TGraphErrors(150,Graph_from_VbbHcc_tagFirst_H_jetmass_JEC_fx1135,Graph_from_VbbHcc_tagFirst_H_jetmass_JEC_fy1135,Graph_from_VbbHcc_tagFirst_H_jetmass_JEC_fex1135,Graph_from_VbbHcc_tagFirst_H_jetmass_JEC_fey1135);
   gre->SetName("Graph_from_VbbHcc_tagFirst_H_jetmass_JEC");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1135 = new TH1F("Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1135","",150,0,330);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1135->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1135->SetMaximum(1067020);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1135->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1135->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1135->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1135->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1135->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1135->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1135->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1135->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1135->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1135->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1135->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1135);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tagFirst_H_jetmass_JEC","Data (BTagCSV, 2017)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_jetmass_JEC_tagFirst_17->cd();
  
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
   
   TH1D *data_mc_ratio__136 = new TH1D("data_mc_ratio__136","",150,0,300);
   data_mc_ratio__136->SetBinContent(1,0.0001736924);
   data_mc_ratio__136->SetBinContent(2,0.2904875);
   data_mc_ratio__136->SetBinContent(3,0.2782341);
   data_mc_ratio__136->SetBinError(1,4.642126e-05);
   data_mc_ratio__136->SetBinError(2,0.0006275595);
   data_mc_ratio__136->SetBinError(3,0.0005381523);
   data_mc_ratio__136->SetMinimum(0.4);
   data_mc_ratio__136->SetMaximum(1.6);
   data_mc_ratio__136->SetEntries(10609.14);
   data_mc_ratio__136->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__136->SetLineColor(ci);
   data_mc_ratio__136->SetLineWidth(2);
   data_mc_ratio__136->SetMarkerStyle(20);
   data_mc_ratio__136->SetMarkerSize(1.2);
   data_mc_ratio__136->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   data_mc_ratio__136->GetXaxis()->SetRange(1,150);
   data_mc_ratio__136->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__136->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__136->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__136->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__136->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__136->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__136->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__136->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__136->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__136->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__136->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__136->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__136->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__136->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__136->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__136->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1136[150] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
   35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65,
   67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97,
   99, 101, 103, 105, 107, 109, 111, 113, 115, 117, 119, 121, 123, 125, 127, 129,
   131, 133, 135, 137, 139, 141, 143, 145, 147, 149, 151, 153, 155, 157, 159, 161,
   163, 165, 167, 169, 171, 173, 175, 177, 179, 181, 183, 185, 187, 189, 191, 193,
   195, 197, 199, 201, 203, 205, 207, 209, 211, 213, 215, 217, 219, 221, 223, 225,
   227, 229, 231, 233, 235, 237, 239, 241, 243, 245, 247, 249, 251, 253, 255, 257,
   259, 261, 263, 265, 267, 269, 271, 273, 275, 277, 279, 281, 283, 285, 287, 289,
   291, 293, 295, 297, 299 };
   Double_t Graph_from_mc_statistical_error_fy1136[150] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1136[150] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fey1136[150] = { 0.5054192, 0.01635515, 0.009671366, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   gre = new TGraphErrors(150,Graph_from_mc_statistical_error_fx1136,Graph_from_mc_statistical_error_fy1136,Graph_from_mc_statistical_error_fex1136,Graph_from_mc_statistical_error_fey1136);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1136 = new TH1F("Graph_Graph_from_mc_statistical_error1136","",150,0,330);
   Graph_Graph_from_mc_statistical_error1136->SetMinimum(9.992007e-17);
   Graph_Graph_from_mc_statistical_error1136->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1136->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1136->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1136->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1136->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1136->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1136->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1136->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1136->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1136->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1136->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1136->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1136);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_jetmass_JEC_tagFirst_17->cd();
   H_jetmass_JEC_tagFirst_17->Modified();
   H_jetmass_JEC_tagFirst_17->cd();
   H_jetmass_JEC_tagFirst_17->SetSelected(H_jetmass_JEC_tagFirst_17);
}
