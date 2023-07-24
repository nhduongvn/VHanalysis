void Z_dR_Bj0_tags_17()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_17/Z_dR_Bj0_tags_17
//=========  (Mon Jul 24 10:11:24 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_tags_17 = new TCanvas("Z_dR_Bj0_tags_17", "Z_dR_Bj0_tags_17",0,0,600,600);
   Z_dR_Bj0_tags_17->SetHighLightColor(2);
   Z_dR_Bj0_tags_17->Range(0,0,1,1);
   Z_dR_Bj0_tags_17->SetFillColor(0);
   Z_dR_Bj0_tags_17->SetFillStyle(4000);
   Z_dR_Bj0_tags_17->SetBorderMode(0);
   Z_dR_Bj0_tags_17->SetBorderSize(2);
   Z_dR_Bj0_tags_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-742.7444,6.314516,742011.6);
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
   st->SetMaximum(635939.2);
   
   TH1F *st_stack_50 = new TH1F("st_stack_50","",30,0,6);
   st_stack_50->SetMinimum(0.01);
   st_stack_50->SetMaximum(667736.2);
   st_stack_50->SetDirectory(0);
   st_stack_50->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_50->SetLineColor(ci);
   st_stack_50->GetXaxis()->SetRange(1,30);
   st_stack_50->GetXaxis()->SetLabelFont(42);
   st_stack_50->GetXaxis()->SetLabelSize(0.035);
   st_stack_50->GetXaxis()->SetTitleSize(0.035);
   st_stack_50->GetXaxis()->SetTitleFont(42);
   st_stack_50->GetYaxis()->SetTitle("Events/0.2");
   st_stack_50->GetYaxis()->SetLabelFont(42);
   st_stack_50->GetYaxis()->SetLabelSize(0.05);
   st_stack_50->GetYaxis()->SetTitleSize(0.057);
   st_stack_50->GetYaxis()->SetTitleOffset(1.2);
   st_stack_50->GetYaxis()->SetTitleFont(42);
   st_stack_50->GetZaxis()->SetLabelFont(42);
   st_stack_50->GetZaxis()->SetLabelSize(0.035);
   st_stack_50->GetZaxis()->SetTitleSize(0.035);
   st_stack_50->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_50);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(1,67269.83);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(2,259971.2);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(3,238313.1);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(4,177048.7);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(5,114850.2);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(6,83861.26);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(7,83104.48);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(8,57815.05);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(9,48559.45);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(10,44906.75);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(11,39978.06);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(12,34709.39);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(13,30008.43);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(14,28525.36);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(15,23380.79);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(16,22052.39);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(17,18354.13);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(18,15698.16);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(19,10755.24);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(20,11635.26);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(21,10950.25);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(22,10173.18);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(23,6006.811);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(24,7082.378);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(25,3810.929);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(26,2926.988);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(27,1608.828);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(28,1231.143);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(29,757.4144);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(30,295.7414);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(31,801.112);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(1,1806.711);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(2,5619.658);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(3,15707.11);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(4,20881.03);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(5,4330.787);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(6,3945.121);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(7,14716.93);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(8,3067.674);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(9,2628.087);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(10,3005.224);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(11,2885.642);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(12,2239.736);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(13,2102.163);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(14,2098.198);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(15,1574.034);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(16,2181.459);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(17,1776.421);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(18,1337.67);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(19,980.6789);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(20,1126.888);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(21,1170.865);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(22,1587.047);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(23,740.9562);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(24,955.0864);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(25,529.0304);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(26,517.8178);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(27,131.9225);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(28,269.3947);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(29,259.2597);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(30,57.30235);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(31,357.2534);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetEntries(158509);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(1,294.2302);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(2,1563.885);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(3,2136.162);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(4,1964.978);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(5,1703.293);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(6,1377.35);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(7,1162.742);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(8,973.6993);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(9,866.5326);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(10,749.8767);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(11,676.8203);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(12,608.2778);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(13,548.2854);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(14,481.7851);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(15,409.3276);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(16,364.8965);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(17,303.0406);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(18,244.6881);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(19,193.8591);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(20,163.1374);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(21,136.0407);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(22,101.9717);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(23,77.28227);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(24,58.41612);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(25,41.31772);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(26,28.71894);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(27,22.42666);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(28,13.88912);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(29,8.149304);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(30,5.655636);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(31,10.18097);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(1,7.125858);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(2,15.70971);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(3,18.29051);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(4,17.50649);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(5,16.46872);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(6,14.68281);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(7,13.51647);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(8,12.25783);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(9,11.64442);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(10,10.73805);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(11,10.24685);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(12,9.719223);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(13,9.273099);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(14,8.68994);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(15,7.981985);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(16,7.704745);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(17,7.00825);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(18,6.273231);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(19,5.565894);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(20,5.140296);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(21,4.763528);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(22,4.139719);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(23,3.566831);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(24,3.061796);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(25,2.618075);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(26,2.224441);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(27,2.032303);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(28,1.591727);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(29,1.113944);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(30,1.003949);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(31,1.358679);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetEntries(208682);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_3 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(1,2966.359);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(2,21259.84);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(3,34181.56);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(4,35156.11);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(5,30285.97);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(6,24502.98);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(7,19921.82);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(8,16795.69);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(9,14791.07);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(10,13419.2);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(11,12317.06);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(12,11346.54);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(13,10115.75);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(14,8758.785);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(15,7399.211);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(16,6220.905);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(17,5001.329);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(18,3999.527);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(19,3162.736);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(20,2464.2);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(21,1845.221);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(22,1391.408);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(23,1006.544);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(24,728.333);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(25,525.8039);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(26,354.379);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(27,241.7412);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(28,152.7362);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(29,101.5005);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(30,62.3543);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(31,110.1697);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(1,13.95316);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(2,37.36352);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(3,47.46478);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(4,48.20498);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(5,44.75494);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(6,40.24346);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(7,36.28347);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(8,33.312);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(9,31.27484);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(10,29.79341);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(11,28.56462);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(12,27.43301);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(13,25.90731);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(14,24.0946);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(15,22.136);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(16,20.30223);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(17,18.197);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(18,16.25877);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(19,14.45845);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(20,12.75274);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(21,11.02222);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(22,9.583329);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(23,8.138335);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(24,6.906905);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(25,5.872327);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(26,4.823743);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(27,3.97314);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(28,3.16192);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(29,2.567973);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(30,2.011723);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(31,2.676792);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetEntries(4592799);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_4 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(1,588.8319);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(2,2083.057);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(3,2101.781);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(4,1404.744);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(5,880.3709);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(6,641.58);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(7,481.1821);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(8,377.5119);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(9,345.4116);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(10,295.2737);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(11,263.2101);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(12,269.5473);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(13,230.0853);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(14,190.3319);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(15,174.3438);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(16,155.967);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(17,134.1493);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(18,113.8633);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(19,100.9614);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(20,90.09628);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(21,67.09232);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(22,66.54118);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(23,54.58998);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(24,39.28704);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(25,31.76644);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(26,19.47763);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(27,18.91908);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(28,11.13091);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(29,4.533993);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(30,2.388312);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(31,7.306743);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(1,8.418667);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(2,25.67549);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(3,28.71906);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(4,25.85378);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(5,21.78486);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(6,19.69684);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(7,14.95875);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(8,12.33878);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(9,13.23782);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(10,10.75569);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(11,10.68865);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(12,13.29407);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(13,10.33237);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(14,8.858425);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(15,7.80371);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(16,7.522621);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(17,7.318451);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(18,7.05763);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(19,5.81842);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(20,6.75007);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(21,5.05085);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(22,5.767612);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(23,4.968641);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(24,3.720975);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(25,2.391092);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(26,1.660916);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(27,1.739137);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(28,2.893193);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(29,0.8003218);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(30,0.5266216);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(31,2.878686);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetEntries(91213);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_5 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(1,356.2619);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(2,1231.668);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(3,1040.819);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(4,646.571);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(5,499.7085);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(6,413.4382);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(7,299.6065);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(8,261.1177);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(9,218.1513);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(10,192.8959);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(11,155.3028);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(12,166.3366);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(13,140.3883);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(14,137.3505);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(15,118.5402);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(16,106.845);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(17,98.60946);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(18,74.53981);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(19,58.29878);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(20,69.01753);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(21,71.81705);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(22,29.52592);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(23,36.18173);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(24,20.20619);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(25,22.38377);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(26,16.04454);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(27,10.11133);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(28,4.865891);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(29,3.06361);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(30,2.987019);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(31,2.758591);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(1,12.24993);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(2,35.59447);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(3,35.23471);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(4,29.31988);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(5,25.82735);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(6,24.40724);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(7,18.85085);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(8,19.51674);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(9,14.26051);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(10,13.8065);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(11,10.76726);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(12,14.41693);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(13,10.62192);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(14,12.42928);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(15,10.30902);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(16,13.07915);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(17,14.43203);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(18,10.68319);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(19,5.747447);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(20,12.4658);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(21,14.17188);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(22,3.502545);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(23,4.616035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(24,2.531635);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(25,3.240515);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(26,2.424053);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(27,1.885095);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(28,0.768719);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(29,0.5387618);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(30,1.275338);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(31,1.248456);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetEntries(43154);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(1,1.411306);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(2,5.443609);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(3,5.040379);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(4,4.637148);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(5,3.225842);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(6,3.024227);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(7,2.016151);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(8,1.008076);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(9,2.620997);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(10,0.8064606);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(11,0.8064606);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(12,1.209691);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(13,1.612921);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(14,1.209691);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(15,1.612921);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(16,1.008076);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(17,0.2016151);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(18,1.209691);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(19,0.4032303);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(20,0.6048454);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(22,0.2016151);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(23,0.2016151);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(25,0.2016151);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(26,0.2016151);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(1,0.5334235);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(2,1.047623);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(3,1.008076);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(4,0.9669122);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(5,0.8064606);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(6,0.7808521);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(7,0.6375631);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(8,0.4508252);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(9,0.7269337);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(10,0.4032303);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(11,0.4032303);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(12,0.4938542);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(13,0.5702537);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(14,0.4938542);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(15,0.5702537);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(16,0.4508252);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(17,0.2016151);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(18,0.4938542);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(19,0.2851269);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(20,0.3492077);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(22,0.2016151);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(23,0.2016151);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(25,0.2016151);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(26,0.2016151);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetEntries(198);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_7 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(1,6.385854);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(2,22.78589);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(3,19.44783);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(4,8.707982);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(5,5.369922);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(6,3.628326);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(7,2.176996);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(8,1.161064);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(9,2.031863);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(10,2.176996);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(11,2.031863);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(12,2.612395);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(13,1.015931);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(14,0.8707982);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(15,1.015931);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(16,0.5805321);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(17,0.7256652);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(18,0.8707982);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(19,0.2902661);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(20,1.015931);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(21,0.7256652);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(22,0.2902661);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(23,0.145133);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(24,0.145133);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(25,0.145133);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(26,0.145133);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(27,0.145133);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(28,0.145133);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(1,0.9627037);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(2,1.818512);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(3,1.680036);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(4,1.124196);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(5,0.8828098);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(6,0.7256652);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(7,0.5620978);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(8,0.4104982);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(9,0.5430381);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(10,0.5620978);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(11,0.5430381);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(12,0.6157473);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(13,0.3839859);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(14,0.3555019);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(15,0.3839859);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(16,0.2902661);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(17,0.3245273);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(18,0.3555019);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(19,0.2052491);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(20,0.3839859);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(21,0.3245273);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(22,0.2052491);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(23,0.145133);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(24,0.145133);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(25,0.145133);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(26,0.145133);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(27,0.145133);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(28,0.145133);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetEntries(598);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_8 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(1,4.669327);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(2,16.99635);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(3,16.06248);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(4,12.32702);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(5,5.229646);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(6,3.922234);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(7,2.241277);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(8,3.548688);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(9,2.614823);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(10,1.120638);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(11,2.988369);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(12,1.680958);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(13,1.307411);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(14,2.614823);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(15,0.7470923);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(16,0.9338654);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(17,0.1867731);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(18,0.3735461);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(19,0.5603192);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(20,0.5603192);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(21,0.5603192);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(22,0.3735461);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(23,0.1867731);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(24,0.7470923);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(25,0.1867731);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(26,0.1867731);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(27,0.1867731);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(1,0.9338654);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(2,1.781702);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(3,1.732062);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(4,1.517352);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(5,0.9883102);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(6,0.8559017);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(7,0.6470009);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(8,0.8141249);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(9,0.6988408);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(10,0.4574987);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(11,0.7470923);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(12,0.5603192);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(13,0.4941551);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(14,0.6988408);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(15,0.3735461);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(16,0.4176373);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(17,0.1867731);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(18,0.264137);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(19,0.3235004);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(20,0.3235004);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(21,0.3235004);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(22,0.264137);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(23,0.1867731);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(24,0.3735461);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(25,0.1867731);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(26,0.1867731);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(27,0.1867731);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetEntries(445);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_9 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(1,1.752402);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(2,8.933211);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(3,11.00864);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(4,8.816923);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(5,5.858029);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(6,3.567793);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(7,2.49374);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(8,1.942986);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(9,1.636113);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(10,1.466526);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(11,1.416458);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(12,1.361544);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(13,1.256561);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(14,1.001372);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(15,0.7801015);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(16,0.7074212);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(17,0.5652909);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(18,0.4457723);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(19,0.3908583);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(20,0.3101024);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(21,0.3197931);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(22,0.2923362);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(23,0.2164257);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(24,0.1776629);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(25,0.1308245);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(26,0.09852213);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(27,0.05329886);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(28,0.01776629);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(29,0.009690701);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(30,0.001615117);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(31,0.001615117);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(1,0.05320088);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(2,0.1201174);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(3,0.1333425);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(4,0.119333);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(5,0.09726974);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(6,0.07591049);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(7,0.06346402);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(8,0.05601918);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(9,0.05140539);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(10,0.04866838);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(11,0.04783037);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(12,0.04689405);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(13,0.04504989);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(14,0.04021609);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(15,0.03549585);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(16,0.03380189);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(17,0.03021607);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(18,0.02683234);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(19,0.02512532);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(20,0.02237972);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(21,0.02272671);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(22,0.02172918);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(23,0.01869633);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(24,0.01693949);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(25,0.01453605);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(26,0.01261447);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(27,0.00927814);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(28,0.005356737);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(29,0.003956212);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(30,0.001615117);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(31,0.001615117);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetEntries(35311);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_10 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(1,1.942521);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(2,8.220366);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(3,9.94355);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(4,8.007663);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(5,5.376864);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(6,3.430197);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(7,2.23649);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(8,1.725257);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(9,1.449531);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(10,1.225218);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(11,1.156805);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(12,1.020808);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(13,0.8993228);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(14,0.8483238);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(15,0.6932539);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(16,0.601207);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(17,0.5182819);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(18,0.4548442);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(19,0.3914065);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(20,0.3358467);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(21,0.3105545);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(22,0.2483607);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(23,0.2384097);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(24,0.1662648);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(25,0.1318509);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(26,0.0957785);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(27,0.0551452);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(28,0.02860916);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(29,0.01492652);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(30,0.008707136);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(31,0.004146255);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(1,0.0283799);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(2,0.05838128);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(3,0.06420942);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(4,0.05762102);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(5,0.04721636);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(6,0.03771269);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(7,0.0304517);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(8,0.02674576);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(9,0.02451556);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(10,0.02253901);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(11,0.02190071);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(12,0.02057312);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(13,0.01931016);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(14,0.01875465);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(15,0.01695408);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(16,0.01578847);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(17,0.01465923);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(18,0.01373281);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(19,0.0127392);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(20,0.01180045);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(21,0.01134742);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(22,0.01014774);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(23,0.009942371);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(24,0.00830287);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(25,0.007393832);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(26,0.006301763);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(27,0.004781695);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(28,0.003444138);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(29,0.002487753);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(30,0.001900053);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(31,0.001311161);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetEntries(124885);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(1,0.09797557);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(2,0.4519518);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(3,0.3539763);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(4,0.2322969);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(5,0.1121978);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(6,0.05530879);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(7,0.06004954);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(8,0.04582728);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(9,0.04108653);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(10,0.03160502);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(11,0.03792603);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(12,0.02528402);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(13,0.02844452);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(14,0.02686427);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(15,0.02844452);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(16,0.01422226);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(17,0.007901256);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(18,0.01106176);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(19,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(20,0.01580251);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(21,0.01264201);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(22,0.004740753);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(23,0.007901256);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(24,0.003160502);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(25,0.007901256);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(26,0.003160502);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(1,0.01244291);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(2,0.02672447);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(3,0.02365103);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(4,0.01915953);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(5,0.01331543);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(6,0.009348892);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(7,0.009741322);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(8,0.008509913);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(9,0.008057731);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(10,0.007067098);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(11,0.007741618);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(12,0.006321005);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(13,0.006704438);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(14,0.006515542);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(15,0.006704438);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(16,0.004740753);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(17,0.003533549);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(18,0.004180952);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(19,0.001580251);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(20,0.004997193);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(21,0.004469625);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(22,0.002737075);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(23,0.003533549);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(24,0.002234813);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(25,0.003533549);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(26,0.002234813);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetEntries(1088);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_12 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(1,0.04857972);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(2,0.2003395);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(3,0.2061524);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(4,0.1164668);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(5,0.05210902);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(6,0.03404733);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(7,0.02283662);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(8,0.02055296);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(9,0.01577803);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(10,0.01411718);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(11,0.01619324);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(12,0.01183352);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(13,0.009757466);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(14,0.009134649);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(15,0.01017268);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(16,0.007889015);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(17,0.006435775);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(18,0.006850987);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(19,0.005190141);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(20,0.003944507);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(21,0.004359719);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(22,0.003114085);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(23,0.003114085);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(24,0.003944507);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(25,0.00332169);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(26,0.001660845);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(27,0.0008304226);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(28,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(29,0.0002076057);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(31,0.0002076057);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(1,0.003175756);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(2,0.006449155);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(3,0.006542049);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(4,0.004917231);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(5,0.003289092);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(6,0.00265865);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(7,0.002177386);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(8,0.00206565);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(9,0.001809864);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(10,0.00171196);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(11,0.001833524);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(12,0.001567388);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(13,0.001423273);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(14,0.0013771);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(15,0.00145324);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(16,0.001279767);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(17,0.001155899);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(18,0.001192604);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(19,0.001038028);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(20,0.0009049321);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(21,0.0009513686);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(22,0.0008040532);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(23,0.0008040532);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(24,0.0009049321);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(25,0.0008304226);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(26,0.0005871975);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(27,0.0004152113);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(28,0.0002935987);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(29,0.0002076057);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(31,0.0002076057);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetEntries(4044);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0__99 = new TH1D("VbbHcc_tags_Z_dR_Bj0__99","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0__99->SetBinContent(1,23474);
   VbbHcc_tags_Z_dR_Bj0__99->SetBinContent(2,83050);
   VbbHcc_tags_Z_dR_Bj0__99->SetBinContent(3,74969);
   VbbHcc_tags_Z_dR_Bj0__99->SetBinContent(4,54960);
   VbbHcc_tags_Z_dR_Bj0__99->SetBinContent(5,42129);
   VbbHcc_tags_Z_dR_Bj0__99->SetBinContent(6,33301);
   VbbHcc_tags_Z_dR_Bj0__99->SetBinContent(7,26994);
   VbbHcc_tags_Z_dR_Bj0__99->SetBinContent(8,22450);
   VbbHcc_tags_Z_dR_Bj0__99->SetBinContent(9,19297);
   VbbHcc_tags_Z_dR_Bj0__99->SetBinContent(10,17218);
   VbbHcc_tags_Z_dR_Bj0__99->SetBinContent(11,15316);
   VbbHcc_tags_Z_dR_Bj0__99->SetBinContent(12,13821);
   VbbHcc_tags_Z_dR_Bj0__99->SetBinContent(13,12503);
   VbbHcc_tags_Z_dR_Bj0__99->SetBinContent(14,11297);
   VbbHcc_tags_Z_dR_Bj0__99->SetBinContent(15,9875);
   VbbHcc_tags_Z_dR_Bj0__99->SetBinContent(16,8708);
   VbbHcc_tags_Z_dR_Bj0__99->SetBinContent(17,7172);
   VbbHcc_tags_Z_dR_Bj0__99->SetBinContent(18,5958);
   VbbHcc_tags_Z_dR_Bj0__99->SetBinContent(19,4897);
   VbbHcc_tags_Z_dR_Bj0__99->SetBinContent(20,4367);
   VbbHcc_tags_Z_dR_Bj0__99->SetBinContent(21,3576);
   VbbHcc_tags_Z_dR_Bj0__99->SetBinContent(22,2901);
   VbbHcc_tags_Z_dR_Bj0__99->SetBinContent(23,2360);
   VbbHcc_tags_Z_dR_Bj0__99->SetBinContent(24,1959);
   VbbHcc_tags_Z_dR_Bj0__99->SetBinContent(25,1472);
   VbbHcc_tags_Z_dR_Bj0__99->SetBinContent(26,1056);
   VbbHcc_tags_Z_dR_Bj0__99->SetBinContent(27,785);
   VbbHcc_tags_Z_dR_Bj0__99->SetBinContent(28,499);
   VbbHcc_tags_Z_dR_Bj0__99->SetBinContent(29,330);
   VbbHcc_tags_Z_dR_Bj0__99->SetBinContent(30,183);
   VbbHcc_tags_Z_dR_Bj0__99->SetBinContent(31,293);
   VbbHcc_tags_Z_dR_Bj0__99->SetEntries(507199);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0__99->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0__99->SetLineWidth(2);
   VbbHcc_tags_Z_dR_Bj0__99->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_Bj0__99->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_Bj0__99->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0__99->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__99->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__99->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__99->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__99->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__99->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__99->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__99->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0__99->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__99->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__99->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__99->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__99->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__99->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fx1099[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fy1099[30] = {
   71491.82,
   286172.6,
   277835.5,
   216264,
   148244.8,
   110814.3,
   104981.1,
   76232.52,
   64791.03,
   59570.84,
   53398.91,
   47108.02,
   41049.07,
   38100.19,
   31487.1,
   28904.85,
   23893.47,
   20134.15,
   14273.13,
   14424.55,
   13072.36,
   11764.04,
   7182.408,
   7929.864,
   4433.009,
   3346.34,
   1902.467,
   1413.957,
   874.6867,
   369.137};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fex1099[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fey1099[30] = {
   1806.841,
   5619.976,
   15707.26,
   20881.13,
   4331.181,
   3945.478,
   14717.01,
   3067.967,
   2628.371,
   3005.442,
   2885.841,
   2240.011,
   2102.396,
   2098.41,
   1574.263,
   2181.62,
   1776.602,
   1337.845,
   980.8355,
   1127.062,
   1171.024,
   1587.096,
   741.0406,
   955.1269,
   529.0849,
   517.8534,
   132.0231,
   269.4347,
   259.2766,
   57.36304};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_Bj0_fx1099,Graph_from_VbbHcc_tags_Z_dR_Bj0_fy1099,Graph_from_VbbHcc_tags_Z_dR_Bj0_fex1099,Graph_from_VbbHcc_tags_Z_dR_Bj0_fey1099);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->SetMinimum(280.5966);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->SetMaximum(322865.9);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01099);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR_Bj0","MC unc. (stat.)","fl");

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
   Z_dR_Bj0_tags_17->cd();
  
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
   
   TH1D *data_mc_ratio__100 = new TH1D("data_mc_ratio__100","",30,0,6);
   data_mc_ratio__100->SetBinContent(1,0.3283452);
   data_mc_ratio__100->SetBinContent(2,0.2902094);
   data_mc_ratio__100->SetBinContent(3,0.2698323);
   data_mc_ratio__100->SetBinContent(4,0.2541339);
   data_mc_ratio__100->SetBinContent(5,0.2841853);
   data_mc_ratio__100->SetBinContent(6,0.3005118);
   data_mc_ratio__100->SetBinContent(7,0.2571321);
   data_mc_ratio__100->SetBinContent(8,0.2944938);
   data_mc_ratio__100->SetBinContent(9,0.2978345);
   data_mc_ratio__100->SetBinContent(10,0.289034);
   data_mc_ratio__100->SetBinContent(11,0.2868224);
   data_mc_ratio__100->SetBinContent(12,0.2933896);
   data_mc_ratio__100->SetBinContent(13,0.3045867);
   data_mc_ratio__100->SetBinContent(14,0.2965077);
   data_mc_ratio__100->SetBinContent(15,0.3136205);
   data_mc_ratio__100->SetBinContent(16,0.3012643);
   data_mc_ratio__100->SetBinContent(17,0.3001657);
   data_mc_ratio__100->SetBinContent(18,0.2959152);
   data_mc_ratio__100->SetBinContent(19,0.3430921);
   data_mc_ratio__100->SetBinContent(20,0.3027477);
   data_mc_ratio__100->SetBinContent(21,0.2735544);
   data_mc_ratio__100->SetBinContent(22,0.2465989);
   data_mc_ratio__100->SetBinContent(23,0.3285806);
   data_mc_ratio__100->SetBinContent(24,0.2470408);
   data_mc_ratio__100->SetBinContent(25,0.3320544);
   data_mc_ratio__100->SetBinContent(26,0.3155686);
   data_mc_ratio__100->SetBinContent(27,0.4126221);
   data_mc_ratio__100->SetBinContent(28,0.3529102);
   data_mc_ratio__100->SetBinContent(29,0.377278);
   data_mc_ratio__100->SetBinContent(30,0.4957509);
   data_mc_ratio__100->SetBinContent(31,0.3145349);
   data_mc_ratio__100->SetBinError(1,0.002143074);
   data_mc_ratio__100->SetBinError(2,0.001007028);
   data_mc_ratio__100->SetBinError(3,0.000985492);
   data_mc_ratio__100->SetBinError(4,0.001084025);
   data_mc_ratio__100->SetBinError(5,0.001384558);
   data_mc_ratio__100->SetBinError(6,0.00164677);
   data_mc_ratio__100->SetBinError(7,0.00156503);
   data_mc_ratio__100->SetBinError(8,0.001965477);
   data_mc_ratio__100->SetBinError(9,0.002144026);
   data_mc_ratio__100->SetBinError(10,0.002202712);
   data_mc_ratio__100->SetBinError(11,0.00231761);
   data_mc_ratio__100->SetBinError(12,0.0024956);
   data_mc_ratio__100->SetBinError(13,0.002723979);
   data_mc_ratio__100->SetBinError(14,0.00278968);
   data_mc_ratio__100->SetBinError(15,0.003155992);
   data_mc_ratio__100->SetBinError(16,0.003228408);
   data_mc_ratio__100->SetBinError(17,0.003544385);
   data_mc_ratio__100->SetBinError(18,0.00383369);
   data_mc_ratio__100->SetBinError(19,0.004902817);
   data_mc_ratio__100->SetBinError(20,0.004581305);
   data_mc_ratio__100->SetBinError(21,0.004574513);
   data_mc_ratio__100->SetBinError(22,0.004578437);
   data_mc_ratio__100->SetBinError(23,0.006763725);
   data_mc_ratio__100->SetBinError(24,0.005581507);
   data_mc_ratio__100->SetBinError(25,0.008654766);
   data_mc_ratio__100->SetBinError(26,0.009710953);
   data_mc_ratio__100->SetBinError(27,0.01472711);
   data_mc_ratio__100->SetBinError(28,0.01579843);
   data_mc_ratio__100->SetBinError(29,0.02076847);
   data_mc_ratio__100->SetBinError(30,0.03664696);
   data_mc_ratio__100->SetBinError(31,0.1220279);
   data_mc_ratio__100->SetMinimum(0.4);
   data_mc_ratio__100->SetMaximum(1.6);
   data_mc_ratio__100->SetEntries(2114.214);
   data_mc_ratio__100->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__100->SetLineColor(ci);
   data_mc_ratio__100->SetLineWidth(2);
   data_mc_ratio__100->SetMarkerStyle(20);
   data_mc_ratio__100->SetMarkerSize(1.2);
   data_mc_ratio__100->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__100->GetXaxis()->SetRange(1,30);
   data_mc_ratio__100->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__100->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__100->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__100->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__100->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__100->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__100->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__100->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__100->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__100->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__100->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__100->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__100->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__100->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__100->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__100->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__100->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1100[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1100[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1100[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1100[30] = {
   0.02527339,
   0.01963841,
   0.0565344,
   0.09655389,
   0.02921641,
   0.03560443,
   0.1401872,
   0.04024486,
   0.0405669,
   0.05045156,
   0.05404308,
   0.04755052,
   0.05121664,
   0.0550761,
   0.04999707,
   0.07547589,
   0.07435511,
   0.06644658,
   0.068719,
   0.07813494,
   0.08958016,
   0.1349107,
   0.1031744,
   0.1204468,
   0.1193512,
   0.1547522,
   0.06939574,
   0.1905536,
   0.2964223,
   0.1553977};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1100,Graph_from_mc_statistical_error_fy1100,Graph_from_mc_statistical_error_fex1100,Graph_from_mc_statistical_error_fey1100);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1100 = new TH1F("Graph_Graph_from_mc_statistical_error1100","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1100->SetMinimum(0.6442932);
   Graph_Graph_from_mc_statistical_error1100->SetMaximum(1.355707);
   Graph_Graph_from_mc_statistical_error1100->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1100->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1100->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1100->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1100->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1100->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1100->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1100->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1100->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1100->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1100->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1100->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1100->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1100->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1100->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1100->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1100);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_tags_17->cd();
   Z_dR_Bj0_tags_17->Modified();
   Z_dR_Bj0_tags_17->cd();
   Z_dR_Bj0_tags_17->SetSelected(Z_dR_Bj0_tags_17);
}
