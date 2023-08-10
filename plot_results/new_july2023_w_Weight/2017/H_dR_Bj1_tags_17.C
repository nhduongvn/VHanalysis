void H_dR_Bj1_tags_17()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_17/H_dR_Bj1_tags_17
//=========  (Thu Aug 10 12:23:30 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_tags_17 = new TCanvas("H_dR_Bj1_tags_17", "H_dR_Bj1_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_tags_17->SetHighLightColor(2);
   H_dR_Bj1_tags_17->Range(0,0,1,1);
   H_dR_Bj1_tags_17->SetFillColor(0);
   H_dR_Bj1_tags_17->SetFillStyle(4000);
   H_dR_Bj1_tags_17->SetBorderMode(0);
   H_dR_Bj1_tags_17->SetBorderSize(2);
   H_dR_Bj1_tags_17->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-72.83563,6.314516,72772.79);
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
   st->SetMaximum(62369.74);
   
   TH1F *st_stack_46 = new TH1F("st_stack_46","",30,0,6);
   st_stack_46->SetMinimum(0.01);
   st_stack_46->SetMaximum(65488.23);
   st_stack_46->SetDirectory(0);
   st_stack_46->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_46->SetLineColor(ci);
   st_stack_46->GetXaxis()->SetRange(1,30);
   st_stack_46->GetXaxis()->SetLabelFont(42);
   st_stack_46->GetXaxis()->SetLabelSize(0.035);
   st_stack_46->GetXaxis()->SetTitleSize(0.035);
   st_stack_46->GetXaxis()->SetTitleFont(42);
   st_stack_46->GetYaxis()->SetTitle("Events/0.2");
   st_stack_46->GetYaxis()->SetLabelFont(42);
   st_stack_46->GetYaxis()->SetLabelSize(0.05);
   st_stack_46->GetYaxis()->SetTitleSize(0.057);
   st_stack_46->GetYaxis()->SetTitleOffset(1.2);
   st_stack_46->GetYaxis()->SetTitleFont(42);
   st_stack_46->GetZaxis()->SetLabelFont(42);
   st_stack_46->GetZaxis()->SetLabelSize(0.035);
   st_stack_46->GetZaxis()->SetTitleSize(0.035);
   st_stack_46->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_46);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(1,5506.299);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(2,23447.48);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(3,23081.15);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(4,16675.49);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(5,13707.03);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(6,26380.71);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(7,12313.67);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(8,11547.84);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(9,5509.243);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(10,7304.442);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(11,21005.04);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(12,5275.013);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(13,7188.26);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(14,4346.969);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(15,4713.802);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(16,5091.119);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(17,3281.278);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(18,2428.805);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(19,1431.305);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(20,1668.689);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(21,421.6995);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(22,669.5649);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(23,727.4818);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(24,504.3647);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(25,752.8609);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(26,492.2991);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(27,662.5857);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(28,66.27503);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(29,65.52869);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(30,5.124227);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(31,58.72359);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(1,594.4956);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(2,1816.067);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(3,1922.308);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(4,1584.963);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(5,1500.564);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(6,14880.51);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(7,1471.334);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(8,1465.658);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(9,798.2147);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(10,1095.675);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(11,14848.16);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(12,872.5825);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(13,1654.212);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(14,783.5157);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(15,869.2048);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(16,945.2933);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(17,770.1719);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(18,615.7117);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(19,398.8629);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(20,480.9595);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(21,82.93236);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(22,280.7486);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(23,283.6834);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(24,276.2709);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(25,383.1689);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(26,275.2433);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(27,380.602);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(28,29.91557);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(29,29.91008);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(30,4.415228);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(31,35.87092);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetEntries(9821);

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
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(1,36.78446);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(2,114.6823);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(3,124.7348);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(4,105.5584);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(5,84.52141);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(6,69.17983);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(7,59.31862);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(8,53.16671);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(9,44.35036);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(10,40.40344);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(11,30.92126);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(12,26.16713);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(13,24.05103);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(14,23.24492);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(15,22.82732);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(16,20.41033);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(17,19.51637);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(18,13.57275);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(19,8.994263);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(20,8.511852);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(21,7.259095);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(22,6.679272);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(23,4.736695);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(24,3.368282);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(25,3.522088);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(26,3.358672);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(27,1.733981);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(28,0.9986572);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(29,0.7350901);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(30,0.7357942);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(31,1.628797);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(1,2.432825);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(2,4.246708);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(3,4.35988);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(4,4.069415);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(5,3.600772);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(6,3.282678);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(7,3.016479);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(8,2.989314);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(9,2.66359);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(10,2.52712);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(11,2.068238);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(12,1.967311);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(13,1.805456);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(14,1.883575);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(15,1.848211);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(16,1.750887);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(17,1.87505);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(18,1.409576);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(19,1.039482);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(20,1.130245);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(21,1.075399);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(22,1.062014);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(23,0.7621026);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(24,0.7136247);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(25,0.6801082);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(26,0.7508826);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(27,0.6058311);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(28,0.4045268);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(29,0.3068783);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(30,0.3864352);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(31,0.5008413);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetEntries(11223);

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
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(1,547.4049);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(2,2061.57);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(3,2516.877);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(4,2224.723);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(5,1809.158);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(6,1431.02);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(7,1162.267);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(8,959.7165);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(9,835.4984);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(10,731.5178);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(11,661.6837);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(12,614.182);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(13,550.1702);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(14,486.5347);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(15,431.7749);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(16,372.5424);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(17,297.6193);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(18,247.7204);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(19,210.582);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(20,169.3539);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(21,134.3548);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(22,104.3991);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(23,84.30015);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(24,65.19507);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(25,47.26205);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(26,34.64463);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(27,25.34366);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(28,17.28097);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(29,10.61641);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(30,7.247104);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(31,12.89289);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(1,5.891073);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(2,11.43031);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(3,12.66418);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(4,11.92215);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(5,10.74951);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(6,9.557395);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(7,8.607852);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(8,7.817354);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(9,7.304078);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(10,6.822215);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(11,6.500131);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(12,6.268662);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(13,5.926662);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(14,5.577374);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(15,5.250341);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(16,4.870924);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(17,4.34678);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(18,3.964722);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(19,3.658247);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(20,3.275224);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(21,2.915935);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(22,2.565279);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(23,2.305048);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(24,2.035716);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(25,1.722536);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(26,1.468321);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(27,1.252835);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(28,1.04658);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(29,0.8154947);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(30,0.6712451);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(31,0.8924235);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetEntries(306587);

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
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(1,99.58096);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(2,313.6671);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(3,319.7418);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(4,266.3313);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(5,206.4515);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(6,165.2008);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(7,139.2181);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(8,118.3717);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(9,97.01069);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(10,94.60897);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(11,84.10028);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(12,87.95622);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(13,70.2964);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(14,55.58894);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(15,54.7413);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(16,44.10566);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(17,35.03951);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(18,34.99978);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(19,19.55447);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(20,16.35867);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(21,20.473);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(22,10.44054);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(23,9.712726);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(24,8.060831);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(25,4.904367);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(26,3.233046);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(27,3.229297);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(28,2.031018);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(29,0.6268907);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(30,0.3756186);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(31,0.881912);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(1,3.573398);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(2,10.47244);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(3,11.09049);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(4,10.70277);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(5,10.05194);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(6,8.767316);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(7,9.231367);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(8,7.749108);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(9,6.954976);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(10,6.889654);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(11,6.774273);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(12,8.170135);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(13,5.959836);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(14,3.505836);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(15,4.341651);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(16,3.979984);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(17,3.8076);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(18,4.68297);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(19,2.023469);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(20,1.829548);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(21,3.451126);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(22,1.433181);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(23,1.484119);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(24,1.202612);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(25,0.9491168);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(26,0.7511534);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(27,0.677874);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(28,0.6074016);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(29,0.2230824);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(30,0.1687948);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(31,0.4192353);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetEntries(17505);

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
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(1,17.57674);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(2,36.36002);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(3,35.79339);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(4,22.53487);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(5,23.18589);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(6,14.45275);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(7,12.57483);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(8,10.59663);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(9,8.588323);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(10,10.64444);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(11,5.586781);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(12,7.46021);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(13,9.886988);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(14,5.71834);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(15,5.293916);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(16,6.533824);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(17,2.961283);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(18,2.787426);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(19,1.863643);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(20,2.110313);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(21,2.571533);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(22,1.801732);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(23,1.025976);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(24,1.013432);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(25,0.5526256);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(26,0.1921855);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(27,0.2150601);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(28,0.08447854);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(30,0.225467);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(1,1.702091);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(2,3.950911);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(3,7.535195);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(4,3.043012);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(5,7.241858);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(6,2.412644);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(7,2.563469);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(8,2.271435);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(9,1.547815);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(10,2.275465);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(11,1.420606);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(12,1.479841);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(13,2.580389);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(14,1.762618);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(15,1.471808);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(16,2.112645);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(17,0.5732673);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(18,1.237573);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(19,0.5737042);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(20,1.192989);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(21,1.341093);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(22,1.18497);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(23,0.3166342);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(24,0.3589755);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(25,0.408479);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(26,0.1205945);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(27,0.1276336);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(28,0.08447854);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(30,0.1281552);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetEntries(2189);

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
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(1,0.6306118);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(2,0.6306118);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(4,0.3153059);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(1,0.4459099);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(2,0.4459099);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(4,0.3153059);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetEntries(5);

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
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(1,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(2,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(3,0.9917687);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(4,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(5,0.9917687);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(6,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(7,0.4958844);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(8,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(9,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(11,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(13,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(14,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(15,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(17,0.4958844);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(18,0.4958844);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(1,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(2,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(3,0.4958844);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(4,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(5,0.4958844);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(6,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(7,0.3506432);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(8,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(9,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(11,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(13,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(14,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(15,0.2479422);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(17,0.3506432);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(18,0.3506432);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetEntries(24);

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
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(1,1.519354);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(2,6.077415);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(3,9.875799);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(4,4.811287);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(5,2.785482);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(6,1.012902);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(7,3.038707);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(8,1.266128);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(9,2.025805);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(10,2.025805);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(11,1.012902);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(12,2.27903);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(13,2.025805);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(14,1.772579);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(15,0.7596768);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(16,0.5064512);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(17,0.7596768);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(18,0.2532256);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(19,0.5064512);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(24,0.5064512);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(26,0.2532256);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(1,0.6202735);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(2,1.240547);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(3,1.581393);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(4,1.103785);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(5,0.8398543);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(6,0.5064512);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(7,0.8771992);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(8,0.5662297);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(9,0.7162302);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(10,0.7162302);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(11,0.5064512);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(12,0.7596768);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(13,0.7162302);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(14,0.669972);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(15,0.4385996);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(16,0.3581151);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(17,0.4385996);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(18,0.2532256);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(19,0.3581151);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(24,0.3581151);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(26,0.2532256);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetEntries(178);

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
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(1,1.575239);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(2,6.185939);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(3,7.027733);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(4,5.797546);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(5,4.100622);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(6,3.107138);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(7,2.490378);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(8,2.08865);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(9,1.961964);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(10,1.925292);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(11,1.828611);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(12,1.820276);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(13,1.571905);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(14,1.251857);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(15,1.018488);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(16,0.8017883);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(17,0.5250797);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(18,0.3717231);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(19,0.2717079);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(20,0.2100319);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(21,0.1583574);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(22,0.1500228);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(23,0.09001366);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(24,0.08334598);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(25,0.06167602);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(26,0.04667375);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(27,0.03833915);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(28,0.01833612);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(29,0.003333839);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(30,0.005000759);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(31,0.008334598);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(1,0.05124253);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(2,0.1015454);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(3,0.1082343);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(4,0.09830587);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(5,0.08267652);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(6,0.0719677);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(7,0.06443027);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(8,0.05900519);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(9,0.05718773);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(10,0.05665075);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(11,0.05521003);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(12,0.05508406);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(13,0.05118827);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(14,0.0456809);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(15,0.04120361);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(16,0.0365584);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(17,0.02958489);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(18,0.02489242);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(19,0.0212818);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(20,0.01871113);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(21,0.01624712);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(22,0.01581379);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(23,0.01224931);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(24,0.0117869);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(25,0.01013948);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(26,0.008820509);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(27,0.007994265);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(28,0.005528547);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(29,0.00235738);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(30,0.002887189);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(31,0.003727345);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetEntries(27953);

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
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(1,0.6147065);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(2,2.425576);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(3,3.08226);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(4,2.652506);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(5,1.993328);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(6,1.436393);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(7,1.135898);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(8,0.9293331);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(9,0.8354023);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(10,0.7967494);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(11,0.7518621);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(12,0.6874405);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(13,0.6142908);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(14,0.5290881);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(15,0.4172855);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(16,0.3237703);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(17,0.2763893);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(18,0.1953428);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(19,0.1500399);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(20,0.1217775);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(21,0.1018276);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(22,0.07522777);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(23,0.07273403);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(24,0.04613416);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(25,0.02950924);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(26,0.03117173);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(27,0.01246869);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(28,0.009143707);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(29,0.002493738);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(30,0.000415623);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(31,0.001662492);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(1,0.01598393);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(2,0.03175099);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(3,0.03579188);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(4,0.03320305);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(5,0.02878321);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(6,0.02443354);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(7,0.02172798);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(8,0.0196533);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(9,0.01863364);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(10,0.01819746);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(11,0.01767742);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(12,0.01690314);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(13,0.01597853);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(14,0.01482907);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(15,0.01316941);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(16,0.01160028);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(17,0.01071792);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(18,0.009010493);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(19,0.007896838);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(20,0.00711432);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(21,0.006505529);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(22,0.005591636);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(23,0.005498176);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(24,0.00437886);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(25,0.003502102);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(26,0.003599401);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(27,0.002276461);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(28,0.001949445);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(29,0.001018064);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(30,0.000415623);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(31,0.0008312461);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetEntries(48968);

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
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(1,0.007901256);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(2,0.02370377);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(3,0.02528402);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(4,0.01896301);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(5,0.01264201);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(6,0.009481507);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(7,0.007901256);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(8,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(9,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(10,0.004740753);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(11,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(12,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(13,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(14,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(18,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(19,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(20,0.003160502);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(23,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(25,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(1,0.003533549);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(2,0.006120286);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(3,0.006321005);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(4,0.005474151);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(5,0.004469625);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(6,0.003870809);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(7,0.003533549);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(8,0.002234813);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(9,0.002234813);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(10,0.002737075);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(11,0.002234813);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(12,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(13,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(14,0.002234813);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(18,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(19,0.002234813);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(20,0.002234813);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(23,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(25,0.001580251);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetEntries(87);

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
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(1,0.001660845);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(2,0.006643381);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(3,0.008927043);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(4,0.009134649);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(5,0.007058592);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(6,0.002906479);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(7,0.003944507);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(8,0.002283662);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(9,0.001868451);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(10,0.00145324);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(11,0.00145324);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(12,0.001038028);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(13,0.001245634);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(14,0.001038028);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(15,0.0008304226);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(16,0.001038028);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(17,0.001038028);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(18,0.0008304226);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(19,0.0004152113);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(20,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(21,0.000622817);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(22,0.0004152113);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(23,0.000622817);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(24,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(25,0.0004152113);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(27,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(1,0.0005871975);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(2,0.001174395);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(3,0.001361361);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(4,0.0013771);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(5,0.001210539);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(6,0.0007767892);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(7,0.0009049321);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(8,0.0006885501);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(9,0.000622817);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(10,0.0005492729);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(11,0.0005492729);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(12,0.0004642204);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(13,0.0005085279);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(14,0.0004642204);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(15,0.0004152113);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(16,0.0004642204);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(17,0.0004642204);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(18,0.0004152113);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(19,0.0002935987);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(20,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(21,0.0003595835);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(22,0.0002935987);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(23,0.0003595835);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(24,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(25,0.0002935987);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(27,0.0002076057);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetEntries(277);

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
   
   TH1D *VbbHcc_tags_H_dR_Bj1__125 = new TH1D("VbbHcc_tags_H_dR_Bj1__125","",30,0,6);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(1,3059);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(2,8518);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(3,8286);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(4,6581);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(5,5382);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(6,4465);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(7,3660);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(8,3066);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(9,2626);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(10,2374);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(11,2229);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(12,2046);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(13,1723);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(14,1629);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(15,1411);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(16,1255);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(17,998);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(18,885);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(19,726);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(20,574);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(21,490);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(22,442);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(23,358);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(24,256);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(25,223);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(26,161);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(27,117);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(28,73);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(29,49);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(30,29);
   VbbHcc_tags_H_dR_Bj1__125->SetBinContent(31,52);
   VbbHcc_tags_H_dR_Bj1__125->SetEntries(63772);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1__125->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1__125->SetLineWidth(2);
   VbbHcc_tags_H_dR_Bj1__125->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_Bj1__125->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_Bj1__125->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1__125->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__125->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__125->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__125->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__125->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__125->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__125->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__125->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1__125->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__125->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__125->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__125->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__125->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__125->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fx1091[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fy1091[30] = {
   6212.244,
   25989.36,
   26099.3,
   19308.49,
   15840.24,
   28066.38,
   13694.22,
   12694.22,
   6499.767,
   8186.371,
   21791.17,
   6015.568,
   7847.127,
   4921.861,
   5230.883,
   5536.344,
   3638.472,
   2729.204,
   1673.231,
   1865.359,
   586.6187,
   793.1112,
   827.4223,
   582.6384,
   809.1952,
   534.0587,
   693.1587,
   86.69764,
   77.51291,
   13.71363};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fex1091[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj1_fey1091[30] = {
   594.5435,
   1816.143,
   1922.402,
   1585.053,
   1500.658,
   14880.52,
   1471.393,
   1465.704,
   798.2847,
   1095.723,
   14848.17,
   872.6471,
   1654.237,
   783.548,
   869.2349,
   945.3183,
   770.1963,
   615.7453,
   398.8867,
   480.9769,
   83.07313,
   280.7684,
   283.6979,
   276.2824,
   383.1748,
   275.2494,
   380.6052,
   29.94289,
   29.9236,
   4.487657};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_Bj1_fx1091,Graph_from_VbbHcc_tags_H_dR_Bj1_fy1091,Graph_from_VbbHcc_tags_H_dR_Bj1_fex1091,Graph_from_VbbHcc_tags_H_dR_Bj1_fey1091);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->SetMinimum(8.303373);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->SetMaximum(47240.67);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_Bj11091);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1","Data (JetHT, 2017)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj1_tags_17->cd();
  
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
   
   TH1D *data_mc_ratio__126 = new TH1D("data_mc_ratio__126","",30,0,6);
   data_mc_ratio__126->SetBinContent(1,0.4924147);
   data_mc_ratio__126->SetBinContent(2,0.3277495);
   data_mc_ratio__126->SetBinContent(3,0.3174797);
   data_mc_ratio__126->SetBinContent(4,0.3408346);
   data_mc_ratio__126->SetBinContent(5,0.3397677);
   data_mc_ratio__126->SetBinContent(6,0.1590871);
   data_mc_ratio__126->SetBinContent(7,0.2672661);
   data_mc_ratio__126->SetBinContent(8,0.2415272);
   data_mc_ratio__126->SetBinContent(9,0.4040145);
   data_mc_ratio__126->SetBinContent(10,0.2899942);
   data_mc_ratio__126->SetBinContent(11,0.1022891);
   data_mc_ratio__126->SetBinContent(12,0.3401175);
   data_mc_ratio__126->SetBinContent(13,0.2195708);
   data_mc_ratio__126->SetBinContent(14,0.3309724);
   data_mc_ratio__126->SetBinContent(15,0.2697441);
   data_mc_ratio__126->SetBinContent(16,0.2266839);
   data_mc_ratio__126->SetBinContent(17,0.2742909);
   data_mc_ratio__126->SetBinContent(18,0.3242704);
   data_mc_ratio__126->SetBinContent(19,0.433891);
   data_mc_ratio__126->SetBinContent(20,0.3077156);
   data_mc_ratio__126->SetBinContent(21,0.8352956);
   data_mc_ratio__126->SetBinContent(22,0.5572989);
   data_mc_ratio__126->SetBinContent(23,0.432669);
   data_mc_ratio__126->SetBinContent(24,0.4393806);
   data_mc_ratio__126->SetBinContent(25,0.2755825);
   data_mc_ratio__126->SetBinContent(26,0.301465);
   data_mc_ratio__126->SetBinContent(27,0.1687925);
   data_mc_ratio__126->SetBinContent(28,0.8420068);
   data_mc_ratio__126->SetBinContent(29,0.6321528);
   data_mc_ratio__126->SetBinContent(30,2.114685);
   data_mc_ratio__126->SetBinContent(31,0.7014024);
   data_mc_ratio__126->SetBinError(1,0.0089031);
   data_mc_ratio__126->SetBinError(2,0.003551185);
   data_mc_ratio__126->SetBinError(3,0.003487735);
   data_mc_ratio__126->SetBinError(4,0.004201436);
   data_mc_ratio__126->SetBinError(5,0.004631378);
   data_mc_ratio__126->SetBinError(6,0.002380807);
   data_mc_ratio__126->SetBinError(7,0.004417772);
   data_mc_ratio__126->SetBinError(8,0.004361942);
   data_mc_ratio__126->SetBinError(9,0.007884053);
   data_mc_ratio__126->SetBinError(10,0.005951809);
   data_mc_ratio__126->SetBinError(11,0.002166578);
   data_mc_ratio__126->SetBinError(12,0.007519279);
   data_mc_ratio__126->SetBinError(13,0.005289711);
   data_mc_ratio__126->SetBinError(14,0.008200327);
   data_mc_ratio__126->SetBinError(15,0.007181058);
   data_mc_ratio__126->SetBinError(16,0.006398804);
   data_mc_ratio__126->SetBinError(17,0.008682528);
   data_mc_ratio__126->SetBinError(18,0.01090023);
   data_mc_ratio__126->SetBinError(19,0.0161032);
   data_mc_ratio__126->SetBinError(20,0.0128438);
   data_mc_ratio__126->SetBinError(21,0.03773481);
   data_mc_ratio__126->SetBinError(22,0.026508);
   data_mc_ratio__126->SetBinError(23,0.02286727);
   data_mc_ratio__126->SetBinError(24,0.02746128);
   data_mc_ratio__126->SetBinError(25,0.01845437);
   data_mc_ratio__126->SetBinError(26,0.02375877);
   data_mc_ratio__126->SetBinError(27,0.01560487);
   data_mc_ratio__126->SetBinError(28,0.09854944);
   data_mc_ratio__126->SetBinError(29,0.09030754);
   data_mc_ratio__126->SetBinError(30,0.3926871);
   data_mc_ratio__126->SetBinError(31,0.353189);
   data_mc_ratio__126->SetMinimum(0.4);
   data_mc_ratio__126->SetMaximum(1.6);
   data_mc_ratio__126->SetEntries(154.6412);
   data_mc_ratio__126->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__126->SetLineColor(ci);
   data_mc_ratio__126->SetLineWidth(2);
   data_mc_ratio__126->SetMarkerStyle(20);
   data_mc_ratio__126->SetMarkerSize(1.2);
   data_mc_ratio__126->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__126->GetXaxis()->SetRange(1,30);
   data_mc_ratio__126->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__126->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__126->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__126->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__126->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__126->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__126->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__126->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__126->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__126->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__126->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__126->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__126->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__126->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__126->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__126->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__126->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1092[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1092[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1092[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1092[30] = {
   0.09570512,
   0.06988026,
   0.0736572,
   0.08209098,
   0.09473713,
   0.53019,
   0.1074463,
   0.1154623,
   0.1228174,
   0.1338473,
   0.6813844,
   0.1450648,
   0.2108079,
   0.1591975,
   0.1661736,
   0.1707478,
   0.2116812,
   0.2256135,
   0.238393,
   0.2578469,
   0.1416135,
   0.3540089,
   0.3428695,
   0.4741918,
   0.4735257,
   0.5153916,
   0.5490881,
   0.3453714,
   0.3860467,
   0.3272407};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1092,Graph_from_mc_statistical_error_fy1092,Graph_from_mc_statistical_error_fex1092,Graph_from_mc_statistical_error_fey1092);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1092 = new TH1F("Graph_Graph_from_mc_statistical_error1092","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1092->SetMinimum(0.1823387);
   Graph_Graph_from_mc_statistical_error1092->SetMaximum(1.817661);
   Graph_Graph_from_mc_statistical_error1092->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1092->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1092->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1092->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1092->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1092->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1092);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_tags_17->cd();
   H_dR_Bj1_tags_17->Modified();
   H_dR_Bj1_tags_17->cd();
   H_dR_Bj1_tags_17->SetSelected(H_dR_Bj1_tags_17);
}
