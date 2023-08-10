void H_dR_Bj1_both_17_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_both_17/H_dR_Bj1_both_17
//=========  (Thu Aug 10 12:21:45 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_both_17 = new TCanvas("H_dR_Bj1_both_17", "H_dR_Bj1_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_both_17->SetHighLightColor(2);
   H_dR_Bj1_both_17->Range(0,0,1,1);
   H_dR_Bj1_both_17->SetFillColor(0);
   H_dR_Bj1_both_17->SetFillStyle(4000);
   H_dR_Bj1_both_17->SetBorderMode(0);
   H_dR_Bj1_both_17->SetBorderSize(2);
   H_dR_Bj1_both_17->SetFrameFillStyle(1000);
   H_dR_Bj1_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.880272,6.314516,12.75543);
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
   st->SetMaximum(4.407825e+10);
   
   TH1F *st_stack_238 = new TH1F("st_stack_238","",30,0,6);
   st_stack_238->SetMinimum(0.001365726);
   st_stack_238->SetMaximum(1.555453e+11);
   st_stack_238->SetDirectory(0);
   st_stack_238->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_238->SetLineColor(ci);
   st_stack_238->GetXaxis()->SetRange(1,30);
   st_stack_238->GetXaxis()->SetLabelFont(42);
   st_stack_238->GetXaxis()->SetLabelSize(0.035);
   st_stack_238->GetXaxis()->SetTitleSize(0.035);
   st_stack_238->GetXaxis()->SetTitleFont(42);
   st_stack_238->GetYaxis()->SetTitle("Events/0.2");
   st_stack_238->GetYaxis()->SetLabelFont(42);
   st_stack_238->GetYaxis()->SetLabelSize(0.05);
   st_stack_238->GetYaxis()->SetTitleSize(0.057);
   st_stack_238->GetYaxis()->SetTitleOffset(1.2);
   st_stack_238->GetYaxis()->SetTitleFont(42);
   st_stack_238->GetZaxis()->SetLabelFont(42);
   st_stack_238->GetZaxis()->SetLabelSize(0.035);
   st_stack_238->GetZaxis()->SetTitleSize(0.035);
   st_stack_238->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_238);
   
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(1,9253.639);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(2,58378.94);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(3,26094.66);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(4,20350.61);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(5,15203.36);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(6,11001.85);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(7,8262.58);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(8,9635.943);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(9,6458.764);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(10,7514.701);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(11,5175.622);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(12,5730.568);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(13,4388.187);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(14,4638.707);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(15,4467.939);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(16,3831.487);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(17,2417.011);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(18,2432.638);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(19,1231.802);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(20,883.9156);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(21,1072.972);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(22,165.7587);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(23,671.5927);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(24,317.1319);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(25,68.51393);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(26,54.3457);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(27,4.908904);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(28,7.615129);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(29,7.299435);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(31,24.98391);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(1,937.1322);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(2,21054.61);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(3,2020.831);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(4,1801.631);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(5,1533.92);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(6,1319.146);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(7,1104.335);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(8,1309.063);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(9,992.1255);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(10,1657.23);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(11,873.835);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(12,985.8915);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(13,783.6724);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(14,828.8622);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(15,863.4396);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(16,733.1686);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(17,614.8327);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(18,666.9711);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(19,471.6618);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(20,387.2077);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(21,468.6953);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(22,49.51897);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(23,381.8841);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(24,268.9394);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(25,36.98549);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(26,35.60277);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(27,4.409974);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(28,7.103986);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(29,7.087383);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(31,24.98391);
   VbbHcc_both_H_dR_Bj1_stack_1->SetEntries(10320);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(1,56.83898);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(2,134.3887);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(3,150.1389);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(4,124.5847);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(5,92.71759);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(6,74.67417);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(7,61.75569);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(8,54.83352);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(9,44.64443);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(10,42.24283);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(11,32.347);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(12,29.71689);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(13,32.03869);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(14,28.25171);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(15,24.50247);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(16,17.88692);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(17,13.57327);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(18,10.52575);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(19,6.044906);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(20,4.145316);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(21,3.524644);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(22,1.736029);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(23,1.632957);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(24,1.314079);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(25,0.5794459);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(26,0.05302899);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(27,0.1037628);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(28,0.159087);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(1,3.058864);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(2,4.486084);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(3,4.853489);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(4,4.496005);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(5,3.713441);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(6,3.376081);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(7,3.082487);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(8,2.987259);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(9,2.633811);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(10,2.674019);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(11,2.164682);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(12,2.184877);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(13,2.273478);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(14,2.128218);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(15,1.943464);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(16,1.663488);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(17,1.485697);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(18,1.351597);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(19,0.9910665);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(20,0.7403003);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(21,0.7569566);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(22,0.5075105);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(23,0.5539415);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(24,0.4845832);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(25,0.2934268);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(26,0.05302899);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(27,0.07337139);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(28,0.0918489);
   VbbHcc_both_H_dR_Bj1_stack_2->SetEntries(12006);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_3 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(1,880.1737);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(2,2678.535);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(3,3048.625);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(4,2608.774);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(5,2108.401);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(6,1622.049);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(7,1306.097);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(8,1066.936);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(9,877.4218);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(10,743.839);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(11,651.4009);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(12,573.234);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(13,500.0521);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(14,460.528);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(15,428.1308);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(16,379.8827);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(17,226.9052);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(18,148.385);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(19,92.51435);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(20,67.76327);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(21,44.99012);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(22,28.18986);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(23,20.1828);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(24,12.79009);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(25,7.979855);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(26,4.338781);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(27,2.864054);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(28,2.103953);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(29,0.9501265);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(30,0.4640818);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(31,1.195914);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(1,7.504279);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(2,13.08211);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(3,13.9699);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(4,12.92718);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(5,11.60945);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(6,10.173);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(7,9.128955);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(8,8.227661);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(9,7.460687);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(10,6.876548);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(11,6.439151);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(12,6.033734);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(13,5.649991);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(14,5.411838);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(15,5.216167);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(16,4.911915);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(17,3.807614);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(18,3.066194);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(19,2.424277);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(20,2.072855);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(21,1.693527);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(22,1.333292);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(23,1.133228);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(24,0.9025802);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(25,0.7088885);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(26,0.5291467);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(27,0.4285599);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(28,0.3665195);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(29,0.248312);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(30,0.168228);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(31,0.2787728);
   VbbHcc_both_H_dR_Bj1_stack_3->SetEntries(333938);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_4 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(1,163.2544);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(2,388.4625);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(3,380.8402);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(4,275.8169);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(5,216.1417);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(6,173.7079);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(7,120.9033);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(8,107.2649);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(9,90.62772);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(10,81.53964);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(11,79.12652);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(12,66.44746);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(13,59.85493);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(14,57.00319);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(15,57.16289);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(16,52.1142);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(17,25.72012);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(18,25.90635);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(19,12.40623);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(20,8.508118);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(21,6.294912);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(22,2.279711);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(23,1.780915);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(24,2.626996);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(25,0.8634113);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(26,0.5222149);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(27,0.07142358);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(29,0.360867);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(1,5.970651);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(2,11.66315);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(3,12.29495);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(4,11.06976);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(5,11.17616);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(6,10.37333);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(7,5.881899);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(8,7.645436);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(9,6.893301);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(10,5.680066);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(11,6.146569);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(12,5.830066);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(13,3.607868);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(14,4.276329);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(15,4.310468);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(16,5.571586);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(17,2.303089);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(18,5.698577);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(19,1.648733);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(20,1.414382);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(21,1.191472);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(22,0.6191704);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(23,0.6674895);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(24,0.8445175);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(25,0.4156599);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(26,0.3786987);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(27,0.07142358);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(29,0.360867);
   VbbHcc_both_H_dR_Bj1_stack_4->SetEntries(18216);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_5 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(1,23.00818);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(2,40.90971);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(3,42.81282);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(4,26.90669);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(5,24.74518);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(6,18.5627);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(7,9.467532);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(8,9.565375);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(9,13.30354);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(10,9.229476);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(11,7.922355);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(12,6.985407);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(13,4.275397);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(14,4.222279);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(15,5.776532);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(16,6.808962);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(17,2.915701);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(18,0.9155738);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(19,1.20416);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(20,1.34145);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(21,1.494543);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(22,0.2656689);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(23,0.5530051);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(24,0.1090719);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(29,0.08447854);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(1,1.853399);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(2,3.776708);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(3,7.921524);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(4,7.043448);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(5,4.0614);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(6,3.198591);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(7,1.900264);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(8,1.975828);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(9,2.62261);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(10,1.916371);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(11,1.906235);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(12,1.830115);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(13,0.8148776);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(14,0.6757945);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(15,1.368759);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(16,1.785485);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(17,1.224777);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(18,0.3102815);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(19,0.5011437);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(20,0.4003595);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(21,1.168904);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(22,0.1898094);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(23,0.2716635);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(24,0.1090719);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(29,0.08447854);
   VbbHcc_both_H_dR_Bj1_stack_5->SetEntries(2376);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_6 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(1,0.3153059);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(2,0.3153059);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(3,0.3153059);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(14,0.3153059);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(16,0.3153059);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(1,0.3153059);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(2,0.3153059);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(3,0.3153059);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(14,0.3153059);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(16,0.3153059);
   VbbHcc_both_H_dR_Bj1_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_7 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(2,1.735595);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(3,0.7438266);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(4,0.4958844);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(5,1.487653);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(6,0.2479422);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(8,0.4958844);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(9,0.4958844);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(10,0.2479422);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(12,0.2479422);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(14,0.2479422);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(2,0.6559934);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(3,0.4294485);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(4,0.3506432);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(5,0.6073318);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(6,0.2479422);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(8,0.3506432);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(9,0.3506432);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(10,0.2479422);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(12,0.2479422);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(14,0.2479422);
   VbbHcc_both_H_dR_Bj1_stack_7->SetEntries(26);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_8 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(1,3.291933);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(2,9.622573);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(3,11.9016);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(4,4.811287);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(5,2.785482);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(6,1.772579);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(7,1.519354);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(8,1.519354);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(9,0.5064512);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(10,1.266128);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(11,1.519354);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(12,1.012902);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(13,1.519354);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(14,1.519354);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(15,0.2532256);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(16,1.012902);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(17,0.2532256);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(18,0.2532256);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(19,0.2532256);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(1,0.9130179);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(2,1.560987);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(3,1.736027);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(4,1.103785);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(5,0.8398543);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(6,0.669972);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(7,0.6202735);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(8,0.6202735);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(9,0.3581151);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(10,0.5662297);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(11,0.6202735);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(12,0.5064512);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(13,0.6202735);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(14,0.6202735);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(15,0.2532256);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(16,0.5064512);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(17,0.2532256);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(18,0.2532256);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(19,0.2532256);
   VbbHcc_both_H_dR_Bj1_stack_8->SetEntries(184);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_9 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(1,2.622064);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(2,8.968027);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(3,8.696319);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(4,5.967572);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(5,3.985605);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(6,2.720413);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(7,2.091984);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(8,1.771936);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(9,1.461888);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(10,1.365207);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(11,1.226853);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(12,1.155175);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(13,1.128505);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(14,1.156842);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(15,0.9268073);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(16,0.9268073);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(17,0.5317473);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(18,0.3017124);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(19,0.1633581);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(20,0.1100167);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(21,0.05167451);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(22,0.02667071);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(23,0.03000455);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(24,0.01166844);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(25,0.005000759);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(26,0.005000759);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(27,0.003333839);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(28,0.00166692);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(31,0.003333839);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(1,0.0661118);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(2,0.122266);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(3,0.1203996);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(4,0.09973697);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(5,0.08150879);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(6,0.06734025);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(7,0.05905226);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(8,0.05434771);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(9,0.04936447);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(10,0.0477042);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(11,0.04522239);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(12,0.04388148);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(13,0.04337195);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(14,0.04391313);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(15,0.03930538);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(16,0.03930538);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(17,0.02977214);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(18,0.02242611);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(19,0.01650166);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(20,0.01354212);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(21,0.009281015);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(22,0.006667678);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(23,0.007072141);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(24,0.004410255);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(25,0.002887189);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(26,0.002887189);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(27,0.00235738);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(28,0.00166692);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(31,0.00235738);
   VbbHcc_both_H_dR_Bj1_stack_9->SetEntries(28446);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_10 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(1,1.039058);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(2,3.519496);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(3,3.915169);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(4,2.940533);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(5,1.986262);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(6,1.307134);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(7,0.9912609);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(8,0.8441304);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(9,0.7352371);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(10,0.584366);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(11,0.5469599);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(12,0.4887727);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(13,0.4118824);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(14,0.393595);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(15,0.352864);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(16,0.332914);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(17,0.1733148);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(18,0.0993339);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(19,0.05569349);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(20,0.0324186);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(21,0.0270155);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(22,0.01329994);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(23,0.007481215);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(24,0.006234345);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(25,0.001662492);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(26,0.001246869);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(27,0.002493738);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(28,0.0008312461);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(31,0.0008312461);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(1,0.02078115);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(2,0.03824635);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(3,0.04033899);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(4,0.03495931);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(5,0.02873215);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(6,0.02330826);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(7,0.02029756);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(8,0.01873072);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(9,0.01748089);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(10,0.01558448);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(11,0.01507744);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(12,0.0142529);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(13,0.01308388);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(14,0.01279012);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(15,0.01211026);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(16,0.01176294);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(17,0.008487262);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(18,0.006425376);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(19,0.004811184);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(20,0.003670683);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(21,0.00335086);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(22,0.002351119);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(23,0.001763339);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(24,0.001609701);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(25,0.0008312461);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(26,0.0007198802);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(27,0.001018064);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(28,0.0005877797);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(31,0.0005877797);
   VbbHcc_both_H_dR_Bj1_stack_10->SetEntries(50073);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_11 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(1,0.004740753);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(2,0.03002477);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(3,0.02686427);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(4,0.03002477);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(5,0.01580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(6,0.01106176);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(7,0.004740753);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(8,0.003160502);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(9,0.004740753);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(10,0.003160502);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(11,0.004740753);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(12,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(14,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(16,0.004740753);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(17,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(21,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(1,0.002737075);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(2,0.006888155);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(3,0.006515542);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(4,0.006888155);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(5,0.004997193);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(6,0.004180952);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(7,0.002737075);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(8,0.002234813);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(9,0.002737075);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(10,0.002234813);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(11,0.002737075);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(12,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(14,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(16,0.002737075);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(17,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(21,0.001580251);
   VbbHcc_both_H_dR_Bj1_stack_11->SetEntries(95);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_12 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(1,0.002283662);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(2,0.01058789);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(3,0.01038028);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(4,0.009342254);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(5,0.007473804);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(6,0.004359719);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(7,0.002491268);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(8,0.00332169);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(9,0.003114085);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(10,0.002283662);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(11,0.00145324);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(12,0.002283662);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(13,0.0008304226);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(14,0.001038028);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(15,0.0008304226);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(16,0.001038028);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(17,0.0004152113);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(18,0.0002076057);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(22,0.0002076057);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(1,0.0006885501);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(2,0.001482601);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(3,0.001467994);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(4,0.001392661);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(5,0.001245634);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(6,0.0009513686);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(7,0.0007191671);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(8,0.0008304226);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(9,0.0008040532);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(10,0.0006885501);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(11,0.0005492729);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(12,0.0006885501);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(13,0.0004152113);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(14,0.0004642204);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(15,0.0004152113);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(16,0.0004642204);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(17,0.0002935987);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(18,0.0002076057);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(22,0.0002076057);
   VbbHcc_both_H_dR_Bj1_stack_12->SetEntries(308);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR_Bj1__653 = new TH1D("VbbHcc_both_H_dR_Bj1__653","",30,0,6);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(1,4506);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(2,10671);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(3,9735);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(4,7551);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(5,5753);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(6,4804);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(7,3743);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(8,3138);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(9,2649);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(10,2317);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(11,2094);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(12,1862);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(13,1787);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(14,1695);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(15,1526);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(16,1370);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(17,800);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(18,563);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(19,340);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(20,248);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(21,184);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(22,119);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(23,83);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(24,65);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(25,38);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(26,12);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(27,9);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(28,5);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(29,6);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(30,6);
   VbbHcc_both_H_dR_Bj1__653->SetBinContent(31,5);
   VbbHcc_both_H_dR_Bj1__653->SetEntries(67713);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1__653->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1__653->SetLineWidth(2);
   VbbHcc_both_H_dR_Bj1__653->SetMarkerStyle(20);
   VbbHcc_both_H_dR_Bj1__653->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_Bj1__653->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1__653->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__653->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__653->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__653->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__653->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__653->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__653->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__653->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1__653->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__653->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__653->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__653->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__653->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__653->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fx1475[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fy1475[30] = {
   10384.19,
   61645.44,
   29742.69,
   23400.94,
   17655.64,
   12896.91,
   9765.413,
   10879.18,
   7487.969,
   8395.021,
   5949.718,
   6409.86,
   4987.469,
   5192.348,
   4985.045,
   4290.774,
   2687.086,
   2619.025,
   1344.444,
   965.8161,
   1129.357,
   198.2702,
   695.7799,
   333.9901,
   77.9433,
   59.26598,
   7.953972,
   9.880667,
   8.694907,
   0.4640818};
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fex1475[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fey1475[30] = {
   937.1885,
   21054.61,
   2020.939,
   1801.731,
   1534.015,
   1319.234,
   1104.395,
   1309.116,
   992.1846,
   1657.258,
   873.8853,
   985.9315,
   783.7051,
   828.8942,
   863.4694,
   733.2106,
   614.8519,
   667.004,
   471.6723,
   387.2168,
   468.702,
   49.54375,
   381.8869,
   268.9427,
   36.99578,
   35.60876,
   4.431933,
   7.114028,
   7.10141,
   0.168228};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_Bj1_fx1475,Graph_from_VbbHcc_both_H_dR_Bj1_fy1475,Graph_from_VbbHcc_both_H_dR_Bj1_fex1475,Graph_from_VbbHcc_both_H_dR_Bj1_fey1475);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_Bj11475 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_Bj11475","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->SetMinimum(0.2662685);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->SetMaximum(90970.03);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11475->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_Bj11475);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR_Bj1","MC unc. (stat.)","fl");

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
   H_dR_Bj1_both_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9193524,-0.2774193,6.314516,1.658065);
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
   
   TH1D *data_mc_ratio__654 = new TH1D("data_mc_ratio__654","",30,0,6);
   data_mc_ratio__654->SetBinContent(1,0.4339289);
   data_mc_ratio__654->SetBinContent(2,0.1731028);
   data_mc_ratio__654->SetBinContent(3,0.3273073);
   data_mc_ratio__654->SetBinContent(4,0.3226793);
   data_mc_ratio__654->SetBinContent(5,0.325845);
   data_mc_ratio__654->SetBinContent(6,0.3724923);
   data_mc_ratio__654->SetBinContent(7,0.3832915);
   data_mc_ratio__654->SetBinContent(8,0.2884408);
   data_mc_ratio__654->SetBinContent(9,0.3537675);
   data_mc_ratio__654->SetBinContent(10,0.2759969);
   data_mc_ratio__654->SetBinContent(11,0.3519494);
   data_mc_ratio__654->SetBinContent(12,0.2904899);
   data_mc_ratio__654->SetBinContent(13,0.358298);
   data_mc_ratio__654->SetBinContent(14,0.3264419);
   data_mc_ratio__654->SetBinContent(15,0.3061156);
   data_mc_ratio__654->SetBinContent(16,0.3192897);
   data_mc_ratio__654->SetBinContent(17,0.2977203);
   data_mc_ratio__654->SetBinContent(18,0.2149655);
   data_mc_ratio__654->SetBinContent(19,0.2528926);
   data_mc_ratio__654->SetBinContent(20,0.2567777);
   data_mc_ratio__654->SetBinContent(21,0.1629246);
   data_mc_ratio__654->SetBinContent(22,0.6001911);
   data_mc_ratio__654->SetBinContent(23,0.1192906);
   data_mc_ratio__654->SetBinContent(24,0.1946166);
   data_mc_ratio__654->SetBinContent(25,0.4875339);
   data_mc_ratio__654->SetBinContent(26,0.202477);
   data_mc_ratio__654->SetBinContent(27,1.13151);
   data_mc_ratio__654->SetBinContent(28,0.5060387);
   data_mc_ratio__654->SetBinContent(29,0.6900591);
   data_mc_ratio__654->SetBinContent(30,12.92876);
   data_mc_ratio__654->SetBinContent(31,0.1909564);
   data_mc_ratio__654->SetBinError(1,0.006464322);
   data_mc_ratio__654->SetBinError(2,0.001675721);
   data_mc_ratio__654->SetBinError(3,0.003317323);
   data_mc_ratio__654->SetBinError(4,0.003713376);
   data_mc_ratio__654->SetBinError(5,0.004295996);
   data_mc_ratio__654->SetBinError(6,0.005374224);
   data_mc_ratio__654->SetBinError(7,0.006264975);
   data_mc_ratio__654->SetBinError(8,0.005149087);
   data_mc_ratio__654->SetBinError(9,0.006873484);
   data_mc_ratio__654->SetBinError(10,0.005733783);
   data_mc_ratio__654->SetBinError(11,0.007691162);
   data_mc_ratio__654->SetBinError(12,0.006731956);
   data_mc_ratio__654->SetBinError(13,0.008475827);
   data_mc_ratio__654->SetBinError(14,0.007929048);
   data_mc_ratio__654->SetBinError(15,0.007836247);
   data_mc_ratio__654->SetBinError(16,0.008626302);
   data_mc_ratio__654->SetBinError(17,0.010526);
   data_mc_ratio__654->SetBinError(18,0.009059716);
   data_mc_ratio__654->SetBinError(19,0.01371503);
   data_mc_ratio__654->SetBinError(20,0.0163054);
   data_mc_ratio__654->SetBinError(21,0.01201096);
   data_mc_ratio__654->SetBinError(22,0.05501943);
   data_mc_ratio__654->SetBinError(23,0.01309385);
   data_mc_ratio__654->SetBinError(24,0.02413921);
   data_mc_ratio__654->SetBinError(25,0.07908844);
   data_mc_ratio__654->SetBinError(26,0.05845009);
   data_mc_ratio__654->SetBinError(27,0.37717);
   data_mc_ratio__654->SetBinError(28,0.2263074);
   data_mc_ratio__654->SetBinError(29,0.2817155);
   data_mc_ratio__654->SetBinError(30,5.278142);
   data_mc_ratio__654->SetBinError(31,0.2012348);
   data_mc_ratio__654->SetMinimum(0.4);
   data_mc_ratio__654->SetMaximum(1.6);
   data_mc_ratio__654->SetEntries(10.57451);
   data_mc_ratio__654->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__654->SetLineColor(ci);
   data_mc_ratio__654->SetLineWidth(2);
   data_mc_ratio__654->SetMarkerStyle(20);
   data_mc_ratio__654->SetMarkerSize(1.2);
   data_mc_ratio__654->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__654->GetXaxis()->SetRange(1,30);
   data_mc_ratio__654->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__654->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__654->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__654->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__654->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__654->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__654->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__654->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__654->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__654->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__654->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__654->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__654->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__654->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__654->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__654->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__654->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1476[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_mc_statistical_error_fy1476[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1476[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_mc_statistical_error_fey1476[30] = {
   0.09025149,
   0.3415437,
   0.06794742,
   0.07699394,
   0.08688529,
   0.1022907,
   0.1130925,
   0.1203322,
   0.1325038,
   0.1974096,
   0.1468784,
   0.1538148,
   0.1571348,
   0.1596376,
   0.1732119,
   0.1708807,
   0.2288174,
   0.2546765,
   0.3508307,
   0.4009218,
   0.4150167,
   0.24988,
   0.5488616,
   0.8052417,
   0.4746499,
   0.6008296,
   0.5571974,
   0.7199947,
   0.8167321,
   0.3624964};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1476,Graph_from_mc_statistical_error_fy1476,Graph_from_mc_statistical_error_fex1476,Graph_from_mc_statistical_error_fey1476);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1476 = new TH1F("Graph_Graph_from_mc_statistical_error1476","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1476->SetMinimum(0.01992143);
   Graph_Graph_from_mc_statistical_error1476->SetMaximum(1.980079);
   Graph_Graph_from_mc_statistical_error1476->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1476->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1476->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1476->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1476->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1476->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1476->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1476->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1476->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1476->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1476);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_both_17->cd();
   H_dR_Bj1_both_17->Modified();
   H_dR_Bj1_both_17->cd();
   H_dR_Bj1_both_17->SetSelected(H_dR_Bj1_both_17);
}
