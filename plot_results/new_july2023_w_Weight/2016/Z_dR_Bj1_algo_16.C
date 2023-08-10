void Z_dR_Bj1_algo_16()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_16/Z_dR_Bj1_algo_16
//=========  (Thu Aug 10 12:24:16 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_algo_16 = new TCanvas("Z_dR_Bj1_algo_16", "Z_dR_Bj1_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_algo_16->SetHighLightColor(2);
   Z_dR_Bj1_algo_16->Range(0,0,1,1);
   Z_dR_Bj1_algo_16->SetFillColor(0);
   Z_dR_Bj1_algo_16->SetFillStyle(4000);
   Z_dR_Bj1_algo_16->SetBorderMode(0);
   Z_dR_Bj1_algo_16->SetBorderSize(2);
   Z_dR_Bj1_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1159.777,6.314516,1158628);
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
   st->SetMaximum(992998.9);
   
   TH1F *st_stack_149 = new TH1F("st_stack_149","",30,0,6);
   st_stack_149->SetMinimum(0.01);
   st_stack_149->SetMaximum(1042649);
   st_stack_149->SetDirectory(0);
   st_stack_149->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_149->SetLineColor(ci);
   st_stack_149->GetXaxis()->SetRange(1,30);
   st_stack_149->GetXaxis()->SetLabelFont(42);
   st_stack_149->GetXaxis()->SetLabelSize(0.035);
   st_stack_149->GetXaxis()->SetTitleSize(0.035);
   st_stack_149->GetXaxis()->SetTitleFont(42);
   st_stack_149->GetYaxis()->SetTitle("Events/0.2");
   st_stack_149->GetYaxis()->SetLabelFont(42);
   st_stack_149->GetYaxis()->SetLabelSize(0.05);
   st_stack_149->GetYaxis()->SetTitleSize(0.057);
   st_stack_149->GetYaxis()->SetTitleOffset(1.2);
   st_stack_149->GetYaxis()->SetTitleFont(42);
   st_stack_149->GetZaxis()->SetLabelFont(42);
   st_stack_149->GetZaxis()->SetLabelSize(0.035);
   st_stack_149->GetZaxis()->SetTitleSize(0.035);
   st_stack_149->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_149);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(1,1827.296);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(2,221604.4);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(3,324577.3);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(4,374041.3);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(5,353779.8);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(6,316702);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(7,272850.9);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(8,239028.4);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(9,165532.3);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(10,138918.2);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(11,153107.7);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(12,109239.8);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(13,90658.37);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(14,82290.21);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(15,78094.88);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(16,70687.48);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(17,60884.17);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(18,47855.06);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(19,50771.82);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(20,41958.08);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(21,35336.65);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(22,28335.68);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(23,29249.81);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(24,24035.2);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(25,18742.88);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(26,12017.31);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(27,8649.878);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(28,6385.51);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(29,3848.687);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(30,1635.99);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(31,3387.494);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(1,661.1307);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(2,8359.247);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(3,9916.675);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(4,23067.17);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(5,11505.55);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(6,10730.06);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(7,22221.61);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(8,22012.67);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(9,7597.831);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(10,6758.795);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(11,21468.91);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(12,6516.721);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(13,5481.242);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(14,5193.07);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(15,5433.276);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(16,4680.536);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(17,4622.41);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(18,3690.664);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(19,4453.696);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(20,3314.745);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(21,3117.932);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(22,2164.296);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(23,3190.964);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(24,2726.353);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(25,2527.725);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(26,1324.533);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(27,1135.786);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(28,991.9552);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(29,818.5834);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(30,312.0385);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(31,681.6835);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetEntries(131372);

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
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(1,3.728225);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(2,1423.747);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(3,3077.309);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(4,3407.061);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(5,2968.237);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(6,2349.423);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(7,1825.384);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(8,1422.913);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(9,1118.075);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(10,907.5431);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(11,761.8783);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(12,637.9092);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(13,590.6095);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(14,526.3614);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(15,471.9827);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(16,435.9577);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(17,406.7394);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(18,387.7376);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(19,344.4334);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(20,326.2198);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(21,301.6785);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(22,252.4383);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(23,199.6668);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(24,154.5277);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(25,116.1888);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(26,82.92099);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(27,52.33251);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(28,36.22673);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(29,19.88699);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(30,11.67399);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(31,19.0774);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(1,0.7657539);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(2,14.15639);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(3,20.3779);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(4,21.33174);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(5,19.88441);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(6,17.86904);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(7,15.83313);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(8,13.92372);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(9,12.32856);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(10,11.12589);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(11,10.08181);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(12,9.174299);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(13,8.86762);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(14,8.414203);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(15,7.926374);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(16,7.623049);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(17,7.44667);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(18,7.325889);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(19,6.781497);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(20,6.59201);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(21,6.427092);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(22,5.816521);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(23,5.135252);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(24,4.504886);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(25,4.001935);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(26,3.426764);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(27,2.589465);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(28,2.199102);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(29,1.551589);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(30,1.201381);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(31,1.340529);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetEntries(347069);

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
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(1,63.98734);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(2,27472.07);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(3,66201.77);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(4,66550.2);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(5,50372.93);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(6,35356.49);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(7,25008.56);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(8,18397.07);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(9,13973.46);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(10,11233.2);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(11,9400.605);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(12,8201.448);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(13,7322.267);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(14,6690.987);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(15,6204.244);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(16,5852.755);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(17,5468.255);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(18,5285.348);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(19,5107.125);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(20,4874.465);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(21,4490.92);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(22,3853.877);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(23,3012.126);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(24,2171.683);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(25,1450.924);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(26,866.2396);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(27,479.6362);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(28,248.0987);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(29,130.0517);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(30,78.87584);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(31,125.9212);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(1,1.969712);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(2,42.32082);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(3,65.80671);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(4,65.71956);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(5,56.83727);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(6,47.38981);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(7,39.73094);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(8,33.99579);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(9,29.58447);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(10,26.50675);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(11,24.23075);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(12,22.6335);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(13,21.38605);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(14,20.47113);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(15,19.73051);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(16,19.18276);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(17,18.5751);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(18,18.287);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(19,18.024);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(20,17.62618);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(21,16.9427);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(22,15.71746);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(23,13.89129);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(24,11.78924);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(25,9.626373);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(26,7.411998);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(27,5.482505);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(28,3.904942);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(29,2.808791);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(30,2.182512);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(31,2.742302);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetEntries(6426049);

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
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(1,5.055151);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(2,1109.022);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(3,2000.16);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(4,1919.689);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(5,1667.215);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(6,1333.286);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(7,1058.853);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(8,861.4702);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(9,686.4721);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(10,592.077);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(11,464.4121);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(12,415.6516);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(13,361.223);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(14,333.6735);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(15,295.1782);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(16,279.4969);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(17,270.8357);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(18,235.3016);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(19,226.1371);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(20,195.787);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(21,178.2541);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(22,142.605);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(23,136.455);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(24,99.52148);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(25,78.85769);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(26,54.39816);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(27,36.6348);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(28,29.16997);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(29,14.17378);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(30,11.06188);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(31,9.881646);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(1,2.488122);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(2,23.02632);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(3,37.46323);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(4,41.012);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(5,38.51145);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(6,33.06664);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(7,27.94395);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(8,25.60527);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(9,21.90798);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(10,21.10452);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(11,16.79891);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(12,17.60446);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(13,14.99792);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(14,15.04464);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(15,13.27971);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(16,13.74946);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(17,14.31004);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(18,13.2894);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(19,14.53971);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(20,12.17412);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(21,11.56421);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(22,9.486083);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(23,10.22498);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(24,7.058425);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(25,6.301082);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(26,4.958815);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(27,2.314259);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(28,3.890196);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(29,1.391442);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(30,2.660925);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(31,1.235214);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetEntries(94081);

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
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(1,1.285338);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(2,636.3682);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(3,964.4904);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(4,863.1425);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(5,854.7453);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(6,636.1982);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(7,544.0011);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(8,445.9158);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(9,402.6439);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(10,304.2869);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(11,258.5642);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(12,224.0773);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(13,201.7648);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(14,170.5204);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(15,190.0064);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(16,149.7848);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(17,132.8015);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(18,126.0141);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(19,104.3426);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(20,96.32612);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(21,70.78308);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(22,81.1724);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(23,78.78781);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(24,58.44495);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(25,40.45257);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(26,37.72144);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(27,26.65913);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(28,11.64872);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(29,9.45467);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(30,5.458734);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(31,11.89333);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(1,0.3676541);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(2,28.53202);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(3,40.83039);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(4,40.80459);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(5,43.4993);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(6,32.6621);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(7,30.88056);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(8,28.23753);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(9,29.1169);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(10,23.37825);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(11,21.49049);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(12,18.58122);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(13,15.2845);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(14,14.83494);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(15,17.31211);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(16,11.92654);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(17,15.18576);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(18,13.00824);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(19,12.53767);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(20,10.72084);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(21,5.735434);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(22,10.34524);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(23,10.18647);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(24,9.631716);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(25,4.139918);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(26,6.813201);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(27,3.380279);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(28,1.46322);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(29,1.722284);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(30,1.209399);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(31,2.509773);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetEntries(65948);

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
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(2,8.330897);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(3,11.01828);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(4,7.390311);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(5,5.374772);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(6,5.509141);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(7,5.106033);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(8,5.374772);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(9,3.224863);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(10,4.165448);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(11,3.76234);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(12,2.821755);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(13,2.418647);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(14,1.209324);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(15,1.746801);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(16,1.209324);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(17,0.9405851);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(18,0.8062158);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(19,0.8062158);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(20,1.612432);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(21,1.209324);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(22,0.9405851);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(23,0.8062158);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(24,0.4031079);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(25,0.1343693);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(26,0.2687386);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(27,0.2687386);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(31,0.1343693);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(2,1.058025);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(3,1.216766);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(4,0.9965094);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(5,0.8498261);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(6,0.8603833);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(7,0.828308);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(8,0.8498261);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(9,0.6582724);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(10,0.7481366);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(11,0.7110155);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(12,0.6157575);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(13,0.5700807);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(14,0.4031079);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(15,0.4844754);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(16,0.4031079);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(17,0.3555077);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(18,0.3291362);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(19,0.3291362);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(20,0.4654689);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(21,0.4031079);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(22,0.3555077);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(23,0.3291362);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(24,0.2327345);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(25,0.1343693);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(26,0.1900269);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(27,0.1900269);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(31,0.1343693);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetEntries(573);

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
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(1,0.1089812);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(2,14.82145);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(3,22.99504);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(4,14.16756);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(5,11.66099);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(6,8.609518);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(7,5.667024);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(8,5.340081);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(9,5.884987);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(10,4.904156);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(11,3.269437);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(12,2.833512);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(13,3.051475);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(14,3.4874);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(15,2.942493);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(16,2.397587);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(17,1.198794);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(18,1.634719);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(19,2.397587);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(20,1.089812);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(21,1.7437);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(22,2.397587);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(23,1.307775);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(24,0.8718499);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(25,0.8718499);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(26,0.5449062);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(27,0.2179625);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(28,0.1089812);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(29,0.1089812);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(30,0.1089812);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(1,0.1089812);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(2,1.270929);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(3,1.583044);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(4,1.242577);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(5,1.127311);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(6,0.9686464);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(7,0.7858749);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(8,0.7628687);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(9,0.8008453);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(10,0.7310684);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(11,0.5969148);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(12,0.5556975);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(13,0.5766745);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(14,0.616491);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(15,0.5662831);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(16,0.5111673);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(17,0.3614499);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(18,0.4220825);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(19,0.5111673);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(20,0.3446289);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(21,0.4359249);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(22,0.5111673);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(23,0.3775221);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(24,0.3082455);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(25,0.3082455);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(26,0.2436895);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(27,0.1541227);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(28,0.1089812);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(29,0.1089812);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(30,0.1089812);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetEntries(1163);

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
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(1,0.2432072);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(2,19.69978);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(3,30.88731);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(4,23.59109);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(5,16.53809);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(6,10.94432);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(7,8.998665);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(8,6.566593);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(9,7.053007);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(10,5.593764);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(11,3.648107);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(12,4.377729);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(13,2.675279);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(14,4.134522);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(15,1.945657);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(16,2.675279);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(17,2.675279);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(18,0.9728286);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(19,1.216036);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(20,1.70245);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(21,1.459243);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(22,0.4864143);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(23,0.7296215);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(24,1.216036);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(25,0.7296215);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(26,0.7296215);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(29,0.2432072);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(1,0.2432072);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(2,2.188864);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(3,2.740805);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(4,2.395313);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(5,2.005538);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(6,1.631483);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(7,1.479371);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(8,1.263741);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(9,1.309711);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(10,1.166381);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(11,0.9419372);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(12,1.031841);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(13,0.8066269);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(14,1.002769);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(15,0.6878937);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(16,0.8066269);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(17,0.8066269);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(18,0.4864143);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(19,0.5438277);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(20,0.6434656);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(21,0.5957334);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(22,0.3439469);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(23,0.4212471);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(24,0.5438277);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(25,0.4212471);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(26,0.4212471);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(29,0.2432072);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetEntries(665);

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
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(1,0.02633823);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(2,12.88217);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(3,22.40274);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(4,16.18831);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(5,10.03902);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(6,6.404348);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(7,4.822668);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(8,3.569523);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(9,2.911067);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(10,2.395393);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(11,2.093196);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(12,1.870014);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(13,1.669012);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(14,1.59277);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(15,1.395926);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(16,1.341863);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(17,1.237897);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(18,1.085412);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(19,1.07155);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(20,0.9412451);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(21,0.9259967);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(22,0.8234162);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(23,0.7277669);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(24,0.5849859);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(25,0.3645765);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(26,0.2841756);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(27,0.1303049);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(28,0.1039667);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(29,0.02772445);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(30,0.01802089);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(31,0.03742801);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(1,0.006042404);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(2,0.1336321);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(3,0.1762248);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(4,0.1498019);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(5,0.1179675);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(6,0.09422236);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(7,0.08176363);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(8,0.07034311);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(9,0.0635247);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(10,0.05762419);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(11,0.05386683);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(12,0.0509142);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(13,0.04810013);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(14,0.04698865);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(15,0.04398937);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(16,0.04312913);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(17,0.04142464);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(18,0.03878947);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(19,0.03854098);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(20,0.03612167);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(21,0.03582789);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(22,0.03378518);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(23,0.03176235);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(24,0.02847667);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(25,0.02248075);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(26,0.01984769);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(27,0.01343993);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(28,0.01200504);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(29,0.006199376);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(30,0.004998097);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(31,0.007203024);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetEntries(72116);

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
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(1,0.007178152);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(2,3.368707);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(3,7.809829);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(4,6.541809);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(5,4.50106);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(6,3.030975);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(7,2.185747);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(8,1.722756);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(9,1.429888);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(10,1.193727);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(11,1.031141);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(12,0.889373);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(13,0.8028763);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(14,0.72607);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(15,0.6984342);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(16,0.6280883);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(17,0.5573835);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(18,0.5021117);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(19,0.4755526);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(20,0.4303302);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(21,0.3947983);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(22,0.3746995);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(23,0.3065071);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(24,0.2225227);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(25,0.1493056);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(26,0.1098257);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(27,0.06496227);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(28,0.0283537);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(29,0.01686866);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(30,0.01004941);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(31,0.0139974);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(1,0.001605084);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(2,0.03477146);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(3,0.05294343);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(4,0.04845518);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(5,0.04019284);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(6,0.03298242);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(7,0.02800859);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(8,0.02486585);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(9,0.02265386);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(10,0.02069873);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(11,0.01923758);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(12,0.01786625);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(13,0.01697523);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(14,0.01614286);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(15,0.01583267);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(16,0.01501418);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(17,0.01414387);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(18,0.0134243);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(19,0.01306443);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(20,0.01242774);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(21,0.01190362);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(22,0.01159666);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(23,0.01048846);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(24,0.008936727);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(25,0.007320307);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(26,0.006278319);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(27,0.004828608);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(28,0.00319004);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(29,0.002460546);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(30,0.00189916);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(31,0.002241377);
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
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(1,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(2,0.1230753);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(3,0.1996555);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(4,0.1449554);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(5,0.1094003);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(6,0.04649513);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(7,0.07111019);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(8,0.04649513);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(9,0.03282009);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(10,0.02461507);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(11,0.01094003);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(12,0.04649513);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(13,0.02188006);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(14,0.01914505);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(15,0.01914505);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(16,0.01367504);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(17,0.01641004);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(18,0.01094003);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(19,0.02188006);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(20,0.01367504);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(21,0.005470015);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(22,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(23,0.005470015);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(24,0.01367504);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(27,0.005470015);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(1,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(2,0.01834699);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(3,0.02336791);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(4,0.01991115);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(5,0.01729771);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(6,0.01127672);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(7,0.01394586);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(8,0.01127672);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(9,0.009474344);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(10,0.008205022);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(11,0.005470015);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(12,0.01127672);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(13,0.007735769);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(14,0.00723615);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(15,0.00723615);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(16,0.006115663);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(17,0.006699373);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(18,0.005470015);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(19,0.007735769);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(20,0.006115663);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(21,0.003867885);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(22,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(23,0.003867885);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(24,0.006115663);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(27,0.003867885);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetEntries(376);

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
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(2,0.03572658);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(3,0.07681216);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(4,0.06573692);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(5,0.03787018);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(6,0.02357955);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(7,0.02215048);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(8,0.02000689);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(9,0.01714876);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(10,0.01607696);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(11,0.01036071);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(12,0.01000344);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(13,0.01000344);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(14,0.006788051);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(15,0.008217114);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(16,0.006788051);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(17,0.007859849);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(18,0.007145317);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(19,0.00428719);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(20,0.002858127);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(21,0.002858127);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(22,0.00428719);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(23,0.003572658);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(24,0.002143595);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(25,0.0007145317);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(26,0.0003572658);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(27,0.0007145317);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(28,0.0003572658);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(2,0.003572658);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(3,0.005238546);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(4,0.00484619);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(5,0.003678277);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(6,0.002902441);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(7,0.002813114);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(8,0.002673533);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(9,0.00247521);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(10,0.002396612);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(11,0.001923935);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(12,0.001890473);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(13,0.001890473);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(14,0.001557286);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(15,0.001713387);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(16,0.001557286);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(17,0.001675725);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(18,0.001597741);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(19,0.001237605);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(20,0.0010105);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(21,0.0010105);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(22,0.001237605);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(23,0.001129774);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(24,0.000875119);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(25,0.0005052502);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(26,0.0003572658);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(27,0.0005052502);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(28,0.0003572658);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetEntries(1132);

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
   
   TH1D *VbbHcc_algo_Z_dR_Bj1__408 = new TH1D("VbbHcc_algo_Z_dR_Bj1__408","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(1,226);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(2,65930);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(3,98871);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(4,91860);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(5,86833);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(6,75496);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(7,62509);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(8,51629);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(9,42746);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(10,35975);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(11,30911);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(12,26935);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(13,23995);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(14,21556);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(15,19952);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(16,18045);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(17,15443);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(18,13548);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(19,12367);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(20,11175);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(21,10069);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(22,9163);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(23,7723);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(24,6269);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(25,5050);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(26,3759);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(27,2839);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(28,1980);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(29,1187);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(30,795);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(31,1212);
   VbbHcc_algo_Z_dR_Bj1__408->SetEntries(856077);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1__408->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1__408->SetLineWidth(2);
   VbbHcc_algo_Z_dR_Bj1__408->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR_Bj1__408->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR_Bj1__408->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1__408->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__408->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__408->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__408->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__408->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__408->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__408->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__408->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1__408->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__408->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__408->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__408->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__408->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__408->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fx1297[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fy1297[30] = {
   1901.74,
   252304.9,
   396916.4,
   446849.5,
   409691.1,
   356412,
   301314.6,
   260178.4,
   181733.5,
   151973.6,
   164006.9,
   118731.7,
   99144.89,
   90022.93,
   85265.05,
   77413.74,
   67169.43,
   53894.48,
   56559.85,
   47456.67,
   40384.03,
   32670.8,
   32680.74,
   26522.69,
   20431.55,
   13060.52,
   9245.829,
   6710.896,
   4022.65,
   1743.198};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fex1297[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fey1297[30] = {
   661.1389,
   8359.447,
   9917.07,
   23067.35,
   11505.86,
   10730.28,
   22221.69,
   22012.73,
   7597.986,
   6758.929,
   21468.95,
   6516.817,
   5481.333,
   5193.16,
   5433.362,
   4680.617,
   4622.501,
   3690.764,
   4453.779,
   3314.838,
   3118.011,
   2164.406,
   3191.031,
   2726.408,
   2527.758,
   1324.585,
   1135.81,
   991.9741,
   818.5927,
   312.0622};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_Bj1_fx1297,Graph_from_VbbHcc_algo_Z_dR_Bj1_fy1297,Graph_from_VbbHcc_algo_Z_dR_Bj1_fex1297,Graph_from_VbbHcc_algo_Z_dR_Bj1_fey1297);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->SetMinimum(1116.541);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->SetMaximum(516784.5);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1","Data (JetHT, 2016)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj1_algo_16->cd();
  
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
   
   TH1D *data_mc_ratio__409 = new TH1D("data_mc_ratio__409","",30,0,6);
   data_mc_ratio__409->SetBinContent(1,0.1188385);
   data_mc_ratio__409->SetBinContent(2,0.2613109);
   data_mc_ratio__409->SetBinContent(3,0.2490978);
   data_mc_ratio__409->SetBinContent(4,0.2055726);
   data_mc_ratio__409->SetBinContent(5,0.2119475);
   data_mc_ratio__409->SetBinContent(6,0.2118223);
   data_mc_ratio__409->SetBinContent(7,0.2074543);
   data_mc_ratio__409->SetBinContent(8,0.1984369);
   data_mc_ratio__409->SetBinContent(9,0.2352125);
   data_mc_ratio__409->SetBinContent(10,0.2367187);
   data_mc_ratio__409->SetBinContent(11,0.1884737);
   data_mc_ratio__409->SetBinContent(12,0.226856);
   data_mc_ratio__409->SetBinContent(13,0.2420195);
   data_mc_ratio__409->SetBinContent(14,0.2394501);
   data_mc_ratio__409->SetBinContent(15,0.2339998);
   data_mc_ratio__409->SetBinContent(16,0.2330981);
   data_mc_ratio__409->SetBinContent(17,0.2299111);
   data_mc_ratio__409->SetBinContent(18,0.2513801);
   data_mc_ratio__409->SetBinContent(19,0.2186533);
   data_mc_ratio__409->SetBinContent(20,0.235478);
   data_mc_ratio__409->SetBinContent(21,0.2493313);
   data_mc_ratio__409->SetBinContent(22,0.2804645);
   data_mc_ratio__409->SetBinContent(23,0.2363166);
   data_mc_ratio__409->SetBinContent(24,0.2363637);
   data_mc_ratio__409->SetBinContent(25,0.2471667);
   data_mc_ratio__409->SetBinContent(26,0.2878139);
   data_mc_ratio__409->SetBinContent(27,0.3070574);
   data_mc_ratio__409->SetBinContent(28,0.2950426);
   data_mc_ratio__409->SetBinContent(29,0.2950791);
   data_mc_ratio__409->SetBinContent(30,0.4560584);
   data_mc_ratio__409->SetBinContent(31,0.3409807);
   data_mc_ratio__409->SetBinError(1,0.00790502);
   data_mc_ratio__409->SetBinError(2,0.001017691);
   data_mc_ratio__409->SetBinError(3,0.0007922011);
   data_mc_ratio__409->SetBinError(4,0.0006782689);
   data_mc_ratio__409->SetBinError(5,0.0007192599);
   data_mc_ratio__409->SetBinError(6,0.0007709207);
   data_mc_ratio__409->SetBinError(7,0.0008297573);
   data_mc_ratio__409->SetBinError(8,0.0008733243);
   data_mc_ratio__409->SetBinError(9,0.00113766);
   data_mc_ratio__409->SetBinError(10,0.001248051);
   data_mc_ratio__409->SetBinError(11,0.001071999);
   data_mc_ratio__409->SetBinError(12,0.001382267);
   data_mc_ratio__409->SetBinError(13,0.001562392);
   data_mc_ratio__409->SetBinError(14,0.001630914);
   data_mc_ratio__409->SetBinError(15,0.001656617);
   data_mc_ratio__409->SetBinError(16,0.001735243);
   data_mc_ratio__409->SetBinError(17,0.001850095);
   data_mc_ratio__409->SetBinError(18,0.002159699);
   data_mc_ratio__409->SetBinError(19,0.001966183);
   data_mc_ratio__409->SetBinError(20,0.002227545);
   data_mc_ratio__409->SetBinError(21,0.002484755);
   data_mc_ratio__409->SetBinError(22,0.002929942);
   data_mc_ratio__409->SetBinError(23,0.002689064);
   data_mc_ratio__409->SetBinError(24,0.002985256);
   data_mc_ratio__409->SetBinError(25,0.003478118);
   data_mc_ratio__409->SetBinError(26,0.004694351);
   data_mc_ratio__409->SetBinError(27,0.005762844);
   data_mc_ratio__409->SetBinError(28,0.006630589);
   data_mc_ratio__409->SetBinError(29,0.008564718);
   data_mc_ratio__409->SetBinError(30,0.01617473);
   data_mc_ratio__409->SetBinError(31,0.06612488);
   data_mc_ratio__409->SetMinimum(0.4);
   data_mc_ratio__409->SetMaximum(1.6);
   data_mc_ratio__409->SetEntries(2313.569);
   data_mc_ratio__409->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__409->SetLineColor(ci);
   data_mc_ratio__409->SetLineWidth(2);
   data_mc_ratio__409->SetMarkerStyle(20);
   data_mc_ratio__409->SetMarkerSize(1.2);
   data_mc_ratio__409->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__409->GetXaxis()->SetRange(1,30);
   data_mc_ratio__409->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__409->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__409->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__409->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__409->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__409->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__409->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__409->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__409->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__409->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__409->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__409->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__409->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__409->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__409->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__409->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__409->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1298[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1298[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1298[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1298[30] = {
   0.3476494,
   0.03313233,
   0.02498529,
   0.05162219,
   0.02808422,
   0.03010639,
   0.07374913,
   0.08460629,
   0.04180838,
   0.04447436,
   0.1309027,
   0.05488692,
   0.05528609,
   0.05768708,
   0.0637232,
   0.06046235,
   0.06881851,
   0.06848129,
   0.07874453,
   0.06984979,
   0.07720903,
   0.06624895,
   0.09764257,
   0.1027953,
   0.1237184,
   0.101419,
   0.1228457,
   0.1478154,
   0.2034959,
   0.1790171};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1298,Graph_from_mc_statistical_error_fy1298,Graph_from_mc_statistical_error_fex1298,Graph_from_mc_statistical_error_fey1298);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1298 = new TH1F("Graph_Graph_from_mc_statistical_error1298","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1298->SetMinimum(0.5828207);
   Graph_Graph_from_mc_statistical_error1298->SetMaximum(1.417179);
   Graph_Graph_from_mc_statistical_error1298->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1298->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1298->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1298->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1298->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1298->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1298->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1298->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1298->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1298->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1298->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1298->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1298->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1298->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1298->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1298->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1298);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_algo_16->cd();
   Z_dR_Bj1_algo_16->Modified();
   Z_dR_Bj1_algo_16->cd();
   Z_dR_Bj1_algo_16->SetSelected(Z_dR_Bj1_algo_16);
}
