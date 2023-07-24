void H_dR_Bj1_tags_16()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_16/H_dR_Bj1_tags_16
//=========  (Mon Jul 24 10:11:23 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_tags_16 = new TCanvas("H_dR_Bj1_tags_16", "H_dR_Bj1_tags_16",0,0,600,600);
   H_dR_Bj1_tags_16->SetHighLightColor(2);
   H_dR_Bj1_tags_16->Range(0,0,1,1);
   H_dR_Bj1_tags_16->SetFillColor(0);
   H_dR_Bj1_tags_16->SetFillStyle(4000);
   H_dR_Bj1_tags_16->SetBorderMode(0);
   H_dR_Bj1_tags_16->SetBorderSize(2);
   H_dR_Bj1_tags_16->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-955.4324,6.314516,954486.9);
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
   st->SetMaximum(818040.6);
   
   TH1F *st_stack_45 = new TH1F("st_stack_45","",30,0,6);
   st_stack_45->SetMinimum(0.01);
   st_stack_45->SetMaximum(858942.7);
   st_stack_45->SetDirectory(0);
   st_stack_45->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_45->SetLineColor(ci);
   st_stack_45->GetXaxis()->SetRange(1,30);
   st_stack_45->GetXaxis()->SetLabelFont(42);
   st_stack_45->GetXaxis()->SetLabelSize(0.035);
   st_stack_45->GetXaxis()->SetTitleSize(0.035);
   st_stack_45->GetXaxis()->SetTitleFont(42);
   st_stack_45->GetYaxis()->SetTitle("Events/0.2");
   st_stack_45->GetYaxis()->SetLabelFont(42);
   st_stack_45->GetYaxis()->SetLabelSize(0.05);
   st_stack_45->GetYaxis()->SetTitleSize(0.057);
   st_stack_45->GetYaxis()->SetTitleOffset(1.2);
   st_stack_45->GetYaxis()->SetTitleFont(42);
   st_stack_45->GetZaxis()->SetLabelFont(42);
   st_stack_45->GetZaxis()->SetLabelSize(0.035);
   st_stack_45->GetZaxis()->SetTitleSize(0.035);
   st_stack_45->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_45);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(1,81971.27);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(2,316354.3);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(3,294917.1);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(4,263677.5);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(5,220450);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(6,180451.5);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(7,153992.9);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(8,136822.6);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(9,155748.1);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(10,101118.7);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(11,117591.9);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(12,87382.1);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(13,92313.71);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(14,78154.84);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(15,71320.59);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(16,67730.22);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(17,44653.73);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(18,37385.14);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(19,33433.34);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(20,32160.24);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(21,23430.63);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(22,20541.58);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(23,18316.04);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(24,13878.26);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(25,12219.39);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(26,7405.492);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(27,5978.385);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(28,6560.487);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(29,6434.761);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(30,1528.433);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(31,4654.55);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(1,3317.385);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(2,8241.192);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(3,7953.988);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(4,8877.111);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(5,8469.348);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(6,6947.398);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(7,7063.301);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(8,6597.471);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(9,29579.03);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(10,4688.729);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(11,21137.9);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(12,4919.343);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(13,5573.139);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(14,4805.346);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(15,4320.16);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(16,4825.727);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(17,2899.344);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(18,2721.012);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(19,3209.63);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(20,3453.562);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(21,1905.064);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(22,2559.019);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(23,1735.162);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(24,1479.604);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(25,2323.008);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(26,964.5974);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(27,952.7084);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(28,1121.217);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(29,2150.601);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(30,398.994);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(31,1592.888);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetEntries(174298);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(1,919.6036);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(2,3284.204);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(3,3892.613);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(4,3272.057);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(5,2597.704);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(6,2094.064);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(7,1753.297);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(8,1455.038);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(9,1309.551);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(10,1150.802);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(11,1065.61);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(12,985.1671);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(13,896.4718);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(14,819.1085);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(15,749.4806);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(16,653.4719);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(17,530.2181);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(18,442.1373);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(19,368.581);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(20,318.0345);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(21,259.5951);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(22,203.4032);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(23,169.1914);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(24,126.7647);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(25,98.23603);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(26,74.56279);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(27,58.78424);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(28,41.15126);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(29,22.61258);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(30,19.63316);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(31,34.51809);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(1,12.95532);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(2,23.17728);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(3,24.65534);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(4,22.28417);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(5,19.80458);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(6,17.75385);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(7,16.26436);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(8,14.54997);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(9,13.88744);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(10,12.93596);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(11,12.47938);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(12,11.95701);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(13,11.3737);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(14,10.92088);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(15,10.26404);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(16,9.541848);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(17,8.54496);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(18,7.648082);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(19,7.045057);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(20,6.602592);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(21,5.893356);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(22,5.224206);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(23,4.770148);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(24,4.041866);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(25,3.517282);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(26,3.076801);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(27,2.777894);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(28,2.302906);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(29,1.430082);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(30,1.559226);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(31,1.945479);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetEntries(391454);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_3 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(1,9442.795);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(2,44394.44);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(3,61454.01);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(4,56542.38);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(5,44977.59);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(6,35446.92);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(7,28641.79);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(8,24116.32);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(9,21112.36);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(10,19002.05);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(11,17422.51);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(12,16041.8);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(13,14567.74);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(14,13084.06);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(15,11543.2);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(16,9954.898);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(17,8151.011);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(18,6745.962);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(19,5538.649);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(20,4497.149);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(21,3594.961);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(22,2835.991);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(23,2212.164);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(24,1677.734);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(25,1257.44);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(26,893.6382);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(27,633.4298);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(28,432.7324);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(29,297.3936);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(30,193.8164);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(31,370.1809);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(1,24.09385);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(2,52.34999);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(3,61.7966);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(4,59.41564);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(5,53.05734);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(6,47.11009);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(7,42.33607);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(8,38.84231);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(9,36.35249);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(10,34.50123);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(11,33.05069);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(12,31.72542);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(13,30.21769);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(14,28.63613);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(15,26.88258);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(16,24.93624);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(17,22.5589);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(18,20.50856);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(19,18.561);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(20,16.71093);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(21,14.92226);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(22,13.24565);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(23,11.68513);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(24,10.16297);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(25,8.799449);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(26,7.397862);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(27,6.232856);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(28,5.130788);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(29,4.258526);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(30,3.437394);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(31,4.744427);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetEntries(7663533);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_4 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(1,853.2432);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(2,2366.854);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(3,2493.7);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(4,2075.203);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(5,1671.332);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(6,1391.223);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(7,1139.122);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(8,982.787);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(9,870.9217);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(10,813.0626);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(11,726.1231);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(12,676.1967);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(13,602.3006);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(14,550.6205);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(15,497.4124);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(16,429.4194);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(17,351.1714);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(18,316.2798);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(19,265.8781);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(20,213.0869);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(21,177.3313);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(22,144.3581);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(23,112.5);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(24,94.66414);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(25,72.7737);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(26,62.1927);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(27,41.82526);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(28,26.27504);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(29,16.91493);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(30,10.86342);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(31,18.46533);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(1,13.25738);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(2,31.86904);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(3,36.57543);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(4,36.96972);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(5,33.68438);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(6,30.23479);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(7,27.23147);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(8,25.06738);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(9,22.93632);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(10,22.15161);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(11,20.84055);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(12,19.83145);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(13,18.19731);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(14,16.653);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(15,16.36741);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(16,14.92854);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(17,13.80506);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(18,14.13409);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(19,12.5591);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(20,10.40146);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(21,10.4622);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(22,9.130841);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(23,7.159014);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(24,7.420008);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(25,6.684131);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(26,6.58789);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(27,5.146195);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(28,1.91707);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(29,1.633021);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(30,1.371953);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(31,3.097765);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetEntries(163132);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_5 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(1,576.2473);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(2,1639.487);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(3,1579.472);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(4,1247.321);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(5,990.4671);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(6,752.1816);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(7,590.8783);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(8,567.8181);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(9,446.4343);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(10,415.6384);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(11,381.2477);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(12,372.8153);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(13,308.5541);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(14,314.6349);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(15,301.1656);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(16,256.4613);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(17,185.2193);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(18,167.3256);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(19,150.8035);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(20,105.9326);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(21,121.2058);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(22,89.16747);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(23,101.6075);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(24,62.31553);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(25,39.61937);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(26,30.08607);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(27,23.8125);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(28,15.40784);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(29,9.80389);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(30,8.476183);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(31,11.69656);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(1,11.02346);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(2,41.94663);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(3,49.21978);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(4,44.75145);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(5,41.90441);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(6,31.6474);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(7,25.27889);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(8,30.19546);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(9,20.47506);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(10,21.88314);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(11,22.23242);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(12,22.22076);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(13,17.82542);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(14,19.1734);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(15,20.7095);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(16,19.98238);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(17,13.69067);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(18,14.79525);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(19,13.4505);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(20,12.06583);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(21,14.17413);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(22,10.55177);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(23,16.11015);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(24,8.170945);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(25,3.828043);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(26,6.668276);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(27,2.922857);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(28,2.367069);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(29,1.736966);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(30,2.219156);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(31,2.37697);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetEntries(113083);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_6 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(1,2.74942);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(2,9.107454);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(3,9.279293);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(4,6.358034);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(5,5.49884);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(6,4.897404);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(7,3.179017);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(8,3.436775);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(9,3.264936);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(10,1.804307);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(11,2.405743);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(12,1.718388);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(13,1.632468);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(14,2.233904);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(15,1.37471);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(16,0.9451131);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(17,1.202871);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(18,1.202871);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(19,1.031033);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(20,0.6014356);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(21,0.6014356);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(22,0.3436775);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(23,0.08591938);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(24,0.1718388);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(26,0.08591938);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(27,0.1718388);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(28,0.1718388);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(29,0.08591938);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(30,0.08591938);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(31,0.08591938);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(1,0.4860334);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(2,0.8845941);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(3,0.8929003);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(4,0.7391064);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(5,0.687355);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(6,0.6486771);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(7,0.5226272);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(8,0.5434018);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(9,0.5296426);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(10,0.393732);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(11,0.4546426);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(12,0.3842431);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(13,0.3745139);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(14,0.4381046);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(15,0.3436775);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(16,0.2849623);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(17,0.3214809);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(18,0.3214809);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(19,0.2976334);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(20,0.2273213);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(21,0.2273213);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(22,0.1718388);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(23,0.08591938);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(24,0.1215083);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(26,0.08591938);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(27,0.1215083);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(28,0.1215083);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(29,0.08591938);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(30,0.08591938);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(31,0.08591938);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetEntries(766);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_7 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(1,8.728831);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(2,25.61307);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(3,25.03964);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(4,17.26652);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(5,11.65968);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(6,9.302258);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(7,6.116553);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(8,7.709406);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(9,6.307695);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(10,4.714843);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(11,4.523701);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(12,4.714843);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(13,4.20513);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(14,4.141416);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(15,3.058277);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(16,3.185705);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(17,1.656566);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(18,2.48485);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(19,1.720281);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(20,1.210568);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(21,1.146854);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(22,0.3822846);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(23,1.019426);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(24,0.8919973);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(25,0.7645692);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(26,0.5097128);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(27,0.5734269);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(28,0.2548564);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(29,0.1274282);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(1,0.7457544);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(2,1.277464);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(3,1.263083);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(4,1.048866);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(5,0.8619083);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(6,0.7698603);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(7,0.6242681);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(8,0.7008551);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(9,0.6339472);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(10,0.5480894);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(11,0.5368645);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(12,0.5480894);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(13,0.5176158);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(14,0.5136795);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(15,0.4414242);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(16,0.4505267);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(17,0.3248794);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(18,0.3978944);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(19,0.3310682);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(20,0.2777233);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(21,0.270316);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(22,0.156067);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(23,0.2548564);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(24,0.2383963);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(25,0.2207121);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(26,0.1802107);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(27,0.1911423);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(28,0.1274282);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(29,0.09010534);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetEntries(2496);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_8 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(1,7.713499);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(2,22.78173);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(3,23.31988);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(4,17.93837);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(5,12.73624);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(6,7.892883);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(7,6.278429);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(8,6.816581);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(9,4.663976);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(10,4.663976);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(11,3.946441);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(12,5.022744);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(13,5.740278);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(14,3.228907);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(15,3.049523);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(16,2.331988);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(17,2.511372);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(18,1.973221);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(19,1.793837);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(20,0.7175348);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(21,0.7175348);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(22,0.7175348);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(23,0.7175348);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(24,0.3587674);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(25,0.5381511);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(26,0.3587674);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(27,0.1793837);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(28,0.3587674);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(30,0.1793837);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(31,0.3587674);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(1,1.176298);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(2,2.021552);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(3,2.045289);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(4,1.793837);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(5,1.511514);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(6,1.189897);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(7,1.061248);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(8,1.105795);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(9,0.914681);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(10,0.914681);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(11,0.8413841);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(12,0.9492093);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(13,1.014747);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(14,0.7610606);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(15,0.7396179);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(16,0.6467771);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(17,0.6711923);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(18,0.5949484);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(19,0.5672611);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(20,0.3587674);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(21,0.3587674);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(22,0.3587674);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(23,0.3587674);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(24,0.2536869);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(25,0.3107017);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(26,0.2536869);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(27,0.1793837);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(28,0.2536869);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(30,0.1793837);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(31,0.2536869);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetEntries(834);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_9 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(1,4.357485);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(2,14.3139);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(3,14.96635);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(4,11.05717);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(5,7.829403);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(6,5.746528);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(7,4.589222);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(8,3.943669);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(9,3.440192);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(10,3.182247);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(11,2.990512);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(12,2.783604);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(13,2.495312);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(14,2.067702);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(15,1.838723);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(16,1.500773);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(17,1.224896);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(18,0.9917795);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(19,0.790389);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(20,0.6648647);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(21,0.5434786);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(22,0.477268);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(23,0.3807109);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(24,0.3269148);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(25,0.2441516);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(26,0.1917348);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(27,0.128283);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(28,0.06483121);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(29,0.05379611);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(30,0.03172591);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(31,0.05793427);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(1,0.07752844);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(2,0.1405148);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(3,0.1436816);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(4,0.1234995);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(5,0.103922);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(6,0.08903195);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(7,0.07956328);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(8,0.07375532);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(9,0.06888656);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(10,0.06625369);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(11,0.06422674);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(12,0.06196505);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(13,0.05866857);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(14,0.05340563);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(15,0.05036181);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(16,0.04549888);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(17,0.04110482);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(18,0.03698714);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(19,0.03301897);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(20,0.03028376);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(21,0.02738006);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(22,0.02565809);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(23,0.0229161);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(24,0.0212354);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(25,0.01835156);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(26,0.01626274);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(27,0.01330233);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(28,0.009456604);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(29,0.008614272);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(30,0.00661531);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(31,0.008939452);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetEntries(67621);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_10 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(1,1.958871);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(2,6.656795);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(3,6.97653);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(4,5.25576);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(5,3.68716);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(6,2.714706);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(7,2.244234);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(8,1.934524);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(9,1.690694);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(10,1.505942);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(11,1.421085);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(12,1.295769);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(13,1.18943);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(14,1.062681);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(15,0.9198207);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(16,0.8030976);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(17,0.6391125);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(18,0.5435141);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(19,0.4403968);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(20,0.3763066);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(21,0.317587);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(22,0.2488421);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(23,0.2395329);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(24,0.1650593);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(25,0.139638);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(26,0.1024012);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(27,0.06910292);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(28,0.03652071);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(29,0.03115002);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(30,0.01826036);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(31,0.03007588);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(1,0.02648332);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(2,0.04882049);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(3,0.0499792);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(4,0.04337978);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(5,0.03633419);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(6,0.03117676);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(7,0.02834677);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(8,0.02631822);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(9,0.02460379);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(10,0.02322061);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(11,0.02255691);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(12,0.02153939);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(13,0.02063664);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(14,0.01950613);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(15,0.01814768);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(16,0.01695718);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(17,0.01512719);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(18,0.01395002);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(19,0.01255717);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(20,0.01160755);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(21,0.01066353);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(22,0.009439119);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(23,0.009260877);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(24,0.007687578);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(25,0.007070846);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(26,0.006055111);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(27,0.004974137);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(28,0.003616089);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(29,0.003339633);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(30,0.002556961);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(31,0.003281548);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetEntries(124885);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_11 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(1,0.06017016);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(2,0.374696);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(3,0.4047811);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(4,0.350081);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(5,0.2406807);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(6,0.1805105);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(7,0.1176053);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(8,0.1066653);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(9,0.06837519);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(10,0.04923013);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(11,0.04923013);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(12,0.06290517);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(13,0.07111019);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(14,0.05470015);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(15,0.03008508);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(16,0.02461507);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(17,0.02461507);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(18,0.03008508);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(19,0.01914505);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(20,0.02735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(21,0.01641004);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(22,0.01367504);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(23,0.01914505);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(24,0.01367504);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(25,0.008205022);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(26,0.005470015);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(27,0.005470015);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(1,0.01282832);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(2,0.03201244);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(3,0.0332728);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(4,0.03094308);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(5,0.02565664);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(6,0.02221931);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(7,0.01793464);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(8,0.01708012);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(9,0.01367504);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(10,0.01160365);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(11,0.01160365);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(12,0.01311663);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(13,0.01394586);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(14,0.01223133);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(15,0.009070994);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(16,0.008205022);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(17,0.008205022);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(18,0.009070994);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(19,0.00723615);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(20,0.008648853);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(21,0.006699373);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(22,0.006115663);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(23,0.00723615);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(24,0.006115663);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(25,0.004737172);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(26,0.003867885);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(27,0.003867885);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetEntries(888);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_12 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(1,0.02643767);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(2,0.1482653);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(3,0.1732739);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(4,0.1697013);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(5,0.1218277);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(6,0.07645489);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(7,0.05287535);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(8,0.05251808);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(9,0.03429752);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(10,0.02786674);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(11,0.02357955);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(12,0.01929236);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(13,0.02465134);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(14,0.02250775);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(15,0.01714876);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(16,0.01500517);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(17,0.0125043);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(18,0.01429063);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(19,0.01607696);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(20,0.01178977);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(21,0.01000344);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(22,0.008217114);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(23,0.005358988);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(24,0.006430785);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(25,0.002858127);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(26,0.002143595);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(27,0.003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(28,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(29,0.0007145317);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(30,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(31,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(1,0.003073317);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(2,0.007278059);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(3,0.007867964);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(4,0.007786429);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(5,0.006597337);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(6,0.005226349);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(7,0.004346327);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(8,0.004331618);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(9,0.003500476);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(10,0.003155287);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(11,0.002902441);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(12,0.002625357);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(13,0.002967673);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(14,0.00283571);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(15,0.00247521);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(16,0.002315347);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(17,0.002113613);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(18,0.002259548);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(19,0.002396612);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(20,0.002052336);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(21,0.001890473);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(22,0.001713387);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(23,0.001383685);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(24,0.001515751);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(25,0.0010105);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(26,0.000875119);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(27,0.001129774);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(28,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(29,0.0005052502);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(30,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(31,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetEntries(3081);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR_Bj1__89 = new TH1D("VbbHcc_tags_H_dR_Bj1__89","",30,0,6);
   VbbHcc_tags_H_dR_Bj1__89->SetBinContent(1,65387);
   VbbHcc_tags_H_dR_Bj1__89->SetBinContent(2,179644);
   VbbHcc_tags_H_dR_Bj1__89->SetBinContent(3,179260);
   VbbHcc_tags_H_dR_Bj1__89->SetBinContent(4,148019);
   VbbHcc_tags_H_dR_Bj1__89->SetBinContent(5,122517);
   VbbHcc_tags_H_dR_Bj1__89->SetBinContent(6,102093);
   VbbHcc_tags_H_dR_Bj1__89->SetBinContent(7,85957);
   VbbHcc_tags_H_dR_Bj1__89->SetBinContent(8,74615);
   VbbHcc_tags_H_dR_Bj1__89->SetBinContent(9,66651);
   VbbHcc_tags_H_dR_Bj1__89->SetBinContent(10,59584);
   VbbHcc_tags_H_dR_Bj1__89->SetBinContent(11,54849);
   VbbHcc_tags_H_dR_Bj1__89->SetBinContent(12,50651);
   VbbHcc_tags_H_dR_Bj1__89->SetBinContent(13,46675);
   VbbHcc_tags_H_dR_Bj1__89->SetBinContent(14,42982);
   VbbHcc_tags_H_dR_Bj1__89->SetBinContent(15,39369);
   VbbHcc_tags_H_dR_Bj1__89->SetBinContent(16,34664);
   VbbHcc_tags_H_dR_Bj1__89->SetBinContent(17,28569);
   VbbHcc_tags_H_dR_Bj1__89->SetBinContent(18,24172);
   VbbHcc_tags_H_dR_Bj1__89->SetBinContent(19,20301);
   VbbHcc_tags_H_dR_Bj1__89->SetBinContent(20,17138);
   VbbHcc_tags_H_dR_Bj1__89->SetBinContent(21,14434);
   VbbHcc_tags_H_dR_Bj1__89->SetBinContent(22,11995);
   VbbHcc_tags_H_dR_Bj1__89->SetBinContent(23,9645);
   VbbHcc_tags_H_dR_Bj1__89->SetBinContent(24,7926);
   VbbHcc_tags_H_dR_Bj1__89->SetBinContent(25,6225);
   VbbHcc_tags_H_dR_Bj1__89->SetBinContent(26,4750);
   VbbHcc_tags_H_dR_Bj1__89->SetBinContent(27,3444);
   VbbHcc_tags_H_dR_Bj1__89->SetBinContent(28,2422);
   VbbHcc_tags_H_dR_Bj1__89->SetBinContent(29,1686);
   VbbHcc_tags_H_dR_Bj1__89->SetBinContent(30,1128);
   VbbHcc_tags_H_dR_Bj1__89->SetBinContent(31,1923);
   VbbHcc_tags_H_dR_Bj1__89->SetEntries(1508704);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1__89->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1__89->SetLineWidth(2);
   VbbHcc_tags_H_dR_Bj1__89->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_Bj1__89->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_Bj1__89->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1__89->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__89->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__89->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__89->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__89->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__89->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__89->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__89->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1__89->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__89->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__89->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__89->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__89->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__89->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fx1089[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fy1089[30] = {
   93788.75,
   368118.3,
   364417,
   326872.8,
   270728.8,
   220166.7,
   186140.6,
   163968.5,
   179506.8,
   122516.2,
   137202.7,
   105473.7,
   108704.1,
   92936.08,
   84422.14,
   79033.27,
   53878.62,
   45064.09,
   39763.07,
   37298.05,
   27587.07,
   23816.69,
   20913.97,
   15841.67,
   13689.16,
   8467.227,
   6737.368,
   7076.94,
   6781.785,
   1761.538};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fex1089[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fey1089[30] = {
   3317.543,
   8241.559,
   7954.503,
   8877.528,
   8469.708,
   6947.718,
   7063.545,
   6597.719,
   29579.07,
   4688.977,
   21137.95,
   4919.551,
   5573.291,
   4805.511,
   4320.336,
   4825.865,
   2899.51,
   2721.177,
   3209.744,
   3453.646,
   1905.213,
   2559.097,
   1735.298,
   1479.686,
   2323.04,
   964.6763,
   952.7512,
   1121.235,
   2150.607,
   399.0204};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_Bj1_fx1089,Graph_from_VbbHcc_tags_H_dR_Bj1_fy1089,Graph_from_VbbHcc_tags_H_dR_Bj1_fex1089,Graph_from_VbbHcc_tags_H_dR_Bj1_fey1089);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->SetMinimum(1226.266);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->SetMaximum(413859.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR_Bj1","MC unc. (stat.)","fl");

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
   H_dR_Bj1_tags_16->cd();
  
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
   
   TH1D *data_mc_ratio__90 = new TH1D("data_mc_ratio__90","",30,0,6);
   data_mc_ratio__90->SetBinContent(1,0.6971732);
   data_mc_ratio__90->SetBinContent(2,0.4880062);
   data_mc_ratio__90->SetBinContent(3,0.491909);
   data_mc_ratio__90->SetBinContent(4,0.4528336);
   data_mc_ratio__90->SetBinContent(5,0.4525451);
   data_mc_ratio__90->SetBinContent(6,0.4637077);
   data_mc_ratio__90->SetBinContent(7,0.4617854);
   data_mc_ratio__90->SetBinContent(8,0.4550568);
   data_mc_ratio__90->SetBinContent(9,0.3713007);
   data_mc_ratio__90->SetBinContent(10,0.4863358);
   data_mc_ratio__90->SetBinContent(11,0.3997662);
   data_mc_ratio__90->SetBinContent(12,0.480224);
   data_mc_ratio__90->SetBinContent(13,0.4293765);
   data_mc_ratio__90->SetBinContent(14,0.4624899);
   data_mc_ratio__90->SetBinContent(15,0.466335);
   data_mc_ratio__90->SetBinContent(16,0.4386001);
   data_mc_ratio__90->SetBinContent(17,0.5302474);
   data_mc_ratio__90->SetBinContent(18,0.5363917);
   data_mc_ratio__90->SetBinContent(19,0.5105492);
   data_mc_ratio__90->SetBinContent(20,0.4594878);
   data_mc_ratio__90->SetBinContent(21,0.5232161);
   data_mc_ratio__90->SetBinContent(22,0.5036385);
   data_mc_ratio__90->SetBinContent(23,0.4611749);
   data_mc_ratio__90->SetBinContent(24,0.500326);
   data_mc_ratio__90->SetBinContent(25,0.4547394);
   data_mc_ratio__90->SetBinContent(26,0.5609865);
   data_mc_ratio__90->SetBinContent(27,0.5111788);
   data_mc_ratio__90->SetBinContent(28,0.3422383);
   data_mc_ratio__90->SetBinContent(29,0.2486071);
   data_mc_ratio__90->SetBinContent(30,0.6403495);
   data_mc_ratio__90->SetBinContent(31,0.3778038);
   data_mc_ratio__90->SetBinError(1,0.002726434);
   data_mc_ratio__90->SetBinError(2,0.001151381);
   data_mc_ratio__90->SetBinError(3,0.001161831);
   data_mc_ratio__90->SetBinError(4,0.001177009);
   data_mc_ratio__90->SetBinError(5,0.001292896);
   data_mc_ratio__90->SetBinError(6,0.001451264);
   data_mc_ratio__90->SetBinError(7,0.001575069);
   data_mc_ratio__90->SetBinError(8,0.001665914);
   data_mc_ratio__90->SetBinError(9,0.00143821);
   data_mc_ratio__90->SetBinError(10,0.001992376);
   data_mc_ratio__90->SetBinError(11,0.001706953);
   data_mc_ratio__90->SetBinError(12,0.002133781);
   data_mc_ratio__90->SetBinError(13,0.00198745);
   data_mc_ratio__90->SetBinError(14,0.002230791);
   data_mc_ratio__90->SetBinError(15,0.002350287);
   data_mc_ratio__90->SetBinError(16,0.002355751);
   data_mc_ratio__90->SetBinError(17,0.00313712);
   data_mc_ratio__90->SetBinError(18,0.003450053);
   data_mc_ratio__90->SetBinError(19,0.003583264);
   data_mc_ratio__90->SetBinError(20,0.003509893);
   data_mc_ratio__90->SetBinError(21,0.004354996);
   data_mc_ratio__90->SetBinError(22,0.004598527);
   data_mc_ratio__90->SetBinError(23,0.004695854);
   data_mc_ratio__90->SetBinError(24,0.005619867);
   data_mc_ratio__90->SetBinError(25,0.005763587);
   data_mc_ratio__90->SetBinError(26,0.008139647);
   data_mc_ratio__90->SetBinError(27,0.008710464);
   data_mc_ratio__90->SetBinError(28,0.00695411);
   data_mc_ratio__90->SetBinError(29,0.00605459);
   data_mc_ratio__90->SetBinError(30,0.01906613);
   data_mc_ratio__90->SetBinError(31,0.1185475);
   data_mc_ratio__90->SetMinimum(0.4);
   data_mc_ratio__90->SetMaximum(1.6);
   data_mc_ratio__90->SetEntries(2820.185);
   data_mc_ratio__90->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__90->SetLineColor(ci);
   data_mc_ratio__90->SetLineWidth(2);
   data_mc_ratio__90->SetMarkerStyle(20);
   data_mc_ratio__90->SetMarkerSize(1.2);
   data_mc_ratio__90->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__90->GetXaxis()->SetRange(1,30);
   data_mc_ratio__90->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__90->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__90->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__90->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__90->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__90->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__90->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__90->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__90->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__90->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__90->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__90->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__90->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__90->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__90->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__90->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__90->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1090[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1090[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1090[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1090[30] = {
   0.03537251,
   0.02238835,
   0.02182802,
   0.02715897,
   0.03128484,
   0.03155663,
   0.03794737,
   0.04023771,
   0.1647797,
   0.03827231,
   0.1540637,
   0.04664244,
   0.05127028,
   0.0517077,
   0.0511754,
   0.06106118,
   0.05381559,
   0.06038461,
   0.08072176,
   0.09259588,
   0.0690618,
   0.1074497,
   0.08297312,
   0.09340467,
   0.1696993,
   0.1139306,
   0.141413,
   0.158435,
   0.3171152,
   0.2265182};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1090,Graph_from_mc_statistical_error_fy1090,Graph_from_mc_statistical_error_fex1090,Graph_from_mc_statistical_error_fey1090);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1090 = new TH1F("Graph_Graph_from_mc_statistical_error1090","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1090->SetMinimum(0.6194618);
   Graph_Graph_from_mc_statistical_error1090->SetMaximum(1.380538);
   Graph_Graph_from_mc_statistical_error1090->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1090->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1090->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1090->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1090->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1090->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1090->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1090->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1090->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1090->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1090->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1090->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1090->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1090->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1090->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1090->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1090);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_tags_16->cd();
   H_dR_Bj1_tags_16->Modified();
   H_dR_Bj1_tags_16->cd();
   H_dR_Bj1_tags_16->SetSelected(H_dR_Bj1_tags_16);
}
