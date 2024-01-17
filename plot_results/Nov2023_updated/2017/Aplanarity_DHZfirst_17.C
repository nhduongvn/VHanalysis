#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_DHZfirst_17()
{
//=========Macro generated from canvas: Aplanarity_DHZfirst_17/Aplanarity_DHZfirst_17
//=========  (Wed Jan 10 10:25:26 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_DHZfirst_17 = new TCanvas("Aplanarity_DHZfirst_17", "Aplanarity_DHZfirst_17",0,0,600,600);
   Aplanarity_DHZfirst_17->SetHighLightColor(2);
   Aplanarity_DHZfirst_17->Range(0,0,1,1);
   Aplanarity_DHZfirst_17->SetFillColor(0);
   Aplanarity_DHZfirst_17->SetFillStyle(4000);
   Aplanarity_DHZfirst_17->SetBorderMode(0);
   Aplanarity_DHZfirst_17->SetBorderSize(2);
   Aplanarity_DHZfirst_17->SetFrameFillStyle(1000);
   Aplanarity_DHZfirst_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-400.4248,1.052419,400034.3);
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
   st->SetMaximum(359990.9);
   
   TH1F *st_stack_119 = new TH1F("st_stack_119","",50,0,1);
   st_stack_119->SetMinimum(0.01);
   st_stack_119->SetMaximum(359990.9);
   st_stack_119->SetDirectory(nullptr);
   st_stack_119->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_119->SetLineColor(ci);
   st_stack_119->SetLineWidth(0);
   st_stack_119->GetXaxis()->SetRange(1,50);
   st_stack_119->GetXaxis()->SetLabelFont(42);
   st_stack_119->GetXaxis()->SetTitleOffset(1);
   st_stack_119->GetXaxis()->SetTitleFont(42);
   st_stack_119->GetYaxis()->SetTitle("Events/0.02");
   st_stack_119->GetYaxis()->SetLabelFont(42);
   st_stack_119->GetYaxis()->SetLabelSize(0.05);
   st_stack_119->GetYaxis()->SetTitleSize(0.057);
   st_stack_119->GetYaxis()->SetTitleOffset(1.2);
   st_stack_119->GetYaxis()->SetTitleFont(42);
   st_stack_119->GetZaxis()->SetLabelFont(42);
   st_stack_119->GetZaxis()->SetTitleOffset(1);
   st_stack_119->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_119);
   
   
   TH1D *VH_DHZfirst_Aplanarity_stack_1 = new TH1D("VH_DHZfirst_Aplanarity_stack_1","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(1,147544.8);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(2,14852.36);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(3,2593.881);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(4,867.8849);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(5,1696.149);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(6,48.61004);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(9,6.089272);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(14,2.053529);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(1,17319.08);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(2,2063.247);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(3,695.7735);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(4,421.3153);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(5,1362.92);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(6,26.65289);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(9,6.089272);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(14,2.053529);
   VH_DHZfirst_Aplanarity_stack_1->SetEntries(11554);

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
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(1,1105.927);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(2,157.6163);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(3,33.83993);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(4,8.643448);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(5,2.379116);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(6,1.855505);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(7,0.290816);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(8,0.1628673);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(9,0.04534209);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(12,0.01205559);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(1,13.02408);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(2,4.927412);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(3,2.363741);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(4,1.172971);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(5,0.609997);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(6,0.591199);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(7,0.113267);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(8,0.07939642);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(9,0.03590772);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(12,0.01205559);
   VH_DHZfirst_Aplanarity_stack_2->SetEntries(18430);

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
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(1,11938.63);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(2,1655.757);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(3,356.5986);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(4,101.1767);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(5,34.56879);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(6,11.8471);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(7,5.333571);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(8,2.353147);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(9,1.115558);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(10,1.432601);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(11,0.1681052);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(12,0.1156144);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(13,0.2142556);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(15,0.1067298);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(17,0.07535639);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(1,27.59543);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(2,10.24252);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(3,4.70388);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(4,2.477621);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(5,1.436057);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(6,0.8361059);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(7,0.5635233);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(8,0.3422767);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(9,0.2413828);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(10,0.2900233);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(11,0.0782465);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(12,0.05928425);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(13,0.1112155);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(15,0.07668574);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(17,0.05808763);
   VH_DHZfirst_Aplanarity_stack_3->SetEntries(243528);

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
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(1,886.6703);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(2,88.37988);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(3,16.33813);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(4,2.030011);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(5,1.660948);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(6,0.8362184);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(7,0.1216728);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(1,22.72878);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(2,8.213392);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(3,4.458319);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(4,0.6500496);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(5,0.6836378);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(6,0.5232599);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(7,0.1216728);
   VH_DHZfirst_Aplanarity_stack_4->SetEntries(6202);

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
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(1,470.3733);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(2,44.43789);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(3,6.181073);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(4,1.118595);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(5,0.2281658);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(7,0.09380448);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(1,24.16392);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(2,5.789977);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(3,2.369132);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(4,0.6672915);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(5,0.1643107);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(7,0.09380448);
   VH_DHZfirst_Aplanarity_stack_5->SetEntries(2973);

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
   VH_DHZfirst_Aplanarity_stack_6->SetBinContent(1,5.520832);
   VH_DHZfirst_Aplanarity_stack_6->SetBinContent(2,0.4079568);
   VH_DHZfirst_Aplanarity_stack_6->SetBinError(1,1.342155);
   VH_DHZfirst_Aplanarity_stack_6->SetBinError(2,0.4079568);
   VH_DHZfirst_Aplanarity_stack_6->SetEntries(19);

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
   VH_DHZfirst_Aplanarity_stack_7->SetBinContent(1,16.32809);
   VH_DHZfirst_Aplanarity_stack_7->SetBinContent(2,2.105115);
   VH_DHZfirst_Aplanarity_stack_7->SetBinError(1,2.079123);
   VH_DHZfirst_Aplanarity_stack_7->SetBinError(2,0.7683212);
   VH_DHZfirst_Aplanarity_stack_7->SetEntries(72);

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
   VH_DHZfirst_Aplanarity_stack_8->SetBinContent(1,14.03969);
   VH_DHZfirst_Aplanarity_stack_8->SetBinContent(2,0.813829);
   VH_DHZfirst_Aplanarity_stack_8->SetBinContent(3,0.2834953);
   VH_DHZfirst_Aplanarity_stack_8->SetBinError(1,1.936268);
   VH_DHZfirst_Aplanarity_stack_8->SetBinError(2,0.4709395);
   VH_DHZfirst_Aplanarity_stack_8->SetBinError(3,0.2834953);
   VH_DHZfirst_Aplanarity_stack_8->SetEntries(58);

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
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(1,7.811588);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(2,0.5712713);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(3,0.08483278);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(4,0.008950292);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(5,0.002851975);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(1,0.1103549);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(2,0.02992239);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(3,0.01135024);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(4,0.003546331);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(5,0.002034895);
   VH_DHZfirst_Aplanarity_stack_9->SetEntries(5676);

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
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(1,5.442515);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(2,0.5347804);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(3,0.1035756);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(4,0.01918477);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(5,0.00605325);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(6,0.001112636);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(7,0.0007084898);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(8,0.000459518);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(1,0.04968543);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(2,0.01557649);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(3,0.006842009);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(4,0.002922265);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(5,0.001681377);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(6,0.0006853558);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(7,0.000514349);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(8,0.000459518);
   VH_DHZfirst_Aplanarity_stack_10->SetEntries(13704);

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
   VH_DHZfirst_Aplanarity_stack_11->SetBinContent(1,0.2770028);
   VH_DHZfirst_Aplanarity_stack_11->SetBinContent(2,0.0145153);
   VH_DHZfirst_Aplanarity_stack_11->SetBinContent(3,0.001864516);
   VH_DHZfirst_Aplanarity_stack_11->SetBinError(1,0.02061561);
   VH_DHZfirst_Aplanarity_stack_11->SetBinError(2,0.004664645);
   VH_DHZfirst_Aplanarity_stack_11->SetBinError(3,0.001864516);
   VH_DHZfirst_Aplanarity_stack_11->SetEntries(199);

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
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(1,0.1027717);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(2,0.01001229);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(3,0.0006392312);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(5,0.0001976624);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(1,0.004685199);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(2,0.001427258);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(3,0.0003789392);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(5,0.0001976624);
   VH_DHZfirst_Aplanarity_stack_12->SetEntries(559);

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
   
   TH1D *VH_DHZfirst_Aplanarity__237 = new TH1D("VH_DHZfirst_Aplanarity__237","",50,0,1);
   VH_DHZfirst_Aplanarity__237->SetBinContent(1,104180);
   VH_DHZfirst_Aplanarity__237->SetBinContent(2,13059);
   VH_DHZfirst_Aplanarity__237->SetBinContent(3,2674);
   VH_DHZfirst_Aplanarity__237->SetBinContent(4,613);
   VH_DHZfirst_Aplanarity__237->SetBinContent(5,167);
   VH_DHZfirst_Aplanarity__237->SetBinContent(6,54);
   VH_DHZfirst_Aplanarity__237->SetBinContent(7,18);
   VH_DHZfirst_Aplanarity__237->SetBinContent(8,6);
   VH_DHZfirst_Aplanarity__237->SetBinContent(9,3);
   VH_DHZfirst_Aplanarity__237->SetBinContent(10,1);
   VH_DHZfirst_Aplanarity__237->SetBinContent(12,1);
   VH_DHZfirst_Aplanarity__237->SetBinContent(14,1);
   VH_DHZfirst_Aplanarity__237->SetBinContent(15,1);
   VH_DHZfirst_Aplanarity__237->SetEntries(120827);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__237->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__237->SetLineWidth(2);
   VH_DHZfirst_Aplanarity__237->SetMarkerStyle(20);
   VH_DHZfirst_Aplanarity__237->SetMarkerSize(1.2);
   VH_DHZfirst_Aplanarity__237->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity__237->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__237->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__237->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__237->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__237->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__237->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__237->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__237->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__237->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fx1237[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fy1237[50] = { 161995.9, 16803.01, 3007.313, 980.8818, 1734.995, 63.14998, 5.840573, 2.516474, 7.250172, 1.432601, 0.1681052, 0.12767, 0.2142556, 2.053529, 0.1067298, 0, 0.07535639,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fex1237[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fey1237[50] = { 17319.14, 2063.303, 695.8118, 421.3253, 1362.922, 26.67769, 0.594972, 0.351365, 6.09416, 0.2900233, 0.0782465, 0.0604976, 0.1112155, 2.053529, 0.07668574, 0, 0.05808763,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VH_DHZfirst_Aplanarity_fx1237,Graph_from_VH_DHZfirst_Aplanarity_fy1237,Graph_from_VH_DHZfirst_Aplanarity_fex1237,Graph_from_VH_DHZfirst_Aplanarity_fey1237);
   gre->SetName("Graph_from_VH_DHZfirst_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_Aplanarity1237 = new TH1F("Graph_Graph_from_VH_DHZfirst_Aplanarity1237","",100,0,1.1);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->SetMinimum(0);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->SetMaximum(197246.5);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_Aplanarity1237);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_Aplanarity","Data (BTagCSV, 2017)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_DHZfirst_17->cd();
  
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
   
   TH1D *data_mc_ratio__238 = new TH1D("data_mc_ratio__238","",50,0,1);
   data_mc_ratio__238->SetBinContent(1,0.6431027);
   data_mc_ratio__238->SetBinContent(2,0.777182);
   data_mc_ratio__238->SetBinContent(3,0.8891658);
   data_mc_ratio__238->SetBinContent(4,0.6249479);
   data_mc_ratio__238->SetBinContent(5,0.09625387);
   data_mc_ratio__238->SetBinContent(6,0.8551072);
   data_mc_ratio__238->SetBinContent(7,3.081889);
   data_mc_ratio__238->SetBinContent(8,2.384288);
   data_mc_ratio__238->SetBinContent(9,0.4137833);
   data_mc_ratio__238->SetBinContent(10,0.6980313);
   data_mc_ratio__238->SetBinContent(12,7.832692);
   data_mc_ratio__238->SetBinContent(14,0.4869666);
   data_mc_ratio__238->SetBinContent(15,9.369453);
   data_mc_ratio__238->SetBinError(1,0.001992453);
   data_mc_ratio__238->SetBinError(2,0.006800922);
   data_mc_ratio__238->SetBinError(3,0.01719499);
   data_mc_ratio__238->SetBinError(4,0.02524141);
   data_mc_ratio__238->SetBinError(5,0.007448348);
   data_mc_ratio__238->SetBinError(6,0.1163654);
   data_mc_ratio__238->SetBinError(7,0.7264083);
   data_mc_ratio__238->SetBinError(8,0.9733816);
   data_mc_ratio__238->SetBinError(9,0.2388979);
   data_mc_ratio__238->SetBinError(10,0.6980313);
   data_mc_ratio__238->SetBinError(12,7.832692);
   data_mc_ratio__238->SetBinError(14,0.4869666);
   data_mc_ratio__238->SetBinError(15,9.369453);
   data_mc_ratio__238->SetMinimum(0.4);
   data_mc_ratio__238->SetMaximum(1.6);
   data_mc_ratio__238->SetEntries(3.749988);
   data_mc_ratio__238->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__238->SetLineColor(ci);
   data_mc_ratio__238->SetLineWidth(2);
   data_mc_ratio__238->SetMarkerStyle(20);
   data_mc_ratio__238->SetMarkerSize(1.2);
   data_mc_ratio__238->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__238->GetXaxis()->SetRange(1,50);
   data_mc_ratio__238->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__238->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__238->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__238->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__238->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__238->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__238->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__238->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__238->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__238->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__238->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__238->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__238->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__238->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__238->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__238->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1238[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1238[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1238[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1238[50] = { 0.106911, 0.1227936, 0.2313732, 0.4295373, 0.7855478, 0.4224497, 0.1018688, 0.1396259, 0.8405539, 0.2024453, 0.4654615, 0.4738591, 0.5190788, 1, 0.7185035, 0, 0.7708388,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1238,Graph_from_mc_statistical_error_fy1238,Graph_from_mc_statistical_error_fex1238,Graph_from_mc_statistical_error_fey1238);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1238 = new TH1F("Graph_Graph_from_mc_statistical_error1238","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1238->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1238->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1238->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1238->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1238->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1238->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1238->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1238->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1238->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1238->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1238->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1238->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1238->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1238);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_DHZfirst_17->cd();
   Aplanarity_DHZfirst_17->Modified();
   Aplanarity_DHZfirst_17->cd();
   Aplanarity_DHZfirst_17->SetSelected(Aplanarity_DHZfirst_17);
}
