void H_dR_Bj0_algo_18()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_18/H_dR_Bj0_algo_18
//=========  (Tue Aug 22 09:21:44 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_algo_18 = new TCanvas("H_dR_Bj0_algo_18", "H_dR_Bj0_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_algo_18->SetHighLightColor(2);
   H_dR_Bj0_algo_18->Range(0,0,1,1);
   H_dR_Bj0_algo_18->SetFillColor(0);
   H_dR_Bj0_algo_18->SetFillStyle(4000);
   H_dR_Bj0_algo_18->SetBorderMode(0);
   H_dR_Bj0_algo_18->SetBorderSize(2);
   H_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1266.705,6.314516,1265448);
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
   st->SetMaximum(1084549);
   
   TH1F *st_stack_139 = new TH1F("st_stack_139","",30,0,6);
   st_stack_139->SetMinimum(0.01);
   st_stack_139->SetMaximum(1138776);
   st_stack_139->SetDirectory(0);
   st_stack_139->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_139->SetLineColor(ci);
   st_stack_139->GetXaxis()->SetRange(1,30);
   st_stack_139->GetXaxis()->SetLabelFont(42);
   st_stack_139->GetXaxis()->SetLabelSize(0.035);
   st_stack_139->GetXaxis()->SetTitleSize(0.035);
   st_stack_139->GetXaxis()->SetTitleFont(42);
   st_stack_139->GetYaxis()->SetTitle("Events/0.2");
   st_stack_139->GetYaxis()->SetLabelFont(42);
   st_stack_139->GetYaxis()->SetLabelSize(0.05);
   st_stack_139->GetYaxis()->SetTitleSize(0.057);
   st_stack_139->GetYaxis()->SetTitleOffset(1.2);
   st_stack_139->GetYaxis()->SetTitleFont(42);
   st_stack_139->GetZaxis()->SetLabelFont(42);
   st_stack_139->GetZaxis()->SetLabelSize(0.035);
   st_stack_139->GetZaxis()->SetTitleSize(0.035);
   st_stack_139->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_139);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,172363.2);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,403043.1);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,328041.8);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,223515.2);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,142025.1);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,107983);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,103833.2);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,62926.21);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,56418.79);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,48247.56);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,35191.14);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,33646.82);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,28255.31);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,24405.67);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(15,20437.47);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(16,12114.44);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,7666.28);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(18,9829.323);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(19,3100.226);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(20,1903.733);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(21,1431.031);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(22,648.4242);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(23,238.3669);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(24,22.16485);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(25,77.01687);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(26,5.881228);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(27,64.51441);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(28,10.40239);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(29,10.40239);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(30,10.40239);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(31,381.0252);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,3590.635);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,8165.026);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,8382.259);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,7636.244);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,5753.11);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,5466.948);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,21525.49);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,3249.109);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,3642.44);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,3433.88);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,2516.332);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,3131.849);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,2511.555);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,2391.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(15,2259.042);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(16,1689.263);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,1311.99);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(18,2351.615);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(19,846.7177);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(20,656.3702);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(21,539.9873);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(22,379.4546);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(23,78.44303);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(24,13.31869);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(25,48.23851);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(26,5.881228);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(27,37.86821);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(28,10.40239);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(29,10.40239);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(30,10.40239);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(31,370.7688);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(105593);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,943.2777);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,3081.825);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,2566.316);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,1665.862);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,1109.512);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,782.5722);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,638.5691);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,505.4543);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,427.8838);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,341.3707);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,267.71);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,224.8838);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,187.7934);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,148.0459);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,117.2548);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(16,90.79592);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,63.97163);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(18,47.85401);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(19,29.71428);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(20,18.54667);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,11.49179);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(22,6.595768);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(23,4.425323);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(24,2.268836);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(25,1.825482);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(26,1.445981);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(27,1.587413);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(28,0.9291055);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(29,0.3097433);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(30,0.1754963);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(31,0.2890564);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,12.56926);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,21.90869);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,20.05225);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,16.07574);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,13.07476);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,10.91941);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,9.943743);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,8.787992);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,8.060911);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,7.156746);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,6.326961);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,5.839625);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,5.357525);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,4.798107);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,4.246796);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(16,3.691207);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,3.042119);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(18,2.720813);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(19,2.011215);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(20,1.562426);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,1.232725);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(22,0.7383204);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(23,0.6935946);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(24,0.4292908);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(25,0.4696265);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(26,0.3726968);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(27,0.3853234);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(28,0.2331332);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(29,0.1264522);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(30,0.1016721);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(31,0.1297626);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(152694);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_3 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(1,17104.92);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(2,60382.51);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(3,47575.4);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(4,28469.55);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(5,17505.95);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(6,12002.77);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(7,9224.778);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(8,7485.59);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(9,6104.471);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(10,4990.771);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(11,3989.921);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(12,3312.402);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(13,2826.708);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(14,2419.826);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(15,2011.095);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(16,1608.197);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(17,1225.918);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(18,894.263);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(19,607.1179);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(20,377.2233);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(21,194.7832);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(22,95.97427);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(23,54.95562);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(24,34.52203);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(25,23.7002);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(26,16.2793);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(27,11.28359);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(28,6.523681);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(29,5.192317);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(30,4.070158);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(31,7.292193);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(1,34.24769);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(2,64.1272);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(3,56.75313);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(4,43.82228);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(5,34.29241);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(6,28.35221);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(7,24.83224);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(8,22.36813);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(9,20.21934);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(10,18.28574);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(11,16.34587);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(12,14.90179);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(13,13.78105);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(14,12.77437);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(15,11.65905);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(16,10.43201);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(17,9.117041);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(18,7.783522);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(19,6.41137);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(20,5.052144);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(21,3.607743);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(22,2.516941);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(23,1.885684);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(24,1.503819);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(25,1.236754);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(26,1.036014);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(27,0.8489774);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(28,0.64462);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(29,0.5671308);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(30,0.5114692);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(31,0.6890259);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetEntries(3537992);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_4 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(1,1044.928);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(2,2801.469);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(3,1991.808);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(4,1348.411);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(5,839.6701);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(6,650.5358);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(7,498.3614);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(8,432.788);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(9,366.1937);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(10,308.4194);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(11,228.3217);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(12,202.4515);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(13,166.8862);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(14,109.6316);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(15,89.23862);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(16,66.61072);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(17,46.72597);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(18,26.92675);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(19,19.88372);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(20,14.68319);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(21,5.47113);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(22,2.085435);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(23,1.452281);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(24,0.6676262);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(25,1.359294);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(26,1.01346);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(27,0.6331538);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(28,0.9789878);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(30,1.122648);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(31,0.1436599);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(1,15.57463);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(2,39.18576);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(3,34.78203);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(4,30.85338);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(5,21.71293);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(6,21.53502);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(7,18.77854);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(8,16.72081);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(9,16.39759);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(10,14.8504);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(11,10.93658);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(12,13.12018);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(13,12.0584);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(14,7.212555);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(15,6.86554);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(16,6.212492);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(17,5.595455);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(18,3.134623);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(19,2.741593);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(20,2.330041);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(21,1.448393);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(22,0.8933198);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(23,0.7333334);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(24,0.301992);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(25,0.7274142);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(26,0.5569248);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(27,0.5101396);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(28,0.6922489);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(30,0.7069984);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(31,0.1436599);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetEntries(53670);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_5 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(1,371.14);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(2,800.4558);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(3,646.7643);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(4,430.5275);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(5,267.9337);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(6,193.1705);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(7,149.2218);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(8,149.586);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(9,112.8392);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(10,77.55521);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(11,68.8954);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(12,54.12872);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(13,62.24767);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(14,36.00417);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(15,34.50592);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(16,17.58619);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(17,15.98094);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(18,5.452397);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(19,6.758965);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(20,1.607374);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(21,2.936441);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(22,0.06701058);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(23,2.86943);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(24,0.3643519);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(27,0.4239076);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(28,0.04495706);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(31,0.04495706);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(1,17.74856);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(2,36.12546);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(3,43.27707);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(4,30.46099);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(5,26.56921);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(6,20.21375);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(7,15.9948);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(8,19.64807);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(9,15.42183);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(10,13.61051);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(11,8.156675);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(12,7.907348);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(13,13.77102);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(14,11.92588);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(15,6.466067);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(16,4.085118);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(17,4.513762);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(18,1.216257);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(19,3.137087);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(20,0.6468571);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(21,2.193178);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(22,0.0500749);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(23,2.192607);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(24,0.3015283);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(27,0.3231577);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(28,0.04495706);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(31,0.04495706);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetEntries(13622);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_6 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(1,5.709342);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(2,5.709342);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(3,3.425605);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(4,3.996539);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(5,1.712803);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(6,1.712803);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(7,2.283737);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(8,3.996539);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(9,1.141868);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(11,1.712803);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(12,1.141868);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(14,0.5709342);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(16,0.5709342);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(18,0.5709342);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(1,1.805452);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(2,1.805452);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(3,1.398497);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(4,1.51055);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(5,0.988887);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(6,0.988887);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(7,1.141868);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(8,1.51055);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(9,0.8074229);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(11,0.988887);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(12,0.8074229);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(14,0.5709342);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(16,0.5709342);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(18,0.5709342);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetEntries(60);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_7 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(1,14.52216);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(2,28.69013);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(3,10.98017);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(4,9.209177);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(5,5.667186);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(6,3.89619);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(7,2.833593);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(8,2.479394);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(9,1.770996);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(10,1.416796);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(11,2.479394);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(12,1.770996);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(13,0.7083982);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(16,0.3541991);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(17,0.3541991);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(18,0.3541991);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(1,2.267981);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(2,3.187792);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(3,1.972097);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(4,1.806068);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(5,1.416796);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(6,1.174746);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(7,1.001826);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(8,0.9371228);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(9,0.7920133);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(10,0.7083982);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(11,0.9371228);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(12,0.7920133);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(13,0.5009132);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(16,0.3541991);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(17,0.3541991);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(18,0.3541991);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetEntries(247);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_8 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(1,23.19139);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(2,47.77985);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(3,20.95608);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(4,16.76486);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(5,7.264773);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(6,6.705944);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(7,4.191215);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(8,5.588287);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(9,3.632387);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(10,4.750044);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(11,3.911801);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(12,0.8382431);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(13,0.8382431);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(14,1.676486);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(15,1.9559);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(16,0.5588287);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(17,0.2794144);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(18,0.2794144);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(19,0.2794144);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(21,0.2794144);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(1,2.545586);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(2,3.653817);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(3,2.419799);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(4,2.164334);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(5,1.424739);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(6,1.368845);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(7,1.082167);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(8,1.249579);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(9,1.007443);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(10,1.152055);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(11,1.045473);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(12,0.4839599);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(13,0.4839599);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(14,0.6844226);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(15,0.7392609);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(16,0.3951516);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(17,0.2794144);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(18,0.2794144);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(19,0.2794144);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(21,0.2794144);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetEntries(543);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_9 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(1,15.92379);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(2,35.13726);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(3,18.74555);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(4,10.18669);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(5,5.825015);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(6,4.131961);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(7,3.527906);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(8,2.892656);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(9,2.725336);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(10,2.118445);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(11,1.761117);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(12,1.415133);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(13,1.117359);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(14,0.9642187);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(15,0.6522656);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(16,0.5842031);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(17,0.4140468);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(18,0.2864297);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(19,0.1644844);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(20,0.1134375);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(21,0.06522656);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(22,0.01701562);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(23,0.008507812);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(24,0.01134375);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(26,0.008507812);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(31,0.002835937);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(1,0.2125061);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(2,0.3156692);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(3,0.2305671);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(4,0.1699671);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(5,0.1285277);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(6,0.1082496);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(7,0.1000246);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(8,0.09057257);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(9,0.08791406);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(10,0.07750985);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(11,0.07067119);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(12,0.06335004);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(13,0.05629175);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(14,0.0522921);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(15,0.04300912);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(16,0.04070336);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(17,0.03426676);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(18,0.02850082);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(19,0.02159785);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(20,0.01793604);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(21,0.01360068);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(22,0.006946599);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(23,0.004911987);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(24,0.005671875);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(26,0.004911987);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(31,0.002835937);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetEntries(38365);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_10 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(1,4.992146);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(2,17.11936);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(3,13.33266);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(4,8.342631);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(5,4.941242);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(6,3.341295);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(7,2.654795);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(8,2.179689);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(9,1.935066);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(10,1.532782);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(11,1.195541);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(12,1.023033);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(13,0.8731483);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(14,0.78548);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(15,0.6560985);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(16,0.54015);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(17,0.3930935);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(18,0.258056);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(19,0.1986677);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(20,0.1399865);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(21,0.06080223);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(22,0.02474509);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(23,0.01484706);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(24,0.009898037);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(25,0.008484032);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(26,0.005656021);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(27,0.003535013);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(28,0.001414005);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(29,0.001414005);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(31,0.003535013);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(1,0.05940926);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(2,0.1100156);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(3,0.09708874);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(4,0.07680015);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(5,0.05910559);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(6,0.04860354);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(7,0.04332375);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(8,0.03925616);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(9,0.0369878);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(10,0.03291931);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(11,0.0290732);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(12,0.02689399);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(13,0.02484589);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(14,0.02356558);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(15,0.02153749);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(16,0.01954194);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(17,0.01667088);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(18,0.01350727);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(19,0.01185152);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(20,0.009948409);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(21,0.006556473);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(22,0.004182684);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(23,0.003239893);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(24,0.002645362);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(25,0.002449129);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(26,0.001999705);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(27,0.001580906);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(28,0.0009998527);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(29,0.0009998527);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(31,0.001580906);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetEntries(94157);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_11 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(1,0.1092366);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(2,0.2161974);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(3,0.1137881);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(4,0.08647895);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(5,0.06827286);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(6,0.03186067);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(7,0.03641219);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(8,0.0295849);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(9,0.01365457);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(10,0.02275762);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(11,0.0182061);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(12,0.01593033);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(13,0.002275762);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(14,0.009103048);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(15,0.009103048);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(17,0.006827286);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(18,0.004551524);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(19,0.006827286);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(1,0.01576694);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(2,0.02218138);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(3,0.01609207);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(4,0.01402874);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(5,0.01246486);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(6,0.008515121);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(7,0.009103048);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(8,0.008205376);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(9,0.005574455);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(10,0.007196591);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(11,0.006436827);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(12,0.0060211);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(13,0.002275762);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(14,0.004551524);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(15,0.004551524);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(17,0.003941735);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(18,0.003218413);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(19,0.003941735);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetEntries(352);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_12 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(1,0.03266259);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(2,0.1138696);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(3,0.06982003);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(4,0.04494852);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(5,0.02187495);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(6,0.01947769);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(7,0.01648112);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(8,0.01498284);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(9,0.008989704);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(10,0.007791077);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(11,0.008690047);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(12,0.009289361);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(13,0.003595882);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(14,0.002996568);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(15,0.001198627);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(16,0.001498284);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(17,0.0008989704);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(18,0.0008989704);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(19,0.0002996568);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(21,0.0002996568);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(1,0.003128509);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(2,0.005841386);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(3,0.004574062);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(4,0.003670031);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(5,0.002560269);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(6,0.00241591);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(7,0.002222314);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(8,0.002118894);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(9,0.001641288);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(10,0.001527956);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(11,0.001613701);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(12,0.001668418);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(13,0.001038042);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(14,0.000947598);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(15,0.0005993136);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(16,0.000670053);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(17,0.0005190208);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(18,0.0005190208);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(19,0.0002996568);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(21,0.0002996568);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetEntries(1270);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR_Bj0__381 = new TH1D("VbbHcc_algo_H_dR_Bj0__381","",30,0,6);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(1,154346);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(2,488047);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(3,388401);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(4,261565);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(5,170051);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(6,122455);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(7,97184);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(8,80990);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(9,68508);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(10,57404);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(11,47605);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(12,38586);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(13,31724);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(14,25564);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(15,19833);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(16,14660);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(17,10486);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(18,7258);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(19,4884);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(20,3187);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(21,1868);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(22,1159);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(23,724);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(24,439);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(25,326);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(26,238);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(27,143);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(28,103);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(29,73);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(30,48);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(31,104);
   VbbHcc_algo_H_dR_Bj0__381->SetEntries(2097992);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0__381->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0__381->SetLineWidth(2);
   VbbHcc_algo_H_dR_Bj0__381->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_Bj0__381->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_Bj0__381->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0__381->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__381->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0__381->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0__381->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__381->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__381->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0__381->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0__381->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0__381->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__381->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__381->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0__381->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0__381->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__381->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fx1277[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fy1277[30] = {
   191892,
   470244.1,
   380889.7,
   255478.2,
   161773.6,
   121631.9,
   114359.7,
   71516.8,
   63441.41,
   53975.53,
   39757.07,
   37446.9,
   31502.48,
   27123.19,
   22692.84,
   13900.23,
   9020.325,
   10805.57,
   3764.351,
   2316.047,
   1646.119,
   753.1884,
   302.093,
   60.00893,
   103.9103,
   24.63414,
   78.44601,
   18.88053,
   15.90586,
   15.77069};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fex1277[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fey1277[30] = {
   3590.9,
   8165.483,
   8382.66,
   7636.51,
   5753.33,
   5467.112,
   21525.52,
   3249.301,
   3642.575,
   3433.995,
   2516.43,
   3131.928,
   2511.665,
   2391.115,
   2259.096,
   1689.316,
   1312.045,
   2351.632,
   846.7547,
   656.3959,
   540.0073,
   379.4647,
   78.50281,
   13.41698,
   48.26213,
   6.009265,
   37.8845,
   10.44801,
   10.41861,
   10.43942};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_Bj0_fx1277,Graph_from_VbbHcc_algo_H_dR_Bj0_fy1277,Graph_from_VbbHcc_algo_H_dR_Bj0_fex1277,Graph_from_VbbHcc_algo_H_dR_Bj0_fey1277);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->SetMinimum(4.798144);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->SetMaximum(526250.1);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR_Bj0","MC unc. (stat.)","fl");

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
   H_dR_Bj0_algo_18->cd();
  
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
   
   TH1D *data_mc_ratio__382 = new TH1D("data_mc_ratio__382","",30,0,6);
   data_mc_ratio__382->SetBinContent(1,0.804338);
   data_mc_ratio__382->SetBinContent(2,1.037859);
   data_mc_ratio__382->SetBinContent(3,1.01972);
   data_mc_ratio__382->SetBinContent(4,1.023825);
   data_mc_ratio__382->SetBinContent(5,1.051166);
   data_mc_ratio__382->SetBinContent(6,1.006767);
   data_mc_ratio__382->SetBinContent(7,0.8498099);
   data_mc_ratio__382->SetBinContent(8,1.132461);
   data_mc_ratio__382->SetBinContent(9,1.079863);
   data_mc_ratio__382->SetBinContent(10,1.063519);
   data_mc_ratio__382->SetBinContent(11,1.197397);
   data_mc_ratio__382->SetBinContent(12,1.030419);
   data_mc_ratio__382->SetBinContent(13,1.007032);
   data_mc_ratio__382->SetBinContent(14,0.9425146);
   data_mc_ratio__382->SetBinContent(15,0.8739761);
   data_mc_ratio__382->SetBinContent(16,1.054658);
   data_mc_ratio__382->SetBinContent(17,1.162486);
   data_mc_ratio__382->SetBinContent(18,0.6716904);
   data_mc_ratio__382->SetBinContent(19,1.297435);
   data_mc_ratio__382->SetBinContent(20,1.376051);
   data_mc_ratio__382->SetBinContent(21,1.13479);
   data_mc_ratio__382->SetBinContent(22,1.538792);
   data_mc_ratio__382->SetBinContent(23,2.396613);
   data_mc_ratio__382->SetBinContent(24,7.315578);
   data_mc_ratio__382->SetBinContent(25,3.13732);
   data_mc_ratio__382->SetBinContent(26,9.66139);
   data_mc_ratio__382->SetBinContent(27,1.82291);
   data_mc_ratio__382->SetBinContent(28,5.455354);
   data_mc_ratio__382->SetBinContent(29,4.589502);
   data_mc_ratio__382->SetBinContent(30,3.04362);
   data_mc_ratio__382->SetBinContent(31,0.2674887);
   data_mc_ratio__382->SetBinError(1,0.002047344);
   data_mc_ratio__382->SetBinError(2,0.001485619);
   data_mc_ratio__382->SetBinError(3,0.001636217);
   data_mc_ratio__382->SetBinError(4,0.00200187);
   data_mc_ratio__382->SetBinError(5,0.002549071);
   data_mc_ratio__382->SetBinError(6,0.002877006);
   data_mc_ratio__382->SetBinError(7,0.002725991);
   data_mc_ratio__382->SetBinError(8,0.003979308);
   data_mc_ratio__382->SetBinError(9,0.004125702);
   data_mc_ratio__382->SetBinError(10,0.004438888);
   data_mc_ratio__382->SetBinError(11,0.005487972);
   data_mc_ratio__382->SetBinError(12,0.005245646);
   data_mc_ratio__382->SetBinError(13,0.005653914);
   data_mc_ratio__382->SetBinError(14,0.005894862);
   data_mc_ratio__382->SetBinError(15,0.006205908);
   data_mc_ratio__382->SetBinError(16,0.008710536);
   data_mc_ratio__382->SetBinError(17,0.01135227);
   data_mc_ratio__382->SetBinError(18,0.007884254);
   data_mc_ratio__382->SetBinError(19,0.01856512);
   data_mc_ratio__382->SetBinError(20,0.02437495);
   data_mc_ratio__382->SetBinError(21,0.02625592);
   data_mc_ratio__382->SetBinError(22,0.04519996);
   data_mc_ratio__382->SetBinError(23,0.08906943);
   data_mc_ratio__382->SetBinError(24,0.3491535);
   data_mc_ratio__382->SetBinError(25,0.1737601);
   data_mc_ratio__382->SetBinError(26,0.6262549);
   data_mc_ratio__382->SetBinError(27,0.1524394);
   data_mc_ratio__382->SetBinError(28,0.537532);
   data_mc_ratio__382->SetBinError(29,0.5371606);
   data_mc_ratio__382->SetBinError(30,0.4393088);
   data_mc_ratio__382->SetBinError(31,0.256428);
   data_mc_ratio__382->SetMinimum(0.4);
   data_mc_ratio__382->SetMaximum(1.6);
   data_mc_ratio__382->SetEntries(102.0589);
   data_mc_ratio__382->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__382->SetLineColor(ci);
   data_mc_ratio__382->SetLineWidth(2);
   data_mc_ratio__382->SetMarkerStyle(20);
   data_mc_ratio__382->SetMarkerSize(1.2);
   data_mc_ratio__382->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__382->GetXaxis()->SetRange(1,30);
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
   data_mc_ratio__382->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__382->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__382->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__382->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1278[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1278[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1278[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1278[30] = {
   0.01871314,
   0.01736435,
   0.0220081,
   0.02989104,
   0.03556408,
   0.04494801,
   0.1882265,
   0.04543409,
   0.05741636,
   0.06362133,
   0.06329516,
   0.0836365,
   0.07972912,
   0.08815758,
   0.09955103,
   0.1215315,
   0.1454543,
   0.2176314,
   0.2249404,
   0.2834122,
   0.3280487,
   0.5038111,
   0.2598631,
   0.223583,
   0.4644594,
   0.2439406,
   0.4829372,
   0.5533745,
   0.6550167,
   0.6619507};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1278,Graph_from_mc_statistical_error_fy1278,Graph_from_mc_statistical_error_fex1278,Graph_from_mc_statistical_error_fey1278);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1278 = new TH1F("Graph_Graph_from_mc_statistical_error1278","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1278->SetMinimum(0.2056592);
   Graph_Graph_from_mc_statistical_error1278->SetMaximum(1.794341);
   Graph_Graph_from_mc_statistical_error1278->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1278->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1278->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1278->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1278->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1278->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1278->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1278->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1278->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1278->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1278->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1278->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1278->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1278->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1278->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1278->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1278);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_algo_18->cd();
   H_dR_Bj0_algo_18->Modified();
   H_dR_Bj0_algo_18->cd();
   H_dR_Bj0_algo_18->SetSelected(H_dR_Bj0_algo_18);
}
