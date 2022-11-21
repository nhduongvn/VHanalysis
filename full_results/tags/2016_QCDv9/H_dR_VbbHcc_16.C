void H_dR_VbbHcc_16()
{
//=========Macro generated from canvas: H_dR_VbbHcc_16/H_dR_VbbHcc_16
//=========  (Mon Nov 21 13:02:20 2022) by ROOT version 6.14/09
   TCanvas *H_dR_VbbHcc_16 = new TCanvas("H_dR_VbbHcc_16", "H_dR_VbbHcc_16",0,0,600,600);
   H_dR_VbbHcc_16->SetHighLightColor(2);
   H_dR_VbbHcc_16->Range(0,0,1,1);
   H_dR_VbbHcc_16->SetFillColor(0);
   H_dR_VbbHcc_16->SetFillStyle(4000);
   H_dR_VbbHcc_16->SetBorderMode(0);
   H_dR_VbbHcc_16->SetBorderSize(2);
   H_dR_VbbHcc_16->SetFrameFillStyle(1000);
   H_dR_VbbHcc_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-3571.195,10.52419,3567634);
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
   st->SetMaximum(3057632);
   
   TH1F *st_stack_21 = new TH1F("st_stack_21","",50,0,10);
   st_stack_21->SetMinimum(0.01);
   st_stack_21->SetMaximum(3210513);
   st_stack_21->SetDirectory(0);
   st_stack_21->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_21->SetLineColor(ci);
   st_stack_21->GetXaxis()->SetRange(1,50);
   st_stack_21->GetXaxis()->SetLabelFont(42);
   st_stack_21->GetXaxis()->SetLabelSize(0.035);
   st_stack_21->GetXaxis()->SetTitleSize(0.035);
   st_stack_21->GetXaxis()->SetTitleFont(42);
   st_stack_21->GetYaxis()->SetTitle("Events/0.2");
   st_stack_21->GetYaxis()->SetLabelFont(42);
   st_stack_21->GetYaxis()->SetLabelSize(0.05);
   st_stack_21->GetYaxis()->SetTitleSize(0.057);
   st_stack_21->GetYaxis()->SetTitleOffset(1.2);
   st_stack_21->GetYaxis()->SetTitleFont(42);
   st_stack_21->GetZaxis()->SetLabelFont(42);
   st_stack_21->GetZaxis()->SetLabelSize(0.035);
   st_stack_21->GetZaxis()->SetTitleSize(0.035);
   st_stack_21->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_21);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",50,0,10);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(2,1325.038);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,483997.2);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,645577.1);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,492110.7);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,478296.6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,479285.3);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,509209.5);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,552996.4);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,604974.2);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,672889.6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,837249.5);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,852268.3);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,957127.3);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,1093499);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,1167376);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,780633);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,620237.5);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,531622.2);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,392302.1);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,310585.9);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,207983.2);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,172867.9);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,145089.8);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,86163.82);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,45566.67);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,39891.77);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(28,7973.934);
   VbbHcc_tags_H_dR_stack_1->SetBinError(2,1325.038);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,25788.33);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,29798.05);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,26106.46);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,25658.15);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,25773.96);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,26366.67);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,27615.09);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,28825.96);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,30294.15);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,33890.53);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,34273.07);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,36225.47);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,38700.32);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,40059.91);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,32772.9);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,29188.62);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,26942.97);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,23145.04);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,20585.4);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,16842.84);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,15328.07);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,13995.11);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,10725.79);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,7763.923);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,7295.497);
   VbbHcc_tags_H_dR_stack_1->SetBinError(28,3260.744);
   VbbHcc_tags_H_dR_stack_1->SetEntries(9787);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",50,0,10);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(2,3.815364);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,3672.011);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,5596.447);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,6221.463);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,7296.096);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,8104.392);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,8500.746);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,8764.089);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,8794.551);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,9082.251);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,9715.678);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,10457.39);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,11460.22);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,12327.59);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,12478.4);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,7857.183);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,5529.829);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,4141.793);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,3101.126);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,2306.034);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,1665.021);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,1169.476);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,793.8113);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,459.4212);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,253.7458);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,115.8652);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,34.63231);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(29,2.328875);
   VbbHcc_tags_H_dR_stack_2->SetBinError(2,0.8495666);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,26.38639);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,32.21099);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,33.45854);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,35.34502);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,36.38101);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,36.8495);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,37.47906);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,37.45511);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,38.26786);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,39.70672);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,41.24678);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,43.26952);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,44.67931);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,44.83104);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,34.10896);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,27.50806);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,23.05625);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,19.41454);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,16.35075);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,13.32493);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,11.0647);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,9.03564);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,6.621269);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,4.857379);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,3.283686);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,1.69841);
   VbbHcc_tags_H_dR_stack_2->SetBinError(29,0.498688);
   VbbHcc_tags_H_dR_stack_2->SetEntries(2269787);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_3 = new TH1D("VbbHcc_tags_H_dR_stack_3","",50,0,10);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(2,41.24078);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(3,45242.78);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(4,79934.1);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(5,97329.39);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(6,116789.2);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(7,127199.1);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(8,130819.8);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(9,132257.9);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(10,134916.3);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(11,141044.3);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(12,150378.9);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(13,162078.8);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(14,175641.8);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(15,188597.6);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(16,186930.9);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(17,108647.5);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(18,70828.28);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(19,48619.09);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(20,33754.18);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(21,23257.32);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(22,15779.21);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(23,10346.25);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(24,6504.193);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(25,3593.928);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(26,1829.402);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(27,791.5328);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(28,234.2763);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(29,17.73775);
   VbbHcc_tags_H_dR_stack_3->SetBinError(2,1.619835);
   VbbHcc_tags_H_dR_stack_3->SetBinError(3,54.38537);
   VbbHcc_tags_H_dR_stack_3->SetBinError(4,72.37877);
   VbbHcc_tags_H_dR_stack_3->SetBinError(5,79.8769);
   VbbHcc_tags_H_dR_stack_3->SetBinError(6,87.46132);
   VbbHcc_tags_H_dR_stack_3->SetBinError(7,91.25199);
   VbbHcc_tags_H_dR_stack_3->SetBinError(8,92.57651);
   VbbHcc_tags_H_dR_stack_3->SetBinError(9,93.15584);
   VbbHcc_tags_H_dR_stack_3->SetBinError(10,94.17628);
   VbbHcc_tags_H_dR_stack_3->SetBinError(11,96.38542);
   VbbHcc_tags_H_dR_stack_3->SetBinError(12,99.62053);
   VbbHcc_tags_H_dR_stack_3->SetBinError(13,103.5353);
   VbbHcc_tags_H_dR_stack_3->SetBinError(14,107.8899);
   VbbHcc_tags_H_dR_stack_3->SetBinError(15,111.8869);
   VbbHcc_tags_H_dR_stack_3->SetBinError(16,111.421);
   VbbHcc_tags_H_dR_stack_3->SetBinError(17,84.73486);
   VbbHcc_tags_H_dR_stack_3->SetBinError(18,68.17685);
   VbbHcc_tags_H_dR_stack_3->SetBinError(19,56.27825);
   VbbHcc_tags_H_dR_stack_3->SetBinError(20,46.68185);
   VbbHcc_tags_H_dR_stack_3->SetBinError(21,38.59243);
   VbbHcc_tags_H_dR_stack_3->SetBinError(22,31.64353);
   VbbHcc_tags_H_dR_stack_3->SetBinError(23,25.49112);
   VbbHcc_tags_H_dR_stack_3->SetBinError(24,20.12465);
   VbbHcc_tags_H_dR_stack_3->SetBinError(25,14.88791);
   VbbHcc_tags_H_dR_stack_3->SetBinError(26,10.56821);
   VbbHcc_tags_H_dR_stack_3->SetBinError(27,6.92277);
   VbbHcc_tags_H_dR_stack_3->SetBinError(28,3.714659);
   VbbHcc_tags_H_dR_stack_3->SetBinError(29,1.024016);
   VbbHcc_tags_H_dR_stack_3->SetEntries(3.53571e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_4 = new TH1D("VbbHcc_tags_H_dR_stack_4","",50,0,10);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(2,2.386513);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(3,1357.414);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(4,1664.163);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(5,1613.162);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(6,1630.476);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(7,1654.125);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(8,1667.922);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(9,1768.619);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(10,1832.582);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(11,2061.657);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(12,2277.321);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(13,2561.651);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(14,2838.126);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(15,3247.836);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(16,3341.906);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(17,2119.478);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(18,1471.993);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(19,1066.529);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(20,807.8362);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(21,592.9822);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(22,420.939);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(23,308.3388);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(24,205.4882);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(25,115.3845);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(26,58.41494);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(27,34.18086);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(28,8.270216);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(29,0.8051751);
   VbbHcc_tags_H_dR_stack_4->SetBinError(2,0.8449809);
   VbbHcc_tags_H_dR_stack_4->SetBinError(3,20.13883);
   VbbHcc_tags_H_dR_stack_4->SetBinError(4,22.26988);
   VbbHcc_tags_H_dR_stack_4->SetBinError(5,21.92874);
   VbbHcc_tags_H_dR_stack_4->SetBinError(6,22.04393);
   VbbHcc_tags_H_dR_stack_4->SetBinError(7,22.20511);
   VbbHcc_tags_H_dR_stack_4->SetBinError(8,22.28283);
   VbbHcc_tags_H_dR_stack_4->SetBinError(9,22.96812);
   VbbHcc_tags_H_dR_stack_4->SetBinError(10,23.35194);
   VbbHcc_tags_H_dR_stack_4->SetBinError(11,24.77126);
   VbbHcc_tags_H_dR_stack_4->SetBinError(12,26.04203);
   VbbHcc_tags_H_dR_stack_4->SetBinError(13,27.62312);
   VbbHcc_tags_H_dR_stack_4->SetBinError(14,29.08418);
   VbbHcc_tags_H_dR_stack_4->SetBinError(15,31.12592);
   VbbHcc_tags_H_dR_stack_4->SetBinError(16,31.53648);
   VbbHcc_tags_H_dR_stack_4->SetBinError(17,25.12298);
   VbbHcc_tags_H_dR_stack_4->SetBinError(18,20.89066);
   VbbHcc_tags_H_dR_stack_4->SetBinError(19,17.76812);
   VbbHcc_tags_H_dR_stack_4->SetBinError(20,15.43629);
   VbbHcc_tags_H_dR_stack_4->SetBinError(21,13.22443);
   VbbHcc_tags_H_dR_stack_4->SetBinError(22,11.12159);
   VbbHcc_tags_H_dR_stack_4->SetBinError(23,9.490816);
   VbbHcc_tags_H_dR_stack_4->SetBinError(24,7.713646);
   VbbHcc_tags_H_dR_stack_4->SetBinError(25,5.742072);
   VbbHcc_tags_H_dR_stack_4->SetBinError(26,4.0949);
   VbbHcc_tags_H_dR_stack_4->SetBinError(27,3.114742);
   VbbHcc_tags_H_dR_stack_4->SetBinError(28,1.494639);
   VbbHcc_tags_H_dR_stack_4->SetBinError(29,0.46869);
   VbbHcc_tags_H_dR_stack_4->SetEntries(125833);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_5 = new TH1D("VbbHcc_tags_H_dR_stack_5","",50,0,10);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(3,658.4481);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(4,1126.775);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(5,1209.914);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(6,1054.63);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(7,1063.518);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(8,1024.029);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(9,1029.909);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(10,1105.773);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(11,1145.666);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(12,1339.791);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(13,1395.878);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(14,1599.736);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(15,1726.8);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(16,1693.532);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(17,1100.272);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(18,652.0192);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(19,553.3439);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(20,415.8428);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(21,315.9269);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(22,226.4375);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(23,171.9571);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(24,113.8815);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(25,80.00182);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(26,46.07517);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(27,16.27638);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(28,11.09359);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(29,1.092919);
   VbbHcc_tags_H_dR_stack_5->SetBinError(3,26.88185);
   VbbHcc_tags_H_dR_stack_5->SetBinError(4,35.14829);
   VbbHcc_tags_H_dR_stack_5->SetBinError(5,36.40419);
   VbbHcc_tags_H_dR_stack_5->SetBinError(6,34.00405);
   VbbHcc_tags_H_dR_stack_5->SetBinError(7,34.22321);
   VbbHcc_tags_H_dR_stack_5->SetBinError(8,33.49301);
   VbbHcc_tags_H_dR_stack_5->SetBinError(9,33.58361);
   VbbHcc_tags_H_dR_stack_5->SetBinError(10,34.73456);
   VbbHcc_tags_H_dR_stack_5->SetBinError(11,35.46417);
   VbbHcc_tags_H_dR_stack_5->SetBinError(12,38.33506);
   VbbHcc_tags_H_dR_stack_5->SetBinError(13,39.07054);
   VbbHcc_tags_H_dR_stack_5->SetBinError(14,41.79522);
   VbbHcc_tags_H_dR_stack_5->SetBinError(15,43.47747);
   VbbHcc_tags_H_dR_stack_5->SetBinError(16,42.87559);
   VbbHcc_tags_H_dR_stack_5->SetBinError(17,34.59554);
   VbbHcc_tags_H_dR_stack_5->SetBinError(18,26.58567);
   VbbHcc_tags_H_dR_stack_5->SetBinError(19,24.5432);
   VbbHcc_tags_H_dR_stack_5->SetBinError(20,21.27093);
   VbbHcc_tags_H_dR_stack_5->SetBinError(21,18.43446);
   VbbHcc_tags_H_dR_stack_5->SetBinError(22,15.51866);
   VbbHcc_tags_H_dR_stack_5->SetBinError(23,13.64756);
   VbbHcc_tags_H_dR_stack_5->SetBinError(24,11.12254);
   VbbHcc_tags_H_dR_stack_5->SetBinError(25,9.1786);
   VbbHcc_tags_H_dR_stack_5->SetBinError(26,6.957193);
   VbbHcc_tags_H_dR_stack_5->SetBinError(27,4.080663);
   VbbHcc_tags_H_dR_stack_5->SetBinError(28,3.375085);
   VbbHcc_tags_H_dR_stack_5->SetBinError(29,1.092919);
   VbbHcc_tags_H_dR_stack_5->SetEntries(19535);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_6 = new TH1D("VbbHcc_tags_H_dR_stack_6","",50,0,10);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(2,0.0898518);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(3,20.22307);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(4,27.12817);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(5,27.21202);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(6,30.49235);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(7,28.56114);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(8,30.54457);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(9,31.64806);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(10,35.2206);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(11,38.60369);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(12,40.59769);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(13,44.8977);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(14,53.89644);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(15,57.07347);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(16,56.07048);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(17,32.72071);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(18,21.97593);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(19,16.68534);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(20,9.798626);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(21,9.217027);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(22,4.268565);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(23,3.508258);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(24,2.565923);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(25,1.114512);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(26,0.8448139);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(27,0.2665281);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(28,0.3322125);
   VbbHcc_tags_H_dR_stack_6->SetBinError(2,0.0898518);
   VbbHcc_tags_H_dR_stack_6->SetBinError(3,1.364457);
   VbbHcc_tags_H_dR_stack_6->SetBinError(4,1.57299);
   VbbHcc_tags_H_dR_stack_6->SetBinError(5,1.575445);
   VbbHcc_tags_H_dR_stack_6->SetBinError(6,1.669076);
   VbbHcc_tags_H_dR_stack_6->SetBinError(7,1.615321);
   VbbHcc_tags_H_dR_stack_6->SetBinError(8,1.676523);
   VbbHcc_tags_H_dR_stack_6->SetBinError(9,1.702631);
   VbbHcc_tags_H_dR_stack_6->SetBinError(10,1.795235);
   VbbHcc_tags_H_dR_stack_6->SetBinError(11,1.88049);
   VbbHcc_tags_H_dR_stack_6->SetBinError(12,1.928755);
   VbbHcc_tags_H_dR_stack_6->SetBinError(13,2.027455);
   VbbHcc_tags_H_dR_stack_6->SetBinError(14,2.220404);
   VbbHcc_tags_H_dR_stack_6->SetBinError(15,2.286214);
   VbbHcc_tags_H_dR_stack_6->SetBinError(16,2.267241);
   VbbHcc_tags_H_dR_stack_6->SetBinError(17,1.725869);
   VbbHcc_tags_H_dR_stack_6->SetBinError(18,1.414354);
   VbbHcc_tags_H_dR_stack_6->SetBinError(19,1.236829);
   VbbHcc_tags_H_dR_stack_6->SetBinError(20,0.9383076);
   VbbHcc_tags_H_dR_stack_6->SetBinError(21,0.9138627);
   VbbHcc_tags_H_dR_stack_6->SetBinError(22,0.6216995);
   VbbHcc_tags_H_dR_stack_6->SetBinError(23,0.5589029);
   VbbHcc_tags_H_dR_stack_6->SetBinError(24,0.4788052);
   VbbHcc_tags_H_dR_stack_6->SetBinError(25,0.3109075);
   VbbHcc_tags_H_dR_stack_6->SetBinError(26,0.2718452);
   VbbHcc_tags_H_dR_stack_6->SetBinError(27,0.1538901);
   VbbHcc_tags_H_dR_stack_6->SetBinError(28,0.1688273);
   VbbHcc_tags_H_dR_stack_6->SetEntries(6972);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_7 = new TH1D("VbbHcc_tags_H_dR_stack_7","",50,0,10);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(3,42.12941);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(4,60.21918);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(5,63.66449);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(6,62.99576);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(7,73.81644);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(8,72.79338);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(9,66.04013);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(10,69.30775);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(11,70.75179);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(12,73.89781);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(13,83.71227);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(14,88.68348);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(15,98.67233);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(16,106.1894);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(17,57.6926);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(18,40.1075);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(19,26.42007);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(20,19.43452);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(21,13.32512);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(22,10.65487);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(23,7.341629);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(24,5.139017);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(25,2.876185);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(26,1.564451);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(27,1.307028);
   VbbHcc_tags_H_dR_stack_7->SetBinError(3,1.695657);
   VbbHcc_tags_H_dR_stack_7->SetBinError(4,2.026853);
   VbbHcc_tags_H_dR_stack_7->SetBinError(5,2.086184);
   VbbHcc_tags_H_dR_stack_7->SetBinError(6,2.076329);
   VbbHcc_tags_H_dR_stack_7->SetBinError(7,2.24833);
   VbbHcc_tags_H_dR_stack_7->SetBinError(8,2.232343);
   VbbHcc_tags_H_dR_stack_7->SetBinError(9,2.12157);
   VbbHcc_tags_H_dR_stack_7->SetBinError(10,2.178063);
   VbbHcc_tags_H_dR_stack_7->SetBinError(11,2.195003);
   VbbHcc_tags_H_dR_stack_7->SetBinError(12,2.247802);
   VbbHcc_tags_H_dR_stack_7->SetBinError(13,2.388501);
   VbbHcc_tags_H_dR_stack_7->SetBinError(14,2.458632);
   VbbHcc_tags_H_dR_stack_7->SetBinError(15,2.592369);
   VbbHcc_tags_H_dR_stack_7->SetBinError(16,2.691214);
   VbbHcc_tags_H_dR_stack_7->SetBinError(17,1.980072);
   VbbHcc_tags_H_dR_stack_7->SetBinError(18,1.648869);
   VbbHcc_tags_H_dR_stack_7->SetBinError(19,1.33693);
   VbbHcc_tags_H_dR_stack_7->SetBinError(20,1.148321);
   VbbHcc_tags_H_dR_stack_7->SetBinError(21,0.9499395);
   VbbHcc_tags_H_dR_stack_7->SetBinError(22,0.8485305);
   VbbHcc_tags_H_dR_stack_7->SetBinError(23,0.69759);
   VbbHcc_tags_H_dR_stack_7->SetBinError(24,0.5909833);
   VbbHcc_tags_H_dR_stack_7->SetBinError(25,0.4401987);
   VbbHcc_tags_H_dR_stack_7->SetBinError(26,0.31719);
   VbbHcc_tags_H_dR_stack_7->SetBinError(27,0.2903839);
   VbbHcc_tags_H_dR_stack_7->SetEntries(18198);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_8 = new TH1D("VbbHcc_tags_H_dR_stack_8","",50,0,10);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(3,30.33301);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(4,43.94481);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(5,60.99668);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(6,60.18815);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(7,57.4841);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(8,69.05129);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(9,75.17706);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(10,77.11097);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(11,70.27747);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(12,78.01821);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(13,92.06424);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(14,100.7124);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(15,105.6896);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(16,110.9608);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(17,53.62483);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(18,30.92682);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(19,23.05449);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(20,13.41769);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(21,11.05202);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(22,7.2834);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(23,6.172335);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(24,4.19696);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(25,0.933963);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(26,1.697532);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(27,0.7060052);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(28,0.2023712);
   VbbHcc_tags_H_dR_stack_8->SetBinError(3,2.410778);
   VbbHcc_tags_H_dR_stack_8->SetBinError(4,2.910002);
   VbbHcc_tags_H_dR_stack_8->SetBinError(5,3.427895);
   VbbHcc_tags_H_dR_stack_8->SetBinError(6,3.417212);
   VbbHcc_tags_H_dR_stack_8->SetBinError(7,3.33379);
   VbbHcc_tags_H_dR_stack_8->SetBinError(8,3.643708);
   VbbHcc_tags_H_dR_stack_8->SetBinError(9,3.807973);
   VbbHcc_tags_H_dR_stack_8->SetBinError(10,3.854931);
   VbbHcc_tags_H_dR_stack_8->SetBinError(11,3.667537);
   VbbHcc_tags_H_dR_stack_8->SetBinError(12,3.883691);
   VbbHcc_tags_H_dR_stack_8->SetBinError(13,4.211963);
   VbbHcc_tags_H_dR_stack_8->SetBinError(14,4.390886);
   VbbHcc_tags_H_dR_stack_8->SetBinError(15,4.507591);
   VbbHcc_tags_H_dR_stack_8->SetBinError(16,4.617927);
   VbbHcc_tags_H_dR_stack_8->SetBinError(17,3.200795);
   VbbHcc_tags_H_dR_stack_8->SetBinError(18,2.433425);
   VbbHcc_tags_H_dR_stack_8->SetBinError(19,2.100139);
   VbbHcc_tags_H_dR_stack_8->SetBinError(20,1.604649);
   VbbHcc_tags_H_dR_stack_8->SetBinError(21,1.437414);
   VbbHcc_tags_H_dR_stack_8->SetBinError(22,1.173408);
   VbbHcc_tags_H_dR_stack_8->SetBinError(23,1.079339);
   VbbHcc_tags_H_dR_stack_8->SetBinError(24,0.880343);
   VbbHcc_tags_H_dR_stack_8->SetBinError(25,0.4191123);
   VbbHcc_tags_H_dR_stack_8->SetBinError(26,0.5680798);
   VbbHcc_tags_H_dR_stack_8->SetBinError(27,0.3550469);
   VbbHcc_tags_H_dR_stack_8->SetBinError(28,0.2023712);
   VbbHcc_tags_H_dR_stack_8->SetEntries(6283);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_9 = new TH1D("VbbHcc_tags_H_dR_stack_9","",50,0,10);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(2,0.01852473);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(3,15.50108);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(4,23.48011);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(5,24.91836);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(6,26.98801);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(7,26.93431);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(8,26.53718);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(9,25.8978);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(10,25.36738);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(11,26.16839);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(12,27.57086);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(13,29.432);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(14,32.36965);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(15,35.41325);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(16,35.10006);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(17,16.77905);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(18,9.73575);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(19,6.277436);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(20,4.467881);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(21,3.135677);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(22,2.256583);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(23,1.511081);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(24,1.033697);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(25,0.5616195);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(26,0.2940338);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(27,0.1392449);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(28,0.06997425);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(29,0.002661176);
   VbbHcc_tags_H_dR_stack_9->SetBinError(2,0.005211634);
   VbbHcc_tags_H_dR_stack_9->SetBinError(3,0.1541517);
   VbbHcc_tags_H_dR_stack_9->SetBinError(4,0.1892883);
   VbbHcc_tags_H_dR_stack_9->SetBinError(5,0.1952553);
   VbbHcc_tags_H_dR_stack_9->SetBinError(6,0.2031577);
   VbbHcc_tags_H_dR_stack_9->SetBinError(7,0.2027249);
   VbbHcc_tags_H_dR_stack_9->SetBinError(8,0.2008074);
   VbbHcc_tags_H_dR_stack_9->SetBinError(9,0.1978538);
   VbbHcc_tags_H_dR_stack_9->SetBinError(10,0.1956666);
   VbbHcc_tags_H_dR_stack_9->SetBinError(11,0.198694);
   VbbHcc_tags_H_dR_stack_9->SetBinError(12,0.2037476);
   VbbHcc_tags_H_dR_stack_9->SetBinError(13,0.2105896);
   VbbHcc_tags_H_dR_stack_9->SetBinError(14,0.2208116);
   VbbHcc_tags_H_dR_stack_9->SetBinError(15,0.2308564);
   VbbHcc_tags_H_dR_stack_9->SetBinError(16,0.230203);
   VbbHcc_tags_H_dR_stack_9->SetBinError(17,0.158461);
   VbbHcc_tags_H_dR_stack_9->SetBinError(18,0.1203394);
   VbbHcc_tags_H_dR_stack_9->SetBinError(19,0.09615267);
   VbbHcc_tags_H_dR_stack_9->SetBinError(20,0.08099597);
   VbbHcc_tags_H_dR_stack_9->SetBinError(21,0.06766418);
   VbbHcc_tags_H_dR_stack_9->SetBinError(22,0.05727258);
   VbbHcc_tags_H_dR_stack_9->SetBinError(23,0.04710036);
   VbbHcc_tags_H_dR_stack_9->SetBinError(24,0.03867667);
   VbbHcc_tags_H_dR_stack_9->SetBinError(25,0.02836805);
   VbbHcc_tags_H_dR_stack_9->SetBinError(26,0.02034111);
   VbbHcc_tags_H_dR_stack_9->SetBinError(27,0.01398287);
   VbbHcc_tags_H_dR_stack_9->SetBinError(28,0.009901392);
   VbbHcc_tags_H_dR_stack_9->SetBinError(29,0.001890494);
   VbbHcc_tags_H_dR_stack_9->SetEntries(302515);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_10 = new TH1D("VbbHcc_tags_H_dR_stack_10","",50,0,10);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(2,0.003068544);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(3,5.155739);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(4,8.562242);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(5,9.964491);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(6,10.68613);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(7,9.467398);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(8,7.761867);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(9,6.83103);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(10,6.580223);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(11,6.847975);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(12,7.693373);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(13,8.42666);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(14,9.535928);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(15,10.54934);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(16,10.39799);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(17,5.895997);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(18,3.824643);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(19,2.634979);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(20,1.934782);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(21,1.352651);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(22,0.9200676);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(23,0.6510948);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(24,0.4241008);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(25,0.2381611);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(26,0.1248433);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(27,0.05643928);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(28,0.02001416);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(29,0.001221134);
   VbbHcc_tags_H_dR_stack_10->SetBinError(2,0.001091725);
   VbbHcc_tags_H_dR_stack_10->SetBinError(3,0.04442654);
   VbbHcc_tags_H_dR_stack_10->SetBinError(4,0.05730182);
   VbbHcc_tags_H_dR_stack_10->SetBinError(5,0.06187686);
   VbbHcc_tags_H_dR_stack_10->SetBinError(6,0.06413453);
   VbbHcc_tags_H_dR_stack_10->SetBinError(7,0.06033485);
   VbbHcc_tags_H_dR_stack_10->SetBinError(8,0.05460005);
   VbbHcc_tags_H_dR_stack_10->SetBinError(9,0.05117324);
   VbbHcc_tags_H_dR_stack_10->SetBinError(10,0.05022873);
   VbbHcc_tags_H_dR_stack_10->SetBinError(11,0.05121502);
   VbbHcc_tags_H_dR_stack_10->SetBinError(12,0.05427783);
   VbbHcc_tags_H_dR_stack_10->SetBinError(13,0.05680557);
   VbbHcc_tags_H_dR_stack_10->SetBinError(14,0.0604326);
   VbbHcc_tags_H_dR_stack_10->SetBinError(15,0.06352547);
   VbbHcc_tags_H_dR_stack_10->SetBinError(16,0.06308851);
   VbbHcc_tags_H_dR_stack_10->SetBinError(17,0.0474503);
   VbbHcc_tags_H_dR_stack_10->SetBinError(18,0.03815224);
   VbbHcc_tags_H_dR_stack_10->SetBinError(19,0.03161579);
   VbbHcc_tags_H_dR_stack_10->SetBinError(20,0.02704766);
   VbbHcc_tags_H_dR_stack_10->SetBinError(21,0.02256242);
   VbbHcc_tags_H_dR_stack_10->SetBinError(22,0.01857705);
   VbbHcc_tags_H_dR_stack_10->SetBinError(23,0.01561159);
   VbbHcc_tags_H_dR_stack_10->SetBinError(24,0.01256201);
   VbbHcc_tags_H_dR_stack_10->SetBinError(25,0.009346331);
   VbbHcc_tags_H_dR_stack_10->SetBinError(26,0.006726002);
   VbbHcc_tags_H_dR_stack_10->SetBinError(27,0.004498548);
   VbbHcc_tags_H_dR_stack_10->SetBinError(28,0.002673066);
   VbbHcc_tags_H_dR_stack_10->SetBinError(29,0.0006415149);
   VbbHcc_tags_H_dR_stack_10->SetEntries(363165);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_11 = new TH1D("VbbHcc_tags_H_dR_stack_11","",50,0,10);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(3,0.128343);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(4,0.2551189);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(5,0.2787112);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(6,0.3435474);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(7,0.466515);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(8,0.403866);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(9,0.4491082);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(10,0.4613153);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(11,0.467661);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(12,0.4628735);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(13,0.4635);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(14,0.487973);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(15,0.5640463);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(16,0.5263934);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(17,0.2285126);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(18,0.1183623);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(19,0.06021934);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(20,0.05331846);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(21,0.02747396);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(22,0.01215988);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(23,0.01251154);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(24,0.005812042);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(25,0.001561075);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(26,0.004394304);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(27,0.001436258);
   VbbHcc_tags_H_dR_stack_11->SetBinError(3,0.01405319);
   VbbHcc_tags_H_dR_stack_11->SetBinError(4,0.01978257);
   VbbHcc_tags_H_dR_stack_11->SetBinError(5,0.02103618);
   VbbHcc_tags_H_dR_stack_11->SetBinError(6,0.02321039);
   VbbHcc_tags_H_dR_stack_11->SetBinError(7,0.02727207);
   VbbHcc_tags_H_dR_stack_11->SetBinError(8,0.02548227);
   VbbHcc_tags_H_dR_stack_11->SetBinError(9,0.02613851);
   VbbHcc_tags_H_dR_stack_11->SetBinError(10,0.0268346);
   VbbHcc_tags_H_dR_stack_11->SetBinError(11,0.02705314);
   VbbHcc_tags_H_dR_stack_11->SetBinError(12,0.02726665);
   VbbHcc_tags_H_dR_stack_11->SetBinError(13,0.02676507);
   VbbHcc_tags_H_dR_stack_11->SetBinError(14,0.02769346);
   VbbHcc_tags_H_dR_stack_11->SetBinError(15,0.02952989);
   VbbHcc_tags_H_dR_stack_11->SetBinError(16,0.02866326);
   VbbHcc_tags_H_dR_stack_11->SetBinError(17,0.01881726);
   VbbHcc_tags_H_dR_stack_11->SetBinError(18,0.01335091);
   VbbHcc_tags_H_dR_stack_11->SetBinError(19,0.009571827);
   VbbHcc_tags_H_dR_stack_11->SetBinError(20,0.008834266);
   VbbHcc_tags_H_dR_stack_11->SetBinError(21,0.006378224);
   VbbHcc_tags_H_dR_stack_11->SetBinError(22,0.004268317);
   VbbHcc_tags_H_dR_stack_11->SetBinError(23,0.004292499);
   VbbHcc_tags_H_dR_stack_11->SetBinError(24,0.002906782);
   VbbHcc_tags_H_dR_stack_11->SetBinError(25,0.001455521);
   VbbHcc_tags_H_dR_stack_11->SetBinError(26,0.002537925);
   VbbHcc_tags_H_dR_stack_11->SetBinError(27,0.001436258);
   VbbHcc_tags_H_dR_stack_11->SetEntries(4585);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_12 = new TH1D("VbbHcc_tags_H_dR_stack_12","",50,0,10);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(2,4.029045);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(3,1385.108);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(4,2331.185);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(5,2601.12);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(6,3542.898);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(7,3783.372);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(8,3997.222);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(9,3647.54);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(10,3142.51);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(11,2992.471);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(12,3110.832);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(13,3008.46);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(14,3381.947);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(15,3856.51);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(16,3794.24);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(17,1870.551);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(18,1183.343);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(19,788.253);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(20,431.0045);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(21,239.9809);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(22,176.5999);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(23,174.28);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(24,78.53916);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(25,68.07797);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(26,19.94458);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(27,12.00925);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(28,11.35541);
   VbbHcc_tags_H_dR_stack_12->SetBinError(2,4.029045);
   VbbHcc_tags_H_dR_stack_12->SetBinError(3,74.67497);
   VbbHcc_tags_H_dR_stack_12->SetBinError(4,97.1487);
   VbbHcc_tags_H_dR_stack_12->SetBinError(5,102.4195);
   VbbHcc_tags_H_dR_stack_12->SetBinError(6,119.6572);
   VbbHcc_tags_H_dR_stack_12->SetBinError(7,123.5925);
   VbbHcc_tags_H_dR_stack_12->SetBinError(8,127.2996);
   VbbHcc_tags_H_dR_stack_12->SetBinError(9,121.6178);
   VbbHcc_tags_H_dR_stack_12->SetBinError(10,112.7203);
   VbbHcc_tags_H_dR_stack_12->SetBinError(11,109.8903);
   VbbHcc_tags_H_dR_stack_12->SetBinError(12,111.8127);
   VbbHcc_tags_H_dR_stack_12->SetBinError(13,110.3474);
   VbbHcc_tags_H_dR_stack_12->SetBinError(14,116.3429);
   VbbHcc_tags_H_dR_stack_12->SetBinError(15,124.8002);
   VbbHcc_tags_H_dR_stack_12->SetBinError(16,123.7811);
   VbbHcc_tags_H_dR_stack_12->SetBinError(17,86.72727);
   VbbHcc_tags_H_dR_stack_12->SetBinError(18,68.97031);
   VbbHcc_tags_H_dR_stack_12->SetBinError(19,55.86015);
   VbbHcc_tags_H_dR_stack_12->SetBinError(20,41.60465);
   VbbHcc_tags_H_dR_stack_12->SetBinError(21,30.43566);
   VbbHcc_tags_H_dR_stack_12->SetBinError(22,26.23209);
   VbbHcc_tags_H_dR_stack_12->SetBinError(23,26.30608);
   VbbHcc_tags_H_dR_stack_12->SetBinError(24,17.63496);
   VbbHcc_tags_H_dR_stack_12->SetBinError(25,16.49944);
   VbbHcc_tags_H_dR_stack_12->SetBinError(26,8.240457);
   VbbHcc_tags_H_dR_stack_12->SetBinError(27,6.9368);
   VbbHcc_tags_H_dR_stack_12->SetBinError(28,6.564915);
   VbbHcc_tags_H_dR_stack_12->SetEntries(13340);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR__41 = new TH1D("VbbHcc_tags_H_dR__41","",50,0,10);
   VbbHcc_tags_H_dR__41->SetBinContent(2,301);
   VbbHcc_tags_H_dR__41->SetBinContent(3,327746);
   VbbHcc_tags_H_dR__41->SetBinContent(4,381041);
   VbbHcc_tags_H_dR__41->SetBinContent(5,309906);
   VbbHcc_tags_H_dR__41->SetBinContent(6,313417);
   VbbHcc_tags_H_dR__41->SetBinContent(7,321132);
   VbbHcc_tags_H_dR__41->SetBinContent(8,333982);
   VbbHcc_tags_H_dR__41->SetBinContent(9,356459);
   VbbHcc_tags_H_dR__41->SetBinContent(10,384296);
   VbbHcc_tags_H_dR__41->SetBinContent(11,418565);
   VbbHcc_tags_H_dR__41->SetBinContent(12,462460);
   VbbHcc_tags_H_dR__41->SetBinContent(13,512733);
   VbbHcc_tags_H_dR__41->SetBinContent(14,571733);
   VbbHcc_tags_H_dR__41->SetBinContent(15,637904);
   VbbHcc_tags_H_dR__41->SetBinContent(16,666279);
   VbbHcc_tags_H_dR__41->SetBinContent(17,449930);
   VbbHcc_tags_H_dR__41->SetBinContent(18,332131);
   VbbHcc_tags_H_dR__41->SetBinContent(19,256168);
   VbbHcc_tags_H_dR__41->SetBinContent(20,197353);
   VbbHcc_tags_H_dR__41->SetBinContent(21,150665);
   VbbHcc_tags_H_dR__41->SetBinContent(22,113772);
   VbbHcc_tags_H_dR__41->SetBinContent(23,83043);
   VbbHcc_tags_H_dR__41->SetBinContent(24,56655);
   VbbHcc_tags_H_dR__41->SetBinContent(25,34631);
   VbbHcc_tags_H_dR__41->SetBinContent(26,19038);
   VbbHcc_tags_H_dR__41->SetBinContent(27,8759);
   VbbHcc_tags_H_dR__41->SetBinContent(28,2780);
   VbbHcc_tags_H_dR__41->SetBinContent(29,206);
   VbbHcc_tags_H_dR__41->SetEntries(7703085);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR__41->SetLineColor(ci);
   VbbHcc_tags_H_dR__41->SetLineWidth(2);
   VbbHcc_tags_H_dR__41->SetMarkerStyle(20);
   VbbHcc_tags_H_dR__41->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR__41->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_H_dR__41->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__41->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__41->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__41->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__41->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__41->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__41->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__41->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR__41->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__41->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__41->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__41->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__41->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__41->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_fx1041[50] = {
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
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_VbbHcc_tags_H_dR_fy1041[50] = {
   0,
   1376.622,
   536426.4,
   736393.3,
   601272.8,
   608801.6,
   621286.6,
   655426.3,
   700670.5,
   754979.9,
   829429.1,
   1004300,
   1032029,
   1152335,
   1303563,
   1375934,
   902394.9,
   700009.7,
   586866.3,
   430861.2,
   337336.3,
   226276.8,
   185057.3,
   152799.1,
   90486.36,
   47778.78,
   40864.11,
   8274.186,
   21.96861,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_tags_H_dR_fex1041[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_H_dR_fey1041[50] = {
   0,
   1325.046,
   25788.53,
   29798.34,
   26106.84,
   25658.63,
   25774.47,
   26367.2,
   27615.57,
   28826.39,
   30294.55,
   33890.91,
   34273.46,
   36225.88,
   38700.75,
   40060.32,
   32773.17,
   29188.81,
   26943.11,
   23145.15,
   20585.48,
   16842.91,
   15328.12,
   13995.14,
   10725.82,
   7763.94,
   7295.506,
   3260.755,
   1.646647,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_tags_H_dR_fx1041,Graph_from_VbbHcc_tags_H_dR_fy1041,Graph_from_VbbHcc_tags_H_dR_fex1041,Graph_from_VbbHcc_tags_H_dR_fey1041);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR1041 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR1041","",100,0,11);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->SetMaximum(1557594);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR1041->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR1041);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_VbbHcc_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-1.532254,-0.2774193,10.52419,1.658065);
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
   
   TH1D *data_mc_ratio__42 = new TH1D("data_mc_ratio__42","",50,0,10);
   data_mc_ratio__42->SetBinContent(2,0.2186512);
   data_mc_ratio__42->SetBinContent(3,0.6109804);
   data_mc_ratio__42->SetBinContent(4,0.5174422);
   data_mc_ratio__42->SetBinContent(5,0.5154166);
   data_mc_ratio__42->SetBinContent(6,0.5148098);
   data_mc_ratio__42->SetBinContent(7,0.5168823);
   data_mc_ratio__42->SetBinContent(8,0.5095645);
   data_mc_ratio__42->SetBinContent(9,0.5087398);
   data_mc_ratio__42->SetBinContent(10,0.5090149);
   data_mc_ratio__42->SetBinContent(11,0.5046423);
   data_mc_ratio__42->SetBinContent(12,0.4604798);
   data_mc_ratio__42->SetBinContent(13,0.4968201);
   data_mc_ratio__42->SetBinContent(14,0.4961518);
   data_mc_ratio__42->SetBinContent(15,0.4893542);
   data_mc_ratio__42->SetBinContent(16,0.4842375);
   data_mc_ratio__42->SetBinContent(17,0.4985955);
   data_mc_ratio__42->SetBinContent(18,0.4744663);
   data_mc_ratio__42->SetBinContent(19,0.4365015);
   data_mc_ratio__42->SetBinContent(20,0.4580431);
   data_mc_ratio__42->SetBinContent(21,0.4466315);
   data_mc_ratio__42->SetBinContent(22,0.5028001);
   data_mc_ratio__42->SetBinContent(23,0.448742);
   data_mc_ratio__42->SetBinContent(24,0.3707809);
   data_mc_ratio__42->SetBinContent(25,0.3827207);
   data_mc_ratio__42->SetBinContent(26,0.3984614);
   data_mc_ratio__42->SetBinContent(27,0.2143446);
   data_mc_ratio__42->SetBinContent(28,0.3359847);
   data_mc_ratio__42->SetBinContent(29,9.377017);
   data_mc_ratio__42->SetBinError(2,0.01260285);
   data_mc_ratio__42->SetBinError(3,0.001067231);
   data_mc_ratio__42->SetBinError(4,0.0008382547);
   data_mc_ratio__42->SetBinError(5,0.000925856);
   data_mc_ratio__42->SetBinError(6,0.0009195715);
   data_mc_ratio__42->SetBinError(7,0.0009121155);
   data_mc_ratio__42->SetBinError(8,0.0008817341);
   data_mc_ratio__42->SetBinError(9,0.0008521008);
   data_mc_ratio__42->SetBinError(10,0.0008211028);
   data_mc_ratio__42->SetBinError(11,0.0007800137);
   data_mc_ratio__42->SetBinError(12,0.0006771323);
   data_mc_ratio__42->SetBinError(13,0.0006938308);
   data_mc_ratio__42->SetBinError(14,0.0006561724);
   data_mc_ratio__42->SetBinError(15,0.0006126968);
   data_mc_ratio__42->SetBinError(16,0.0005932399);
   data_mc_ratio__42->SetBinError(17,0.0007433201);
   data_mc_ratio__42->SetBinError(18,0.0008232859);
   data_mc_ratio__42->SetBinError(19,0.0008624288);
   data_mc_ratio__42->SetBinError(20,0.001031061);
   data_mc_ratio__42->SetBinError(21,0.00115065);
   data_mc_ratio__42->SetBinError(22,0.001490657);
   data_mc_ratio__42->SetBinError(23,0.001557203);
   data_mc_ratio__42->SetBinError(24,0.001557752);
   data_mc_ratio__42->SetBinError(25,0.002056598);
   data_mc_ratio__42->SetBinError(26,0.002887856);
   data_mc_ratio__42->SetBinError(27,0.002290262);
   data_mc_ratio__42->SetBinError(28,0.006372313);
   data_mc_ratio__42->SetBinError(29,0.6533278);
   data_mc_ratio__42->SetMinimum(0.4);
   data_mc_ratio__42->SetMaximum(1.6);
   data_mc_ratio__42->SetEntries(469.6613);
   data_mc_ratio__42->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__42->SetLineColor(ci);
   data_mc_ratio__42->SetLineWidth(2);
   data_mc_ratio__42->SetMarkerStyle(20);
   data_mc_ratio__42->SetMarkerSize(1.2);
   data_mc_ratio__42->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__42->GetXaxis()->SetRange(1,50);
   data_mc_ratio__42->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__42->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__42->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__42->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__42->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__42->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__42->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__42->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__42->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__42->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__42->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__42->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__42->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__42->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__42->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__42->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__42->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1042[50] = {
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
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_mc_statistical_error_fy1042[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1042[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1042[50] = {
   0,
   0.9625347,
   0.04807469,
   0.04046525,
   0.0434193,
   0.04214614,
   0.04148564,
   0.04022908,
   0.03941307,
   0.03818166,
   0.03652459,
   0.0337458,
   0.03320977,
   0.03143694,
   0.02968843,
   0.029115,
   0.036318,
   0.04169773,
   0.04591013,
   0.05371834,
   0.06102361,
   0.07443496,
   0.08282904,
   0.09159176,
   0.1185352,
   0.1624977,
   0.1785309,
   0.3940877,
   0.07495455,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1042,Graph_from_mc_statistical_error_fy1042,Graph_from_mc_statistical_error_fex1042,Graph_from_mc_statistical_error_fey1042);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1042 = new TH1F("Graph_Graph_from_mc_statistical_error1042","",100,0,11);
   Graph_Graph_from_mc_statistical_error1042->SetMinimum(0.03371873);
   Graph_Graph_from_mc_statistical_error1042->SetMaximum(2.155042);
   Graph_Graph_from_mc_statistical_error1042->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1042->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1042->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1042->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1042->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1042->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1042->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1042);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_VbbHcc_16->cd();
   H_dR_VbbHcc_16->Modified();
   H_dR_VbbHcc_16->cd();
   H_dR_VbbHcc_16->SetSelected(H_dR_VbbHcc_16);
}
