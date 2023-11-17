#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algoFirst_17()
{
//=========Macro generated from canvas: Aplanarity_algoFirst_17/Aplanarity_algoFirst_17
//=========  (Tue Nov 14 11:28:15 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_algoFirst_17 = new TCanvas("Aplanarity_algoFirst_17", "Aplanarity_algoFirst_17",0,0,600,600);
   Aplanarity_algoFirst_17->SetHighLightColor(2);
   Aplanarity_algoFirst_17->Range(0,0,1,1);
   Aplanarity_algoFirst_17->SetFillColor(0);
   Aplanarity_algoFirst_17->SetFillStyle(4000);
   Aplanarity_algoFirst_17->SetBorderMode(0);
   Aplanarity_algoFirst_17->SetBorderSize(2);
   Aplanarity_algoFirst_17->SetFrameFillStyle(1000);
   Aplanarity_algoFirst_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-369.8669,1.052419,369507);
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
   st->SetMaximum(332519.3);
   
   TH1F *st_stack_40 = new TH1F("st_stack_40","",50,0,1);
   st_stack_40->SetMinimum(0.01);
   st_stack_40->SetMaximum(332519.3);
   st_stack_40->SetDirectory(nullptr);
   st_stack_40->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_40->SetLineColor(ci);
   st_stack_40->SetLineWidth(0);
   st_stack_40->GetXaxis()->SetRange(1,50);
   st_stack_40->GetXaxis()->SetLabelFont(42);
   st_stack_40->GetXaxis()->SetTitleOffset(1);
   st_stack_40->GetXaxis()->SetTitleFont(42);
   st_stack_40->GetYaxis()->SetTitle("Events/0.02");
   st_stack_40->GetYaxis()->SetLabelFont(42);
   st_stack_40->GetYaxis()->SetLabelSize(0.05);
   st_stack_40->GetYaxis()->SetTitleSize(0.057);
   st_stack_40->GetYaxis()->SetTitleOffset(1.2);
   st_stack_40->GetYaxis()->SetTitleFont(42);
   st_stack_40->GetZaxis()->SetLabelFont(42);
   st_stack_40->GetZaxis()->SetTitleOffset(1);
   st_stack_40->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_40);
   
   
   TH1D *VbbHcc_algoFirst_Aplanarity_stack_1 = new TH1D("VbbHcc_algoFirst_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinContent(1,135030.4);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinContent(2,15955.11);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinContent(3,3186.517);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinContent(4,356.89);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinContent(5,2880.957);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinContent(7,5.186735);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinError(1,4570.698);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinError(2,2057.453);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinError(3,839.1222);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinError(4,218.2733);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinError(5,2828.952);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinError(7,5.186735);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetEntries(13967);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algoFirst_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_algoFirst_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algoFirst_Aplanarity_stack_2 = new TH1D("VbbHcc_algoFirst_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(1,1019.833);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(2,130.2148);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(3,30.19859);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(4,5.2576);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(5,3.984525);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(6,0.4849696);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(7,0.8343106);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(8,0.02422115);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(9,0.03280898);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(10,-0.06244708);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(11,0.01778644);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(12,0.04237204);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(1,13.99453);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(2,4.742271);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(3,2.504809);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(4,0.8333926);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(5,1.491067);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(6,0.1895728);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(7,0.7143721);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(8,0.02422115);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(9,0.03280898);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(10,0.06244708);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(11,0.03327505);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(12,0.04237204);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetEntries(19516);

   ci = TColor::GetColor("#660066");
   VbbHcc_algoFirst_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_algoFirst_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_algoFirst_Aplanarity_stack_3 = new TH1D("VbbHcc_algoFirst_Aplanarity_stack_3","",50,0,1);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(1,11933.73);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(2,1606.017);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(3,352.2864);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(4,95.0469);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(5,29.89283);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(6,12.93597);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(7,5.73473);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(8,2.506658);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(9,1.553249);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(10,0.8217262);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(11,0.5336553);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(12,0.1876943);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(13,0.1011529);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(14,0.07112426);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(15,0.04770885);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(17,0.0796716);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(1,29.91066);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(2,10.859);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(3,5.086511);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(4,2.528648);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(5,1.392671);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(6,0.9933351);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(7,0.6236685);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(8,0.4108496);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(9,0.290115);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(10,0.2133786);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(11,0.1660642);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(12,0.08825634);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(13,0.05939521);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(14,0.05365426);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(15,0.04770885);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(17,0.06260302);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetEntries(264355);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algoFirst_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_algoFirst_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_algoFirst_Aplanarity_stack_4 = new TH1D("VbbHcc_algoFirst_Aplanarity_stack_4","",50,0,1);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinContent(1,1077.056);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinContent(2,97.05235);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinContent(3,18.49748);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinContent(4,6.634273);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinContent(5,0.5268402);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinContent(7,0.1530567);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinError(1,23.4127);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinError(2,6.743039);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinError(3,3.536361);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinError(4,3.167711);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinError(5,0.2084644);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinError(7,0.1157185);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetEntries(8145);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algoFirst_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_algoFirst_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_algoFirst_Aplanarity_stack_5 = new TH1D("VbbHcc_algoFirst_Aplanarity_stack_5","",50,0,1);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinContent(1,511.3446);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinContent(2,44.19076);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinContent(3,7.687728);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinContent(4,5.281337);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinContent(5,0.7361398);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinContent(7,0.06819958);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinError(1,19.95436);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinError(2,6.708265);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinError(3,1.980643);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinError(4,4.251595);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinError(5,0.7288549);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinError(7,0.06819958);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetEntries(3610);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algoFirst_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_algoFirst_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_algoFirst_Aplanarity_stack_6 = new TH1D("VbbHcc_algoFirst_Aplanarity_stack_6","",50,0,1);
   VbbHcc_algoFirst_Aplanarity_stack_6->SetBinContent(1,5.955351);
   VbbHcc_algoFirst_Aplanarity_stack_6->SetBinContent(2,0.2902361);
   VbbHcc_algoFirst_Aplanarity_stack_6->SetBinError(1,1.384099);
   VbbHcc_algoFirst_Aplanarity_stack_6->SetBinError(2,0.2902361);
   VbbHcc_algoFirst_Aplanarity_stack_6->SetEntries(22);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algoFirst_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_algoFirst_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_algoFirst_Aplanarity_stack_7 = new TH1D("VbbHcc_algoFirst_Aplanarity_stack_7","",50,0,1);
   VbbHcc_algoFirst_Aplanarity_stack_7->SetBinContent(1,24.39087);
   VbbHcc_algoFirst_Aplanarity_stack_7->SetBinContent(2,1.639421);
   VbbHcc_algoFirst_Aplanarity_stack_7->SetBinContent(3,0.1683068);
   VbbHcc_algoFirst_Aplanarity_stack_7->SetBinError(1,2.964984);
   VbbHcc_algoFirst_Aplanarity_stack_7->SetBinError(2,0.5603272);
   VbbHcc_algoFirst_Aplanarity_stack_7->SetBinError(3,0.1683068);
   VbbHcc_algoFirst_Aplanarity_stack_7->SetEntries(106);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algoFirst_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_algoFirst_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_algoFirst_Aplanarity_stack_8 = new TH1D("VbbHcc_algoFirst_Aplanarity_stack_8","",50,0,1);
   VbbHcc_algoFirst_Aplanarity_stack_8->SetBinContent(1,18.48074);
   VbbHcc_algoFirst_Aplanarity_stack_8->SetBinContent(2,0.651819);
   VbbHcc_algoFirst_Aplanarity_stack_8->SetBinContent(3,0.5761601);
   VbbHcc_algoFirst_Aplanarity_stack_8->SetBinError(1,3.476621);
   VbbHcc_algoFirst_Aplanarity_stack_8->SetBinError(2,0.4684678);
   VbbHcc_algoFirst_Aplanarity_stack_8->SetBinError(3,0.5761601);
   VbbHcc_algoFirst_Aplanarity_stack_8->SetEntries(40);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algoFirst_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_algoFirst_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_algoFirst_Aplanarity_stack_9 = new TH1D("VbbHcc_algoFirst_Aplanarity_stack_9","",50,0,1);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinContent(1,7.56457);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinContent(2,0.5582734);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinContent(3,0.1003738);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinContent(4,0.01620556);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinContent(5,0.00818939);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinContent(6,0.001752844);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinError(1,0.1261286);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinError(2,0.0331228);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinError(3,0.01478623);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinError(4,0.004995055);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinError(5,0.00460594);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinError(6,0.001752844);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetEntries(5585);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algoFirst_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_algoFirst_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_algoFirst_Aplanarity_stack_10 = new TH1D("VbbHcc_algoFirst_Aplanarity_stack_10","",50,0,1);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(1,4.52925);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(2,0.4492634);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(3,0.07455629);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(4,0.01629062);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(5,0.003848235);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(6,0.001494706);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(7,0.0008358323);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(8,0.0003137445);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(9,0.0003650784);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(1,0.03869727);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(2,0.01205431);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(3,0.004829453);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(4,0.00230108);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(5,0.001146894);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(6,0.0006384802);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(7,0.0004826675);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(8,0.0003137445);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(9,0.0003650784);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetEntries(16167);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algoFirst_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_algoFirst_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_algoFirst_Aplanarity_stack_11 = new TH1D("VbbHcc_algoFirst_Aplanarity_stack_11","",50,0,1);
   VbbHcc_algoFirst_Aplanarity_stack_11->SetBinContent(1,0.3213101);
   VbbHcc_algoFirst_Aplanarity_stack_11->SetBinContent(2,0.01561382);
   VbbHcc_algoFirst_Aplanarity_stack_11->SetBinContent(3,0.002137396);
   VbbHcc_algoFirst_Aplanarity_stack_11->SetBinContent(5,0.001268429);
   VbbHcc_algoFirst_Aplanarity_stack_11->SetBinError(1,0.02307339);
   VbbHcc_algoFirst_Aplanarity_stack_11->SetBinError(2,0.005297559);
   VbbHcc_algoFirst_Aplanarity_stack_11->SetBinError(3,0.001536819);
   VbbHcc_algoFirst_Aplanarity_stack_11->SetBinError(5,0.001268429);
   VbbHcc_algoFirst_Aplanarity_stack_11->SetEntries(279);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algoFirst_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_algoFirst_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_algoFirst_Aplanarity_stack_12 = new TH1D("VbbHcc_algoFirst_Aplanarity_stack_12","",50,0,1);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinContent(1,0.1208086);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinContent(2,0.01169986);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinContent(3,0.001858358);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinContent(4,0.0001012179);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinContent(7,0.0001783633);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinError(1,0.004778722);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinError(2,0.001501329);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinError(3,0.0005777182);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinError(4,0.0001012179);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinError(7,0.0001783633);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetEntries(816);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algoFirst_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_algoFirst_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algoFirst_Aplanarity__79 = new TH1D("VbbHcc_algoFirst_Aplanarity__79","",50,0,1);
   VbbHcc_algoFirst_Aplanarity__79->SetBinContent(1,22468);
   VbbHcc_algoFirst_Aplanarity__79->SetBinContent(2,2458);
   VbbHcc_algoFirst_Aplanarity__79->SetBinContent(3,519);
   VbbHcc_algoFirst_Aplanarity__79->SetBinContent(4,163);
   VbbHcc_algoFirst_Aplanarity__79->SetBinContent(5,37);
   VbbHcc_algoFirst_Aplanarity__79->SetBinContent(6,12);
   VbbHcc_algoFirst_Aplanarity__79->SetBinContent(7,1);
   VbbHcc_algoFirst_Aplanarity__79->SetBinContent(8,4);
   VbbHcc_algoFirst_Aplanarity__79->SetBinContent(9,2);
   VbbHcc_algoFirst_Aplanarity__79->SetBinContent(10,1);
   VbbHcc_algoFirst_Aplanarity__79->SetBinContent(11,1);
   VbbHcc_algoFirst_Aplanarity__79->SetEntries(25715);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Aplanarity__79->SetLineColor(ci);
   VbbHcc_algoFirst_Aplanarity__79->SetLineWidth(2);
   VbbHcc_algoFirst_Aplanarity__79->SetMarkerStyle(20);
   VbbHcc_algoFirst_Aplanarity__79->SetMarkerSize(1.2);
   VbbHcc_algoFirst_Aplanarity__79->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Aplanarity__79->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity__79->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity__79->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity__79->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity__79->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity__79->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity__79->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity__79->GetZaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity__79->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algoFirst_Aplanarity_fx1079[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VbbHcc_algoFirst_Aplanarity_fy1079[50] = { 149633.7, 17836.2, 3596.11, 469.1427, 2916.11, 13.42419, 11.97805, 2.531193, 1.586423, 0.7592791, 0.5514418, 0.2300664, 0.1011529, 0.07112426, 0.04770885, 0, 0.0796716,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VbbHcc_algoFirst_Aplanarity_fex1079[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VbbHcc_algoFirst_Aplanarity_fey1079[50] = { 4570.923, 2057.51, 839.1513, 218.3539, 2828.953, 1.011264, 5.274424, 0.411563, 0.2919645, 0.2223288, 0.1693651, 0.09790083, 0.05939521, 0.05365426, 0.04770885, 0, 0.06260302,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_algoFirst_Aplanarity_fx1079,Graph_from_VbbHcc_algoFirst_Aplanarity_fy1079,Graph_from_VbbHcc_algoFirst_Aplanarity_fex1079,Graph_from_VbbHcc_algoFirst_Aplanarity_fey1079);
   gre->SetName("Graph_from_VbbHcc_algoFirst_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1079 = new TH1F("Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1079","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1079->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1079->SetMaximum(169625.1);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1079->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1079->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1079->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1079->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1079->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1079->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1079->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1079->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1079->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1079->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1079->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1079);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algoFirst_Aplanarity","Data (BTagCSV, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algoFirst_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algoFirst_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_algoFirst_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
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
   
   TH1D *data_mc_ratio__80 = new TH1D("data_mc_ratio__80","",50,0,1);
   data_mc_ratio__80->SetBinContent(1,0.1501534);
   data_mc_ratio__80->SetBinContent(2,0.1378096);
   data_mc_ratio__80->SetBinContent(3,0.1443226);
   data_mc_ratio__80->SetBinContent(4,0.3474422);
   data_mc_ratio__80->SetBinContent(5,0.01268813);
   data_mc_ratio__80->SetBinContent(6,0.8939085);
   data_mc_ratio__80->SetBinContent(7,0.08348607);
   data_mc_ratio__80->SetBinContent(8,1.580283);
   data_mc_ratio__80->SetBinContent(9,1.260698);
   data_mc_ratio__80->SetBinContent(10,1.317039);
   data_mc_ratio__80->SetBinContent(11,1.813428);
   data_mc_ratio__80->SetBinError(1,0.001001735);
   data_mc_ratio__80->SetBinError(2,0.00277964);
   data_mc_ratio__80->SetBinError(3,0.006335059);
   data_mc_ratio__80->SetBinError(4,0.02721378);
   data_mc_ratio__80->SetBinError(5,0.002085916);
   data_mc_ratio__80->SetBinError(6,0.2580492);
   data_mc_ratio__80->SetBinError(7,0.08348607);
   data_mc_ratio__80->SetBinError(8,0.7901414);
   data_mc_ratio__80->SetBinError(9,0.8914479);
   data_mc_ratio__80->SetBinError(10,1.317039);
   data_mc_ratio__80->SetBinError(11,1.813428);
   data_mc_ratio__80->SetMinimum(0.4);
   data_mc_ratio__80->SetMaximum(1.6);
   data_mc_ratio__80->SetEntries(8.406275);
   data_mc_ratio__80->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__80->SetLineColor(ci);
   data_mc_ratio__80->SetLineWidth(2);
   data_mc_ratio__80->SetMarkerStyle(20);
   data_mc_ratio__80->SetMarkerSize(1.2);
   data_mc_ratio__80->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__80->GetXaxis()->SetRange(1,50);
   data_mc_ratio__80->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__80->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__80->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__80->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__80->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__80->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__80->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__80->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__80->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__80->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__80->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__80->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__80->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__80->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__80->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__80->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1080[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1080[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1080[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1080[50] = { 0.03054742, 0.1153558, 0.2333497, 0.4654318, 0.9701118, 0.0753315, 0.4403409, 0.1625965, 0.1840395, 0.2928156, 0.3071315, 0.425533, 0.5871827, 0.7543736, 1, 0, 0.7857633,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1080,Graph_from_mc_statistical_error_fy1080,Graph_from_mc_statistical_error_fex1080,Graph_from_mc_statistical_error_fey1080);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1080 = new TH1F("Graph_Graph_from_mc_statistical_error1080","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1080->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1080->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1080->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1080->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1080->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1080->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1080->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1080->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1080->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1080->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1080->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1080->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1080->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1080);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_algoFirst_17->cd();
   Aplanarity_algoFirst_17->Modified();
   Aplanarity_algoFirst_17->cd();
   Aplanarity_algoFirst_17->SetSelected(Aplanarity_algoFirst_17);
}
