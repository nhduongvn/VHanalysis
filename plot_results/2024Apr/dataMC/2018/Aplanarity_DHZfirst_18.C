#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_DHZfirst_18()
{
//=========Macro generated from canvas: Aplanarity_DHZfirst_18/Aplanarity_DHZfirst_18
//=========  (Mon Apr  8 11:54:17 2024) by ROOT version 6.28/10
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
   topPad->Range(-0.1532254,-652.6811,1.052419,652038.4);
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
   st->SetMaximum(586769.3);
   
   TH1F *st_stack_120 = new TH1F("st_stack_120","",50,0,1);
   st_stack_120->SetMinimum(0.01);
   st_stack_120->SetMaximum(586769.3);
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
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(1,233611);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(2,35643.9);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(3,2456.47);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(4,929.6403);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(5,277.3588);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(6,30.98042);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(9,9.618995);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(14,3.142729);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(1,11829.23);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(2,6035.358);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(3,753.8403);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(4,549.0432);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(5,155.9878);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(6,15.71519);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(9,9.618995);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(14,3.142729);
   VH_DHZfirst_Aplanarity_stack_1->SetEntries(11420);

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
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(1,2345.517);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(2,308.1841);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(3,59.49446);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(4,19.29211);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(5,5.055382);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(6,2.15322);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(7,0.3265773);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(8,0.1185345);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(10,0.1473337);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(1,30.99983);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(2,13.45172);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(3,4.473649);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(4,2.706049);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(5,1.146304);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(6,0.8541605);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(7,0.20871);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(8,0.1185345);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(10,0.1473337);
   VH_DHZfirst_Aplanarity_stack_2->SetEntries(18627);

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
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(1,25183.94);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(2,3268.242);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(3,702.6795);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(4,197.6092);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(5,67.29956);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(6,27.31321);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(7,14.14052);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(8,3.698274);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(9,4.567098);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(10,1.998179);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(11,1.665532);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(12,0.5947616);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(14,0.1103301);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(15,0.1581626);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(18,0.05258055);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(1,69.31657);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(2,23.57075);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(3,10.82424);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(4,5.795686);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(5,3.324588);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(6,2.140667);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(7,1.862481);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(8,0.7875187);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(9,1.595398);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(10,0.5538842);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(11,0.6633814);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(12,0.2479275);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(14,0.1103301);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(15,0.09427189);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(18,0.05258055);
   VH_DHZfirst_Aplanarity_stack_3->SetEntries(265964);

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
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(1,1901.11);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(2,211.7028);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(3,39.59198);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(4,6.527692);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(5,2.421827);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(6,1.629652);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(7,0.2318472);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(1,41.93636);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(2,18.36355);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(3,7.590635);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(4,2.143666);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(5,1.341449);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(6,1.629652);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(7,0.1640748);
   VH_DHZfirst_Aplanarity_stack_4->SetEntries(6415);

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
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(1,919.7241);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(2,94.96735);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(3,10.7362);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(4,4.138462);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(6,0.2318493);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(1,51.00111);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(2,16.81309);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(3,3.61193);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(4,2.008023);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(6,0.2318493);
   VH_DHZfirst_Aplanarity_stack_5->SetEntries(2664);

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
   VH_DHZfirst_Aplanarity_stack_8->SetBinContent(1,25.02178);
   VH_DHZfirst_Aplanarity_stack_8->SetBinContent(2,1.490869);
   VH_DHZfirst_Aplanarity_stack_8->SetBinContent(3,0.6082451);
   VH_DHZfirst_Aplanarity_stack_8->SetBinError(1,3.58629);
   VH_DHZfirst_Aplanarity_stack_8->SetBinError(2,0.7824869);
   VH_DHZfirst_Aplanarity_stack_8->SetBinError(3,0.4301686);
   VH_DHZfirst_Aplanarity_stack_8->SetEntries(67);

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
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(1,15.96636);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(2,0.9555906);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(3,0.1685873);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(4,0.008722652);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(1,0.3767093);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(2,0.06275504);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(3,0.02717876);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(4,0.005284556);
   VH_DHZfirst_Aplanarity_stack_9->SetEntries(4955);

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
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(1,6.937581);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(2,0.6644273);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(3,0.126593);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(4,0.02451595);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(5,0.007169193);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(6,0.001313296);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(7,0.0009309679);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(8,0.0004321543);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(1,0.06420734);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(2,0.01959975);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(3,0.008452004);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(4,0.003813284);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(5,0.00202146);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(6,0.0008115125);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(7,0.0006815828);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(8,0.0004321543);
   VH_DHZfirst_Aplanarity_stack_10->SetEntries(13681);

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
   VH_DHZfirst_Aplanarity__239->SetBinContent(1,216490);
   VH_DHZfirst_Aplanarity__239->SetBinContent(2,26654);
   VH_DHZfirst_Aplanarity__239->SetBinContent(3,5453);
   VH_DHZfirst_Aplanarity__239->SetBinContent(4,1297);
   VH_DHZfirst_Aplanarity__239->SetBinContent(5,323);
   VH_DHZfirst_Aplanarity__239->SetBinContent(6,115);
   VH_DHZfirst_Aplanarity__239->SetBinContent(7,31);
   VH_DHZfirst_Aplanarity__239->SetBinContent(8,22);
   VH_DHZfirst_Aplanarity__239->SetBinContent(9,8);
   VH_DHZfirst_Aplanarity__239->SetBinContent(10,2);
   VH_DHZfirst_Aplanarity__239->SetBinContent(11,2);
   VH_DHZfirst_Aplanarity__239->SetBinContent(12,2);
   VH_DHZfirst_Aplanarity__239->SetBinContent(13,2);
   VH_DHZfirst_Aplanarity__239->SetBinContent(14,2);
   VH_DHZfirst_Aplanarity__239->SetBinContent(15,1);
   VH_DHZfirst_Aplanarity__239->SetBinContent(16,1);
   VH_DHZfirst_Aplanarity__239->SetEntries(250454);

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
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fy1239[50] = { 264046.2, 39531.55, 3269.881, 1157.241, 353.7181, 62.30966, 14.69987, 3.81767, 14.18609, 2.145513, 1.665532, 0.5947616, 0, 3.253059, 0.1581626, 0, 0,
   0.05258055, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fex1239[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fey1239[50] = { 11829.66, 6035.471, 753.9783, 549.0883, 156.0412, 15.96837, 1.881307, 0.7963896, 9.750403, 0.5731448, 0.6633814, 0.2479275, 0, 3.144665, 0.09427189, 0, 0,
   0.05258055, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   Graph_Graph_from_VH_DHZfirst_Aplanarity1239->SetMinimum(0);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1239->SetMaximum(303463.4);
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
   data_mc_ratio__240->SetBinContent(1,0.8198945);
   data_mc_ratio__240->SetBinContent(2,0.6742462);
   data_mc_ratio__240->SetBinContent(3,1.667645);
   data_mc_ratio__240->SetBinContent(4,1.120769);
   data_mc_ratio__240->SetBinContent(5,0.9131565);
   data_mc_ratio__240->SetBinContent(6,1.845621);
   data_mc_ratio__240->SetBinContent(7,2.108862);
   data_mc_ratio__240->SetBinContent(8,5.762677);
   data_mc_ratio__240->SetBinContent(9,0.5639326);
   data_mc_ratio__240->SetBinContent(10,0.9321781);
   data_mc_ratio__240->SetBinContent(11,1.200817);
   data_mc_ratio__240->SetBinContent(12,3.362692);
   data_mc_ratio__240->SetBinContent(14,0.6148059);
   data_mc_ratio__240->SetBinContent(15,6.322607);
   data_mc_ratio__240->SetBinError(1,0.001762134);
   data_mc_ratio__240->SetBinError(2,0.004129879);
   data_mc_ratio__240->SetBinError(3,0.02258322);
   data_mc_ratio__240->SetBinError(4,0.03112046);
   data_mc_ratio__240->SetBinError(5,0.05080939);
   data_mc_ratio__240->SetBinError(6,0.172105);
   data_mc_ratio__240->SetBinError(7,0.3787628);
   data_mc_ratio__240->SetBinError(8,1.228607);
   data_mc_ratio__240->SetBinError(9,0.1993803);
   data_mc_ratio__240->SetBinError(10,0.6591495);
   data_mc_ratio__240->SetBinError(11,0.8491061);
   data_mc_ratio__240->SetBinError(12,2.377782);
   data_mc_ratio__240->SetBinError(14,0.4347334);
   data_mc_ratio__240->SetBinError(15,6.322607);
   data_mc_ratio__240->SetMinimum(0.4);
   data_mc_ratio__240->SetMaximum(1.6);
   data_mc_ratio__240->SetEntries(11.45404);
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
   Double_t Graph_from_mc_statistical_error_fey1240[50] = { 0.04480147, 0.1526748, 0.2305828, 0.4744804, 0.4411456, 0.2562743, 0.1279812, 0.2086062, 0.6873212, 0.2671365, 0.3983, 0.416852, 0, 0.9666793, 0.5960441, 0, 0,
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
   Graph_Graph_from_mc_statistical_error1240->SetMinimum(0);
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
