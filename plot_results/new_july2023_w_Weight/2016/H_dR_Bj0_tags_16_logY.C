void H_dR_Bj0_tags_16_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_16/H_dR_Bj0_tags_16
//=========  (Thu Aug 10 12:20:10 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_tags_16 = new TCanvas("H_dR_Bj0_tags_16", "H_dR_Bj0_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_tags_16->SetHighLightColor(2);
   H_dR_Bj0_tags_16->Range(0,0,1,1);
   H_dR_Bj0_tags_16->SetFillColor(0);
   H_dR_Bj0_tags_16->SetFillStyle(4000);
   H_dR_Bj0_tags_16->SetBorderMode(0);
   H_dR_Bj0_tags_16->SetBorderSize(2);
   H_dR_Bj0_tags_16->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.85135,6.314516,11.71588);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(5.426399e+09);
   
   TH1F *st_stack_41 = new TH1F("st_stack_41","",30,0,6);
   st_stack_41->SetMinimum(0.001456186);
   st_stack_41->SetMaximum(1.816163e+10);
   st_stack_41->SetDirectory(0);
   st_stack_41->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_41->SetLineColor(ci);
   st_stack_41->GetXaxis()->SetRange(1,30);
   st_stack_41->GetXaxis()->SetLabelFont(42);
   st_stack_41->GetXaxis()->SetLabelSize(0.035);
   st_stack_41->GetXaxis()->SetTitleSize(0.035);
   st_stack_41->GetXaxis()->SetTitleFont(42);
   st_stack_41->GetYaxis()->SetTitle("Events/0.2");
   st_stack_41->GetYaxis()->SetLabelFont(42);
   st_stack_41->GetYaxis()->SetLabelSize(0.05);
   st_stack_41->GetYaxis()->SetTitleSize(0.057);
   st_stack_41->GetYaxis()->SetTitleOffset(1.2);
   st_stack_41->GetYaxis()->SetTitleFont(42);
   st_stack_41->GetZaxis()->SetLabelFont(42);
   st_stack_41->GetZaxis()->SetLabelSize(0.035);
   st_stack_41->GetZaxis()->SetTitleSize(0.035);
   st_stack_41->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_41);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(1,3542.608);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(2,20192.22);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(3,21086.58);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(4,22089.45);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(5,12369.22);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(6,11781.55);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(7,11040.43);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(8,9513.229);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(9,8029.132);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(10,6084.649);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(11,6707.799);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(12,8134.239);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(13,5777.357);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(14,5462.314);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(15,5523.467);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(16,3896.961);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(17,1692.944);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(18,1915.755);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(19,2240.44);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(20,572.9471);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(21,795.3144);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(22,748.8624);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(23,1410.424);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(24,322.4397);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(25,1099.317);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(26,214.9111);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(27,335.5233);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(28,376.6987);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(29,11.1869);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(30,11.45951);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(31,14.13695);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(1,504.0029);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(2,2546.5);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(3,2306.858);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(4,3302.013);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(5,1450.334);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(6,1952.19);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(7,1914.116);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(8,2254.818);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(9,1192.822);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(10,991.0904);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(11,1687.387);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(12,1791.361);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(13,1640.787);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(14,1051.318);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(15,1619.265);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(16,1524.292);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(17,405.0675);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(18,549.2703);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(19,612.3967);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(20,89.34708);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(21,284.8828);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(22,282.4139);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(23,542.2385);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(24,73.29316);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(25,470.7289);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(26,56.67996);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(27,270.1724);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(28,271.3644);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(29,7.225276);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(30,7.237425);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(31,8.137399);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetEntries(9435);

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
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(1,17.48691);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(2,80.21981);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(3,85.25784);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(4,83.32988);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(5,63.28585);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(6,58.35113);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(7,42.58989);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(8,36.29554);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(9,31.90576);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(10,32.69953);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(11,25.78241);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(12,26.65137);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(13,21.59407);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(14,19.48936);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(15,23.30888);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(16,18.77902);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(17,14.89349);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(18,12.13072);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(19,7.9234);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(20,6.994793);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(21,6.23527);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(22,6.071591);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(23,4.988245);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(24,2.977423);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(25,2.56787);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(26,2.241307);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(27,1.138063);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(28,1.188042);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(29,0.8648988);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(30,0.2053335);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(31,1.293648);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(1,1.714027);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(2,3.652391);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(3,3.656654);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(4,3.692356);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(5,3.139861);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(6,3.063648);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(7,2.520622);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(8,2.374702);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(9,2.180616);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(10,2.267048);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(11,1.917444);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(12,2.018842);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(13,1.822585);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(14,1.655973);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(15,1.890146);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(16,1.716601);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(17,1.478473);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(18,1.365033);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(19,1.071704);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(20,0.958226);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(21,0.8768093);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(22,0.9950002);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(23,0.9026136);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(24,0.6114656);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(25,0.597267);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(26,0.5349683);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(27,0.4146989);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(28,0.4159035);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(29,0.3974874);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(30,0.1029313);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(31,0.4884557);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetEntries(9214);

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
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(1,274.4097);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(2,1311.55);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(3,1732.459);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(4,1586.86);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(5,1328.238);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(6,1060.324);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(7,848.7851);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(8,725.9565);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(9,633.1085);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(10,577.583);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(11,527.9255);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(12,477.2392);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(13,436.9465);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(14,392.9304);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(15,337.8214);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(16,302.4741);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(17,243.6868);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(18,197.4945);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(19,167.8743);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(20,135.4249);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(21,108.6399);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(22,84.26719);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(23,71.31535);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(24,54.69812);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(25,39.9351);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(26,26.04083);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(27,21.67183);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(28,14.00124);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(29,10.47278);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(30,5.470528);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(31,9.959546);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(1,4.185681);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(2,9.172279);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(3,10.57311);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(4,10.13203);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(5,9.274168);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(6,8.276893);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(7,7.404501);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(8,6.847423);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(9,6.391654);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(10,6.106318);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(11,5.832351);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(12,5.563598);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(13,5.317021);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(14,5.04537);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(15,4.667606);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(16,4.409814);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(17,3.964258);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(18,3.55592);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(19,3.286754);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(20,2.950182);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(21,2.639135);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(22,2.321063);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(23,2.135381);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(24,1.863305);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(25,1.596033);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(26,1.290805);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(27,1.175794);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(28,0.943304);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(29,0.8173945);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(30,0.5807147);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(31,0.781766);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetEntries(221451);

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
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(1,52.82077);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(2,219.9735);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(3,250.6487);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(4,228.1769);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(5,178.6633);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(6,139.6839);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(7,125.9249);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(8,102.0075);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(9,79.75909);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(10,81.13179);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(11,74.79199);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(12,73.70991);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(13,71.65332);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(14,64.03146);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(15,53.60786);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(16,42.95851);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(17,37.75846);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(18,30.96073);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(19,22.30197);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(20,18.25925);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(21,13.81894);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(22,12.79661);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(23,12.12619);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(24,6.467241);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(25,8.078865);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(26,4.115442);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(27,4.072171);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(28,1.324976);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(29,0.8905986);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(30,0.9036648);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(31,0.4112435);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(1,4.146283);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(2,9.415724);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(3,10.63568);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(4,12.80456);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(5,11.78045);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(6,9.441025);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(7,9.808829);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(8,8.150898);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(9,5.443349);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(10,6.798619);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(11,6.713038);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(12,6.686127);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(13,7.036247);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(14,6.154231);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(15,5.526947);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(16,4.816373);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(17,5.264239);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(18,5.128088);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(19,3.804483);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(20,1.830988);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(21,2.741493);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(22,2.728713);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(23,2.708724);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(24,1.020873);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(25,2.599146);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(26,0.8029744);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(27,0.8691837);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(28,0.389086);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(29,0.3460345);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(30,0.4244062);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(31,0.1682212);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetEntries(14977);

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
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(1,12.81537);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(2,22.48582);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(3,18.29907);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(4,15.66249);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(5,10.36976);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(6,12.32769);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(7,7.735134);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(8,8.91793);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(9,9.888923);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(10,5.312086);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(11,5.765635);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(12,7.753272);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(13,3.86683);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(14,4.111515);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(15,8.068761);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(16,2.98363);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(17,6.309824);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(18,4.853191);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(19,3.938319);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(20,1.724536);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(21,1.257108);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(22,8.225805);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(23,3.292679);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(24,0.7090249);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(25,1.02161);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(26,0.6348304);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(27,0.2349741);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(28,0.2679478);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(29,0.1968777);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(30,0.04497814);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(31,0.1568484);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(1,6.115124);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(2,2.72764);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(3,2.291064);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(4,2.3976);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(5,1.999478);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(6,2.058003);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(7,1.318083);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(8,1.705576);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(9,2.022021);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(10,1.199007);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(11,1.230758);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(12,1.697665);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(13,0.6575722);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(14,0.7047167);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(15,2.180969);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(16,1.101999);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(17,1.870403);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(18,1.591625);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(19,1.248187);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(20,0.4089537);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(21,0.3274981);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(22,6.16513);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(23,1.521855);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(24,0.2701733);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(25,0.4284969);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(26,0.2380048);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(27,0.1312548);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(28,0.1362335);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(29,0.1109634);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(30,0.0444663);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(31,0.1487618);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetEntries(3105);

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
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(2,0.1343693);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(3,0.1343693);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(4,0.1343693);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(6,0.1343693);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(7,0.4031079);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(8,0.1343693);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(10,0.1343693);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(12,0.1343693);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(15,0.1343693);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(2,0.1343693);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(3,0.1343693);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(4,0.1343693);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(6,0.1343693);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(7,0.2327345);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(8,0.1343693);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(10,0.1343693);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(12,0.1343693);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(15,0.1343693);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetEntries(11);

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
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(1,0.3269437);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(2,1.089812);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(3,0.5449062);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(4,0.2179625);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(5,0.1089812);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(6,0.3269437);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(8,0.3269437);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(9,0.3269437);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(10,0.3269437);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(11,0.2179625);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(12,0.3269437);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(14,0.4359249);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(15,0.1089812);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(16,0.1089812);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(17,0.1089812);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(19,0.1089812);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(21,0.1089812);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(25,0.1089812);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(1,0.188761);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(2,0.3446289);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(3,0.2436895);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(4,0.1541227);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(5,0.1089812);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(6,0.188761);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(8,0.188761);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(9,0.188761);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(10,0.188761);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(11,0.1541227);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(12,0.188761);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(14,0.2179625);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(15,0.1089812);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(16,0.1089812);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(17,0.1089812);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(19,0.1089812);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(21,0.1089812);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(25,0.1089812);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetEntries(48);

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
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(1,0.2432072);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(2,4.864143);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(3,6.8098);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(4,6.566593);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(5,3.161693);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(6,3.161693);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(7,2.675279);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(8,1.216036);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(9,1.216036);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(10,3.161693);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(11,1.70245);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(12,1.70245);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(13,0.9728286);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(14,1.216036);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(15,0.4864143);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(16,0.4864143);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(17,0.7296215);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(18,0.2432072);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(19,0.4864143);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(20,0.4864143);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(23,0.2432072);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(25,0.2432072);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(1,0.2432072);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(2,1.087655);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(3,1.286931);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(4,1.263741);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(5,0.8768959);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(6,0.8768959);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(7,0.8066269);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(8,0.5438277);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(9,0.5438277);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(10,0.8768959);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(11,0.6434656);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(12,0.6434656);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(13,0.4864143);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(14,0.5438277);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(15,0.3439469);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(16,0.3439469);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(17,0.4212471);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(18,0.2432072);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(19,0.3439469);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(20,0.3439469);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(23,0.2432072);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(25,0.2432072);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetEntries(173);

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
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(1,0.9869905);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(2,4.405415);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(3,5.600339);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(4,4.91);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(5,3.781615);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(6,2.70452);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(7,2.184687);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(8,1.76882);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(9,1.664853);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(10,1.71753);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(11,1.595542);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(12,1.526231);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(13,1.461079);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(14,1.201855);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(15,0.9551074);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(16,0.7236082);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(17,0.5226059);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(18,0.3493281);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(19,0.2938792);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(20,0.1996161);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(21,0.1400085);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(22,0.1233738);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(23,0.09287691);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(24,0.06792491);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(25,0.05406268);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(26,0.04713157);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(27,0.03742801);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(28,0.008317336);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(29,0.008317336);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(30,0.001386223);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(31,0.004158668);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(1,0.03698903);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(2,0.07814657);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(3,0.08810969);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(4,0.08250063);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(5,0.07240277);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(6,0.06122963);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(7,0.05503147);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(8,0.04951745);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(9,0.04804016);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(10,0.04879425);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(11,0.04702953);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(12,0.0459967);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(13,0.04500422);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(14,0.04081714);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(15,0.03638669);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(16,0.03167147);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(17,0.02691557);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(18,0.0220056);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(19,0.02018371);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(20,0.01663467);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(21,0.01393136);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(22,0.0130776);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(23,0.01134672);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(24,0.009703558);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(25,0.008656957);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(26,0.008082997);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(27,0.007203024);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(28,0.003395538);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(29,0.003395538);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(30,0.001386223);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(31,0.002401008);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetEntries(28234);

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
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(1,0.4041299);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(2,1.99768);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(3,2.609617);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(4,2.294496);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(5,1.731011);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(6,1.2551);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(7,0.9679738);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(8,0.8376903);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(9,0.7389907);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(10,0.6664914);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(11,0.6743874);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(12,0.601888);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(13,0.5444628);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(14,0.4733991);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(15,0.3991052);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(16,0.3201456);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(17,0.2620025);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(18,0.1884265);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(19,0.1478699);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(20,0.1112614);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(21,0.08900908);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(22,0.07285824);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(23,0.0617321);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(24,0.04486345);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(25,0.02943042);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(26,0.01794538);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(27,0.01471521);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(28,0.007178152);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(29,0.006101429);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(30,0.00143563);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(31,0.003589076);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(1,0.01204348);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(2,0.02677653);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(3,0.03060411);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(4,0.0286969);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(5,0.02492535);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(6,0.02122416);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(7,0.01863902);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(8,0.01733936);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(9,0.01628586);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(10,0.01546638);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(11,0.01555772);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(12,0.01469769);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(13,0.01397898);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(14,0.01303482);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(15,0.01196837);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(16,0.01071927);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(17,0.009697149);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(18,0.008223606);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(19,0.007285028);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(20,0.00631922);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(21,0.005652082);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(22,0.005113646);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(23,0.004707029);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(24,0.004012709);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(25,0.003250046);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(26,0.00253786);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(27,0.00229813);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(28,0.001605084);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(29,0.001479814);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(30,0.0007178152);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(31,0.001134965);
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
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(1,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(2,0.01641004);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(3,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(4,0.03008508);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(5,0.008205022);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(6,0.008205022);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(7,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(9,0.005470015);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(10,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(13,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(14,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(15,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(16,0.008205022);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(18,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(1,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(2,0.006699373);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(3,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(4,0.009070994);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(5,0.004737172);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(6,0.004737172);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(7,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(9,0.003867885);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(10,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(13,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(14,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(15,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(16,0.004737172);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(18,0.002735007);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetEntries(36);

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
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(1,0.001786329);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(2,0.004644456);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(3,0.00857438);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(4,0.008217114);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(5,0.003929924);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(6,0.005358988);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(7,0.001786329);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(8,0.001071798);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(9,0.001429063);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(10,0.0007145317);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(11,0.001071798);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(12,0.001071798);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(13,0.0003572658);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(14,0.0007145317);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(15,0.0007145317);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(17,0.001429063);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(19,0.001071798);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(20,0.0003572658);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(21,0.0003572658);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(27,0.0007145317);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(1,0.0007988707);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(2,0.00128814);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(3,0.001750238);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(4,0.001713387);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(5,0.001184917);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(6,0.001383685);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(7,0.0007988707);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(8,0.0006188026);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(9,0.0007145317);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(10,0.0005052502);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(11,0.0006188026);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(12,0.0006188026);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(13,0.0003572658);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(14,0.0005052502);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(15,0.0005052502);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(17,0.0007145317);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(19,0.0006188026);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(20,0.0003572658);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(21,0.0003572658);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(27,0.0005052502);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetEntries(127);

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
   
   TH1D *VbbHcc_tags_H_dR_Bj0__111 = new TH1D("VbbHcc_tags_H_dR_Bj0__111","",30,0,6);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(1,3364);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(2,11710);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(3,11599);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(4,9753);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(5,8004);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(6,6657);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(7,5774);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(8,4904);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(9,4325);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(10,3893);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(11,3615);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(12,3413);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(13,3095);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(14,2807);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(15,2597);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(16,2282);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(17,1859);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(18,1505);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(19,1205);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(20,1095);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(21,915);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(22,664);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(23,567);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(24,426);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(25,344);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(26,285);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(27,165);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(28,140);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(29,88);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(30,48);
   VbbHcc_tags_H_dR_Bj0__111->SetBinContent(31,87);
   VbbHcc_tags_H_dR_Bj0__111->SetEntries(97214);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0__111->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0__111->SetLineWidth(2);
   VbbHcc_tags_H_dR_Bj0__111->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_Bj0__111->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_Bj0__111->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0__111->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__111->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__111->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__111->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__111->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__111->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__111->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__111->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0__111->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__111->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__111->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__111->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__111->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__111->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fx1081[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fy1081[30] = {
   3902.106,
   21838.96,
   23188.96,
   24017.64,
   13958.58,
   13059.84,
   12071.7,
   10390.69,
   8787.748,
   6787.386,
   7346.256,
   8723.886,
   6314.399,
   5946.207,
   5948.361,
   4265.804,
   1997.217,
   2161.977,
   2443.516,
   736.1482,
   925.6039,
   860.4199,
   1502.544,
   387.4043,
   1151.356,
   248.0086,
   362.6932,
   393.4964,
   23.62647,
   18.08684};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fex1081[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fey1081[30] = {
   504.0775,
   2546.538,
   2306.911,
   3302.056,
   1450.416,
   1952.234,
   1914.158,
   2254.845,
   1192.856,
   991.1362,
   1687.412,
   1791.384,
   1640.812,
   1051.35,
   1619.284,
   1524.307,
   405.1283,
   549.3098,
   612.4196,
   89.42126,
   284.9098,
   282.5057,
   542.2524,
   73.32699,
   470.7394,
   56.70336,
   270.1767,
   271.3666,
   7.291283,
   7.273942};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_Bj0_fx1081,Graph_from_VbbHcc_tags_H_dR_Bj0_fy1081,Graph_from_VbbHcc_tags_H_dR_Bj0_fex1081,Graph_from_VbbHcc_tags_H_dR_Bj0_fey1081);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->SetMinimum(9.731607);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->SetMaximum(30050.58);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_Bj01081);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0","Data (JetHT, 2016)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj0_tags_16->cd();
  
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
   
   TH1D *data_mc_ratio__112 = new TH1D("data_mc_ratio__112","",30,0,6);
   data_mc_ratio__112->SetBinContent(1,0.8620985);
   data_mc_ratio__112->SetBinContent(2,0.5361977);
   data_mc_ratio__112->SetBinContent(3,0.500195);
   data_mc_ratio__112->SetBinContent(4,0.4060766);
   data_mc_ratio__112->SetBinContent(5,0.573411);
   data_mc_ratio__112->SetBinContent(6,0.5097308);
   data_mc_ratio__112->SetBinContent(7,0.4783088);
   data_mc_ratio__112->SetBinContent(8,0.4719609);
   data_mc_ratio__112->SetBinContent(9,0.4921625);
   data_mc_ratio__112->SetBinContent(10,0.573564);
   data_mc_ratio__112->SetBinContent(11,0.4920874);
   data_mc_ratio__112->SetBinContent(12,0.3912248);
   data_mc_ratio__112->SetBinContent(13,0.4901496);
   data_mc_ratio__112->SetBinContent(14,0.4720656);
   data_mc_ratio__112->SetBinContent(15,0.4365909);
   data_mc_ratio__112->SetBinContent(16,0.5349519);
   data_mc_ratio__112->SetBinContent(17,0.9307953);
   data_mc_ratio__112->SetBinContent(18,0.696122);
   data_mc_ratio__112->SetBinContent(19,0.4931418);
   data_mc_ratio__112->SetBinContent(20,1.487472);
   data_mc_ratio__112->SetBinContent(21,0.9885438);
   data_mc_ratio__112->SetBinContent(22,0.7717163);
   data_mc_ratio__112->SetBinContent(23,0.3773599);
   data_mc_ratio__112->SetBinContent(24,1.099626);
   data_mc_ratio__112->SetBinContent(25,0.2987781);
   data_mc_ratio__112->SetBinContent(26,1.149154);
   data_mc_ratio__112->SetBinContent(27,0.45493);
   data_mc_ratio__112->SetBinContent(28,0.3557847);
   data_mc_ratio__112->SetBinContent(29,3.724636);
   data_mc_ratio__112->SetBinContent(30,2.653863);
   data_mc_ratio__112->SetBinContent(31,3.350538);
   data_mc_ratio__112->SetBinError(1,0.01486377);
   data_mc_ratio__112->SetBinError(2,0.004955032);
   data_mc_ratio__112->SetBinError(3,0.004644394);
   data_mc_ratio__112->SetBinError(4,0.004111865);
   data_mc_ratio__112->SetBinError(5,0.006409327);
   data_mc_ratio__112->SetBinError(6,0.006247432);
   data_mc_ratio__112->SetBinError(7,0.006294627);
   data_mc_ratio__112->SetBinError(8,0.006739548);
   data_mc_ratio__112->SetBinError(9,0.007483684);
   data_mc_ratio__112->SetBinError(10,0.009192628);
   data_mc_ratio__112->SetBinError(11,0.008184424);
   data_mc_ratio__112->SetBinError(12,0.006696659);
   data_mc_ratio__112->SetBinError(13,0.008810454);
   data_mc_ratio__112->SetBinError(14,0.008910071);
   data_mc_ratio__112->SetBinError(15,0.008567195);
   data_mc_ratio__112->SetBinError(16,0.01119842);
   data_mc_ratio__112->SetBinError(17,0.0215881);
   data_mc_ratio__112->SetBinError(18,0.01794391);
   data_mc_ratio__112->SetBinError(19,0.01420621);
   data_mc_ratio__112->SetBinError(20,0.04495125);
   data_mc_ratio__112->SetBinError(21,0.03268025);
   data_mc_ratio__112->SetBinError(22,0.0299484);
   data_mc_ratio__112->SetBinError(23,0.01584763);
   data_mc_ratio__112->SetBinError(24,0.05327707);
   data_mc_ratio__112->SetBinError(25,0.01610903);
   data_mc_ratio__112->SetBinError(26,0.06806999);
   data_mc_ratio__112->SetBinError(27,0.03541625);
   data_mc_ratio__112->SetBinError(28,0.0300693);
   data_mc_ratio__112->SetBinError(29,0.3970475);
   data_mc_ratio__112->SetBinError(30,0.3830522);
   data_mc_ratio__112->SetBinError(31,1.116492);
   data_mc_ratio__112->SetMinimum(0.4);
   data_mc_ratio__112->SetMaximum(1.6);
   data_mc_ratio__112->SetEntries(159.3594);
   data_mc_ratio__112->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__112->SetLineColor(ci);
   data_mc_ratio__112->SetLineWidth(2);
   data_mc_ratio__112->SetMarkerStyle(20);
   data_mc_ratio__112->SetMarkerSize(1.2);
   data_mc_ratio__112->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__112->GetXaxis()->SetRange(1,30);
   data_mc_ratio__112->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__112->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__112->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__112->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__112->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__112->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__112->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__112->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__112->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__112->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__112->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__112->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__112->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__112->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__112->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__112->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__112->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1082[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1082[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1082[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1082[30] = {
   0.1291809,
   0.1166053,
   0.09948318,
   0.1374846,
   0.1039086,
   0.1494838,
   0.1585657,
   0.2170062,
   0.1357408,
   0.1460262,
   0.2296969,
   0.2053425,
   0.2598525,
   0.1768102,
   0.2722236,
   0.3573317,
   0.2028464,
   0.2540775,
   0.2506305,
   0.1214718,
   0.3078096,
   0.3283347,
   0.3608894,
   0.1892777,
   0.4088565,
   0.2286346,
   0.744918,
   0.6896293,
   0.3086065,
   0.4021677};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1082,Graph_from_mc_statistical_error_fy1082,Graph_from_mc_statistical_error_fex1082,Graph_from_mc_statistical_error_fey1082);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1082 = new TH1F("Graph_Graph_from_mc_statistical_error1082","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1082->SetMinimum(0.1060984);
   Graph_Graph_from_mc_statistical_error1082->SetMaximum(1.893902);
   Graph_Graph_from_mc_statistical_error1082->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1082->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1082->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1082->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1082->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1082->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1082->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1082->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1082->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1082->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1082->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1082->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1082->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1082->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1082->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1082->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1082);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_tags_16->cd();
   H_dR_Bj0_tags_16->Modified();
   H_dR_Bj0_tags_16->cd();
   H_dR_Bj0_tags_16->SetSelected(H_dR_Bj0_tags_16);
}
