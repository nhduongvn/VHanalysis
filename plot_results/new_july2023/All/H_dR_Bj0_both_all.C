void H_dR_Bj0_both_all()
{
//=========Macro generated from canvas: H_dR_Bj0_both_all/H_dR_Bj0_both_all
//=========  (Fri Jul 14 13:38:52 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_both_all = new TCanvas("H_dR_Bj0_both_all", "H_dR_Bj0_both_all",0,0,600,600);
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
   topPad->Range(-0.9193524,-2363.992,6.314516,2361928);
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
   st->SetMaximum(2024285);
   
   TH1F *st_stack_236 = new TH1F("st_stack_236","",30,0,6);
   st_stack_236->SetMinimum(0.3);
   st_stack_236->SetMaximum(2125499);
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
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(1,256657.6);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(2,772208);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(3,730679.2);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(4,580320.9);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(5,500294.2);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(6,404042.3);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(7,357363.9);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(8,322164.9);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(9,261010.4);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(10,251996);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(11,212882.2);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(12,197464.4);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(13,182944.8);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(14,182853.1);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(15,165267.8);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(16,155256.7);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(17,118291.6);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(18,88271.71);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(19,72537.81);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(20,67423.55);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(21,37391.9);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(22,30497.95);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(23,19399.81);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(24,12412.17);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(25,10811.22);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(26,6860.465);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(27,3469.974);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(28,2972.527);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(29,1695.701);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(30,454.1572);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinContent(31,1106.14);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(1,4313.673);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(2,11378.18);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(3,18376.2);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(4,18330.92);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(5,27162.41);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(6,9525.02);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(7,22261.06);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(8,16896.17);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(9,7792.139);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(10,8324.513);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(11,6988.415);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(12,6032.032);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(13,6341.481);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(14,5917.07);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(15,5287.886);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(16,5121.169);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(17,4967.197);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(18,4224.071);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(19,3889.424);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(20,20684.31);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(21,2471.811);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(22,3163.678);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(23,2388.397);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(24,1227.052);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(25,1810.246);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(26,1031.01);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(27,761.5518);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(28,748.636);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(29,570.2037);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(30,272.7434);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetBinError(31,460.3861);
   VbbHcc_both_H_dR_Bj0_all_stack_1->SetEntries(513857);

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
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(1,2453.591);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(2,8467.023);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(3,9147.123);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(4,7395.3);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(5,5748.098);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(6,4625.483);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(7,3982.912);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(8,3476.929);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(9,3137.06);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(10,2847.62);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(11,2613.477);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(12,2409.956);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(13,2317.918);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(14,2223.023);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(15,2122.064);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(16,1979.814);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(17,1383.508);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(18,1032.563);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(19,778.069);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(20,586.691);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(21,421.0259);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(22,303.5567);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(23,207.6079);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(24,136.4519);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(25,90.88376);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(26,57.66663);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(27,33.40611);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(28,17.8859);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(29,9.035055);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(30,5.586823);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinContent(31,9.952984);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(1,20.98368);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(2,38.08932);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(3,38.85364);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(4,34.58162);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(5,30.43529);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(6,27.19685);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(7,25.29542);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(8,23.54087);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(9,22.19046);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(10,21.02104);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(11,19.98156);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(12,18.97919);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(13,18.56899);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(14,18.20015);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(15,17.62246);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(16,16.88067);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(17,13.45586);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(18,11.23958);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(19,9.51139);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(20,8.170462);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(21,6.79975);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(22,5.622431);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(23,4.517209);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(24,3.628083);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(25,2.99307);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(26,2.38199);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(27,1.82577);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(28,1.346184);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(29,1.015065);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(30,0.7581313);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetBinError(31,1.062779);
   VbbHcc_both_H_dR_Bj0_all_stack_2->SetEntries(853526);

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
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(1,28818.57);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(2,120625.5);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(3,149224.3);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(4,131715.1);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(5,106199.6);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(6,86784.3);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(7,73810.11);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(8,63880.38);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(9,56295.2);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(10,50203.59);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(11,45218.12);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(12,41309.67);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(13,38031.62);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(14,35463.58);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(15,33133.74);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(16,30323.41);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(17,20732.93);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(18,14797.17);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(19,10586.99);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(20,7604.672);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(21,5368.827);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(22,3691.913);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(23,2465.74);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(24,1626.523);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(25,1058.834);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(26,653.195);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(27,387.3011);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(28,219.2195);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(29,127.4831);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(30,79.70641);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinContent(31,139.22);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(1,42.52438);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(2,87.09966);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(3,97.10832);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(4,91.41147);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(5,82.1878);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(6,74.35624);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(7,68.58613);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(8,63.80138);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(9,59.8895);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(10,56.55446);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(11,53.65472);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(12,51.27846);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(13,49.18799);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(14,47.48827);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(15,45.8948);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(16,43.88135);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(17,36.24945);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(18,30.58638);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(19,25.83352);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(20,21.87696);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(21,18.35451);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(22,15.20419);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(23,12.40654);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(24,10.06723);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(25,8.123752);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(26,6.380912);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(27,4.913594);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(28,3.705091);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(29,2.831585);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(30,2.23875);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetBinError(31,2.965578);
   VbbHcc_both_H_dR_Bj0_all_stack_3->SetEntries(1.887335e+07);

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
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(1,2057.516);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(2,5897.186);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(3,5916.856);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(4,4834.6);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(5,4021.401);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(6,3282.953);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(7,2733.029);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(8,2382.978);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(9,2137.96);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(10,1943.37);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(11,1797.96);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(12,1678.225);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(13,1590.149);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(14,1519.605);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(15,1466.416);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(16,1319.481);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(17,900.3884);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(18,639.9349);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(19,458.925);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(20,355.2059);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(21,251.669);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(22,175.1734);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(23,131.4271);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(24,81.32014);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(25,54.91511);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(26,37.14602);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(27,16.29821);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(28,11.10095);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(29,4.069525);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(30,2.270408);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinContent(31,2.863305);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(1,20.67992);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(2,48.0589);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(3,53.57121);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(4,51.78123);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(5,49.08582);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(6,43.88722);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(7,37.69798);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(8,35.02414);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(9,33.21894);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(10,31.49131);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(11,29.56795);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(12,27.73796);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(13,25.87394);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(14,25.78962);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(15,24.95477);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(16,21.5688);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(17,18.99918);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(18,15.76111);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(19,11.86126);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(20,12.99519);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(21,10.39571);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(22,9.646861);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(23,9.100951);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(24,5.287828);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(25,4.940415);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(26,5.250302);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(27,1.910586);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(28,1.538979);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(29,0.8120406);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(30,0.7356646);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetBinError(31,0.7431237);
   VbbHcc_both_H_dR_Bj0_all_stack_4->SetEntries(365766);

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
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(1,1328.889);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(2,3544.149);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(3,3646.549);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(4,2765.357);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(5,2059.17);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(6,1755.017);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(7,1421.416);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(8,1351.033);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(9,1110.399);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(10,1011.91);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(11,928.2936);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(12,884.2092);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(13,777.4991);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(14,803.6284);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(15,691.3111);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(16,686.5741);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(17,454.4926);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(18,351.601);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(19,229.1528);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(20,169.052);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(21,102.9621);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(22,90.48612);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(23,49.20539);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(24,39.4465);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(25,38.72283);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(26,13.33711);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(27,13.66618);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(28,3.406872);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(29,1.148291);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(30,3.188376);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinContent(31,0.9875012);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(1,22.20469);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(2,57.83363);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(3,65.42206);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(4,67.63352);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(5,55.82049);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(6,50.0181);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(7,44.21778);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(8,47.83524);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(9,39.75335);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(10,36.43409);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(11,34.81123);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(12,34.22865);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(13,27.89366);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(14,35.44758);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(15,23.75823);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(16,27.48146);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(17,24.94102);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(18,22.37135);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(19,14.33734);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(20,14.92417);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(21,6.338152);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(22,10.7781);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(23,3.675018);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(24,4.402174);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(25,9.746697);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(26,2.371068);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(27,6.447008);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(28,1.152478);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(29,0.2994363);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(30,1.301998);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetBinError(31,0.4004452);
   VbbHcc_both_H_dR_Bj0_all_stack_5->SetEntries(204720);

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
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(1,7.540741);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(2,20.84603);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(3,22.00109);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(4,12.70575);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(5,11.69465);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(6,9.458466);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(7,9.492034);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(8,10.93576);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(9,6.901578);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(10,6.990143);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(11,4.832693);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(12,5.726205);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(13,4.718511);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(14,2.931106);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(15,4.805945);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(16,3.306074);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(17,2.189122);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(18,1.295228);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(19,1.40941);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(20,0.08591938);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(21,0.08591938);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(22,0.2577581);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(23,0.2875345);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(24,0.4608871);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(25,0.2016151);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinContent(27,0.08591938);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(1,1.201737);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(2,1.886736);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(3,1.964099);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(4,1.448682);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(5,1.350703);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(6,1.264309);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(7,1.301486);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(8,1.440865);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(9,1.090774);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(10,1.126486);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(11,0.9338493);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(12,1.038429);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(13,0.9350541);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(14,0.6801258);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(15,0.9577194);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(16,0.7439772);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(17,0.6764128);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(18,0.5020352);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(19,0.4997877);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(20,0.08591938);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(21,0.08591938);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(22,0.1488167);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(23,0.2191593);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(24,0.3135494);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(25,0.2016151);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetBinError(27,0.08591938);
   VbbHcc_both_H_dR_Bj0_all_stack_6->SetEntries(1131);

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
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(1,15.77525);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(2,37.51478);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(3,37.03838);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(4,23.97722);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(5,16.55029);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(6,15.41176);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(7,15.3102);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(8,13.54602);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(9,9.545651);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(10,9.672823);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(11,8.208532);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(12,8.608732);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(13,6.565212);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(14,5.271117);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(15,7.544642);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(16,5.687594);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(17,4.094741);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(18,1.862851);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(19,1.913319);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(20,1.08314);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(21,0.5097128);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(22,0.4459987);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(23,0.2653292);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(24,0.5439047);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(25,0.2016151);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(26,0.1274282);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(27,0.0637141);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinContent(30,0.0637141);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(1,1.383982);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(2,2.0991);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(3,2.146583);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(4,1.636907);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(5,1.411592);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(6,1.365731);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(7,1.406667);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(8,1.46787);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(9,1.138109);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(10,1.170173);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(11,1.021412);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(12,1.099351);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(13,0.9737074);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(14,0.7598166);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(15,1.02364);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(16,0.8179175);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(17,0.7533273);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(18,0.5260778);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(19,0.5200449);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(20,0.2626999);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(21,0.1802107);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(22,0.1685717);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(23,0.211443);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(24,0.3158906);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(25,0.2016151);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(26,0.09010534);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(27,0.0637141);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetBinError(30,0.0637141);
   VbbHcc_both_H_dR_Bj0_all_stack_7->SetEntries(2911);

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
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(1,20.19036);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(2,55.47379);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(3,54.15445);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(4,36.87873);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(5,25.67585);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(6,21.08426);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(7,21.49174);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(8,15.53228);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(9,14.08713);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(10,13.34575);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(11,11.37656);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(12,10.19075);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(13,10.03052);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(14,12.31413);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(15,8.82556);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(16,9.449366);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(17,6.534725);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(18,4.582506);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(19,2.80043);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(20,1.515186);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(21,0.7175348);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(22,0.385473);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(23,0.7175348);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(24,0.5796354);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(25,0.1867731);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(30,0.1793837);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinContent(31,0.1793837);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(1,1.964683);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(2,3.240861);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(3,3.202204);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(4,2.638635);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(5,2.205898);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(6,1.995788);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(7,2.007177);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(8,1.718375);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(9,1.652068);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(10,1.609611);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(11,1.458607);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(12,1.38922);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(13,1.366809);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(14,1.542596);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(15,1.303899);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(16,1.338452);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(17,1.105978);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(18,0.9372625);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(19,0.724143);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(20,0.5369459);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(21,0.3587674);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(22,0.2732239);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(23,0.3587674);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(24,0.3350241);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(25,0.1867731);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(30,0.1793837);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetBinError(31,0.1793837);
   VbbHcc_both_H_dR_Bj0_all_stack_8->SetEntries(1897);

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
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(1,11.91841);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(2,42.32175);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(3,39.64151);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(4,27.19413);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(5,18.8257);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(6,14.58685);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(7,12.52936);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(8,10.9904);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(9,9.825034);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(10,8.868692);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(11,8.177872);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(12,7.65194);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(13,7.156067);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(14,6.752013);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(15,6.389688);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(16,5.914375);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(17,3.583459);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(18,2.370234);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(19,1.493621);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(20,1.06562);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(21,0.6859856);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(22,0.4395794);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(23,0.3039799);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(24,0.2189812);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(25,0.1283877);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(26,0.07830093);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(27,0.04180887);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(28,0.03168477);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(29,0.01103356);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(30,0.007330332);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinContent(31,0.02064967);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(1,0.1451522);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(2,0.2731316);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(3,0.2631504);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(4,0.2169233);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(5,0.1806779);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(6,0.1588183);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(7,0.1475483);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(8,0.1384767);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(9,0.1311156);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(10,0.1244305);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(11,0.1199967);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(12,0.1163912);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(13,0.1122395);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(14,0.1088033);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(15,0.1060106);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(16,0.1026023);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(17,0.07941594);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(18,0.06449511);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(19,0.05134932);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(20,0.04314177);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(21,0.03453457);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(22,0.02755303);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(23,0.02329124);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(24,0.01992776);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(25,0.01479153);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(26,0.01170714);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(27,0.008552621);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(28,0.007263214);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(29,0.004248862);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(30,0.003775578);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetBinError(31,0.006126385);
   VbbHcc_both_H_dR_Bj0_all_stack_9->SetEntries(149443);

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
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(1,7.976093);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(2,28.52887);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(3,29.19822);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(4,21.17285);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(5,14.71478);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(6,11.23798);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(7,9.600878);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(8,8.47708);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(9,7.768033);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(10,6.82355);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(11,6.28013);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(12,5.998153);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(13,5.67785);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(14,5.416406);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(15,5.097472);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(16,4.455497);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(17,2.862195);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(18,2.071019);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(19,1.372923);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(20,0.9759661);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(21,0.6447125);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(22,0.4859298);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(23,0.3682116);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(24,0.2149042);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(25,0.1286687);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(26,0.1053989);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(27,0.04517094);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(28,0.02326988);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(29,0.01779461);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(30,0.01368816);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinContent(31,0.01368816);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(1,0.06180289);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(2,0.1168843);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(3,0.1182475);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(4,0.100694);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(5,0.08394417);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(6,0.07335976);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(7,0.06780616);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(8,0.06371429);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(9,0.06099149);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(10,0.05716351);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(11,0.05484007);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(12,0.05359478);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(13,0.05214416);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(14,0.05092949);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(15,0.0494073);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(16,0.04619147);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(17,0.03702229);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(18,0.0314924);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(19,0.02564111);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(20,0.02161877);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(21,0.01757101);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(22,0.01525459);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(23,0.01327891);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(24,0.01014463);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(25,0.007849649);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(26,0.00710447);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(27,0.004650967);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(28,0.003338188);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(29,0.002919161);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(30,0.002560273);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetBinError(31,0.002560273);
   VbbHcc_both_H_dR_Bj0_all_stack_10->SetEntries(411525);

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
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(1,0.1899644);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(2,1.082556);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(3,1.172021);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(4,0.9786653);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(5,0.6551254);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(6,0.4006009);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(7,0.3101022);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(8,0.2399647);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(9,0.2137152);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(10,0.1886409);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(11,0.1482642);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(12,0.1556592);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(13,0.1108926);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(14,0.1340491);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(15,0.1253982);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(16,0.1125403);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(17,0.0508779);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(18,0.03745959);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(19,0.03572386);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(20,0.02751884);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(21,0.004315259);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(22,0.00659102);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(23,0.004315259);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(24,0.003160502);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(25,0.009562293);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinContent(26,0.002735007);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(1,0.02069372);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(2,0.04908468);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(3,0.05112582);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(4,0.04746526);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(5,0.03835929);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(6,0.0302899);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(7,0.02637254);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(8,0.02344928);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(9,0.02240679);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(10,0.0207952);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(11,0.01787935);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(12,0.01896674);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(13,0.01589586);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(14,0.01746605);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(15,0.01669674);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(16,0.01627113);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(17,0.01065774);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(18,0.009104593);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(19,0.0093835);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(20,0.008099955);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(21,0.003158712);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(22,0.003893142);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(23,0.003158712);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(24,0.002234813);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(25,0.00479766);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetBinError(26,0.002735007);
   VbbHcc_both_H_dR_Bj0_all_stack_11->SetEntries(2972);

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
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(1,0.08267161);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(2,0.4369406);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(3,0.5478024);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(4,0.4738489);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(5,0.3355731);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(6,0.2376261);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(7,0.1696472);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(8,0.1230312);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(9,0.1013846);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(10,0.08402511);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(11,0.08000084);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(12,0.07217241);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(13,0.05724527);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(14,0.05792569);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(15,0.0491864);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(16,0.04027792);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(17,0.02966019);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(18,0.02035731);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(19,0.01289938);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(20,0.01332553);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(21,0.007747322);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(22,0.004944786);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(23,0.004288536);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(24,0.003043238);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(25,0.003042902);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(26,0.001072134);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(27,0.0006569226);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinContent(30,0.0003572658);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(1,0.004974317);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(2,0.01129928);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(3,0.01266261);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(4,0.0118202);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(5,0.009964884);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(6,0.008384662);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(7,0.007094711);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(8,0.006049046);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(9,0.00546177);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(10,0.004960098);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(11,0.004845511);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(12,0.004625292);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(13,0.004118428);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(14,0.004138671);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(15,0.00383724);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(16,0.003400358);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(17,0.002949784);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(18,0.002457036);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(19,0.001952182);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(20,0.001989058);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(21,0.001448482);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(22,0.001261163);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(23,0.001102059);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(24,0.0009362955);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(25,0.000977718);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(26,0.0005510293);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(27,0.0004662972);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetBinError(30,0.0003572658);
   VbbHcc_both_H_dR_Bj0_all_stack_12->SetEntries(10870);

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
   
   TH1D *VbbHcc_both_H_dR_Bj0_all__471 = new TH1D("VbbHcc_both_H_dR_Bj0_all__471","",30,0,6);
   VbbHcc_both_H_dR_Bj0_all__471->SetBinContent(1,226304);
   VbbHcc_both_H_dR_Bj0_all__471->SetBinContent(2,660228);
   VbbHcc_both_H_dR_Bj0_all__471->SetBinContent(3,645071);
   VbbHcc_both_H_dR_Bj0_all__471->SetBinContent(4,517860);
   VbbHcc_both_H_dR_Bj0_all__471->SetBinContent(5,427588);
   VbbHcc_both_H_dR_Bj0_all__471->SetBinContent(6,360396);
   VbbHcc_both_H_dR_Bj0_all__471->SetBinContent(7,308709);
   VbbHcc_both_H_dR_Bj0_all__471->SetBinContent(8,269975);
   VbbHcc_both_H_dR_Bj0_all__471->SetBinContent(9,240338);
   VbbHcc_both_H_dR_Bj0_all__471->SetBinContent(10,217708);
   VbbHcc_both_H_dR_Bj0_all__471->SetBinContent(11,199478);
   VbbHcc_both_H_dR_Bj0_all__471->SetBinContent(12,185619);
   VbbHcc_both_H_dR_Bj0_all__471->SetBinContent(13,174959);
   VbbHcc_both_H_dR_Bj0_all__471->SetBinContent(14,167068);
   VbbHcc_both_H_dR_Bj0_all__471->SetBinContent(15,160355);
   VbbHcc_both_H_dR_Bj0_all__471->SetBinContent(16,149025);
   VbbHcc_both_H_dR_Bj0_all__471->SetBinContent(17,106187);
   VbbHcc_both_H_dR_Bj0_all__471->SetBinContent(18,79544);
   VbbHcc_both_H_dR_Bj0_all__471->SetBinContent(19,61041);
   VbbHcc_both_H_dR_Bj0_all__471->SetBinContent(20,46428);
   VbbHcc_both_H_dR_Bj0_all__471->SetBinContent(21,35012);
   VbbHcc_both_H_dR_Bj0_all__471->SetBinContent(22,25788);
   VbbHcc_both_H_dR_Bj0_all__471->SetBinContent(23,18172);
   VbbHcc_both_H_dR_Bj0_all__471->SetBinContent(24,12703);
   VbbHcc_both_H_dR_Bj0_all__471->SetBinContent(25,8367);
   VbbHcc_both_H_dR_Bj0_all__471->SetBinContent(26,5451);
   VbbHcc_both_H_dR_Bj0_all__471->SetBinContent(27,3094);
   VbbHcc_both_H_dR_Bj0_all__471->SetBinContent(28,1686);
   VbbHcc_both_H_dR_Bj0_all__471->SetBinContent(29,827);
   VbbHcc_both_H_dR_Bj0_all__471->SetBinContent(30,433);
   VbbHcc_both_H_dR_Bj0_all__471->SetBinContent(31,778);
   VbbHcc_both_H_dR_Bj0_all__471->SetEntries(5316192);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_all__471->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_all__471->SetLineWidth(2);
   VbbHcc_both_H_dR_Bj0_all__471->SetMarkerStyle(20);
   VbbHcc_both_H_dR_Bj0_all__471->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_Bj0_all__471->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_all__471->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all__471->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all__471->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all__471->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all__471->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all__471->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all__471->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all__471->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_all__471->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all__471->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_all__471->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_all__471->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_all__471->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_all__471->Draw("same E");
   
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
   291379.8,
   910928.1,
   898797.8,
   727154.6,
   618410.9,
   500562.5,
   439380.3,
   393316,
   323739.4,
   308048.4,
   263479.2,
   243784.9,
   225696.3,
   222895.8,
   202714.2,
   189595,
   141782.3,
   105105.2,
   84599.98,
   76143.94,
   43539.04,
   34761.11,
   22255.74,
   14297.93,
   12055.43,
   7622.124,
   3920.882,
   3224.195,
   1837.466,
   545.1737};
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
   4314.042,
   11378.83,
   18376.7,
   18331.38,
   27162.65,
   9525.582,
   22261.25,
   16896.41,
   7792.573,
   8324.872,
   6988.799,
   6032.441,
   6341.813,
   5917.452,
   5288.228,
   5121.504,
   4967.446,
   4224.286,
   3889.566,
   20684.33,
   2471.918,
   3163.753,
   2388.454,
   1227.118,
   1810.3,
   1031.048,
   761.5995,
   748.6488,
   570.2123,
   272.7578};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_Bj0_all_fx1471,Graph_from_VbbHcc_both_H_dR_Bj0_all_fy1471,Graph_from_VbbHcc_both_H_dR_Bj0_all_fex1471,Graph_from_VbbHcc_both_H_dR_Bj0_all_fey1471);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_Bj0_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->SetMinimum(245.1743);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj0_all1471->SetMaximum(1014510);
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
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
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
   
   TH1D *data_mc_ratio__472 = new TH1D("data_mc_ratio__472","",30,0,6);
   data_mc_ratio__472->SetBinContent(1,0.7766633);
   data_mc_ratio__472->SetBinContent(2,0.7247861);
   data_mc_ratio__472->SetBinContent(3,0.7177042);
   data_mc_ratio__472->SetBinContent(4,0.7121732);
   data_mc_ratio__472->SetBinContent(5,0.6914302);
   data_mc_ratio__472->SetBinContent(6,0.719982);
   data_mc_ratio__472->SetBinContent(7,0.7026009);
   data_mc_ratio__472->SetBinContent(8,0.6864073);
   data_mc_ratio__472->SetBinContent(9,0.742381);
   data_mc_ratio__472->SetBinContent(10,0.706733);
   data_mc_ratio__472->SetBinContent(11,0.7570921);
   data_mc_ratio__472->SetBinContent(12,0.761405);
   data_mc_ratio__472->SetBinContent(13,0.7751966);
   data_mc_ratio__472->SetBinContent(14,0.7495341);
   data_mc_ratio__472->SetBinContent(15,0.7910398);
   data_mc_ratio__472->SetBinContent(16,0.7860177);
   data_mc_ratio__472->SetBinContent(17,0.7489439);
   data_mc_ratio__472->SetBinContent(18,0.7568035);
   data_mc_ratio__472->SetBinContent(19,0.721525);
   data_mc_ratio__472->SetBinContent(20,0.6097399);
   data_mc_ratio__472->SetBinContent(21,0.8041518);
   data_mc_ratio__472->SetBinContent(22,0.7418636);
   data_mc_ratio__472->SetBinContent(23,0.8165085);
   data_mc_ratio__472->SetBinContent(24,0.8884502);
   data_mc_ratio__472->SetBinContent(25,0.694044);
   data_mc_ratio__472->SetBinContent(26,0.7151549);
   data_mc_ratio__472->SetBinContent(27,0.7891081);
   data_mc_ratio__472->SetBinContent(28,0.5229211);
   data_mc_ratio__472->SetBinContent(29,0.4500764);
   data_mc_ratio__472->SetBinContent(30,0.7942423);
   data_mc_ratio__472->SetBinContent(31,0.6177653);
   data_mc_ratio__472->SetBinError(1,0.001632626);
   data_mc_ratio__472->SetBinError(2,0.0008919959);
   data_mc_ratio__472->SetBinError(3,0.0008935971);
   data_mc_ratio__472->SetBinError(4,0.000989645);
   data_mc_ratio__472->SetBinError(5,0.001057391);
   data_mc_ratio__472->SetBinError(6,0.001199311);
   data_mc_ratio__472->SetBinError(7,0.001264544);
   data_mc_ratio__472->SetBinError(8,0.001321053);
   data_mc_ratio__472->SetBinError(9,0.001514313);
   data_mc_ratio__472->SetBinError(10,0.001514671);
   data_mc_ratio__472->SetBinError(11,0.001695123);
   data_mc_ratio__472->SetBinError(12,0.001767276);
   data_mc_ratio__472->SetBinError(13,0.001853291);
   data_mc_ratio__472->SetBinError(14,0.00183377);
   data_mc_ratio__472->SetBinError(15,0.001975409);
   data_mc_ratio__472->SetBinError(16,0.002036117);
   data_mc_ratio__472->SetBinError(17,0.002298337);
   data_mc_ratio__472->SetBinError(18,0.002683363);
   data_mc_ratio__472->SetBinError(19,0.002920388);
   data_mc_ratio__472->SetBinError(20,0.002829793);
   data_mc_ratio__472->SetBinError(21,0.004297635);
   data_mc_ratio__472->SetBinError(22,0.004619715);
   data_mc_ratio__472->SetBinError(23,0.006057025);
   data_mc_ratio__472->SetBinError(24,0.00788279);
   data_mc_ratio__472->SetBinError(25,0.007587559);
   data_mc_ratio__472->SetBinError(26,0.009686392);
   data_mc_ratio__472->SetBinError(27,0.01418654);
   data_mc_ratio__472->SetBinError(28,0.01273525);
   data_mc_ratio__472->SetBinError(29,0.01565069);
   data_mc_ratio__472->SetBinError(30,0.03816885);
   data_mc_ratio__472->SetBinError(31,0.2269233);
   data_mc_ratio__472->SetMinimum(0.4);
   data_mc_ratio__472->SetMaximum(1.6);
   data_mc_ratio__472->SetEntries(1614.902);
   data_mc_ratio__472->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__472->SetLineColor(ci);
   data_mc_ratio__472->SetLineWidth(2);
   data_mc_ratio__472->SetMarkerStyle(20);
   data_mc_ratio__472->SetMarkerSize(1.2);
   data_mc_ratio__472->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__472->GetXaxis()->SetRange(1,30);
   data_mc_ratio__472->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__472->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__472->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__472->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__472->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__472->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__472->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__472->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__472->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__472->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__472->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__472->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__472->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__472->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__472->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__472->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__472->Draw("E1");
   
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
   0.01480556,
   0.01249146,
   0.02044586,
   0.02520974,
   0.0439233,
   0.01902976,
   0.05066511,
   0.04295886,
   0.02407051,
   0.02702455,
   0.02652505,
   0.02474494,
   0.02809888,
   0.02654806,
   0.02608711,
   0.02701287,
   0.03503573,
   0.04019102,
   0.04597597,
   0.2716478,
   0.05677475,
   0.09101414,
   0.1073186,
   0.08582485,
   0.1501646,
   0.1352705,
   0.1942419,
   0.2321971,
   0.3103254,
   0.5003137};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1472,Graph_from_mc_statistical_error_fy1472,Graph_from_mc_statistical_error_fex1472,Graph_from_mc_statistical_error_fey1472);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1472 = new TH1F("Graph_Graph_from_mc_statistical_error1472","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1472->SetMinimum(0.3996236);
   Graph_Graph_from_mc_statistical_error1472->SetMaximum(1.600376);
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
