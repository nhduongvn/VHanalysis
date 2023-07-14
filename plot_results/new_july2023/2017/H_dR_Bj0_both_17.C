void H_dR_Bj0_both_17()
{
//=========Macro generated from canvas: H_dR_Bj0_both_17/H_dR_Bj0_both_17
//=========  (Fri Jul 14 13:38:51 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_both_17 = new TCanvas("H_dR_Bj0_both_17", "H_dR_Bj0_both_17",0,0,600,600);
   H_dR_Bj0_both_17->SetHighLightColor(2);
   H_dR_Bj0_both_17->Range(0,0,1,1);
   H_dR_Bj0_both_17->SetFillColor(0);
   H_dR_Bj0_both_17->SetFillStyle(4000);
   H_dR_Bj0_both_17->SetBorderMode(0);
   H_dR_Bj0_both_17->SetBorderSize(2);
   H_dR_Bj0_both_17->SetFrameFillStyle(1000);
   H_dR_Bj0_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-614.9972,6.314516,614392.2);
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
   st->SetMaximum(526563.3);
   
   TH1F *st_stack_234 = new TH1F("st_stack_234","",30,0,6);
   st_stack_234->SetMinimum(0.01);
   st_stack_234->SetMaximum(552891.4);
   st_stack_234->SetDirectory(0);
   st_stack_234->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_234->SetLineColor(ci);
   st_stack_234->GetXaxis()->SetRange(1,30);
   st_stack_234->GetXaxis()->SetLabelFont(42);
   st_stack_234->GetXaxis()->SetLabelSize(0.035);
   st_stack_234->GetXaxis()->SetTitleSize(0.035);
   st_stack_234->GetXaxis()->SetTitleFont(42);
   st_stack_234->GetYaxis()->SetTitle("Events/0.2");
   st_stack_234->GetYaxis()->SetLabelFont(42);
   st_stack_234->GetYaxis()->SetLabelSize(0.05);
   st_stack_234->GetYaxis()->SetTitleSize(0.057);
   st_stack_234->GetYaxis()->SetTitleOffset(1.2);
   st_stack_234->GetYaxis()->SetTitleFont(42);
   st_stack_234->GetZaxis()->SetLabelFont(42);
   st_stack_234->GetZaxis()->SetLabelSize(0.035);
   st_stack_234->GetZaxis()->SetTitleSize(0.035);
   st_stack_234->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_234);
   
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(1,67252.95);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(2,189605);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(3,192847.6);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(4,155063);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(5,125888.6);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(6,103146.5);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(7,77128.76);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(8,93129.79);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(9,61144.75);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(10,55167.08);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(11,54331.17);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(12,49273.23);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(13,46817.41);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(14,48682.13);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(15,43398.62);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(16,37916.53);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(17,29491.01);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(18,21154.67);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(19,18606.99);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(20,15186.02);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(21,8080.916);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(22,6064.389);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(23,3989.955);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(24,2820.173);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(25,1638.426);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(26,1428.867);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(27,370.16);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(28,477.0592);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(29,732.2972);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(30,42.12726);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(31,326.4897);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(1,1878.95);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(2,4546.424);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(3,15265.55);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(4,15105.53);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(5,15039.11);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(6,4596.716);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(7,3347.083);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(8,15051.22);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(9,3221.108);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(10,2913.851);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(11,3300.388);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(12,2299.405);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(13,2225.543);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(14,2590.233);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(15,2966.387);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(16,1849.149);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(17,1739.487);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(18,1785.101);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(19,1808.131);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(20,1746.851);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(21,755.667);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(22,739.6386);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(23,479.3045);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(24,462.709);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(25,279.2784);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(26,369.3642);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(27,73.98601);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(28,255.2608);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(29,358.0348);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(30,17.31648);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(31,251.3669);
   VbbHcc_both_H_dR_Bj0_stack_1->SetEntries(166831);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(1,601.368);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(2,2167.652);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(3,2349.616);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(4,1913.562);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(5,1471.981);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(6,1178.958);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(7,1043.457);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(8,912.9754);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(9,805.9167);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(10,747.8169);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(11,681.0575);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(12,629.0831);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(13,611.2814);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(14,587.236);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(15,561.1085);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(16,510.6249);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(17,363.9704);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(18,260.8062);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(19,200.8873);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(20,155.8699);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(21,109.4249);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(22,78.17);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(23,51.60402);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(24,32.95364);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(25,22.65734);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(26,13.79024);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(27,7.796183);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(28,3.902074);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(29,1.678548);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(30,0.6333118);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(31,2.951882);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(1,10.36176);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(2,19.26667);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(3,19.69936);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(4,17.7114);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(5,15.47257);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(6,13.74148);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(7,12.99357);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(8,12.16084);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(9,11.28182);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(10,10.78604);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(11,10.19303);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(12,9.705574);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(13,9.547688);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(14,9.389823);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(15,8.987454);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(16,8.512058);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(17,6.891732);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(18,5.471143);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(19,4.862119);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(20,4.283457);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(21,3.451047);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(22,2.903998);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(23,2.195109);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(24,1.766323);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(25,1.473245);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(26,1.060347);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(27,0.9107858);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(28,0.6439426);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(29,0.4402214);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(30,0.1758806);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(31,0.6078251);
   VbbHcc_both_H_dR_Bj0_stack_2->SetEntries(217888);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_3 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(1,7437.962);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(2,31560.56);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(3,39280.38);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(4,34361.64);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(5,27778.45);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(6,22742.88);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(7,19467.5);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(8,16905.6);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(9,14950.68);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(10,13415.06);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(11,12101.82);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(12,11065.83);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(13,10164.58);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(14,9527.787);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(15,8893.013);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(16,8140.566);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(17,5554.514);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(18,3974.418);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(19,2837.79);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(20,2044.279);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(21,1436.448);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(22,972.5247);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(23,657.8505);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(24,433.9618);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(25,280.22);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(26,166.258);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(27,97.39998);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(28,56.36954);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(29,33.20689);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(30,19.45223);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(31,35.84675);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(1,22.04058);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(2,45.44486);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(3,50.8339);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(4,47.66206);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(5,42.91736);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(6,38.85844);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(7,35.95477);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(8,33.50964);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(9,31.4995);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(10,29.84216);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(11,28.32863);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(12,27.08394);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(13,25.9456);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(14,25.1158);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(15,24.2686);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(16,23.19271);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(17,19.13582);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(18,16.16638);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(19,13.63156);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(20,11.56063);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(21,9.671336);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(22,7.946991);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(23,6.525686);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(24,5.305562);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(25,4.259081);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(26,3.28895);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(27,2.514013);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(28,1.91431);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(29,1.47881);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(30,1.122806);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(31,1.532192);
   VbbHcc_both_H_dR_Bj0_stack_3->SetEntries(4843140);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_4 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(1,511.131);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(2,1429.553);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(3,1503.304);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(4,1198.69);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(5,1008.943);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(6,861.5328);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(7,691.1655);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(8,593.6013);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(9,546.866);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(10,469.2245);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(11,483.3607);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(12,440.0464);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(13,403.4314);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(14,386.7189);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(15,363.0637);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(16,335.549);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(17,237.5753);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(18,161.3507);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(19,119.3526);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(20,95.80357);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(21,65.83064);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(22,51.96859);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(23,34.39933);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(24,18.59602);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(25,12.96487);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(26,11.80821);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(27,3.384296);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(28,2.145681);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(29,1.135576);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(30,0.5826666);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(31,0.3243994);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(1,10.32997);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(2,20.72787);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(3,24.93398);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(4,23.2091);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(5,22.06711);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(6,20.35908);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(7,16.86265);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(8,15.76918);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(9,16.4798);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(10,13.58949);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(11,15.43243);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(12,13.63306);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(13,10.70724);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(14,12.0522);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(15,11.23233);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(16,10.33259);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(17,9.54585);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(18,8.333865);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(19,5.390312);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(20,7.175871);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(21,5.686368);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(22,6.099529);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(23,3.715061);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(24,1.791619);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(25,1.667264);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(26,1.671427);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(27,0.7454995);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(28,0.602648);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(29,0.434268);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(30,0.3787032);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(31,0.1648749);
   VbbHcc_both_H_dR_Bj0_stack_4->SetEntries(99118);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_5 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(1,313.1575);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(2,920.1672);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(3,918.9368);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(4,733.2483);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(5,529.0382);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(6,465.0931);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(7,342.7095);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(8,376.1339);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(9,292.2666);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(10,252.1996);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(11,220.6135);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(12,233.9172);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(13,201.2294);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(14,208.1573);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(15,166.3129);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(16,169.7034);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(17,115.196);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(18,88.69129);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(19,53.16935);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(20,44.74018);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(21,24.85338);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(22,27.89893);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(23,12.99369);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(24,9.307314);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(25,16.17631);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(26,2.576187);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(27,2.172469);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(28,1.054114);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(29,0.4771727);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(30,1.956047);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(31,0.1763629);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(1,11.22518);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(2,29.30769);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(3,30.34696);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(4,35.42281);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(5,25.59077);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(6,25.04943);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(7,17.39898);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(8,25.58435);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(9,20.81855);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(10,16.7968);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(11,13.64477);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(12,16.7732);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(13,13.26145);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(14,15.95767);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(15,10.59337);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(16,12.41971);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(17,12.89064);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(18,6.596785);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(19,4.643147);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(20,4.603928);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(21,2.911716);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(22,7.207452);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(23,1.786459);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(24,2.178845);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(25,7.080044);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(26,0.6486803);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(27,0.6730805);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(28,0.3683312);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(29,0.1818512);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(30,1.211041);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(31,0.1763629);
   VbbHcc_both_H_dR_Bj0_stack_5->SetEntries(45557);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_6 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(1,2.822612);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(2,5.645224);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(3,6.854915);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(4,3.629073);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(5,3.024227);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(6,1.209691);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(7,3.024227);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(8,3.225842);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(9,2.620997);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(10,1.209691);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(11,1.411306);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(12,1.008076);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(13,1.008076);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(14,0.8064606);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(15,0.8064606);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(16,0.8064606);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(17,0.8064606);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(18,0.2016151);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(19,0.6048454);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(23,0.2016151);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(25,0.2016151);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(1,0.7543748);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(2,1.066847);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(3,1.175608);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(4,0.8553806);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(5,0.7808521);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(6,0.4938542);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(7,0.7808521);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(8,0.8064606);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(9,0.7269337);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(10,0.4938542);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(11,0.5334235);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(12,0.4508252);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(13,0.4508252);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(14,0.4032303);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(15,0.4032303);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(16,0.4032303);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(17,0.4032303);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(18,0.2016151);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(19,0.3492077);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(23,0.2016151);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(25,0.2016151);
   VbbHcc_both_H_dR_Bj0_stack_6->SetEntries(204);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_7 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(1,4.208858);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(2,16.98057);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(3,12.77171);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(4,9.723913);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(5,6.67612);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(6,4.499124);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(7,4.644257);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(8,3.628326);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(9,3.047794);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(10,2.757528);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(11,3.483193);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(12,2.467262);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(13,3.192927);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(14,2.176996);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(15,2.902661);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(16,3.192927);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(17,1.306197);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(18,0.8707982);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(19,0.4353991);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(20,0.2902661);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(21,0.4353991);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(23,0.145133);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(27,0.145133);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(1,0.7815653);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(2,1.569854);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(3,1.361469);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(4,1.187965);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(5,0.9843401);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(6,0.8080666);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(7,0.8209964);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(8,0.7256652);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(9,0.6650831);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(10,0.6326202);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(11,0.7110038);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(12,0.5983988);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(13,0.6807343);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(14,0.5620978);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(15,0.6490547);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(16,0.6807343);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(17,0.4353991);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(18,0.3555019);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(19,0.2513778);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(20,0.2052491);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(21,0.2513778);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(23,0.145133);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(27,0.145133);
   VbbHcc_both_H_dR_Bj0_stack_7->SetEntries(620);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_8 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(1,5.416419);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(2,15.12862);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(3,14.19475);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(4,9.7122);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(5,4.669327);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(6,4.8561);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(7,5.603192);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(8,3.922234);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(9,2.801596);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(10,3.548688);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(11,3.548688);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(12,2.614823);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(13,2.614823);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(14,1.494185);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(15,1.680958);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(16,3.361915);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(17,2.42805);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(18,0.9338654);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(19,0.7470923);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(24,0.3735461);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(25,0.1867731);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(1,1.005804);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(2,1.680958);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(3,1.62825);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(4,1.34684);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(5,0.9338654);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(6,0.9523595);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(7,1.022998);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(8,0.8559017);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(9,0.723369);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(10,0.8141249);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(11,0.8141249);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(12,0.6988408);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(13,0.6988408);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(14,0.528274);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(15,0.5603192);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(16,0.792411);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(17,0.6734199);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(18,0.4176373);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(19,0.3735461);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(24,0.264137);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(25,0.1867731);
   VbbHcc_both_H_dR_Bj0_stack_8->SetEntries(481);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_9 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(1,3.034805);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(2,11.05871);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(3,10.41589);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(4,6.941772);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(5,4.777516);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(6,3.627553);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(7,3.059031);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(8,2.736008);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(9,2.534118);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(10,2.280545);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(11,2.07704);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(12,1.978518);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(13,1.741096);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(14,1.779859);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(15,1.65388);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(16,1.427763);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(17,0.9432283);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(18,0.6121293);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(19,0.3537106);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(20,0.2713396);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(21,0.166357);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(22,0.1033675);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(23,0.07429538);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(24,0.05168374);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(25,0.02745699);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(26,0.01776629);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(27,0.01292094);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(28,0.003230234);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(29,0.003230234);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(31,0.003230234);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(1,0.07001117);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(2,0.1336454);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(3,0.129703);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(4,0.1058857);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(5,0.08784217);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(6,0.07654359);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(7,0.07029006);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(8,0.06647535);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(9,0.06397576);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(10,0.06069058);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(11,0.05791945);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(12,0.05652909);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(13,0.05302899);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(14,0.05361604);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(15,0.05168374);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(16,0.04802088);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(17,0.03903106);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(18,0.03144297);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(19,0.02390155);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(20,0.02093431);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(21,0.01639165);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(22,0.01292094);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(23,0.01095426);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(24,0.009136481);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(25,0.006659297);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(26,0.005356737);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(27,0.00456824);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(28,0.00228412);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(29,0.00228412);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(31,0.00228412);
   VbbHcc_both_H_dR_Bj0_stack_9->SetEntries(39482);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_10 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(1,2.416023);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(2,8.641625);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(3,8.844377);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(4,6.413428);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(5,4.457225);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(6,3.404076);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(7,2.908184);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(8,2.567776);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(9,2.353);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(10,2.066908);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(11,1.902302);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(12,1.816889);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(13,1.719867);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(14,1.640673);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(15,1.544065);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(16,1.349606);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(17,0.866982);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(18,0.6273284);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(19,0.4158694);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(20,0.295628);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(21,0.1952886);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(22,0.1471921);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(23,0.1115343);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(24,0.06509621);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(25,0.0389748);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(26,0.03192617);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(27,0.01368264);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(28,0.007048634);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(29,0.005390132);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(30,0.004146255);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(31,0.004146255);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(1,0.03165035);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(2,0.05985849);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(3,0.06055662);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(4,0.05156715);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(5,0.04298929);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(6,0.03756883);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(7,0.03472473);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(8,0.03262921);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(9,0.03123482);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(10,0.02927444);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(11,0.02808457);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(12,0.02744683);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(13,0.02670394);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(14,0.02608189);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(15,0.02530235);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(16,0.02365547);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(17,0.01895977);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(18,0.01612781);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(19,0.01313126);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(20,0.01107136);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(21,0.008998425);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(22,0.007812144);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(23,0.006800364);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(24,0.005195243);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(25,0.004019944);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(26,0.003638324);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(27,0.002381842);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(28,0.001709545);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(29,0.001494954);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(30,0.001311161);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(31,0.001311161);
   VbbHcc_both_H_dR_Bj0_stack_10->SetEntries(137175);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_11 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(1,0.04740753);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(2,0.3255317);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(3,0.3602973);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(4,0.2338772);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(5,0.1959511);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(6,0.1090373);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(7,0.08691381);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(8,0.06321005);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(9,0.04424703);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(10,0.04424703);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(11,0.04898779);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(12,0.04266678);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(13,0.02844452);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(14,0.03792603);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(15,0.03476553);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(16,0.02370377);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(17,0.01580251);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(18,0.01422226);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(19,0.004740753);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(20,0.004740753);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(21,0.001580251);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(22,0.001580251);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(23,0.001580251);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(24,0.003160502);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(1,0.008655392);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(2,0.02268087);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(3,0.02386127);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(4,0.01922458);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(5,0.01759693);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(6,0.01312655);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(7,0.01171946);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(8,0.009994386);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(9,0.008361903);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(10,0.008361903);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(11,0.008798466);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(12,0.008211226);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(13,0.006704438);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(14,0.007741618);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(15,0.007412035);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(16,0.006120286);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(17,0.004997193);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(18,0.004740753);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(19,0.002737075);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(20,0.002737075);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(21,0.001580251);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(22,0.001580251);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(23,0.001580251);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(24,0.002234813);
   VbbHcc_both_H_dR_Bj0_stack_11->SetEntries(1123);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_12 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(1,0.01909972);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(2,0.1297535);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(3,0.1650465);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(4,0.1378502);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(5,0.09259212);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(6,0.06705663);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(7,0.04546564);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(8,0.03363212);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(9,0.02989521);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(10,0.02615831);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(11,0.02325183);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(12,0.01930733);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(13,0.01640085);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(14,0.01702366);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(15,0.01245634);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(16,0.01266394);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(17,0.008511832);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(18,0.005605353);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(19,0.003944507);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(20,0.003529296);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(21,0.00332169);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(22,0.0008304226);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(23,0.001660845);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(24,0.0008304226);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(25,0.0004152113);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(26,0.0004152113);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(1,0.001991283);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(2,0.005190141);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(3,0.005853596);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(4,0.005349624);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(5,0.004384364);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(6,0.003731131);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(7,0.003072283);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(8,0.002642389);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(9,0.002491268);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(10,0.002330368);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(11,0.002197092);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(12,0.002002076);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(13,0.001845239);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(14,0.001879949);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(15,0.001608106);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(16,0.001621452);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(17,0.001329325);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(18,0.001078751);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(19,0.0009049321);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(20,0.00085598);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(21,0.0008304226);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(22,0.0004152113);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(23,0.0005871975);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(24,0.0004152113);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(25,0.0002935987);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(26,0.0002935987);
   VbbHcc_both_H_dR_Bj0_stack_12->SetEntries(4223);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR_Bj0__467 = new TH1D("VbbHcc_both_H_dR_Bj0__467","",30,0,6);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(1,25075);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(2,68815);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(3,68461);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(4,55357);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(5,45753);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(6,38913);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(7,33276);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(8,28816);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(9,25644);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(10,23181);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(11,21188);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(12,19440);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(13,18180);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(14,17471);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(15,16755);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(16,15501);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(17,11018);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(18,7955);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(19,6107);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(20,4503);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(21,3426);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(22,2448);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(23,1715);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(24,1156);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(25,718);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(26,510);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(27,285);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(28,155);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(29,81);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(30,42);
   VbbHcc_both_H_dR_Bj0__467->SetBinContent(31,71);
   VbbHcc_both_H_dR_Bj0__467->SetEntries(562016);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0__467->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0__467->SetLineWidth(2);
   VbbHcc_both_H_dR_Bj0__467->SetMarkerStyle(20);
   VbbHcc_both_H_dR_Bj0__467->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_Bj0__467->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0__467->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__467->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__467->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__467->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__467->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__467->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__467->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__467->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0__467->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__467->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__467->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__467->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__467->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__467->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fx1467[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fy1467[30] = {
   76134.54,
   225740.8,
   236953.5,
   193306.9,
   156700.9,
   128412.7,
   98692.96,
   111934.3,
   77753.91,
   70063.31,
   67830.52,
   61652.06,
   58208.26,
   59399.98,
   53390.75,
   47083.15,
   35768.64,
   25643.2,
   21820.75,
   17527.58,
   9718.275,
   7195.205,
   4747.338,
   3315.486,
   1970.9,
   1623.35,
   481.0846,
   540.5409,
   768.804,
   64.75567};
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fex1467[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fey1467[30] = {
   1879.17,
   4546.835,
   15265.7,
   15105.67,
   15039.21,
   4597.014,
   3347.389,
   15051.29,
   3221.391,
   2914.104,
   3300.59,
   2299.687,
   2225.78,
   2590.45,
   2966.54,
   1849.385,
   1739.68,
   1785.215,
   1808.203,
   1746.916,
   755.7638,
   739.7472,
   479.3718,
   462.7515,
   279.4095,
   369.3847,
   74.04127,
   255.2698,
   358.0384,
   17.40006};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_Bj0_fx1467,Graph_from_VbbHcc_both_H_dR_Bj0_fy1467,Graph_from_VbbHcc_both_H_dR_Bj0_fex1467,Graph_from_VbbHcc_both_H_dR_Bj0_fey1467);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_Bj01467 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_Bj01467","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->SetMinimum(42.62004);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->SetMaximum(277436.4);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_Bj01467);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR_Bj0","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj0_both_17->cd();
  
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
   
   TH1D *data_mc_ratio__468 = new TH1D("data_mc_ratio__468","",30,0,6);
   data_mc_ratio__468->SetBinContent(1,0.3293512);
   data_mc_ratio__468->SetBinContent(2,0.3048407);
   data_mc_ratio__468->SetBinContent(3,0.2889217);
   data_mc_ratio__468->SetBinContent(4,0.2863685);
   data_mc_ratio__468->SetBinContent(5,0.2919766);
   data_mc_ratio__468->SetBinContent(6,0.3030308);
   data_mc_ratio__468->SetBinContent(7,0.3371669);
   data_mc_ratio__468->SetBinContent(8,0.2574368);
   data_mc_ratio__468->SetBinContent(9,0.3298098);
   data_mc_ratio__468->SetBinContent(10,0.3308579);
   data_mc_ratio__468->SetBinContent(11,0.3123668);
   data_mc_ratio__468->SetBinContent(12,0.3153179);
   data_mc_ratio__468->SetBinContent(13,0.3123268);
   data_mc_ratio__468->SetBinContent(14,0.2941247);
   data_mc_ratio__468->SetBinContent(15,0.3138184);
   data_mc_ratio__468->SetBinContent(16,0.3292261);
   data_mc_ratio__468->SetBinContent(17,0.3080352);
   data_mc_ratio__468->SetBinContent(18,0.3102187);
   data_mc_ratio__468->SetBinContent(19,0.2798712);
   data_mc_ratio__468->SetBinContent(20,0.2569094);
   data_mc_ratio__468->SetBinContent(21,0.3525317);
   data_mc_ratio__468->SetBinContent(22,0.3402266);
   data_mc_ratio__468->SetBinContent(23,0.3612551);
   data_mc_ratio__468->SetBinContent(24,0.3486668);
   data_mc_ratio__468->SetBinContent(25,0.3643006);
   data_mc_ratio__468->SetBinContent(26,0.3141652);
   data_mc_ratio__468->SetBinContent(27,0.5924113);
   data_mc_ratio__468->SetBinContent(28,0.2867498);
   data_mc_ratio__468->SetBinContent(29,0.1053584);
   data_mc_ratio__468->SetBinContent(30,0.6485919);
   data_mc_ratio__468->SetBinContent(31,0.194097);
   data_mc_ratio__468->SetBinError(1,0.002079882);
   data_mc_ratio__468->SetBinError(2,0.001162068);
   data_mc_ratio__468->SetBinError(3,0.001104227);
   data_mc_ratio__468->SetBinError(4,0.001217135);
   data_mc_ratio__468->SetBinError(5,0.001365017);
   data_mc_ratio__468->SetBinError(6,0.00153617);
   data_mc_ratio__468->SetBinError(7,0.001848329);
   data_mc_ratio__468->SetBinError(8,0.00151654);
   data_mc_ratio__468->SetBinError(9,0.002059542);
   data_mc_ratio__468->SetBinError(10,0.002173078);
   data_mc_ratio__468->SetBinError(11,0.002145951);
   data_mc_ratio__468->SetBinError(12,0.002261521);
   data_mc_ratio__468->SetBinError(13,0.002316393);
   data_mc_ratio__468->SetBinError(14,0.002225218);
   data_mc_ratio__468->SetBinError(15,0.002424411);
   data_mc_ratio__468->SetBinError(16,0.002644322);
   data_mc_ratio__468->SetBinError(17,0.0029346);
   data_mc_ratio__468->SetBinError(18,0.003478147);
   data_mc_ratio__468->SetBinError(19,0.003581329);
   data_mc_ratio__468->SetBinError(20,0.003828503);
   data_mc_ratio__468->SetBinError(21,0.006022884);
   data_mc_ratio__468->SetBinError(22,0.006876423);
   data_mc_ratio__468->SetBinError(23,0.008723321);
   data_mc_ratio__468->SetBinError(24,0.01025491);
   data_mc_ratio__468->SetBinError(25,0.01359558);
   data_mc_ratio__468->SetBinError(26,0.01391147);
   data_mc_ratio__468->SetBinError(27,0.03509142);
   data_mc_ratio__468->SetBinError(28,0.0230323);
   data_mc_ratio__468->SetBinError(29,0.01170649);
   data_mc_ratio__468->SetBinError(30,0.1000799);
   data_mc_ratio__468->SetBinError(31,0.1353564);
   data_mc_ratio__468->SetMinimum(0.4);
   data_mc_ratio__468->SetMaximum(1.6);
   data_mc_ratio__468->SetEntries(1043.645);
   data_mc_ratio__468->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__468->SetLineColor(ci);
   data_mc_ratio__468->SetLineWidth(2);
   data_mc_ratio__468->SetMarkerStyle(20);
   data_mc_ratio__468->SetMarkerSize(1.2);
   data_mc_ratio__468->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__468->GetXaxis()->SetRange(1,30);
   data_mc_ratio__468->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__468->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__468->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__468->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__468->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__468->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__468->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__468->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__468->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__468->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__468->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__468->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__468->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__468->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__468->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__468->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__468->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1468[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1468[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1468[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1468[30] = {
   0.02468223,
   0.02014183,
   0.06442489,
   0.07814348,
   0.09597398,
   0.03579875,
   0.0339172,
   0.1344655,
   0.0414306,
   0.04159244,
   0.04865937,
   0.03730106,
   0.03823822,
   0.04361028,
   0.05556281,
   0.03927912,
   0.04863702,
   0.06961747,
   0.08286618,
   0.09966668,
   0.07776728,
   0.1028111,
   0.100977,
   0.1395727,
   0.1417675,
   0.2275447,
   0.1539049,
   0.4722488,
   0.4657083,
   0.2687033};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1468,Graph_from_mc_statistical_error_fy1468,Graph_from_mc_statistical_error_fex1468,Graph_from_mc_statistical_error_fey1468);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1468 = new TH1F("Graph_Graph_from_mc_statistical_error1468","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1468->SetMinimum(0.4333014);
   Graph_Graph_from_mc_statistical_error1468->SetMaximum(1.566699);
   Graph_Graph_from_mc_statistical_error1468->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1468->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1468->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1468->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1468->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1468->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1468->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1468->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1468->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1468->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1468);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_both_17->cd();
   H_dR_Bj0_both_17->Modified();
   H_dR_Bj0_both_17->cd();
   H_dR_Bj0_both_17->SetSelected(H_dR_Bj0_both_17);
}
