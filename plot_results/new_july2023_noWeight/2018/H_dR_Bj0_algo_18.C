void H_dR_Bj0_algo_18()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_18/H_dR_Bj0_algo_18
//=========  (Thu Aug  3 12:24:42 2023) by ROOT version 6.14/09
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
   topPad->Range(-0.9193524,-1293.708,6.314516,1292424);
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
   st->SetMaximum(1107669);
   
   TH1F *st_stack_139 = new TH1F("st_stack_139","",30,0,6);
   st_stack_139->SetMinimum(0.01);
   st_stack_139->SetMaximum(1163052);
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
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,172222.3);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,403214.7);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,328062.1);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,222315.8);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,141629.3);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,109328);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,102586.4);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,64235.61);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,56516.35);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,47937.29);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,35208.99);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,33597.81);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,28099.51);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,24337.39);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(15,20602.52);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(16,12145.84);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,7810.799);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(18,9765.509);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(19,3117.365);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(20,1867.715);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(21,1483.965);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(22,636.0112);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(23,228.9666);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(24,21.8616);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(25,73.64506);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(26,5.881228);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(27,61.29641);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(28,9.789551);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(29,9.789551);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(30,9.789551);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(31,380.4124);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,3577.537);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,8088.228);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,8311.552);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,7456.621);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,5655.892);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,5572.08);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,20507.21);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,3643.731);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,3567.231);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,3353.135);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,2512.642);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,3045.84);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,2508.496);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,2388.246);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(15,2258.511);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(16,1688.32);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,1312.585);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(18,2238.681);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(19,846.4703);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(20,655.1454);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(21,540.7394);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(22,378.7142);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(23,75.19159);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(24,12.84947);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(25,46.20171);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(26,5.881228);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(27,36.1509);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(28,9.789551);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(29,9.789551);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(30,9.789551);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(31,370.7521);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(114901);

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
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,944.2097);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,3083.209);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,2567.745);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,1665.671);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,1105.483);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,784.4269);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,641.4608);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,503.8494);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,428.155);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,341.382);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,270.0769);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,226.3825);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,186.8464);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,146.4242);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,114.533);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(16,90.63604);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,65.0597);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(18,46.81571);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(19,29.4366);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(20,18.78361);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,11.52402);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(22,6.457833);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(23,4.625766);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(24,2.308036);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(25,1.945295);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(26,1.345168);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(27,1.663897);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(28,0.8392614);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(29,0.2916045);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(30,0.1581321);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(31,0.3100993);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,12.72949);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,22.15541);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,20.30031);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,16.24779);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,13.18207);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,11.04268);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,10.10054);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,8.877443);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,8.154635);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,7.224493);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,6.402367);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,5.933683);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,5.3938);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,4.814934);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,4.217753);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(16,3.720423);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,3.088906);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(18,2.72557);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(19,2.047534);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(20,1.592682);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,1.253069);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(22,0.7239322);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(23,0.7099279);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(24,0.4384902);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(25,0.4836993);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(26,0.3574013);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(27,0.4003657);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(28,0.2101547);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(29,0.119047);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(30,0.09143629);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(31,0.1268225);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(162879);

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
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(1,17115.2);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(2,60391.41);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(3,47573.59);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(4,28457.61);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(5,17519.57);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(6,12015.33);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(7,9213.085);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(8,7476.656);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(9,6109.707);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(10,4982.555);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(11,3990.898);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(12,3314.533);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(13,2817.054);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(14,2417.912);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(15,2014.037);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(16,1608.855);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(17,1223.434);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(18,889.48);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(19,607.8102);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(20,378.824);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(21,194.2772);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(22,95.49374);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(23,55.46126);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(24,34.19229);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(25,23.30762);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(26,16.49439);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(27,11.15868);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(28,6.548906);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(29,5.189208);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(30,4.046424);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(31,7.315834);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(1,32.63778);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(2,61.10154);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(3,54.07573);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(4,41.74312);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(5,32.68967);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(6,27.03359);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(7,23.64267);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(8,21.30357);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(9,19.27324);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(10,17.40626);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(11,15.57719);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(12,14.2047);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(13,13.10597);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(14,12.16641);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(15,11.11883);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(16,9.941322);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(17,8.675002);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(18,7.395564);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(19,6.111927);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(20,4.823652);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(21,3.435957);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(22,2.392664);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(23,1.806696);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(24,1.425784);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(25,1.168941);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(26,0.9937896);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(27,0.8064466);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(28,0.6156961);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(29,0.5446556);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(30,0.4863854);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(31,0.6577102);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetEntries(3891102);

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
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(1,1042.719);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(2,2807.382);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(3,1988.389);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(4,1348.107);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(5,839.857);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(6,651.7569);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(7,496.2996);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(8,431.9169);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(9,366.469);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(10,308.152);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(11,227.5239);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(12,203.1536);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(13,167.3271);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(14,110.2267);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(15,89.86766);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(16,66.29592);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(17,47.15794);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(18,26.68789);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(19,20.43648);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(20,14.60769);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(21,5.629556);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(22,2.156741);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(23,1.41569);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(24,0.5956863);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(25,1.323117);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(26,0.9594019);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(27,0.6152722);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(28,0.9789878);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(30,1.104766);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(31,0.1257783);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(1,15.36839);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(2,39.02695);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(3,34.65253);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(4,30.76099);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(5,21.63125);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(6,21.4762);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(7,18.70894);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(8,16.66654);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(9,16.35167);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(10,14.8048);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(11,10.88294);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(12,13.09275);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(13,12.03451);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(14,7.182672);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(15,6.846562);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(16,6.188411);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(17,5.583414);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(18,3.110282);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(19,2.739203);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(20,2.314093);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(21,1.45076);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(22,0.8939984);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(23,0.7266281);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(24,0.2680495);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(25,0.7207071);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(26,0.5437229);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(27,0.5053954);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(28,0.6922489);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(30,0.7035828);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(31,0.1257783);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetEntries(56536);

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
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(1,371.0808);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(2,809.4729);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(3,660.2909);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(4,420.7032);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(5,264.2417);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(6,193.9895);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(7,148.6343);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(8,144.0382);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(9,111.3723);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(10,80.27841);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(11,72.67364);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(12,56.78689);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(13,63.03592);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(14,34.2344);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(15,34.38394);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(16,16.96839);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(17,15.21186);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(18,5.950601);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(19,6.365643);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(20,1.592159);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(21,3.043935);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(22,0.05720027);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(23,2.727236);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(24,0.3166999);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(25,0.1023102);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(27,0.386066);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(28,0.04495706);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(31,0.04495706);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(1,17.21356);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(2,36.63367);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(3,44.33815);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(4,29.38014);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(5,25.56525);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(6,19.66445);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(7,15.40857);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(8,18.8836);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(9,14.86169);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(10,13.42185);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(11,8.396837);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(12,8.165294);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(13,13.41962);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(14,11.44659);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(15,6.253999);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(16,3.930275);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(17,4.34304);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(18,1.184306);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(19,3.024191);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(20,0.5946792);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(21,2.133907);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(22,0.04659435);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(23,2.117557);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(24,0.2636496);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(25,0.1023102);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(27,0.2887198);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(28,0.04495706);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(31,0.04495706);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetEntries(15329);

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
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(1,5.022519);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(2,17.26673);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(3,13.421);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(4,8.378217);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(5,4.928328);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(6,3.352717);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(7,2.685035);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(8,2.192024);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(9,1.948797);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(10,1.535669);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(11,1.184539);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(12,1.04683);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(13,0.8906401);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(14,0.7904878);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(15,0.6700666);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(16,0.5365302);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(17,0.3910709);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(18,0.2599191);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(19,0.1967277);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(20,0.1377094);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(21,0.06438362);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(22,0.02563422);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(23,0.01609591);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(24,0.01251904);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(25,0.00774988);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(26,0.004769157);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(27,0.003576868);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(28,0.002980723);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(29,0.001192289);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(31,0.003576868);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(1,0.0547188);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(2,0.1014567);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(3,0.08944753);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(4,0.07067269);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(5,0.05420329);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(6,0.04470687);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(7,0.04000837);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(8,0.03614918);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(9,0.03408467);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(10,0.03025691);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(11,0.02657361);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(12,0.02498123);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(13,0.02304236);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(14,0.02170818);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(15,0.01998641);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(16,0.01788434);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(17,0.01526875);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(18,0.01244787);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(19,0.01082951);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(20,0.009060614);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(21,0.006195317);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(22,0.003909182);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(23,0.003097658);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(24,0.002731878);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(25,0.00214943);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(26,0.001686152);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(27,0.00146025);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(28,0.00133302);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(29,0.0008430758);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(31,0.00146025);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetEntries(112352);

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
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(1,157766);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(2,498451);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(3,396962);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(4,267452);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(5,173691);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(6,125071);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(7,99369);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(8,82817);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(9,69956);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(10,58749);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(11,48621);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(12,39406);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(13,32447);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(14,26144);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(15,20291);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(16,14991);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(17,10746);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(18,7382);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(19,4986);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(20,3262);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(21,1909);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(22,1179);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(23,740);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(24,453);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(25,333);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(26,243);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(27,150);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(28,105);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(29,76);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(30,48);
   VbbHcc_algo_H_dR_Bj0__381->SetBinContent(31,104);
   VbbHcc_algo_H_dR_Bj0__381->SetEntries(2143929);

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
   191759.7,
   470442.1,
   380919.6,
   254257.1,
   161383.5,
   122993,
   113101.9,
   72808.39,
   63544.88,
   53659.51,
   39780.85,
   37404.71,
   31337.35,
   27050.13,
   22858.63,
   13931.08,
   9163.094,
   10736.08,
   3782.07,
   2281.77,
   1698.843,
   740.2184,
   293.2218,
   59.29826,
   100.3312,
   24.6941,
   75.1239,
   18.20464,
   15.27156,
   15.09887};
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
   3577.785,
   8088.668,
   8311.944,
   7456.877,
   5656.102,
   5572.233,
   20507.24,
   3643.891,
   3567.361,
   3353.248,
   2512.737,
   3045.919,
   2508.601,
   2388.32,
   2258.562,
   1688.369,
   1312.637,
   2238.697,
   846.5047,
   655.1695,
   540.758,
   378.7235,
   75.24996,
   12.94123,
   46.22476,
   5.999988,
   36.16679,
   9.835639,
   9.805414,
   9.827272};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_Bj0_fx1277,Graph_from_VbbHcc_algo_H_dR_Bj0_fy1277,Graph_from_VbbHcc_algo_H_dR_Bj0_fex1277,Graph_from_VbbHcc_algo_H_dR_Bj0_fey1277);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->SetMinimum(4.744442);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->SetMaximum(526383.3);
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
   data_mc_ratio__382->SetBinContent(1,0.8227275);
   data_mc_ratio__382->SetBinContent(2,1.059537);
   data_mc_ratio__382->SetBinContent(3,1.042115);
   data_mc_ratio__382->SetBinContent(4,1.051896);
   data_mc_ratio__382->SetBinContent(5,1.076262);
   data_mc_ratio__382->SetBinContent(6,1.016895);
   data_mc_ratio__382->SetBinContent(7,0.8785792);
   data_mc_ratio__382->SetBinContent(8,1.137465);
   data_mc_ratio__382->SetBinContent(9,1.100891);
   data_mc_ratio__382->SetBinContent(10,1.094848);
   data_mc_ratio__382->SetBinContent(11,1.222221);
   data_mc_ratio__382->SetBinContent(12,1.053504);
   data_mc_ratio__382->SetBinContent(13,1.03541);
   data_mc_ratio__382->SetBinContent(14,0.9665018);
   data_mc_ratio__382->SetBinContent(15,0.8876736);
   data_mc_ratio__382->SetBinContent(16,1.076083);
   data_mc_ratio__382->SetBinContent(17,1.172748);
   data_mc_ratio__382->SetBinContent(18,0.687588);
   data_mc_ratio__382->SetBinContent(19,1.318326);
   data_mc_ratio__382->SetBinContent(20,1.429592);
   data_mc_ratio__382->SetBinContent(21,1.123706);
   data_mc_ratio__382->SetBinContent(22,1.592773);
   data_mc_ratio__382->SetBinContent(23,2.523687);
   data_mc_ratio__382->SetBinContent(24,7.639347);
   data_mc_ratio__382->SetBinContent(25,3.319009);
   data_mc_ratio__382->SetBinContent(26,9.840408);
   data_mc_ratio__382->SetBinContent(27,1.996701);
   data_mc_ratio__382->SetBinContent(28,5.767759);
   data_mc_ratio__382->SetBinContent(29,4.976572);
   data_mc_ratio__382->SetBinContent(30,3.179045);
   data_mc_ratio__382->SetBinContent(31,0.2678929);
   data_mc_ratio__382->SetBinError(1,0.00207133);
   data_mc_ratio__382->SetBinError(2,0.001500739);
   data_mc_ratio__382->SetBinError(3,0.001654022);
   data_mc_ratio__382->SetBinError(4,0.002033995);
   data_mc_ratio__382->SetBinError(5,0.002582435);
   data_mc_ratio__382->SetBinError(6,0.002875397);
   data_mc_ratio__382->SetBinError(7,0.002787119);
   data_mc_ratio__382->SetBinError(8,0.003952559);
   data_mc_ratio__382->SetBinError(9,0.004162286);
   data_mc_ratio__382->SetBinError(10,0.004517036);
   data_mc_ratio__382->SetBinError(11,0.005542911);
   data_mc_ratio__382->SetBinError(12,0.005307071);
   data_mc_ratio__382->SetBinError(13,0.005748109);
   data_mc_ratio__382->SetBinError(14,0.00597746);
   data_mc_ratio__382->SetBinError(15,0.006231629);
   data_mc_ratio__382->SetBinError(16,0.008788818);
   data_mc_ratio__382->SetBinError(17,0.01131309);
   data_mc_ratio__382->SetBinError(18,0.008002787);
   data_mc_ratio__382->SetBinError(19,0.01867009);
   data_mc_ratio__382->SetBinError(20,0.02503053);
   data_mc_ratio__382->SetBinError(21,0.02571875);
   data_mc_ratio__382->SetBinError(22,0.04638708);
   data_mc_ratio__382->SetBinError(23,0.09277257);
   data_mc_ratio__382->SetBinError(24,0.3589278);
   data_mc_ratio__382->SetBinError(25,0.1818806);
   data_mc_ratio__382->SetBinError(26,0.6312625);
   data_mc_ratio__382->SetBinError(27,0.16303);
   data_mc_ratio__382->SetBinError(28,0.5628756);
   data_mc_ratio__382->SetBinError(29,0.570852);
   data_mc_ratio__382->SetBinError(30,0.4588556);
   data_mc_ratio__382->SetBinError(31,0.2571879);
   data_mc_ratio__382->SetMinimum(0.4);
   data_mc_ratio__382->SetMaximum(1.6);
   data_mc_ratio__382->SetEntries(101.9959);
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
   0.01865765,
   0.01719376,
   0.02182073,
   0.0293281,
   0.03504757,
   0.04530527,
   0.1813165,
   0.05004769,
   0.05613924,
   0.06249121,
   0.06316448,
   0.08143142,
   0.08005146,
   0.08829238,
   0.09880566,
   0.1211944,
   0.1432526,
   0.2085209,
   0.2238204,
   0.2871321,
   0.3183096,
   0.5116376,
   0.2566315,
   0.2182396,
   0.4607219,
   0.2429725,
   0.4814285,
   0.5402818,
   0.6420704,
   0.6508613};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1278,Graph_from_mc_statistical_error_fy1278,Graph_from_mc_statistical_error_fex1278,Graph_from_mc_statistical_error_fey1278);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1278 = new TH1F("Graph_Graph_from_mc_statistical_error1278","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1278->SetMinimum(0.2189665);
   Graph_Graph_from_mc_statistical_error1278->SetMaximum(1.781034);
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
