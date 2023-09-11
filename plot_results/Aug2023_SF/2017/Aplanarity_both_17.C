#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_17()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Thu Sep  7 11:48:00 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(0,0,1,1);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetFillStyle(4000);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetFrameFillStyle(1000);
   Aplanarity_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-319.5598,1.052419,319250.2);
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
   st->SetMaximum(287293.2);
   
   TH1F *st_stack_191 = new TH1F("st_stack_191","",50,0,1);
   st_stack_191->SetMinimum(0.01);
   st_stack_191->SetMaximum(287293.2);
   st_stack_191->SetDirectory(nullptr);
   st_stack_191->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_191->SetLineColor(ci);
   st_stack_191->SetLineWidth(0);
   st_stack_191->GetXaxis()->SetRange(1,50);
   st_stack_191->GetXaxis()->SetLabelFont(42);
   st_stack_191->GetXaxis()->SetTitleOffset(1);
   st_stack_191->GetXaxis()->SetTitleFont(42);
   st_stack_191->GetYaxis()->SetTitle("Events/0.02");
   st_stack_191->GetYaxis()->SetLabelFont(42);
   st_stack_191->GetYaxis()->SetLabelSize(0.05);
   st_stack_191->GetYaxis()->SetTitleSize(0.057);
   st_stack_191->GetYaxis()->SetTitleOffset(1.2);
   st_stack_191->GetYaxis()->SetTitleFont(42);
   st_stack_191->GetZaxis()->SetLabelFont(42);
   st_stack_191->GetZaxis()->SetTitleOffset(1);
   st_stack_191->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_191);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,114137.5);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,34819.5);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,48154.05);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,7596.936);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,41322.24);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,3009.577);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,1741.05);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,1312.919);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,1083.597);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,361.8982);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,332.0561);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,484.3629);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,28.38843);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,218.3173);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,4.232155);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,33.3118);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,7.302469);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,3.998798);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,166.3668);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,5269.071);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,3053.388);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,32693.91);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,1377.66);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,34819.78);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,777.2181);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,470.922);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,428.0295);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,432.6523);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,225.3908);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,202.3457);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,436.265);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,12.70014);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,114.017);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,4.232155);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,24.34405);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,7.302469);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,3.998798);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,166.3668);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(10475);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,610.402);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,185.9959);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,89.95952);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,48.75516);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,35.1897);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,21.63273);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,12.84547);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,11.65963);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,5.89591);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,3.247466);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,2.351042);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,1.784072);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,1.016458);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,0.5511959);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.7252442);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.3309488);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,-0.007592541);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.03938602);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,0.2799366);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(21,0.06660781);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,12.69712);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,7.0178);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,5.393789);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,4.058734);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,3.143886);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,2.99068);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,1.598654);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,1.713938);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,1.099085);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.8718141);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.6550953);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.5769144);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.6218527);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.2549175);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.492739);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.2871977);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.05919769);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.03938602);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,0.2799366);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(21,0.06660781);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(12662);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_3 = new TH1D("VbbHcc_both_Aplanarity_stack_3","",50,0,1);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(1,12455.21);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(2,4081.746);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(3,1990.933);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(4,1144.378);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(5,706.4926);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(6,481.9544);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(7,302.394);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(8,204.4383);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(9,151.6475);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(10,104.3718);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(11,66.58585);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(12,50.62875);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(13,31.3129);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(14,23.10286);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(15,12.11603);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(16,9.411374);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(17,5.02013);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(18,3.887895);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(19,1.48762);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(20,0.4048846);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(21,0.1049033);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(23,0.1810845);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(1,35.63818);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(2,20.3183);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(3,14.25407);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(4,10.67767);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(5,8.356334);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(6,6.952067);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(7,5.478866);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(8,4.414019);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(9,4.000919);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(10,3.347063);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(11,2.572124);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(12,2.281759);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(13,1.732443);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(14,1.499048);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(15,1.026472);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(16,0.9582605);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(17,0.6550217);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(18,0.6425197);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(19,0.3428616);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(20,0.1637972);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(21,0.07435329);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(23,0.1810845);
   VbbHcc_both_Aplanarity_stack_3->SetEntries(345896);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_4 = new TH1D("VbbHcc_both_Aplanarity_stack_4","",50,0,1);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(1,1800.155);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(2,484.801);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(3,217.2471);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(4,131.6969);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(5,80.15438);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(6,62.40946);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(7,33.69425);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(8,21.68518);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(9,12.61231);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(10,11.5147);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(11,4.920061);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(12,3.614318);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(13,4.734367);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(14,1.534814);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(15,1.954254);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(16,0.2708428);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(17,0.5056762);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(19,0.1273528);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(1,34.01062);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(2,14.7945);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(3,9.529955);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(4,8.37861);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(5,8.152686);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(6,7.846101);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(7,5.468034);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(8,4.701218);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(9,1.87682);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(10,2.391011);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(11,1.315361);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(12,1.096069);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(13,1.535924);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(14,0.6521983);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(15,0.8948325);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(16,0.2708428);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(17,0.4074937);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(19,0.1273528);
   VbbHcc_both_Aplanarity_stack_4->SetEntries(15557);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_5 = new TH1D("VbbHcc_both_Aplanarity_stack_5","",50,0,1);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(1,194.5897);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(2,53.27685);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(3,19.31516);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(4,11.08384);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(5,6.787137);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(6,3.952525);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(7,6.550188);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(8,1.513495);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(9,0.7541422);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(10,0.8003262);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(11,0.6680876);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(12,0.3622224);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(13,0.06701157);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(14,0.468029);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(15,0.131516);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(18,0.06322107);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(1,15.45969);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(2,6.405889);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(3,3.358203);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(4,2.609637);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(5,1.684194);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(6,1.180334);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(7,2.907919);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(8,0.6086598);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(9,0.3462438);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(10,0.3987686);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(11,0.3235536);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(12,0.3622224);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(13,0.06701157);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(14,0.3497888);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(15,0.09303858);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(18,0.06322107);
   VbbHcc_both_Aplanarity_stack_5->SetEntries(2352);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_6 = new TH1D("VbbHcc_both_Aplanarity_stack_6","",50,0,1);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(1,0.6173959);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(4,0.5361026);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(6,0.2239956);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(1,0.3650973);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(4,0.5361026);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(6,0.2239956);
   VbbHcc_both_Aplanarity_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_7 = new TH1D("VbbHcc_both_Aplanarity_stack_7","",50,0,1);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(1,4.772946);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(2,0.9308958);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(3,0.6886358);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(4,0.7572189);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(5,0.1527238);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(1,1.4184);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(2,0.4239371);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(3,0.5853197);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(4,0.476634);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(5,0.1527238);
   VbbHcc_both_Aplanarity_stack_7->SetEntries(26);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_8 = new TH1D("VbbHcc_both_Aplanarity_stack_8","",50,0,1);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(1,35.82538);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(2,10.30763);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(3,7.071916);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(4,2.631993);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(5,0.3170249);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(6,0.5119266);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(7,1.054185);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(8,1.647386);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(10,0.183263);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(1,4.469462);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(2,1.939862);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(3,2.084655);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(4,1.123448);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(5,0.2337011);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(6,0.3008722);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(7,0.6995135);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(8,1.372592);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(10,0.183263);
   VbbHcc_both_Aplanarity_stack_8->SetEntries(184);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_9 = new TH1D("VbbHcc_both_Aplanarity_stack_9","",50,0,1);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(1,32.60179);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(2,9.864418);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(3,4.634062);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(4,2.758304);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(5,1.786783);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(6,1.02755);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(7,0.6396043);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(8,0.4600951);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(9,0.3091217);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(10,0.2083798);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(11,0.1565792);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(12,0.09141402);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(13,0.04454096);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(14,0.01876007);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(15,0.03235889);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(16,0.01211807);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(17,0.01616768);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(18,0.003934593);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(19,0.003052341);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(1,0.3274764);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(2,0.1796617);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(3,0.1226881);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(4,0.09481814);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(5,0.07635088);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(6,0.05606657);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(7,0.04465618);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(8,0.0367729);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(9,0.0311779);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(10,0.02580074);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(11,0.02179586);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(12,0.01817282);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(13,0.0106476);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(14,0.005840281);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(15,0.01108001);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(16,0.008111009);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(17,0.006575055);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(18,0.002368026);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(19,0.003052341);
   VbbHcc_both_Aplanarity_stack_9->SetEntries(29329);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_10 = new TH1D("VbbHcc_both_Aplanarity_stack_10","",50,0,1);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(1,10.14394);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(2,3.357233);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(3,1.733537);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(4,1.013061);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(5,0.63414);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(6,0.4078698);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(7,0.2744003);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(8,0.1964088);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(9,0.1221306);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(10,0.08175089);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(11,0.05085828);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(12,0.03971688);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(13,0.02740966);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(14,0.01942484);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(15,0.006463737);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(16,0.005686681);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(17,0.00584441);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(18,0.001817498);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(19,0.001426479);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(21,0.0006927958);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(1,0.06218142);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(2,0.03551609);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(3,0.02549659);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(4,0.01939167);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(5,0.01541067);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(6,0.0123191);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(7,0.01007037);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(8,0.008552307);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(9,0.006737792);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(10,0.005484244);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(11,0.004296398);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(12,0.003855023);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(13,0.003212042);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(14,0.00271282);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(15,0.001538594);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(16,0.001482969);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(17,0.001472783);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(18,0.0008441919);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(19,0.0007348209);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(21,0.0004920529);
   VbbHcc_both_Aplanarity_stack_10->SetEntries(50200);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_11 = new TH1D("VbbHcc_both_Aplanarity_stack_11","",50,0,1);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(1,0.08836872);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(2,0.02525052);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(3,0.005118783);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(4,0.007285299);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(5,0.002203087);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(7,0.003122756);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(8,0.01100458);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(10,0.002000194);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(1,0.0134732);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(2,0.00615974);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(3,0.002310544);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(4,0.003107959);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(5,0.001562891);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(7,0.002211286);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(8,0.007587119);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(10,0.001581394);
   VbbHcc_both_Aplanarity_stack_11->SetEntries(95);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_12 = new TH1D("VbbHcc_both_Aplanarity_stack_12","",50,0,1);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(1,0.03470165);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(2,0.01071991);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(3,0.007057251);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(4,0.003432796);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(5,0.002089682);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(6,0.001327251);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(7,0.0003215793);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(8,0.0003383399);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(9,0.000388433);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(10,0.0003453432);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(11,0.000298353);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(1,0.003036367);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(2,0.001540131);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(3,0.001348728);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(4,0.0008014437);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(5,0.0008028816);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(6,0.0006242387);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(7,0.0002286507);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(8,0.0002441203);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(9,0.000275635);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(10,0.0002469479);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(11,0.0002202048);
   VbbHcc_both_Aplanarity_stack_12->SetEntries(308);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Aplanarity__381 = new TH1D("VbbHcc_both_Aplanarity__381","",50,0,1);
   VbbHcc_both_Aplanarity__381->SetBinContent(1,35245);
   VbbHcc_both_Aplanarity__381->SetBinContent(2,10277);
   VbbHcc_both_Aplanarity__381->SetBinContent(3,4770);
   VbbHcc_both_Aplanarity__381->SetBinContent(4,2726);
   VbbHcc_both_Aplanarity__381->SetBinContent(5,1672);
   VbbHcc_both_Aplanarity__381->SetBinContent(6,1087);
   VbbHcc_both_Aplanarity__381->SetBinContent(7,709);
   VbbHcc_both_Aplanarity__381->SetBinContent(8,481);
   VbbHcc_both_Aplanarity__381->SetBinContent(9,322);
   VbbHcc_both_Aplanarity__381->SetBinContent(10,190);
   VbbHcc_both_Aplanarity__381->SetBinContent(11,153);
   VbbHcc_both_Aplanarity__381->SetBinContent(12,106);
   VbbHcc_both_Aplanarity__381->SetBinContent(13,64);
   VbbHcc_both_Aplanarity__381->SetBinContent(14,48);
   VbbHcc_both_Aplanarity__381->SetBinContent(15,39);
   VbbHcc_both_Aplanarity__381->SetBinContent(16,14);
   VbbHcc_both_Aplanarity__381->SetBinContent(17,10);
   VbbHcc_both_Aplanarity__381->SetBinContent(18,7);
   VbbHcc_both_Aplanarity__381->SetBinContent(19,4);
   VbbHcc_both_Aplanarity__381->SetBinContent(20,2);
   VbbHcc_both_Aplanarity__381->SetEntries(57975);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity__381->SetLineColor(ci);
   VbbHcc_both_Aplanarity__381->SetLineWidth(2);
   VbbHcc_both_Aplanarity__381->SetMarkerStyle(20);
   VbbHcc_both_Aplanarity__381->SetMarkerSize(1.2);
   VbbHcc_both_Aplanarity__381->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity__381->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__381->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity__381->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__381->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__381->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__381->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__381->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity__381->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__381->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Aplanarity_fx1381[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VbbHcc_both_Aplanarity_fy1381[50] = { 129282, 39649.81, 50485.65, 8940.558, 42153.76, 3581.699, 2098.505, 1554.531, 1254.938, 482.3082, 406.7888, 540.8834, 65.59112, 244.0124, 19.19802, 43.34277, 12.84269,
   7.995052, 168.2662, 0.4048846, 0.1722039, 0, 0.1810845, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VbbHcc_both_Aplanarity_fex1381[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VbbHcc_both_Aplanarity_fey1381[50] = { 5269.341, 3053.507, 32693.91, 1377.736, 34819.78, 777.2955, 470.9979, 428.0841, 432.6764, 225.4305, 202.3676, 436.2728, 12.9246, 114.0296, 4.474045, 24.36611, 7.343344,
   4.050774, 166.3675, 0.1637972, 0.09982611, 0, 0.1810845, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_both_Aplanarity_fx1381,Graph_from_VbbHcc_both_Aplanarity_fy1381,Graph_from_VbbHcc_both_Aplanarity_fex1381,Graph_from_VbbHcc_both_Aplanarity_fey1381);
   gre->SetName("Graph_from_VbbHcc_both_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Aplanarity1381 = new TH1F("Graph_Graph_from_VbbHcc_both_Aplanarity1381","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Aplanarity1381->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity1381->SetMaximum(148006.4);
   Graph_Graph_from_VbbHcc_both_Aplanarity1381->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_both_Aplanarity1381->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Aplanarity1381->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Aplanarity1381->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1381->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_both_Aplanarity1381->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1381->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1381->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1381->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1381->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_both_Aplanarity1381->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Aplanarity1381);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_both_17->cd();
  
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
   
   TH1D *data_mc_ratio__382 = new TH1D("data_mc_ratio__382","",50,0,1);
   data_mc_ratio__382->SetBinContent(1,0.2726212);
   data_mc_ratio__382->SetBinContent(2,0.2591942);
   data_mc_ratio__382->SetBinContent(3,0.0944823);
   data_mc_ratio__382->SetBinContent(4,0.3049027);
   data_mc_ratio__382->SetBinContent(5,0.03966432);
   data_mc_ratio__382->SetBinContent(6,0.3034873);
   data_mc_ratio__382->SetBinContent(7,0.3378595);
   data_mc_ratio__382->SetBinContent(8,0.3094181);
   data_mc_ratio__382->SetBinContent(9,0.2565864);
   data_mc_ratio__382->SetBinContent(10,0.3939389);
   data_mc_ratio__382->SetBinContent(11,0.3761165);
   data_mc_ratio__382->SetBinContent(12,0.1959757);
   data_mc_ratio__382->SetBinContent(13,0.9757419);
   data_mc_ratio__382->SetBinContent(14,0.1967113);
   data_mc_ratio__382->SetBinContent(15,2.031459);
   data_mc_ratio__382->SetBinContent(16,0.3230066);
   data_mc_ratio__382->SetBinContent(17,0.7786528);
   data_mc_ratio__382->SetBinContent(18,0.8755415);
   data_mc_ratio__382->SetBinContent(19,0.02377185);
   data_mc_ratio__382->SetBinContent(20,4.939679);
   data_mc_ratio__382->SetBinError(1,0.001452148);
   data_mc_ratio__382->SetBinError(2,0.002556772);
   data_mc_ratio__382->SetBinError(3,0.001368016);
   data_mc_ratio__382->SetBinError(4,0.005839804);
   data_mc_ratio__382->SetBinError(5,0.0009700226);
   data_mc_ratio__382->SetBinError(6,0.009205041);
   data_mc_ratio__382->SetBinError(7,0.01268858);
   data_mc_ratio__382->SetBinError(8,0.01410825);
   data_mc_ratio__382->SetBinError(9,0.014299);
   data_mc_ratio__382->SetBinError(10,0.02857933);
   data_mc_ratio__382->SetBinError(11,0.03040722);
   data_mc_ratio__382->SetBinError(12,0.01903484);
   data_mc_ratio__382->SetBinError(13,0.1219677);
   data_mc_ratio__382->SetBinError(14,0.02839283);
   data_mc_ratio__382->SetBinError(15,0.3252938);
   data_mc_ratio__382->SetBinError(16,0.08632715);
   data_mc_ratio__382->SetBinError(17,0.2462316);
   data_mc_ratio__382->SetBinError(18,0.3309236);
   data_mc_ratio__382->SetBinError(19,0.01188593);
   data_mc_ratio__382->SetBinError(20,3.492881);
   data_mc_ratio__382->SetMinimum(0.4);
   data_mc_ratio__382->SetMaximum(1.6);
   data_mc_ratio__382->SetEntries(10.19564);
   data_mc_ratio__382->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__382->SetLineColor(ci);
   data_mc_ratio__382->SetLineWidth(2);
   data_mc_ratio__382->SetMarkerStyle(20);
   data_mc_ratio__382->SetMarkerSize(1.2);
   data_mc_ratio__382->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__382->GetXaxis()->SetRange(1,50);
   data_mc_ratio__382->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__382->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__382->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__382->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__382->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__382->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__382->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__382->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__382->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__382->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__382->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__382->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__382->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__382->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__382->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__382->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1382[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1382[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1382[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1382[50] = { 0.04075852, 0.07701188, 0.6475882, 0.1540995, 0.8260185, 0.2170187, 0.2244445, 0.2753784, 0.3447791, 0.4673991, 0.4974759, 0.8065932, 0.1970481, 0.4673105, 0.2330472, 0.5621724, 0.5717915,
   0.5066601, 0.9887158, 0.4045527, 0.5796971, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1382,Graph_from_mc_statistical_error_fy1382,Graph_from_mc_statistical_error_fex1382,Graph_from_mc_statistical_error_fey1382);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1382 = new TH1F("Graph_Graph_from_mc_statistical_error1382","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1382->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1382->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1382->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1382->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1382->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1382->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1382->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1382->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1382->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1382->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1382->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1382->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1382->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1382);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_both_17->cd();
   Aplanarity_both_17->Modified();
   Aplanarity_both_17->cd();
   Aplanarity_both_17->SetSelected(Aplanarity_both_17);
}
