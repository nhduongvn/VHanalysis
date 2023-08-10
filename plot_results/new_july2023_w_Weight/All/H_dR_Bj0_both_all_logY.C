void H_dR_Bj0_both_all_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_both_all/H_dR_Bj0_both_all
//=========  (Thu Aug 10 12:21:44 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_both_all = new TCanvas("H_dR_Bj0_both_all", "H_dR_Bj0_both_all",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_both_all->SetHighLightColor(2);
   H_dR_Bj0_both_all->Range(0,0,1,1);
   H_dR_Bj0_both_all->SetFillColor(0);
   H_dR_Bj0_both_all->SetFillStyle(4000);
   H_dR_Bj0_both_all->SetBorderMode(0);
   H_dR_Bj0_both_all->SetBorderSize(2);
   H_dR_Bj0_both_all->SetFrameFillStyle(1000);
   H_dR_Bj0_both_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1.372618,6.314516,13.13692);
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
   st->SetMinimum(0.3);
   st->SetMaximum(1.454097e+11);
   
   TH1F *st_stack_236 = new TH1F("st_stack_236","",30,0,6);
   st_stack_236->SetMinimum(0.04384211);
   st_stack_236->SetMaximum(4.852459e+11);
   st_stack_236->SetDirectory(0);
   st_stack_236->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_236->SetLineColor(ci);
   st_stack_236->GetXaxis()->SetRange(1,30);
   st_stack_236->GetXaxis()->SetLabelFont(42);
   st_stack_236->GetXaxis()->SetLabelSize(0.035);
   st_stack_236->GetXaxis()->SetTitleSize(0.035);
   st_stack_236->GetXaxis()->SetTitleFont(42);
   st_stack_236->GetYaxis()->SetTitle("Events/0.2");
   st_stack_236->GetYaxis()->SetLabelFont(42);
   st_stack_236->GetYaxis()->SetLabelSize(0.05);
   st_stack_236->GetYaxis()->SetTitleSize(0.057);
   st_stack_236->GetYaxis()->SetTitleOffset(1.2);
   st_stack_236->GetYaxis()->SetTitleFont(42);
   st_stack_236->GetZaxis()->SetLabelFont(42);
   st_stack_236->GetZaxis()->SetLabelSize(0.035);
   st_stack_236->GetZaxis()->SetTitleSize(0.035);
   st_stack_236->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_236);
   
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(1,19377.5);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(2,97632.08);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(3,75448.44);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(4,56934.89);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(5,50415.39);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(6,36352.46);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(7,33568.85);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(8,27422.19);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(9,43271.16);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(10,22103.51);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(11,20575.73);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(12,25075.63);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(13,20328.25);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(14,18895.82);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(15,13711.12);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(16,14834.58);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(17,9307.114);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(18,5476.654);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(19,4380.122);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(20,3933.552);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(21,2062.473);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(22,2324.187);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(23,1617.042);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(24,502.8385);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(25,116.6114);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(26,317.3227);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(27,46.774);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(28,73.2197);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(29,31.578);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(1,1458.233);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(2,15492.68);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(3,4117.536);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(4,4239.425);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(5,3730.48);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(6,2547.807);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(7,3361.511);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(8,2448.063);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(9,15101.28);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(10,2667.837);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(11,1925.252);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(12,2485.806);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(13,1853.843);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(14,1827.034);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(15,1233.98);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(16,1458.473);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(17,1084.667);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(18,753.0475);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(19,741.7945);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(20,738.2883);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(21,488.6481);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(22,710.2345);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(23,601.7877);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(24,97.14845);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(25,44.57062);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(26,269.5086);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(27,19.56278);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(28,36.74282);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(29,31.578);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetEntries(30761);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(1,100.5553);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(2,319.144);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(3,380.8459);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(4,335.4861);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(5,279.8593);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(6,237.8294);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(7,212.8892);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(8,178.4677);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(9,158.9406);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(10,149.5084);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(11,124.3374);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(12,122.4505);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(13,112.6722);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(14,114.4668);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(15,104.2745);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(16,100.2738);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(17,58.35739);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(18,43.69201);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(19,30.10216);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(20,20.23258);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(21,13.9584);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(22,8.914268);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(23,8.200932);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(24,4.648072);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(25,2.184311);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(26,1.332301);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(27,1.273678);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(28,0.8932326);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(29,0.04982199);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(30,0.04982199);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(31,0.4890822);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(1,4.187868);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(2,7.095829);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(3,7.84843);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(4,7.397015);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(5,6.802945);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(6,6.163345);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(7,5.881943);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(8,5.406355);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(9,5.066371);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(10,4.961254);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(11,4.386209);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(12,4.482869);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(13,4.209619);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(14,4.335601);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(15,4.018507);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(16,4.021245);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(17,2.969688);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(18,2.60461);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(19,2.103119);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(20,1.580069);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(21,1.356141);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(22,0.9931458);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(23,1.081498);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(24,0.801034);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(25,0.5353008);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(26,0.4256203);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(27,0.4929774);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(28,0.39859);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(29,0.04982199);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(30,0.04982199);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(31,0.2964112);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetEntries(36922);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_3 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_3","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(1,1573.976);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(2,6353.188);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(3,7984.309);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(4,7175.102);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(5,6004.487);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(6,4982.701);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(7,4131.357);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(8,3527.654);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(9,3067.179);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(10,2737.347);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(11,2447.963);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(12,2247.437);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(13,2057.905);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(14,1926.642);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(15,1823.739);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(16,1643.193);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(17,1020.139);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(18,690.9899);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(19,464.7976);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(20,315.147);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(21,215.7645);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(22,139.4301);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(23,92.54883);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(24,59.0281);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(25,36.51935);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(26,20.30701);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(27,11.82546);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(28,6.077158);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(29,4.82541);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(30,2.393617);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(31,3.96269);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(1,10.32304);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(2,20.76004);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(3,23.29913);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(4,22.06889);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(5,20.17146);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(6,18.35862);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(7,16.70952);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(8,15.42429);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(9,14.38796);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(10,13.5967);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(11,12.86118);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(12,12.31905);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(13,11.79365);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(14,11.41699);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(15,11.11722);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(16,10.54701);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(17,8.298076);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(18,6.830953);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(19,5.596944);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(20,4.602032);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(21,3.807616);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(22,3.064028);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(23,2.489127);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(24,1.986308);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(25,1.559911);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(26,1.164291);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(27,0.8956059);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(28,0.64263);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(29,0.5732997);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(30,0.4039031);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(31,0.5063051);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetEntries(956114);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_4 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_4","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(1,322.0668);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(2,1011.653);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(3,1088.325);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(4,831.7685);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(5,627.7641);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(6,514.4925);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(7,440.6518);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(8,389.2408);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(9,349.6595);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(10,319.7635);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(11,303.0973);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(12,285.3538);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(13,250.1774);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(14,269.6413);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(15,273.753);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(16,241.4083);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(17,135.7366);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(18,80.94674);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(19,52.52657);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(20,37.00592);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(21,28.79529);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(22,18.50318);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(23,11.23406);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(24,5.878541);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(25,4.574973);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(26,0.5843482);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(27,1.532095);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(28,0.4952196);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(29,0.4175533);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(30,0.4866454);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(31,0.3181694);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(1,8.949353);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(2,19.38197);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(3,23.07317);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(4,22.04698);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(5,17.87828);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(6,17.28007);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(7,15.5994);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(8,15.34738);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(9,15.03119);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(10,12.55547);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(11,12.91892);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(12,13.08649);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(13,10.25452);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(14,11.47212);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(15,12.44913);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(16,9.690456);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(17,8.125316);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(18,5.358188);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(19,4.081223);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(20,3.03877);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(21,3.47522);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(22,2.279112);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(23,2.779033);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(24,1.132826);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(25,1.193175);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(26,0.2270539);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(27,0.7632282);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(28,0.3194313);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(29,0.2960884);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(30,0.3821586);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(31,0.1899411);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetEntries(52923);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_5 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_5","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(1,37.23745);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(2,94.56916);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(3,110.5019);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(4,79.28048);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(5,66.22429);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(6,54.36473);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(7,33.44028);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(8,42.81753);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(9,32.28899);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(10,36.9237);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(11,30.64874);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(12,35.00535);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(13,30.72913);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(14,27.66766);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(15,23.58239);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(16,27.07339);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(17,13.07832);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(18,14.44044);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(19,8.165224);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(20,3.352783);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(21,4.419041);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(22,3.20843);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(23,0.8054149);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(24,0.4127209);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(25,0.2141708);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(26,0.5605952);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(27,0.0005133298);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(29,0.01249988);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(31,0.01224321);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(1,3.13592);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(2,11.92814);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(3,11.46159);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(4,9.01319);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(5,5.817037);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(6,6.241494);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(7,3.10434);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(8,7.909762);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(9,4.661499);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(10,5.056594);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(11,3.762358);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(12,4.77571);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(13,4.183538);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(14,3.358525);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(15,2.201151);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(16,4.141868);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(17,2.383445);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(18,2.395261);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(19,2.300635);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(20,0.6523966);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(21,1.282282);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(22,1.302573);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(23,0.421754);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(24,0.2130972);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(25,0.1276497);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(26,0.4151832);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(27,0.000362979);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(29,0.0122459);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(31,0.01224321);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetEntries(8398);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_6 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_6","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(2,0.7673486);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(3,0.8551506);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(4,0.4496752);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(6,0.1343693);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(7,0.586412);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(10,0.3153059);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(11,0.1343693);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(14,0.2687386);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(15,0.7207813);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(16,0.7673486);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(18,0.3153059);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(2,0.5511446);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(3,0.5084367);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(4,0.3427432);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(6,0.1343693);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(7,0.4715906);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(10,0.3153059);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(11,0.1343693);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(14,0.1900269);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(15,0.4903599);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(16,0.5511446);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(18,0.3153059);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetEntries(21);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_7 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_7","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(1,0.2179625);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(2,1.74818);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(3,1.10593);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(4,0.7512308);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(5,0.5449062);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(6,0.1089812);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(7,0.6700051);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(8,0.2179625);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(9,0.4359249);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(10,0.7512308);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(11,0.3269437);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(12,0.1089812);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(13,0.2179625);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(14,0.1089812);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(15,0.6700051);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(16,0.985311);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(17,0.2179625);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(18,0.3153059);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(1,0.1541227);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(2,0.6408218);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(3,0.52498);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(4,0.3833086);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(5,0.2436895);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(6,0.1089812);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(7,0.4775944);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(8,0.1541227);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(9,0.2179625);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(10,0.3833086);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(11,0.188761);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(12,0.1089812);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(13,0.1541227);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(14,0.1089812);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(15,0.4775944);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(16,0.5722886);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(17,0.1541227);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(18,0.3153059);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetEntries(62);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_8 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_8","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(1,7.830886);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(2,29.19527);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(3,23.60743);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(4,18.92593);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(5,7.479057);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(6,6.18674);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(7,8.389714);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(8,4.701308);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(9,7.008813);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(10,6.124569);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(11,4.128595);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(12,3.662217);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(13,5.7404);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(14,5.667985);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(15,4.194857);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(16,3.93548);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(17,2.771597);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(18,2.606956);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(19,1.262261);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(20,0.2794144);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(22,0.2794144);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(1,1.432235);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(2,2.763954);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(3,2.492923);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(4,2.219078);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(5,1.39118);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(6,1.265233);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(7,1.485747);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(8,1.109941);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(9,1.351317);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(10,1.279171);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(11,1.034349);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(12,0.9805743);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(13,1.225728);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(14,1.210192);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(15,1.050582);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(16,1.017642);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(17,0.8363077);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(18,0.8258985);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(19,0.5653713);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(20,0.2794144);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(22,0.2794144);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetEntries(591);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_9 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_9","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(1,6.110691);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(2,26.26766);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(3,26.10966);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(4,18.04273);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(5,11.46776);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(6,8.082997);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(7,6.325523);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(8,5.617647);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(9,5.196343);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(10,4.934002);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(11,4.895591);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(12,4.582778);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(13,4.575893);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(14,4.390068);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(15,4.456863);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(16,3.984629);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(17,2.295149);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(18,1.323311);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(19,0.7241236);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(20,0.399371);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(21,0.2636285);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(22,0.2075253);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(23,0.08259187);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(24,0.04992318);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(25,0.03716648);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(26,0.02634013);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(27,0.00887873);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(28,0.009010922);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(29,0.005338921);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(30,0.002285779);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(31,0.003672001);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(1,0.106954);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(2,0.222166);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(3,0.2199892);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(4,0.1821277);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(5,0.1446303);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(6,0.1214351);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(7,0.1078043);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(8,0.1018118);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(9,0.09795992);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(10,0.09563369);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(11,0.0952176);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(12,0.0926404);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(13,0.09211331);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(14,0.0902123);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(15,0.09120442);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(16,0.08640649);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(17,0.06513488);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(18,0.04945228);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(19,0.036869);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(20,0.02727717);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(21,0.02199762);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(22,0.01976603);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(23,0.01204421);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(24,0.009479727);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(25,0.008468394);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(26,0.007405023);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(27,0.003639189);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(28,0.004131757);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(29,0.0031504);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(30,0.002285779);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(31,0.002673275);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetEntries(84809);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_10 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_10","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(1,2.274957);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(2,10.53368);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(3,12.32429);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(4,9.344065);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(5,6.193702);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(6,4.434658);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(7,3.386366);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(8,2.841639);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(9,2.569961);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(10,2.284562);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(11,2.014257);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(12,1.900372);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(13,1.727486);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(14,1.715137);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(15,1.579298);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(16,1.47639);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(17,0.8301262);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(18,0.5214016);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(19,0.2991199);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(20,0.1687695);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(21,0.1083966);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(22,0.0576286);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(23,0.04939594);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(24,0.02744219);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(25,0.0150932);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(26,0.01097688);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(27,0.005488438);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(28,0.004116328);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(29,0.004116328);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(31,0.002744219);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(1,0.03304625);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(2,0.07110917);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(3,0.07691595);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(4,0.06697356);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(5,0.05452688);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(6,0.04613872);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(7,0.04031832);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(8,0.03693345);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(9,0.03512358);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(10,0.03311593);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(11,0.03109517);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(12,0.03020332);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(13,0.0287967);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(14,0.02869359);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(15,0.02753389);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(16,0.02662171);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(17,0.01996216);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(18,0.01582055);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(19,0.01198279);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(20,0.009000827);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(21,0.007213456);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(22,0.005259622);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(23,0.004869463);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(24,0.003629484);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(25,0.002691697);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(26,0.002295487);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(27,0.001623154);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(28,0.001405693);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(29,0.001405693);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(31,0.001147744);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetEntries(150219);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_11 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_11","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(1,0.0313403);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(2,0.07754279);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(3,0.06251983);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(4,0.05808284);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(5,0.04607739);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(6,0.03608106);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(7,0.03356048);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(8,0.008416081);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(9,0.01482642);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(10,0.0116838);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(11,0.01115109);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(12,0.004208041);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(13,0.005255579);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(14,0.00589551);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(15,0.007368543);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(16,0.008523299);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(17,0.003160502);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(19,0.001580251);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(26,0.002627789);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(1,0.008846995);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(2,0.01332957);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(3,0.01143237);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(4,0.0115396);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(5,0.01034713);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(6,0.009260718);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(7,0.008912385);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(8,0.004336466);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(9,0.006131767);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(10,0.004937035);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(11,0.00512691);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(12,0.003066345);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(13,0.003716255);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(14,0.003531947);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(15,0.003794319);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(16,0.004402264);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(17,0.002234813);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(19,0.001580251);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(26,0.002627789);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetEntries(200);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all_stack_12 = new TH1D("VbbHcc_both_H_dR_Bj0_all_stack_12","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(1,0.007665873);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(2,0.02816196);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(3,0.03665758);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(4,0.03113699);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(5,0.02023053);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(6,0.01673798);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(7,0.01106671);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(8,0.012265);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(9,0.009475706);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(10,0.006767239);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(11,0.005487163);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(12,0.00450708);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(13,0.00483024);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(14,0.002535976);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(15,0.004265369);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(16,0.002052217);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(17,0.003883927);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(18,0.001902557);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(19,0.0008069192);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(20,0.0005072625);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(21,0.0002076057);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(22,0.0002076057);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(23,0.0002076057);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(29,0.0002076057);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(1,0.001479806);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(2,0.002832737);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(3,0.003247336);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(4,0.002953774);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(5,0.002415142);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(6,0.002186762);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(7,0.001764888);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(8,0.001885017);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(9,0.001666653);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(10,0.001356894);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(11,0.001254476);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(12,0.001147506);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(13,0.001164593);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(14,0.0008624122);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(15,0.001088824);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(16,0.0007487139);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(17,0.001125502);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(18,0.000689952);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(19,0.0004718988);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(20,0.0003645467);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(21,0.0002076057);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(22,0.0002076057);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(23,0.0002076057);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(29,0.0002076057);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetEntries(775);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR_Bj0_all__648 = new TH1D("VbbHcc_both_H_dR_Bj0_all__648","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(1,18811);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(2,62455);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(3,62676);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(4,49371);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(5,40540);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(6,34098);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(7,29019);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(8,25316);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(9,22845);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(10,20570);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(11,19181);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(12,17840);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(13,16885);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(14,16316);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(15,15670);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(16,14544);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(17,9304);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(18,6399);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(19,4556);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(20,3214);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(21,2263);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(22,1563);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(23,1031);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(24,646);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(25,387);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(26,283);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(27,129);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(28,92);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(29,53);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(30,27);
   VbbHcc_both_H_dR_Bj0_all__648->SetBinContent(31,48);
   VbbHcc_both_H_dR_Bj0_all__648->SetEntries(496161);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all__648->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all__648->SetLineWidth(2);
   VbbHcc_both_H_dR_Bj0_all__648->SetMarkerStyle(20);
   VbbHcc_both_H_dR_Bj0_all__648->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_Bj0_all__648->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all__648->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all__648->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all__648->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all__648->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all__648->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all__648->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all__648->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all__648->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all__648->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all__648->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all__648->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all__648->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all__648->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all__648->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_all_fx1471[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_all_fy1471[30] = {
   21427.81,
   105479.3,
   85076.53,
   65404.13,
   57419.48,
   42160.85,
   38406.59,
   31573.77,
   46894.46,
   25361.48,
   23493.3,
   27776.14,
   22792.01,
   21246.4,
   15948.11,
   16857.69,
   10540.55,
   6311.807,
   4938.002,
   4310.139,
   2325.782,
   2494.788,
   1729.964,
   572.8833,
   160.1565,
   340.1469,
   61.42011,
   80.69844,
   36.89295,
   2.93237};
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_all_fex1471[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_all_fey1471[30] = {
   1458.307,
   15492.71,
   4117.69,
   4239.557,
   3730.588,
   2547.948,
   3361.596,
   2448.179,
   15101.29,
   2667.911,
   1925.347,
   2485.88,
   1853.919,
   1827.115,
   1234.102,
   1458.555,
   1084.736,
   753.1064,
   741.8336,
   738.3109,
   488.6788,
   710.2467,
   601.8004,
   97.17889,
   44.61726,
   269.5118,
   19.60434,
   36.75199,
   31.58463,
   0.5582745};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_Bj0_all_fx1471,Graph_from_VbbHcc_both_H_dR_Bj0_all_fy1471,Graph_from_VbbHcc_both_H_dR_Bj0_all_fex1471,Graph_from_VbbHcc_both_H_dR_Bj0_all_fey1471);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_Bj0_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->SetMinimum(2.136686);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->SetMaximum(133068.9);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR_Bj0_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj0_both_all->cd();
  
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
   
   TH1D *data_mc_ratio__649 = new TH1D("data_mc_ratio__649","",30,0,6);
   data_mc_ratio__649->SetBinContent(1,0.8778777);
   data_mc_ratio__649->SetBinContent(2,0.592107);
   data_mc_ratio__649->SetBinContent(3,0.7367015);
   data_mc_ratio__649->SetBinContent(4,0.7548605);
   data_mc_ratio__649->SetBinContent(5,0.7060322);
   data_mc_ratio__649->SetBinContent(6,0.8087598);
   data_mc_ratio__649->SetBinContent(7,0.7555734);
   data_mc_ratio__649->SetBinContent(8,0.8018047);
   data_mc_ratio__649->SetBinContent(9,0.4871577);
   data_mc_ratio__649->SetBinContent(10,0.8110724);
   data_mc_ratio__649->SetBinContent(11,0.8164457);
   data_mc_ratio__649->SetBinContent(12,0.6422779);
   data_mc_ratio__649->SetBinContent(13,0.7408299);
   data_mc_ratio__649->SetBinContent(14,0.767942);
   data_mc_ratio__649->SetBinContent(15,0.9825618);
   data_mc_ratio__649->SetBinContent(16,0.8627516);
   data_mc_ratio__649->SetBinContent(17,0.8826867);
   data_mc_ratio__649->SetBinContent(18,1.013814);
   data_mc_ratio__649->SetBinContent(19,0.9226405);
   data_mc_ratio__649->SetBinContent(20,0.7456837);
   data_mc_ratio__649->SetBinContent(21,0.9730059);
   data_mc_ratio__649->SetBinContent(22,0.6265062);
   data_mc_ratio__649->SetBinContent(23,0.5959662);
   data_mc_ratio__649->SetBinContent(24,1.127629);
   data_mc_ratio__649->SetBinContent(25,2.416386);
   data_mc_ratio__649->SetBinContent(26,0.8319935);
   data_mc_ratio__649->SetBinContent(27,2.100289);
   data_mc_ratio__649->SetBinContent(28,1.140047);
   data_mc_ratio__649->SetBinContent(29,1.436589);
   data_mc_ratio__649->SetBinContent(30,9.207569);
   data_mc_ratio__649->SetBinContent(31,10.02381);
   data_mc_ratio__649->SetBinError(1,0.006400709);
   data_mc_ratio__649->SetBinError(2,0.002369281);
   data_mc_ratio__649->SetBinError(3,0.002942665);
   data_mc_ratio__649->SetBinError(4,0.003397275);
   data_mc_ratio__649->SetBinError(5,0.003506571);
   data_mc_ratio__649->SetBinError(6,0.004379809);
   data_mc_ratio__649->SetBinError(7,0.004435427);
   data_mc_ratio__649->SetBinError(8,0.00503931);
   data_mc_ratio__649->SetBinError(9,0.003223102);
   data_mc_ratio__649->SetBinError(10,0.005655128);
   data_mc_ratio__649->SetBinError(11,0.005895107);
   data_mc_ratio__649->SetBinError(12,0.004808677);
   data_mc_ratio__649->SetBinError(13,0.005701222);
   data_mc_ratio__649->SetBinError(14,0.006012036);
   data_mc_ratio__649->SetBinError(15,0.007849199);
   data_mc_ratio__649->SetBinError(16,0.007153916);
   data_mc_ratio__649->SetBinError(17,0.009151067);
   data_mc_ratio__649->SetBinError(18,0.01267367);
   data_mc_ratio__649->SetBinError(19,0.01366912);
   data_mc_ratio__649->SetBinError(20,0.01315321);
   data_mc_ratio__649->SetBinError(21,0.02045376);
   data_mc_ratio__649->SetBinError(22,0.01584696);
   data_mc_ratio__649->SetBinError(23,0.01856061);
   data_mc_ratio__649->SetBinError(24,0.04436598);
   data_mc_ratio__649->SetBinError(25,0.1228318);
   data_mc_ratio__649->SetBinError(26,0.04945688);
   data_mc_ratio__649->SetBinError(27,0.1849202);
   data_mc_ratio__649->SetBinError(28,0.1188581);
   data_mc_ratio__649->SetBinError(29,0.1973307);
   data_mc_ratio__649->SetBinError(30,1.771998);
   data_mc_ratio__649->SetBinError(31,1.939139);
   data_mc_ratio__649->SetMinimum(0.4);
   data_mc_ratio__649->SetMaximum(1.6);
   data_mc_ratio__649->SetEntries(134.2979);
   data_mc_ratio__649->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__649->SetLineColor(ci);
   data_mc_ratio__649->SetLineWidth(2);
   data_mc_ratio__649->SetMarkerStyle(20);
   data_mc_ratio__649->SetMarkerSize(1.2);
   data_mc_ratio__649->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__649->GetXaxis()->SetRange(1,30);
   data_mc_ratio__649->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__649->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__649->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__649->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__649->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__649->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__649->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__649->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__649->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__649->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__649->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__649->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__649->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__649->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__649->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__649->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__649->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1472[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1472[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1472[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1472[30] = {
   0.06805672,
   0.1468792,
   0.04839984,
   0.06482093,
   0.06497078,
   0.06043398,
   0.08752653,
   0.07753838,
   0.3220272,
   0.1051954,
   0.08195306,
   0.08949695,
   0.08134074,
   0.08599645,
   0.07738234,
   0.08652167,
   0.1029108,
   0.1193171,
   0.1502295,
   0.1712963,
   0.2101137,
   0.2846923,
   0.3478688,
   0.1696312,
   0.2785854,
   0.7923395,
   0.3191844,
   0.4554238,
   0.8561157,
   0.1903834};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1472,Graph_from_mc_statistical_error_fy1472,Graph_from_mc_statistical_error_fex1472,Graph_from_mc_statistical_error_fey1472);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1472 = new TH1F("Graph_Graph_from_mc_statistical_error1472","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1472->SetMinimum(0.1294959);
   Graph_Graph_from_mc_statistical_error1472->SetMaximum(2.027339);
   Graph_Graph_from_mc_statistical_error1472->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1472->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1472->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1472->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1472->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1472->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1472->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1472->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1472->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1472->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1472->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1472->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1472->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1472->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1472->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1472->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1472);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_both_all->cd();
   H_dR_Bj0_both_all->Modified();
   H_dR_Bj0_both_all->cd();
   H_dR_Bj0_both_all->SetSelected(H_dR_Bj0_both_all);
}
