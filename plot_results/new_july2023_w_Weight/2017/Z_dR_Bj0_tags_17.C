void Z_dR_Bj0_tags_17()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_17/Z_dR_Bj0_tags_17
//=========  (Thu Aug 10 12:23:31 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_tags_17 = new TCanvas("Z_dR_Bj0_tags_17", "Z_dR_Bj0_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_tags_17->SetHighLightColor(2);
   Z_dR_Bj0_tags_17->Range(0,0,1,1);
   Z_dR_Bj0_tags_17->SetFillColor(0);
   Z_dR_Bj0_tags_17->SetFillStyle(4000);
   Z_dR_Bj0_tags_17->SetBorderMode(0);
   Z_dR_Bj0_tags_17->SetBorderSize(2);
   Z_dR_Bj0_tags_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-97.34739,6.314516,97260.04);
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
   st->SetMaximum(83356.48);
   
   TH1F *st_stack_50 = new TH1F("st_stack_50","",30,0,6);
   st_stack_50->SetMinimum(0.01);
   st_stack_50->SetMaximum(87524.3);
   st_stack_50->SetDirectory(0);
   st_stack_50->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_50->SetLineColor(ci);
   st_stack_50->GetXaxis()->SetRange(1,30);
   st_stack_50->GetXaxis()->SetLabelFont(42);
   st_stack_50->GetXaxis()->SetLabelSize(0.035);
   st_stack_50->GetXaxis()->SetTitleSize(0.035);
   st_stack_50->GetXaxis()->SetTitleFont(42);
   st_stack_50->GetYaxis()->SetTitle("Events/0.2");
   st_stack_50->GetYaxis()->SetLabelFont(42);
   st_stack_50->GetYaxis()->SetLabelSize(0.05);
   st_stack_50->GetYaxis()->SetTitleSize(0.057);
   st_stack_50->GetYaxis()->SetTitleOffset(1.2);
   st_stack_50->GetYaxis()->SetTitleFont(42);
   st_stack_50->GetZaxis()->SetLabelFont(42);
   st_stack_50->GetZaxis()->SetLabelSize(0.035);
   st_stack_50->GetZaxis()->SetTitleSize(0.035);
   st_stack_50->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_50);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(1,6125.957);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(2,22061.2);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(3,25197.52);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(4,34806.12);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(5,29614.77);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(6,14808.84);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(7,8805.788);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(8,10024.58);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(9,8287.597);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(10,8355.312);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(11,4421.162);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(12,6079.957);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(13,4479.805);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(14,3678.802);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(15,2789.442);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(16,3100.616);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(17,1374.258);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(18,1753.981);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(19,2255.805);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(20,2735.28);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(21,1161.704);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(22,1044.599);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(23,1169.356);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(24,675.4035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(25,227.0645);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(26,1050.871);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(27,108.0605);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(28,72.61281);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(29,56.3694);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(30,7.084112);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(31,0.2153231);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(1,877.0572);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(2,1711.993);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(3,2310.292);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(4,14932.82);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(5,14900.49);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(6,1615.516);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(7,1166.576);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(8,1336.049);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(9,1191.844);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(10,1165.522);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(11,739.8096);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(12,990.8152);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(13,825.7354);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(14,635.5281);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(15,500.4916);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(16,627.021);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(17,301.7384);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(18,481.4357);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(19,557.6157);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(20,719.1199);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(21,393.0572);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(22,390.8806);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(23,469.8503);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(24,380.6544);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(25,60.80925);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(26,468.4712);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(27,40.10023);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(28,30.73756);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(29,35.61595);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(30,7.084112);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(31,0.2153231);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetEntries(9821);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(1,21.20658);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(2,96.16507);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(3,120.7658);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(4,106.3091);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(5,91.57677);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(6,75.45248);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(7,62.43686);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(8,46.90479);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(9,45.74697);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(10,39.9582);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(11,39.43287);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(12,34.20529);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(13,34.29237);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(14,29.12974);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(15,26.3071);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(16,19.60938);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(17,16.3998);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(18,9.94696);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(19,10.89071);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(20,9.257244);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(21,5.947051);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(22,7.423099);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(23,5.626099);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(24,3.000952);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(25,2.315905);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(26,1.99914);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(27,1.526625);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(28,1.103541);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(29,0.4226541);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(30,0.1037628);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(31,0.2109684);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(1,1.854549);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(2,3.803715);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(3,4.316682);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(4,4.054508);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(5,3.77164);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(6,3.422604);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(7,3.11499);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(8,2.529081);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(9,2.634066);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(10,2.409038);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(11,2.539085);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(12,2.381743);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(13,2.428406);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(14,2.252083);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(15,2.065015);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(16,1.769618);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(17,1.639427);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(18,1.037711);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(19,1.275146);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(20,1.17121);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(21,0.9009486);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(22,1.130508);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(23,0.9209573);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(24,0.6590973);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(25,0.5367853);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(26,0.6177231);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(27,0.4365107);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(28,0.4100797);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(29,0.2791126);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(30,0.07337139);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(31,0.1054889);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetEntries(11223);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_3 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(1,283.7531);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(2,1669.236);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(3,2358.432);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(4,2270.813);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(5,1897.477);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(6,1527.349);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(7,1252.457);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(8,1063.039);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(9,908.3694);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(10,828.9679);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(11,736.9032);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(12,673.3112);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(13,600.277);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(14,532.1861);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(15,451.1345);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(16,376.0945);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(17,312.6758);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(18,255.3673);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(19,208.5667);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(20,160.2025);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(21,134.3426);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(22,99.74829);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(23,76.13666);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(24,56.87788);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(25,41.94114);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(26,31.4937);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(27,21.41639);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(28,14.88114);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(29,7.957262);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(30,5.009951);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(31,9.034769);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(1,4.24452);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(2,10.27858);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(3,12.24433);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(4,12.04051);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(5,10.99984);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(6,9.865185);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(7,8.938305);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(8,8.230817);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(9,7.609627);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(10,7.276977);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(11,6.855825);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(12,6.557512);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(13,6.204462);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(14,5.837997);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(15,5.371443);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(16,4.892731);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(17,4.461453);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(18,4.031179);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(19,3.642083);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(20,3.185382);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(21,2.914823);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(22,2.511797);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(23,2.199037);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(24,1.900436);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(25,1.628337);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(26,1.418713);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(27,1.15806);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(28,0.9728328);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(29,0.7125996);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(30,0.5626728);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(31,0.7466358);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetEntries(306587);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_4 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(1,73.58249);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(2,315.7779);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(3,360.4201);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(4,289.5634);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(5,207.0077);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(6,167.828);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(7,122.042);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(8,107.2677);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(9,100.7925);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(10,103.3926);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(11,81.87037);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(12,84.1141);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(13,64.11234);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(14,54.07146);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(15,57.50097);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(16,48.72191);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(17,26.13507);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(18,25.58039);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(19,24.12475);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(20,13.0687);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(21,14.29299);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(22,11.48215);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(23,9.622801);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(24,8.944693);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(25,5.511587);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(26,3.923862);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(27,2.404057);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(28,1.490302);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(29,1.04443);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(30,0.304195);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(31,0.8978335);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(1,3.050505);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(2,8.999742);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(3,12.82591);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(4,11.54862);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(5,10.06126);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(6,9.633334);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(7,6.880076);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(8,7.562044);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(9,7.469513);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(10,8.063243);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(11,6.187996);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(12,6.797924);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(13,4.548791);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(14,3.323932);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(15,5.742164);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(16,5.617772);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(17,2.196568);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(18,3.435508);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(19,3.478493);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(20,1.468186);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(21,1.779915);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(22,1.588369);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(23,1.481392);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(24,2.956752);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(25,0.9218047);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(26,0.6400483);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(27,0.6249716);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(28,0.4717403);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(29,0.5355609);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(30,0.1529391);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(31,0.4146136);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetEntries(17505);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_5 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(1,16.77302);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(2,42.04865);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(3,44.79435);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(4,22.30533);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(5,17.30236);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(6,10.14871);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(7,19.44595);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(8,9.994103);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(9,8.442096);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(10,6.888104);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(11,5.351432);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(12,7.628387);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(13,8.895789);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(14,4.831578);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(15,4.019006);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(16,5.305456);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(17,1.771413);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(18,1.752644);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(19,1.37795);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(20,2.105537);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(21,3.34047);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(22,1.798424);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(23,0.8605174);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(24,1.097753);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(25,0.5360316);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(26,0.3507357);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(27,0.2796977);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(28,0.4795217);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(29,0.0128215);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(30,0.1707835);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(31,0.08447854);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(1,2.848931);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(2,4.441525);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(3,7.948829);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(4,2.726545);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(5,2.695383);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(6,1.960066);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(7,7.156798);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(8,1.973147);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(9,1.604331);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(10,1.815485);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(11,1.407849);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(12,1.533551);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(13,2.205044);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(14,1.395551);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(15,1.317582);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(16,1.771672);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(17,0.4340272);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(18,0.4283987);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(19,0.3973735);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(20,0.6539953);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(21,1.320954);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(22,0.5397531);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(23,0.2849148);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(24,0.3626447);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(25,0.2333816);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(26,0.1693601);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(27,0.190172);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(28,0.2287279);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(29,0.01167678);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(30,0.1695805);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(31,0.08447854);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetEntries(2189);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(1,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(2,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(5,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(9,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(11,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(1,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(2,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(5,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(9,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(11,0.3153059);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_7 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(1,0.4958844);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(2,0.7438266);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(3,1.735595);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(4,0.9917687);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(5,0.2479422);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(6,0.2479422);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(8,0.2479422);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(9,0.2479422);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(12,0.4958844);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(18,0.2479422);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(26,0.2479422);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(1,0.3506432);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(2,0.4294485);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(3,0.6559934);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(4,0.4958844);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(5,0.2479422);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(6,0.2479422);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(8,0.2479422);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(9,0.2479422);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(12,0.3506432);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(18,0.2479422);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(26,0.2479422);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetEntries(24);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_8 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(1,2.27903);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(2,6.837091);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(3,6.33064);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(4,5.570963);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(5,3.038707);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(6,3.038707);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(7,1.519354);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(8,3.291933);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(9,2.785482);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(10,2.532256);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(11,1.772579);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(12,1.772579);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(13,0.2532256);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(14,1.266128);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(15,0.5064512);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(16,0.7596768);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(17,0.5064512);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(19,0.5064512);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(23,0.2532256);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(25,0.2532256);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(1,0.7596768);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(2,1.315799);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(3,1.266128);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(4,1.187733);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(5,0.8771992);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(6,0.8771992);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(7,0.6202735);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(8,0.9130179);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(9,0.8398543);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(10,0.8007697);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(11,0.669972);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(12,0.669972);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(13,0.2532256);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(14,0.5662297);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(15,0.3581151);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(16,0.4385996);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(17,0.3581151);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(19,0.3581151);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(23,0.2532256);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(25,0.2532256);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetEntries(178);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_9 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(1,1.138506);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(2,5.934234);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(3,7.299441);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(4,5.964238);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(5,4.337325);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(6,3.090469);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(7,2.367026);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(8,2.148659);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(9,1.990302);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(10,1.933627);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(11,1.895288);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(12,1.926959);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(13,1.573572);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(14,1.216851);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(15,1.023489);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(16,0.6884378);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(17,0.5400819);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(18,0.4050615);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(19,0.2883771);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(20,0.1816942);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(21,0.1683589);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(22,0.1383543);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(23,0.1216851);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(24,0.08834674);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(25,0.04333991);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(26,0.03833915);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(27,0.02667071);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(28,0.0166692);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(29,0.003333839);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(30,0.00166692);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(31,0.005000759);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(1,0.04356372);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(2,0.09945798);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(3,0.1103068);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(4,0.0997091);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(5,0.08502924);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(6,0.07177439);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(7,0.06281434);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(8,0.05984682);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(9,0.05759925);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(10,0.05677323);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(11,0.05620758);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(12,0.05667527);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(13,0.05121541);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(14,0.04503769);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(15,0.04130464);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(16,0.03387581);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(17,0.03000455);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(18,0.0259847);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(19,0.0219249);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(20,0.01740315);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(21,0.01675233);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(22,0.01518636);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(23,0.01424217);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(24,0.01213536);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(25,0.008499655);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(26,0.007994265);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(27,0.006667678);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(28,0.005271263);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(29,0.00235738);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(30,0.00166692);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(31,0.002887189);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetEntries(27953);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_10 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(1,0.4513666);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(2,2.509532);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(3,3.304203);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(4,2.754334);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(5,2.035306);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(6,1.453434);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(7,1.094751);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(8,0.9210206);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(9,0.7996587);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(10,0.7921775);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(11,0.7198591);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(12,0.6612562);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(13,0.5868597);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(14,0.476304);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(15,0.3952575);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(16,0.3179516);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(17,0.2531144);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(18,0.2015772);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(19,0.1471306);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(20,0.1159588);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(21,0.09684017);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(22,0.07772151);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(23,0.06566844);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(24,0.0415623);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(25,0.02826237);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(26,0.02078115);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(27,0.01745617);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(28,0.006234345);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(29,0.00415623);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(30,0.0008312461);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(31,0.001662492);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(1,0.01369666);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(2,0.03229581);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(3,0.0370581);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(4,0.03383437);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(5,0.0290847);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(6,0.02457805);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(7,0.02133082);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(8,0.01956521);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(9,0.01823065);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(10,0.01814517);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(11,0.01729711);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(12,0.0165781);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(13,0.0156177);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(14,0.01406993);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(15,0.0128171);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(16,0.01149557);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(17,0.01025671);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(18,0.009153148);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(19,0.007819901);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(20,0.006942273);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(21,0.00634421);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(22,0.005683559);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(23,0.0052243);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(24,0.00415623);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(25,0.003427315);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(26,0.002938899);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(27,0.002693545);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(28,0.001609701);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(29,0.001314315);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(30,0.0005877797);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(31,0.0008312461);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetEntries(48968);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(1,0.004740753);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(2,0.03792603);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(3,0.03476553);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(4,0.01580251);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(5,0.004740753);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(6,0.003160502);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(7,0.007901256);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(8,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(9,0.003160502);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(10,0.003160502);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(11,0.004740753);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(13,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(14,0.006321005);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(15,0.003160502);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(18,0.003160502);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(31,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(1,0.002737075);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(2,0.007741618);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(3,0.007412035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(4,0.004997193);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(5,0.002737075);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(6,0.002234813);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(7,0.003533549);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(8,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(9,0.002234813);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(10,0.002234813);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(11,0.002737075);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(13,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(14,0.003160502);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(15,0.002234813);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(18,0.002234813);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(31,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetEntries(87);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_12 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(1,0.003736902);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(2,0.01245634);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(3,0.01017268);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(4,0.008719438);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(5,0.005605353);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(6,0.003114085);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(7,0.001245634);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(8,0.001038028);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(9,0.000622817);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(10,0.002283662);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(11,0.0008304226);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(12,0.001038028);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(13,0.000622817);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(14,0.000622817);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(15,0.0008304226);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(16,0.000622817);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(17,0.0002076057);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(18,0.0008304226);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(19,0.0008304226);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(20,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(21,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(22,0.0002076057);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(23,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(24,0.0002076057);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(26,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(1,0.0008807962);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(2,0.001608106);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(3,0.00145324);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(4,0.001345438);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(5,0.001078751);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(6,0.0008040532);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(7,0.0005085279);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(8,0.0004642204);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(9,0.0003595835);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(10,0.0006885501);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(11,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(12,0.0004642204);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(13,0.0003595835);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(14,0.0003595835);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(15,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(16,0.0003595835);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(17,0.0002076057);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(18,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(19,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(20,0.0002935987);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(21,0.0002935987);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(22,0.0002076057);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(23,0.0002935987);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(24,0.0002076057);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(26,0.0002935987);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetEntries(277);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0__136 = new TH1D("VbbHcc_tags_Z_dR_Bj0__136","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(1,2286);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(2,9004);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(3,8892);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(4,7019);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(5,5641);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(6,4451);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(7,3613);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(8,3042);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(9,2618);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(10,2320);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(11,2119);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(12,1944);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(13,1781);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(14,1510);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(15,1457);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(16,1187);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(17,934);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(18,819);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(19,622);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(20,556);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(21,461);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(22,392);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(23,318);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(24,201);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(25,183);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(26,139);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(27,99);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(28,55);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(29,32);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(30,17);
   VbbHcc_tags_Z_dR_Bj0__136->SetBinContent(31,31);
   VbbHcc_tags_Z_dR_Bj0__136->SetEntries(63772);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0__136->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0__136->SetLineWidth(2);
   VbbHcc_tags_Z_dR_Bj0__136->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_Bj0__136->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_Bj0__136->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0__136->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__136->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__136->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__136->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__136->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__136->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__136->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__136->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0__136->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__136->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__136->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__136->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__136->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__136->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fx1099[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fy1099[30] = {
   6525.96,
   24200.82,
   28100.65,
   37510.42,
   31838.12,
   16597.46,
   10267.16,
   11258.39,
   9357.091,
   9339.782,
   5289.428,
   6884.074,
   5189.798,
   4301.988,
   3330.333,
   3552.114,
   1732.54,
   2047.487,
   2501.708,
   2920.212,
   1319.892,
   1165.267,
   1262.043,
   745.4549,
   277.694,
   1088.946,
   133.7314,
   90.59021,
   65.81406,
   12.6753};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fex1099[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fey1099[30] = {
   877.0799,
   1712.058,
   2310.378,
   14932.83,
   14900.5,
   1615.58,
   1166.657,
   1336.1,
   1191.896,
   1165.577,
   739.8733,
   990.8645,
   825.7778,
   635.5694,
   500.5595,
   627.0704,
   301.7844,
   481.4662,
   557.6401,
   719.1298,
   393.0753,
   390.8939,
   469.8589,
   380.6714,
   60.84137,
   468.4742,
   40.12464,
   30.76016,
   35.6282,
   7.110469};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_Bj0_fx1099,Graph_from_VbbHcc_tags_Z_dR_Bj0_fy1099,Graph_from_VbbHcc_tags_Z_dR_Bj0_fex1099,Graph_from_VbbHcc_tags_Z_dR_Bj0_fey1099);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->SetMinimum(5.00835);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->SetMaximum(57687.01);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR_Bj0","MC unc. (stat.)","fl");

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
   Z_dR_Bj0_tags_17->cd();
  
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
   
   TH1D *data_mc_ratio__137 = new TH1D("data_mc_ratio__137","",30,0,6);
   data_mc_ratio__137->SetBinContent(1,0.3502933);
   data_mc_ratio__137->SetBinContent(2,0.3720535);
   data_mc_ratio__137->SetBinContent(3,0.316434);
   data_mc_ratio__137->SetBinContent(4,0.1871214);
   data_mc_ratio__137->SetBinContent(5,0.1771776);
   data_mc_ratio__137->SetBinContent(6,0.2681736);
   data_mc_ratio__137->SetBinContent(7,0.3518987);
   data_mc_ratio__137->SetBinContent(8,0.2701984);
   data_mc_ratio__137->SetBinContent(9,0.2797878);
   data_mc_ratio__137->SetBinContent(10,0.2483998);
   data_mc_ratio__137->SetBinContent(11,0.4006104);
   data_mc_ratio__137->SetBinContent(12,0.2823909);
   data_mc_ratio__137->SetBinContent(13,0.3431733);
   data_mc_ratio__137->SetBinContent(14,0.3510006);
   data_mc_ratio__137->SetBinContent(15,0.4374938);
   data_mc_ratio__137->SetBinContent(16,0.3341672);
   data_mc_ratio__137->SetBinContent(17,0.5390928);
   data_mc_ratio__137->SetBinContent(18,0.4000026);
   data_mc_ratio__137->SetBinContent(19,0.2486301);
   data_mc_ratio__137->SetBinContent(20,0.1903971);
   data_mc_ratio__137->SetBinContent(21,0.3492709);
   data_mc_ratio__137->SetBinContent(22,0.3364035);
   data_mc_ratio__137->SetBinContent(23,0.2519724);
   data_mc_ratio__137->SetBinContent(24,0.269634);
   data_mc_ratio__137->SetBinContent(25,0.6589987);
   data_mc_ratio__137->SetBinContent(26,0.1276463);
   data_mc_ratio__137->SetBinContent(27,0.7402899);
   data_mc_ratio__137->SetBinContent(28,0.6071296);
   data_mc_ratio__137->SetBinContent(29,0.4862183);
   data_mc_ratio__137->SetBinContent(30,1.341191);
   data_mc_ratio__137->SetBinContent(31,2.966049);
   data_mc_ratio__137->SetBinError(1,0.007326451);
   data_mc_ratio__137->SetBinError(2,0.003920917);
   data_mc_ratio__137->SetBinError(3,0.003355702);
   data_mc_ratio__137->SetBinError(4,0.002233499);
   data_mc_ratio__137->SetBinError(5,0.002359015);
   data_mc_ratio__137->SetBinError(6,0.004019641);
   data_mc_ratio__137->SetBinError(7,0.005854417);
   data_mc_ratio__137->SetBinError(8,0.004898952);
   data_mc_ratio__137->SetBinError(9,0.005468195);
   data_mc_ratio__137->SetBinError(10,0.00515712);
   data_mc_ratio__137->SetBinError(11,0.008702755);
   data_mc_ratio__137->SetBinError(12,0.006404757);
   data_mc_ratio__137->SetBinError(13,0.008131703);
   data_mc_ratio__137->SetBinError(14,0.009032736);
   data_mc_ratio__137->SetBinError(15,0.01146152);
   data_mc_ratio__137->SetBinError(16,0.009699257);
   data_mc_ratio__137->SetBinError(17,0.01763966);
   data_mc_ratio__137->SetBinError(18,0.01397722);
   data_mc_ratio__137->SetBinError(19,0.009969159);
   data_mc_ratio__137->SetBinError(20,0.008074637);
   data_mc_ratio__137->SetBinError(21,0.01626717);
   data_mc_ratio__137->SetBinError(22,0.01699094);
   data_mc_ratio__137->SetBinError(23,0.01412991);
   data_mc_ratio__137->SetBinError(24,0.01901852);
   data_mc_ratio__137->SetBinError(25,0.04871459);
   data_mc_ratio__137->SetBinError(26,0.01082682);
   data_mc_ratio__137->SetBinError(27,0.07440194);
   data_mc_ratio__137->SetBinError(28,0.08186534);
   data_mc_ratio__137->SetBinError(29,0.08595207);
   data_mc_ratio__137->SetBinError(30,0.3252866);
   data_mc_ratio__137->SetBinError(31,0.5896904);
   data_mc_ratio__137->SetMinimum(0.4);
   data_mc_ratio__137->SetMaximum(1.6);
   data_mc_ratio__137->SetEntries(133.2433);
   data_mc_ratio__137->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__137->SetLineColor(ci);
   data_mc_ratio__137->SetLineWidth(2);
   data_mc_ratio__137->SetMarkerStyle(20);
   data_mc_ratio__137->SetMarkerSize(1.2);
   data_mc_ratio__137->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__137->GetXaxis()->SetRange(1,30);
   data_mc_ratio__137->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__137->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__137->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__137->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__137->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__137->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__137->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__137->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__137->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__137->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__137->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__137->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__137->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__137->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__137->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__137->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__137->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1100[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1100[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1100[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1100[30] = {
   0.1343986,
   0.07074381,
   0.08221796,
   0.3980982,
   0.4680082,
   0.09733901,
   0.11363,
   0.1186759,
   0.1273789,
   0.124797,
   0.1398777,
   0.1439358,
   0.1591156,
   0.1477385,
   0.1503031,
   0.1765344,
   0.1741861,
   0.2351498,
   0.2229037,
   0.2462594,
   0.2978086,
   0.3354543,
   0.3723002,
   0.5106565,
   0.219095,
   0.4302088,
   0.3000391,
   0.3395527,
   0.5413463,
   0.5609704};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1100,Graph_from_mc_statistical_error_fy1100,Graph_from_mc_statistical_error_fex1100,Graph_from_mc_statistical_error_fey1100);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1100 = new TH1F("Graph_Graph_from_mc_statistical_error1100","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1100->SetMinimum(0.3268355);
   Graph_Graph_from_mc_statistical_error1100->SetMaximum(1.673164);
   Graph_Graph_from_mc_statistical_error1100->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1100->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1100->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1100->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1100->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1100->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1100->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1100->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1100->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1100->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1100->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1100->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1100->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1100->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1100->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1100->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1100);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_tags_17->cd();
   Z_dR_Bj0_tags_17->Modified();
   Z_dR_Bj0_tags_17->cd();
   Z_dR_Bj0_tags_17->SetSelected(Z_dR_Bj0_tags_17);
}
