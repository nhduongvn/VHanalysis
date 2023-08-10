void Z_dR_Bj1_tags_17()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_17/Z_dR_Bj1_tags_17
//=========  (Thu Aug 10 12:27:51 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_tags_17 = new TCanvas("Z_dR_Bj1_tags_17", "Z_dR_Bj1_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_tags_17->SetHighLightColor(2);
   Z_dR_Bj1_tags_17->Range(0,0,1,1);
   Z_dR_Bj1_tags_17->SetFillColor(0);
   Z_dR_Bj1_tags_17->SetFillStyle(4000);
   Z_dR_Bj1_tags_17->SetBorderMode(0);
   Z_dR_Bj1_tags_17->SetBorderSize(2);
   Z_dR_Bj1_tags_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-68.13192,6.314516,68073.78);
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
   st->SetMaximum(58342.47);
   
   TH1F *st_stack_54 = new TH1F("st_stack_54","",30,0,6);
   st_stack_54->SetMinimum(0.01);
   st_stack_54->SetMaximum(61259.59);
   st_stack_54->SetDirectory(0);
   st_stack_54->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_54->SetLineColor(ci);
   st_stack_54->GetXaxis()->SetRange(1,30);
   st_stack_54->GetXaxis()->SetLabelFont(42);
   st_stack_54->GetXaxis()->SetLabelSize(0.035);
   st_stack_54->GetXaxis()->SetTitleSize(0.035);
   st_stack_54->GetXaxis()->SetTitleFont(42);
   st_stack_54->GetYaxis()->SetTitle("Events/0.2");
   st_stack_54->GetYaxis()->SetLabelFont(42);
   st_stack_54->GetYaxis()->SetLabelSize(0.05);
   st_stack_54->GetYaxis()->SetTitleSize(0.057);
   st_stack_54->GetYaxis()->SetTitleOffset(1.2);
   st_stack_54->GetYaxis()->SetTitleFont(42);
   st_stack_54->GetZaxis()->SetLabelFont(42);
   st_stack_54->GetZaxis()->SetLabelSize(0.035);
   st_stack_54->GetZaxis()->SetTitleSize(0.035);
   st_stack_54->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_54);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(1,4815.937);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(2,22736.83);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(3,23414.99);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(4,19374.23);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(5,14579);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(6,12571.76);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(7,9998.141);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(8,9430.13);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(9,7393.32);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(10,23711.62);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(11,7596.708);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(12,5678.801);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(13,20130.64);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(14,4107.785);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(15,4358.622);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(16,3306.472);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(17,2688.895);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(18,1874.813);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(19,1710.372);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(20,1833.755);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(21,1135.225);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(22,1506.253);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(23,898.2071);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(24,322.7693);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(25,679.3186);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(26,642.357);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(27,91.76887);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(28,876.1532);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(29,75.40147);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(30,11.43023);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(31,48.98157);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(1,635.9151);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(2,1733.225);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(3,1869.503);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(4,1815.416);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(5,1527.649);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(6,1403.16);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(7,1601.61);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(8,1229.405);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(9,1065.271);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(10,14906.9);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(11,1158.582);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(12,986.127);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(13,14840.33);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(14,736.0821);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(15,863.5039);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(16,771.1084);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(17,619.1381);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(18,484.2593);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(19,479.1573);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(20,548.1005);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(21,393.3129);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(22,543.557);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(23,387.325);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(24,73.85867);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(25,381.5133);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(26,380.7697);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(27,34.86056);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(28,465.9463);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(29,33.68436);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(30,7.96071);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(31,31.48715);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetEntries(10314);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(1,22.51934);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(2,99.88245);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(3,115.3232);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(4,106.7865);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(5,94.85446);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(6,82.0038);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(7,61.35222);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(8,52.49788);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(9,47.61657);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(10,41.66186);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(11,36.29885);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(12,32.54693);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(13,32.94701);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(14,25.15349);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(15,20.57281);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(16,18.08974);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(17,16.97756);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(18,13.26246);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(19,10.07926);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(20,7.273263);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(21,5.438609);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(22,5.585155);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(23,6.003172);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(24,3.879473);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(25,2.317066);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(26,0.8952076);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(27,1.470741);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(28,0.7251448);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(29,0.8378252);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(30,0.6661842);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(31,0.8229892);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(1,1.91981);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(2,3.875285);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(3,4.178386);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(4,3.926537);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(5,3.930425);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(6,3.623282);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(7,2.947105);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(8,2.84222);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(9,2.709245);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(10,2.490512);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(11,2.367199);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(12,2.217023);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(13,2.295709);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(14,1.94029);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(15,1.69237);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(16,1.68972);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(17,1.60483);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(18,1.453813);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(19,1.226066);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(20,0.9576537);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(21,0.8785268);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(22,0.9450496);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(23,1.040066);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(24,0.8343725);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(25,0.6268515);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(26,0.3165759);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(27,0.4899138);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(28,0.3856941);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(29,0.4589374);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(30,0.3799686);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(31,0.391231);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetEntries(11980);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_3 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(1,308.0222);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(2,1662.475);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(3,2299.893);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(4,2236.427);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(5,1937.334);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(6,1567.806);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(7,1260.475);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(8,1076.887);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(9,919.0181);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(10,810.0578);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(11,731.7786);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(12,680.6656);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(13,604.4915);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(14,530.9278);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(15,449.3974);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(16,383.4231);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(17,303.2091);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(18,248.0473);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(19,205.5796);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(20,165.1726);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(21,126.1248);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(22,97.39546);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(23,74.75959);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(24,58.87996);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(25,41.91867);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(26,31.98208);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(27,18.94732);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(28,12.9506);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(29,9.172253);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(30,5.208623);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(31,9.219232);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(1,4.374085);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(2,10.15022);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(3,11.98702);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(4,11.83499);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(5,11.00324);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(6,9.907339);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(7,8.860108);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(8,8.203151);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(9,7.580836);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(10,7.122531);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(11,6.758364);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(12,6.524382);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(13,6.162222);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(14,5.765643);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(15,5.304182);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(16,4.897673);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(17,4.349781);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(18,3.934528);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(19,3.575255);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(20,3.20917);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(21,2.796681);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(22,2.463568);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(23,2.150217);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(24,1.901673);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(25,1.598942);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(26,1.400435);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(27,1.071788);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(28,0.8866478);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(29,0.7534015);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(30,0.5623556);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(31,0.752602);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetEntries(317372);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_4 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(1,77.65714);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(2,310.7948);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(3,371.3292);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(4,285.914);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(5,201.8479);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(6,173.791);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(7,134.2933);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(8,103.9576);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(9,109.3169);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(10,82.02487);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(11,90.7459);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(12,78.62702);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(13,55.24034);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(14,56.43404);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(15,53.55759);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(16,38.20201);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(17,31.95355);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(18,34.42117);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(19,17.97218);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(20,17.66827);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(21,15.28432);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(22,13.27629);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(23,11.94903);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(24,4.916755);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(25,3.330902);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(26,4.658161);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(27,1.233123);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(28,1.75871);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(29,0.8797009);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(30,0.4860414);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(31,0.9015736);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(1,2.960892);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(2,10.56072);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(3,11.92493);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(4,11.22381);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(5,10.01385);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(6,10.0138);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(7,8.011924);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(8,5.531628);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(9,8.534709);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(10,5.59497);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(11,7.827942);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(12,6.13109);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(13,4.258069);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(14,3.447857);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(15,4.387225);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(16,4.660625);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(17,3.606454);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(18,5.311281);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(19,1.810371);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(20,1.924975);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(21,3.212915);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(22,3.110911);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(23,3.014456);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(24,0.949528);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(25,0.5291429);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(26,0.9331735);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(27,0.4385604);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(28,0.662741);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(29,0.2596696);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(30,0.3656514);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(31,0.4127351);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetEntries(17051);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_5 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(1,17.09634);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(2,48.48016);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(3,37.50111);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(4,38.1191);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(5,20.10848);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(6,12.13461);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(7,11.33621);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(8,8.389098);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(9,7.188799);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(10,8.029579);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(11,7.186835);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(12,3.800944);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(13,3.884892);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(14,4.449058);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(15,2.17185);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(16,3.214821);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(17,1.36772);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(18,2.206732);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(19,2.142668);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(20,1.840561);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(21,1.210295);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(22,1.107426);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(23,1.457236);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(24,1.719556);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(25,0.6618834);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(26,0.2638103);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(27,0.0808647);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(28,0.1624047);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(29,0.3555471);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(1,2.143104);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(2,5.063406);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(3,4.165064);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(4,9.879675);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(5,2.967111);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(6,2.062829);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(7,2.048144);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(8,1.542877);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(9,1.842659);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(10,2.160623);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(11,2.123558);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(12,0.6449003);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(13,0.7685575);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(14,1.342392);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(15,0.6485001);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(16,1.258451);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(17,0.3994038);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(18,0.5385021);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(19,0.5865668);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(20,0.5492301);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(21,0.4036902);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(22,0.3932253);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(23,0.580648);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(24,1.19037);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(25,0.292728);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(26,0.1317338);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(27,0.04920937);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(28,0.1148375);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(29,0.3532979);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetEntries(2254);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_6 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(2,0.3153059);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(4,0.3153059);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(7,0.6306118);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(10,0.3153059);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(2,0.3153059);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(4,0.3153059);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(7,0.4459099);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(10,0.3153059);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_7 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(1,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(2,1.239711);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(3,0.7438266);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(4,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(5,0.7438266);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(7,0.7438266);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(8,0.4958844);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(9,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(12,0.4958844);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(14,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(16,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(26,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(1,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(2,0.5544156);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(3,0.4294485);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(4,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(5,0.4294485);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(7,0.4294485);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(8,0.3506432);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(9,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(12,0.3506432);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(14,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(16,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(26,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetEntries(24);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_8 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(1,1.772579);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(2,7.849994);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(3,4.05161);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(4,6.077415);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(5,4.304835);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(6,2.025805);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(7,2.785482);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(8,2.025805);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(9,2.27903);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(10,2.025805);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(11,1.012902);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(12,2.27903);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(13,1.012902);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(14,0.7596768);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(15,0.7596768);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(16,1.772579);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(18,0.7596768);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(19,0.5064512);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(20,0.5064512);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(21,0.2532256);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(22,0.2532256);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(1,0.669972);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(2,1.409901);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(3,1.012902);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(4,1.240547);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(5,1.044076);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(6,0.7162302);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(7,0.8398543);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(8,0.7162302);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(9,0.7596768);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(10,0.7162302);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(11,0.5064512);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(12,0.7596768);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(13,0.5064512);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(14,0.4385996);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(15,0.4385996);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(16,0.669972);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(18,0.4385996);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(19,0.3581151);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(20,0.3581151);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(21,0.2532256);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(22,0.2532256);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetEntries(178);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_9 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(1,1.24687);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(2,5.743356);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(3,6.993456);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(4,5.961396);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(5,4.490025);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(6,3.194701);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(7,2.529273);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(8,2.109343);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(9,2.025357);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(10,1.896147);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(11,1.883226);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(12,1.813776);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(13,1.540822);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(14,1.277557);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(15,0.9916818);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(16,0.7914073);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(17,0.5701363);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(18,0.4021641);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(19,0.2535733);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(20,0.1808931);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(21,0.1760477);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(22,0.1324396);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(23,0.1324396);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(24,0.07429538);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(25,0.05652909);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(26,0.03230234);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(27,0.02745699);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(28,0.01130582);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(29,0.004845351);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(30,0.001615117);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(31,0.001615117);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(1,0.04487584);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(2,0.09631298);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(3,0.1062791);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(4,0.09812417);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(5,0.08515818);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(6,0.07183186);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(7,0.06391456);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(8,0.0583681);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(9,0.0571943);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(10,0.05533985);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(11,0.05515098);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(12,0.05412449);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(13,0.04988594);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(14,0.04542471);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(15,0.04002102);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(16,0.03575214);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(17,0.03034529);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(18,0.02548611);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(19,0.02023736);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(20,0.01709279);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(21,0.01686232);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(22,0.01462551);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(23,0.01462551);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(24,0.01095426);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(25,0.00955516);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(26,0.007223022);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(27,0.006659297);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(28,0.004273198);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(29,0.002797464);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(30,0.001615117);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(31,0.001615117);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetEntries(28819);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_10 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(1,0.5066724);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(2,2.43551);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(3,3.242786);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(4,2.739846);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(5,2.069396);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(6,1.493067);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(7,1.086734);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(8,0.9208833);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(9,0.8354705);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(10,0.7579355);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(11,0.7289117);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(12,0.6397672);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(13,0.5638907);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(14,0.5099894);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(15,0.416284);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(16,0.298945);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(17,0.2653603);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(18,0.1911424);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(19,0.1612893);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(20,0.1148513);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(21,0.1032418);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(22,0.08126661);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(23,0.06426696);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(24,0.04809656);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(25,0.02985304);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(26,0.02653603);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(27,0.01119489);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(28,0.005390132);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(29,0.002902379);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(30,0.001658502);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(31,0.0008292511);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(1,0.01449411);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(2,0.03177774);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(3,0.036668);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(4,0.03370475);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(5,0.02929205);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(6,0.02488099);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(7,0.02122705);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(8,0.01954026);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(9,0.01861202);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(10,0.01772736);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(11,0.01738463);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(12,0.01628692);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(13,0.01529063);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(14,0.01454148);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(15,0.01313781);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(16,0.01113329);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(17,0.01048929);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(18,0.008902388);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(19,0.008177694);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(20,0.006900744);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(21,0.006542681);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(22,0.005804758);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(23,0.005162046);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(24,0.004465654);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(25,0.003518214);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(26,0.003317004);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(27,0.002154457);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(28,0.001494954);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(29,0.001096996);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(30,0.0008292511);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(31,0.0005863691);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetEntries(49090);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_11 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(1,0.01106176);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(2,0.03634578);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(3,0.03002477);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(4,0.01896301);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(5,0.01106176);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(6,0.007901256);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(7,0.003160502);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(8,0.003160502);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(9,0.004740753);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(10,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(12,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(13,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(14,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(15,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(19,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(26,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(1,0.004180952);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(2,0.007578618);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(3,0.006888155);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(4,0.005474151);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(5,0.004180952);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(6,0.003533549);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(7,0.002234813);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(8,0.002234813);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(9,0.002737075);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(10,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(12,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(13,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(14,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(15,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(19,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(26,0.001580251);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetEntries(87);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_12 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(1,0.003114085);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(2,0.01266394);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(3,0.01474);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(4,0.00622817);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(5,0.00332169);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(6,0.002698874);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(7,0.001868451);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(8,0.002283662);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(9,0.001245634);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(10,0.001868451);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(11,0.001245634);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(12,0.001868451);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(13,0.000622817);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(14,0.0008304226);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(15,0.0008304226);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(16,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(18,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(19,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(20,0.0004152113);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(21,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(23,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(24,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(25,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(28,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(1,0.0008040532);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(2,0.001621452);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(3,0.001749316);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(4,0.001137103);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(5,0.0008304226);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(6,0.0007485328);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(7,0.000622817);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(8,0.0006885501);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(9,0.0005085279);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(10,0.000622817);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(11,0.0005085279);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(12,0.000622817);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(13,0.0003595835);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(14,0.0004152113);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(15,0.0004152113);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(16,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(18,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(19,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(20,0.0002935987);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(21,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(23,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(24,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(25,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(28,0.0002076057);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetEntries(277);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1__147 = new TH1D("VbbHcc_tags_Z_dR_Bj1__147","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(1,2648);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(2,9922);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(3,9441);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(4,7438);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(5,5984);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(6,4816);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(7,3924);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(8,3325);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(9,2813);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(10,2525);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(11,2292);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(12,2071);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(13,1838);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(14,1614);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(15,1438);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(16,1228);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(17,1010);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(18,853);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(19,696);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(20,619);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(21,478);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(22,409);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(23,328);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(24,238);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(25,194);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(26,137);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(27,96);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(28,58);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(29,42);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(30,21);
   VbbHcc_tags_Z_dR_Bj1__147->SetBinContent(31,35);
   VbbHcc_tags_Z_dR_Bj1__147->SetEntries(68560);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1__147->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1__147->SetLineWidth(2);
   VbbHcc_tags_Z_dR_Bj1__147->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_Bj1__147->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_Bj1__147->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1__147->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__147->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__147->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__147->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__147->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__147->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__147->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__147->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1__147->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__147->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__147->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__147->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__147->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__147->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fx1107[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fy1107[30] = {
   5245.021,
   24876.09,
   26254.11,
   22056.84,
   16844.77,
   14414.22,
   11473.38,
   10677.42,
   8481.855,
   24658.39,
   8466.344,
   6479.673,
   20830.32,
   4727.547,
   4886.492,
   3752.512,
   3043.239,
   2174.103,
   1947.069,
   2026.513,
   1283.815,
   1624.084,
   992.573,
   392.2876,
   727.6338,
   680.4646,
   113.5396,
   891.767,
   86.65454,
   17.79435};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fex1107[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fey1107[30] = {
   635.9439,
   1733.299,
   1869.59,
   1815.521,
   1527.73,
   1403.237,
   1601.659,
   1229.449,
   1065.337,
   14906.9,
   1158.632,
   986.1707,
   14840.33,
   736.1167,
   863.5334,
   771.1413,
   619.1661,
   484.3071,
   479.1761,
   548.1145,
   393.3373,
   543.5725,
   387.3446,
   73.90354,
   381.5176,
   380.7736,
   34.88326,
   465.9478,
   33.69876,
   7.997951};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_Bj1_fx1107,Graph_from_VbbHcc_tags_Z_dR_Bj1_fy1107,Graph_from_VbbHcc_tags_Z_dR_Bj1_fex1107,Graph_from_VbbHcc_tags_Z_dR_Bj1_fey1107);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->SetMinimum(8.816758);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->SetMaximum(43520.84);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11107);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR_Bj1","MC unc. (stat.)","fl");

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
   Z_dR_Bj1_tags_17->cd();
  
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
   
   TH1D *data_mc_ratio__148 = new TH1D("data_mc_ratio__148","",30,0,6);
   data_mc_ratio__148->SetBinContent(1,0.5048598);
   data_mc_ratio__148->SetBinContent(2,0.3988569);
   data_mc_ratio__148->SetBinContent(3,0.3596008);
   data_mc_ratio__148->SetBinContent(4,0.3372196);
   data_mc_ratio__148->SetBinContent(5,0.3552439);
   data_mc_ratio__148->SetBinContent(6,0.3341146);
   data_mc_ratio__148->SetBinContent(7,0.3420091);
   data_mc_ratio__148->SetBinContent(8,0.3114048);
   data_mc_ratio__148->SetBinContent(9,0.3316492);
   data_mc_ratio__148->SetBinContent(10,0.1023992);
   data_mc_ratio__148->SetBinContent(11,0.270719);
   data_mc_ratio__148->SetBinContent(12,0.3196149);
   data_mc_ratio__148->SetBinContent(13,0.08823676);
   data_mc_ratio__148->SetBinContent(14,0.3414033);
   data_mc_ratio__148->SetBinContent(15,0.2942807);
   data_mc_ratio__148->SetBinContent(16,0.3272474);
   data_mc_ratio__148->SetBinContent(17,0.3318833);
   data_mc_ratio__148->SetBinContent(18,0.3923456);
   data_mc_ratio__148->SetBinContent(19,0.3574604);
   data_mc_ratio__148->SetBinContent(20,0.3054508);
   data_mc_ratio__148->SetBinContent(21,0.3723277);
   data_mc_ratio__148->SetBinContent(22,0.2518342);
   data_mc_ratio__148->SetBinContent(23,0.3304543);
   data_mc_ratio__148->SetBinContent(24,0.6066977);
   data_mc_ratio__148->SetBinContent(25,0.2666176);
   data_mc_ratio__148->SetBinContent(26,0.201333);
   data_mc_ratio__148->SetBinContent(27,0.8455202);
   data_mc_ratio__148->SetBinContent(28,0.06503941);
   data_mc_ratio__148->SetBinContent(29,0.4846832);
   data_mc_ratio__148->SetBinContent(30,1.18015);
   data_mc_ratio__148->SetBinContent(31,0.584036);
   data_mc_ratio__148->SetBinError(1,0.009810966);
   data_mc_ratio__148->SetBinError(2,0.004004216);
   data_mc_ratio__148->SetBinError(3,0.003700937);
   data_mc_ratio__148->SetBinError(4,0.003910072);
   data_mc_ratio__148->SetBinError(5,0.004592306);
   data_mc_ratio__148->SetBinError(6,0.004814511);
   data_mc_ratio__148->SetBinError(7,0.005459755);
   data_mc_ratio__148->SetBinError(8,0.005400445);
   data_mc_ratio__148->SetBinError(9,0.006253081);
   data_mc_ratio__148->SetBinError(10,0.002037821);
   data_mc_ratio__148->SetBinError(11,0.005654724);
   data_mc_ratio__148->SetBinError(12,0.007023231);
   data_mc_ratio__148->SetBinError(13,0.002058149);
   data_mc_ratio__148->SetBinError(14,0.008497984);
   data_mc_ratio__148->SetBinError(15,0.007760368);
   data_mc_ratio__148->SetBinError(16,0.009338498);
   data_mc_ratio__148->SetBinError(17,0.01044299);
   data_mc_ratio__148->SetBinError(18,0.01343366);
   data_mc_ratio__148->SetBinError(19,0.0135495);
   data_mc_ratio__148->SetBinError(20,0.01227711);
   data_mc_ratio__148->SetBinError(21,0.01702987);
   data_mc_ratio__148->SetBinError(22,0.0124524);
   data_mc_ratio__148->SetBinError(23,0.01824628);
   data_mc_ratio__148->SetBinError(24,0.03932637);
   data_mc_ratio__148->SetBinError(25,0.01914203);
   data_mc_ratio__148->SetBinError(26,0.01720104);
   data_mc_ratio__148->SetBinError(27,0.08629555);
   data_mc_ratio__148->SetBinError(28,0.008540093);
   data_mc_ratio__148->SetBinError(29,0.07478824);
   data_mc_ratio__148->SetBinError(30,0.2575298);
   data_mc_ratio__148->SetBinError(31,0.3224827);
   data_mc_ratio__148->SetMinimum(0.4);
   data_mc_ratio__148->SetMaximum(1.6);
   data_mc_ratio__148->SetEntries(197.8073);
   data_mc_ratio__148->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__148->SetLineColor(ci);
   data_mc_ratio__148->SetLineWidth(2);
   data_mc_ratio__148->SetMarkerStyle(20);
   data_mc_ratio__148->SetMarkerSize(1.2);
   data_mc_ratio__148->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__148->GetXaxis()->SetRange(1,30);
   data_mc_ratio__148->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__148->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__148->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__148->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__148->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__148->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__148->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__148->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__148->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__148->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__148->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__148->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__148->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__148->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__148->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__148->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__148->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1108[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1108[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1108[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1108[30] = {
   0.1212472,
   0.0696773,
   0.07121131,
   0.08231099,
   0.09069463,
   0.09735091,
   0.1395979,
   0.1151448,
   0.1256019,
   0.6045368,
   0.1368515,
   0.1521945,
   0.7124389,
   0.155708,
   0.1767185,
   0.2055,
   0.2034563,
   0.2227618,
   0.2461013,
   0.2704718,
   0.3063815,
   0.3346947,
   0.3902429,
   0.1883912,
   0.5243264,
   0.5595789,
   0.3072344,
   0.5224995,
   0.3888863,
   0.4494658};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1108,Graph_from_mc_statistical_error_fy1108,Graph_from_mc_statistical_error_fex1108,Graph_from_mc_statistical_error_fey1108);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1108 = new TH1F("Graph_Graph_from_mc_statistical_error1108","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1108->SetMinimum(0.1450733);
   Graph_Graph_from_mc_statistical_error1108->SetMaximum(1.854927);
   Graph_Graph_from_mc_statistical_error1108->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1108->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1108->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1108->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1108->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1108->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1108->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1108->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1108->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1108->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1108->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1108->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1108->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1108->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1108->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1108->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1108);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_tags_17->cd();
   Z_dR_Bj1_tags_17->Modified();
   Z_dR_Bj1_tags_17->cd();
   Z_dR_Bj1_tags_17->SetSelected(Z_dR_Bj1_tags_17);
}
