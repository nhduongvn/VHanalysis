#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algoFirst_17()
{
//=========Macro generated from canvas: Aplanarity_algoFirst_17/Aplanarity_algoFirst_17
//=========  (Fri Oct 20 15:09:11 2023) by ROOT version 6.28/04
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
   topPad->Range(-0.1532254,-417.966,1.052419,417558);
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
   st->SetMaximum(375760.4);
   
   TH1F *st_stack_119 = new TH1F("st_stack_119","",50,0,1);
   st_stack_119->SetMinimum(0.01);
   st_stack_119->SetMaximum(375760.4);
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
   
   
   TH1D *VbbHcc_algoFirst_Aplanarity_stack_1 = new TH1D("VbbHcc_algoFirst_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinContent(1,152589.8);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinContent(2,18029.93);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinContent(3,3600.894);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinContent(4,403.3003);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinContent(5,3255.599);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinContent(7,5.861222);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinError(1,5165.075);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinError(2,2325.006);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinError(3,948.2423);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinError(4,246.6578);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinError(5,3196.832);
   VbbHcc_algoFirst_Aplanarity_stack_1->SetBinError(7,5.861222);
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
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(1,1152.453);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(2,147.148);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(3,34.12564);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(4,5.941303);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(5,4.502676);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(6,0.5480354);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(7,0.9428051);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(8,0.02737089);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(9,0.03707548);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(10,-0.07056775);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(11,0.0200994);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinContent(12,0.04788213);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(1,15.81439);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(2,5.35896);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(3,2.830536);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(4,0.9417676);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(5,1.684966);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(6,0.214225);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(7,0.8072696);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(8,0.02737089);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(9,0.03707548);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(10,0.07056775);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(11,0.03760217);
   VbbHcc_algoFirst_Aplanarity_stack_2->SetBinError(12,0.04788213);
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
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(1,13485.6);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(2,1814.864);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(3,398.098);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(4,107.4069);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(5,33.78012);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(6,14.61818);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(7,6.480479);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(8,2.832626);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(9,1.755235);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(10,0.9285842);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(11,0.6030523);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(12,0.2121023);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(13,0.1143069);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(14,0.08037331);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(15,0.05391295);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinContent(17,0.09003216);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(1,33.80027);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(2,12.27112);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(3,5.747965);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(4,2.857475);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(5,1.573775);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(6,1.122509);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(7,0.7047709);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(8,0.4642768);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(9,0.3278418);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(10,0.2411266);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(11,0.1876593);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(12,0.09973327);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(13,0.06711901);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(14,0.06063151);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(15,0.05391295);
   VbbHcc_algoFirst_Aplanarity_stack_3->SetBinError(17,0.07074397);
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
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinContent(1,1217.117);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinContent(2,109.6731);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinContent(3,20.9029);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinContent(4,7.496999);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinContent(5,0.595351);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinContent(7,0.1729604);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinError(1,26.45731);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinError(2,7.619909);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinError(3,3.996232);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinError(4,3.579643);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinError(5,0.2355733);
   VbbHcc_algoFirst_Aplanarity_stack_4->SetBinError(7,0.1307666);
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
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinContent(1,577.8403);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinContent(2,49.93737);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinContent(3,8.687446);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinContent(4,5.968126);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinContent(5,0.831868);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinContent(7,0.07706831);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinError(1,22.54924);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinError(2,7.580614);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinError(3,2.238207);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinError(4,4.804476);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinError(5,0.8236357);
   VbbHcc_algoFirst_Aplanarity_stack_5->SetBinError(7,0.07706831);
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
   VbbHcc_algoFirst_Aplanarity_stack_6->SetBinContent(1,6.72979);
   VbbHcc_algoFirst_Aplanarity_stack_6->SetBinContent(2,0.3279786);
   VbbHcc_algoFirst_Aplanarity_stack_6->SetBinError(1,1.564089);
   VbbHcc_algoFirst_Aplanarity_stack_6->SetBinError(2,0.3279786);
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
   VbbHcc_algoFirst_Aplanarity_stack_7->SetBinContent(1,27.56267);
   VbbHcc_algoFirst_Aplanarity_stack_7->SetBinContent(2,1.852613);
   VbbHcc_algoFirst_Aplanarity_stack_7->SetBinContent(3,0.1901936);
   VbbHcc_algoFirst_Aplanarity_stack_7->SetBinError(1,3.350553);
   VbbHcc_algoFirst_Aplanarity_stack_7->SetBinError(2,0.6331926);
   VbbHcc_algoFirst_Aplanarity_stack_7->SetBinError(3,0.1901936);
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
   VbbHcc_algoFirst_Aplanarity_stack_8->SetBinContent(1,20.88399);
   VbbHcc_algoFirst_Aplanarity_stack_8->SetBinContent(2,0.7365821);
   VbbHcc_algoFirst_Aplanarity_stack_8->SetBinContent(3,0.6510844);
   VbbHcc_algoFirst_Aplanarity_stack_8->SetBinError(1,3.928724);
   VbbHcc_algoFirst_Aplanarity_stack_8->SetBinError(2,0.5293878);
   VbbHcc_algoFirst_Aplanarity_stack_8->SetBinError(3,0.6510844);
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
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinContent(1,8.548273);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinContent(2,0.6308717);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinContent(3,0.1134265);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinContent(4,0.01831294);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinContent(5,0.009254345);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinContent(6,0.001980785);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinError(1,0.1425305);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinError(2,0.03743012);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinError(3,0.01670904);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinError(4,0.005644616);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinError(5,0.0052049);
   VbbHcc_algoFirst_Aplanarity_stack_9->SetBinError(6,0.001980785);
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
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(1,5.118237);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(2,0.507686);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(3,0.08425165);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(4,0.01840907);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(5,0.004348663);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(6,0.001689079);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(7,0.0009445247);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(8,0.0003545441);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinContent(9,0.0004125534);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(1,0.04372949);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(2,0.01362187);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(3,0.00545748);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(4,0.002600314);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(5,0.001296037);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(6,0.0007215087);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(7,0.000545434);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(8,0.0003545441);
   VbbHcc_algoFirst_Aplanarity_stack_10->SetBinError(9,0.0004125534);
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
   VbbHcc_algoFirst_Aplanarity_stack_11->SetBinContent(1,0.3630935);
   VbbHcc_algoFirst_Aplanarity_stack_11->SetBinContent(2,0.01764426);
   VbbHcc_algoFirst_Aplanarity_stack_11->SetBinContent(3,0.002415345);
   VbbHcc_algoFirst_Aplanarity_stack_11->SetBinContent(5,0.001433377);
   VbbHcc_algoFirst_Aplanarity_stack_11->SetBinError(1,0.02607387);
   VbbHcc_algoFirst_Aplanarity_stack_11->SetBinError(2,0.005986458);
   VbbHcc_algoFirst_Aplanarity_stack_11->SetBinError(3,0.001736668);
   VbbHcc_algoFirst_Aplanarity_stack_11->SetBinError(5,0.001433377);
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
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinContent(1,0.1365187);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinContent(2,0.01322132);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinContent(3,0.00210002);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinContent(4,0.0001143804);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinContent(7,0.0002015578);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinError(1,0.005400151);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinError(2,0.001696564);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinError(3,0.0006528451);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinError(4,0.0001143804);
   VbbHcc_algoFirst_Aplanarity_stack_12->SetBinError(7,0.0002015578);
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
   
   TH1D *VbbHcc_algoFirst_Aplanarity__237 = new TH1D("VbbHcc_algoFirst_Aplanarity__237","",50,0,1);
   VbbHcc_algoFirst_Aplanarity__237->SetBinContent(1,98890);
   VbbHcc_algoFirst_Aplanarity__237->SetBinContent(2,11775);
   VbbHcc_algoFirst_Aplanarity__237->SetBinContent(3,2311);
   VbbHcc_algoFirst_Aplanarity__237->SetBinContent(4,574);
   VbbHcc_algoFirst_Aplanarity__237->SetBinContent(5,118);
   VbbHcc_algoFirst_Aplanarity__237->SetBinContent(6,33);
   VbbHcc_algoFirst_Aplanarity__237->SetBinContent(7,11);
   VbbHcc_algoFirst_Aplanarity__237->SetBinContent(8,6);
   VbbHcc_algoFirst_Aplanarity__237->SetBinContent(9,1);
   VbbHcc_algoFirst_Aplanarity__237->SetBinContent(11,1);
   VbbHcc_algoFirst_Aplanarity__237->SetEntries(113769);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Aplanarity__237->SetLineColor(ci);
   VbbHcc_algoFirst_Aplanarity__237->SetLineWidth(2);
   VbbHcc_algoFirst_Aplanarity__237->SetMarkerStyle(20);
   VbbHcc_algoFirst_Aplanarity__237->SetMarkerSize(1.2);
   VbbHcc_algoFirst_Aplanarity__237->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Aplanarity__237->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity__237->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity__237->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity__237->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity__237->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity__237->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Aplanarity__237->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Aplanarity__237->GetZaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Aplanarity__237->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algoFirst_Aplanarity_fx1237[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VbbHcc_algoFirst_Aplanarity_fy1237[50] = { 169092.2, 20155.64, 4063.751, 530.1504, 3295.324, 15.16988, 13.53568, 2.860351, 1.792723, 0.8580164, 0.6231517, 0.2599844, 0.1143069, 0.08037331, 0.05391295, 0, 0.09003216,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VbbHcc_algoFirst_Aplanarity_fex1237[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VbbHcc_algoFirst_Aplanarity_fey1237[50] = { 5165.33, 2325.07, 948.2752, 246.7489, 3196.833, 1.14277, 5.960314, 0.465083, 0.3299318, 0.2512406, 0.1913895, 0.1106319, 0.06711901, 0.06063151, 0.05391295, 0, 0.07074397,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_algoFirst_Aplanarity_fx1237,Graph_from_VbbHcc_algoFirst_Aplanarity_fy1237,Graph_from_VbbHcc_algoFirst_Aplanarity_fex1237,Graph_from_VbbHcc_algoFirst_Aplanarity_fey1237);
   gre->SetName("Graph_from_VbbHcc_algoFirst_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1237 = new TH1F("Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1237","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1237->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1237->SetMaximum(191683.2);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1237->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1237->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1237->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1237->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1237->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1237->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1237->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1237->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1237->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1237->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1237->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algoFirst_Aplanarity1237);
   
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
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
   
   TH1D *data_mc_ratio__238 = new TH1D("data_mc_ratio__238","",50,0,1);
   data_mc_ratio__238->SetBinContent(1,0.584829);
   data_mc_ratio__238->SetBinContent(2,0.5842038);
   data_mc_ratio__238->SetBinContent(3,0.5686864);
   data_mc_ratio__238->SetBinContent(4,1.082712);
   data_mc_ratio__238->SetBinContent(5,0.03580832);
   data_mc_ratio__238->SetBinContent(6,2.175363);
   data_mc_ratio__238->SetBinContent(7,0.8126669);
   data_mc_ratio__238->SetBinContent(8,2.097645);
   data_mc_ratio__238->SetBinContent(9,0.5578107);
   data_mc_ratio__238->SetBinContent(11,1.604746);
   data_mc_ratio__238->SetBinError(1,0.001859742);
   data_mc_ratio__238->SetBinError(2,0.005383738);
   data_mc_ratio__238->SetBinError(3,0.01182968);
   data_mc_ratio__238->SetBinError(4,0.04519151);
   data_mc_ratio__238->SetBinError(5,0.003296423);
   data_mc_ratio__238->SetBinError(6,0.378682);
   data_mc_ratio__238->SetBinError(7,0.2450283);
   data_mc_ratio__238->SetBinError(8,0.8563598);
   data_mc_ratio__238->SetBinError(9,0.5578107);
   data_mc_ratio__238->SetBinError(11,1.604746);
   data_mc_ratio__238->SetMinimum(0.4);
   data_mc_ratio__238->SetMaximum(1.6);
   data_mc_ratio__238->SetEntries(22.06288);
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
   Double_t Graph_from_mc_statistical_error_fey1238[50] = { 0.03054742, 0.1153558, 0.2333497, 0.4654318, 0.9701118, 0.0753315, 0.4403409, 0.1625965, 0.1840395, 0.2928156, 0.3071315, 0.425533, 0.5871827, 0.7543736, 1, 0, 0.7857633,
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
   Aplanarity_algoFirst_17->cd();
   Aplanarity_algoFirst_17->Modified();
   Aplanarity_algoFirst_17->cd();
   Aplanarity_algoFirst_17->SetSelected(Aplanarity_algoFirst_17);
}
