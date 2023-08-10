void H_dR_Bj0_tags_17()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_17/H_dR_Bj0_tags_17
//=========  (Thu Aug 10 12:23:25 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_tags_17 = new TCanvas("H_dR_Bj0_tags_17", "H_dR_Bj0_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_tags_17->SetHighLightColor(2);
   H_dR_Bj0_tags_17->Range(0,0,1,1);
   H_dR_Bj0_tags_17->SetFillColor(0);
   H_dR_Bj0_tags_17->SetFillStyle(4000);
   H_dR_Bj0_tags_17->SetBorderMode(0);
   H_dR_Bj0_tags_17->SetBorderSize(2);
   H_dR_Bj0_tags_17->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-75.16585,6.314516,75100.68);
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
   st->SetMaximum(64364.85);
   
   TH1F *st_stack_42 = new TH1F("st_stack_42","",30,0,6);
   st_stack_42->SetMinimum(0.01);
   st_stack_42->SetMaximum(67583.09);
   st_stack_42->SetDirectory(0);
   st_stack_42->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_42->SetLineColor(ci);
   st_stack_42->GetXaxis()->SetRange(1,30);
   st_stack_42->GetXaxis()->SetLabelFont(42);
   st_stack_42->GetXaxis()->SetLabelSize(0.035);
   st_stack_42->GetXaxis()->SetTitleSize(0.035);
   st_stack_42->GetXaxis()->SetTitleFont(42);
   st_stack_42->GetYaxis()->SetTitle("Events/0.2");
   st_stack_42->GetYaxis()->SetLabelFont(42);
   st_stack_42->GetYaxis()->SetLabelSize(0.05);
   st_stack_42->GetYaxis()->SetTitleSize(0.057);
   st_stack_42->GetYaxis()->SetTitleOffset(1.2);
   st_stack_42->GetYaxis()->SetTitleFont(42);
   st_stack_42->GetZaxis()->SetLabelFont(42);
   st_stack_42->GetZaxis()->SetLabelSize(0.035);
   st_stack_42->GetZaxis()->SetTitleSize(0.035);
   st_stack_42->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_42);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(1,4600.108);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(2,20601.05);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(3,22046.06);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(4,16344.77);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(5,12886.34);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(6,27273.97);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(7,11123.21);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(8,10814.16);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(9,9228.392);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(10,7237.084);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(11,5374.073);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(12,6254.437);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(13,7353.408);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(14,5338.683);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(15,5039.539);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(16,4878.988);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(17,4087.182);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(18,2265.382);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(19,17628.97);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(20,959.8319);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(21,1653.363);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(22,459.8389);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(23,666.6256);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(24,525.1197);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(25,592.6441);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(26,340.0003);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(27,368.0106);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(28,146.4151);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(29,62.9225);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(30,63.23819);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(31,116.3065);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(1,687.3046);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(2,1687.889);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(3,1828.457);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(4,1623.796);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(5,1380.387);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(6,14887.9);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(7,1792.117);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(8,1390.536);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(9,1253.672);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(10,1064.613);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(11,911.7041);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(12,990.5408);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(13,1154.547);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(14,912.6475);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(15,907.2679);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(16,907.2046);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(17,822.9929);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(18,492.9528);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(19,14830.35);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(20,287.0975);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(21,544.8276);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(22,84.26362);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(23,279.624);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(24,274.6848);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(25,278.058);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(26,79.68287);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(27,270.3571);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(28,47.986);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(29,36.30976);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(30,36.313);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(31,50.84861);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetEntries(9821);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(1,24.99896);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(2,98.53549);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(3,122.2802);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(4,98.55285);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(5,79.75702);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(6,70.56487);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(7,59.47114);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(8,49.32454);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(9,45.30809);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(10,36.77173);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(11,36.19012);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(12,33.09742);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(13,32.45971);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(14,29.49729);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(15,28.04118);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(16,22.56644);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(17,20.03682);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(18,13.10057);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(19,14.72932);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(20,11.31073);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(21,9.728337);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(22,6.207566);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(23,5.199781);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(24,4.052064);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(25,5.73247);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(26,3.367852);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(27,1.212351);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(28,1.047956);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(29,1.002087);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(30,0.3158788);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(31,1.213068);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(1,2.034282);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(2,3.982714);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(3,4.4333);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(4,3.982168);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(5,3.455929);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(6,3.286118);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(7,3.080828);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(8,2.771691);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(9,2.598546);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(10,2.375059);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(11,2.357852);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(12,2.273689);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(13,2.242223);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(14,2.130348);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(15,2.112616);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(16,1.813742);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(17,1.745047);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(18,1.210132);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(19,1.468973);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(20,1.26116);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(21,1.204976);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(22,0.9076435);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(23,0.8131251);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(24,0.6152332);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(25,0.9828237);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(26,0.7515237);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(27,0.3456631);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(28,0.2343441);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(29,0.4043673);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(30,0.1289638);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(31,0.4184866);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetEntries(11223);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_3 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(1,376.1376);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(2,1809.027);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(3,2333.912);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(4,2115.002);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(5,1785.387);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(6,1425.676);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(7,1183.87);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(8,996.716);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(9,876.9218);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(10,780.8066);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(11,705.6222);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(12,672.4428);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(13,608.9453);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(14,542.7287);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(15,493.1351);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(16,427.0651);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(17,348.8206);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(18,289.4074);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(19,237.0298);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(20,197.9839);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(21,156.6549);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(22,133.4348);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(23,99.61487);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(24,76.04031);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(25,58.99198);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(26,43.5744);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(27,29.82053);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(28,20.69364);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(29,15.00266);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(30,8.863949);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(31,16.12395);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(1,4.871389);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(2,10.69826);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(3,12.19411);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(4,11.61778);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(5,10.68131);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(6,9.541697);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(7,8.684786);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(8,7.968181);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(9,7.482651);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(10,7.065646);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(11,6.71089);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(12,6.557987);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(13,6.242423);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(14,5.895887);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(15,5.619597);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(16,5.21079);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(17,4.710121);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(18,4.291517);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(19,3.87341);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(20,3.540193);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(21,3.148038);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(22,2.897145);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(23,2.498811);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(24,2.181078);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(25,1.934156);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(26,1.663212);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(27,1.369231);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(28,1.130345);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(29,0.9707631);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(30,0.7365955);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(31,0.9978611);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetEntries(306587);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_4 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(1,61.59998);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(2,280.8293);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(3,303.7278);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(4,258.6453);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(5,200.9001);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(6,173.4281);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(7,127.1191);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(8,123.1115);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(9,107.1561);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(10,93.15771);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(11,89.05443);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(12,81.7265);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(13,84.81693);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(14,67.55162);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(15,62.48605);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(16,63.7175);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(17,39.88423);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(18,35.20178);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(19,25.93697);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(20,23.11825);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(21,20.79248);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(22,13.98762);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(23,11.73508);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(24,14.13656);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(25,9.768763);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(26,4.5435);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(27,3.252717);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(28,2.599827);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(29,1.326375);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(30,0.2327714);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(31,1.348625);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(1,3.792239);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(2,10.55338);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(3,10.70112);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(4,12.14396);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(5,8.897372);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(6,10.65531);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(7,7.398229);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(8,6.919599);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(9,6.617026);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(10,4.459157);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(11,6.17709);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(12,5.544187);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(13,7.159976);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(14,3.721586);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(15,5.134457);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(16,6.433421);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(17,4.636813);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(18,3.753436);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(19,2.307891);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(20,3.375846);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(21,4.198127);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(22,1.745516);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(23,1.504736);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(24,1.83235);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(25,2.951852);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(26,0.8778369);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(27,0.8155342);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(28,0.6347507);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(29,0.4500138);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(30,0.1352369);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(31,0.5569702);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetEntries(17505);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_5 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(1,7.312346);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(2,27.05708);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(3,33.52444);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(4,22.71589);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(5,33.36595);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(6,12.76112);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(7,8.739276);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(8,14.05433);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(9,11.57382);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(10,8.831343);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(11,10.19808);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(12,6.864157);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(13,6.910104);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(14,7.33543);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(15,5.728201);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(16,4.719677);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(17,4.571531);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(18,4.378392);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(19,3.613189);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(20,3.241504);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(21,1.486842);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(22,4.91546);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(23,0.5786481);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(24,1.064756);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(25,0.602964);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(26,0.8594642);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(27,1.999485);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(28,0.3661294);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(29,0.2656689);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(30,0.5462044);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(31,0.0116142);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(1,0.8621522);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(2,3.40511);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(3,3.791613);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(4,3.371746);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(5,9.979567);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(6,1.782973);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(7,1.080641);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(8,2.872802);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(9,2.511529);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(10,2.17825);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(11,2.464592);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(12,1.499452);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(13,1.414872);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(14,1.081598);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(15,1.738735);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(16,1.326116);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(17,0.925891);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(18,1.356695);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(19,1.267931);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(20,1.249441);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(21,0.4902349);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(22,2.045319);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(23,0.2721649);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(24,0.3311252);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(25,0.2238108);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(26,0.3390444);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(27,1.23145);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(28,0.1825128);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(29,0.1898094);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(30,0.394564);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(31,0.0116142);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetEntries(2189);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_6 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(2,1.261224);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(25,0.3153059);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(2,0.6306118);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(25,0.3153059);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_7 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(2,0.4958844);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(3,0.9917687);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(4,0.7438266);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(5,0.4958844);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(6,0.4958844);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(10,0.2479422);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(11,0.2479422);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(12,0.2479422);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(13,0.2479422);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(15,1.239711);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(16,0.2479422);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(17,0.2479422);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(2,0.3506432);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(3,0.4958844);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(4,0.4294485);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(5,0.3506432);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(6,0.3506432);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(10,0.2479422);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(11,0.2479422);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(12,0.2479422);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(13,0.2479422);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(15,0.5544156);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(16,0.2479422);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(17,0.2479422);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetEntries(24);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_8 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(1,1.519354);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(2,7.849994);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(3,5.317738);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(4,4.811287);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(5,2.27903);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(6,2.785482);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(7,1.266128);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(8,2.532256);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(9,1.266128);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(10,2.025805);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(11,1.519354);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(12,2.532256);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(13,0.7596768);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(14,1.519354);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(15,1.519354);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(16,1.772579);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(17,0.7596768);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(18,1.012902);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(21,0.5064512);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(22,0.2532256);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(23,0.2532256);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(24,0.2532256);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(26,0.5064512);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(28,0.2532256);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(1,0.6202735);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(2,1.409901);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(3,1.160426);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(4,1.103785);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(5,0.7596768);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(6,0.8398543);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(7,0.5662297);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(8,0.8007697);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(9,0.5662297);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(10,0.7162302);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(11,0.6202735);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(12,0.8007697);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(13,0.4385996);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(14,0.6202735);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(15,0.6202735);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(16,0.669972);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(17,0.4385996);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(18,0.5064512);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(21,0.3581151);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(22,0.2532256);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(23,0.2532256);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(24,0.2532256);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(26,0.3581151);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(28,0.2532256);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetEntries(178);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_9 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(1,1.143507);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(2,5.585847);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(3,6.911049);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(4,5.722535);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(5,4.1723);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(6,3.028793);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(7,2.320352);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(8,2.120322);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(9,2.020307);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(10,1.966965);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(11,2.006971);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(12,1.93196);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(13,1.760267);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(14,1.431884);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(15,1.180179);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(16,0.9234734);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(17,0.6050918);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(18,0.4484014);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(19,0.3267162);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(20,0.2150326);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(21,0.1933627);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(22,0.1516897);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(23,0.1283528);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(24,0.1183513);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(25,0.06167602);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(26,0.05334143);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(27,0.02833763);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(28,0.02166995);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(29,0.006667678);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(30,0.005000759);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(31,0.005000759);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(1,0.04365929);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(2,0.09649434);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(3,0.107332);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(4,0.09766783);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(5,0.08339597);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(6,0.07105459);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(7,0.06219196);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(8,0.05945087);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(9,0.05803179);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(10,0.05726057);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(11,0.05783995);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(12,0.05674876);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(13,0.05416847);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(14,0.04885525);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(15,0.04435384);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(16,0.03923463);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(17,0.03175908);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(18,0.02733951);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(19,0.02333687);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(20,0.01893257);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(21,0.01795327);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(22,0.0159014);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(23,0.01462716);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(24,0.01404571);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(25,0.01013948);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(26,0.009429521);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(27,0.006872885);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(28,0.006010164);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(29,0.003333839);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(30,0.002887189);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(31,0.002887189);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetEntries(27953);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_10 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(1,0.4679915);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(2,2.313358);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(3,3.021995);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(4,2.657078);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(5,2.00455);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(6,1.453434);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(7,1.120935);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(8,0.9700642);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(9,0.8557678);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(10,0.771812);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(11,0.7809557);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(12,0.6969998);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(13,0.6305001);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(14,0.5482068);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(15,0.4621728);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(16,0.3707357);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(17,0.3034048);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(18,0.2182021);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(19,0.1712367);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(20,0.1288431);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(21,0.1030745);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(22,0.08437148);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(23,0.07148716);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(24,0.05195288);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(25,0.03408109);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(26,0.02078115);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(27,0.01704054);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(28,0.008312461);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(29,0.007065592);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(30,0.001662492);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(31,0.00415623);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(1,0.01394661);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(2,0.03100782);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(3,0.03544024);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(4,0.03323165);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(5,0.02886411);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(6,0.02457805);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(7,0.0215844);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(8,0.02007937);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(9,0.0188594);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(10,0.01791041);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(11,0.01801619);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(12,0.01702026);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(13,0.01618797);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(14,0.01509461);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(15,0.01385964);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(16,0.01241315);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(17,0.01122952);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(18,0.00952312);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(19,0.008436226);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(20,0.007317799);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(21,0.006545238);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(22,0.005921717);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(23,0.005450845);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(24,0.004646807);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(25,0.003763627);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(26,0.002938899);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(27,0.002661286);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(28,0.001858723);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(29,0.001713658);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(30,0.0008312461);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(31,0.001314315);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetEntries(48968);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_11 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(1,0.009481507);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(2,0.02212352);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(3,0.01738276);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(4,0.02370377);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(5,0.01106176);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(6,0.01106176);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(7,0.006321005);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(8,0.006321005);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(9,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(10,0.003160502);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(13,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(14,0.003160502);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(15,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(16,0.003160502);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(17,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(18,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(19,0.003160502);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(20,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(21,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(22,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(23,0.004740753);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(1,0.003870809);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(2,0.005912758);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(3,0.0052411);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(4,0.006120286);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(5,0.004180952);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(6,0.004180952);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(7,0.003160502);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(8,0.003160502);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(9,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(10,0.002234813);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(13,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(14,0.002234813);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(15,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(16,0.002234813);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(17,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(18,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(19,0.002234813);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(20,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(21,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(22,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(23,0.002737075);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetEntries(87);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_12 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(1,0.001038028);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(2,0.00622817);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(3,0.008719438);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(4,0.007681409);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(5,0.005397747);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(6,0.005812958);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(7,0.002906479);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(8,0.003114085);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(9,0.001868451);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(10,0.002076057);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(11,0.001868451);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(12,0.002698874);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(13,0.00145324);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(14,0.00145324);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(15,0.000622817);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(16,0.000622817);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(17,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(18,0.0008304226);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(19,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(20,0.0004152113);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(21,0.000622817);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(23,0.0004152113);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(24,0.0004152113);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(25,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(26,0.0004152113);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(28,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(1,0.0004642204);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(2,0.001137103);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(3,0.001345438);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(4,0.001262816);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(5,0.001058585);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(6,0.001098546);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(7,0.0007767892);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(8,0.0008040532);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(9,0.000622817);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(10,0.0006565067);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(11,0.000622817);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(12,0.0007485328);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(13,0.0005492729);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(14,0.0005492729);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(15,0.0003595835);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(16,0.0003595835);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(17,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(18,0.0004152113);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(19,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(20,0.0002935987);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(21,0.0003595835);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(23,0.0002935987);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(24,0.0002935987);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(25,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(26,0.0002935987);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(28,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetEntries(277);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR_Bj0__114 = new TH1D("VbbHcc_tags_H_dR_Bj0__114","",30,0,6);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(1,2144);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(2,7565);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(3,7849);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(4,6391);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(5,5340);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(6,4416);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(7,3682);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(8,3179);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(9,2842);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(10,2609);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(11,2370);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(12,2171);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(13,1960);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(14,1846);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(15,1681);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(16,1394);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(17,1160);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(18,967);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(19,822);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(20,723);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(21,550);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(22,512);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(23,411);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(24,328);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(25,227);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(26,206);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(27,130);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(28,99);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(29,57);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(30,54);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(31,58);
   VbbHcc_tags_H_dR_Bj0__114->SetEntries(63772);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0__114->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0__114->SetLineWidth(2);
   VbbHcc_tags_H_dR_Bj0__114->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_Bj0__114->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_Bj0__114->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0__114->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__114->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__114->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__114->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__114->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__114->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__114->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__114->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0__114->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__114->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__114->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__114->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__114->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__114->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fx1083[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fy1083[30] = {
   5073.298,
   22834.04,
   24855.77,
   18853.65,
   14994.71,
   28964.18,
   12507.13,
   12003,
   10273.5,
   8161.669,
   6219.695,
   7053.979,
   8089.941,
   5989.3,
   5633.333,
   5400.375,
   4502.414,
   2609.152,
   17910.78,
   1195.832,
   1842.83,
   618.8752,
   784.2121,
   620.8373,
   668.1515,
   392.9265,
   404.3411,
   171.4061,
   80.53302,
   73.20366};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fex1083[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fey1083[30] = {
   687.3361,
   1687.965,
   1828.539,
   1623.892,
   1380.498,
   14887.91,
   1792.156,
   1390.582,
   1253.717,
   1064.65,
   911.7564,
   990.5821,
   1154.589,
   912.6775,
   907.3044,
   907.2454,
   823.0219,
   492.9894,
   14830.35,
   287.1447,
   544.8545,
   84.36155,
   279.6406,
   274.7006,
   278.0824,
   79.71013,
   270.3648,
   48.00509,
   36.32827,
   36.3231};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_Bj0_fx1083,Graph_from_VbbHcc_tags_H_dR_Bj0_fy1083,Graph_from_VbbHcc_tags_H_dR_Bj0_fex1083,Graph_from_VbbHcc_tags_H_dR_Bj0_fey1083);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->SetMinimum(33.1925);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->SetMaximum(48233.62);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR_Bj0","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj0_tags_17->cd();
  
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
   
   TH1D *data_mc_ratio__115 = new TH1D("data_mc_ratio__115","",30,0,6);
   data_mc_ratio__115->SetBinContent(1,0.4226048);
   data_mc_ratio__115->SetBinContent(2,0.3313036);
   data_mc_ratio__115->SetBinContent(3,0.3157818);
   data_mc_ratio__115->SetBinContent(4,0.3389795);
   data_mc_ratio__115->SetBinContent(5,0.3561255);
   data_mc_ratio__115->SetBinContent(6,0.1524642);
   data_mc_ratio__115->SetBinContent(7,0.2943921);
   data_mc_ratio__115->SetBinContent(8,0.2648505);
   data_mc_ratio__115->SetBinContent(9,0.2766341);
   data_mc_ratio__115->SetBinContent(10,0.319665);
   data_mc_ratio__115->SetBinContent(11,0.3810476);
   data_mc_ratio__115->SetBinContent(12,0.3077695);
   data_mc_ratio__115->SetBinContent(13,0.2422762);
   data_mc_ratio__115->SetBinContent(14,0.3082163);
   data_mc_ratio__115->SetBinContent(15,0.2984024);
   data_mc_ratio__115->SetBinContent(16,0.2581302);
   data_mc_ratio__115->SetBinContent(17,0.2576396);
   data_mc_ratio__115->SetBinContent(18,0.3706185);
   data_mc_ratio__115->SetBinContent(19,0.04589414);
   data_mc_ratio__115->SetBinContent(20,0.6045999);
   data_mc_ratio__115->SetBinContent(21,0.298454);
   data_mc_ratio__115->SetBinContent(22,0.8273073);
   data_mc_ratio__115->SetBinContent(23,0.5240929);
   data_mc_ratio__115->SetBinContent(24,0.5283188);
   data_mc_ratio__115->SetBinContent(25,0.3397433);
   data_mc_ratio__115->SetBinContent(26,0.5242711);
   data_mc_ratio__115->SetBinContent(27,0.3215107);
   data_mc_ratio__115->SetBinContent(28,0.5775757);
   data_mc_ratio__115->SetBinContent(29,0.7077842);
   data_mc_ratio__115->SetBinContent(30,0.7376681);
   data_mc_ratio__115->SetBinContent(31,0.4295884);
   data_mc_ratio__115->SetBinError(1,0.009126873);
   data_mc_ratio__115->SetBinError(2,0.003809094);
   data_mc_ratio__115->SetBinError(3,0.003564347);
   data_mc_ratio__115->SetBinError(4,0.004240226);
   data_mc_ratio__115->SetBinError(5,0.004873404);
   data_mc_ratio__115->SetBinError(6,0.002294316);
   data_mc_ratio__115->SetBinError(7,0.004851592);
   data_mc_ratio__115->SetBinError(8,0.004697379);
   data_mc_ratio__115->SetBinError(9,0.00518912);
   data_mc_ratio__115->SetBinError(10,0.006258324);
   data_mc_ratio__115->SetBinError(11,0.007827176);
   data_mc_ratio__115->SetBinError(12,0.006605348);
   data_mc_ratio__115->SetBinError(13,0.005472461);
   data_mc_ratio__115->SetBinError(14,0.007173643);
   data_mc_ratio__115->SetBinError(15,0.007278107);
   data_mc_ratio__115->SetBinError(16,0.006913651);
   data_mc_ratio__115->SetBinError(17,0.007564559);
   data_mc_ratio__115->SetBinError(18,0.01191829);
   data_mc_ratio__115->SetBinError(19,0.001600742);
   data_mc_ratio__115->SetBinError(20,0.02248531);
   data_mc_ratio__115->SetBinError(21,0.01272612);
   data_mc_ratio__115->SetBinError(22,0.03656216);
   data_mc_ratio__115->SetBinError(23,0.0258516);
   data_mc_ratio__115->SetBinError(24,0.02917152);
   data_mc_ratio__115->SetBinError(25,0.02254955);
   data_mc_ratio__115->SetBinError(26,0.0365277);
   data_mc_ratio__115->SetBinError(27,0.02819836);
   data_mc_ratio__115->SetBinError(28,0.05804854);
   data_mc_ratio__115->SetBinError(29,0.0937483);
   data_mc_ratio__115->SetBinError(30,0.1003839);
   data_mc_ratio__115->SetBinError(31,0.1713866);
   data_mc_ratio__115->SetMinimum(0.4);
   data_mc_ratio__115->SetMaximum(1.6);
   data_mc_ratio__115->SetEntries(246.7552);
   data_mc_ratio__115->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__115->SetLineColor(ci);
   data_mc_ratio__115->SetLineWidth(2);
   data_mc_ratio__115->SetMarkerStyle(20);
   data_mc_ratio__115->SetMarkerSize(1.2);
   data_mc_ratio__115->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__115->GetXaxis()->SetRange(1,30);
   data_mc_ratio__115->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__115->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__115->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__115->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__115->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__115->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__115->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__115->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__115->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__115->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__115->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__115->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__115->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__115->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__115->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__115->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__115->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1084[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1084[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1084[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1084[30] = {
   0.1354811,
   0.07392319,
   0.07356597,
   0.08613144,
   0.09206562,
   0.5140111,
   0.1432908,
   0.1158529,
   0.1220341,
   0.1304452,
   0.1465918,
   0.1404288,
   0.1427191,
   0.1523847,
   0.16106,
   0.1679967,
   0.1827957,
   0.1889462,
   0.8280126,
   0.2401212,
   0.2956618,
   0.1363143,
   0.356588,
   0.4424679,
   0.4161965,
   0.2028627,
   0.6686554,
   0.2800664,
   0.4510978,
   0.4961924};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1084,Graph_from_mc_statistical_error_fy1084,Graph_from_mc_statistical_error_fex1084,Graph_from_mc_statistical_error_fey1084);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1084 = new TH1F("Graph_Graph_from_mc_statistical_error1084","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1084->SetMinimum(0.006384938);
   Graph_Graph_from_mc_statistical_error1084->SetMaximum(1.993615);
   Graph_Graph_from_mc_statistical_error1084->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1084->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1084->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1084->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1084->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1084->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1084->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1084->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1084->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1084->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1084->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1084->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1084->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1084->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1084->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1084->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1084);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_tags_17->cd();
   H_dR_Bj0_tags_17->Modified();
   H_dR_Bj0_tags_17->cd();
   H_dR_Bj0_tags_17->SetSelected(H_dR_Bj0_tags_17);
}
