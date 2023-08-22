void H_dR_Bj1_tags_all()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_all/H_dR_Bj1_tags_all
//=========  (Tue Aug 22 09:20:37 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_tags_all = new TCanvas("H_dR_Bj1_tags_all", "H_dR_Bj1_tags_all",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_tags_all->SetHighLightColor(2);
   H_dR_Bj1_tags_all->Range(0,0,1,1);
   H_dR_Bj1_tags_all->SetFillColor(0);
   H_dR_Bj1_tags_all->SetFillStyle(4000);
   H_dR_Bj1_tags_all->SetBorderMode(0);
   H_dR_Bj1_tags_all->SetBorderSize(2);
   H_dR_Bj1_tags_all->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-215.5064,6.314516,215590.8);
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
   st->SetMaximum(184771.6);
   
   TH1F *st_stack_48 = new TH1F("st_stack_48","",30,0,6);
   st_stack_48->SetMinimum(0.3);
   st_stack_48->SetMaximum(194010.2);
   st_stack_48->SetDirectory(0);
   st_stack_48->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_48->SetLineColor(ci);
   st_stack_48->GetXaxis()->SetRange(1,30);
   st_stack_48->GetXaxis()->SetLabelFont(42);
   st_stack_48->GetXaxis()->SetLabelSize(0.035);
   st_stack_48->GetXaxis()->SetTitleSize(0.035);
   st_stack_48->GetXaxis()->SetTitleFont(42);
   st_stack_48->GetYaxis()->SetTitle("Events/0.2");
   st_stack_48->GetYaxis()->SetLabelFont(42);
   st_stack_48->GetYaxis()->SetLabelSize(0.05);
   st_stack_48->GetYaxis()->SetTitleSize(0.057);
   st_stack_48->GetYaxis()->SetTitleOffset(1.2);
   st_stack_48->GetYaxis()->SetTitleFont(42);
   st_stack_48->GetZaxis()->SetLabelFont(42);
   st_stack_48->GetZaxis()->SetLabelSize(0.035);
   st_stack_48->GetZaxis()->SetTitleSize(0.035);
   st_stack_48->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_48);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(1,20599.76);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(2,75362.96);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(3,65225.03);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(4,56465.15);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(5,43860.11);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(6,53465.96);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(7,36947.45);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(8,28173.97);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(9,22968.53);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(10,29290.77);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(11,40562.33);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(12,20163.97);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(13,21436.16);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(14,17550.81);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(15,12046.87);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(16,16112.63);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(17,9378.927);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(18,6439.097);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(19,5168.478);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(20,5200.05);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(21,2214.856);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(22,3467.951);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(23,2794.385);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(24,1393.69);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(25,2145.486);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(26,883.1299);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(27,1616.54);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(28,639.7866);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(29,242.1721);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(30,49.69111);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinContent(31,904.2902);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(1,1548.629);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(2,4198.128);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(3,3574.397);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(4,3522.789);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(5,3104.392);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(6,17223.75);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(7,3173.94);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(8,2619.427);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(9,2418.953);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(10,3437.574);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(11,17215.73);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(12,2664.054);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(13,2678.799);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(14,2270.683);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(15,1326.174);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(16,2951.823);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(17,1348.914);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(18,1019.312);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(19,823.5462);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(20,1609.878);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(21,472.9363);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(22,761.0462);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(23,749.57);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(24,474.8057);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(25,667.1153);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(26,288.4379);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(27,585.5966);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(28,376.8658);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(29,56.66766);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(30,34.27464);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetBinError(31,527.8243);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetEntries(27568);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(1,116.028);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(2,357.6754);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(3,373.9487);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(4,316.8489);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(5,262.2989);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(6,218.4668);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(7,182.8328);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(8,154.2807);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(9,137.1937);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(10,123.2791);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(11,102.1661);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(12,91.06235);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(13,80.35629);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(14,78.37458);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(15,67.46443);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(16,62.77534);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(17,48.20356);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(18,42.58133);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(19,31.2774);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(20,27.73896);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(21,23.97228);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(22,21.64361);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(23,16.77026);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(24,12.57845);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(25,11.26448);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(26,7.636755);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(27,5.983178);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(28,3.454249);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(29,2.565396);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(30,1.802521);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinContent(31,3.087685);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(1,4.462234);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(2,7.592579);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(3,7.669655);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(4,7.028312);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(5,6.442077);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(6,5.962964);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(7,5.411156);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(8,5.015294);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(9,4.716468);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(10,4.481363);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(11,3.982364);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(12,3.745011);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(13,3.431162);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(14,3.541955);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(15,3.238707);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(16,3.159609);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(17,2.79404);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(18,2.56456);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(19,2.139042);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(20,2.084846);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(21,1.955085);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(22,1.907681);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(23,1.626188);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(24,1.372321);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(25,1.350366);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(26,1.129435);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(27,1.033214);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(28,0.6851013);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(29,0.6139061);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(30,0.5741921);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetBinError(31,0.6683345);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetEntries(34548);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_3 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(1,1698.064);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(2,6274.826);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(3,7561.541);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(4,6757.173);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(5,5499.632);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(6,4385.316);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(7,3565.635);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(8,2957.953);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(9,2587.817);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(10,2268.736);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(11,2082.204);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(12,1892.842);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(13,1700.302);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(14,1501.124);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(15,1334.372);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(16,1148.514);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(17,928.5311);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(18,770.3653);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(19,639.8699);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(20,514.1222);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(21,408.8486);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(22,329.5513);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(23,254.7945);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(24,201.8517);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(25,146.5244);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(26,106.6635);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(27,77.62928);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(28,50.81841);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(29,33.19965);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(30,22.51109);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinContent(31,40.77254);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(1,10.58233);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(2,20.33399);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(3,22.3883);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(4,21.1836);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(5,19.11959);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(6,17.07099);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(7,15.38104);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(8,14.00236);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(9,13.10364);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(10,12.26421);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(11,11.75539);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(12,11.2289);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(13,10.6294);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(14,9.983221);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(15,9.417454);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(16,8.729739);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(17,7.831608);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(18,7.132897);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(19,6.502584);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(20,5.819807);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(21,5.185146);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(22,4.655037);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(23,4.088294);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(24,3.648949);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(25,3.103736);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(26,2.63595);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(27,2.246925);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(28,1.822522);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(29,1.473783);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(30,1.210607);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetBinError(31,1.613855);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetEntries(905703);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_4 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(1,313.5338);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(2,981.5942);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(3,1058.779);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(4,875.5281);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(5,654.1512);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(6,509.1417);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(7,431.6927);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(8,374.9684);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(9,333.3154);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(10,310.8161);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(11,265.2759);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(12,254.1155);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(13,230.4078);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(14,212.0145);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(15,167.2723);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(16,141.5104);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(17,121.0355);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(18,101.1633);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(19,76.99433);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(20,63.85803);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(21,48.87417);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(22,33.05026);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(23,27.03143);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(24,24.95375);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(25,17.06692);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(26,12.15766);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(27,7.923809);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(28,6.853448);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(29,2.963126);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(30,1.144977);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinContent(31,5.003377);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(1,7.314694);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(2,19.32113);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(3,22.50517);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(4,22.4285);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(5,19.78595);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(6,15.56481);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(7,15.70275);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(8,13.96741);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(9,13.66727);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(10,14.08543);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(11,11.02654);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(12,12.14131);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(13,11.38699);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(14,11.77767);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(15,8.600943);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(16,7.672195);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(17,8.509267);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(18,7.191187);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(19,6.562624);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(20,5.926958);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(21,4.103496);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(22,2.864857);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(23,2.46453);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(24,3.046026);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(25,1.978142);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(26,1.607904);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(27,1.146552);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(28,1.201969);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(29,0.7024042);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(30,0.3314116);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetBinError(31,1.178962);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetEntries(49827);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_5 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(1,49.893);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(2,119.0677);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(3,98.27725);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(4,65.74635);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(5,64.16189);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(6,63.46056);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(7,42.64456);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(8,34.20953);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(9,28.10584);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(10,24.20744);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(11,21.14617);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(12,34.49915);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(13,24.50779);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(14,13.20152);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(15,15.60189);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(16,14.12027);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(17,11.41415);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(18,8.60561);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(19,8.108703);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(20,4.780295);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(21,5.729764);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(22,5.553005);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(23,3.493548);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(24,1.553056);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(25,3.357896);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(26,0.4675257);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(27,0.8604193);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(28,0.3903729);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(29,0.1687482);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(30,0.5202505);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinContent(31,0.2983265);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(1,2.431303);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(2,14.98415);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(3,9.84267);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(4,5.478535);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(5,9.397699);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(6,9.835836);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(7,5.49382);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(8,4.540393);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(9,3.696953);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(10,3.133388);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(11,3.752511);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(12,5.211229);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(13,3.977937);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(14,2.251525);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(15,3.027826);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(16,2.472506);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(17,2.516079);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(18,1.63288);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(19,2.54327);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(20,1.343605);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(21,1.651439);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(22,2.5065);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(23,0.6813013);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(24,0.4227084);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(25,1.302899);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(26,0.1883792);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(27,0.3621979);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(28,0.1908163);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(29,0.09558922);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(30,0.224586);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetBinError(31,0.1845516);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetEntries(7212);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_6 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(1,0.6306118);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(2,0.9328354);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(3,1.444092);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(4,0.3153059);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(5,0.1511118);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(6,0.3022236);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(9,0.1511118);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(11,0.1511118);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinContent(17,0.1511118);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(1,0.4459099);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(2,0.4944746);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(3,0.8352253);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(4,0.3153059);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(5,0.1511118);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(6,0.2137044);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(9,0.1511118);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(11,0.1511118);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetBinError(17,0.1511118);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetEntries(17);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_7 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(1,1.079512);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(2,1.640638);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(3,1.702994);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(4,1.100882);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(5,0.2244502);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(6,0.5611256);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(8,0.1122251);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(11,0.2244502);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(12,0.1122251);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(14,0.1122251);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(15,0.2244502);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(16,0.3366753);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(17,0.2244502);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinContent(30,0.1122251);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(1,0.4992129);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(2,0.558736);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(3,0.84552);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(4,0.4331041);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(5,0.1587103);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(6,0.250943);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(8,0.1122251);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(11,0.1587103);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(12,0.1122251);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(14,0.1122251);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(15,0.1587103);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(16,0.1943796);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(17,0.1587103);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetBinError(30,0.1122251);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetEntries(52);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_8 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(1,5.683865);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(2,21.09806);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(3,22.8347);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(4,14.15115);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(5,11.52646);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(6,8.130805);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(7,9.877196);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(8,7.027015);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(9,5.019252);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(10,6.669034);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(11,4.871296);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(12,5.245774);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(13,5.045955);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(14,5.058792);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(15,3.500413);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(16,3.233835);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(17,3.753124);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(18,1.91636);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(19,1.051928);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(20,0.8248912);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(21,0.532125);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(22,0.5588287);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(23,0.8115394);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(24,1.344694);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(25,0.5588287);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(26,0.2532256);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinContent(27,0.2660625);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(1,1.241474);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(2,2.375621);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(3,2.464858);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(4,1.945612);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(5,1.759098);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(6,1.485349);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(7,1.625169);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(8,1.379083);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(9,1.152425);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(10,1.334897);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(11,1.149075);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(12,1.173729);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(13,1.158727);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(14,1.1616);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(15,0.9715765);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(16,0.9341063);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(17,1.003727);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(18,0.7247581);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(19,0.5264105);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(20,0.4763759);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(21,0.3762692);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(22,0.3951516);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(23,0.4686693);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(24,0.6020495);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(25,0.3951516);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(26,0.2532256);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetBinError(27,0.2660625);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetEntries(564);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_9 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(1,5.146293);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(2,19.41071);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(3,22.06035);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(4,18.14605);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(5,13.20969);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(6,9.648405);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(7,7.855495);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(8,6.686022);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(9,6.182572);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(10,6.154533);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(11,5.944254);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(12,5.74826);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(13,5.085031);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(14,4.111465);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(15,3.246475);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(16,2.510967);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(17,1.701821);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(18,1.29797);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(19,0.9200872);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(20,0.6645755);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(21,0.4953249);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(22,0.4324328);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(23,0.378047);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(24,0.3214659);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(25,0.2504902);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(26,0.161374);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(27,0.09752517);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(28,0.04577352);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(29,0.02995155);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(30,0.01326513);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinContent(31,0.02079328);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(1,0.1046074);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(2,0.2019219);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(3,0.2130138);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(4,0.1927243);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(5,0.1638693);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(6,0.1402837);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(7,0.1271068);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(8,0.117502);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(9,0.1131965);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(10,0.1127346);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(11,0.1109936);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(12,0.1092514);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(13,0.102615);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(14,0.0921991);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(15,0.08184739);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(16,0.07207602);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(17,0.05902848);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(18,0.05230032);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(19,0.0434797);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(20,0.03651196);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(21,0.03175786);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(22,0.02936253);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(23,0.02826779);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(24,0.02665894);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(25,0.02325944);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(26,0.01822451);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(27,0.01389591);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(28,0.009594363);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(29,0.008423401);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(30,0.005261784);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetBinError(31,0.006863011);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetEntries(79284);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_10 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(1,1.998355);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(2,7.907382);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(3,10.06158);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(4,8.714192);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(5,6.498306);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(6,4.719105);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(7,3.688272);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(8,2.990227);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(9,2.676919);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(10,2.584388);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(11,2.459389);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(12,2.267833);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(13,2.034069);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(14,1.758098);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(15,1.392842);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(16,1.071417);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(17,0.9171979);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(18,0.6363568);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(19,0.483761);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(20,0.397723);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(21,0.3100616);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(22,0.2499973);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(23,0.2240236);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(24,0.149349);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(25,0.09253147);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(26,0.1006483);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(27,0.04220734);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(28,0.03409054);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(29,0.008116795);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(30,0.001623359);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinContent(31,0.003246718);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(1,0.03368874);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(2,0.06701388);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(3,0.07559298);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(4,0.07034965);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(5,0.06075031);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(6,0.05177001);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(7,0.04576778);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(8,0.0412098);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(9,0.03899115);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(10,0.03831133);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(11,0.03737335);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(12,0.03588838);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(13,0.03398844);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(14,0.03159875);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(15,0.02812544);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(16,0.02466764);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(17,0.02282338);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(18,0.01901073);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(19,0.01657539);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(20,0.0150293);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(21,0.01327004);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(22,0.0119156);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(23,0.01127964);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(24,0.009209788);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(25,0.007249251);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(26,0.007560518);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(27,0.004896011);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(28,0.004400128);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(29,0.002147043);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(30,0.0009601867);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetBinError(31,0.001357909);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetEntries(122844);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_11 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(1,0.01518779);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(2,0.08289404);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(3,0.06171667);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(4,0.05539567);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(5,0.03631812);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(6,0.02724882);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(7,0.02201507);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(8,0.01318204);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(9,0.01318204);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(10,0.009292277);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(11,0.007712026);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(12,0.003856013);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(13,0.0143368);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(14,0.008630517);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(15,0.007286531);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(16,0.005010769);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(17,0.002275762);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(18,0.004315259);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(19,0.003160502);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(20,0.003160502);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(21,0.004551524);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(23,0.00659102);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(25,0.001580251);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinContent(28,0.002275762);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(1,0.005506761);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(2,0.01335818);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(3,0.0113643);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(4,0.01091598);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(5,0.00873904);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(6,0.007774413);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(7,0.006772126);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(8,0.005505734);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(9,0.005505734);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(10,0.004224898);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(11,0.003918236);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(12,0.002770611);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(13,0.005941058);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(14,0.004467093);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(15,0.004223559);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(16,0.003557999);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(17,0.002275762);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(18,0.003158712);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(19,0.002234813);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(20,0.002234813);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(21,0.003218413);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(23,0.003893142);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(25,0.001580251);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetBinError(28,0.002275762);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetEntries(200);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all_stack_12 = new TH1D("VbbHcc_tags_H_dR_Bj1_all_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(1,0.006028868);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(2,0.03079991);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(3,0.03092837);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(4,0.02415187);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(5,0.02080797);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(6,0.01002902);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(7,0.009868423);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(8,0.009636641);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(9,0.005095455);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(10,0.006236137);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(11,0.003666055);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(12,0.004622298);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(13,0.004772295);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(14,0.003193235);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(15,0.002801191);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(16,0.004207423);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(17,0.003250844);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(18,0.001429736);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(19,0.001314182);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(20,0.001164185);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(21,0.002478367);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(22,0.001072134);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(23,0.001521787);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(24,0.0009221373);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(25,0.001371791);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(26,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(27,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinContent(30,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(1,0.001309753);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(2,0.003018582);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(3,0.002986559);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(4,0.002573484);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(5,0.002427802);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(6,0.001679299);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(7,0.001635962);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(8,0.00168586);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(9,0.001198842);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(10,0.001355669);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(11,0.00100297);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(12,0.001180025);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(13,0.00118225);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(14,0.0009390978);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(15,0.0009081298);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(16,0.00110769);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(17,0.0009590356);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(18,0.0005932865);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(19,0.0005963076);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(20,0.0005918846);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(21,0.0008401846);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(22,0.0005510293);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(23,0.0006314134);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(24,0.0005462398);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(25,0.000627238);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(26,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(27,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetBinError(30,0.0002996568);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetEntries(702);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_all__131 = new TH1D("VbbHcc_tags_H_dR_Bj1_all__131","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(1,18926);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(2,59163);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(3,58672);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(4,47794);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(5,38814);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(6,32457);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(7,26908);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(8,23098);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(9,20385);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(10,18460);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(11,16910);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(12,15491);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(13,13947);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(14,12654);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(15,11089);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(16,9614);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(17,7738);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(18,6595);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(19,5502);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(20,4480);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(21,3821);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(22,3113);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(23,2406);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(24,1928);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(25,1453);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(26,1096);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(27,829);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(28,509);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(29,364);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(30,237);
   VbbHcc_tags_H_dR_Bj1_all__131->SetBinContent(31,414);
   VbbHcc_tags_H_dR_Bj1_all__131->SetEntries(464896);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_all__131->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_all__131->SetLineWidth(2);
   VbbHcc_tags_H_dR_Bj1_all__131->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_Bj1_all__131->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_Bj1_all__131->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_all__131->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all__131->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all__131->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all__131->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all__131->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all__131->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all__131->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all__131->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1_all__131->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all__131->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_all__131->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all__131->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1_all__131->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_all__131->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_all_fx1095[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_all_fy1095[30] = {
   22791.84,
   83147.23,
   74375.78,
   64522.96,
   50372.02,
   58665.74,
   41191.71,
   31712.22,
   26069.01,
   32033.23,
   43046.78,
   22449.87,
   23483.92,
   19366.58,
   13639.96,
   17486.71,
   10494.86,
   7365.669,
   5927.189,
   5812.441,
   2703.625,
   3858.992,
   3097.896,
   1636.444,
   2324.604,
   1010.571,
   1709.343,
   701.3853,
   281.1071,
   75.79736};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_all_fex1095[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_all_fey1095[30] = {
   1548.692,
   4198.256,
   3574.561,
   3522.936,
   3104.535,
   17223.76,
   3174.026,
   2619.511,
   2419.035,
   3437.63,
   17215.74,
   2664.113,
   2678.849,
   2270.74,
   1326.243,
   2951.848,
   1348.969,
   1019.367,
   823.6048,
   1609.901,
   472.9896,
   761.0724,
   749.5874,
   474.832,
   667.1282,
   288.4568,
   585.6031,
   376.8728,
   56.69458,
   34.30334};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_Bj1_all_fx1095,Graph_from_VbbHcc_tags_H_dR_Bj1_all_fy1095,Graph_from_VbbHcc_tags_H_dR_Bj1_all_fex1095,Graph_from_VbbHcc_tags_H_dR_Bj1_all_fey1095);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_Bj1_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->SetMinimum(37.34461);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->SetMaximum(96075.89);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_Bj1_all1095);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR_Bj1_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj1_tags_all->cd();
  
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
   
   TH1D *data_mc_ratio__132 = new TH1D("data_mc_ratio__132","",30,0,6);
   data_mc_ratio__132->SetBinContent(1,0.8303848);
   data_mc_ratio__132->SetBinContent(2,0.7115451);
   data_mc_ratio__132->SetBinContent(3,0.788859);
   data_mc_ratio__132->SetBinContent(4,0.7407286);
   data_mc_ratio__132->SetBinContent(5,0.7705468);
   data_mc_ratio__132->SetBinContent(6,0.553253);
   data_mc_ratio__132->SetBinContent(7,0.6532382);
   data_mc_ratio__132->SetBinContent(8,0.7283629);
   data_mc_ratio__132->SetBinContent(9,0.7819628);
   data_mc_ratio__132->SetBinContent(10,0.5762766);
   data_mc_ratio__132->SetBinContent(11,0.3928284);
   data_mc_ratio__132->SetBinContent(12,0.6900261);
   data_mc_ratio__132->SetBinContent(13,0.5938957);
   data_mc_ratio__132->SetBinContent(14,0.6533937);
   data_mc_ratio__132->SetBinContent(15,0.8129789);
   data_mc_ratio__132->SetBinContent(16,0.549789);
   data_mc_ratio__132->SetBinContent(17,0.737313);
   data_mc_ratio__132->SetBinContent(18,0.8953701);
   data_mc_ratio__132->SetBinContent(19,0.9282647);
   data_mc_ratio__132->SetBinContent(20,0.7707605);
   data_mc_ratio__132->SetBinContent(21,1.413288);
   data_mc_ratio__132->SetBinContent(22,0.8066874);
   data_mc_ratio__132->SetBinContent(23,0.7766561);
   data_mc_ratio__132->SetBinContent(24,1.178164);
   data_mc_ratio__132->SetBinContent(25,0.6250527);
   data_mc_ratio__132->SetBinContent(26,1.084535);
   data_mc_ratio__132->SetBinContent(27,0.4849816);
   data_mc_ratio__132->SetBinContent(28,0.7257067);
   data_mc_ratio__132->SetBinContent(29,1.29488);
   data_mc_ratio__132->SetBinContent(30,3.126758);
   data_mc_ratio__132->SetBinContent(31,0.4342007);
   data_mc_ratio__132->SetBinError(1,0.006036011);
   data_mc_ratio__132->SetBinError(2,0.002925346);
   data_mc_ratio__132->SetBinError(3,0.003256746);
   data_mc_ratio__132->SetBinError(4,0.003388226);
   data_mc_ratio__132->SetBinError(5,0.003911153);
   data_mc_ratio__132->SetBinError(6,0.003070928);
   data_mc_ratio__132->SetBinError(7,0.003982272);
   data_mc_ratio__132->SetBinError(8,0.004792483);
   data_mc_ratio__132->SetBinError(9,0.005476849);
   data_mc_ratio__132->SetBinError(10,0.004241458);
   data_mc_ratio__132->SetBinError(11,0.003020864);
   data_mc_ratio__132->SetBinError(12,0.005544033);
   data_mc_ratio__132->SetBinError(13,0.005028863);
   data_mc_ratio__132->SetBinError(14,0.005808461);
   data_mc_ratio__132->SetBinError(15,0.007720281);
   data_mc_ratio__132->SetBinError(16,0.005607174);
   data_mc_ratio__132->SetBinError(17,0.008381805);
   data_mc_ratio__132->SetBinError(18,0.01102542);
   data_mc_ratio__132->SetBinError(19,0.01251444);
   data_mc_ratio__132->SetBinError(20,0.01151544);
   data_mc_ratio__132->SetBinError(21,0.02286346);
   data_mc_ratio__132->SetBinError(22,0.01445825);
   data_mc_ratio__132->SetBinError(23,0.01583365);
   data_mc_ratio__132->SetBinError(24,0.02683196);
   data_mc_ratio__132->SetBinError(25,0.01639773);
   data_mc_ratio__132->SetBinError(26,0.03275959);
   data_mc_ratio__132->SetBinError(27,0.01684411);
   data_mc_ratio__132->SetBinError(28,0.03216639);
   data_mc_ratio__132->SetBinError(29,0.06787017);
   data_mc_ratio__132->SetBinError(30,0.2031048);
   data_mc_ratio__132->SetBinError(31,0.2413117);
   data_mc_ratio__132->SetMinimum(0.4);
   data_mc_ratio__132->SetMaximum(1.6);
   data_mc_ratio__132->SetEntries(230.3035);
   data_mc_ratio__132->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__132->SetLineColor(ci);
   data_mc_ratio__132->SetLineWidth(2);
   data_mc_ratio__132->SetMarkerStyle(20);
   data_mc_ratio__132->SetMarkerSize(1.2);
   data_mc_ratio__132->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__132->GetXaxis()->SetRange(1,30);
   data_mc_ratio__132->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__132->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__132->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__132->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__132->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__132->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__132->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__132->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__132->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__132->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__132->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__132->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__132->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__132->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__132->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__132->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__132->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1096[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1096[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1096[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1096[30] = {
   0.06794938,
   0.05049183,
   0.04806082,
   0.05459972,
   0.06163214,
   0.2935915,
   0.07705498,
   0.08260259,
   0.09279351,
   0.1073145,
   0.399931,
   0.1186694,
   0.1140716,
   0.1172504,
   0.0972322,
   0.1688053,
   0.1285361,
   0.1383944,
   0.1389537,
   0.276975,
   0.1749464,
   0.1972205,
   0.2419666,
   0.2901609,
   0.2869857,
   0.2854394,
   0.3425896,
   0.5373264,
   0.2016832,
   0.4525665};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1096,Graph_from_mc_statistical_error_fy1096,Graph_from_mc_statistical_error_fex1096,Graph_from_mc_statistical_error_fey1096);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1096 = new TH1F("Graph_Graph_from_mc_statistical_error1096","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1096->SetMinimum(0.3552083);
   Graph_Graph_from_mc_statistical_error1096->SetMaximum(1.644792);
   Graph_Graph_from_mc_statistical_error1096->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1096->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1096->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1096->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1096->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1096->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1096->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1096->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1096->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1096->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1096->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1096);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_tags_all->cd();
   H_dR_Bj1_tags_all->Modified();
   H_dR_Bj1_tags_all->cd();
   H_dR_Bj1_tags_all->SetSelected(H_dR_Bj1_tags_all);
}
