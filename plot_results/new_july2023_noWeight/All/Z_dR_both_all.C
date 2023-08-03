void Z_dR_both_all()
{
//=========Macro generated from canvas: Z_dR_both_all/Z_dR_both_all
//=========  (Thu Aug  3 10:21:43 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_both_all = new TCanvas("Z_dR_both_all", "Z_dR_both_all",0,0,600,600);
   Z_dR_both_all->SetHighLightColor(2);
   Z_dR_both_all->Range(0,0,1,1);
   Z_dR_both_all->SetFillColor(0);
   Z_dR_both_all->SetFillStyle(4000);
   Z_dR_both_all->SetBorderMode(0);
   Z_dR_both_all->SetBorderSize(2);
   Z_dR_both_all->SetFrameFillStyle(1000);
   Z_dR_both_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-142.1483,6.314516,142306.1);
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
   st->SetMinimum(0.3);
   st->SetMaximum(121963.1);
   
   TH1F *st_stack_212 = new TH1F("st_stack_212","",30,0,6);
   st_stack_212->SetMinimum(0.3);
   st_stack_212->SetMaximum(128061.3);
   st_stack_212->SetDirectory(0);
   st_stack_212->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_212->SetLineColor(ci);
   st_stack_212->GetXaxis()->SetRange(1,30);
   st_stack_212->GetXaxis()->SetLabelFont(42);
   st_stack_212->GetXaxis()->SetLabelSize(0.035);
   st_stack_212->GetXaxis()->SetTitleSize(0.035);
   st_stack_212->GetXaxis()->SetTitleFont(42);
   st_stack_212->GetYaxis()->SetTitle("Events/0.2");
   st_stack_212->GetYaxis()->SetLabelFont(42);
   st_stack_212->GetYaxis()->SetLabelSize(0.05);
   st_stack_212->GetYaxis()->SetTitleSize(0.057);
   st_stack_212->GetYaxis()->SetTitleOffset(1.2);
   st_stack_212->GetYaxis()->SetTitleFont(42);
   st_stack_212->GetZaxis()->SetLabelFont(42);
   st_stack_212->GetZaxis()->SetLabelSize(0.035);
   st_stack_212->GetZaxis()->SetTitleSize(0.035);
   st_stack_212->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_212);
   
   
   TH1D *VbbHcc_both_Z_dR_all_stack_1 = new TH1D("VbbHcc_both_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(3,46719.02);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(4,46037.45);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(5,50656.04);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(6,29160.91);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(7,25088.99);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(8,26036.95);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(9,17903.41);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(10,19243.31);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(11,25581.85);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(12,25541.19);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(13,24770.55);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(14,25282.71);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(15,32156.89);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(16,30522.77);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(17,27513.84);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(18,36580.55);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(19,18950.75);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(20,18081.27);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(21,12789.83);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(22,12368.6);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(23,11378.29);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(24,9031.701);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(25,9510.378);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(26,6007.521);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(27,5545.249);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(28,5609.516);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(29,4341.801);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(30,2126.139);
   VbbHcc_both_Z_dR_all_stack_1->SetBinContent(31,2650.716);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(3,2947.289);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(4,2982.58);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(5,15153.96);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(6,2580.922);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(7,2019.042);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(8,2950.23);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(9,1551.006);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(10,1700.781);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(11,2950.314);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(12,2634.255);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(13,2358.325);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(14,2459.71);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(15,3346.851);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(16,3318.072);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(17,2260.495);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(18,14944.27);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(19,1826.546);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(20,1804.601);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(21,1901.687);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(22,1423.528);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(23,1899.146);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(24,1299.81);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(25,1901.441);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(26,989.6791);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(27,914.2455);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(28,951.1881);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(29,740.0402);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(30,331.5324);
   VbbHcc_both_Z_dR_all_stack_1->SetBinError(31,670.724);
   VbbHcc_both_Z_dR_all_stack_1->SetEntries(31751);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_2 = new TH1D("VbbHcc_both_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(2,0.1018896);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(3,128.4269);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(4,174.5504);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(5,151.3589);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(6,167.74);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(7,164.5358);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(8,167.777);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(9,166.9691);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(10,155.8068);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(11,159.717);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(12,163.0876);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(13,168.3884);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(14,153.0992);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(15,169.5657);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(16,150.0172);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(17,124.6552);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(18,132.8172);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(19,108.1756);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(20,93.52323);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(21,90.74543);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(22,79.14106);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(23,73.22847);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(24,54.69219);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(25,50.78195);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(26,48.89979);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(27,33.81872);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(28,35.80344);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(29,24.11503);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(30,19.03622);
   VbbHcc_both_Z_dR_all_stack_2->SetBinContent(31,14.28178);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(2,0.07224915);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(3,4.574914);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(4,5.361098);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(5,4.860708);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(6,5.295521);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(7,5.189147);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(8,5.198428);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(9,5.216302);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(10,5.016963);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(11,5.09517);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(12,5.15784);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(13,5.203339);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(14,4.946281);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(15,5.342085);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(16,4.840765);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(17,4.340178);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(18,4.71215);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(19,4.064539);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(20,3.79243);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(21,3.869447);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(22,3.572358);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(23,3.520373);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(24,2.987382);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(25,2.803083);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(26,2.890784);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(27,2.334543);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(28,2.50566);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(29,1.953462);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(30,1.758261);
   VbbHcc_both_Z_dR_all_stack_2->SetBinError(31,1.551545);
   VbbHcc_both_Z_dR_all_stack_2->SetEntries(38814);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_3 = new TH1D("VbbHcc_both_Z_dR_all_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(2,2.337745);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(3,2194.008);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(4,3270.757);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(5,3387.622);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(6,3531.749);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(7,3485.746);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(8,3367.912);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(9,3242.083);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(10,3139.67);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(11,3106.76);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(12,3063.544);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(13,3060.481);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(14,3013.562);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(15,2945.792);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(16,2852.876);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(17,2640.046);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(18,2414.034);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(19,2180.916);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(20,1950.724);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(21,1726.907);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(22,1514.273);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(23,1326.475);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(24,1157.655);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(25,978.3577);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(26,859.4517);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(27,736.5223);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(28,599.0142);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(29,480.1105);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(30,313.479);
   VbbHcc_both_Z_dR_all_stack_3->SetBinContent(31,238.0684);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(2,0.3790083);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(3,11.65937);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(4,14.29895);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(5,14.58692);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(6,14.89524);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(7,14.78297);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(8,14.49973);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(9,14.20628);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(10,13.96415);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(11,13.88134);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(12,13.78945);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(13,13.78375);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(14,13.69161);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(15,13.55015);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(16,13.34363);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(17,12.84239);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(18,12.2816);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(19,11.67798);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(20,11.03171);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(21,10.38335);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(22,9.70346);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(23,9.086629);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(24,8.482387);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(25,7.800785);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(26,7.314418);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(27,6.774819);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(28,6.107124);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(29,5.451441);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(30,4.413588);
   VbbHcc_both_Z_dR_all_stack_3->SetBinError(31,3.833741);
   VbbHcc_both_Z_dR_all_stack_3->SetEntries(1047064);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_4 = new TH1D("VbbHcc_both_Z_dR_all_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(2,0.2111875);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(3,432.6642);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(4,636.4909);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(5,601.7807);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(6,544.8857);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(7,439.1634);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(8,360.3736);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(9,315.1032);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(10,285.4717);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(11,302.544);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(12,313.027);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(13,332.6694);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(14,377.3924);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(15,337.7543);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(16,343.0251);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(17,322.1053);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(18,283.6596);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(19,267.8738);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(20,243.9195);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(21,188.8211);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(22,168.5803);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(23,138.2241);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(24,123.4516);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(25,107.7015);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(26,107.6576);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(27,89.11882);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(28,81.94852);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(29,68.97353);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(30,50.63618);
   VbbHcc_both_Z_dR_all_stack_4->SetBinContent(31,27.66829);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(2,0.1223132);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(3,8.456447);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(4,13.3631);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(5,15.72726);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(6,18.81006);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(7,17.58632);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(8,13.46343);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(9,12.86431);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(10,11.71036);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(11,12.08277);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(12,12.02081);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(13,14.70041);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(14,16.11134);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(15,12.27346);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(16,13.65001);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(17,13.3104);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(18,11.37939);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(19,13.48809);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(20,11.60716);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(21,9.289775);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(22,8.984601);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(23,8.990829);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(24,9.208704);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(25,7.31355);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(26,9.957554);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(27,5.439021);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(28,5.618246);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(29,5.504777);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(30,5.115383);
   VbbHcc_both_Z_dR_all_stack_4->SetBinError(31,2.418549);
   VbbHcc_both_Z_dR_all_stack_4->SetEntries(52623);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_5 = new TH1D("VbbHcc_both_Z_dR_all_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(2,0.0002136538);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(3,88.82792);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(4,77.81249);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(5,41.1068);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(6,47.47502);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(7,32.16867);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(8,40.7452);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(9,42.22872);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(10,26.52528);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(11,33.9198);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(12,29.7645);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(13,29.63644);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(14,34.9375);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(15,37.71584);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(16,33.52623);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(17,30.47804);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(18,26.89518);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(19,18.0975);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(20,17.20137);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(21,18.42363);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(22,11.8635);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(23,16.44778);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(24,10.35803);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(25,14.81188);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(26,16.06511);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(27,7.819428);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(28,6.474815);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(29,8.16304);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(30,6.16311);
   VbbHcc_both_Z_dR_all_stack_5->SetBinContent(31,3.556915);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(2,0.0002136538);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(3,8.527081);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(4,6.784057);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(5,3.880226);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(6,10.95077);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(7,3.100995);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(8,5.319766);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(9,7.876692);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(10,3.806643);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(11,4.963449);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(12,3.615238);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(13,3.989935);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(14,4.55713);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(15,7.387023);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(16,5.122);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(17,4.277567);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(18,3.513881);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(19,1.949508);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(20,2.761172);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(21,2.843215);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(22,1.557461);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(23,3.601416);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(24,1.90632);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(25,6.726501);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(26,3.867794);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(27,1.548413);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(28,0.9863871);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(29,1.260588);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(30,1.054527);
   VbbHcc_both_Z_dR_all_stack_5->SetBinError(31,1.328413);
   VbbHcc_both_Z_dR_all_stack_5->SetEntries(8810);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_6 = new TH1D("VbbHcc_both_Z_dR_all_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(3,0.1343693);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(4,0.4520427);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(5,0.7673486);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(7,0.1343693);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(9,0.7673486);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(10,0.1343693);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(11,1.038455);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(12,0.2687386);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(13,0.1343693);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(14,0.6306118);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(17,0.3153059);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(22,0.2687386);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(25,0.1343693);
   VbbHcc_both_Z_dR_all_stack_6->SetBinContent(28,0.1343693);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(3,0.1343693);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(4,0.4520427);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(5,0.5511446);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(7,0.1343693);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(9,0.5511446);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(10,0.1343693);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(11,0.6532536);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(12,0.1900269);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(13,0.1343693);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(14,0.4459099);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(17,0.3153059);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(22,0.1900269);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(25,0.1343693);
   VbbHcc_both_Z_dR_all_stack_6->SetBinError(28,0.1343693);
   VbbHcc_both_Z_dR_all_stack_6->SetEntries(21);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_7 = new TH1D("VbbHcc_both_Z_dR_all_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(3,0.6543518);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(4,1.106395);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(5,1.094524);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(6,0.2181173);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(7,0.1090586);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(8,0.1090586);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(9,0.9854658);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(10,0.2181173);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(11,1.122203);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(13,0.4362346);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(14,1.066846);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(15,0.4362346);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(16,0.2181173);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(17,0.6424818);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(18,0.1090586);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(19,0.1090586);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(21,0.1090586);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(22,0.2181173);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(24,0.3271759);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(25,0.1090586);
   VbbHcc_both_Z_dR_all_stack_7->SetBinContent(29,0.1090586);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(3,0.267138);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(4,0.5250765);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(5,0.5826163);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(6,0.1542322);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(7,0.1090586);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(8,0.1090586);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(9,0.5723181);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(10,0.1542322);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(11,0.6576266);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(13,0.2181173);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(14,0.4963978);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(15,0.2181173);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(16,0.1542322);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(17,0.3675584);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(18,0.1090586);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(19,0.1090586);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(21,0.1090586);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(22,0.1542322);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(24,0.1888951);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(25,0.1090586);
   VbbHcc_both_Z_dR_all_stack_7->SetBinError(29,0.1090586);
   VbbHcc_both_Z_dR_all_stack_7->SetEntries(62);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_8 = new TH1D("VbbHcc_both_Z_dR_all_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(3,10.0901);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(4,18.12776);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(5,20.36308);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(6,9.58958);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(7,4.986875);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(8,4.681271);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(9,4.878253);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(10,2.787767);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(11,4.562631);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(12,4.355631);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(13,6.144381);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(14,7.403001);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(15,8.751561);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(16,6.232966);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(17,5.46327);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(18,6.196758);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(19,4.964552);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(20,4.46812);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(21,2.67937);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(22,2.56073);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(23,2.67937);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(24,1.06528);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(25,0.8120543);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(26,1.847279);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(27,1.505469);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(28,2.958784);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(29,1.515487);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(30,1.784883);
   VbbHcc_both_Z_dR_all_stack_8->SetBinContent(31,0.5226215);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(3,1.639145);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(4,2.17025);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(5,2.309668);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(6,1.579309);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(7,1.146317);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(8,1.105451);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(9,1.121283);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(10,0.8416568);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(11,1.077163);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(12,1.058325);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(13,1.256141);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(14,1.401749);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(15,1.525888);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(16,1.274642);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(17,1.194725);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(18,1.267197);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(19,1.140642);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(20,1.085261);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(21,0.8485008);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(22,0.8113027);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(23,0.8485008);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(24,0.5332834);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(25,0.4693271);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(26,0.6998133);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(27,0.6154628);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(28,0.893323);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(29,0.6194901);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(30,0.6759193);
   VbbHcc_both_Z_dR_all_stack_8->SetBinError(31,0.370435);
   VbbHcc_both_Z_dR_all_stack_8->SetEntries(591);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_9 = new TH1D("VbbHcc_both_Z_dR_all_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(2,0.001373951);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(3,8.678165);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(4,16.81315);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(5,16.02115);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(6,12.50172);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(7,8.021577);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(8,5.043443);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(9,3.652794);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(10,3.498546);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(11,3.90395);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(12,4.676451);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(13,5.832801);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(14,6.904597);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(15,7.431933);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(16,7.591378);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(17,7.303431);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(18,6.499121);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(19,5.419278);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(20,4.156704);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(21,2.879085);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(22,2.205199);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(23,1.539559);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(24,1.214753);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(25,1.202807);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(26,1.44335);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(27,1.49458);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(28,1.767669);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(29,1.478281);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(30,0.8457916);
   VbbHcc_both_Z_dR_all_stack_9->SetBinContent(31,0.4422203);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(2,0.001373951);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(3,0.1272921);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(4,0.1768392);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(5,0.1718402);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(6,0.1509844);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(7,0.1200821);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(8,0.09449442);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(9,0.08081227);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(10,0.07922525);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(11,0.08411707);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(12,0.09197904);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(13,0.1032902);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(14,0.1132172);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(15,0.1166887);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(16,0.1186784);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(17,0.1161553);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(18,0.1092371);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(19,0.1000227);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(20,0.08718655);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(21,0.07249986);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(22,0.0635029);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(23,0.05333687);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(24,0.04670303);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(25,0.04650625);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(26,0.05114133);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(27,0.05234363);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(28,0.05715102);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(29,0.05213806);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(30,0.03979066);
   VbbHcc_both_Z_dR_all_stack_9->SetBinError(31,0.02834885);
   VbbHcc_both_Z_dR_all_stack_9->SetEntries(85972);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_10 = new TH1D("VbbHcc_both_Z_dR_all_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(3,2.848507);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(4,5.95572);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(5,7.15891);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(6,6.451232);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(7,4.823709);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(8,3.396033);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(9,2.519991);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(10,2.26676);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(11,2.210638);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(12,2.452919);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(13,2.652766);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(14,2.700675);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(15,2.732158);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(16,2.723945);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(17,2.585694);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(18,2.406379);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(19,2.020373);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(20,1.786305);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(21,1.433151);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(22,1.204558);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(23,0.9212134);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(24,0.8404533);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(25,0.8076017);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(26,0.8910995);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(27,0.9239511);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(28,0.7706436);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(29,0.633762);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(30,0.3955879);
   VbbHcc_both_Z_dR_all_stack_10->SetBinContent(31,0.1998472);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(3,0.03693366);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(4,0.05340487);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(5,0.05855138);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(6,0.05558211);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(7,0.04806227);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(8,0.04032735);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(9,0.03473867);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(10,0.03294704);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(11,0.03253663);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(12,0.03427325);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(13,0.03564209);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(14,0.0359625);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(15,0.0361715);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(16,0.0361171);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(17,0.03518862);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(18,0.03394656);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(19,0.03110495);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(20,0.02924769);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(21,0.02619749);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(22,0.02401749);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(23,0.0210036);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(24,0.02006183);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(25,0.01966583);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(26,0.02065745);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(27,0.02103479);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(28,0.01921058);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(29,0.01742115);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(30,0.0137637);
   VbbHcc_both_Z_dR_all_stack_10->SetBinError(31,0.00978279);
   VbbHcc_both_Z_dR_all_stack_10->SetEntries(150600);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_11 = new TH1D("VbbHcc_both_Z_dR_all_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(3,0.06060895);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(4,0.07047501);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(5,0.07051596);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(6,0.04995941);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(7,0.01542405);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(8,0.01087253);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(9,0.009751523);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(10,0.00589551);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(11,0.0143368);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(12,0.01175727);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(13,0.01341831);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(14,0.008866782);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(15,0.0158833);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(16,0.01044703);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(17,0.01002154);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(18,0.005470015);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(19,0.004315259);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(20,0.003160502);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(22,0.003160502);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(23,0.01499856);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(25,0.003160502);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(26,0.003160502);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(27,0.003856013);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(28,0.003160502);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(29,0.01321579);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(30,0.002275762);
   VbbHcc_both_Z_dR_all_stack_11->SetBinContent(31,0.001580251);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(3,0.01128767);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(4,0.01266428);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(5,0.01182831);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(6,0.01043959);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(7,0.005541222);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(8,0.00451076);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(9,0.00448898);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(10,0.003531947);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(11,0.005941058);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(12,0.00449024);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(13,0.005540201);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(14,0.004509506);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(15,0.005745112);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(16,0.004778372);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(17,0.005031771);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(18,0.003867885);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(19,0.003158712);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(20,0.002234813);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(22,0.002234813);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(23,0.005761165);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(25,0.002234813);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(26,0.002234813);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(27,0.002770611);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(28,0.002234813);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(29,0.005924538);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(30,0.002275762);
   VbbHcc_both_Z_dR_all_stack_11->SetBinError(31,0.001580251);
   VbbHcc_both_Z_dR_all_stack_11->SetEntries(215);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_all_stack_12 = new TH1D("VbbHcc_both_Z_dR_all_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(3,0.01557379);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(4,0.02841657);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(5,0.03347596);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(6,0.02297344);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(7,0.01249679);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(8,0.008104588);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(9,0.005728874);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(10,0.006052035);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(11,0.005787156);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(12,0.006950668);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(13,0.006467246);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(14,0.004415365);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(15,0.005071952);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(16,0.003873997);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(17,0.00533683);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(18,0.005072288);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(19,0.004945458);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(20,0.00493323);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(21,0.00360811);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(22,0.00217871);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(23,0.003550501);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(24,0.001694615);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(25,0.003424008);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(26,0.00185555);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(27,0.002743582);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(28,0.003619385);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(29,0.001729057);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(30,0.0007148681);
   VbbHcc_both_Z_dR_all_stack_12->SetBinContent(31,0.0009800828);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(3,0.002105137);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(4,0.002822574);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(5,0.003092549);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(6,0.002603523);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(7,0.001840526);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(8,0.001491891);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(9,0.001305735);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(10,0.001320776);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(11,0.001258658);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(12,0.00144676);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(13,0.001353015);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(14,0.001091235);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(15,0.001219635);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(16,0.0009847671);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(17,0.001283642);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(18,0.001186687);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(19,0.001196648);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(20,0.001209177);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(21,0.00102342);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(22,0.0007849306);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(23,0.00100476);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(24,0.0007156934);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(25,0.0009767292);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(26,0.0007593483);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(27,0.0008870485);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(28,0.00101353);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(29,0.0007218493);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(30,0.0004195169);
   VbbHcc_both_Z_dR_all_stack_12->SetBinError(31,0.0005068917);
   VbbHcc_both_Z_dR_all_stack_12->SetEntries(775);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR_all__423 = new TH1D("VbbHcc_both_Z_dR_all__423","",30,0,6);
   VbbHcc_both_Z_dR_all__423->SetBinContent(2,25);
   VbbHcc_both_Z_dR_all__423->SetBinContent(3,35704);
   VbbHcc_both_Z_dR_all__423->SetBinContent(4,40096);
   VbbHcc_both_Z_dR_all__423->SetBinContent(5,30367);
   VbbHcc_both_Z_dR_all__423->SetBinContent(6,26766);
   VbbHcc_both_Z_dR_all__423->SetBinContent(7,24282);
   VbbHcc_both_Z_dR_all__423->SetBinContent(8,22587);
   VbbHcc_both_Z_dR_all__423->SetBinContent(9,21695);
   VbbHcc_both_Z_dR_all__423->SetBinContent(10,20962);
   VbbHcc_both_Z_dR_all__423->SetBinContent(11,20932);
   VbbHcc_both_Z_dR_all__423->SetBinContent(12,20900);
   VbbHcc_both_Z_dR_all__423->SetBinContent(13,21566);
   VbbHcc_both_Z_dR_all__423->SetBinContent(14,21920);
   VbbHcc_both_Z_dR_all__423->SetBinContent(15,22533);
   VbbHcc_both_Z_dR_all__423->SetBinContent(16,22167);
   VbbHcc_both_Z_dR_all__423->SetBinContent(17,20699);
   VbbHcc_both_Z_dR_all__423->SetBinContent(18,18975);
   VbbHcc_both_Z_dR_all__423->SetBinContent(19,17262);
   VbbHcc_both_Z_dR_all__423->SetBinContent(20,15268);
   VbbHcc_both_Z_dR_all__423->SetBinContent(21,13215);
   VbbHcc_both_Z_dR_all__423->SetBinContent(22,11279);
   VbbHcc_both_Z_dR_all__423->SetBinContent(23,9419);
   VbbHcc_both_Z_dR_all__423->SetBinContent(24,8189);
   VbbHcc_both_Z_dR_all__423->SetBinContent(25,7003);
   VbbHcc_both_Z_dR_all__423->SetBinContent(26,6120);
   VbbHcc_both_Z_dR_all__423->SetBinContent(27,5582);
   VbbHcc_both_Z_dR_all__423->SetBinContent(28,5103);
   VbbHcc_both_Z_dR_all__423->SetBinContent(29,4832);
   VbbHcc_both_Z_dR_all__423->SetBinContent(30,3316);
   VbbHcc_both_Z_dR_all__423->SetBinContent(31,2401);
   VbbHcc_both_Z_dR_all__423->SetEntries(501194);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_all__423->SetLineColor(ci);
   VbbHcc_both_Z_dR_all__423->SetLineWidth(2);
   VbbHcc_both_Z_dR_all__423->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_all__423->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_all__423->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_all__423->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all__423->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all__423->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all__423->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all__423->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all__423->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all__423->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all__423->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_all__423->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all__423->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_all__423->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_all__423->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_all__423->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_all__423->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_all_fx1423[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_all_fy1423[30] = {
   0,
   2.65241,
   49585.43,
   50239.62,
   54883.42,
   33481.59,
   29228.71,
   29987.01,
   21682.61,
   22859.7,
   29197.65,
   29122.38,
   28376.95,
   28880.43,
   35667.09,
   33919,
   30647.45,
   39453.18,
   21538.34,
   20397.06,
   14821.84,
   14148.92,
   12937.82,
   10381.31,
   10665.1,
   7043.782,
   6416.459,
   6338.396,
   4926.915,
   2518.483};
   Double_t Graph_from_VbbHcc_both_Z_dR_all_fex1423[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_all_fey1423[30] = {
   0,
   0.4047588,
   2947.34,
   2982.658,
   15153.98,
   2581.063,
   2019.182,
   2950.306,
   1551.154,
   1700.89,
   2950.38,
   2634.326,
   2358.42,
   2459.81,
   3346.914,
   3318.135,
   2260.579,
   14944.28,
   1826.639,
   1804.679,
   1901.744,
   1423.595,
   1899.196,
   1299.875,
   1901.485,
   989.7683,
   914.2913,
   951.2286,
   740.0847,
   331.6082};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_all_fx1423,Graph_from_VbbHcc_both_Z_dR_all_fy1423,Graph_from_VbbHcc_both_Z_dR_all_fex1423,Graph_from_VbbHcc_both_Z_dR_all_fey1423);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_all1423 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_all1423","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->SetMaximum(77041.13);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_all1423->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_all1423);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_both_all->cd();
  
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
   
   TH1D *data_mc_ratio__424 = new TH1D("data_mc_ratio__424","",30,0,6);
   data_mc_ratio__424->SetBinContent(2,9.425391);
   data_mc_ratio__424->SetBinContent(3,0.7200503);
   data_mc_ratio__424->SetBinContent(4,0.7980952);
   data_mc_ratio__424->SetBinContent(5,0.5533001);
   data_mc_ratio__424->SetBinContent(6,0.7994244);
   data_mc_ratio__424->SetBinContent(7,0.8307585);
   data_mc_ratio__424->SetBinContent(8,0.7532261);
   data_mc_ratio__424->SetBinContent(9,1.000571);
   data_mc_ratio__424->SetBinContent(10,0.916985);
   data_mc_ratio__424->SetBinContent(11,0.7169071);
   data_mc_ratio__424->SetBinContent(12,0.7176611);
   data_mc_ratio__424->SetBinContent(13,0.759983);
   data_mc_ratio__424->SetBinContent(14,0.7589916);
   data_mc_ratio__424->SetBinContent(15,0.6317589);
   data_mc_ratio__424->SetBinContent(16,0.6535276);
   data_mc_ratio__424->SetBinContent(17,0.6753907);
   data_mc_ratio__424->SetBinContent(18,0.4809499);
   data_mc_ratio__424->SetBinContent(19,0.8014546);
   data_mc_ratio__424->SetBinContent(20,0.7485393);
   data_mc_ratio__424->SetBinContent(21,0.8915899);
   data_mc_ratio__424->SetBinContent(22,0.7971632);
   data_mc_ratio__424->SetBinContent(23,0.7280206);
   data_mc_ratio__424->SetBinContent(24,0.7888217);
   data_mc_ratio__424->SetBinContent(25,0.6566275);
   data_mc_ratio__424->SetBinContent(26,0.8688514);
   data_mc_ratio__424->SetBinContent(27,0.8699502);
   data_mc_ratio__424->SetBinContent(28,0.8050933);
   data_mc_ratio__424->SetBinContent(29,0.9807354);
   data_mc_ratio__424->SetBinContent(30,1.316666);
   data_mc_ratio__424->SetBinContent(31,0.8179301);
   data_mc_ratio__424->SetBinError(2,1.885078);
   data_mc_ratio__424->SetBinError(3,0.003810697);
   data_mc_ratio__424->SetBinError(4,0.003985696);
   data_mc_ratio__424->SetBinError(5,0.003175118);
   data_mc_ratio__424->SetBinError(6,0.004886362);
   data_mc_ratio__424->SetBinError(7,0.005331293);
   data_mc_ratio__424->SetBinError(8,0.005011827);
   data_mc_ratio__424->SetBinError(9,0.006793104);
   data_mc_ratio__424->SetBinError(10,0.00633353);
   data_mc_ratio__424->SetBinError(11,0.004955158);
   data_mc_ratio__424->SetBinError(12,0.004964165);
   data_mc_ratio__424->SetBinError(13,0.005175104);
   data_mc_ratio__424->SetBinError(14,0.00512645);
   data_mc_ratio__424->SetBinError(15,0.004208641);
   data_mc_ratio__424->SetBinError(16,0.004389454);
   data_mc_ratio__424->SetBinError(17,0.004694403);
   data_mc_ratio__424->SetBinError(18,0.003491475);
   data_mc_ratio__424->SetBinError(19,0.00610005);
   data_mc_ratio__424->SetBinError(20,0.00605792);
   data_mc_ratio__424->SetBinError(21,0.007755889);
   data_mc_ratio__424->SetBinError(22,0.007506059);
   data_mc_ratio__424->SetBinError(23,0.007501382);
   data_mc_ratio__424->SetBinError(24,0.008716927);
   data_mc_ratio__424->SetBinError(25,0.007846518);
   data_mc_ratio__424->SetBinError(26,0.01110631);
   data_mc_ratio__424->SetBinError(27,0.01164393);
   data_mc_ratio__424->SetBinError(28,0.01127025);
   data_mc_ratio__424->SetBinError(29,0.01410875);
   data_mc_ratio__424->SetBinError(30,0.02286485);
   data_mc_ratio__424->SetBinError(31,0.1876383);
   data_mc_ratio__424->SetMinimum(0.4);
   data_mc_ratio__424->SetMaximum(1.6);
   data_mc_ratio__424->SetEntries(167.753);
   data_mc_ratio__424->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__424->SetLineColor(ci);
   data_mc_ratio__424->SetLineWidth(2);
   data_mc_ratio__424->SetMarkerStyle(20);
   data_mc_ratio__424->SetMarkerSize(1.2);
   data_mc_ratio__424->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__424->GetXaxis()->SetRange(1,30);
   data_mc_ratio__424->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__424->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__424->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__424->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__424->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__424->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__424->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__424->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__424->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__424->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__424->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__424->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__424->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__424->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__424->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__424->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__424->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1424[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1424[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1424[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1424[30] = {
   0,
   0.1526004,
   0.05943965,
   0.05936864,
   0.2761121,
   0.07708902,
   0.06908215,
   0.09838612,
   0.07153908,
   0.07440562,
   0.1010486,
   0.0904571,
   0.08311043,
   0.08517224,
   0.09383761,
   0.09782526,
   0.07376076,
   0.3787852,
   0.08480873,
   0.08847741,
   0.1283069,
   0.1006151,
   0.1467941,
   0.1252131,
   0.1782904,
   0.1405166,
   0.1424916,
   0.150074,
   0.1502126,
   0.1316698};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1424,Graph_from_mc_statistical_error_fy1424,Graph_from_mc_statistical_error_fex1424,Graph_from_mc_statistical_error_fey1424);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1424 = new TH1F("Graph_Graph_from_mc_statistical_error1424","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1424->SetMinimum(0.5454578);
   Graph_Graph_from_mc_statistical_error1424->SetMaximum(1.454542);
   Graph_Graph_from_mc_statistical_error1424->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1424->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1424->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1424->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1424->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1424->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1424->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1424->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1424->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1424->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1424->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1424->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1424->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1424->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1424->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1424->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1424);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_both_all->cd();
   Z_dR_both_all->Modified();
   Z_dR_both_all->cd();
   Z_dR_both_all->SetSelected(Z_dR_both_all);
}
