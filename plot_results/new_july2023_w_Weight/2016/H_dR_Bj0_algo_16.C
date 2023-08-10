void H_dR_Bj0_algo_16()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_16/H_dR_Bj0_algo_16
//=========  (Thu Aug 10 10:42:08 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_algo_16 = new TCanvas("H_dR_Bj0_algo_16", "H_dR_Bj0_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_algo_16->SetHighLightColor(2);
   H_dR_Bj0_algo_16->Range(0,0,1,1);
   H_dR_Bj0_algo_16->SetFillColor(0);
   H_dR_Bj0_algo_16->SetFillStyle(4000);
   H_dR_Bj0_algo_16->SetBorderMode(0);
   H_dR_Bj0_algo_16->SetBorderSize(2);
   H_dR_Bj0_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.947883,6.314516,15.44416);
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
   st->SetMaximum(1.006549e+13);
   
   TH1F *st_stack_137 = new TH1F("st_stack_137","",30,0,6);
   st_stack_137->SetMinimum(0.001176274);
   st_stack_137->SetMaximum(4.026768e+13);
   st_stack_137->SetDirectory(0);
   st_stack_137->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_137->SetLineColor(ci);
   st_stack_137->GetXaxis()->SetRange(1,30);
   st_stack_137->GetXaxis()->SetLabelFont(42);
   st_stack_137->GetXaxis()->SetLabelSize(0.035);
   st_stack_137->GetXaxis()->SetTitleSize(0.035);
   st_stack_137->GetXaxis()->SetTitleFont(42);
   st_stack_137->GetYaxis()->SetTitle("Events/0.2");
   st_stack_137->GetYaxis()->SetLabelFont(42);
   st_stack_137->GetYaxis()->SetLabelSize(0.05);
   st_stack_137->GetYaxis()->SetTitleSize(0.057);
   st_stack_137->GetYaxis()->SetTitleOffset(1.2);
   st_stack_137->GetYaxis()->SetTitleFont(42);
   st_stack_137->GetZaxis()->SetLabelFont(42);
   st_stack_137->GetZaxis()->SetLabelSize(0.035);
   st_stack_137->GetZaxis()->SetTitleSize(0.035);
   st_stack_137->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_137);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,172764.3);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,606708);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,589928.4);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,464845.3);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,322920.5);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,243716.8);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,174874.5);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,125794.2);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,117456.3);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,97821.66);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,107014.1);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,72118.32);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,67142.63);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,47724.25);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(15,42821.62);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(16,29451.06);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,17168.64);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(18,32319.56);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(19,9604.837);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(20,7592.827);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(21,4092.767);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(22,2923.549);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(23,3997.024);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(24,375.0429);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(25,543.7087);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(26,1125.154);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(27,579.0392);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(28,298.0088);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(29,29.21315);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(30,298.0088);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(31,1985.358);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,4340.881);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,11726.94);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,14020.89);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,24122.54);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,11971.86);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,22272.6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,8172.92);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,6789.082);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,6468.369);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,5871.753);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,21011.35);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,5184.324);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,5725.137);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,4291.814);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(15,4393.639);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(16,3614.884);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,1936.318);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(18,20318.49);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(19,2344.617);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(20,1827.712);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(21,1612.369);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(22,1519.926);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(23,1632.618);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(24,272.8567);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(25,380.1836);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(26,538.5958);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(27,380.9827);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(28,269.8554);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(29,23.89216);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(30,269.8554);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(31,1468.798);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(131372);

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
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,1454.204);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,5175.205);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,4844.562);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,3326.8);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,2245.783);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,1590.334);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,1209.323);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,965.0241);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,774.4757);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,632.5093);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,514.1623);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,416.9142);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,341.8668);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,279.4084);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,236.5103);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(16,188.2328);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,146.94);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(18,102.1366);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(19,71.59434);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(20,45.6516);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,27.62483);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(22,18.18123);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(23,10.77577);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(24,6.773849);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(25,4.061304);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(26,3.149026);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(27,2.534139);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(28,1.563596);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(29,0.9002793);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(30,0.9925425);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(31,1.675323);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,14.8187);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,26.60415);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,25.75457);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,21.15743);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,17.27898);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,14.47832);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,12.625);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,11.24372);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,10.11225);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,9.069234);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,8.149835);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,7.410984);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,6.662544);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,5.943273);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,5.539984);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(16,4.975312);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,4.38931);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(18,3.617685);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(19,2.932247);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(20,2.389076);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,1.788552);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(22,1.386428);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(23,0.9913606);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(24,0.78593);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(25,0.560318);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(26,0.4580495);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(27,0.4266757);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(28,0.3648099);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(29,0.3185142);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(30,0.3214373);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(31,0.2841891);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(347069);

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
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(1,24669.88);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(2,93007.5);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(3,84603.86);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(4,53464.73);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(5,33831.28);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(6,23145.7);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(7,17059.33);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(8,13189.55);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(9,10380.36);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(10,8094.3);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(11,6486.261);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(12,5436.917);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(13,4743.359);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(14,4175.593);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(15,3618.067);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(16,3016.086);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(17,2407.109);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(18,1770.208);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(19,1233.965);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(20,735.7617);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(21,386.6517);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(22,186.4075);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(23,110.9671);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(24,65.12762);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(25,40.1641);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(26,28.2683);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(27,18.76544);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(28,11.78012);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(29,7.890515);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(30,7.124796);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(31,12.61951);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(1,40.02149);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(2,77.36527);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(3,73.67134);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(4,58.49543);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(5,46.46312);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(6,38.38511);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(7,32.91988);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(8,28.93736);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(9,25.65261);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(10,22.62365);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(11,20.25776);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(12,18.57287);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(13,17.38238);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(14,16.34228);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(15,15.23391);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(16,13.91754);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(17,12.43999);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(18,10.66786);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(19,8.918333);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(20,6.870279);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(21,4.953272);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(22,3.417983);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(23,2.629895);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(24,2.01609);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(25,1.574842);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(26,1.311872);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(27,1.085158);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(28,0.8585474);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(29,0.7050474);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(30,0.6677297);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(31,0.8708613);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetEntries(6426049);

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
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(1,1173.481);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(2,3243.797);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(3,2696.846);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(4,1916.831);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(5,1295.022);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(6,938.9206);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(7,732.4998);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(8,597.4784);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(9,497.3502);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(10,402.9582);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(11,322.7995);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(12,288.3624);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(13,221.0587);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(14,228.9264);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(15,161.9708);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(16,134.1653);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(17,71.89226);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(18,68.50909);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(19,39.64679);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(20,23.79743);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(21,11.00262);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(22,12.24627);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(23,10.25794);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(24,3.620083);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(25,3.530336);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(26,3.463723);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(27,0.8385511);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(28,0.07817989);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(30,0.279517);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(31,0.3793323);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(1,15.18603);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(2,41.43242);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(3,45.71438);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(4,40.37804);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(5,34.32817);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(6,28.92865);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(7,24.27273);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(8,22.93174);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(9,20.86789);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(10,18.54975);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(11,15.63599);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(12,16.25439);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(13,14.05488);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(14,16.3876);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(15,12.86652);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(16,12.63883);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(17,7.912611);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(18,9.673176);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(19,7.113761);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(20,5.60324);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(21,3.593901);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(22,4.300057);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(23,4.249232);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(24,2.456387);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(25,2.454802);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(26,2.453898);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(27,0.4841377);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(28,0.07817989);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(30,0.279517);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(31,0.1699577);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetEntries(94081);

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
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(1,852.6604);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(2,1770.353);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(3,1350.425);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(4,988.1799);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(5,577.5147);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(6,478.0069);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(7,334.3691);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(8,320.2257);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(9,237.6408);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(10,165.804);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(11,154.0965);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(12,116.9348);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(13,93.78889);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(14,76.99343);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(15,64.09809);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(16,47.95171);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(17,29.62703);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(18,27.14255);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(19,14.97977);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(20,19.97748);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(21,5.599097);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(22,3.706282);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(23,2.421423);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(26,6.13927);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(27,0.04446481);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(28,1.031886);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(29,0.04446481);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(1,18.7908);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(2,48.86865);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(3,49.49101);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(4,48.1654);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(5,33.33472);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(6,33.20392);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(7,24.1856);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(8,26.15377);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(9,20.10186);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(10,17.89455);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(11,16.07022);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(12,13.01202);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(13,14.83811);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(14,13.24957);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(15,11.83078);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(16,9.886196);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(17,4.439948);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(18,9.107764);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(19,6.491539);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(20,8.842216);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(21,2.125948);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(22,1.834048);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(23,1.559996);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(26,6.068018);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(27,0.04446481);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(28,1.031886);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(29,0.04446481);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetEntries(65948);

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
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(1,9.54022);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(2,18.00549);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(3,14.24315);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(4,10.0777);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(5,6.852834);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(6,4.434187);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(7,1.746801);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(8,3.090494);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(9,2.418647);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(10,1.746801);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(11,1.343693);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(12,0.6718465);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(13,0.5374772);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(14,0.5374772);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(15,0.2687386);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(16,0.1343693);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(17,0.4031079);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(18,0.4031079);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(19,0.2687386);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(20,0.1343693);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(21,0.1343693);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(1,1.132216);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(2,1.555437);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(3,1.383417);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(4,1.163672);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(5,0.9595887);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(6,0.7718929);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(7,0.4844754);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(8,0.6444125);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(9,0.5700807);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(10,0.4844754);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(11,0.424913);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(12,0.3004589);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(13,0.2687386);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(14,0.2687386);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(15,0.1900269);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(16,0.1343693);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(17,0.2327345);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(18,0.2327345);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(19,0.1900269);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(20,0.1343693);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(21,0.1343693);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetEntries(573);

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
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(1,18.85375);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(2,28.55308);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(3,19.83459);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(4,15.03941);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(5,8.500537);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(6,6.974799);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(7,4.141287);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(8,4.250268);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(9,3.4874);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(10,3.814343);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(11,3.051475);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(12,2.833512);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(13,1.634719);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(14,1.307775);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(15,0.8718499);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(16,1.198794);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(17,0.7628687);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(18,0.2179625);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(19,0.7628687);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(20,0.3269437);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(22,0.1089812);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(23,0.2179625);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(1,1.433424);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(2,1.764015);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(3,1.470237);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(4,1.28024);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(5,0.9624962);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(6,0.8718499);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(7,0.6718055);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(8,0.6805876);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(9,0.616491);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(10,0.6447417);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(11,0.5766745);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(12,0.5556975);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(13,0.4220825);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(14,0.3775221);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(15,0.3082455);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(16,0.3614499);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(17,0.2883373);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(18,0.1541227);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(19,0.2883373);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(20,0.188761);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(22,0.1089812);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(23,0.1541227);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetEntries(1163);

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
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(1,21.40223);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(2,39.88597);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(3,28.69844);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(4,16.78129);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(5,12.64677);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(6,8.025836);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(7,5.593764);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(8,4.377729);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(9,3.648107);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(10,4.377729);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(11,2.675279);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(12,1.945657);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(13,2.432072);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(14,2.432072);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(15,1.70245);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(16,2.188864);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(17,0.9728286);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(18,0.9728286);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(19,0.7296215);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(21,0.2432072);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(1,2.281485);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(2,3.114571);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(3,2.641906);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(4,2.02023);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(5,1.753792);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(6,1.397119);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(7,1.166381);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(8,1.031841);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(9,0.9419372);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(10,1.031841);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(11,0.8066269);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(12,0.6878937);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(13,0.7690885);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(14,0.7690885);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(15,0.6434656);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(16,0.7296215);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(17,0.4864143);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(18,0.4864143);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(19,0.4212471);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(21,0.2432072);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetEntries(665);

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
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(1,11.209);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(2,26.52814);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(3,19.35167);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(4,11.83557);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(5,6.951906);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(6,4.814351);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(7,3.663786);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(8,2.941564);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(9,2.430048);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(10,2.047451);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(11,1.596928);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(12,1.329387);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(13,1.186607);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(14,1.005011);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(15,0.8303473);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(16,0.747174);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(17,0.5281508);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(18,0.4241841);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(19,0.2439752);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(20,0.1552569);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(21,0.06931113);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(22,0.04158668);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(23,0.01524845);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(24,0.00554489);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(25,0.002772445);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(26,0.004158668);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(27,0.001386223);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(28,0.002772445);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(31,0.00554489);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(1,0.1246522);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(2,0.1917652);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(3,0.1637856);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(4,0.1280888);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(5,0.09816766);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(6,0.0816931);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(7,0.07126586);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(8,0.06385658);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(9,0.05803954);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(10,0.05327497);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(11,0.04704995);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(12,0.04292816);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(13,0.04055738);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(14,0.03732519);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(15,0.03392707);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(16,0.03218306);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(17,0.02705799);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(18,0.02424899);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(19,0.01839032);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(20,0.0146704);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(21,0.009802074);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(22,0.007592654);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(23,0.00459758);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(24,0.002772445);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(25,0.001960415);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(26,0.002401008);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(27,0.001386223);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(28,0.001960415);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(31,0.002772445);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetEntries(72116);

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
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(1,3.015183);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(2,10.36776);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(3,8.063577);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(4,5.031525);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(5,2.960988);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(6,2.014548);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(7,1.611136);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(8,1.31755);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(9,1.170398);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(10,0.9227514);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(11,0.7120727);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(12,0.6280883);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(13,0.5344134);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(14,0.4741169);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(15,0.4026943);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(16,0.3208634);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(17,0.2347256);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(18,0.1557659);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(19,0.1184395);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(20,0.08254874);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(21,0.03876202);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(22,0.01543303);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(23,0.009690505);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(24,0.007537059);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(25,0.004665799);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(26,0.002871261);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(27,0.002153446);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(28,0.001794538);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(29,0.0007178152);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(31,0.002153446);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(1,0.03289638);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(2,0.06100057);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(3,0.05379664);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(4,0.04249533);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(5,0.0325994);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(6,0.02688934);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(7,0.02404681);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(8,0.02174577);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(9,0.02049548);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(10,0.01819842);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(11,0.0159865);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(12,0.01501418);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(13,0.01384937);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(14,0.0130447);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(15,0.01202206);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(16,0.01073128);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(17,0.009178496);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(18,0.007477002);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(19,0.00651988);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(20,0.005443103);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(21,0.003729877);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(22,0.002353514);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(23,0.001864939);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(24,0.001644721);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(25,0.00129406);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(26,0.001015144);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(27,0.0008791405);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(28,0.0008025418);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(29,0.000507572);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(31,0.0008791405);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetEntries(112076);

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
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(1,0.09846027);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(2,0.2652957);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(3,0.1668355);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(4,0.1668355);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(5,0.07111019);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(6,0.02461507);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(7,0.0355551);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(8,0.04102511);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(9,0.03282009);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(10,0.02735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(11,0.01914505);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(12,0.01914505);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(13,0.008205022);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(14,0.01367504);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(15,0.01094003);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(16,0.01094003);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(17,0.008205022);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(19,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(21,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(23,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(1,0.01641004);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(2,0.0269367);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(3,0.02136109);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(4,0.02136109);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(5,0.01394586);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(6,0.008205022);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(7,0.00986121);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(8,0.01059264);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(9,0.009474344);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(10,0.008648853);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(11,0.00723615);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(12,0.00723615);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(13,0.004737172);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(14,0.006115663);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(15,0.005470015);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(16,0.005470015);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(17,0.004737172);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(19,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(21,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(23,0.002735007);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetEntries(376);

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
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(1,0.02786674);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(2,0.09181732);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(3,0.08002755);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(4,0.056448);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(5,0.02608041);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(6,0.02000689);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(7,0.02429408);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(8,0.01643423);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(9,0.01214704);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(10,0.007145317);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(11,0.00857438);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(12,0.006788051);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(13,0.004644456);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(14,0.005716254);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(15,0.00428719);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(16,0.001786329);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(17,0.005001722);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(18,0.001429063);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(19,0.001429063);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(20,0.002143595);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(25,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(1,0.003155287);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(2,0.005727407);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(3,0.005347066);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(4,0.004490762);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(5,0.003052481);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(6,0.002673533);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(7,0.00294609);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(8,0.002423095);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(9,0.0020832);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(10,0.001597741);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(11,0.001750238);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(12,0.001557286);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(13,0.00128814);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(14,0.001429063);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(15,0.001237605);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(16,0.0007988707);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(17,0.001336766);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(18,0.0007145317);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(19,0.0007145317);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(20,0.000875119);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(25,0.0003572658);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetEntries(1132);

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
   
   TH1D *VbbHcc_algo_H_dR_Bj0__375 = new TH1D("VbbHcc_algo_H_dR_Bj0__375","",30,0,6);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(1,97447);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(2,198137);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(3,150278);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(4,102423);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(5,67622);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(6,47700);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(7,37385);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(8,30632);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(9,25344);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(10,21089);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(11,17406);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(12,14141);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(13,11546);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(14,9499);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(15,7413);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(16,5567);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(17,4169);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(18,2850);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(19,1955);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(20,1261);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(21,767);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(22,460);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(23,303);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(24,216);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(25,135);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(26,87);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(27,80);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(28,29);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(29,41);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(30,18);
   VbbHcc_algo_H_dR_Bj0__375->SetBinContent(31,48);
   VbbHcc_algo_H_dR_Bj0__375->SetEntries(856077);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0__375->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0__375->SetLineWidth(2);
   VbbHcc_algo_H_dR_Bj0__375->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_Bj0__375->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_Bj0__375->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0__375->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__375->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0__375->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0__375->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__375->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__375->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0__375->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0__375->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0__375->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__375->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__375->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0__375->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0__375->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__375->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fx1273[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fy1273[30] = {
   200978.7,
   710028.5,
   683514.6,
   524600.8,
   360908.1,
   269896,
   194226.8,
   140882.5,
   129359.3,
   107130.2,
   114500.8,
   78384.88,
   72549.04,
   52490.95,
   46906.36,
   32842.1,
   19827.12,
   34289.73,
   10967.15,
   8418.716,
   4524.133,
   3144.256,
   4131.692,
   450.5775,
   591.4722,
   1166.182,
   601.2254,
   312.4671,
   38.04912,
   306.4056};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fex1273[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fey1273[30] = {
   4341.159,
   11727.4,
   14021.27,
   24122.7,
   11972.06,
   22272.68,
   8173.068,
   6789.242,
   6468.493,
   5871.86,
   21011.37,
   5184.404,
   5725.204,
   4291.901,
   4393.704,
   3614.95,
   1936.384,
   20318.5,
   2344.655,
   1827.756,
   1612.383,
   1519.938,
   1632.627,
   272.8763,
   380.1952,
   538.6374,
   380.9848,
   269.859,
   23.90473,
   269.8565};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_Bj0_fx1273,Graph_from_VbbHcc_algo_H_dR_Bj0_fy1273,Graph_from_VbbHcc_algo_H_dR_Bj0_fex1273,Graph_from_VbbHcc_algo_H_dR_Bj0_fey1273);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->SetMinimum(12.72996);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->SetMaximum(793930.1);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_Bj01273);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0","Data (JetHT, 2016)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj0_algo_16->cd();
  
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
   
   TH1D *data_mc_ratio__376 = new TH1D("data_mc_ratio__376","",30,0,6);
   data_mc_ratio__376->SetBinContent(1,0.4848623);
   data_mc_ratio__376->SetBinContent(2,0.279055);
   data_mc_ratio__376->SetBinContent(3,0.2198607);
   data_mc_ratio__376->SetBinContent(4,0.1952399);
   data_mc_ratio__376->SetBinContent(5,0.1873662);
   data_mc_ratio__376->SetBinContent(6,0.1767347);
   data_mc_ratio__376->SetBinContent(7,0.1924812);
   data_mc_ratio__376->SetBinContent(8,0.2174294);
   data_mc_ratio__376->SetBinContent(9,0.1959195);
   data_mc_ratio__376->SetBinContent(10,0.196854);
   data_mc_ratio__376->SetBinContent(11,0.1520164);
   data_mc_ratio__376->SetBinContent(12,0.1804047);
   data_mc_ratio__376->SetBinContent(13,0.1591475);
   data_mc_ratio__376->SetBinContent(14,0.1809645);
   data_mc_ratio__376->SetBinContent(15,0.1580383);
   data_mc_ratio__376->SetBinContent(16,0.169508);
   data_mc_ratio__376->SetBinContent(17,0.2102675);
   data_mc_ratio__376->SetBinContent(18,0.08311526);
   data_mc_ratio__376->SetBinContent(19,0.1782596);
   data_mc_ratio__376->SetBinContent(20,0.1497853);
   data_mc_ratio__376->SetBinContent(21,0.1695352);
   data_mc_ratio__376->SetBinContent(22,0.1462985);
   data_mc_ratio__376->SetBinContent(23,0.07333558);
   data_mc_ratio__376->SetBinContent(24,0.4793848);
   data_mc_ratio__376->SetBinContent(25,0.228244);
   data_mc_ratio__376->SetBinContent(26,0.07460243);
   data_mc_ratio__376->SetBinContent(27,0.1330616);
   data_mc_ratio__376->SetBinContent(28,0.09280977);
   data_mc_ratio__376->SetBinContent(29,1.077554);
   data_mc_ratio__376->SetBinContent(30,0.05874566);
   data_mc_ratio__376->SetBinContent(31,0.02399952);
   data_mc_ratio__376->SetBinError(1,0.001553224);
   data_mc_ratio__376->SetBinError(2,0.0006269126);
   data_mc_ratio__376->SetBinError(3,0.0005671526);
   data_mc_ratio__376->SetBinError(4,0.0006100561);
   data_mc_ratio__376->SetBinError(5,0.0007205222);
   data_mc_ratio__376->SetBinError(6,0.0008092127);
   data_mc_ratio__376->SetBinError(7,0.000995496);
   data_mc_ratio__376->SetBinError(8,0.001242312);
   data_mc_ratio__376->SetBinError(9,0.001230665);
   data_mc_ratio__376->SetBinError(10,0.001355552);
   data_mc_ratio__376->SetBinError(11,0.001152235);
   data_mc_ratio__376->SetBinError(12,0.001517077);
   data_mc_ratio__376->SetBinError(13,0.001481099);
   data_mc_ratio__376->SetBinError(14,0.001856755);
   data_mc_ratio__376->SetBinError(15,0.001835546);
   data_mc_ratio__376->SetBinError(16,0.00227185);
   data_mc_ratio__376->SetBinError(17,0.003256539);
   data_mc_ratio__376->SetBinError(18,0.001556891);
   data_mc_ratio__376->SetBinError(19,0.00403162);
   data_mc_ratio__376->SetBinError(20,0.00421805);
   data_mc_ratio__376->SetBinError(21,0.006121563);
   data_mc_ratio__376->SetBinError(22,0.006821204);
   data_mc_ratio__376->SetBinError(23,0.004213019);
   data_mc_ratio__376->SetBinError(24,0.032618);
   data_mc_ratio__376->SetBinError(25,0.01964412);
   data_mc_ratio__376->SetBinError(26,0.007998221);
   data_mc_ratio__376->SetBinError(27,0.01487674);
   data_mc_ratio__376->SetBinError(28,0.01723434);
   data_mc_ratio__376->SetBinError(29,0.1682857);
   data_mc_ratio__376->SetBinError(30,0.01384648);
   data_mc_ratio__376->SetBinError(31,0.01796206);
   data_mc_ratio__376->SetMinimum(0.4);
   data_mc_ratio__376->SetMaximum(1.6);
   data_mc_ratio__376->SetEntries(67.1005);
   data_mc_ratio__376->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__376->SetLineColor(ci);
   data_mc_ratio__376->SetLineWidth(2);
   data_mc_ratio__376->SetMarkerStyle(20);
   data_mc_ratio__376->SetMarkerSize(1.2);
   data_mc_ratio__376->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__376->GetXaxis()->SetRange(1,30);
   data_mc_ratio__376->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__376->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__376->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__376->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__376->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__376->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__376->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__376->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__376->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__376->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__376->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__376->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__376->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__376->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__376->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__376->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__376->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1274[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1274[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1274[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1274[30] = {
   0.02160009,
   0.0165168,
   0.02051349,
   0.04598297,
   0.03317203,
   0.0825232,
   0.04208002,
   0.04819081,
   0.05000409,
   0.05481052,
   0.1835042,
   0.06614036,
   0.07891495,
   0.08176458,
   0.09366969,
   0.1100706,
   0.09766339,
   0.5925534,
   0.2137889,
   0.2171063,
   0.356396,
   0.4834015,
   0.3951474,
   0.6056147,
   0.6427948,
   0.4618812,
   0.6336806,
   0.8636396,
   0.6282595,
   0.8807166};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1274,Graph_from_mc_statistical_error_fy1274,Graph_from_mc_statistical_error_fex1274,Graph_from_mc_statistical_error_fey1274);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1274 = new TH1F("Graph_Graph_from_mc_statistical_error1274","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1274->SetMinimum(0.107355);
   Graph_Graph_from_mc_statistical_error1274->SetMaximum(2.05686);
   Graph_Graph_from_mc_statistical_error1274->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1274->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1274->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1274->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1274->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1274->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1274->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1274->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1274->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1274->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1274->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1274->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1274->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1274->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1274->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1274->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1274);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_algo_16->cd();
   H_dR_Bj0_algo_16->Modified();
   H_dR_Bj0_algo_16->cd();
   H_dR_Bj0_algo_16->SetSelected(H_dR_Bj0_algo_16);
}
