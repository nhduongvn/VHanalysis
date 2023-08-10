void H_dR_Bj0_algo_18_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_18/H_dR_Bj0_algo_18
//=========  (Thu Aug 10 12:20:54 2023) by ROOT version 6.14/09
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
   topPad->Range(-0.9193524,-2.938633,6.314516,15.05368);
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
   st->SetMaximum(4.569187e+12);
   
   TH1F *st_stack_139 = new TH1F("st_stack_139","",30,0,6);
   st_stack_139->SetMinimum(0.001200492);
   st_stack_139->SetMaximum(1.796589e+13);
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
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,171747.4);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,404206.3);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,328479.2);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,222575.4);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,141763.2);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,109888);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,102068.2);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,63593.84);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,56684.01);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,47666.23);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,34838.01);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,33363.52);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,28153.15);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,24433.49);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(15,20157.59);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(16,12145.38);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,7796.609);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(18,9806.336);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(19,3107.395);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(20,1855.686);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(21,1471.909);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(22,628.909);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(23,230.8678);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(24,23.08403);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(25,73.34146);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(26,6.294484);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(27,62.1344);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(28,10.18547);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(29,10.18547);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(30,10.18547);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(31,380.8373);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,3562.053);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,8126.521);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,8331.731);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,7468.042);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,5662.233);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,5596.221);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,20296.67);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,3610.871);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,3572.401);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,3337.937);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,2485.112);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,3029.206);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,2508.932);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,2388.996);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(15,2227.676);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(16,1688.427);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,1312.125);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(18,2245.914);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(19,846.7223);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(20,654.9871);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(21,540.5592);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(22,378.5729);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(23,74.82987);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(24,13.53073);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(25,45.80484);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(26,6.294484);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(27,36.17183);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(28,10.18547);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(29,10.18547);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(30,10.18547);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(31,370.7917);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(112239);

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
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,945.7181);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,3084.144);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,2568.051);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,1664.686);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,1108.319);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,785.3568);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,638.5045);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,503.4655);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,425.0827);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,341.4928);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,268.6928);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,225.9523);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,187.9914);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,146.9052);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,116.7464);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(16,91.05316);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,64.62069);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(18,47.24118);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(19,29.34676);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(20,18.65879);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,11.37884);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(22,6.359315);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(23,4.602832);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(24,2.421221);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(25,1.992782);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(26,1.272326);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(27,1.743118);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(28,0.7541475);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(29,0.2989319);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(30,0.1148528);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(31,0.3445583);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,12.57328);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,21.91311);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,20.05774);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,16.07525);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,13.07289);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,10.92866);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,9.946117);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,8.783481);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,8.051038);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,7.157715);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,6.331899);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,5.84602);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,5.359529);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,4.792531);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,4.243464);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(16,3.694899);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,3.049071);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(18,2.715125);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(19,2.007213);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(20,1.564385);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,1.23033);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(22,0.7307292);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(23,0.7001532);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(24,0.4394007);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(25,0.4803327);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(26,0.3595905);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(27,0.3966238);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(28,0.2109417);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(29,0.1220385);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(30,0.08192212);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(31,0.1418933);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(153765);

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
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(1,17102.51);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(2,60389.09);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(3,47569.08);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(4,28462.38);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(5,17518.81);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(6,12013.31);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(7,9233.931);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(8,7490.385);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(9,6091.266);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(10,4992.152);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(11,3987.039);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(12,3309.402);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(13,2820.453);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(14,2423.431);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(15,2008.328);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(16,1608.884);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(17,1220.464);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(18,898.5035);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(19,608.9721);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(20,378.1729);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(21,194.0887);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(22,95.04805);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(23,56.0595);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(24,33.49263);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(25,23.38265);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(26,15.61526);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(27,11.26985);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(28,6.795024);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(29,5.468117);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(30,3.885948);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(31,7.008747);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(1,35.25192);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(2,66.18551);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(3,58.6685);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(4,45.33709);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(5,35.54315);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(6,29.41717);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(7,25.78027);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(8,23.22165);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(9,20.94564);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(10,18.9636);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(11,16.94857);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(12,15.44661);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(13,14.26166);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(14,13.22855);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(15,12.05038);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(16,10.78355);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(17,9.39567);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(18,8.064258);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(19,6.635617);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(20,5.23154);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(21,3.737096);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(22,2.606736);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(23,1.996052);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(24,1.545307);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(25,1.290274);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(26,1.055015);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(27,0.8912039);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(28,0.6934084);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(29,0.6164693);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(30,0.5277584);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(31,0.7051491);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetEntries(3228671);

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
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(1,1047.159);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(2,2801.566);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(3,1990.311);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(4,1360.579);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(5,838.2705);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(6,652.5599);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(7,500.6457);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(8,430.6699);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(9,365.7243);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(10,306.1722);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(11,225.8592);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(12,201.9246);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(13,167.0238);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(14,110.0013);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(15,88.19965);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(16,67.28161);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(17,48.87026);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(18,26.23944);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(19,20.26116);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(20,14.70549);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(21,4.836029);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(22,2.249471);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(23,1.477511);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(24,0.5956863);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(25,1.384938);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(26,0.990312);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(27,0.6461824);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(28,1.040808);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(30,1.166586);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(31,0.1257783);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(1,15.72837);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(2,39.5806);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(3,35.18202);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(4,31.26193);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(5,21.95918);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(6,21.75283);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(7,18.99698);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(8,16.88751);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(9,16.54091);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(10,14.95768);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(11,11.0273);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(12,13.21379);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(13,12.15907);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(14,7.313506);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(15,6.91553);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(16,6.335803);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(17,5.743702);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(18,3.159933);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(19,2.799222);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(20,2.389253);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(21,1.346399);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(22,0.944924);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(23,0.7683884);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(24,0.2680495);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(25,0.7627915);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(26,0.5717086);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(27,0.5353882);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(28,0.7359625);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(30,0.7466331);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(31,0.1257783);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetEntries(55877);

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
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(1,371.9969);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(2,809.589);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(3,661.1293);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(4,420.2483);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(5,265.0592);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(6,193.172);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(7,148.6115);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(8,144.097);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(9,111.215);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(10,80.57998);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(11,72.67764);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(12,56.82784);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(13,62.74313);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(14,34.27701);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(15,34.47594);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(16,16.96994);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(17,14.91341);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(18,5.91369);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(19,6.457308);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(20,1.589237);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(21,3.047876);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(22,0.05720027);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(23,2.823022);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(24,0.3180693);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(25,0.09321511);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(27,0.3872676);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(28,0.04495706);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(31,0.04495706);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(1,17.21724);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(2,36.6337);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(3,44.34186);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(4,29.38516);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(5,25.57618);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(6,19.65884);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(7,15.41085);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(8,18.88484);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(9,14.8588);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(10,13.42468);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(11,8.399361);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(12,8.166945);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(13,13.41782);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(14,11.44731);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(15,6.256819);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(16,3.931764);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(17,4.335055);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(18,1.184256);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(19,3.026012);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(20,0.5968368);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(21,2.134398);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(22,0.04659435);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(23,2.119934);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(24,0.2649975);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(25,0.09321511);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(27,0.289878);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(28,0.04495706);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(31,0.04495706);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetEntries(15424);

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
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(1,5.424512);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(2,6.78064);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(3,3.164299);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(4,4.520427);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(5,1.356128);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(6,1.356128);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(7,2.712256);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(8,3.164299);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(9,2.712256);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(11,1.356128);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(12,0.9040853);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(14,0.4520427);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(16,0.4520427);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(18,0.4520427);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(1,1.565922);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(2,1.750754);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(3,1.195992);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(4,1.429484);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(5,0.7829609);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(6,0.7829609);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(7,1.107274);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(8,1.195992);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(9,1.107274);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(11,0.7829609);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(12,0.6392849);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(14,0.4520427);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(16,0.4520427);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(18,0.4520427);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetEntries(77);

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
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(1,15.95702);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(2,35.11642);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(3,18.77996);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(4,10.20143);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(5,5.728161);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(6,4.137259);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(7,3.533814);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(8,2.845794);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(9,2.733791);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(10,2.118917);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(11,1.730334);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(12,1.462898);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(13,1.138318);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(14,1.014886);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(15,0.6514469);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(16,0.5874451);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(17,0.3977255);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(18,0.2857223);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(19,0.1737192);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(20,0.1097174);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(21,0.05943024);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(22,0.01600045);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(23,0.009143115);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(24,0.01142889);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(26,0.009143115);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(31,0.002285779);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(1,0.1909822);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(2,0.2833167);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(3,0.2071879);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(4,0.152703);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(5,0.114426);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(6,0.09724638);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(7,0.089875);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(8,0.08065269);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(9,0.07904962);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(10,0.06959436);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(11,0.06289007);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(12,0.05782613);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(13,0.05100924);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(14,0.04816434);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(15,0.03858838);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(16,0.03664382);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(17,0.03015149);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(18,0.02555578);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(19,0.01992696);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(20,0.01583634);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(21,0.01165523);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(22,0.006047602);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(23,0.004571557);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(24,0.005111156);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(26,0.004571557);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(31,0.002285779);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetEntries(47604);

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
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(1,5.02026);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(2,17.26226);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(3,13.4258);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(4,8.377458);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(5,4.930025);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(6,3.35421);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(7,2.682531);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(8,2.193712);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(9,1.948705);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(10,1.536375);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(11,1.185596);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(12,1.045763);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(13,0.8897949);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(14,0.7894016);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(15,0.6704834);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(16,0.5342355);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(17,0.3908166);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(18,0.2593492);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(19,0.197201);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(20,0.1374431);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(21,0.06453851);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(22,0.02569589);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(23,0.01613463);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(24,0.01254916);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(25,0.007768525);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(26,0.004780631);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(27,0.003585473);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(28,0.002987894);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(29,0.001195158);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(31,0.003585473);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(1,0.05477226);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(2,0.1015655);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(3,0.08957107);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(4,0.07075444);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(5,0.05427779);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(6,0.04477058);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(7,0.04003778);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(8,0.03620657);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(9,0.03412484);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(10,0.03030025);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(11,0.02661742);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(12,0.02499852);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(13,0.02305911);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(14,0.02171934);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(15,0.02001666);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(16,0.01786751);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(17,0.01528214);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(18,0.01244916);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(19,0.01085556);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(20,0.009062732);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(21,0.006210221);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(22,0.003918586);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(23,0.003105111);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(24,0.00273845);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(25,0.002154601);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(26,0.001690208);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(27,0.001463763);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(28,0.001336227);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(29,0.0008451041);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(31,0.001463763);
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
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(1,0.1156227);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(2,0.2154787);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(3,0.1235061);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(4,0.08146147);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(5,0.07095031);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(6,0.03678905);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(7,0.03678905);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(8,0.03153347);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(9,0.01313895);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(10,0.02102232);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(11,0.01839453);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(12,0.01576674);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(13,0.002627789);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(14,0.01051116);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(15,0.01051116);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(17,0.007883368);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(18,0.005255579);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(19,0.005255579);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(1,0.01743078);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(2,0.02379565);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(3,0.01801522);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(4,0.01463091);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(5,0.01365439);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(6,0.009832288);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(7,0.009832288);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(8,0.00910293);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(9,0.005875916);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(10,0.007432511);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(11,0.006952477);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(12,0.006436743);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(13,0.002627789);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(14,0.005255579);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(15,0.005255579);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(17,0.004551465);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(18,0.003716255);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(19,0.003716255);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetEntries(313);

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
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(1,157573);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(2,497654);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(3,396333);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(4,266989);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(5,173502);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(6,124943);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(7,99233);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(8,82709);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(9,69902);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(10,58580);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(11,48572);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(12,39309);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(13,32403);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(14,26088);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(15,20226);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(16,14972);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(17,10744);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(18,7400);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(19,4978);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(20,3254);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(21,1910);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(22,1172);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(23,734);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(24,448);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(25,336);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(26,240);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(27,149);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(28,104);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(29,77);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(30,47);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(31,105);
   VbbHcc_algo_H_dR_Bj0__381->SetEntries(2140715);

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
   191279,
   471426.6,
   381335.3,
   254532.5,
   161518.7,
   123551.9,
   112605.9,
   72178.78,
   63690.12,
   53396.48,
   39402.97,
   37163.67,
   31394.95,
   27152.05,
   22408.63,
   13932.06,
   9146.908,
   10785.87,
   3773.088,
   2269.06,
   1685.664,
   732.6647,
   295.8559,
   59.93561,
   100.2028,
   24.18631,
   76.1844,
   18.82339,
   15.95371,
   15.35286};
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
   3562.328,
   8127.001,
   8332.155,
   7468.321,
   5662.461,
   5596.387,
   20296.71,
   3611.045,
   3572.541,
   3338.06,
   2485.217,
   3029.291,
   2509.044,
   2389.076,
   2227.732,
   1688.482,
   1312.182,
   2245.932,
   846.7608,
   655.0145,
   540.5795,
   378.5837,
   74.89372,
   13.63099,
   45.83197,
   6.417926,
   36.1901,
   10.23781,
   10.20484,
   10.22675};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_Bj0_fx1277,Graph_from_VbbHcc_algo_H_dR_Bj0_fy1277,Graph_from_VbbHcc_algo_H_dR_Bj0_fex1277,Graph_from_VbbHcc_algo_H_dR_Bj0_fey1277);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->SetMinimum(4.613493);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->SetMaximum(527508.5);
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
   data_mc_ratio__382->SetBinContent(1,0.8237862);
   data_mc_ratio__382->SetBinContent(2,1.055634);
   data_mc_ratio__382->SetBinContent(3,1.03933);
   data_mc_ratio__382->SetBinContent(4,1.048939);
   data_mc_ratio__382->SetBinContent(5,1.074191);
   data_mc_ratio__382->SetBinContent(6,1.011259);
   data_mc_ratio__382->SetBinContent(7,0.8812417);
   data_mc_ratio__382->SetBinContent(8,1.145891);
   data_mc_ratio__382->SetBinContent(9,1.097533);
   data_mc_ratio__382->SetBinContent(10,1.097076);
   data_mc_ratio__382->SetBinContent(11,1.232699);
   data_mc_ratio__382->SetBinContent(12,1.057726);
   data_mc_ratio__382->SetBinContent(13,1.032109);
   data_mc_ratio__382->SetBinContent(14,0.9608114);
   data_mc_ratio__382->SetBinContent(15,0.9025985);
   data_mc_ratio__382->SetBinContent(16,1.074644);
   data_mc_ratio__382->SetBinContent(17,1.174605);
   data_mc_ratio__382->SetBinContent(18,0.6860828);
   data_mc_ratio__382->SetBinContent(19,1.319344);
   data_mc_ratio__382->SetBinContent(20,1.434074);
   data_mc_ratio__382->SetBinContent(21,1.133085);
   data_mc_ratio__382->SetBinContent(22,1.59964);
   data_mc_ratio__382->SetBinContent(23,2.480937);
   data_mc_ratio__382->SetBinContent(24,7.474689);
   data_mc_ratio__382->SetBinContent(25,3.353199);
   data_mc_ratio__382->SetBinContent(26,9.92297);
   data_mc_ratio__382->SetBinContent(27,1.955781);
   data_mc_ratio__382->SetBinContent(28,5.52504);
   data_mc_ratio__382->SetBinContent(29,4.826463);
   data_mc_ratio__382->SetBinContent(30,3.06132);
   data_mc_ratio__382->SetBinContent(31,0.2703627);
   data_mc_ratio__382->SetBinError(1,0.002075265);
   data_mc_ratio__382->SetBinError(2,0.001496407);
   data_mc_ratio__382->SetBinError(3,0.001650909);
   data_mc_ratio__382->SetBinError(4,0.002030035);
   data_mc_ratio__382->SetBinError(5,0.00257887);
   data_mc_ratio__382->SetBinError(6,0.002860925);
   data_mc_ratio__382->SetBinError(7,0.00279748);
   data_mc_ratio__382->SetBinError(8,0.003984436);
   data_mc_ratio__382->SetBinError(9,0.004151191);
   data_mc_ratio__382->SetBinError(10,0.004532753);
   data_mc_ratio__382->SetBinError(11,0.005593247);
   data_mc_ratio__382->SetBinError(12,0.005334913);
   data_mc_ratio__382->SetBinError(13,0.005733672);
   data_mc_ratio__382->SetBinError(14,0.005948641);
   data_mc_ratio__382->SetBinError(15,0.006346578);
   data_mc_ratio__382->SetBinError(16,0.008782632);
   data_mc_ratio__382->SetBinError(17,0.01133205);
   data_mc_ratio__382->SetBinError(18,0.00797555);
   data_mc_ratio__382->SetBinError(19,0.01869952);
   data_mc_ratio__382->SetBinError(20,0.02513986);
   data_mc_ratio__382->SetBinError(21,0.02592661);
   data_mc_ratio__382->SetBinError(22,0.04672599);
   data_mc_ratio__382->SetBinError(23,0.09157307);
   data_mc_ratio__382->SetBinError(24,0.3531458);
   data_mc_ratio__382->SetBinError(25,0.182932);
   data_mc_ratio__382->SetBinError(26,0.6405249);
   data_mc_ratio__382->SetBinError(27,0.1602238);
   data_mc_ratio__382->SetBinError(28,0.5417748);
   data_mc_ratio__382->SetBinError(29,0.5500265);
   data_mc_ratio__382->SetBinError(30,0.4465394);
   data_mc_ratio__382->SetBinError(31,0.259473);
   data_mc_ratio__382->SetMinimum(0.4);
   data_mc_ratio__382->SetMaximum(1.6);
   data_mc_ratio__382->SetEntries(100.6913);
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
   0.01862373,
   0.01723916,
   0.02184995,
   0.02934132,
   0.03505762,
   0.04529583,
   0.1802455,
   0.05002918,
   0.05609256,
   0.0625146,
   0.06307182,
   0.08151215,
   0.07991871,
   0.0879888,
   0.09941401,
   0.121194,
   0.1434563,
   0.2082291,
   0.2244211,
   0.2886722,
   0.3206923,
   0.5167217,
   0.2531425,
   0.2274272,
   0.4573921,
   0.2653537,
   0.475033,
   0.5438876,
   0.6396528,
   0.666114};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1278,Graph_from_mc_statistical_error_fy1278,Graph_from_mc_statistical_error_fex1278,Graph_from_mc_statistical_error_fey1278);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1278 = new TH1F("Graph_Graph_from_mc_statistical_error1278","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1278->SetMinimum(0.2006632);
   Graph_Graph_from_mc_statistical_error1278->SetMaximum(1.799337);
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
