#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_DHZfirst_18()
{
//=========Macro generated from canvas: Aplanarity_DHZfirst_18/Aplanarity_DHZfirst_18
//=========  (Wed Feb 14 12:33:03 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_DHZfirst_18 = new TCanvas("Aplanarity_DHZfirst_18", "Aplanarity_DHZfirst_18",0,0,600,600);
   Aplanarity_DHZfirst_18->SetHighLightColor(2);
   Aplanarity_DHZfirst_18->Range(0,0,1,1);
   Aplanarity_DHZfirst_18->SetFillColor(0);
   Aplanarity_DHZfirst_18->SetFillStyle(4000);
   Aplanarity_DHZfirst_18->SetBorderMode(0);
   Aplanarity_DHZfirst_18->SetBorderSize(2);
   Aplanarity_DHZfirst_18->SetFrameFillStyle(1000);
   Aplanarity_DHZfirst_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-668.9873,1.052419,668328.3);
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
   st->SetMaximum(601428.5);
   
   TH1F *st_stack_120 = new TH1F("st_stack_120","",50,0,1);
   st_stack_120->SetMinimum(0.01);
   st_stack_120->SetMaximum(601428.5);
   st_stack_120->SetDirectory(nullptr);
   st_stack_120->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_120->SetLineColor(ci);
   st_stack_120->SetLineWidth(0);
   st_stack_120->GetXaxis()->SetRange(1,50);
   st_stack_120->GetXaxis()->SetLabelFont(42);
   st_stack_120->GetXaxis()->SetTitleOffset(1);
   st_stack_120->GetXaxis()->SetTitleFont(42);
   st_stack_120->GetYaxis()->SetTitle("Events/0.02");
   st_stack_120->GetYaxis()->SetLabelFont(42);
   st_stack_120->GetYaxis()->SetLabelSize(0.05);
   st_stack_120->GetYaxis()->SetTitleSize(0.057);
   st_stack_120->GetYaxis()->SetTitleOffset(1.2);
   st_stack_120->GetYaxis()->SetTitleFont(42);
   st_stack_120->GetZaxis()->SetLabelFont(42);
   st_stack_120->GetZaxis()->SetTitleOffset(1);
   st_stack_120->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_120);
   
   
   TH1D *VH_DHZfirst_Aplanarity_stack_1 = new TH1D("VH_DHZfirst_Aplanarity_stack_1","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(1,240196.9);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(2,31318.49);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(3,2285.751);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(4,763.2411);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(5,188.3296);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(6,32.02101);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(9,9.942087);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(14,3.24829);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(1,11841.03);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(2,5015.173);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(3,575.1933);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(4,515.0386);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(5,121.4975);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(6,16.24304);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(9,9.942087);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(14,3.24829);
   VH_DHZfirst_Aplanarity_stack_1->SetEntries(11050);

   ci = TColor::GetColor("#ff6600");
   VH_DHZfirst_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_1->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_1,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_2 = new TH1D("VH_DHZfirst_Aplanarity_stack_2","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(1,2343.29);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(2,311.837);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(3,60.12774);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(4,19.37676);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(5,4.677194);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(6,1.781139);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(7,0.3725774);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(8,0.1352307);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(10,0.1680865);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(1,31.1237);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(2,13.52483);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(3,4.506257);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(4,2.722651);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(5,1.136025);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(6,0.7488297);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(7,0.2381079);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(8,0.1352307);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(10,0.1680865);
   VH_DHZfirst_Aplanarity_stack_2->SetEntries(17934);

   ci = TColor::GetColor("#660066");
   VH_DHZfirst_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_2->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_2,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_3 = new TH1D("VH_DHZfirst_Aplanarity_stack_3","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(1,25201.02);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(2,3255.068);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(3,701.3962);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(4,196.7072);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(5,66.22229);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(6,27.86655);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(7,14.20908);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(8,3.870231);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(9,4.681975);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(10,2.044231);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(11,1.563798);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(12,0.6161066);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(13,0.103148);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(14,0.1110528);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(15,0.1561178);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(18,0.05498368);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(1,70.04808);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(2,23.62283);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(3,10.92456);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(4,5.816086);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(5,3.352047);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(6,2.199941);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(7,1.89948);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(8,0.8093972);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(9,1.61435);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(10,0.5655971);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(11,0.6626057);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(12,0.2575257);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(13,0.103148);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(14,0.1110528);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(15,0.09347901);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(18,0.05498368);
   VH_DHZfirst_Aplanarity_stack_3->SetEntries(261043);

   ci = TColor::GetColor("#cc00cc");
   VH_DHZfirst_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_3->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_3,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_4 = new TH1D("VH_DHZfirst_Aplanarity_stack_4","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(1,1895.309);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(2,210.0652);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(3,40.10868);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(4,6.414007);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(5,2.427087);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(6,1.629652);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(7,0.2444694);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(1,42.08437);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(2,18.37211);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(3,7.6039);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(4,2.140914);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(5,1.341656);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(6,1.629652);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(7,0.1735645);
   VH_DHZfirst_Aplanarity_stack_4->SetEntries(6129);

   ci = TColor::GetColor("#00cccc");
   VH_DHZfirst_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_4->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_4,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_5 = new TH1D("VH_DHZfirst_Aplanarity_stack_5","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(1,928.0435);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(2,94.45824);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(3,10.72876);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(4,4.181176);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(6,0.2318493);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(1,52.23055);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(2,16.82231);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(3,3.613132);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(4,2.022633);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(6,0.2318493);
   VH_DHZfirst_Aplanarity_stack_5->SetEntries(2676);

   ci = TColor::GetColor("#ff99cc");
   VH_DHZfirst_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_5->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_5,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_6 = new TH1D("VH_DHZfirst_Aplanarity_stack_6","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_6->SetBinContent(1,3.926643);
   VH_DHZfirst_Aplanarity_stack_6->SetBinContent(5,1.575423);
   VH_DHZfirst_Aplanarity_stack_6->SetBinError(1,1.651168);
   VH_DHZfirst_Aplanarity_stack_6->SetBinError(5,1.575423);
   VH_DHZfirst_Aplanarity_stack_6->SetEntries(7);

   ci = TColor::GetColor("#9933ff");
   VH_DHZfirst_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_6->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_6,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_7 = new TH1D("VH_DHZfirst_Aplanarity_stack_7","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_7->SetBinContent(1,32.41046);
   VH_DHZfirst_Aplanarity_stack_7->SetBinContent(2,1.396485);
   VH_DHZfirst_Aplanarity_stack_7->SetBinError(1,4.629158);
   VH_DHZfirst_Aplanarity_stack_7->SetBinError(2,1.00826);
   VH_DHZfirst_Aplanarity_stack_7->SetEntries(61);

   ci = TColor::GetColor("#3399ff");
   VH_DHZfirst_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_7->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_7,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_8 = new TH1D("VH_DHZfirst_Aplanarity_stack_8","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_8->SetBinContent(1,18.41047);
   VH_DHZfirst_Aplanarity_stack_8->SetBinContent(2,0.9398293);
   VH_DHZfirst_Aplanarity_stack_8->SetBinError(1,5.630529);
   VH_DHZfirst_Aplanarity_stack_8->SetBinError(2,0.9398293);
   VH_DHZfirst_Aplanarity_stack_8->SetEntries(13);

   ci = TColor::GetColor("#33ff99");
   VH_DHZfirst_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_8->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_8,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_9 = new TH1D("VH_DHZfirst_Aplanarity_stack_9","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(1,15.97415);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(2,0.9479119);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(3,0.1580298);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(4,0.009496423);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(1,0.4018072);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(2,0.06462873);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(3,0.02579259);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(4,0.005753339);
   VH_DHZfirst_Aplanarity_stack_9->SetEntries(4554);

   ci = TColor::GetColor("#cccc00");
   VH_DHZfirst_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_9->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_9,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_10 = new TH1D("VH_DHZfirst_Aplanarity_stack_10","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(1,6.965061);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(2,0.6605395);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(3,0.1253483);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(4,0.02292008);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(5,0.007317871);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(6,0.001137577);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(7,0.0008064044);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(8,0.000374332);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(1,0.05987894);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(2,0.01819582);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(3,0.007831466);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(4,0.003415364);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(5,0.001924303);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(6,0.0007029321);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(7,0.000590387);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(8,0.000374332);
   VH_DHZfirst_Aplanarity_stack_10->SetEntries(15848);

   ci = TColor::GetColor("#0000cc");
   VH_DHZfirst_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_10->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_10,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_11 = new TH1D("VH_DHZfirst_Aplanarity_stack_11","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_11->SetBinContent(1,0.4584685);
   VH_DHZfirst_Aplanarity_stack_11->SetBinContent(2,0.03784931);
   VH_DHZfirst_Aplanarity_stack_11->SetBinContent(3,0.002995392);
   VH_DHZfirst_Aplanarity_stack_11->SetBinError(1,0.04457145);
   VH_DHZfirst_Aplanarity_stack_11->SetBinError(2,0.01157729);
   VH_DHZfirst_Aplanarity_stack_11->SetBinError(3,0.002995392);
   VH_DHZfirst_Aplanarity_stack_11->SetEntries(172);

   ci = TColor::GetColor("#cc0000");
   VH_DHZfirst_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_11->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_11,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_12 = new TH1D("VH_DHZfirst_Aplanarity_stack_12","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(1,0.1685588);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(2,0.0124257);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(3,0.002317716);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(4,0.0003284004);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(8,0.0004298028);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(1,0.008992067);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(2,0.002340176);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(3,0.001062394);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(4,0.0003284004);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(8,0.0004298028);
   VH_DHZfirst_Aplanarity_stack_12->SetEntries(453);

   ci = TColor::GetColor("#00cc00");
   VH_DHZfirst_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_12->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_DHZfirst_Aplanarity__239 = new TH1D("VH_DHZfirst_Aplanarity__239","",50,0,1);
   VH_DHZfirst_Aplanarity__239->SetBinContent(1,227467);
   VH_DHZfirst_Aplanarity__239->SetBinContent(2,27987);
   VH_DHZfirst_Aplanarity__239->SetBinContent(3,5729);
   VH_DHZfirst_Aplanarity__239->SetBinContent(4,1360);
   VH_DHZfirst_Aplanarity__239->SetBinContent(5,343);
   VH_DHZfirst_Aplanarity__239->SetBinContent(6,119);
   VH_DHZfirst_Aplanarity__239->SetBinContent(7,33);
   VH_DHZfirst_Aplanarity__239->SetBinContent(8,22);
   VH_DHZfirst_Aplanarity__239->SetBinContent(9,8);
   VH_DHZfirst_Aplanarity__239->SetBinContent(10,2);
   VH_DHZfirst_Aplanarity__239->SetBinContent(11,2);
   VH_DHZfirst_Aplanarity__239->SetBinContent(12,2);
   VH_DHZfirst_Aplanarity__239->SetBinContent(13,2);
   VH_DHZfirst_Aplanarity__239->SetBinContent(14,2);
   VH_DHZfirst_Aplanarity__239->SetBinContent(15,1);
   VH_DHZfirst_Aplanarity__239->SetBinContent(16,1);
   VH_DHZfirst_Aplanarity__239->SetEntries(263129);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__239->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__239->SetLineWidth(2);
   VH_DHZfirst_Aplanarity__239->SetMarkerStyle(20);
   VH_DHZfirst_Aplanarity__239->SetMarkerSize(1.2);
   VH_DHZfirst_Aplanarity__239->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity__239->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__239->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__239->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__239->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__239->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__239->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__239->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__239->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__239->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fx1239[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fy1239[50] = { 270642.8, 35193.91, 3098.401, 989.953, 263.2389, 63.53135, 14.82693, 4.006266, 14.62406, 2.212317, 1.563798, 0.6161066, 0.103148, 3.359343, 0.1561178, 0, 0,
   0.05498368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fex1239[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fey1239[50] = { 11841.47, 5015.309, 575.3763, 515.087, 121.5666, 16.4908, 1.922198, 0.8206165, 10.0723, 0.590045, 0.6626057, 0.2575257, 0.103148, 3.250188, 0.09347901, 0, 0,
   0.05498368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VH_DHZfirst_Aplanarity_fx1239,Graph_from_VH_DHZfirst_Aplanarity_fy1239,Graph_from_VH_DHZfirst_Aplanarity_fex1239,Graph_from_VH_DHZfirst_Aplanarity_fey1239);
   gre->SetName("Graph_from_VH_DHZfirst_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_Aplanarity1239 = new TH1F("Graph_Graph_from_VH_DHZfirst_Aplanarity1239","",100,0,1.1);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1239->SetMinimum(-28248.43);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1239->SetMaximum(310732.7);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1239->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1239->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_Aplanarity1239->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1239->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1239->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1239->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1239->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1239->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1239->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1239->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1239->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_Aplanarity1239);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_Aplanarity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_DHZfirst_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_DHZfirst_18->cd();
  
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
   
   TH1D *data_mc_ratio__240 = new TH1D("data_mc_ratio__240","",50,0,1);
   data_mc_ratio__240->SetBinContent(1,0.8404693);
   data_mc_ratio__240->SetBinContent(2,0.7952227);
   data_mc_ratio__240->SetBinContent(3,1.849018);
   data_mc_ratio__240->SetBinContent(4,1.373803);
   data_mc_ratio__240->SetBinContent(5,1.302999);
   data_mc_ratio__240->SetBinContent(6,1.873091);
   data_mc_ratio__240->SetBinContent(7,2.225679);
   data_mc_ratio__240->SetBinContent(8,5.491398);
   data_mc_ratio__240->SetBinContent(9,0.5470437);
   data_mc_ratio__240->SetBinContent(10,0.9040294);
   data_mc_ratio__240->SetBinContent(11,1.278937);
   data_mc_ratio__240->SetBinContent(12,3.246191);
   data_mc_ratio__240->SetBinContent(13,19.38961);
   data_mc_ratio__240->SetBinContent(14,0.5953545);
   data_mc_ratio__240->SetBinContent(15,6.405419);
   data_mc_ratio__240->SetBinError(1,0.00176223);
   data_mc_ratio__240->SetBinError(2,0.004753468);
   data_mc_ratio__240->SetBinError(3,0.02442878);
   data_mc_ratio__240->SetBinError(4,0.03725245);
   data_mc_ratio__240->SetBinError(5,0.07035532);
   data_mc_ratio__240->SetBinError(6,0.171706);
   data_mc_ratio__240->SetBinError(7,0.387441);
   data_mc_ratio__240->SetBinError(8,1.17077);
   data_mc_ratio__240->SetBinError(9,0.1934091);
   data_mc_ratio__240->SetBinError(10,0.6392453);
   data_mc_ratio__240->SetBinError(11,0.9043452);
   data_mc_ratio__240->SetBinError(12,2.295404);
   data_mc_ratio__240->SetBinError(13,13.71053);
   data_mc_ratio__240->SetBinError(14,0.4209792);
   data_mc_ratio__240->SetBinError(15,6.405419);
   data_mc_ratio__240->SetMinimum(0.4);
   data_mc_ratio__240->SetMaximum(1.6);
   data_mc_ratio__240->SetEntries(3.656618);
   data_mc_ratio__240->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__240->SetLineColor(ci);
   data_mc_ratio__240->SetLineWidth(2);
   data_mc_ratio__240->SetMarkerStyle(20);
   data_mc_ratio__240->SetMarkerSize(1.2);
   data_mc_ratio__240->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__240->GetXaxis()->SetRange(1,50);
   data_mc_ratio__240->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__240->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__240->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__240->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__240->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__240->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__240->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__240->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__240->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__240->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__240->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__240->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__240->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__240->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__240->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__240->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1240[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1240[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1240[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1240[50] = { 0.04375312, 0.142505, 0.185701, 0.5203146, 0.461811, 0.2595695, 0.1296423, 0.2048333, 0.6887484, 0.266709, 0.4237155, 0.4179888, 1, 0.967507, 0.5987723, 0, 0,
   1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1240,Graph_from_mc_statistical_error_fy1240,Graph_from_mc_statistical_error_fex1240,Graph_from_mc_statistical_error_fey1240);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1240 = new TH1F("Graph_Graph_from_mc_statistical_error1240","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1240->SetMinimum(-0.2);
   Graph_Graph_from_mc_statistical_error1240->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1240->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1240->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1240->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1240->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1240->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1240->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1240);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_DHZfirst_18->cd();
   Aplanarity_DHZfirst_18->Modified();
   Aplanarity_DHZfirst_18->cd();
   Aplanarity_DHZfirst_18->SetSelected(Aplanarity_DHZfirst_18);
}
