void H_pt_VbbHcc_16()
{
//=========Macro generated from canvas: H_pt_VbbHcc_16/H_pt_VbbHcc_16
//=========  (Tue Nov 22 09:15:07 2022) by ROOT version 6.14/09
   TCanvas *H_pt_VbbHcc_16 = new TCanvas("H_pt_VbbHcc_16", "H_pt_VbbHcc_16",0,0,600,600);
   H_pt_VbbHcc_16->SetHighLightColor(2);
   H_pt_VbbHcc_16->Range(0,0,1,1);
   H_pt_VbbHcc_16->SetFillColor(0);
   H_pt_VbbHcc_16->SetFillStyle(4000);
   H_pt_VbbHcc_16->SetBorderMode(0);
   H_pt_VbbHcc_16->SetBorderSize(2);
   H_pt_VbbHcc_16->SetFrameFillStyle(1000);
   H_pt_VbbHcc_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(116.1295,-19627.42,1562.903,1.96078e+07);
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
   st->SetMaximum(1.680482e+07);
   
   TH1F *st_stack_13 = new TH1F("st_stack_13","",40,0,2000);
   st_stack_13->SetMinimum(0.01);
   st_stack_13->SetMaximum(1.764506e+07);
   st_stack_13->SetDirectory(0);
   st_stack_13->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_13->SetLineColor(ci);
   st_stack_13->GetXaxis()->SetRange(7,30);
   st_stack_13->GetXaxis()->SetLabelFont(42);
   st_stack_13->GetXaxis()->SetLabelSize(0.035);
   st_stack_13->GetXaxis()->SetTitleSize(0.035);
   st_stack_13->GetXaxis()->SetTitleFont(42);
   st_stack_13->GetYaxis()->SetTitle("Events/50.0");
   st_stack_13->GetYaxis()->SetLabelFont(42);
   st_stack_13->GetYaxis()->SetLabelSize(0.05);
   st_stack_13->GetYaxis()->SetTitleSize(0.057);
   st_stack_13->GetYaxis()->SetTitleOffset(1.2);
   st_stack_13->GetYaxis()->SetTitleFont(42);
   st_stack_13->GetZaxis()->SetLabelFont(42);
   st_stack_13->GetZaxis()->SetLabelSize(0.035);
   st_stack_13->GetZaxis()->SetTitleSize(0.035);
   st_stack_13->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_13);
   
   
   TH1D *VbbHcc_tags_H_pt_stack_1 = new TH1D("VbbHcc_tags_H_pt_stack_1","",40,0,2000);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(1,4118410);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(2,6602266);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(3,2262266);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(4,174554.5);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(5,9535.999);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(6,2066.688);
   VbbHcc_tags_H_pt_stack_1->SetBinError(1,75118.71);
   VbbHcc_tags_H_pt_stack_1->SetBinError(2,95229.02);
   VbbHcc_tags_H_pt_stack_1->SetBinError(3,55697.3);
   VbbHcc_tags_H_pt_stack_1->SetBinError(4,15477.27);
   VbbHcc_tags_H_pt_stack_1->SetBinError(5,3610.396);
   VbbHcc_tags_H_pt_stack_1->SetBinError(6,1518.185);
   VbbHcc_tags_H_pt_stack_1->SetEntries(9787);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_1,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_2 = new TH1D("VbbHcc_tags_H_pt_stack_2","",40,0,2000);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(1,32143.5);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(2,57324.34);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(3,32585.36);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(4,13668.77);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(5,6261.658);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(6,3255.506);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(7,1774.403);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(8,1049.056);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(9,640.9501);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(10,392.695);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(11,245.5213);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(12,173.5791);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(13,114.2137);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(14,77.08534);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(15,58.05767);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(16,32.80356);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(17,28.65332);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(18,23.19694);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(19,16.6655);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(20,9.351278);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(21,6.648165);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(22,5.414712);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(23,3.377247);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(24,2.988719);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(25,2.617463);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(26,3.643586);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(27,1.245707);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(28,1.649211);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(29,0.3210492);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(30,0.6276468);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(31,0.04652612);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(32,0.2504175);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(33,0.04240939);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(34,0.399246);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(36,0.7071436);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(41,0.05218216);
   VbbHcc_tags_H_pt_stack_2->SetBinError(1,69.94467);
   VbbHcc_tags_H_pt_stack_2->SetBinError(2,93.51199);
   VbbHcc_tags_H_pt_stack_2->SetBinError(3,71.88285);
   VbbHcc_tags_H_pt_stack_2->SetBinError(4,47.96554);
   VbbHcc_tags_H_pt_stack_2->SetBinError(5,33.16964);
   VbbHcc_tags_H_pt_stack_2->SetBinError(6,24.59505);
   VbbHcc_tags_H_pt_stack_2->SetBinError(7,18.52081);
   VbbHcc_tags_H_pt_stack_2->SetBinError(8,14.53226);
   VbbHcc_tags_H_pt_stack_2->SetBinError(9,11.61065);
   VbbHcc_tags_H_pt_stack_2->SetBinError(10,9.214494);
   VbbHcc_tags_H_pt_stack_2->SetBinError(11,7.349206);
   VbbHcc_tags_H_pt_stack_2->SetBinError(12,6.277349);
   VbbHcc_tags_H_pt_stack_2->SetBinError(13,5.117545);
   VbbHcc_tags_H_pt_stack_2->SetBinError(14,4.273137);
   VbbHcc_tags_H_pt_stack_2->SetBinError(15,3.789493);
   VbbHcc_tags_H_pt_stack_2->SetBinError(16,2.885534);
   VbbHcc_tags_H_pt_stack_2->SetBinError(17,2.70606);
   VbbHcc_tags_H_pt_stack_2->SetBinError(18,2.43373);
   VbbHcc_tags_H_pt_stack_2->SetBinError(19,2.093185);
   VbbHcc_tags_H_pt_stack_2->SetBinError(20,1.570786);
   VbbHcc_tags_H_pt_stack_2->SetBinError(21,1.245415);
   VbbHcc_tags_H_pt_stack_2->SetBinError(22,1.150127);
   VbbHcc_tags_H_pt_stack_2->SetBinError(23,0.9722136);
   VbbHcc_tags_H_pt_stack_2->SetBinError(24,0.8787789);
   VbbHcc_tags_H_pt_stack_2->SetBinError(25,0.8246647);
   VbbHcc_tags_H_pt_stack_2->SetBinError(26,0.988039);
   VbbHcc_tags_H_pt_stack_2->SetBinError(27,0.5812362);
   VbbHcc_tags_H_pt_stack_2->SetBinError(28,0.6588725);
   VbbHcc_tags_H_pt_stack_2->SetBinError(29,0.2727161);
   VbbHcc_tags_H_pt_stack_2->SetBinError(30,0.3909245);
   VbbHcc_tags_H_pt_stack_2->SetBinError(31,0.04652612);
   VbbHcc_tags_H_pt_stack_2->SetBinError(32,0.2504175);
   VbbHcc_tags_H_pt_stack_2->SetBinError(33,0.04240939);
   VbbHcc_tags_H_pt_stack_2->SetBinError(34,0.3031898);
   VbbHcc_tags_H_pt_stack_2->SetBinError(36,0.4434471);
   VbbHcc_tags_H_pt_stack_2->SetBinError(41,0.05218216);
   VbbHcc_tags_H_pt_stack_2->SetEntries(2269787);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_2,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_3 = new TH1D("VbbHcc_tags_H_pt_stack_3","",40,0,2000);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(1,492788.2);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(2,872924.4);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(3,488586.1);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(4,181646.4);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(5,75713.1);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(6,36104.73);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(7,18905.22);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(8,10567.96);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(9,6040.521);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(10,3586.207);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(11,2244.054);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(12,1415.98);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(13,932.7934);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(14,606.178);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(15,417.214);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(16,278.3339);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(17,185.5798);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(18,131.9016);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(19,91.11202);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(20,66.66426);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(21,46.78144);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(22,32.33315);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(23,24.38086);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(24,16.58285);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(25,13.25159);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(26,9.58523);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(27,7.327903);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(28,6.124274);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(29,4.452058);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(30,3.283365);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(31,2.093748);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(32,1.160064);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(33,1.200665);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(34,0.890351);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(35,0.4369374);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(36,0.4645722);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(37,0.3773702);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(38,0.5022583);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(39,0.3318544);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(40,0.2322083);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(41,0.6244491);
   VbbHcc_tags_H_pt_stack_3->SetBinError(1,180.2785);
   VbbHcc_tags_H_pt_stack_3->SetBinError(2,239.7961);
   VbbHcc_tags_H_pt_stack_3->SetBinError(3,179.3405);
   VbbHcc_tags_H_pt_stack_3->SetBinError(4,108.9032);
   VbbHcc_tags_H_pt_stack_3->SetBinError(5,70.17935);
   VbbHcc_tags_H_pt_stack_3->SetBinError(6,48.476);
   VbbHcc_tags_H_pt_stack_3->SetBinError(7,35.12574);
   VbbHcc_tags_H_pt_stack_3->SetBinError(8,26.31226);
   VbbHcc_tags_H_pt_stack_3->SetBinError(9,19.94466);
   VbbHcc_tags_H_pt_stack_3->SetBinError(10,15.38844);
   VbbHcc_tags_H_pt_stack_3->SetBinError(11,12.19196);
   VbbHcc_tags_H_pt_stack_3->SetBinError(12,9.694704);
   VbbHcc_tags_H_pt_stack_3->SetBinError(13,7.891751);
   VbbHcc_tags_H_pt_stack_3->SetBinError(14,6.371622);
   VbbHcc_tags_H_pt_stack_3->SetBinError(15,5.292065);
   VbbHcc_tags_H_pt_stack_3->SetBinError(16,4.324685);
   VbbHcc_tags_H_pt_stack_3->SetBinError(17,3.532767);
   VbbHcc_tags_H_pt_stack_3->SetBinError(18,2.972178);
   VbbHcc_tags_H_pt_stack_3->SetBinError(19,2.473444);
   VbbHcc_tags_H_pt_stack_3->SetBinError(20,2.11425);
   VbbHcc_tags_H_pt_stack_3->SetBinError(21,1.780629);
   VbbHcc_tags_H_pt_stack_3->SetBinError(22,1.482167);
   VbbHcc_tags_H_pt_stack_3->SetBinError(23,1.287482);
   VbbHcc_tags_H_pt_stack_3->SetBinError(24,1.049957);
   VbbHcc_tags_H_pt_stack_3->SetBinError(25,0.9545123);
   VbbHcc_tags_H_pt_stack_3->SetBinError(26,0.8011309);
   VbbHcc_tags_H_pt_stack_3->SetBinError(27,0.6983418);
   VbbHcc_tags_H_pt_stack_3->SetBinError(28,0.6433042);
   VbbHcc_tags_H_pt_stack_3->SetBinError(29,0.5479704);
   VbbHcc_tags_H_pt_stack_3->SetBinError(30,0.4767482);
   VbbHcc_tags_H_pt_stack_3->SetBinError(31,0.3663009);
   VbbHcc_tags_H_pt_stack_3->SetBinError(32,0.2844193);
   VbbHcc_tags_H_pt_stack_3->SetBinError(33,0.279669);
   VbbHcc_tags_H_pt_stack_3->SetBinError(34,0.2546197);
   VbbHcc_tags_H_pt_stack_3->SetBinError(35,0.1687331);
   VbbHcc_tags_H_pt_stack_3->SetBinError(36,0.1776632);
   VbbHcc_tags_H_pt_stack_3->SetBinError(37,0.1562581);
   VbbHcc_tags_H_pt_stack_3->SetBinError(38,0.1794274);
   VbbHcc_tags_H_pt_stack_3->SetBinError(39,0.1380437);
   VbbHcc_tags_H_pt_stack_3->SetBinError(40,0.13421);
   VbbHcc_tags_H_pt_stack_3->SetBinError(41,0.2097458);
   VbbHcc_tags_H_pt_stack_3->SetEntries(3.53571e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_pt_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_3->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_3,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_4 = new TH1D("VbbHcc_tags_H_pt_stack_4","",40,0,2000);
   VbbHcc_tags_H_pt_stack_4->SetBinContent(1,4751.72);
   VbbHcc_tags_H_pt_stack_4->SetBinContent(2,10576.99);
   VbbHcc_tags_H_pt_stack_4->SetBinContent(3,10299.51);
   VbbHcc_tags_H_pt_stack_4->SetBinContent(4,7187.981);
   VbbHcc_tags_H_pt_stack_4->SetBinContent(5,3142.265);
   VbbHcc_tags_H_pt_stack_4->SetBinContent(6,702.9557);
   VbbHcc_tags_H_pt_stack_4->SetBinContent(7,63.77595);
   VbbHcc_tags_H_pt_stack_4->SetBinContent(8,3.042308);
   VbbHcc_tags_H_pt_stack_4->SetBinContent(9,1.449144);
   VbbHcc_tags_H_pt_stack_4->SetBinContent(11,0.2898307);
   VbbHcc_tags_H_pt_stack_4->SetBinError(1,37.5525);
   VbbHcc_tags_H_pt_stack_4->SetBinError(2,56.06526);
   VbbHcc_tags_H_pt_stack_4->SetBinError(3,55.34993);
   VbbHcc_tags_H_pt_stack_4->SetBinError(4,46.28014);
   VbbHcc_tags_H_pt_stack_4->SetBinError(5,30.62523);
   VbbHcc_tags_H_pt_stack_4->SetBinError(6,14.48745);
   VbbHcc_tags_H_pt_stack_4->SetBinError(7,4.35865);
   VbbHcc_tags_H_pt_stack_4->SetBinError(8,0.9637197);
   VbbHcc_tags_H_pt_stack_4->SetBinError(9,0.6489121);
   VbbHcc_tags_H_pt_stack_4->SetBinError(11,0.2898307);
   VbbHcc_tags_H_pt_stack_4->SetEntries(125833);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_pt_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_4->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_4,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_5 = new TH1D("VbbHcc_tags_H_pt_stack_5","",40,0,2000);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(1,2549.028);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(2,5618.272);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(3,5774.591);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(4,4302.673);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(5,2057.663);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(6,510.9738);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(7,54.73146);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(8,6.257765);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(9,1.082523);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(10,1.120584);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(11,1.157551);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(16,1.070578);
   VbbHcc_tags_H_pt_stack_5->SetBinError(1,52.63609);
   VbbHcc_tags_H_pt_stack_5->SetBinError(2,78.21935);
   VbbHcc_tags_H_pt_stack_5->SetBinError(3,79.53474);
   VbbHcc_tags_H_pt_stack_5->SetBinError(4,68.65076);
   VbbHcc_tags_H_pt_stack_5->SetBinError(5,47.41249);
   VbbHcc_tags_H_pt_stack_5->SetBinError(6,23.65984);
   VbbHcc_tags_H_pt_stack_5->SetBinError(7,7.772322);
   VbbHcc_tags_H_pt_stack_5->SetBinError(8,2.564322);
   VbbHcc_tags_H_pt_stack_5->SetBinError(9,1.082523);
   VbbHcc_tags_H_pt_stack_5->SetBinError(10,1.120584);
   VbbHcc_tags_H_pt_stack_5->SetBinError(11,1.157551);
   VbbHcc_tags_H_pt_stack_5->SetBinError(16,1.070578);
   VbbHcc_tags_H_pt_stack_5->SetEntries(19535);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_pt_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_5->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_5,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_6 = new TH1D("VbbHcc_tags_H_pt_stack_6","",40,0,2000);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(1,152.4167);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(2,226.6103);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(3,117.0633);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(4,51.98357);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(5,30.11656);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(6,16.22816);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(7,11.40583);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(8,5.019558);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(9,4.56629);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(10,2.641335);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(11,2.182763);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(12,1.496278);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(13,0.7395856);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(14,0.8104648);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(15,0.4158122);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(16,0.5146156);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(17,0.3651401);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(18,0.181536);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(19,0.0857751);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(20,0.3698218);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(21,0.1731067);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(23,0.1015083);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(24,0.06974152);
   VbbHcc_tags_H_pt_stack_6->SetBinError(1,3.741346);
   VbbHcc_tags_H_pt_stack_6->SetBinError(2,4.553822);
   VbbHcc_tags_H_pt_stack_6->SetBinError(3,3.271265);
   VbbHcc_tags_H_pt_stack_6->SetBinError(4,2.176166);
   VbbHcc_tags_H_pt_stack_6->SetBinError(5,1.651186);
   VbbHcc_tags_H_pt_stack_6->SetBinError(6,1.213675);
   VbbHcc_tags_H_pt_stack_6->SetBinError(7,1.020583);
   VbbHcc_tags_H_pt_stack_6->SetBinError(8,0.672602);
   VbbHcc_tags_H_pt_stack_6->SetBinError(9,0.645425);
   VbbHcc_tags_H_pt_stack_6->SetBinError(10,0.4916461);
   VbbHcc_tags_H_pt_stack_6->SetBinError(11,0.4434217);
   VbbHcc_tags_H_pt_stack_6->SetBinError(12,0.3669506);
   VbbHcc_tags_H_pt_stack_6->SetBinError(13,0.2520086);
   VbbHcc_tags_H_pt_stack_6->SetBinError(14,0.2704064);
   VbbHcc_tags_H_pt_stack_6->SetBinError(15,0.1876291);
   VbbHcc_tags_H_pt_stack_6->SetBinError(16,0.2120962);
   VbbHcc_tags_H_pt_stack_6->SetBinError(17,0.1825995);
   VbbHcc_tags_H_pt_stack_6->SetBinError(18,0.128367);
   VbbHcc_tags_H_pt_stack_6->SetBinError(19,0.0857751);
   VbbHcc_tags_H_pt_stack_6->SetBinError(20,0.1851298);
   VbbHcc_tags_H_pt_stack_6->SetBinError(21,0.1224481);
   VbbHcc_tags_H_pt_stack_6->SetBinError(23,0.1015083);
   VbbHcc_tags_H_pt_stack_6->SetBinError(24,0.06974152);
   VbbHcc_tags_H_pt_stack_6->SetEntries(6972);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_pt_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_6->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_6,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_7 = new TH1D("VbbHcc_tags_H_pt_stack_7","",40,0,2000);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(1,284.5897);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(2,426.1266);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(3,239.6246);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(4,120.4316);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(5,60.31996);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(6,36.13125);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(7,21.55461);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(8,13.31272);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(9,6.154591);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(10,3.566447);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(11,2.292381);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(12,1.537153);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(13,0.7904156);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(14,0.5322913);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(15,0.5714109);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(16,0.1356387);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(17,0.1430369);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(18,0.1363765);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(19,0.2817614);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(20,0.112402);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(21,0.06534753);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(23,0.03874683);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(27,0.06633925);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(28,0.06981975);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(29,0.09330566);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(35,0.05805015);
   VbbHcc_tags_H_pt_stack_7->SetBinError(1,4.411549);
   VbbHcc_tags_H_pt_stack_7->SetBinError(2,5.390537);
   VbbHcc_tags_H_pt_stack_7->SetBinError(3,4.0451);
   VbbHcc_tags_H_pt_stack_7->SetBinError(4,2.863299);
   VbbHcc_tags_H_pt_stack_7->SetBinError(5,2.024046);
   VbbHcc_tags_H_pt_stack_7->SetBinError(6,1.559495);
   VbbHcc_tags_H_pt_stack_7->SetBinError(7,1.212585);
   VbbHcc_tags_H_pt_stack_7->SetBinError(8,0.9513617);
   VbbHcc_tags_H_pt_stack_7->SetBinError(9,0.6428707);
   VbbHcc_tags_H_pt_stack_7->SetBinError(10,0.4862267);
   VbbHcc_tags_H_pt_stack_7->SetBinError(11,0.3903112);
   VbbHcc_tags_H_pt_stack_7->SetBinError(12,0.3217363);
   VbbHcc_tags_H_pt_stack_7->SetBinError(13,0.2319247);
   VbbHcc_tags_H_pt_stack_7->SetBinError(14,0.1892223);
   VbbHcc_tags_H_pt_stack_7->SetBinError(15,0.1916859);
   VbbHcc_tags_H_pt_stack_7->SetBinError(16,0.095921);
   VbbHcc_tags_H_pt_stack_7->SetBinError(17,0.1013787);
   VbbHcc_tags_H_pt_stack_7->SetBinError(18,0.09646477);
   VbbHcc_tags_H_pt_stack_7->SetBinError(19,0.1410701);
   VbbHcc_tags_H_pt_stack_7->SetBinError(20,0.08098755);
   VbbHcc_tags_H_pt_stack_7->SetBinError(21,0.06534753);
   VbbHcc_tags_H_pt_stack_7->SetBinError(23,0.03874683);
   VbbHcc_tags_H_pt_stack_7->SetBinError(27,0.06633925);
   VbbHcc_tags_H_pt_stack_7->SetBinError(28,0.06981975);
   VbbHcc_tags_H_pt_stack_7->SetBinError(29,0.07236885);
   VbbHcc_tags_H_pt_stack_7->SetBinError(35,0.05805015);
   VbbHcc_tags_H_pt_stack_7->SetEntries(18198);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_pt_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_7->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_7,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_8 = new TH1D("VbbHcc_tags_H_pt_stack_8","",40,0,2000);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(1,334.6531);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(2,441.2612);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(3,200.9874);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(4,99.22518);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(5,51.13461);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(6,27.15213);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(7,12.41285);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(8,7.046604);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(9,4.28452);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(10,3.316269);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(11,1.681171);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(12,0.5694751);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(13,0.1963523);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(14,0.3701214);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(15,0.3720824);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(16,0.2093382);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(17,0.1881969);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(22,0.2166568);
   VbbHcc_tags_H_pt_stack_8->SetBinError(1,8.038138);
   VbbHcc_tags_H_pt_stack_8->SetBinError(2,9.214672);
   VbbHcc_tags_H_pt_stack_8->SetBinError(3,6.201545);
   VbbHcc_tags_H_pt_stack_8->SetBinError(4,4.353855);
   VbbHcc_tags_H_pt_stack_8->SetBinError(5,3.140011);
   VbbHcc_tags_H_pt_stack_8->SetBinError(6,2.276804);
   VbbHcc_tags_H_pt_stack_8->SetBinError(7,1.551245);
   VbbHcc_tags_H_pt_stack_8->SetBinError(8,1.153933);
   VbbHcc_tags_H_pt_stack_8->SetBinError(9,0.8874454);
   VbbHcc_tags_H_pt_stack_8->SetBinError(10,0.7913035);
   VbbHcc_tags_H_pt_stack_8->SetBinError(11,0.5616074);
   VbbHcc_tags_H_pt_stack_8->SetBinError(12,0.3288411);
   VbbHcc_tags_H_pt_stack_8->SetBinError(13,0.1963523);
   VbbHcc_tags_H_pt_stack_8->SetBinError(14,0.2617302);
   VbbHcc_tags_H_pt_stack_8->SetBinError(15,0.2631238);
   VbbHcc_tags_H_pt_stack_8->SetBinError(16,0.2093382);
   VbbHcc_tags_H_pt_stack_8->SetBinError(17,0.1881969);
   VbbHcc_tags_H_pt_stack_8->SetBinError(22,0.2166568);
   VbbHcc_tags_H_pt_stack_8->SetEntries(6283);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_pt_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_8->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_8,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_9 = new TH1D("VbbHcc_tags_H_pt_stack_9","",40,0,2000);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(1,93.7687);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(2,151.9254);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(3,86.02257);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(4,42.40994);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(5,22.7668);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(6,12.77959);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(7,7.475202);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(8,4.449844);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(9,2.690536);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(10,1.473376);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(11,0.8244021);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(12,0.5201522);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(13,0.2725754);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(14,0.2158314);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(15,0.1137359);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(16,0.07277603);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(17,0.04783911);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(18,0.0500877);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(19,0.01899214);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(20,0.01494092);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(21,0.0193707);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(22,0.01146141);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(23,0.003120411);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(24,0.001461468);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(25,0.002885404);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(26,0.005225118);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(27,0.001651026);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(34,0.001629611);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(35,0.001589949);
   VbbHcc_tags_H_pt_stack_9->SetBinError(1,0.3770793);
   VbbHcc_tags_H_pt_stack_9->SetBinError(2,0.4795119);
   VbbHcc_tags_H_pt_stack_9->SetBinError(3,0.360183);
   VbbHcc_tags_H_pt_stack_9->SetBinError(4,0.2526581);
   VbbHcc_tags_H_pt_stack_9->SetBinError(5,0.1849936);
   VbbHcc_tags_H_pt_stack_9->SetBinError(6,0.1390883);
   VbbHcc_tags_H_pt_stack_9->SetBinError(7,0.1060008);
   VbbHcc_tags_H_pt_stack_9->SetBinError(8,0.08209096);
   VbbHcc_tags_H_pt_stack_9->SetBinError(9,0.06375005);
   VbbHcc_tags_H_pt_stack_9->SetBinError(10,0.04683771);
   VbbHcc_tags_H_pt_stack_9->SetBinError(11,0.03509234);
   VbbHcc_tags_H_pt_stack_9->SetBinError(12,0.02754254);
   VbbHcc_tags_H_pt_stack_9->SetBinError(13,0.02009503);
   VbbHcc_tags_H_pt_stack_9->SetBinError(14,0.01785859);
   VbbHcc_tags_H_pt_stack_9->SetBinError(15,0.01285158);
   VbbHcc_tags_H_pt_stack_9->SetBinError(16,0.0103417);
   VbbHcc_tags_H_pt_stack_9->SetBinError(17,0.008404913);
   VbbHcc_tags_H_pt_stack_9->SetBinError(18,0.008645485);
   VbbHcc_tags_H_pt_stack_9->SetBinError(19,0.005355276);
   VbbHcc_tags_H_pt_stack_9->SetBinError(20,0.004658045);
   VbbHcc_tags_H_pt_stack_9->SetBinError(21,0.005386662);
   VbbHcc_tags_H_pt_stack_9->SetBinError(22,0.004082428);
   VbbHcc_tags_H_pt_stack_9->SetBinError(23,0.002210922);
   VbbHcc_tags_H_pt_stack_9->SetBinError(24,0.001461468);
   VbbHcc_tags_H_pt_stack_9->SetBinError(25,0.00204029);
   VbbHcc_tags_H_pt_stack_9->SetBinError(26,0.002665026);
   VbbHcc_tags_H_pt_stack_9->SetBinError(27,0.001651026);
   VbbHcc_tags_H_pt_stack_9->SetBinError(34,0.001629611);
   VbbHcc_tags_H_pt_stack_9->SetBinError(35,0.001589949);
   VbbHcc_tags_H_pt_stack_9->SetEntries(302515);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_pt_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_9->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_9,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_10 = new TH1D("VbbHcc_tags_H_pt_stack_10","",40,0,2000);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(1,17.53691);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(2,36.83851);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(3,32.89989);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(4,20.58622);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(5,11.47216);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(6,6.50308);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(7,3.785526);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(8,2.393452);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(9,1.457392);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(10,0.9357207);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(11,0.6074381);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(12,0.4289162);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(13,0.2942281);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(14,0.21325);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(15,0.1514631);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(16,0.1019833);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(17,0.08122768);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(18,0.0606829);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(19,0.04761479);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(20,0.03331915);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(21,0.02129378);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(22,0.02037544);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(23,0.01259445);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(24,0.01389937);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(25,0.00996571);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(26,0.009434051);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(27,0.004337521);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(28,0.005244834);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(29,0.003631927);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(30,0.003816277);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(31,0.00157043);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(32,0.001565378);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(33,0.001939903);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(34,0.001143427);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(35,0.0007648273);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(37,0.0003884346);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(38,0.0003657252);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(41,0.001134595);
   VbbHcc_tags_H_pt_stack_10->SetBinError(1,0.08200077);
   VbbHcc_tags_H_pt_stack_10->SetBinError(2,0.1188314);
   VbbHcc_tags_H_pt_stack_10->SetBinError(3,0.1122868);
   VbbHcc_tags_H_pt_stack_10->SetBinError(4,0.0887705);
   VbbHcc_tags_H_pt_stack_10->SetBinError(5,0.0662031);
   VbbHcc_tags_H_pt_stack_10->SetBinError(6,0.04981121);
   VbbHcc_tags_H_pt_stack_10->SetBinError(7,0.03800548);
   VbbHcc_tags_H_pt_stack_10->SetBinError(8,0.03020153);
   VbbHcc_tags_H_pt_stack_10->SetBinError(9,0.023562);
   VbbHcc_tags_H_pt_stack_10->SetBinError(10,0.01888223);
   VbbHcc_tags_H_pt_stack_10->SetBinError(11,0.01519582);
   VbbHcc_tags_H_pt_stack_10->SetBinError(12,0.01281998);
   VbbHcc_tags_H_pt_stack_10->SetBinError(13,0.01061738);
   VbbHcc_tags_H_pt_stack_10->SetBinError(14,0.009054534);
   VbbHcc_tags_H_pt_stack_10->SetBinError(15,0.007603148);
   VbbHcc_tags_H_pt_stack_10->SetBinError(16,0.006254482);
   VbbHcc_tags_H_pt_stack_10->SetBinError(17,0.005570537);
   VbbHcc_tags_H_pt_stack_10->SetBinError(18,0.0048037);
   VbbHcc_tags_H_pt_stack_10->SetBinError(19,0.00427069);
   VbbHcc_tags_H_pt_stack_10->SetBinError(20,0.003595168);
   VbbHcc_tags_H_pt_stack_10->SetBinError(21,0.002860156);
   VbbHcc_tags_H_pt_stack_10->SetBinError(22,0.002792019);
   VbbHcc_tags_H_pt_stack_10->SetBinError(23,0.00219488);
   VbbHcc_tags_H_pt_stack_10->SetBinError(24,0.00231192);
   VbbHcc_tags_H_pt_stack_10->SetBinError(25,0.001946583);
   VbbHcc_tags_H_pt_stack_10->SetBinError(26,0.001896046);
   VbbHcc_tags_H_pt_stack_10->SetBinError(27,0.001272085);
   VbbHcc_tags_H_pt_stack_10->SetBinError(28,0.001457471);
   VbbHcc_tags_H_pt_stack_10->SetBinError(29,0.001163938);
   VbbHcc_tags_H_pt_stack_10->SetBinError(30,0.001207288);
   VbbHcc_tags_H_pt_stack_10->SetBinError(31,0.0007854045);
   VbbHcc_tags_H_pt_stack_10->SetBinError(32,0.0007830573);
   VbbHcc_tags_H_pt_stack_10->SetBinError(33,0.0008689741);
   VbbHcc_tags_H_pt_stack_10->SetBinError(34,0.0006602952);
   VbbHcc_tags_H_pt_stack_10->SetBinError(35,0.0005408833);
   VbbHcc_tags_H_pt_stack_10->SetBinError(37,0.0003884346);
   VbbHcc_tags_H_pt_stack_10->SetBinError(38,0.0003657252);
   VbbHcc_tags_H_pt_stack_10->SetBinError(41,0.000655072);
   VbbHcc_tags_H_pt_stack_10->SetEntries(363165);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_pt_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_10->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_10,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_11 = new TH1D("VbbHcc_tags_H_pt_stack_11","",40,0,2000);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(1,1.24389);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(2,2.228422);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(3,1.353867);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(4,0.6757319);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(5,0.293358);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(6,0.2070085);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(7,0.1018165);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(8,0.08459187);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(9,0.03847782);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(10,0.02134026);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(11,0.01262604);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(12,0.01064117);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(13,0.006156105);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(14,0.0007261737);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(15,0.003027773);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(17,0.00152612);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(21,0.00152612);
   VbbHcc_tags_H_pt_stack_11->SetBinError(1,0.04428422);
   VbbHcc_tags_H_pt_stack_11->SetBinError(2,0.05909184);
   VbbHcc_tags_H_pt_stack_11->SetBinError(3,0.04599257);
   VbbHcc_tags_H_pt_stack_11->SetBinError(4,0.03240114);
   VbbHcc_tags_H_pt_stack_11->SetBinError(5,0.02140772);
   VbbHcc_tags_H_pt_stack_11->SetBinError(6,0.01766075);
   VbbHcc_tags_H_pt_stack_11->SetBinError(7,0.01241256);
   VbbHcc_tags_H_pt_stack_11->SetBinError(8,0.01134373);
   VbbHcc_tags_H_pt_stack_11->SetBinError(9,0.007673298);
   VbbHcc_tags_H_pt_stack_11->SetBinError(10,0.005637824);
   VbbHcc_tags_H_pt_stack_11->SetBinError(11,0.004471117);
   VbbHcc_tags_H_pt_stack_11->SetBinError(12,0.004027393);
   VbbHcc_tags_H_pt_stack_11->SetBinError(13,0.003078305);
   VbbHcc_tags_H_pt_stack_11->SetBinError(14,0.0007261737);
   VbbHcc_tags_H_pt_stack_11->SetBinError(15,0.002140267);
   VbbHcc_tags_H_pt_stack_11->SetBinError(17,0.00152612);
   VbbHcc_tags_H_pt_stack_11->SetBinError(21,0.00152612);
   VbbHcc_tags_H_pt_stack_11->SetEntries(4585);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_pt_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_11->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_11,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_12 = new TH1D("VbbHcc_tags_H_pt_stack_12","",40,0,2000);
   VbbHcc_tags_H_pt_stack_12->SetBinContent(1,5514.788);
   VbbHcc_tags_H_pt_stack_12->SetBinContent(2,12173.66);
   VbbHcc_tags_H_pt_stack_12->SetBinContent(3,12440.73);
   VbbHcc_tags_H_pt_stack_12->SetBinContent(4,8378.93);
   VbbHcc_tags_H_pt_stack_12->SetBinContent(5,4450.568);
   VbbHcc_tags_H_pt_stack_12->SetBinContent(6,2301.523);
   VbbHcc_tags_H_pt_stack_12->SetBinContent(7,1505.766);
   VbbHcc_tags_H_pt_stack_12->SetBinContent(8,1016.857);
   VbbHcc_tags_H_pt_stack_12->SetBinContent(9,637.1133);
   VbbHcc_tags_H_pt_stack_12->SetBinContent(10,362.6731);
   VbbHcc_tags_H_pt_stack_12->SetBinContent(11,246.8589);
   VbbHcc_tags_H_pt_stack_12->SetBinContent(12,183.2667);
   VbbHcc_tags_H_pt_stack_12->SetBinContent(13,143.6141);
   VbbHcc_tags_H_pt_stack_12->SetBinContent(14,59.2403);
   VbbHcc_tags_H_pt_stack_12->SetBinContent(15,66.17625);
   VbbHcc_tags_H_pt_stack_12->SetBinContent(16,16.17249);
   VbbHcc_tags_H_pt_stack_12->SetBinContent(17,12.30173);
   VbbHcc_tags_H_pt_stack_12->SetBinContent(18,43.62028);
   VbbHcc_tags_H_pt_stack_12->SetBinContent(19,19.02628);
   VbbHcc_tags_H_pt_stack_12->SetBinContent(20,12.49407);
   VbbHcc_tags_H_pt_stack_12->SetBinContent(21,8.149887);
   VbbHcc_tags_H_pt_stack_12->SetBinContent(22,6.870364);
   VbbHcc_tags_H_pt_stack_12->SetBinContent(23,9.715635);
   VbbHcc_tags_H_pt_stack_12->SetBinContent(24,3.69994);
   VbbHcc_tags_H_pt_stack_12->SetBinContent(25,8.444188);
   VbbHcc_tags_H_pt_stack_12->SetBinContent(27,4.381892);
   VbbHcc_tags_H_pt_stack_12->SetBinContent(38,4.029149);
   VbbHcc_tags_H_pt_stack_12->SetBinContent(39,2.715719);
   VbbHcc_tags_H_pt_stack_12->SetBinError(1,149.151);
   VbbHcc_tags_H_pt_stack_12->SetBinError(2,221.7373);
   VbbHcc_tags_H_pt_stack_12->SetBinError(3,224.3947);
   VbbHcc_tags_H_pt_stack_12->SetBinError(4,183.7682);
   VbbHcc_tags_H_pt_stack_12->SetBinError(5,133.7406);
   VbbHcc_tags_H_pt_stack_12->SetBinError(6,96.01074);
   VbbHcc_tags_H_pt_stack_12->SetBinError(7,77.49344);
   VbbHcc_tags_H_pt_stack_12->SetBinError(8,63.61305);
   VbbHcc_tags_H_pt_stack_12->SetBinError(9,50.78791);
   VbbHcc_tags_H_pt_stack_12->SetBinError(10,38.11048);
   VbbHcc_tags_H_pt_stack_12->SetBinError(11,31.91431);
   VbbHcc_tags_H_pt_stack_12->SetBinError(12,27.21722);
   VbbHcc_tags_H_pt_stack_12->SetBinError(13,24.09874);
   VbbHcc_tags_H_pt_stack_12->SetBinError(14,15.38544);
   VbbHcc_tags_H_pt_stack_12->SetBinError(15,16.56326);
   VbbHcc_tags_H_pt_stack_12->SetBinError(16,8.088746);
   VbbHcc_tags_H_pt_stack_12->SetBinError(17,6.8754);
   VbbHcc_tags_H_pt_stack_12->SetBinError(18,13.22647);
   VbbHcc_tags_H_pt_stack_12->SetBinError(19,8.779189);
   VbbHcc_tags_H_pt_stack_12->SetBinError(20,7.227455);
   VbbHcc_tags_H_pt_stack_12->SetBinError(21,5.762856);
   VbbHcc_tags_H_pt_stack_12->SetBinError(22,5.098438);
   VbbHcc_tags_H_pt_stack_12->SetBinError(23,5.988952);
   VbbHcc_tags_H_pt_stack_12->SetBinError(24,3.69994);
   VbbHcc_tags_H_pt_stack_12->SetBinError(25,5.971595);
   VbbHcc_tags_H_pt_stack_12->SetBinError(27,4.381892);
   VbbHcc_tags_H_pt_stack_12->SetBinError(38,4.029149);
   VbbHcc_tags_H_pt_stack_12->SetBinError(39,2.715719);
   VbbHcc_tags_H_pt_stack_12->SetEntries(13340);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_pt_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_12->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_pt__25 = new TH1D("VbbHcc_tags_H_pt__25","",40,0,2000);
   VbbHcc_tags_H_pt__25->SetBinContent(1,1046533);
   VbbHcc_tags_H_pt__25->SetBinContent(2,2064513);
   VbbHcc_tags_H_pt__25->SetBinContent(3,1673013);
   VbbHcc_tags_H_pt__25->SetBinContent(4,1053520);
   VbbHcc_tags_H_pt__25->SetBinContent(5,635361);
   VbbHcc_tags_H_pt__25->SetBinContent(6,418894);
   VbbHcc_tags_H_pt__25->SetBinContent(7,295109);
   VbbHcc_tags_H_pt__25->SetBinContent(8,196410);
   VbbHcc_tags_H_pt__25->SetBinContent(9,120905);
   VbbHcc_tags_H_pt__25->SetBinContent(10,72684);
   VbbHcc_tags_H_pt__25->SetBinContent(11,44631);
   VbbHcc_tags_H_pt__25->SetBinContent(12,27717);
   VbbHcc_tags_H_pt__25->SetBinContent(13,17568);
   VbbHcc_tags_H_pt__25->SetBinContent(14,11435);
   VbbHcc_tags_H_pt__25->SetBinContent(15,7586);
   VbbHcc_tags_H_pt__25->SetBinContent(16,5185);
   VbbHcc_tags_H_pt__25->SetBinContent(17,3516);
   VbbHcc_tags_H_pt__25->SetBinContent(18,2357);
   VbbHcc_tags_H_pt__25->SetBinContent(19,1687);
   VbbHcc_tags_H_pt__25->SetBinContent(20,1215);
   VbbHcc_tags_H_pt__25->SetBinContent(21,903);
   VbbHcc_tags_H_pt__25->SetBinContent(22,607);
   VbbHcc_tags_H_pt__25->SetBinContent(23,467);
   VbbHcc_tags_H_pt__25->SetBinContent(24,317);
   VbbHcc_tags_H_pt__25->SetBinContent(25,245);
   VbbHcc_tags_H_pt__25->SetBinContent(26,189);
   VbbHcc_tags_H_pt__25->SetBinContent(27,129);
   VbbHcc_tags_H_pt__25->SetBinContent(28,100);
   VbbHcc_tags_H_pt__25->SetBinContent(29,79);
   VbbHcc_tags_H_pt__25->SetBinContent(30,40);
   VbbHcc_tags_H_pt__25->SetBinContent(31,43);
   VbbHcc_tags_H_pt__25->SetBinContent(32,33);
   VbbHcc_tags_H_pt__25->SetBinContent(33,25);
   VbbHcc_tags_H_pt__25->SetBinContent(34,12);
   VbbHcc_tags_H_pt__25->SetBinContent(35,17);
   VbbHcc_tags_H_pt__25->SetBinContent(36,12);
   VbbHcc_tags_H_pt__25->SetBinContent(37,4);
   VbbHcc_tags_H_pt__25->SetBinContent(38,5);
   VbbHcc_tags_H_pt__25->SetBinContent(39,5);
   VbbHcc_tags_H_pt__25->SetBinContent(40,1);
   VbbHcc_tags_H_pt__25->SetBinContent(41,13);
   VbbHcc_tags_H_pt__25->SetEntries(7703085);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt__25->SetLineColor(ci);
   VbbHcc_tags_H_pt__25->SetLineWidth(2);
   VbbHcc_tags_H_pt__25->SetMarkerStyle(20);
   VbbHcc_tags_H_pt__25->SetMarkerSize(1.2);
   VbbHcc_tags_H_pt__25->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt__25->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt__25->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt__25->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt__25->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt__25->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt__25->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt__25->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt__25->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt__25->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt__25->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt__25->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt__25->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt__25->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt__25->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_pt_fx1025[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_VbbHcc_tags_H_pt_fy1025[40] = {
   4657041,
   7562169,
   2812630,
   390074.5,
   101337.4,
   45041.37,
   22360.63,
   12675.48,
   7340.308,
   4354.65,
   2745.482,
   1777.389,
   1192.92,
   744.6463,
   543.0755,
   329.4149,
   227.3618,
   199.1475,
   127.2379,
   89.04008,
   61.86014,
   44.86672,
   37.62972,
   23.35661,
   24.32609,
   13.24348,
   13.02783,
   7.84855,
   4.870045,
   3.914828,
   2.141844,
   1.412047,
   1.245014,
   1.29237,
   0.4973423,
   1.171716,
   0.3777586,
   4.531773,
   3.047573,
   0.2322083};
   Double_t Graph_from_VbbHcc_tags_H_pt_fex1025[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_VbbHcc_tags_H_pt_fey1025[40] = {
   75119.14,
   95229.67,
   55698.17,
   15479.04,
   3614.149,
   1522.445,
   87.55804,
   70.42971,
   55.81419,
   42.14834,
   34.97525,
   29.57223,
   25.87228,
   17.19729,
   17.80026,
   9.679944,
   8.194722,
   13.77397,
   9.35953,
   7.695089,
   6.16048,
   5.43697,
   6.2034,
   3.945769,
   6.10337,
   1.272023,
   4.47559,
   0.923488,
   0.6163475,
   0.6165324,
   0.3692447,
   0.378951,
   0.2828675,
   0.3959272,
   0.1784474,
   0.4777128,
   0.1562586,
   4.033142,
   2.719225,
   0.13421};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_tags_H_pt_fx1025,Graph_from_VbbHcc_tags_H_pt_fy1025,Graph_from_VbbHcc_tags_H_pt_fex1025,Graph_from_VbbHcc_tags_H_pt_fey1025);
   gre->SetName("Graph_from_VbbHcc_tags_H_pt");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_pt1025 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_pt1025","",100,0,2200);
   Graph_Graph_from_VbbHcc_tags_H_pt1025->SetMinimum(0.08819853);
   Graph_Graph_from_VbbHcc_tags_H_pt1025->SetMaximum(8423138);
   Graph_Graph_from_VbbHcc_tags_H_pt1025->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_pt1025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_pt1025->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_pt1025->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_pt1025->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_pt1025->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_pt1025->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_pt1025->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_pt1025->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_pt1025->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_pt1025->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_pt1025->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_pt1025->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_pt1025->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_pt1025->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_pt1025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_pt1025);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_pt","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_pt","MC unc. (stat.)","fl");

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
   H_pt_VbbHcc_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(116.1295,-0.2774193,1562.903,1.658065);
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
   
   TH1D *data_mc_ratio__26 = new TH1D("data_mc_ratio__26","",40,0,2000);
   data_mc_ratio__26->SetBinContent(1,0.2247206);
   data_mc_ratio__26->SetBinContent(2,0.2730054);
   data_mc_ratio__26->SetBinContent(3,0.5948216);
   data_mc_ratio__26->SetBinContent(4,2.700817);
   data_mc_ratio__26->SetBinContent(5,6.269761);
   data_mc_ratio__26->SetBinContent(6,9.300205);
   data_mc_ratio__26->SetBinContent(7,13.1977);
   data_mc_ratio__26->SetBinContent(8,15.49527);
   data_mc_ratio__26->SetBinContent(9,16.47138);
   data_mc_ratio__26->SetBinContent(10,16.69112);
   data_mc_ratio__26->SetBinContent(11,16.25616);
   data_mc_ratio__26->SetBinContent(12,15.59423);
   data_mc_ratio__26->SetBinContent(13,14.72688);
   data_mc_ratio__26->SetBinContent(14,15.35628);
   data_mc_ratio__26->SetBinContent(15,13.96859);
   data_mc_ratio__26->SetBinContent(16,15.74003);
   data_mc_ratio__26->SetBinContent(17,15.46434);
   data_mc_ratio__26->SetBinContent(18,11.83545);
   data_mc_ratio__26->SetBinContent(19,13.25862);
   data_mc_ratio__26->SetBinContent(20,13.64554);
   data_mc_ratio__26->SetBinContent(21,14.59745);
   data_mc_ratio__26->SetBinContent(22,13.52896);
   data_mc_ratio__26->SetBinContent(23,12.4104);
   data_mc_ratio__26->SetBinContent(24,13.57217);
   data_mc_ratio__26->SetBinContent(25,10.07149);
   data_mc_ratio__26->SetBinContent(26,14.27118);
   data_mc_ratio__26->SetBinContent(27,9.901879);
   data_mc_ratio__26->SetBinContent(28,12.74121);
   data_mc_ratio__26->SetBinContent(29,16.22162);
   data_mc_ratio__26->SetBinContent(30,10.21756);
   data_mc_ratio__26->SetBinContent(31,20.07616);
   data_mc_ratio__26->SetBinContent(32,23.37032);
   data_mc_ratio__26->SetBinContent(33,20.08009);
   data_mc_ratio__26->SetBinContent(34,9.285267);
   data_mc_ratio__26->SetBinContent(35,34.18169);
   data_mc_ratio__26->SetBinContent(36,10.24139);
   data_mc_ratio__26->SetBinContent(37,10.58877);
   data_mc_ratio__26->SetBinContent(38,1.103321);
   data_mc_ratio__26->SetBinContent(39,1.64065);
   data_mc_ratio__26->SetBinContent(40,4.306477);
   data_mc_ratio__26->SetBinContent(41,19.18066);
   data_mc_ratio__26->SetBinError(1,0.0002196678);
   data_mc_ratio__26->SetBinError(2,0.0001900039);
   data_mc_ratio__26->SetBinError(3,0.0004598721);
   data_mc_ratio__26->SetBinError(4,0.002631321);
   data_mc_ratio__26->SetBinError(5,0.00786576);
   data_mc_ratio__26->SetBinError(6,0.01436946);
   data_mc_ratio__26->SetBinError(7,0.02429445);
   data_mc_ratio__26->SetBinError(8,0.03496371);
   data_mc_ratio__26->SetBinError(9,0.04737049);
   data_mc_ratio__26->SetBinError(10,0.06191076);
   data_mc_ratio__26->SetBinError(11,0.07694841);
   data_mc_ratio__26->SetBinError(12,0.09366789);
   data_mc_ratio__26->SetBinError(13,0.1111091);
   data_mc_ratio__26->SetBinError(14,0.1436045);
   data_mc_ratio__26->SetBinError(15,0.1603785);
   data_mc_ratio__26->SetBinError(16,0.2185904);
   data_mc_ratio__26->SetBinError(17,0.2607996);
   data_mc_ratio__26->SetBinError(18,0.2437839);
   data_mc_ratio__26->SetBinError(19,0.3228055);
   data_mc_ratio__26->SetBinError(20,0.3914737);
   data_mc_ratio__26->SetBinError(21,0.4857726);
   data_mc_ratio__26->SetBinError(22,0.5491235);
   data_mc_ratio__26->SetBinError(23,0.574285);
   data_mc_ratio__26->SetBinError(24,0.7622892);
   data_mc_ratio__26->SetBinError(25,0.6434438);
   data_mc_ratio__26->SetBinError(26,1.038076);
   data_mc_ratio__26->SetBinError(27,0.8718118);
   data_mc_ratio__26->SetBinError(28,1.274121);
   data_mc_ratio__26->SetBinError(29,1.825074);
   data_mc_ratio__26->SetBinError(30,1.615539);
   data_mc_ratio__26->SetBinError(31,3.061585);
   data_mc_ratio__26->SetBinError(32,4.068251);
   data_mc_ratio__26->SetBinError(33,4.016017);
   data_mc_ratio__26->SetBinError(34,2.680426);
   data_mc_ratio__26->SetBinError(35,8.290277);
   data_mc_ratio__26->SetBinError(36,2.956435);
   data_mc_ratio__26->SetBinError(37,5.294386);
   data_mc_ratio__26->SetBinError(38,0.4934201);
   data_mc_ratio__26->SetBinError(39,0.7337208);
   data_mc_ratio__26->SetBinError(40,4.306477);
   data_mc_ratio__26->SetBinError(41,8.106438);
   data_mc_ratio__26->SetMinimum(0.4);
   data_mc_ratio__26->SetMaximum(1.6);
   data_mc_ratio__26->SetEntries(469.929);
   data_mc_ratio__26->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__26->SetLineColor(ci);
   data_mc_ratio__26->SetLineWidth(2);
   data_mc_ratio__26->SetMarkerStyle(20);
   data_mc_ratio__26->SetMarkerSize(1.2);
   data_mc_ratio__26->GetXaxis()->SetTitle("H p_{T} [GeV]");
   data_mc_ratio__26->GetXaxis()->SetRange(7,30);
   data_mc_ratio__26->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__26->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__26->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__26->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__26->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__26->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__26->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__26->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__26->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__26->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__26->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__26->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__26->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__26->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__26->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__26->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__26->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1026[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_mc_statistical_error_fy1026[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1026[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_mc_statistical_error_fey1026[40] = {
   0.01613023,
   0.0125929,
   0.01980288,
   0.03968226,
   0.03566453,
   0.03380103,
   0.003915723,
   0.005556375,
   0.007603794,
   0.009678926,
   0.0127392,
   0.01663802,
   0.02168819,
   0.02309457,
   0.03277677,
   0.02938526,
   0.03604265,
   0.06916469,
   0.07355927,
   0.08642275,
   0.09958723,
   0.1211805,
   0.1648538,
   0.1689358,
   0.2508981,
   0.09604903,
   0.3435407,
   0.1176635,
   0.1265589,
   0.1574865,
   0.1723957,
   0.2683699,
   0.2272002,
   0.3063574,
   0.358802,
   0.4077037,
   0.4136466,
   0.88997,
   0.8922591,
   0.5779723};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1026,Graph_from_mc_statistical_error_fy1026,Graph_from_mc_statistical_error_fex1026,Graph_from_mc_statistical_error_fey1026);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1026 = new TH1F("Graph_Graph_from_mc_statistical_error1026","",100,0,2200);
   Graph_Graph_from_mc_statistical_error1026->SetMinimum(0.09696677);
   Graph_Graph_from_mc_statistical_error1026->SetMaximum(2.070711);
   Graph_Graph_from_mc_statistical_error1026->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1026->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1026->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1026->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1026->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1026->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1026->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1026->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1026->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1026->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1026->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1026->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1026->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1026->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1026->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1026);
   
   gre->Draw("e2");
   TLine *line = new TLine(300,1,1500,1);
   line->Draw();
   bottomPad->Modified();
   H_pt_VbbHcc_16->cd();
   H_pt_VbbHcc_16->Modified();
   H_pt_VbbHcc_16->cd();
   H_pt_VbbHcc_16->SetSelected(H_pt_VbbHcc_16);
}
