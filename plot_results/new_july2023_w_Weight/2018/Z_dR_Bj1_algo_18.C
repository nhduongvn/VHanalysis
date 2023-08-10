void Z_dR_Bj1_algo_18()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_18/Z_dR_Bj1_algo_18
//=========  (Thu Aug 10 12:24:17 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_algo_18 = new TCanvas("Z_dR_Bj1_algo_18", "Z_dR_Bj1_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_algo_18->SetHighLightColor(2);
   Z_dR_Bj1_algo_18->Range(0,0,1,1);
   Z_dR_Bj1_algo_18->SetFillColor(0);
   Z_dR_Bj1_algo_18->SetFillStyle(4000);
   Z_dR_Bj1_algo_18->SetBorderMode(0);
   Z_dR_Bj1_algo_18->SetBorderSize(2);
   Z_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-637.5584,6.314516,636930.8);
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
   st->SetMaximum(545880);
   
   TH1F *st_stack_151 = new TH1F("st_stack_151","",30,0,6);
   st_stack_151->SetMinimum(0.01);
   st_stack_151->SetMaximum(573174);
   st_stack_151->SetDirectory(0);
   st_stack_151->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_151->SetLineColor(ci);
   st_stack_151->GetXaxis()->SetRange(1,30);
   st_stack_151->GetXaxis()->SetLabelFont(42);
   st_stack_151->GetXaxis()->SetLabelSize(0.035);
   st_stack_151->GetXaxis()->SetTitleSize(0.035);
   st_stack_151->GetXaxis()->SetTitleFont(42);
   st_stack_151->GetYaxis()->SetTitle("Events/0.2");
   st_stack_151->GetYaxis()->SetLabelFont(42);
   st_stack_151->GetYaxis()->SetLabelSize(0.05);
   st_stack_151->GetYaxis()->SetTitleSize(0.057);
   st_stack_151->GetYaxis()->SetTitleOffset(1.2);
   st_stack_151->GetYaxis()->SetTitleFont(42);
   st_stack_151->GetZaxis()->SetLabelFont(42);
   st_stack_151->GetZaxis()->SetLabelSize(0.035);
   st_stack_151->GetZaxis()->SetTitleSize(0.035);
   st_stack_151->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_151);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(1,379.0766);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(2,146038.3);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(3,199441.9);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(4,181459.2);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(5,180858);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(6,162389.6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(7,138557.6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(8,103056.1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(9,98123.2);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(10,80126.14);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(11,61086.38);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(12,57140.18);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(13,55536.91);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(14,44067.67);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(15,36981.7);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(16,36994.08);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(17,29135.41);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(18,29504.8);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(19,28454.54);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(20,24126.5);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(21,23586.93);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(22,20374.64);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(23,19799);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(24,32527.86);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(25,10692.59);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(26,10243.03);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(27,6078.469);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(28,4041.209);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(29,2165.58);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(30,931.7419);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(31,3338.487);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(1,95.12985);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(2,5072.503);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(3,5983.829);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(4,6301.744);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(5,6100.156);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(6,6169.782);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(7,5548.306);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(8,4648.594);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(9,4774.83);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(10,3869.622);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(11,3149.444);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(12,3174.814);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(13,3525.572);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(14,2689.535);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(15,2350.684);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(16,2923.865);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(17,2052.738);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(18,2668.466);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(19,2262.915);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(20,2026.128);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(21,2544.418);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(22,1909.769);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(23,2825.612);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(24,19900.92);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(25,1054.201);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(26,1220.871);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(27,866.6335);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(28,676.4235);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(29,407.3231);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(30,124.636);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(31,844.36);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetEntries(112239);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(1,2.105836);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(2,864.6585);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(3,1715.049);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(4,1657.083);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(5,1469.425);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(6,1228.739);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(7,997.9363);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(8,776.3255);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(9,626.5585);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(10,521.4357);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(11,423.6654);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(12,384.0052);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(13,315.7511);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(14,310.7512);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(15,272.4305);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(16,240.8399);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(17,220.9592);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(18,204.5959);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(19,196.0358);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(20,182.7381);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(21,156.7768);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(22,127.3245);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(23,116.7554);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(24,86.53125);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(25,67.03305);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(26,40.76857);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(27,32.72128);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(28,19.8596);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(29,14.68766);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(30,7.37267);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(31,12.39168);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(1,0.6453629);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(2,11.66655);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(3,16.2835);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(4,15.81095);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(5,15.17399);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(6,13.924);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(7,12.67991);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(8,11.10567);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(9,9.831153);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(10,9.018655);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(11,8.023676);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(12,7.683373);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(13,6.852002);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(14,6.971036);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(15,6.548956);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(16,6.020065);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(17,5.922197);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(18,5.647552);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(19,5.572291);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(20,5.395071);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(21,4.88447);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(22,4.364337);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(23,4.307205);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(24,3.568607);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(25,3.086399);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(26,2.401762);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(27,2.236902);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(28,1.710095);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(29,1.491618);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(30,1.030883);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(31,1.323194);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetEntries(153765);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_3 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(1,41.96189);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(2,19110.15);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(3,40526.11);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(4,36288.16);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(5,26731.63);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(6,19284.57);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(7,14071.33);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(8,10583.52);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(9,8294.954);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(10,6832.548);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(11,5799.172);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(12,5098.792);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(13,4566.998);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(14,4144.452);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(15,3822.069);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(16,3496.982);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(17,3208.273);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(18,3010.944);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(19,2862.015);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(20,2734.718);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(21,2543.467);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(22,2223.612);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(23,1759.829);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(24,1329.487);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(25,904.0134);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(26,562.2823);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(27,322.6756);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(28,175.0342);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(29,96.92485);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(30,58.74929);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(31,93.24699);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(1,1.719846);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(2,37.34303);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(3,54.41091);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(4,51.38709);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(5,43.9716);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(6,37.26089);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(7,31.77712);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(8,27.52948);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(9,24.35978);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(10,22.10814);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(11,20.36439);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(12,19.10178);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(13,18.08342);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(14,17.2281);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(15,16.54741);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(16,15.83338);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(17,15.17929);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(18,14.71666);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(19,14.34952);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(20,14.0411);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(21,13.55503);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(22,12.67892);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(23,11.27375);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(24,9.796231);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(25,8.068266);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(26,6.353163);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(27,4.805592);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(28,3.528271);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(29,2.610732);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(30,2.028074);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(31,2.558746);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetEntries(3228671);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_4 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(1,3.24344);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(2,1040.115);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(3,1690.89);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(4,1362.79);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(5,1116.447);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(6,926.3457);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(7,753.802);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(8,606.4824);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(9,479.4955);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(10,431.734);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(11,341.9117);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(12,323.3053);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(13,255.3389);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(14,248.676);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(15,222.3207);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(16,206.9345);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(17,190.2613);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(18,173.0008);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(19,140.2438);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(20,161.1453);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(21,119.449);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(22,123.8632);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(23,98.21076);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(24,81.741);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(25,62.42267);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(26,42.20872);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(27,33.75906);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(28,15.32879);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(29,9.962758);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(30,7.768545);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(31,9.339081);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(1,0.8754585);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(2,21.45549);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(3,32.56822);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(4,30.81078);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(5,27.4504);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(6,22.19291);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(7,21.76643);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(8,17.87302);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(9,15.51032);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(10,14.68887);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(11,13.06072);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(12,16.30406);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(13,11.77793);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(14,11.76213);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(15,12.57428);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(16,11.75251);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(17,11.57473);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(18,10.72872);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(19,7.777322);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(20,10.65586);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(21,7.38927);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(22,10.65515);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(23,7.699923);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(24,8.382997);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(25,5.717436);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(26,3.319804);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(27,4.958308);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(28,1.63276);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(29,1.532983);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(30,1.5957);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(31,1.58454);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetEntries(55877);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_5 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(1,0.7010118);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(2,301.5731);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(3,393.115);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(4,394.703);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(5,397.8229);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(6,268.3412);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(7,293.2644);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(8,189.1887);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(9,148.7849);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(10,126.9877);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(11,123.1619);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(12,86.07327);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(13,100.2401);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(14,83.96689);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(15,89.01131);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(16,70.70768);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(17,47.46713);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(18,72.06276);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(19,52.79758);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(20,65.79986);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(21,36.08189);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(22,46.26439);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(23,47.90683);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(24,24.54584);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(25,23.38591);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(26,12.37224);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(27,9.781882);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(28,4.945607);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(29,3.109529);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(30,1.517318);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(31,3.677758);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(1,0.3426146);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(2,17.08491);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(3,23.63166);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(4,34.50697);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(5,33.44211);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(6,19.2406);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(7,28.16397);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(8,19.21017);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(9,15.00641);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(10,14.16594);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(11,14.43422);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(12,8.531569);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(13,10.32956);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(14,13.40601);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(15,13.74093);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(16,8.561607);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(17,5.768789);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(18,16.32331);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(19,11.93356);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(20,13.14273);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(21,5.869472);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(22,12.02164);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(23,15.65861);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(24,4.066834);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(25,5.290098);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(26,2.516472);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(27,2.405786);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(28,0.9537284);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(29,0.7812696);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(30,0.4575446);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(31,0.8960625);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetEntries(15424);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_6 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(2,4.068384);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(3,4.972469);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(4,4.972469);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(5,3.164299);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(6,1.808171);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(7,1.808171);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(8,2.712256);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(9,1.356128);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(11,1.356128);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(13,1.356128);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(14,1.356128);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(16,0.4520427);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(17,0.4520427);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(19,0.9040853);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(21,0.9040853);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(22,1.356128);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(23,0.9040853);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(24,0.4520427);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(31,0.4520427);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(2,1.356128);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(3,1.499256);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(4,1.499256);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(5,1.195992);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(6,0.9040853);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(7,0.9040853);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(8,1.107274);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(9,0.7829609);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(11,0.7829609);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(13,0.7829609);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(14,0.7829609);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(16,0.4520427);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(17,0.4520427);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(19,0.6392849);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(21,0.6392849);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(22,0.7829609);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(23,0.6392849);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(24,0.4520427);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(31,0.4520427);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetEntries(77);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_7 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(2,15.93896);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(3,16.29316);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(4,6.729783);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(5,5.667186);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(6,6.375584);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(7,3.187792);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(8,2.125195);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(9,2.833593);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(10,4.250389);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(11,2.833593);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(12,2.479394);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(13,2.125195);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(14,2.125195);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(15,2.125195);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(16,1.416796);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(17,1.062597);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(18,0.7083982);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(19,0.7083982);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(20,0.7083982);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(21,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(22,2.125195);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(23,2.125195);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(24,1.416796);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(25,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(26,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(27,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(28,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(29,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(2,2.37604);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(3,2.402295);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(4,1.543918);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(5,1.416796);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(6,1.50274);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(7,1.062597);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(8,0.8676071);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(9,1.001826);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(10,1.226982);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(11,1.001826);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(12,0.9371228);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(13,0.8676071);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(14,0.8676071);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(15,0.8676071);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(16,0.7083982);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(17,0.6134909);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(18,0.5009132);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(19,0.5009132);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(20,0.5009132);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(21,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(22,0.8676071);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(23,0.8676071);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(24,0.7083982);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(25,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(26,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(27,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(28,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(29,0.3541991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetEntries(247);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_8 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(2,24.58846);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(3,33.25031);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(4,21.23549);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(5,9.220674);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(6,8.661845);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(7,7.544187);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(8,6.42653);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(9,6.705944);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(10,5.029458);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(11,5.867701);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(12,2.514729);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(13,1.397072);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(14,2.794144);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(15,2.235315);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(16,1.676486);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(17,2.235315);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(18,1.117657);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(19,0.8382431);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(20,1.397072);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(21,1.676486);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(22,1.397072);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(23,1.676486);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(24,0.2794144);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(25,0.8382431);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(26,0.2794144);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(27,0.2794144);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(28,0.5588287);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(2,2.621139);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(3,3.048051);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(4,2.435878);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(5,1.605113);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(6,1.555713);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(7,1.45188);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(8,1.340024);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(9,1.368845);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(10,1.185455);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(11,1.280437);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(12,0.8382431);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(13,0.6247895);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(14,0.8835858);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(15,0.7903031);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(16,0.6844226);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(17,0.7903031);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(18,0.5588287);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(19,0.4839599);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(20,0.6247895);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(21,0.6844226);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(22,0.6247895);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(23,0.6844226);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(24,0.2794144);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(25,0.4839599);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(26,0.2794144);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(27,0.2794144);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(28,0.3951516);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetEntries(543);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_9 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(1,0.04571557);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(2,18.40509);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(3,27.68992);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(4,15.077);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(5,8.368236);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(6,5.673303);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(7,4.25612);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(8,3.5681);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(9,3.0538);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(10,2.694933);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(11,2.322351);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(12,2.118917);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(13,1.98177);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(14,1.762335);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(15,1.545186);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(16,1.437755);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(17,1.211463);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(18,1.083459);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(19,1.003457);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(20,0.9440266);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(21,0.8914537);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(22,0.8937395);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(23,0.8251661);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(24,0.6834478);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(25,0.5508727);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(26,0.3451526);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(27,0.1828623);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(28,0.08914537);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(29,0.05028713);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(30,0.01600045);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(31,0.04114402);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(1,0.01022231);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(2,0.2051096);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(3,0.2515811);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(4,0.1856413);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(5,0.1383038);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(6,0.1138767);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(7,0.0986334);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(8,0.09030995);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(9,0.08354826);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(10,0.0784858);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(11,0.07285863);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(12,0.06959436);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(13,0.06730444);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(14,0.06346896);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(15,0.05943024);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(16,0.05732704);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(17,0.05262258);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(18,0.04976492);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(19,0.04789238);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(20,0.04645251);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(21,0.04514051);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(22,0.04519835);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(23,0.04342979);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(24,0.03952481);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(25,0.03548483);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(26,0.02808812);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(27,0.02044463);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(28,0.01427468);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(29,0.01072125);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(30,0.006047602);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(31,0.009697737);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetEntries(47604);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_10 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(1,0.01195158);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(2,5.608875);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(3,13.00332);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(4,10.89207);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(5,7.494236);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(6,5.046553);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(7,3.639255);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(8,2.868378);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(9,2.380754);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(10,1.987547);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(11,1.716844);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(12,1.4808);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(13,1.336784);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(14,1.208902);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(15,1.162888);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(16,1.045763);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(17,0.9280399);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(18,0.8360128);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(19,0.7917919);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(20,0.716497);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(21,0.6573367);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(22,0.6238723);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(23,0.5103323);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(24,0.3704989);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(25,0.2485928);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(26,0.1828591);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(27,0.1081618);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(28,0.04720873);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(29,0.0280862);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(30,0.01673221);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(31,0.02330557);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(1,0.002672454);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(2,0.05789426);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(3,0.08815047);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(4,0.08067757);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(5,0.06692083);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(6,0.05491551);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(7,0.04663413);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(8,0.04140148);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(9,0.03771854);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(10,0.03446326);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(11,0.03203045);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(12,0.02974718);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(13,0.02826365);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(14,0.02687776);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(15,0.02636129);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(16,0.02499852);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(17,0.02354946);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(18,0.02235137);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(19,0.0217522);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(20,0.02069211);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(21,0.01981945);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(22,0.01930836);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(23,0.01746321);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(24,0.01487959);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(25,0.01218826);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(26,0.01045336);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(27,0.008039601);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(28,0.005311397);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(29,0.004096794);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(30,0.00316209);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(31,0.003731879);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetEntries(112076);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_11 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(2,0.1445284);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(3,0.2023398);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(4,0.099856);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(5,0.06043916);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(6,0.03941684);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(7,0.05518358);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(8,0.03153347);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(9,0.01313895);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(10,0.005255579);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(11,0.02627789);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(12,0.02102232);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(13,0.01576674);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(14,0.01576674);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(15,0.01051116);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(16,0.005255579);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(17,0.01051116);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(18,0.01051116);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(19,0.01313895);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(20,0.01313895);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(21,0.005255579);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(22,0.01051116);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(23,0.005255579);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(25,0.002627789);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(27,0.002627789);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(30,0.002627789);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(2,0.01948821);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(3,0.02305876);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(4,0.01619878);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(5,0.01260244);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(6,0.01017738);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(7,0.01204204);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(8,0.00910293);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(9,0.005875916);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(10,0.003716255);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(11,0.0083098);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(12,0.007432511);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(13,0.006436743);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(14,0.006436743);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(15,0.005255579);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(16,0.003716255);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(17,0.005255579);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(18,0.005255579);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(19,0.005875916);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(20,0.005875916);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(21,0.003716255);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(22,0.005255579);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(23,0.003716255);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(25,0.002627789);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(27,0.002627789);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(30,0.002627789);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetEntries(313);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_12 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(2,0.04165229);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(3,0.07431489);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(4,0.05423788);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(5,0.03655813);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(6,0.02936637);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(7,0.02127563);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(8,0.01857872);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(9,0.01648112);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(10,0.01378421);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(11,0.009589018);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(12,0.005693479);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(13,0.009289361);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(14,0.003296225);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(15,0.005393822);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(16,0.006292793);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(17,0.005094166);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(18,0.005993136);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(19,0.003595882);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(20,0.005393822);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(21,0.002097598);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(22,0.002996568);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(23,0.002696911);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(24,0.002696911);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(25,0.001797941);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(26,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(27,0.0008989704);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(28,0.0005993136);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(29,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(30,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(2,0.003532902);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(3,0.004719);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(4,0.00403147);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(5,0.003309818);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(6,0.002966451);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(7,0.002524953);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(8,0.0023595);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(9,0.002222314);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(10,0.002032371);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(11,0.001695115);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(12,0.001306174);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(13,0.001668418);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(14,0.0009938492);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(15,0.001271336);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(16,0.0013732);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(17,0.001235517);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(18,0.001340106);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(19,0.001038042);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(20,0.001271336);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(21,0.0007928174);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(22,0.000947598);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(23,0.0008989704);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(24,0.0008989704);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(25,0.0007340063);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(26,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(27,0.0005190208);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(28,0.0004237787);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(29,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(30,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetEntries(1270);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1__414 = new TH1D("VbbHcc_algo_Z_dR_Bj1__414","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(1,461);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(2,163477);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(3,245646);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(4,229148);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(5,217002);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(6,189708);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(7,158806);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(8,130305);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(9,107841);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(10,89870);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(11,76436);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(12,67372);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(13,59494);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(14,53663);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(15,48913);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(16,45052);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(17,38888);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(18,34644);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(19,31806);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(20,28720);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(21,26415);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(22,23004);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(23,19338);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(24,15855);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(25,12158);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(26,8912);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(27,6212);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(28,4050);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(29,2707);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(30,1816);
   VbbHcc_algo_Z_dR_Bj1__414->SetBinContent(31,2967);
   VbbHcc_algo_Z_dR_Bj1__414->SetEntries(2140715);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1__414->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1__414->SetLineWidth(2);
   VbbHcc_algo_Z_dR_Bj1__414->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR_Bj1__414->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR_Bj1__414->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1__414->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__414->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__414->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__414->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__414->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__414->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__414->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__414->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1__414->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__414->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__414->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__414->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__414->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__414->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fx1301[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fy1301[30] = {
   427.1465,
   167423.6,
   243862.5,
   221221,
   210607.4,
   184125.3,
   154694.4,
   115229.3,
   107689.4,
   88052.83,
   67788.43,
   63040.97,
   60783.46,
   48864.79,
   41394.62,
   41015.58,
   32808.28,
   32969.17,
   31709.89,
   27274.69,
   26447.19,
   22902.11,
   21827.75,
   34053.37,
   11751.44,
   10901.82,
   6478.335,
   4257.427,
   2290.698,
   1007.185};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fex1301[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fey1301[30] = {
   95.15223,
   5072.73,
   5984.235,
   6302.144,
   6100.487,
   6169.981,
   5548.526,
   4648.763,
   4774.951,
   3869.75,
   3149.58,
   3174.934,
   3525.66,
   2689.659,
   2350.825,
   2923.95,
   2052.843,
   2668.584,
   2263.013,
   2026.255,
   2544.477,
   1909.884,
   2825.691,
   19900.92,
   1054.266,
   1220.897,
   866.6673,
   676.4377,
   407.338,
   124.6678};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_Bj1_fx1301,Graph_from_VbbHcc_algo_Z_dR_Bj1_fy1301,Graph_from_VbbHcc_algo_Z_dR_Bj1_fex1301,Graph_from_VbbHcc_algo_Z_dR_Bj1_fey1301);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->SetMinimum(298.7948);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->SetMaximum(274798.3);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR_Bj1","MC unc. (stat.)","fl");

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
   Z_dR_Bj1_algo_18->cd();
  
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
   
   TH1D *data_mc_ratio__415 = new TH1D("data_mc_ratio__415","",30,0,6);
   data_mc_ratio__415->SetBinContent(1,1.079255);
   data_mc_ratio__415->SetBinContent(2,0.9764273);
   data_mc_ratio__415->SetBinContent(3,1.007313);
   data_mc_ratio__415->SetBinContent(4,1.035833);
   data_mc_ratio__415->SetBinContent(5,1.030363);
   data_mc_ratio__415->SetBinContent(6,1.03032);
   data_mc_ratio__415->SetBinContent(7,1.026579);
   data_mc_ratio__415->SetBinContent(8,1.130832);
   data_mc_ratio__415->SetBinContent(9,1.001408);
   data_mc_ratio__415->SetBinContent(10,1.020637);
   data_mc_ratio__415->SetBinContent(11,1.127567);
   data_mc_ratio__415->SetBinContent(12,1.068702);
   data_mc_ratio__415->SetBinContent(13,0.978786);
   data_mc_ratio__415->SetBinContent(14,1.098194);
   data_mc_ratio__415->SetBinContent(15,1.181627);
   data_mc_ratio__415->SetBinContent(16,1.098412);
   data_mc_ratio__415->SetBinContent(17,1.185311);
   data_mc_ratio__415->SetBinContent(18,1.0508);
   data_mc_ratio__415->SetBinContent(19,1.003031);
   data_mc_ratio__415->SetBinContent(20,1.052991);
   data_mc_ratio__415->SetBinContent(21,0.9987828);
   data_mc_ratio__415->SetBinContent(22,1.004449);
   data_mc_ratio__415->SetBinContent(23,0.8859365);
   data_mc_ratio__415->SetBinContent(24,0.4655926);
   data_mc_ratio__415->SetBinContent(25,1.034597);
   data_mc_ratio__415->SetBinContent(26,0.817478);
   data_mc_ratio__415->SetBinContent(27,0.9588884);
   data_mc_ratio__415->SetBinContent(28,0.9512788);
   data_mc_ratio__415->SetBinContent(29,1.181736);
   data_mc_ratio__415->SetBinContent(30,1.803044);
   data_mc_ratio__415->SetBinContent(31,0.8580951);
   data_mc_ratio__415->SetBinError(1,0.05026592);
   data_mc_ratio__415->SetBinError(2,0.002414969);
   data_mc_ratio__415->SetBinError(3,0.002032403);
   data_mc_ratio__415->SetBinError(4,0.002163873);
   data_mc_ratio__415->SetBinError(5,0.002211864);
   data_mc_ratio__415->SetBinError(6,0.002365535);
   data_mc_ratio__415->SetBinError(7,0.002576077);
   data_mc_ratio__415->SetBinError(8,0.003132691);
   data_mc_ratio__415->SetBinError(9,0.003049434);
   data_mc_ratio__415->SetBinError(10,0.003404584);
   data_mc_ratio__415->SetBinError(11,0.004078434);
   data_mc_ratio__415->SetBinError(12,0.004117341);
   data_mc_ratio__415->SetBinError(13,0.004012834);
   data_mc_ratio__415->SetBinError(14,0.004740689);
   data_mc_ratio__415->SetBinError(15,0.005342792);
   data_mc_ratio__415->SetBinError(16,0.005174974);
   data_mc_ratio__415->SetBinError(17,0.00601069);
   data_mc_ratio__415->SetBinError(18,0.005645547);
   data_mc_ratio__415->SetBinError(19,0.005624187);
   data_mc_ratio__415->SetBinError(20,0.006213444);
   data_mc_ratio__415->SetBinError(21,0.006145337);
   data_mc_ratio__415->SetBinError(22,0.006622564);
   data_mc_ratio__415->SetBinError(23,0.006370842);
   data_mc_ratio__415->SetBinError(24,0.003697626);
   data_mc_ratio__415->SetBinError(25,0.009382964);
   data_mc_ratio__415->SetBinError(26,0.008659414);
   data_mc_ratio__415->SetBinError(27,0.01216613);
   data_mc_ratio__415->SetBinError(28,0.0149479);
   data_mc_ratio__415->SetBinError(29,0.02271309);
   data_mc_ratio__415->SetBinError(30,0.04231053);
   data_mc_ratio__415->SetBinError(31,0.2101398);
   data_mc_ratio__415->SetMinimum(0.4);
   data_mc_ratio__415->SetMaximum(1.6);
   data_mc_ratio__415->SetEntries(2601);
   data_mc_ratio__415->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__415->SetLineColor(ci);
   data_mc_ratio__415->SetLineWidth(2);
   data_mc_ratio__415->SetMarkerStyle(20);
   data_mc_ratio__415->SetMarkerSize(1.2);
   data_mc_ratio__415->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__415->GetXaxis()->SetRange(1,30);
   data_mc_ratio__415->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__415->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__415->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__415->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__415->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__415->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__415->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__415->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__415->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__415->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__415->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__415->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__415->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__415->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__415->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__415->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__415->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1302[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1302[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1302[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1302[30] = {
   0.2227625,
   0.03029877,
   0.02453938,
   0.02848801,
   0.02896616,
   0.03350969,
   0.03586766,
   0.04034357,
   0.04434005,
   0.04394805,
   0.04646192,
   0.05036303,
   0.05800361,
   0.05504288,
   0.0567906,
   0.07128876,
   0.06257089,
   0.0809418,
   0.07136615,
   0.07429067,
   0.09620972,
   0.08339337,
   0.1294541,
   0.5844038,
   0.08971375,
   0.1119902,
   0.1337793,
   0.1588842,
   0.1778227,
   0.1237784};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1302,Graph_from_mc_statistical_error_fy1302,Graph_from_mc_statistical_error_fex1302,Graph_from_mc_statistical_error_fey1302);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1302 = new TH1F("Graph_Graph_from_mc_statistical_error1302","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1302->SetMinimum(0.2987154);
   Graph_Graph_from_mc_statistical_error1302->SetMaximum(1.701285);
   Graph_Graph_from_mc_statistical_error1302->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1302->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1302->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1302->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1302->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1302->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1302->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1302->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1302->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1302->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1302->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1302->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1302->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1302->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1302->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1302->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1302);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_algo_18->cd();
   Z_dR_Bj1_algo_18->Modified();
   Z_dR_Bj1_algo_18->cd();
   Z_dR_Bj1_algo_18->SetSelected(Z_dR_Bj1_algo_18);
}
