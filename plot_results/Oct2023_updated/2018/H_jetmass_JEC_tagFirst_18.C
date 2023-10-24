#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_JEC_tagFirst_18()
{
//=========Macro generated from canvas: H_jetmass_JEC_tagFirst_18/H_jetmass_JEC_tagFirst_18
//=========  (Fri Oct 20 15:09:18 2023) by ROOT version 6.28/04
   TCanvas *H_jetmass_JEC_tagFirst_18 = new TCanvas("H_jetmass_JEC_tagFirst_18", "H_jetmass_JEC_tagFirst_18",0,0,600,600);
   H_jetmass_JEC_tagFirst_18->SetHighLightColor(2);
   H_jetmass_JEC_tagFirst_18->Range(0,0,1,1);
   H_jetmass_JEC_tagFirst_18->SetFillColor(0);
   H_jetmass_JEC_tagFirst_18->SetFillStyle(4000);
   H_jetmass_JEC_tagFirst_18->SetBorderMode(0);
   H_jetmass_JEC_tagFirst_18->SetBorderSize(2);
   H_jetmass_JEC_tagFirst_18->SetFrameFillStyle(1000);
   H_jetmass_JEC_tagFirst_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-4362.759,315.7258,4358406);
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
   st->SetMaximum(3922129);
   
   TH1F *st_stack_204 = new TH1F("st_stack_204","",150,0,300);
   st_stack_204->SetMinimum(0.01);
   st_stack_204->SetMaximum(3922129);
   st_stack_204->SetDirectory(nullptr);
   st_stack_204->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_204->SetLineColor(ci);
   st_stack_204->SetLineWidth(0);
   st_stack_204->GetXaxis()->SetRange(1,150);
   st_stack_204->GetXaxis()->SetLabelFont(42);
   st_stack_204->GetXaxis()->SetTitleOffset(1);
   st_stack_204->GetXaxis()->SetTitleFont(42);
   st_stack_204->GetYaxis()->SetTitle("Events/2.0");
   st_stack_204->GetYaxis()->SetLabelFont(42);
   st_stack_204->GetYaxis()->SetLabelSize(0.05);
   st_stack_204->GetYaxis()->SetTitleSize(0.057);
   st_stack_204->GetYaxis()->SetTitleOffset(1.2);
   st_stack_204->GetYaxis()->SetTitleFont(42);
   st_stack_204->GetZaxis()->SetLabelFont(42);
   st_stack_204->GetZaxis()->SetTitleOffset(1);
   st_stack_204->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_204);
   
   
   TH1D *VbbHcc_tagFirst_H_jetmass_JEC_stack_1 = new TH1D("VbbHcc_tagFirst_H_jetmass_JEC_stack_1","",150,0,300);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetBinContent(1,42943);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetBinContent(2,996712.9);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetBinContent(3,1432870);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetBinContent(4,0.2937123);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetBinError(1,23548.72);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetBinError(2,26646.3);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetBinError(3,21873.06);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetBinError(4,0.2937123);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_1->SetEntries(168645);

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
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->SetBinContent(1,10.77519);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->SetBinContent(2,17494.75);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->SetBinContent(3,12505.01);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->SetBinError(1,2.010318);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->SetBinError(2,90.06693);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->SetBinError(3,72.39739);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_2->SetEntries(236948);

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
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->SetBinContent(1,18.55831);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->SetBinContent(2,383988.9);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->SetBinContent(3,172159.7);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->SetBinError(1,1.54536);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->SetBinError(2,243.5241);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->SetBinError(3,163.2896);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_3->SetEntries(6056042);

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
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->SetBinContent(1,22.96857);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->SetBinContent(2,9274.64);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->SetBinContent(3,13102.74);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->SetBinError(1,10.31432);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->SetBinError(2,108.1751);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->SetBinError(3,89.00018);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_4->SetEntries(94472);

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
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->SetBinContent(1,40.96658);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->SetBinContent(2,3614.368);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->SetBinContent(3,8075.559);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->SetBinError(1,14.8566);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->SetBinError(2,139.0558);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->SetBinError(3,122.613);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_5->SetEntries(41442);

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
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->SetBinContent(1,1.702064);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->SetBinContent(2,32.85747);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->SetBinContent(3,59.91901);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->SetBinError(1,0.9978551);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->SetBinError(2,4.512978);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->SetBinError(3,7.330915);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_6->SetEntries(150);

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
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->SetBinContent(1,0.3342908);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->SetBinContent(2,134.951);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->SetBinContent(3,143.0779);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->SetBinError(1,0.3342908);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->SetBinError(2,10.11303);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->SetBinError(3,10.07023);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_7->SetEntries(523);

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
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->SetBinContent(1,0.5012018);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->SetBinContent(2,105.4661);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->SetBinContent(3,100.5786);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->SetBinError(1,0.4450863);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->SetBinError(2,7.001058);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->SetBinError(3,7.116482);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_8->SetEntries(548);

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
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->SetBinContent(1,0.02053983);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->SetBinContent(2,74.36525);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->SetBinContent(3,45.98582);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->SetBinError(1,0.00703737);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->SetBinError(2,0.6773124);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->SetBinError(3,0.4775913);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_9->SetEntries(37266);

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
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->SetBinContent(1,0.006432265);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->SetBinContent(2,44.4253);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->SetBinContent(3,27.70658);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->SetBinError(1,0.001879286);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->SetBinError(2,0.1567355);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_10->SetBinError(3,0.1237915);
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
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->SetBinContent(2,1.786106);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->SetBinContent(3,0.7409427);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->SetBinError(2,0.08508442);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->SetBinError(3,0.04854936);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_11->SetEntries(939);

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
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->SetBinContent(2,0.8959035);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->SetBinContent(3,0.3684905);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->SetBinError(2,0.01995347);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->SetBinError(3,0.01300662);
   VbbHcc_tagFirst_H_jetmass_JEC_stack_12->SetEntries(3484);

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
   
   TH1D *VbbHcc_tagFirst_H_jetmass_JEC__407 = new TH1D("VbbHcc_tagFirst_H_jetmass_JEC__407","",150,0,300);
   VbbHcc_tagFirst_H_jetmass_JEC__407->SetBinContent(1,32);
   VbbHcc_tagFirst_H_jetmass_JEC__407->SetBinContent(2,1313812);
   VbbHcc_tagFirst_H_jetmass_JEC__407->SetBinContent(3,1764958);
   VbbHcc_tagFirst_H_jetmass_JEC__407->SetBinContent(151,35);
   VbbHcc_tagFirst_H_jetmass_JEC__407->SetEntries(3078986);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_H_jetmass_JEC__407->SetLineColor(ci);
   VbbHcc_tagFirst_H_jetmass_JEC__407->SetLineWidth(2);
   VbbHcc_tagFirst_H_jetmass_JEC__407->SetMarkerStyle(20);
   VbbHcc_tagFirst_H_jetmass_JEC__407->SetMarkerSize(1.2);
   VbbHcc_tagFirst_H_jetmass_JEC__407->GetXaxis()->SetRange(1,300);
   VbbHcc_tagFirst_H_jetmass_JEC__407->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC__407->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC__407->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC__407->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC__407->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC__407->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC__407->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_jetmass_JEC__407->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_jetmass_JEC__407->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tagFirst_H_jetmass_JEC_fx1407[150] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
   35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65,
   67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97,
   99, 101, 103, 105, 107, 109, 111, 113, 115, 117, 119, 121, 123, 125, 127, 129,
   131, 133, 135, 137, 139, 141, 143, 145, 147, 149, 151, 153, 155, 157, 159, 161,
   163, 165, 167, 169, 171, 173, 175, 177, 179, 181, 183, 185, 187, 189, 191, 193,
   195, 197, 199, 201, 203, 205, 207, 209, 211, 213, 215, 217, 219, 221, 223, 225,
   227, 229, 231, 233, 235, 237, 239, 241, 243, 245, 247, 249, 251, 253, 255, 257,
   259, 261, 263, 265, 267, 269, 271, 273, 275, 277, 279, 281, 283, 285, 287, 289,
   291, 293, 295, 297, 299 };
   Double_t Graph_from_VbbHcc_tagFirst_H_jetmass_JEC_fy1407[150] = { 43038.83, 1411480, 1639092, 0.2937123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   Double_t Graph_from_VbbHcc_tagFirst_H_jetmass_JEC_fex1407[150] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1 };
   Double_t Graph_from_VbbHcc_tagFirst_H_jetmass_JEC_fey1407[150] = { 23548.73, 26648.15, 21874.32, 0.2937123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   TGraphErrors *gre = new TGraphErrors(150,Graph_from_VbbHcc_tagFirst_H_jetmass_JEC_fx1407,Graph_from_VbbHcc_tagFirst_H_jetmass_JEC_fy1407,Graph_from_VbbHcc_tagFirst_H_jetmass_JEC_fex1407,Graph_from_VbbHcc_tagFirst_H_jetmass_JEC_fey1407);
   gre->SetName("Graph_from_VbbHcc_tagFirst_H_jetmass_JEC");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1407 = new TH1F("Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1407","",150,0,330);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1407->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1407->SetMaximum(1827063);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1407->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1407->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1407->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1407->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1407->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1407->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1407->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1407->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1407->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1407->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1407->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tagFirst_H_jetmass_JEC1407);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tagFirst_H_jetmass_JEC","Data (JetHT, 2018)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_jetmass_JEC_tagFirst_18->cd();
  
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
   
   TH1D *data_mc_ratio__408 = new TH1D("data_mc_ratio__408","",150,0,300);
   data_mc_ratio__408->SetBinContent(1,0.0007435146);
   data_mc_ratio__408->SetBinContent(2,0.9308044);
   data_mc_ratio__408->SetBinContent(3,1.07679);
   data_mc_ratio__408->SetBinError(1,0.0001314361);
   data_mc_ratio__408->SetBinError(2,0.0008120669);
   data_mc_ratio__408->SetBinError(3,0.0008105204);
   data_mc_ratio__408->SetMinimum(0.4);
   data_mc_ratio__408->SetMaximum(1.6);
   data_mc_ratio__408->SetEntries(7804.331);
   data_mc_ratio__408->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__408->SetLineColor(ci);
   data_mc_ratio__408->SetLineWidth(2);
   data_mc_ratio__408->SetMarkerStyle(20);
   data_mc_ratio__408->SetMarkerSize(1.2);
   data_mc_ratio__408->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   data_mc_ratio__408->GetXaxis()->SetRange(1,150);
   data_mc_ratio__408->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__408->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__408->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__408->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__408->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__408->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__408->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__408->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__408->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__408->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__408->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__408->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__408->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__408->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__408->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__408->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1408[150] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
   35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65,
   67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97,
   99, 101, 103, 105, 107, 109, 111, 113, 115, 117, 119, 121, 123, 125, 127, 129,
   131, 133, 135, 137, 139, 141, 143, 145, 147, 149, 151, 153, 155, 157, 159, 161,
   163, 165, 167, 169, 171, 173, 175, 177, 179, 181, 183, 185, 187, 189, 191, 193,
   195, 197, 199, 201, 203, 205, 207, 209, 211, 213, 215, 217, 219, 221, 223, 225,
   227, 229, 231, 233, 235, 237, 239, 241, 243, 245, 247, 249, 251, 253, 255, 257,
   259, 261, 263, 265, 267, 269, 271, 273, 275, 277, 279, 281, 283, 285, 287, 289,
   291, 293, 295, 297, 299 };
   Double_t Graph_from_mc_statistical_error_fy1408[150] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1408[150] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fey1408[150] = { 0.5471508, 0.01887957, 0.01334539, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0 };
   gre = new TGraphErrors(150,Graph_from_mc_statistical_error_fx1408,Graph_from_mc_statistical_error_fy1408,Graph_from_mc_statistical_error_fex1408,Graph_from_mc_statistical_error_fey1408);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1408 = new TH1F("Graph_Graph_from_mc_statistical_error1408","",150,0,330);
   Graph_Graph_from_mc_statistical_error1408->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1408->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1408->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1408->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1408->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1408->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1408->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1408->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1408->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1408->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1408->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1408->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1408->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1408);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_jetmass_JEC_tagFirst_18->cd();
   H_jetmass_JEC_tagFirst_18->Modified();
   H_jetmass_JEC_tagFirst_18->cd();
   H_jetmass_JEC_tagFirst_18->SetSelected(H_jetmass_JEC_tagFirst_18);
}
