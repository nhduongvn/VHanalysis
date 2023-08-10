void Z_dR_Bj1_both_16()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_16/Z_dR_Bj1_both_16
//=========  (Thu Aug 10 10:43:24 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_both_16 = new TCanvas("Z_dR_Bj1_both_16", "Z_dR_Bj1_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_both_16->SetHighLightColor(2);
   Z_dR_Bj1_both_16->Range(0,0,1,1);
   Z_dR_Bj1_both_16->SetFillColor(0);
   Z_dR_Bj1_both_16->SetFillStyle(4000);
   Z_dR_Bj1_both_16->SetBorderMode(0);
   Z_dR_Bj1_both_16->SetBorderSize(2);
   Z_dR_Bj1_both_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.861469,6.314516,12.07244);
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
   st->SetMaximum(1.112723e+10);
   
   TH1F *st_stack_245 = new TH1F("st_stack_245","",30,0,6);
   st_stack_245->SetMinimum(0.001423854);
   st_stack_245->SetMaximum(3.79358e+10);
   st_stack_245->SetDirectory(0);
   st_stack_245->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_245->SetLineColor(ci);
   st_stack_245->GetXaxis()->SetRange(1,30);
   st_stack_245->GetXaxis()->SetLabelFont(42);
   st_stack_245->GetXaxis()->SetLabelSize(0.035);
   st_stack_245->GetXaxis()->SetTitleSize(0.035);
   st_stack_245->GetXaxis()->SetTitleFont(42);
   st_stack_245->GetYaxis()->SetTitle("Events/0.2");
   st_stack_245->GetYaxis()->SetLabelFont(42);
   st_stack_245->GetYaxis()->SetLabelSize(0.05);
   st_stack_245->GetYaxis()->SetTitleSize(0.057);
   st_stack_245->GetYaxis()->SetTitleOffset(1.2);
   st_stack_245->GetYaxis()->SetTitleFont(42);
   st_stack_245->GetZaxis()->SetLabelFont(42);
   st_stack_245->GetZaxis()->SetLabelSize(0.035);
   st_stack_245->GetZaxis()->SetTitleSize(0.035);
   st_stack_245->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_245);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(1,6173.113);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(2,31038.23);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(3,26730.33);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(4,17250.48);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(5,11680.69);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(6,13384.83);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(7,11731.67);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(8,7119.067);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(9,5495.527);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(10,5829.059);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(11,6994.824);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(12,7392.993);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(13,4023.42);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(14,3057.032);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(15,3290.519);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(16,2668.752);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(17,2203.064);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(18,1599.999);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(19,791.2773);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(20,2645.121);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(21,1832.252);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(22,1179.9);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(23,671.1499);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(24,598.7268);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(25,455.5703);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(26,406.4884);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(27,95.20965);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(28,22.83235);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(29,21.88386);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(30,15.15332);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(31,51.3476);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(1,836.7414);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(2,2936.113);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(3,3097.99);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(4,2140.85);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(5,1373.823);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(6,2441.538);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(7,2351.739);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(8,1669.332);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(9,914.0184);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(10,1642.115);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(11,1747.214);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(12,1788.011);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(13,1525.214);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(14,676.5221);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(15,771.2171);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(16,719.5814);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(17,556.2447);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(18,545.0844);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(19,113.4068);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(20,1472.796);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(21,608.3108);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(22,472.0406);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(23,280.8753);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(24,279.5184);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(25,275.1303);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(26,272.4319);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(27,36.22807);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(28,10.22837);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(29,9.738377);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(30,8.15667);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(31,32.88994);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetEntries(9914);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(1,28.54976);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(2,97.99635);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(3,108.7763);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(4,93.26602);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(5,69.75807);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(6,58.06233);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(7,49.39468);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(8,44.16639);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(9,34.8901);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(10,29.71271);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(11,28.05656);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(12,23.27804);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(13,20.15406);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(14,17.16798);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(15,16.52373);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(16,14.13775);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(17,12.74643);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(18,8.681128);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(19,8.266899);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(20,6.052165);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(21,5.654573);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(22,5.859022);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(23,2.376352);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(24,2.913922);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(25,3.138388);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(26,1.708849);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(27,0.6803478);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(28,0.4021516);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(31,0.3547719);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(1,2.255251);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(2,3.977637);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(3,4.117358);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(4,3.771585);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(5,3.181302);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(6,2.966644);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(7,2.751636);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(8,2.691768);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(9,2.400635);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(10,2.194942);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(11,2.163213);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(12,1.92062);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(13,1.700859);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(14,1.639678);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(15,1.633283);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(16,1.560263);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(17,1.37542);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(18,1.132692);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(19,1.102937);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(20,0.9325102);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(21,1.014767);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(22,1.045629);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(23,0.4778362);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(24,0.7028621);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(25,0.7885051);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(26,0.5651225);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(27,0.182513);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(28,0.1426594);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(31,0.2723985);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetEntries(9807);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_3 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(1,374.6662);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(2,1676.627);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(3,2115.079);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(4,1918.312);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(5,1531.696);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(6,1199.504);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(7,922.1143);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(8,754.2632);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(9,621.7563);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(10,534.3078);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(11,458.5332);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(12,410.571);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(13,360.7125);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(14,321.5441);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(15,282.5293);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(16,249.3842);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(17,215.351);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(18,184.0685);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(19,155.8654);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(20,130.5666);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(21,106.3763);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(22,84.569);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(23,66.02814);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(24,49.96076);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(25,36.87753);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(26,25.80797);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(27,17.67091);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(28,9.434888);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(29,6.079844);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(30,2.827605);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(31,5.318122);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(1,4.926431);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(2,10.38971);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(3,11.70106);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(4,11.14758);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(5,9.96457);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(6,8.801192);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(7,7.720858);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(8,6.956331);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(9,6.331615);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(10,5.865889);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(11,5.439888);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(12,5.157452);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(13,4.832909);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(14,4.558182);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(15,4.286423);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(16,4.014016);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(17,3.729657);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(18,3.449221);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(19,3.172014);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(20,2.899896);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(21,2.611311);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(22,2.331777);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(23,2.057797);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(24,1.787756);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(25,1.540133);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(26,1.290893);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(27,1.060854);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(28,0.7712975);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(29,0.6149232);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(30,0.4255982);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(31,0.580069);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetEntries(238439);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_4 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(1,84.96753);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(2,305.6256);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(3,348.5674);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(4,267.0011);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(5,177.7789);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(6,133.2742);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(7,98.28904);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(8,90.44947);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(9,91.96152);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(10,73.01591);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(11,56.65771);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(12,53.68889);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(13,38.92925);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(14,38.97351);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(15,35.68163);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(16,23.91943);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(17,28.07639);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(18,21.52441);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(19,17.44367);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(20,18.92021);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(21,10.93139);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(22,12.03945);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(23,8.720515);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(24,4.681546);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(25,7.774507);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(26,4.171987);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(27,2.587629);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(28,2.015737);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(29,0.7689404);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(30,0.3561979);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(31,0.3446307);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(1,3.803028);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(2,11.0427);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(3,13.96451);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(4,14.25444);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(5,10.86009);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(6,9.086992);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(7,7.048644);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(8,6.974812);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(9,9.526204);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(10,7.809443);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(11,5.588624);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(12,6.01807);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(13,3.480731);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(14,4.774968);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(15,4.669355);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(16,1.983966);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(17,4.546872);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(18,3.01054);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(19,2.902345);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(20,4.388592);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(21,1.289701);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(22,2.728885);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(23,1.198226);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(24,0.7915709);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(25,2.550211);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(26,0.8403786);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(27,0.6022095);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(28,0.5077559);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(29,0.3354702);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(30,0.1597997);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(31,0.1544704);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetEntries(15488);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_5 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(1,16.01239);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(2,44.53072);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(3,31.78555);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(4,15.49806);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(5,14.57138);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(6,14.35483);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(7,8.144303);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(8,8.511852);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(9,4.896478);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(10,5.355347);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(11,11.69785);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(12,3.8759);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(13,4.309249);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(14,2.416772);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(15,1.545357);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(16,2.314357);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(17,1.90008);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(18,2.391595);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(19,1.886218);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(20,1.072005);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(21,0.5204812);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(22,1.221958);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(23,0.918614);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(24,0.3948147);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(25,0.4315023);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(26,0.1281454);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(27,0.2488196);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(28,0.1811574);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(29,0.0759034);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(1,1.312482);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(2,7.172852);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(3,3.355867);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(4,2.127147);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(5,2.348094);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(6,2.370663);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(7,1.920346);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(8,2.000666);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(9,1.215306);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(10,1.606163);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(11,6.206596);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(12,1.169861);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(13,1.219605);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(14,0.5899288);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(15,0.3721681);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(16,0.6313341);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(17,0.4323028);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(18,1.086704);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(19,0.4536081);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(20,0.334043);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(21,0.2170671);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(22,0.4726935);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(23,0.3000658);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(24,0.1695092);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(25,0.1750714);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(26,0.08809142);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(27,0.1672533);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(28,0.09898435);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(29,0.07564717);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetEntries(3431);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_6 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(3,0.2687386);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(4,0.2687386);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(5,0.2687386);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(6,0.2687386);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(7,0.1343693);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(17,0.1343693);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(21,0.1343693);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(3,0.1900269);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(4,0.1900269);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(5,0.1900269);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(6,0.1900269);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(7,0.1343693);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(17,0.1343693);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(21,0.1343693);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetEntries(11);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_7 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(1,0.5449062);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(2,1.307775);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(3,0.2179625);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(4,0.7628687);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(5,0.8718499);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(6,0.1089812);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(7,0.2179625);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(8,0.3269437);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(9,0.2179625);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(10,0.2179625);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(11,0.1089812);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(12,0.1089812);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(14,0.1089812);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(15,0.2179625);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(16,0.1089812);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(19,0.1089812);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(24,0.1089812);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(1,0.2436895);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(2,0.3775221);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(3,0.1541227);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(4,0.2883373);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(5,0.3082455);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(6,0.1089812);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(7,0.1541227);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(8,0.188761);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(9,0.1541227);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(10,0.1541227);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(11,0.1089812);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(12,0.1089812);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(14,0.1089812);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(15,0.1541227);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(16,0.1089812);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(19,0.1089812);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(24,0.1089812);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetEntries(52);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_8 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(1,1.459243);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(2,6.323386);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(3,8.755457);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(4,4.864143);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(5,5.10735);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(6,2.675279);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(7,2.675279);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(8,1.945657);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(9,1.459243);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(10,0.7296215);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(12,1.459243);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(13,1.216036);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(14,0.4864143);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(15,0.9728286);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(16,0.2432072);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(17,0.7296215);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(19,0.2432072);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(21,0.2432072);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(24,0.4864143);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(25,0.4864143);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(1,0.5957334);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(2,1.240118);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(3,1.459243);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(4,1.087655);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(5,1.114515);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(6,0.8066269);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(7,0.8066269);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(8,0.6878937);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(9,0.5957334);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(10,0.4212471);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(12,0.5957334);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(13,0.5438277);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(14,0.3439469);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(15,0.4864143);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(16,0.2432072);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(17,0.4212471);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(19,0.2432072);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(21,0.2432072);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(24,0.3439469);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(25,0.3439469);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetEntries(175);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_9 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(1,1.393154);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(2,6.418211);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(3,7.229151);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(4,5.382702);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(5,3.478032);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(6,2.445297);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(7,1.925463);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(8,1.443058);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(9,1.28087);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(10,1.285028);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(11,1.13393);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(12,1.064619);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(13,0.9661971);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(14,0.8760927);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(15,0.7610362);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(16,0.5697375);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(17,0.4477499);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(18,0.3507143);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(19,0.2633823);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(20,0.2023885);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(21,0.2107058);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(22,0.1718916);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(23,0.1455534);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(24,0.08040091);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(25,0.08040091);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(26,0.04851779);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(27,0.03465556);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(28,0.01524845);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(29,0.006931113);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(31,0.002772445);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(1,0.04394566);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(2,0.09432427);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(3,0.100106);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(4,0.08638069);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(5,0.06943578);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(6,0.05822135);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(7,0.05166353);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(8,0.04472582);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(9,0.04213752);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(10,0.04220587);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(11,0.03964694);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(12,0.03841613);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(13,0.03659733);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(14,0.0348491);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(15,0.03248023);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(16,0.02810308);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(17,0.02491347);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(18,0.02204922);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(19,0.01910776);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(20,0.01674979);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(21,0.0170905);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(22,0.01543632);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(23,0.01420455);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(24,0.01055716);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(25,0.01055716);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(26,0.008201003);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(27,0.006931113);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(28,0.00459758);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(29,0.003099688);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(31,0.001960415);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetEntries(28649);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_10 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(1,0.5918386);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(2,2.727339);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(3,3.300514);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(4,2.545373);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(5,1.707323);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(6,1.187625);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(7,0.8574302);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(8,0.6908971);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(9,0.5957866);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(10,0.51252);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(11,0.4934979);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(12,0.4421741);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(13,0.3836722);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(14,0.3556774);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(15,0.2935864);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(16,0.2297009);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(17,0.2113966);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(18,0.1600728);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(19,0.1500234);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(20,0.1238231);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(21,0.1044421);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(22,0.08470219);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(23,0.0710637);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(24,0.05850194);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(25,0.03589076);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(26,0.03373731);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(27,0.0143563);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(28,0.005024706);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(29,0.002871261);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(30,0.0003589076);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(31,0.0003589076);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(1,0.01457448);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(2,0.03128678);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(3,0.03441772);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(4,0.03022505);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(5,0.02475422);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(6,0.02064577);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(7,0.01754247);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(8,0.01574701);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(9,0.01462301);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(10,0.01356272);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(11,0.01330865);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(12,0.01259761);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(13,0.01173469);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(14,0.01129847);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(15,0.01026501);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(16,0.009079724);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(17,0.008710444);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(18,0.007579666);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(19,0.007337883);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(20,0.006666413);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(21,0.006122505);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(22,0.005513643);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(23,0.005050277);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(24,0.004582225);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(25,0.003589076);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(26,0.003479738);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(27,0.002269931);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(28,0.001342909);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(29,0.001015144);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(30,0.0003589076);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(31,0.0003589076);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetEntries(50073);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_11 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(1,0.008205022);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(2,0.02461507);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(3,0.01367504);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(4,0.01641004);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(5,0.005470015);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(6,0.008205022);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(7,0.005470015);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(14,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(15,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(18,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(24,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(25,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(26,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(1,0.004737172);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(2,0.008205022);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(3,0.006115663);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(4,0.006699373);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(5,0.003867885);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(6,0.004737172);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(7,0.003867885);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(14,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(15,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(18,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(24,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(25,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(26,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_12 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(1,0.002858127);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(2,0.01071798);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(3,0.007859849);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(4,0.007859849);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(5,0.003929924);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(6,0.001429063);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(7,0.0007145317);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(8,0.001071798);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(9,0.002858127);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(10,0.0007145317);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(11,0.001429063);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(12,0.001071798);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(13,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(14,0.0007145317);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(15,0.0007145317);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(16,0.0007145317);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(17,0.0007145317);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(19,0.001429063);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(20,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(21,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(23,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(27,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(29,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(1,0.0010105);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(2,0.001956826);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(3,0.001675725);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(4,0.001675725);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(5,0.001184917);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(6,0.0007145317);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(7,0.0005052502);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(8,0.0006188026);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(9,0.0010105);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(10,0.0005052502);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(11,0.0007145317);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(12,0.0006188026);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(13,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(14,0.0005052502);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(15,0.0005052502);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(16,0.0005052502);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(17,0.0005052502);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(19,0.0007145317);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(20,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(21,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(23,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(27,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(29,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetEntries(137);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR_Bj1__672 = new TH1D("VbbHcc_both_Z_dR_Bj1__672","",30,0,6);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(1,5155);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(2,16630);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(3,15255);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(4,11312);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(5,9088);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(6,6852);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(7,5491);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(8,4602);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(9,3813);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(10,3297);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(11,2910);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(12,2618);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(13,2301);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(14,2052);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(15,1928);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(16,1697);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(17,1385);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(18,1213);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(19,988);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(20,892);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(21,767);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(22,577);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(23,509);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(24,400);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(25,313);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(26,230);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(27,165);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(28,115);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(29,60);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(30,30);
   VbbHcc_both_Z_dR_Bj1__672->SetBinContent(31,36);
   VbbHcc_both_Z_dR_Bj1__672->SetEntries(102710);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1__672->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1__672->SetLineWidth(2);
   VbbHcc_both_Z_dR_Bj1__672->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_Bj1__672->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_Bj1__672->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1__672->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__672->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__672->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__672->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__672->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__672->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__672->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__672->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1__672->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__672->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__672->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__672->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__672->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__672->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fx1489[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fy1489[30] = {
   6681.309,
   33179.83,
   29354.33,
   19558.41,
   13485.94,
   14796.72,
   12815.43,
   8020.866,
   6252.588,
   6474.197,
   7551.507,
   7887.483,
   4450.091,
   3438.965,
   3629.048,
   2959.66,
   2462.661,
   1817.178,
   975.5065,
   2802.059,
   1956.428,
   1283.846,
   749.4105,
   657.4149,
   504.3977,
   438.3904,
   116.4467,
   34.88656,
   28.81871,
   18.33749};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fex1489[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fey1489[30] = {
   836.7689,
   2936.163,
   3098.048,
   2140.932,
   1373.908,
   2441.574,
   2351.765,
   1669.365,
   914.0942,
   1642.146,
   1747.244,
   1788.03,
   1525.227,
   676.5566,
   771.2451,
   719.5974,
   556.2778,
   545.1059,
   113.4949,
   1472.805,
   608.3187,
   472.0557,
   280.886,
   279.5264,
   275.1478,
   272.4369,
   36.24945,
   10.27144,
   9.763831,
   8.169329};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_Bj1_fx1489,Graph_from_VbbHcc_both_Z_dR_Bj1_fy1489,Graph_from_VbbHcc_both_Z_dR_Bj1_fex1489,Graph_from_VbbHcc_both_Z_dR_Bj1_fey1489);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->SetMinimum(9.151342);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->SetMaximum(39726.57);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR_Bj1","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj1_both_16->cd();
  
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
   
   TH1D *data_mc_ratio__673 = new TH1D("data_mc_ratio__673","",30,0,6);
   data_mc_ratio__673->SetBinContent(1,0.7715554);
   data_mc_ratio__673->SetBinContent(2,0.5012082);
   data_mc_ratio__673->SetBinContent(3,0.5196849);
   data_mc_ratio__673->SetBinContent(4,0.5783702);
   data_mc_ratio__673->SetBinContent(5,0.6738871);
   data_mc_ratio__673->SetBinContent(6,0.4630757);
   data_mc_ratio__673->SetBinContent(7,0.4284679);
   data_mc_ratio__673->SetBinContent(8,0.5737535);
   data_mc_ratio__673->SetBinContent(9,0.6098274);
   data_mc_ratio__673->SetBinContent(10,0.5092524);
   data_mc_ratio__673->SetBinContent(11,0.3853536);
   data_mc_ratio__673->SetBinContent(12,0.3319183);
   data_mc_ratio__673->SetBinContent(13,0.5170681);
   data_mc_ratio__673->SetBinContent(14,0.5966912);
   data_mc_ratio__673->SetBinContent(15,0.5312688);
   data_mc_ratio__673->SetBinContent(16,0.5733767);
   data_mc_ratio__673->SetBinContent(17,0.5623997);
   data_mc_ratio__673->SetBinContent(18,0.6675186);
   data_mc_ratio__673->SetBinContent(19,1.012807);
   data_mc_ratio__673->SetBinContent(20,0.3183373);
   data_mc_ratio__673->SetBinContent(21,0.392041);
   data_mc_ratio__673->SetBinContent(22,0.4494309);
   data_mc_ratio__673->SetBinContent(23,0.6792005);
   data_mc_ratio__673->SetBinContent(24,0.6084438);
   data_mc_ratio__673->SetBinContent(25,0.6205421);
   data_mc_ratio__673->SetBinContent(26,0.5246466);
   data_mc_ratio__673->SetBinContent(27,1.416957);
   data_mc_ratio__673->SetBinContent(28,3.296399);
   data_mc_ratio__673->SetBinContent(29,2.081981);
   data_mc_ratio__673->SetBinContent(30,1.635993);
   data_mc_ratio__673->SetBinContent(31,0.6275247);
   data_mc_ratio__673->SetBinError(1,0.01074615);
   data_mc_ratio__673->SetBinError(2,0.003886619);
   data_mc_ratio__673->SetBinError(3,0.004207595);
   data_mc_ratio__673->SetBinError(4,0.005437963);
   data_mc_ratio__673->SetBinError(5,0.007068919);
   data_mc_ratio__673->SetBinError(6,0.005594268);
   data_mc_ratio__673->SetBinError(7,0.005782193);
   data_mc_ratio__673->SetBinError(8,0.008457696);
   data_mc_ratio__673->SetBinError(9,0.009875829);
   data_mc_ratio__673->SetBinError(10,0.008868978);
   data_mc_ratio__673->SetBinError(11,0.00714353);
   data_mc_ratio__673->SetBinError(12,0.006487037);
   data_mc_ratio__673->SetBinError(13,0.01077927);
   data_mc_ratio__673->SetBinError(14,0.01317228);
   data_mc_ratio__673->SetBinError(15,0.01209932);
   data_mc_ratio__673->SetBinError(16,0.01391871);
   data_mc_ratio__673->SetBinError(17,0.01511194);
   data_mc_ratio__673->SetBinError(18,0.01916606);
   data_mc_ratio__673->SetBinError(19,0.03222169);
   data_mc_ratio__673->SetBinError(20,0.01065872);
   data_mc_ratio__673->SetBinError(21,0.01415578);
   data_mc_ratio__673->SetBinError(22,0.01871005);
   data_mc_ratio__673->SetBinError(23,0.03010503);
   data_mc_ratio__673->SetBinError(24,0.03042219);
   data_mc_ratio__673->SetBinError(25,0.03507511);
   data_mc_ratio__673->SetBinError(26,0.03459417);
   data_mc_ratio__673->SetBinError(27,0.1103099);
   data_mc_ratio__673->SetBinError(28,0.3073907);
   data_mc_ratio__673->SetBinError(29,0.2687826);
   data_mc_ratio__673->SetBinError(30,0.2986901);
   data_mc_ratio__673->SetBinError(31,0.3747311);
   data_mc_ratio__673->SetMinimum(0.4);
   data_mc_ratio__673->SetMaximum(1.6);
   data_mc_ratio__673->SetEntries(168.2056);
   data_mc_ratio__673->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__673->SetLineColor(ci);
   data_mc_ratio__673->SetLineWidth(2);
   data_mc_ratio__673->SetMarkerStyle(20);
   data_mc_ratio__673->SetMarkerSize(1.2);
   data_mc_ratio__673->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__673->GetXaxis()->SetRange(1,30);
   data_mc_ratio__673->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__673->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__673->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__673->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__673->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__673->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__673->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__673->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__673->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__673->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__673->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__673->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__673->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__673->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__673->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__673->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__673->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1490[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1490[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1490[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1490[30] = {
   0.1252403,
   0.08849243,
   0.1055397,
   0.1094635,
   0.1018771,
   0.1650078,
   0.1835104,
   0.2081278,
   0.1461945,
   0.2536448,
   0.2313769,
   0.2266921,
   0.3427408,
   0.1967326,
   0.21252,
   0.2431352,
   0.2258848,
   0.2999739,
   0.1163446,
   0.5256154,
   0.3109333,
   0.3676888,
   0.3748093,
   0.4251903,
   0.5454978,
   0.6214482,
   0.3112964,
   0.2944239,
   0.3388018,
   0.4454988};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1490,Graph_from_mc_statistical_error_fy1490,Graph_from_mc_statistical_error_fex1490,Graph_from_mc_statistical_error_fey1490);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1490 = new TH1F("Graph_Graph_from_mc_statistical_error1490","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1490->SetMinimum(0.2542622);
   Graph_Graph_from_mc_statistical_error1490->SetMaximum(1.745738);
   Graph_Graph_from_mc_statistical_error1490->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1490->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1490->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1490->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1490->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1490->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1490->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1490->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1490->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1490->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1490->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1490->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1490->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1490->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1490->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1490->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1490);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_both_16->cd();
   Z_dR_Bj1_both_16->Modified();
   Z_dR_Bj1_both_16->cd();
   Z_dR_Bj1_both_16->SetSelected(Z_dR_Bj1_both_16);
}
