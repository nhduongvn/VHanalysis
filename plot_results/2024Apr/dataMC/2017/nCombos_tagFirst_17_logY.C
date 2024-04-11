#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nCombos_tagFirst_17_logY()
{
//=========Macro generated from canvas: nCombos_tagFirst_17/nCombos_tagFirst_17
//=========  (Thu Apr 11 14:05:50 2024) by ROOT version 6.28/10
   TCanvas *nCombos_tagFirst_17 = new TCanvas("nCombos_tagFirst_17", "nCombos_tagFirst_17",0,0,600,600);
   nCombos_tagFirst_17->SetHighLightColor(2);
   nCombos_tagFirst_17->Range(0,0,1,1);
   nCombos_tagFirst_17->SetFillColor(0);
   nCombos_tagFirst_17->SetFillStyle(4000);
   nCombos_tagFirst_17->SetBorderMode(0);
   nCombos_tagFirst_17->SetBorderSize(2);
   nCombos_tagFirst_17->SetFrameFillStyle(1000);
   nCombos_tagFirst_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.266127,-3.019625,4.762097,18.73872);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(7.979544e+15);
   
   TH1F *st_stack_2 = new TH1F("st_stack_2","",4,-0.5,3.5);
   st_stack_2->SetMinimum(0.001004925);
   st_stack_2->SetMaximum(3.654947e+16);
   st_stack_2->SetDirectory(nullptr);
   st_stack_2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_2->SetLineColor(ci);
   st_stack_2->SetLineWidth(0);
   st_stack_2->GetXaxis()->SetRange(1,5);
   st_stack_2->GetXaxis()->SetLabelFont(42);
   st_stack_2->GetXaxis()->SetTitleOffset(1);
   st_stack_2->GetXaxis()->SetTitleFont(42);
   st_stack_2->GetYaxis()->SetTitle("Events/1.0");
   st_stack_2->GetYaxis()->SetLabelFont(42);
   st_stack_2->GetYaxis()->SetLabelSize(0.05);
   st_stack_2->GetYaxis()->SetTitleSize(0.057);
   st_stack_2->GetYaxis()->SetTitleOffset(1.2);
   st_stack_2->GetYaxis()->SetTitleFont(42);
   st_stack_2->GetZaxis()->SetLabelFont(42);
   st_stack_2->GetZaxis()->SetTitleOffset(1);
   st_stack_2->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_2);
   
   
   TH1D *VH_tagFirst_nCombos_stack_1 = new TH1D("VH_tagFirst_nCombos_stack_1","",4,-0.5,3.5);
   VH_tagFirst_nCombos_stack_1->SetBinContent(1,1.340019e+07);
   VH_tagFirst_nCombos_stack_1->SetBinContent(2,1324226);
   VH_tagFirst_nCombos_stack_1->SetBinContent(3,11673.74);
   VH_tagFirst_nCombos_stack_1->SetBinError(1,147260.3);
   VH_tagFirst_nCombos_stack_1->SetBinError(2,35970.55);
   VH_tagFirst_nCombos_stack_1->SetBinError(3,1127.244);
   VH_tagFirst_nCombos_stack_1->SetEntries(860914);

   ci = TColor::GetColor("#ff6600");
   VH_tagFirst_nCombos_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_nCombos_stack_1->SetLineColor(ci);
   VH_tagFirst_nCombos_stack_1->GetXaxis()->SetRange(1,4);
   VH_tagFirst_nCombos_stack_1->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_1->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_1->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_1->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_1->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_nCombos_stack_1,"");
   
   TH1D *VH_tagFirst_nCombos_stack_2 = new TH1D("VH_tagFirst_nCombos_stack_2","",4,-0.5,3.5);
   VH_tagFirst_nCombos_stack_2->SetBinContent(1,49982.99);
   VH_tagFirst_nCombos_stack_2->SetBinContent(2,16870.68);
   VH_tagFirst_nCombos_stack_2->SetBinContent(3,198.8664);
   VH_tagFirst_nCombos_stack_2->SetBinError(1,97.53361);
   VH_tagFirst_nCombos_stack_2->SetBinError(2,62.54361);
   VH_tagFirst_nCombos_stack_2->SetBinError(3,6.903476);
   VH_tagFirst_nCombos_stack_2->SetEntries(882965);

   ci = TColor::GetColor("#660066");
   VH_tagFirst_nCombos_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_nCombos_stack_2->SetLineColor(ci);
   VH_tagFirst_nCombos_stack_2->GetXaxis()->SetRange(1,4);
   VH_tagFirst_nCombos_stack_2->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_2->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_2->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_2->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_2->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_nCombos_stack_2,"");
   
   TH1D *VH_tagFirst_nCombos_stack_3 = new TH1D("VH_tagFirst_nCombos_stack_3","",4,-0.5,3.5);
   VH_tagFirst_nCombos_stack_3->SetBinContent(1,746178.2);
   VH_tagFirst_nCombos_stack_3->SetBinContent(2,291633.7);
   VH_tagFirst_nCombos_stack_3->SetBinContent(3,3651.17);
   VH_tagFirst_nCombos_stack_3->SetBinError(1,231.8461);
   VH_tagFirst_nCombos_stack_3->SetBinError(2,155.341);
   VH_tagFirst_nCombos_stack_3->SetBinError(3,16.10628);
   VH_tagFirst_nCombos_stack_3->SetEntries(1.835995e+07);

   ci = TColor::GetColor("#cc00cc");
   VH_tagFirst_nCombos_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_nCombos_stack_3->SetLineColor(ci);
   VH_tagFirst_nCombos_stack_3->GetXaxis()->SetRange(1,4);
   VH_tagFirst_nCombos_stack_3->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_3->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_3->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_3->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_3->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_nCombos_stack_3,"");
   
   TH1D *VH_tagFirst_nCombos_stack_4 = new TH1D("VH_tagFirst_nCombos_stack_4","",4,-0.5,3.5);
   VH_tagFirst_nCombos_stack_4->SetBinContent(1,60736.47);
   VH_tagFirst_nCombos_stack_4->SetBinContent(2,12044.77);
   VH_tagFirst_nCombos_stack_4->SetBinContent(3,135.9091);
   VH_tagFirst_nCombos_stack_4->SetBinError(1,182.4592);
   VH_tagFirst_nCombos_stack_4->SetBinError(2,74.17387);
   VH_tagFirst_nCombos_stack_4->SetBinError(3,5.955056);
   VH_tagFirst_nCombos_stack_4->SetEntries(509348);

   ci = TColor::GetColor("#00cccc");
   VH_tagFirst_nCombos_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_nCombos_stack_4->SetLineColor(ci);
   VH_tagFirst_nCombos_stack_4->GetXaxis()->SetRange(1,4);
   VH_tagFirst_nCombos_stack_4->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_4->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_4->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_4->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_4->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_nCombos_stack_4,"");
   
   TH1D *VH_tagFirst_nCombos_stack_5 = new TH1D("VH_tagFirst_nCombos_stack_5","",4,-0.5,3.5);
   VH_tagFirst_nCombos_stack_5->SetBinContent(1,59066.5);
   VH_tagFirst_nCombos_stack_5->SetBinContent(2,6405.161);
   VH_tagFirst_nCombos_stack_5->SetBinContent(3,81.24719);
   VH_tagFirst_nCombos_stack_5->SetBinError(1,282.111);
   VH_tagFirst_nCombos_stack_5->SetBinError(2,84.75791);
   VH_tagFirst_nCombos_stack_5->SetBinError(3,10.81383);
   VH_tagFirst_nCombos_stack_5->SetEntries(376580);

   ci = TColor::GetColor("#ff99cc");
   VH_tagFirst_nCombos_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_nCombos_stack_5->SetLineColor(ci);
   VH_tagFirst_nCombos_stack_5->GetXaxis()->SetRange(1,4);
   VH_tagFirst_nCombos_stack_5->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_5->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_5->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_5->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_5->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_nCombos_stack_5,"");
   
   TH1D *VH_tagFirst_nCombos_stack_6 = new TH1D("VH_tagFirst_nCombos_stack_6","",4,-0.5,3.5);
   VH_tagFirst_nCombos_stack_6->SetBinContent(1,551.784);
   VH_tagFirst_nCombos_stack_6->SetBinContent(2,59.28392);
   VH_tagFirst_nCombos_stack_6->SetBinContent(3,1.229859);
   VH_tagFirst_nCombos_stack_6->SetBinError(1,13.30743);
   VH_tagFirst_nCombos_stack_6->SetBinError(2,4.704449);
   VH_tagFirst_nCombos_stack_6->SetBinError(3,0.5942383);
   VH_tagFirst_nCombos_stack_6->SetEntries(2182);

   ci = TColor::GetColor("#9933ff");
   VH_tagFirst_nCombos_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_nCombos_stack_6->SetLineColor(ci);
   VH_tagFirst_nCombos_stack_6->GetXaxis()->SetRange(1,4);
   VH_tagFirst_nCombos_stack_6->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_6->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_6->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_6->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_6->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_nCombos_stack_6,"");
   
   TH1D *VH_tagFirst_nCombos_stack_7 = new TH1D("VH_tagFirst_nCombos_stack_7","",4,-0.5,3.5);
   VH_tagFirst_nCombos_stack_7->SetBinContent(1,684.7131);
   VH_tagFirst_nCombos_stack_7->SetBinContent(2,152.2147);
   VH_tagFirst_nCombos_stack_7->SetBinContent(3,0.7226764);
   VH_tagFirst_nCombos_stack_7->SetBinError(1,13.58725);
   VH_tagFirst_nCombos_stack_7->SetBinError(2,7.135523);
   VH_tagFirst_nCombos_stack_7->SetBinError(3,0.3666875);
   VH_tagFirst_nCombos_stack_7->SetEntries(3675);

   ci = TColor::GetColor("#3399ff");
   VH_tagFirst_nCombos_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_nCombos_stack_7->SetLineColor(ci);
   VH_tagFirst_nCombos_stack_7->GetXaxis()->SetRange(1,4);
   VH_tagFirst_nCombos_stack_7->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_7->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_7->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_7->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_7->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_nCombos_stack_7,"");
   
   TH1D *VH_tagFirst_nCombos_stack_8 = new TH1D("VH_tagFirst_nCombos_stack_8","",4,-0.5,3.5);
   VH_tagFirst_nCombos_stack_8->SetBinContent(1,462.5419);
   VH_tagFirst_nCombos_stack_8->SetBinContent(2,126.441);
   VH_tagFirst_nCombos_stack_8->SetBinContent(3,1.898605);
   VH_tagFirst_nCombos_stack_8->SetBinError(1,12.59773);
   VH_tagFirst_nCombos_stack_8->SetBinError(2,6.872793);
   VH_tagFirst_nCombos_stack_8->SetBinError(3,0.7104342);
   VH_tagFirst_nCombos_stack_8->SetEntries(2305);

   ci = TColor::GetColor("#33ff99");
   VH_tagFirst_nCombos_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_nCombos_stack_8->SetLineColor(ci);
   VH_tagFirst_nCombos_stack_8->GetXaxis()->SetRange(1,4);
   VH_tagFirst_nCombos_stack_8->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_8->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_8->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_8->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_8->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_nCombos_stack_8,"");
   
   TH1D *VH_tagFirst_nCombos_stack_9 = new TH1D("VH_tagFirst_nCombos_stack_9","",4,-0.5,3.5);
   VH_tagFirst_nCombos_stack_9->SetBinContent(1,195.7026);
   VH_tagFirst_nCombos_stack_9->SetBinContent(2,61.58568);
   VH_tagFirst_nCombos_stack_9->SetBinContent(3,0.8832042);
   VH_tagFirst_nCombos_stack_9->SetBinError(1,0.6735771);
   VH_tagFirst_nCombos_stack_9->SetBinError(2,0.3694379);
   VH_tagFirst_nCombos_stack_9->SetBinError(3,0.03662071);
   VH_tagFirst_nCombos_stack_9->SetEntries(161441);

   ci = TColor::GetColor("#cccc00");
   VH_tagFirst_nCombos_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_nCombos_stack_9->SetLineColor(ci);
   VH_tagFirst_nCombos_stack_9->GetXaxis()->SetRange(1,4);
   VH_tagFirst_nCombos_stack_9->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_9->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_9->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_9->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_9->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_nCombos_stack_9,"");
   
   TH1D *VH_tagFirst_nCombos_stack_10 = new TH1D("VH_tagFirst_nCombos_stack_10","",4,-0.5,3.5);
   VH_tagFirst_nCombos_stack_10->SetBinContent(1,200.6311);
   VH_tagFirst_nCombos_stack_10->SetBinContent(2,43.41185);
   VH_tagFirst_nCombos_stack_10->SetBinContent(3,0.4801893);
   VH_tagFirst_nCombos_stack_10->SetBinError(1,0.2727339);
   VH_tagFirst_nCombos_stack_10->SetBinError(2,0.1302264);
   VH_tagFirst_nCombos_stack_10->SetBinError(3,0.01315895);
   VH_tagFirst_nCombos_stack_10->SetEntries(681244);

   ci = TColor::GetColor("#0000cc");
   VH_tagFirst_nCombos_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_nCombos_stack_10->SetLineColor(ci);
   VH_tagFirst_nCombos_stack_10->GetXaxis()->SetRange(1,4);
   VH_tagFirst_nCombos_stack_10->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_10->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_10->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_10->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_10->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_nCombos_stack_10,"");
   
   TH1D *VH_tagFirst_nCombos_stack_11 = new TH1D("VH_tagFirst_nCombos_stack_11","",4,-0.5,3.5);
   VH_tagFirst_nCombos_stack_11->SetBinContent(1,3.412475);
   VH_tagFirst_nCombos_stack_11->SetBinContent(2,1.439083);
   VH_tagFirst_nCombos_stack_11->SetBinContent(3,0.03436694);
   VH_tagFirst_nCombos_stack_11->SetBinError(1,0.07125373);
   VH_tagFirst_nCombos_stack_11->SetBinError(2,0.04782444);
   VH_tagFirst_nCombos_stack_11->SetBinError(3,0.006289582);
   VH_tagFirst_nCombos_stack_11->SetEntries(3745);

   ci = TColor::GetColor("#cc0000");
   VH_tagFirst_nCombos_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_nCombos_stack_11->SetLineColor(ci);
   VH_tagFirst_nCombos_stack_11->GetXaxis()->SetRange(1,4);
   VH_tagFirst_nCombos_stack_11->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_11->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_11->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_11->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_11->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_nCombos_stack_11,"");
   
   TH1D *VH_tagFirst_nCombos_stack_12 = new TH1D("VH_tagFirst_nCombos_stack_12","",4,-0.5,3.5);
   VH_tagFirst_nCombos_stack_12->SetBinContent(1,1.729577);
   VH_tagFirst_nCombos_stack_12->SetBinContent(2,0.7418014);
   VH_tagFirst_nCombos_stack_12->SetBinContent(3,0.0157466);
   VH_tagFirst_nCombos_stack_12->SetBinError(1,0.01896673);
   VH_tagFirst_nCombos_stack_12->SetBinError(2,0.01254295);
   VH_tagFirst_nCombos_stack_12->SetBinError(3,0.00170468);
   VH_tagFirst_nCombos_stack_12->SetEntries(13738);

   ci = TColor::GetColor("#00cc00");
   VH_tagFirst_nCombos_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_nCombos_stack_12->SetLineColor(ci);
   VH_tagFirst_nCombos_stack_12->GetXaxis()->SetRange(1,4);
   VH_tagFirst_nCombos_stack_12->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_12->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_12->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_12->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos_stack_12->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_nCombos_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_tagFirst_nCombos__3 = new TH1D("VH_tagFirst_nCombos__3","",4,-0.5,3.5);
   VH_tagFirst_nCombos__3->SetBinContent(1,9728016);
   VH_tagFirst_nCombos__3->SetBinContent(2,1390927);
   VH_tagFirst_nCombos__3->SetBinContent(3,16628);
   VH_tagFirst_nCombos__3->SetEntries(1.113557e+07);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_nCombos__3->SetLineColor(ci);
   VH_tagFirst_nCombos__3->SetLineWidth(2);
   VH_tagFirst_nCombos__3->SetMarkerStyle(20);
   VH_tagFirst_nCombos__3->SetMarkerSize(1.2);
   VH_tagFirst_nCombos__3->GetXaxis()->SetRange(1,4);
   VH_tagFirst_nCombos__3->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos__3->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos__3->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos__3->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos__3->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos__3->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_nCombos__3->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_nCombos__3->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_nCombos__3->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_nCombos_fx1003[4] = { 0, 1, 2, 3 };
   Double_t Graph_from_VH_tagFirst_nCombos_fy1003[4] = { 1.431826e+07, 1651625, 15746.2, 0 };
   Double_t Graph_from_VH_tagFirst_nCombos_fex1003[4] = { 0.5, 0.5, 0.5, 0.5 };
   Double_t Graph_from_VH_tagFirst_nCombos_fey1003[4] = { 147260.9, 35971.12, 1127.449, 0 };
   TGraphErrors *gre = new TGraphErrors(4,Graph_from_VH_tagFirst_nCombos_fx1003,Graph_from_VH_tagFirst_nCombos_fy1003,Graph_from_VH_tagFirst_nCombos_fex1003,Graph_from_VH_tagFirst_nCombos_fey1003);
   gre->SetName("Graph_from_VH_tagFirst_nCombos");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_nCombos1003 = new TH1F("Graph_Graph_from_VH_tagFirst_nCombos1003","",100,-0.9,3.9);
   Graph_Graph_from_VH_tagFirst_nCombos1003->SetMinimum(15912.07);
   Graph_Graph_from_VH_tagFirst_nCombos1003->SetMaximum(1.591207e+07);
   Graph_Graph_from_VH_tagFirst_nCombos1003->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_nCombos1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_nCombos1003->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_nCombos1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_nCombos1003->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_nCombos1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_nCombos1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_nCombos1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_nCombos1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_nCombos1003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_nCombos1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_nCombos1003);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_nCombos","Data (BTagCSV, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_tagFirst_nCombos","ggZHcc","F");

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
   entry=leg->AddEntry("VH_tagFirst_nCombos","ZHcc","F");

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
   entry=leg->AddEntry("VH_tagFirst_nCombos","ggZHbb","F");

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
   entry=leg->AddEntry("VH_tagFirst_nCombos","ZHbb","F");

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
   entry=leg->AddEntry("VH_tagFirst_nCombos","ZZ","F");

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
   entry=leg->AddEntry("VH_tagFirst_nCombos","WZ","F");

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
   entry=leg->AddEntry("VH_tagFirst_nCombos","WW","F");

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
   entry=leg->AddEntry("VH_tagFirst_nCombos","W + jets","F");

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
   entry=leg->AddEntry("VH_tagFirst_nCombos","Z + jets","F");

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
   entry=leg->AddEntry("VH_tagFirst_nCombos","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_tagFirst_nCombos","Single top","F");

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
   entry=leg->AddEntry("VH_tagFirst_nCombos","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_tagFirst_nCombos","MC unc. (stat.)","fl");

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
   nCombos_tagFirst_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-1.266127,-0.2774193,4.762097,1.658065);
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
   
   TH1D *data_mc_ratio__4 = new TH1D("data_mc_ratio__4","",4,-0.5,3.5);
   data_mc_ratio__4->SetBinContent(1,0.6794135);
   data_mc_ratio__4->SetBinContent(2,0.8421567);
   data_mc_ratio__4->SetBinContent(3,1.056001);
   data_mc_ratio__4->SetBinError(1,0.0002178322);
   data_mc_ratio__4->SetBinError(2,0.0007140699);
   data_mc_ratio__4->SetBinError(3,0.008189252);
   data_mc_ratio__4->SetMinimum(0.4);
   data_mc_ratio__4->SetMaximum(1.6);
   data_mc_ratio__4->SetEntries(1076.822);
   data_mc_ratio__4->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__4->SetLineColor(ci);
   data_mc_ratio__4->SetLineWidth(2);
   data_mc_ratio__4->SetMarkerStyle(20);
   data_mc_ratio__4->SetMarkerSize(1.2);
   data_mc_ratio__4->GetXaxis()->SetTitle("jet combinatorics");
   data_mc_ratio__4->GetXaxis()->SetRange(1,5);
   data_mc_ratio__4->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__4->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__4->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__4->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__4->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__4->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__4->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__4->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__4->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__4->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__4->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__4->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__4->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__4->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__4->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__4->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1004[4] = { 0, 1, 2, 3 };
   Double_t Graph_from_mc_statistical_error_fy1004[4] = { 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1004[4] = { 0.5, 0.5, 0.5, 0.5 };
   Double_t Graph_from_mc_statistical_error_fey1004[4] = { 0.01028483, 0.02177923, 0.07160131, 0 };
   gre = new TGraphErrors(4,Graph_from_mc_statistical_error_fx1004,Graph_from_mc_statistical_error_fy1004,Graph_from_mc_statistical_error_fex1004,Graph_from_mc_statistical_error_fey1004);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1004 = new TH1F("Graph_Graph_from_mc_statistical_error1004","",100,-0.9,3.9);
   Graph_Graph_from_mc_statistical_error1004->SetMinimum(0.9140784);
   Graph_Graph_from_mc_statistical_error1004->SetMaximum(1.085922);
   Graph_Graph_from_mc_statistical_error1004->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1004->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1004->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1004->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1004);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,4,1);
   line->Draw();
   bottomPad->Modified();
   nCombos_tagFirst_17->cd();
   nCombos_tagFirst_17->Modified();
   nCombos_tagFirst_17->cd();
   nCombos_tagFirst_17->SetSelected(nCombos_tagFirst_17);
}
