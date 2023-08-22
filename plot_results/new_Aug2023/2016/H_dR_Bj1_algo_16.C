void H_dR_Bj1_algo_16()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_16/H_dR_Bj1_algo_16
//=========  (Tue Aug 22 09:21:45 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_algo_16 = new TCanvas("H_dR_Bj1_algo_16", "H_dR_Bj1_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_algo_16->SetHighLightColor(2);
   H_dR_Bj1_algo_16->Range(0,0,1,1);
   H_dR_Bj1_algo_16->SetFillColor(0);
   H_dR_Bj1_algo_16->SetFillStyle(4000);
   H_dR_Bj1_algo_16->SetBorderMode(0);
   H_dR_Bj1_algo_16->SetBorderSize(2);
   H_dR_Bj1_algo_16->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-893.4344,6.314516,892550.9);
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
   st->SetMaximum(764958.5);
   
   TH1F *st_stack_141 = new TH1F("st_stack_141","",30,0,6);
   st_stack_141->SetMinimum(0.01);
   st_stack_141->SetMaximum(803206.5);
   st_stack_141->SetDirectory(0);
   st_stack_141->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_141->SetLineColor(ci);
   st_stack_141->GetXaxis()->SetRange(1,30);
   st_stack_141->GetXaxis()->SetLabelFont(42);
   st_stack_141->GetXaxis()->SetLabelSize(0.035);
   st_stack_141->GetXaxis()->SetTitleSize(0.035);
   st_stack_141->GetXaxis()->SetTitleFont(42);
   st_stack_141->GetYaxis()->SetTitle("Events/0.2");
   st_stack_141->GetYaxis()->SetLabelFont(42);
   st_stack_141->GetYaxis()->SetLabelSize(0.05);
   st_stack_141->GetYaxis()->SetTitleSize(0.057);
   st_stack_141->GetYaxis()->SetTitleOffset(1.2);
   st_stack_141->GetYaxis()->SetTitleFont(42);
   st_stack_141->GetZaxis()->SetLabelFont(42);
   st_stack_141->GetZaxis()->SetLabelSize(0.035);
   st_stack_141->GetZaxis()->SetTitleSize(0.035);
   st_stack_141->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_141);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(1,26.07926);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,74374.36);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,158437.7);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,195119.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,267808.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,303874.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,250382.9);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,229711.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,247223.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,190688.6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,187228.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,161128.1);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,166936.9);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,152135.7);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,128176.2);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,125910.5);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,116303.8);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,88787.57);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,74942.12);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,64174.65);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(21,50333.6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(22,32357.46);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(23,32740.44);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(24,29044.84);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(25,18687.97);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(26,14377.97);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(27,8328.223);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(28,5009.558);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(29,3905.187);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(30,2639.013);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(31,3353.812);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(1,26.07926);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,5764.997);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,7660.922);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,8758.416);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,10901.43);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,23908.54);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,9761.735);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,9813.849);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,23456.02);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,8267.739);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,22653.79);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,7672.077);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,22512.76);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,7565.692);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,6367.878);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,6652.667);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,6793.971);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,5854.058);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,4779.867);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,5251.548);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(21,3996.23);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(22,2486.088);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(23,2942.178);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(24,3923.694);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(25,2743.857);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(26,1772.514);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(27,1227.326);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(28,900.8027);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(29,938.3735);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(30,1557.255);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(31,1618.338);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(121336);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(1,0.4219926);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,451.5368);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,1384.683);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,1900.258);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,2147.845);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,2099.274);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,1952.985);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,1762.787);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,1575.907);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,1393.773);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,1269.924);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,1124.685);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,1019.908);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,962.9598);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,871.5001);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,826.306);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,741.1395);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,662.0409);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,576.2375);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,473.5595);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,388.3035);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(22,304.315);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(23,232.8907);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(24,178.453);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(25,127.8831);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(26,91.17219);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(27,66.94576);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(28,39.10818);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(29,21.48143);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(30,11.77336);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(31,19.64095);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(1,0.285443);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,8.41975);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,14.50819);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,16.67919);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,17.54682);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,17.04833);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,16.32654);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,15.51668);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,14.60343);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,13.70491);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,13.1821);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,12.15998);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,11.59441);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,11.13318);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,10.66947);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,10.39973);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,9.878697);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,9.354321);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,8.798198);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,7.889399);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,7.170596);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(22,6.337268);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(23,5.520079);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(24,4.795773);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(25,3.976025);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(26,3.437649);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(27,3.039952);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(28,2.141997);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(29,1.535049);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(30,1.135907);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(31,1.454281);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(335691);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_3 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(1,8.044825);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(2,12947.42);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(3,42881.85);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(4,50854.97);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(5,45486.83);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(6,36402.63);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(7,29175.4);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(8,23739.77);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(9,19639.3);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(10,16578.66);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(11,14081.51);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(12,12159.63);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(13,10931.51);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(14,10056.7);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(15,9501.069);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(16,9171.097);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(17,8556.859);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(18,8028.152);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(19,7314.192);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(20,6484.89);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(21,5679.281);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(22,4739.098);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(23,3736.552);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(24,2893.33);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(25,2090.541);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(26,1415.215);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(27,862.6127);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(28,473.8347);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(29,227.8912);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(30,116.0924);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(31,153.0724);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(1,0.7191286);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(2,29.16789);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(3,53.3899);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(4,58.1233);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(5,54.78591);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(6,48.7847);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(7,43.50559);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(8,39.13075);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(9,35.50951);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(10,32.58545);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(11,30.01623);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(12,27.86397);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(13,26.41066);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(14,25.34869);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(15,24.65879);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(16,24.24554);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(17,23.44909);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(18,22.74527);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(19,21.73031);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(20,20.49215);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(21,19.18903);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(22,17.552);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(23,15.59978);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(24,13.72318);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(25,11.65606);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(26,9.578666);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(27,7.463317);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(28,5.507571);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(29,3.77883);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(30,2.676983);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(31,3.085421);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetEntries(6260583);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_4 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(1,0.3298479);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(2,324.1111);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(3,957.7206);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(4,1093.726);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(5,1338.98);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(6,1270.618);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(7,1123.001);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(8,1046.649);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(9,931.1673);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(10,855.6537);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(11,773.0765);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(12,716.3032);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(13,652.7624);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(14,618.0884);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(15,556.1625);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(16,505.7141);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(17,447.4947);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(18,410.0721);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(19,327.2762);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(20,314.6798);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(21,215.7827);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(22,177.6822);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(23,141.9852);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(24,113.0194);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(25,89.74738);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(26,50.07418);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(27,36.91622);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(28,23.13482);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(29,16.23641);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(30,5.757461);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(31,13.18269);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(1,0.3298479);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(2,12.23083);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(3,26.38525);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(4,31.1056);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(5,36.4314);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(6,33.58832);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(7,30.41506);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(8,27.86123);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(9,24.85737);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(10,24.80102);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(11,22.0338);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(12,20.42694);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(13,19.67765);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(14,19.10001);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(15,17.05531);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(16,16.56343);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(17,15.47822);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(18,16.97322);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(19,13.25338);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(20,16.20677);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(21,11.47378);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(22,11.15973);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(23,9.72882);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(24,8.871129);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(25,7.799618);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(26,3.882336);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(27,4.032892);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(28,2.116128);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(29,3.519881);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(30,1.086143);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(31,4.077996);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetEntries(90522);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_5 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(2,210.0352);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(3,430.0199);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(4,472.7596);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(5,553.4912);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(6,550.9793);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(7,523.655);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(8,532.2083);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(9,552.7957);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(10,389.5902);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(11,454.8546);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(12,360.3478);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(13,354.7597);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(14,349.709);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(15,344.4071);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(16,274.0311);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(17,296.0682);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(18,220.1252);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(19,197.3129);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(20,175.3037);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(21,130.4248);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(22,124.2684);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(23,96.45062);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(24,54.22546);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(25,40.6836);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(26,22.76886);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(27,14.7481);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(28,14.96393);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(29,12.93373);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(30,4.161697);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(31,17.26354);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(2,22.14638);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(3,27.62857);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(4,37.36986);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(5,36.79319);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(6,32.71685);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(7,33.85103);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(8,36.90793);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(9,35.31608);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(10,20.66387);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(11,27.51503);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(12,23.56937);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(13,21.14961);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(14,23.34885);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(15,24.19992);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(16,16.2698);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(17,25.60313);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(18,18.37849);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(19,18.12946);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(20,19.2094);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(21,12.4829);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(22,17.27198);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(23,15.44968);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(24,8.463379);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(25,8.000693);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(26,2.421382);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(27,1.706781);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(28,2.743414);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(29,2.856134);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(30,1.20904);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(31,10.1929);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetEntries(66273);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_6 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(2,2.417789);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(3,8.311149);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(4,6.044472);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(5,5.440025);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(6,3.022236);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(7,4.533354);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(8,5.89336);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(9,4.382242);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(10,3.475571);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(11,3.32446);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(12,3.626683);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(13,3.475571);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(14,4.835578);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(15,4.23113);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(16,2.568901);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(17,2.417789);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(18,1.813342);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(19,1.964453);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(20,1.813342);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(21,1.511118);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(22,0.755559);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(23,0.3022236);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(24,0.3022236);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(27,0.1511118);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(28,0.3022236);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(31,0.1511118);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(2,0.6044472);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(3,1.120675);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(4,0.9557149);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(5,0.9066708);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(6,0.6757925);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(7,0.8276734);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(8,0.9436929);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(9,0.8137619);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(10,0.7247067);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(11,0.7087772);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(12,0.7402936);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(13,0.7247067);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(14,0.8548174);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(15,0.7996085);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(16,0.6230499);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(17,0.6044472);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(18,0.5234666);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(19,0.5448413);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(20,0.5234666);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(21,0.4778575);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(22,0.3378963);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(23,0.2137044);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(24,0.2137044);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(27,0.1511118);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(28,0.2137044);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(31,0.1511118);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetEntries(510);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_7 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(2,6.957957);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(3,16.94599);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(4,13.24256);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(5,10.10026);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(6,7.743533);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(7,7.743533);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(8,5.611256);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(9,5.723481);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(10,5.835706);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(11,4.82568);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(12,5.386806);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(13,6.172381);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(14,4.376779);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(15,3.591204);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(16,3.927879);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(17,3.591204);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(18,3.142303);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(19,2.693403);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(20,1.010026);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(21,1.346701);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(22,1.346701);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(23,1.346701);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(24,0.8978009);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(25,1.010026);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(26,0.2244502);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(27,0.5611256);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(28,0.2244502);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(29,0.1122251);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(31,0.1122251);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(2,0.8836614);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(3,1.379045);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(4,1.219077);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(5,1.064661);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(6,0.9322118);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(7,0.9322118);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(8,0.7935514);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(9,0.8014476);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(10,0.8092668);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(11,0.7359093);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(12,0.7775184);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(13,0.8322837);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(14,0.7008456);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(15,0.6348411);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(16,0.6639327);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(17,0.6348411);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(18,0.5938395);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(19,0.5497885);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(20,0.3366753);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(21,0.3887592);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(22,0.3887592);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(23,0.3887592);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(24,0.3174206);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(25,0.3366753);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(26,0.1587103);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(27,0.250943);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(28,0.1587103);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(29,0.1122251);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(31,0.1122251);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetEntries(1121);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_8 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(2,8.247937);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(3,20.48681);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(4,19.1565);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(5,17.82619);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(6,11.44069);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(7,7.715812);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(8,9.57825);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(9,7.715813);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(10,5.853375);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(11,6.3855);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(12,6.3855);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(13,4.789125);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(14,4.789125);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(15,4.257);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(16,5.587312);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(17,5.32125);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(18,4.523062);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(19,3.19275);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(20,1.596375);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(21,1.862437);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(22,0.532125);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(23,1.596375);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(24,1.596375);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(25,0.532125);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(26,0.2660625);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(28,0.7981875);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(2,1.481373);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(3,2.334689);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(4,2.257615);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(5,2.177815);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(6,1.744688);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(7,1.43279);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(8,1.596375);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(9,1.43279);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(10,1.247944);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(11,1.303435);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(12,1.303435);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(13,1.128808);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(14,1.128808);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(15,1.06425);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(16,1.219252);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(17,1.189868);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(18,1.097004);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(19,0.9216675);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(20,0.6517174);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(21,0.7039352);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(22,0.3762692);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(23,0.6517174);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(24,0.6517174);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(25,0.3762692);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(26,0.2660625);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(28,0.4608338);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetEntries(609);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_9 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(1,0.004121852);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(2,4.932483);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(3,14.87439);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(4,15.2907);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(5,11.84895);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(6,8.058221);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(7,6.024774);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(8,4.63571);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(9,4.168567);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(10,3.592881);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(11,3.180696);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(12,2.83446);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(13,2.482729);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(14,2.386553);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(15,2.247783);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(16,2.043065);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(17,1.878191);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(18,1.618514);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(19,1.431657);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(20,1.22419);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(21,1.130761);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(22,0.9755051);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(23,0.8889462);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(24,0.7117065);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(25,0.6004165);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(26,0.419055);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(27,0.2445632);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(28,0.140143);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(29,0.05083618);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(30,0.03022692);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(31,0.02473111);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(1,0.002379753);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(2,0.08232247);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(3,0.1429569);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(4,0.1449437);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(5,0.1275926);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(6,0.1052217);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(7,0.0909821);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(8,0.0798075);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(9,0.07567962);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(10,0.07025982);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(11,0.06610688);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(12,0.0624052);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(13,0.05840503);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(14,0.0572626);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(15,0.05557287);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(16,0.05298179);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(17,0.05079903);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(18,0.04715675);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(19,0.04435117);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(20,0.04101191);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(21,0.03941587);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(22,0.03661005);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(23,0.03494808);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(24,0.03127059);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(25,0.02872182);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(26,0.02399502);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(27,0.01833079);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(28,0.01387622);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(29,0.008357416);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(30,0.0064444);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(31,0.005829179);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetEntries(72765);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_10 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(1,0.0008492557);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(2,1.353289);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(3,4.766448);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(4,5.43651);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(5,4.602117);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(6,3.242883);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(7,2.552013);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(8,2.123989);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(9,1.873458);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(10,1.70573);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(11,1.528236);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(12,1.339701);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(13,1.183438);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(14,1.10658);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(15,1.059022);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(16,0.9770687);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(17,0.9108268);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(18,0.7723981);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(19,0.670912);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(20,0.6199567);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(21,0.5133751);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(22,0.4577488);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(23,0.3579613);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(24,0.2900208);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(25,0.2080676);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(26,0.1405518);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(27,0.09978755);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(28,0.0441613);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(29,0.02760081);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(30,0.008492557);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(31,0.008492557);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(1,0.0006005145);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(2,0.02397174);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(3,0.04498851);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(4,0.04804679);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(5,0.04420619);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(6,0.0371082);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(7,0.03291893);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(8,0.03003173);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(9,0.02820501);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(10,0.02691283);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(11,0.02547413);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(12,0.02385109);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(13,0.02241697);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(14,0.02167683);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(15,0.0212059);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(16,0.02036886);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(17,0.01966628);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(18,0.01811027);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(19,0.01687862);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(20,0.01622501);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(21,0.0147646);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(22,0.01394177);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(23,0.01232884);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(24,0.01109734);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(25,0.009399538);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(26,0.007725427);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(27,0.006509422);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(28,0.004330371);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(29,0.003423459);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(30,0.001898994);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(31,0.001898994);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetEntries(94157);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_11 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(2,0.0382901);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(3,0.1449554);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(4,0.1367504);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(5,0.1203403);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(6,0.09025525);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(7,0.05743516);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(8,0.04923013);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(9,0.03282009);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(10,0.04923013);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(11,0.04923013);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(12,0.03008508);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(13,0.01641004);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(14,0.04376012);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(15,0.03008508);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(16,0.02461507);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(17,0.01641004);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(18,0.01641004);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(19,0.01367504);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(20,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(21,0.01094003);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(22,0.01094003);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(23,0.01094003);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(24,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(25,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(26,0.01367504);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(27,0.002735007);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(28,0.002735007);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(2,0.01023346);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(3,0.01991115);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(4,0.01933942);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(5,0.01814199);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(6,0.01571142);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(7,0.01253338);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(8,0.01160365);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(9,0.009474344);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(10,0.01160365);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(11,0.01160365);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(12,0.009070994);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(13,0.006699373);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(14,0.01094003);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(15,0.009070994);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(16,0.008205022);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(17,0.006699373);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(18,0.006699373);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(19,0.006115663);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(20,0.003867885);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(21,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(22,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(23,0.005470015);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(24,0.003867885);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(25,0.003867885);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(26,0.006115663);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(27,0.002735007);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(28,0.002735007);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetEntries(376);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_12 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(2,0.009288912);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(3,0.03929924);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(4,0.05466167);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(5,0.04251464);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(6,0.03965651);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(7,0.03143939);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(8,0.02465134);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(9,0.02215048);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(10,0.01857782);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(11,0.01393337);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(12,0.01393337);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(13,0.008931646);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(14,0.007859849);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(15,0.0135761);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(16,0.007145317);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(17,0.009288912);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(18,0.009288912);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(19,0.008217114);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(20,0.007502583);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(21,0.005358988);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(22,0.003572658);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(23,0.005001722);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(24,0.003572658);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(25,0.002500861);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(26,0.001071798);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(27,0.001071798);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(29,0.0003572658);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(2,0.001821706);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(3,0.003747036);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(4,0.004419134);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(5,0.00389731);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(6,0.003764029);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(7,0.003351451);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(8,0.002967673);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(9,0.002813114);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(10,0.002576281);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(11,0.002231125);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(12,0.002231125);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(13,0.001786329);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(14,0.001675725);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(15,0.002202335);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(16,0.001597741);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(17,0.001821706);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(18,0.001821706);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(19,0.001713387);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(20,0.001637198);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(21,0.001383685);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(22,0.001129774);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(23,0.001336766);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(24,0.001129774);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(25,0.0009452366);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(26,0.0006188026);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(27,0.0006188026);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(29,0.0003572658);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetEntries(1132);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR_Bj1__386 = new TH1D("VbbHcc_algo_H_dR_Bj1__386","",30,0,6);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(1,23);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(2,21618);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(3,49205);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(4,50570);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(5,58899);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(6,59570);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(7,57039);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(8,54326);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(9,50155);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(10,47574);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(11,44157);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(12,42098);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(13,40007);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(14,37601);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(15,35201);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(16,32886);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(17,28642);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(18,24646);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(19,20987);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(20,17424);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(21,14058);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(22,11059);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(23,8890);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(24,6772);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(25,5272);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(26,3821);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(27,2793);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(28,1803);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(29,1050);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(30,603);
   VbbHcc_algo_H_dR_Bj1__386->SetBinContent(31,618);
   VbbHcc_algo_H_dR_Bj1__386->SetEntries(829396);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1__386->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1__386->SetLineWidth(2);
   VbbHcc_algo_H_dR_Bj1__386->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_Bj1__386->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_Bj1__386->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1__386->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__386->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__386->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__386->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__386->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__386->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__386->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__386->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1__386->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__386->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__386->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__386->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__386->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__386->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fx1281[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fy1281[30] = {
   34.88089,
   88331.42,
   204157.6,
   249500.6,
   317385.6,
   344231.3,
   283186.6,
   256820.5,
   269946.9,
   209926.8,
   203826.9,
   175508.7,
   179914,
   164140.7,
   139464.7,
   136702.8,
   126359.5,
   98119.85,
   83367.12,
   71629.36,
   56753.78,
   37706.91,
   36952.83,
   32287.68,
   21039.18,
   15958.26,
   9310.506,
   5562.112,
   4183.92,
   2776.836};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fex1281[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fey1281[30] = {
   26.09282,
   5765.133,
   7661.218,
   8758.76,
   10901.7,
   23908.64,
   9761.952,
   9814.048,
   23456.1,
   8267.878,
   22653.84,
   7672.201,
   22512.8,
   7565.803,
   6368.004,
   6652.76,
   6794.085,
   5854.163,
   4779.977,
   5251.654,
   3996.319,
   2486.243,
   2942.281,
   3923.74,
   2743.907,
   1772.549,
   1227.361,
   900.8289,
   938.3934,
   1557.258};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_Bj1_fx1281,Graph_from_VbbHcc_algo_H_dR_Bj1_fy1281,Graph_from_VbbHcc_algo_H_dR_Bj1_fex1281,Graph_from_VbbHcc_algo_H_dR_Bj1_fey1281);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->SetMinimum(7.90927);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->SetMaximum(404953.1);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_Bj11281);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR_Bj1","MC unc. (stat.)","fl");

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
   H_dR_Bj1_algo_16->cd();
  
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
   
   TH1D *data_mc_ratio__387 = new TH1D("data_mc_ratio__387","",30,0,6);
   data_mc_ratio__387->SetBinContent(1,0.6593868);
   data_mc_ratio__387->SetBinContent(2,0.2447374);
   data_mc_ratio__387->SetBinContent(3,0.2410148);
   data_mc_ratio__387->SetBinContent(4,0.2026849);
   data_mc_ratio__387->SetBinContent(5,0.1855755);
   data_mc_ratio__387->SetBinContent(6,0.1730522);
   data_mc_ratio__387->SetBinContent(7,0.2014184);
   data_mc_ratio__387->SetBinContent(8,0.2115329);
   data_mc_ratio__387->SetBinContent(9,0.1857958);
   data_mc_ratio__387->SetBinContent(10,0.2266219);
   data_mc_ratio__387->SetBinContent(11,0.2166397);
   data_mc_ratio__387->SetBinContent(12,0.2398628);
   data_mc_ratio__387->SetBinContent(13,0.2223673);
   data_mc_ratio__387->SetBinContent(14,0.2290779);
   data_mc_ratio__387->SetBinContent(15,0.2524007);
   data_mc_ratio__387->SetBinContent(16,0.2405657);
   data_mc_ratio__387->SetBinContent(17,0.2266707);
   data_mc_ratio__387->SetBinContent(18,0.2511826);
   data_mc_ratio__387->SetBinContent(19,0.2517419);
   data_mc_ratio__387->SetBinContent(20,0.2432522);
   data_mc_ratio__387->SetBinContent(21,0.2477016);
   data_mc_ratio__387->SetBinContent(22,0.2932884);
   data_mc_ratio__387->SetBinContent(23,0.240577);
   data_mc_ratio__387->SetBinContent(24,0.2097395);
   data_mc_ratio__387->SetBinContent(25,0.2505801);
   data_mc_ratio__387->SetBinContent(26,0.2394371);
   data_mc_ratio__387->SetBinContent(27,0.2999837);
   data_mc_ratio__387->SetBinContent(28,0.3241575);
   data_mc_ratio__387->SetBinContent(29,0.2509608);
   data_mc_ratio__387->SetBinContent(30,0.2171536);
   data_mc_ratio__387->SetBinContent(31,0.1737288);
   data_mc_ratio__387->SetBinError(1,0.1374916);
   data_mc_ratio__387->SetBinError(2,0.001664533);
   data_mc_ratio__387->SetBinError(3,0.001086524);
   data_mc_ratio__387->SetBinError(4,0.0009013116);
   data_mc_ratio__387->SetBinError(5,0.0007646571);
   data_mc_ratio__387->SetBinError(6,0.000709028);
   data_mc_ratio__387->SetBinError(7,0.0008433605);
   data_mc_ratio__387->SetBinError(8,0.0009075574);
   data_mc_ratio__387->SetBinError(9,0.0008296191);
   data_mc_ratio__387->SetBinError(10,0.001039003);
   data_mc_ratio__387->SetBinError(11,0.001030952);
   data_mc_ratio__387->SetBinError(12,0.001169047);
   data_mc_ratio__387->SetBinError(13,0.001111739);
   data_mc_ratio__387->SetBinError(14,0.001181363);
   data_mc_ratio__387->SetBinError(15,0.001345281);
   data_mc_ratio__387->SetBinError(16,0.001326564);
   data_mc_ratio__387->SetBinError(17,0.001339349);
   data_mc_ratio__387->SetBinError(18,0.001599987);
   data_mc_ratio__387->SetBinError(19,0.001737722);
   data_mc_ratio__387->SetBinError(20,0.00184282);
   data_mc_ratio__387->SetBinError(21,0.002089137);
   data_mc_ratio__387->SetBinError(22,0.002788926);
   data_mc_ratio__387->SetBinError(23,0.002551545);
   data_mc_ratio__387->SetBinError(24,0.002548717);
   data_mc_ratio__387->SetBinError(25,0.00345111);
   data_mc_ratio__387->SetBinError(26,0.003873494);
   data_mc_ratio__387->SetBinError(27,0.005676259);
   data_mc_ratio__387->SetBinError(28,0.007634106);
   data_mc_ratio__387->SetBinError(29,0.007744818);
   data_mc_ratio__387->SetBinError(30,0.008843179);
   data_mc_ratio__387->SetBinError(31,0.07934627);
   data_mc_ratio__387->SetMinimum(0.4);
   data_mc_ratio__387->SetMaximum(1.6);
   data_mc_ratio__387->SetEntries(191.518);
   data_mc_ratio__387->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__387->SetLineColor(ci);
   data_mc_ratio__387->SetLineWidth(2);
   data_mc_ratio__387->SetMarkerStyle(20);
   data_mc_ratio__387->SetMarkerSize(1.2);
   data_mc_ratio__387->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__387->GetXaxis()->SetRange(1,30);
   data_mc_ratio__387->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__387->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__387->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__387->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__387->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__387->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__387->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__387->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__387->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__387->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__387->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__387->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__387->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__387->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__387->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__387->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__387->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1282[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1282[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1282[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1282[30] = {
   0.7480547,
   0.06526707,
   0.037526,
   0.03510517,
   0.03434845,
   0.06945515,
   0.0344718,
   0.03821364,
   0.08689151,
   0.03938458,
   0.1111426,
   0.04371408,
   0.1251309,
   0.04609341,
   0.04566032,
   0.04866587,
   0.0537679,
   0.05966339,
   0.05733648,
   0.07331706,
   0.07041503,
   0.06593601,
   0.07962263,
   0.1215244,
   0.1304189,
   0.111074,
   0.1318253,
   0.1619581,
   0.2242857,
   0.5608031};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1282,Graph_from_mc_statistical_error_fy1282,Graph_from_mc_statistical_error_fex1282,Graph_from_mc_statistical_error_fey1282);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1282 = new TH1F("Graph_Graph_from_mc_statistical_error1282","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1282->SetMinimum(0.1023344);
   Graph_Graph_from_mc_statistical_error1282->SetMaximum(1.897666);
   Graph_Graph_from_mc_statistical_error1282->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1282->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1282->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1282->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1282->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1282->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1282->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1282->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1282->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1282->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1282->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1282->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1282->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1282->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1282->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1282->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1282);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_algo_16->cd();
   H_dR_Bj1_algo_16->Modified();
   H_dR_Bj1_algo_16->cd();
   H_dR_Bj1_algo_16->SetSelected(H_dR_Bj1_algo_16);
}
