#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algoFirst_18()
{
//=========Macro generated from canvas: Aplanarity_algoFirst_18/Aplanarity_algoFirst_18
//=========  (Tue Oct 17 10:19:57 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_algoFirst_18 = new TCanvas("Aplanarity_algoFirst_18", "Aplanarity_algoFirst_18",0,0,600,600);
   Aplanarity_algoFirst_18->SetHighLightColor(2);
   Aplanarity_algoFirst_18->Range(0,0,1,1);
   Aplanarity_algoFirst_18->SetFillColor(0);
   Aplanarity_algoFirst_18->SetFillStyle(4000);
   Aplanarity_algoFirst_18->SetBorderMode(0);
   Aplanarity_algoFirst_18->SetBorderSize(2);
   Aplanarity_algoFirst_18->SetFrameFillStyle(1000);
   Aplanarity_algoFirst_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-670.602,1.052419,669941.3);
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
   st->SetMaximum(602880.1);
   
   TH1F *st_stack_120 = new TH1F("st_stack_120","",50,0,1);
   st_stack_120->SetMinimum(0.01);
   st_stack_120->SetMaximum(602880.1);
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
   
   
   TH1D *VbbHcc_algoFirst_Aplanarity_stack_1 = new TH1D("VbbHcc_algoFirst_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinContent(1,242163.6);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinContent(2,24337.9);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinContent(3,3348.12);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinContent(4,1002.545);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinContent(5,107.9696);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinError(1,11379.6);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinError(2,3787.1);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinError(3,780.4291);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinError(4,470.2998);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinError(5,55.28627);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetEntries(13739);

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
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(1,2071.516);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(2,255.1405);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(3,52.72739);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(4,16.01172);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(5,2.773483);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(6,1.270254);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(7,0.4566276);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(9,0.0809904);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(11,0.05765806);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(1,29.41228);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(2,9.385276);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(3,4.142517);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(4,2.335108);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(5,0.730848);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(6,0.7330407);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(7,0.4669491);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(9,0.0809904);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(11,0.05765806);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetEntries(22101);

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
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(1,23726.75);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(2,3178.386);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(3,695.3724);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(4,190.4729);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(5,62.79232);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(6,24.7272);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(7,12.80674);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(8,4.942272);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(9,3.028161);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(10,1.955416);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(11,1.261157);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(12,0.6763552);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(13,0.3575765);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(14,0.375068);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(15,0.03253225);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(18,0.03246303);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(1,59.78297);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(2,21.28344);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(3,9.964274);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(4,5.533294);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(5,2.924808);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(6,1.851789);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(7,1.406303);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(8,0.7596639);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(9,0.6491737);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(10,0.6321663);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(11,0.5648972);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(12,0.2635753);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(13,0.2636396);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(14,0.3141857);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(15,0.03253225);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(18,0.03246303);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetEntries(317249);

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
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinContent(1,2089.83);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinContent(2,209.6904);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinContent(3,34.55009);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinContent(4,5.919222);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinContent(5,1.392108);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinContent(6,0.2901545);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinContent(17,0.01785026);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinError(1,46.3073);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinError(2,14.17873);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinError(3,4.98748);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinError(4,1.90553);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinError(5,0.9753483);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinError(6,0.2072917);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinError(17,0.01785026);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetEntries(8285);

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
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinContent(1,1141.492);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinContent(2,86.59101);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinContent(3,15.4861);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinContent(4,20.57847);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinContent(5,0.08536282);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinError(1,72.13065);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinError(2,14.59316);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinError(3,5.191679);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinError(4,15.82484);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinError(5,0.08536282);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetEntries(3466);

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
   VbbHcc_algoFirst_Aplanarity_stack_6->SetBinContent(1,3.340319);
   VbbHcc_algoFirst_Aplanarity_stack_6->SetBinContent(3,0.3956759);
   VbbHcc_algoFirst_Aplanarity_stack_6->SetBinError(1,1.296352);
   VbbHcc_algoFirst_Aplanarity_stack_6->SetBinError(3,0.3956759);
   VbbHcc_algoFirst_Aplanarity_stack_6->SetEntries(8);

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
   VbbHcc_algoFirst_Aplanarity_stack_7->SetBinContent(1,44.14777);
   VbbHcc_algoFirst_Aplanarity_stack_7->SetBinContent(2,2.438655);
   VbbHcc_algoFirst_Aplanarity_stack_7->SetBinContent(4,2.745655);
   VbbHcc_algoFirst_Aplanarity_stack_7->SetBinError(1,5.255588);
   VbbHcc_algoFirst_Aplanarity_stack_7->SetBinError(2,1.243842);
   VbbHcc_algoFirst_Aplanarity_stack_7->SetBinError(4,2.745655);
   VbbHcc_algoFirst_Aplanarity_stack_7->SetEntries(92);

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
   VbbHcc_algoFirst_Aplanarity_stack_8->SetBinContent(1,32.20969);
   VbbHcc_algoFirst_Aplanarity_stack_8->SetBinContent(2,2.951197);
   VbbHcc_algoFirst_Aplanarity_stack_8->SetBinContent(3,0.4178643);
   VbbHcc_algoFirst_Aplanarity_stack_8->SetBinError(1,3.62561);
   VbbHcc_algoFirst_Aplanarity_stack_8->SetBinError(2,1.371775);
   VbbHcc_algoFirst_Aplanarity_stack_8->SetBinError(3,0.4178643);
   VbbHcc_algoFirst_Aplanarity_stack_8->SetEntries(99);

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
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinContent(1,15.00773);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinContent(2,1.061686);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinContent(3,0.1675187);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinContent(4,0.02441184);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinContent(6,0.01113313);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinError(1,0.340458);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinError(2,0.06657882);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinError(3,0.03220502);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinError(4,0.009161563);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinError(6,0.008899416);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetEntries(5213);

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
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(1,7.358952);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(2,0.7299461);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(3,0.1211362);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(4,0.02646838);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(5,0.006252466);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(6,0.002428542);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(7,0.001358029);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(8,0.0005097602);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(9,0.0005931654);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(1,0.06287385);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(2,0.01958539);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(3,0.007846712);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(4,0.003738707);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(5,0.00186343);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(6,0.001037378);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(7,0.0007842198);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(8,0.0005097602);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(9,0.0005931654);
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
   VbbHcc_algoFirst_Aplanarity_stack_11->SetBinContent(1,0.5504575);
   VbbHcc_algoFirst_Aplanarity_stack_11->SetBinContent(2,0.03868464);
   VbbHcc_algoFirst_Aplanarity_stack_11->SetBinContent(3,0.008861871);
   VbbHcc_algoFirst_Aplanarity_stack_11->SetBinError(1,0.04024955);
   VbbHcc_algoFirst_Aplanarity_stack_11->SetBinError(2,0.01098255);
   VbbHcc_algoFirst_Aplanarity_stack_11->SetBinError(3,0.008861871);
   VbbHcc_algoFirst_Aplanarity_stack_11->SetEntries(246);

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
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinContent(1,0.2100637);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinContent(2,0.01821676);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinContent(3,0.001473647);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinContent(4,0.0009014864);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinError(1,0.009579838);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinError(2,0.002743427);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinError(3,0.0007703376);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinError(4,0.0005226997);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetEntries(653);

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
   
   TH1D *VbbHcc_algoFirst_Aplanarity__239 = new TH1D("VbbHcc_algoFirst_Aplanarity__239","",50,0,1);
   VbbHcc_algoFirst_Aplanarity__239->SetBinContent(1,259210);
   VbbHcc_algoFirst_Aplanarity__239->SetBinContent(2,30617);
   VbbHcc_algoFirst_Aplanarity__239->SetBinContent(3,6037);
   VbbHcc_algoFirst_Aplanarity__239->SetBinContent(4,1391);
   VbbHcc_algoFirst_Aplanarity__239->SetBinContent(5,342);
   VbbHcc_algoFirst_Aplanarity__239->SetBinContent(6,93);
   VbbHcc_algoFirst_Aplanarity__239->SetBinContent(7,37);
   VbbHcc_algoFirst_Aplanarity__239->SetBinContent(8,15);
   VbbHcc_algoFirst_Aplanarity__239->SetBinContent(9,7);
   VbbHcc_algoFirst_Aplanarity__239->SetBinContent(10,9);
   VbbHcc_algoFirst_Aplanarity__239->SetBinContent(11,5);
   VbbHcc_algoFirst_Aplanarity__239->SetBinContent(12,2);
   VbbHcc_algoFirst_Aplanarity__239->SetBinContent(13,1);
   VbbHcc_algoFirst_Aplanarity__239->SetEntries(297815);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Aplanarity__239->SetLineColor(ci);
   VbbHcc_algoFirst_Aplanarity__239->SetLineWidth(2);
   VbbHcc_algoFirst_Aplanarity__239->SetMarkerStyle(20);
   VbbHcc_algoFirst_Aplanarity__239->SetMarkerSize(1.2);
   VbbHcc_algoFirst_Aplanarity__239->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Aplanarity__239->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity__239->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity__239->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity__239->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity__239->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity__239->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity__239->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity__239->GetZaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity__239->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algoFirst_Aplanarity_fx1239[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VbbHcc_algoFirst_Aplanarity_fy1239[50] = { 271296.1, 28074.95, 4147.369, 1238.325, 175.0191, 26.30117, 13.26473, 4.942782, 3.109744, 1.955416, 1.318815, 0.6763552, 0.3575765, 0.375068, 0.03253225, 0, 0.01785026,
   0.03246303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VbbHcc_algoFirst_Aplanarity_fex1239[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VbbHcc_algoFirst_Aplanarity_fey1239[50] = { 11380.12, 3787.226, 780.5371, 470.6162, 55.37706, 2.002379, 1.481799, 0.759664, 0.6542066, 0.6321663, 0.5678321, 0.2635753, 0.2636396, 0.3141857, 0.03253225, 0, 0.01785026,
   0.03246303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_algoFirst_Aplanarity_fx1239,Graph_from_VbbHcc_algoFirst_Aplanarity_fy1239,Graph_from_VbbHcc_algoFirst_Aplanarity_fex1239,Graph_from_VbbHcc_algoFirst_Aplanarity_fey1239);
   gre->SetName("Graph_from_VbbHcc_algoFirst_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1239 = new TH1F("Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1239","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1239->SetMinimum(-28267.62);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1239->SetMaximum(310943.8);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1239->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1239->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1239->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1239->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1239->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1239->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1239->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1239->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1239->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1239->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1239->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1239);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algoFirst_Aplanarity","Data (JetHT, 2018)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_algoFirst_18->cd();
  
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
   data_mc_ratio__240->SetBinContent(1,0.9554506);
   data_mc_ratio__240->SetBinContent(2,1.090545);
   data_mc_ratio__240->SetBinContent(3,1.455622);
   data_mc_ratio__240->SetBinContent(4,1.123291);
   data_mc_ratio__240->SetBinContent(5,1.954072);
   data_mc_ratio__240->SetBinContent(6,3.535964);
   data_mc_ratio__240->SetBinContent(7,2.789353);
   data_mc_ratio__240->SetBinContent(8,3.034728);
   data_mc_ratio__240->SetBinContent(9,2.250989);
   data_mc_ratio__240->SetBinContent(10,4.602602);
   data_mc_ratio__240->SetBinContent(11,3.791282);
   data_mc_ratio__240->SetBinContent(12,2.957026);
   data_mc_ratio__240->SetBinContent(13,2.796605);
   data_mc_ratio__240->SetBinError(1,0.001876646);
   data_mc_ratio__240->SetBinError(2,0.006232501);
   data_mc_ratio__240->SetBinError(3,0.01873432);
   data_mc_ratio__240->SetBinError(4,0.03011819);
   data_mc_ratio__240->SetBinError(5,0.1056641);
   data_mc_ratio__240->SetBinError(6,0.3666624);
   data_mc_ratio__240->SetBinError(7,0.4585668);
   data_mc_ratio__240->SetBinError(8,0.7835635);
   data_mc_ratio__240->SetBinError(9,0.8507938);
   data_mc_ratio__240->SetBinError(10,1.534201);
   data_mc_ratio__240->SetBinError(11,1.695513);
   data_mc_ratio__240->SetBinError(12,2.090933);
   data_mc_ratio__240->SetBinError(13,2.796605);
   data_mc_ratio__240->SetMinimum(0.4);
   data_mc_ratio__240->SetMaximum(1.6);
   data_mc_ratio__240->SetEntries(33.898);
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
   Double_t Graph_from_mc_statistical_error_fey1240[50] = { 0.04194725, 0.134897, 0.1882005, 0.3800425, 0.3164058, 0.07613269, 0.1117098, 0.1536916, 0.2103731, 0.32329, 0.4305623, 0.3896995, 0.7372958, 0.8376767, 1, 0, 1,
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
   Aplanarity_algoFirst_18->cd();
   Aplanarity_algoFirst_18->Modified();
   Aplanarity_algoFirst_18->cd();
   Aplanarity_algoFirst_18->SetSelected(Aplanarity_algoFirst_18);
}
