void Z_dR_both_16_logY()
{
//=========Macro generated from canvas: Z_dR_both_16/Z_dR_both_16
//=========  (Tue Aug 22 09:18:14 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_both_16 = new TCanvas("Z_dR_both_16", "Z_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_both_16->SetHighLightColor(2);
   Z_dR_both_16->Range(0,0,1,1);
   Z_dR_both_16->SetFillColor(0);
   Z_dR_both_16->SetFillStyle(4000);
   Z_dR_both_16->SetBorderMode(0);
   Z_dR_both_16->SetBorderSize(2);
   Z_dR_both_16->SetFrameFillStyle(1000);
   Z_dR_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.829498,6.314516,10.97107);
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
   st->SetMaximum(1.212275e+09);
   
   TH1F *st_stack_209 = new TH1F("st_stack_209","",30,0,6);
   st_stack_209->SetMinimum(0.001528631);
   st_stack_209->SetMaximum(3.89955e+09);
   st_stack_209->SetDirectory(0);
   st_stack_209->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_209->SetLineColor(ci);
   st_stack_209->GetXaxis()->SetRange(1,30);
   st_stack_209->GetXaxis()->SetLabelFont(42);
   st_stack_209->GetXaxis()->SetLabelSize(0.035);
   st_stack_209->GetXaxis()->SetTitleSize(0.035);
   st_stack_209->GetXaxis()->SetTitleFont(42);
   st_stack_209->GetYaxis()->SetTitle("Events/0.2");
   st_stack_209->GetYaxis()->SetLabelFont(42);
   st_stack_209->GetYaxis()->SetLabelSize(0.05);
   st_stack_209->GetYaxis()->SetTitleSize(0.057);
   st_stack_209->GetYaxis()->SetTitleOffset(1.2);
   st_stack_209->GetYaxis()->SetTitleFont(42);
   st_stack_209->GetZaxis()->SetLabelFont(42);
   st_stack_209->GetZaxis()->SetLabelSize(0.035);
   st_stack_209->GetZaxis()->SetTitleSize(0.035);
   st_stack_209->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_209);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,11680.33);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,11089.72);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,7600.082);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,8858.43);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,5310.784);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,5389.325);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,4176.614);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,3506.049);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,6999.987);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,4903.162);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,5243.278);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,5840.453);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,8491.492);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,7962.591);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,6689.854);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,4247.529);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,3569.567);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,4048.383);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,2793.814);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,2823.182);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,3857.857);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,678.3298);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,2263.727);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(26,1573.644);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(27,1478.311);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(28,1244.676);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(29,787.778);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(30,583.0898);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(31,448.6041);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,1484.07);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,1567.983);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,1269.404);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,1546.36);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,823.6702);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,1184.885);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,738.6381);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,565.7295);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,1818.358);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,835.6551);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,854.9385);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,1363.645);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,1969.651);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,1648.773);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,1038.746);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,763.5975);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,696.3239);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,747.6939);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,1088.708);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,642.0816);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,1204.387);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,93.70114);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,918.6204);
   VbbHcc_both_Z_dR_stack_1->SetBinError(26,490.1467);
   VbbHcc_both_Z_dR_stack_1->SetBinError(27,504.8814);
   VbbHcc_both_Z_dR_stack_1->SetBinError(28,370.7433);
   VbbHcc_both_Z_dR_stack_1->SetBinError(29,224.5151);
   VbbHcc_both_Z_dR_stack_1->SetBinError(30,187.1247);
   VbbHcc_both_Z_dR_stack_1->SetBinError(31,222.6264);
   VbbHcc_both_Z_dR_stack_1->SetEntries(9183);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_2 = new TH1D("VbbHcc_both_Z_dR_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,26.71769);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,29.91751);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,25.86916);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,28.73523);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,32.32026);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,29.10784);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,29.91532);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,25.51883);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,32.01971);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,29.52951);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,30.96259);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,27.59533);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,27.99381);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,27.22732);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,22.16724);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,24.53927);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,18.21582);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,16.33688);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,15.32139);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,13.20554);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,11.97831);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,11.09597);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,8.579995);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,8.998306);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(27,4.685992);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(28,6.141113);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(29,3.347122);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(30,3.100398);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(31,3.054161);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,2.016978);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,2.055409);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,1.892129);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,2.001689);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,2.140744);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,1.961834);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,2.072344);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,1.886216);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,2.228559);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,2.071295);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,2.13048);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,1.984351);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,1.968184);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,1.94335);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,1.790184);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,1.939007);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,1.549654);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,1.475241);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,1.534258);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,1.411428);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,1.263963);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,1.27689);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,1.115609);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,1.127512);
   VbbHcc_both_Z_dR_stack_2->SetBinError(27,0.8141564);
   VbbHcc_both_Z_dR_stack_2->SetBinError(28,0.9443208);
   VbbHcc_both_Z_dR_stack_2->SetBinError(29,0.65122);
   VbbHcc_both_Z_dR_stack_2->SetBinError(30,0.6889905);
   VbbHcc_both_Z_dR_stack_2->SetBinError(31,0.7087042);
   VbbHcc_both_Z_dR_stack_2->SetEntries(9517);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_3 = new TH1D("VbbHcc_both_Z_dR_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(2,0.5882793);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(3,414.1344);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(4,615.4181);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(5,628.8569);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(6,664.2307);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(7,660.5042);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(8,639.2343);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(9,616.9343);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(10,595.7434);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(11,576.5792);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(12,575.4693);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(13,558.2309);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(14,550.2168);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(15,538.9616);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(16,514.6877);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(17,474.7473);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(18,439.9367);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(19,391.172);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(20,350.5526);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(21,313.6735);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(22,274.2208);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(23,239.9547);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(24,207.3669);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(25,181.4756);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(26,158.482);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(27,133.1857);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(28,107.4382);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(29,86.09739);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(30,58.61784);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(31,43.21132);
   VbbHcc_both_Z_dR_stack_3->SetBinError(2,0.1879602);
   VbbHcc_both_Z_dR_stack_3->SetBinError(3,4.769948);
   VbbHcc_both_Z_dR_stack_3->SetBinError(4,5.78663);
   VbbHcc_both_Z_dR_stack_3->SetBinError(5,5.822304);
   VbbHcc_both_Z_dR_stack_3->SetBinError(6,5.979018);
   VbbHcc_both_Z_dR_stack_3->SetBinError(7,5.944801);
   VbbHcc_both_Z_dR_stack_3->SetBinError(8,5.823355);
   VbbHcc_both_Z_dR_stack_3->SetBinError(9,5.704125);
   VbbHcc_both_Z_dR_stack_3->SetBinError(10,5.607632);
   VbbHcc_both_Z_dR_stack_3->SetBinError(11,5.525518);
   VbbHcc_both_Z_dR_stack_3->SetBinError(12,5.5189);
   VbbHcc_both_Z_dR_stack_3->SetBinError(13,5.447314);
   VbbHcc_both_Z_dR_stack_3->SetBinError(14,5.415864);
   VbbHcc_both_Z_dR_stack_3->SetBinError(15,5.37324);
   VbbHcc_both_Z_dR_stack_3->SetBinError(16,5.25717);
   VbbHcc_both_Z_dR_stack_3->SetBinError(17,5.051456);
   VbbHcc_both_Z_dR_stack_3->SetBinError(18,4.858903);
   VbbHcc_both_Z_dR_stack_3->SetBinError(19,4.584236);
   VbbHcc_both_Z_dR_stack_3->SetBinError(20,4.338649);
   VbbHcc_both_Z_dR_stack_3->SetBinError(21,4.101791);
   VbbHcc_both_Z_dR_stack_3->SetBinError(22,3.82176);
   VbbHcc_both_Z_dR_stack_3->SetBinError(23,3.579305);
   VbbHcc_both_Z_dR_stack_3->SetBinError(24,3.307344);
   VbbHcc_both_Z_dR_stack_3->SetBinError(25,3.099547);
   VbbHcc_both_Z_dR_stack_3->SetBinError(26,2.903513);
   VbbHcc_both_Z_dR_stack_3->SetBinError(27,2.655472);
   VbbHcc_both_Z_dR_stack_3->SetBinError(28,2.404252);
   VbbHcc_both_Z_dR_stack_3->SetBinError(29,2.143899);
   VbbHcc_both_Z_dR_stack_3->SetBinError(30,1.780709);
   VbbHcc_both_Z_dR_stack_3->SetBinError(31,1.511132);
   VbbHcc_both_Z_dR_stack_3->SetEntries(232621);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_4 = new TH1D("VbbHcc_both_Z_dR_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(2,0.1222537);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(3,88.14098);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(4,122.0265);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(5,121.789);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(6,106.5728);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(7,104.6281);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(8,74.12468);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(9,62.67014);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(10,60.14755);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(11,58.15116);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(12,58.49757);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(13,70.30355);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(14,71.24697);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(15,67.24328);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(16,66.04044);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(17,69.10658);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(18,48.93988);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(19,49.1742);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(20,50.9225);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(21,35.70401);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(22,33.05638);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(23,27.12551);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(24,27.0735);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(25,24.19503);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(26,16.54803);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(27,19.61531);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(28,19.1742);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(29,13.12195);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(30,9.686168);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(31,5.679454);
   VbbHcc_both_Z_dR_stack_4->SetBinError(2,0.08647192);
   VbbHcc_both_Z_dR_stack_4->SetBinError(3,3.49618);
   VbbHcc_both_Z_dR_stack_4->SetBinError(4,5.331681);
   VbbHcc_both_Z_dR_stack_4->SetBinError(5,5.628939);
   VbbHcc_both_Z_dR_stack_4->SetBinError(6,6.407548);
   VbbHcc_both_Z_dR_stack_4->SetBinError(7,7.949768);
   VbbHcc_both_Z_dR_stack_4->SetBinError(8,5.942166);
   VbbHcc_both_Z_dR_stack_4->SetBinError(9,4.480119);
   VbbHcc_both_Z_dR_stack_4->SetBinError(10,4.705167);
   VbbHcc_both_Z_dR_stack_4->SetBinError(11,4.308347);
   VbbHcc_both_Z_dR_stack_4->SetBinError(12,4.05998);
   VbbHcc_both_Z_dR_stack_4->SetBinError(13,6.167054);
   VbbHcc_both_Z_dR_stack_4->SetBinError(14,5.534597);
   VbbHcc_both_Z_dR_stack_4->SetBinError(15,4.687185);
   VbbHcc_both_Z_dR_stack_4->SetBinError(16,5.077564);
   VbbHcc_both_Z_dR_stack_4->SetBinError(17,5.618036);
   VbbHcc_both_Z_dR_stack_4->SetBinError(18,3.962116);
   VbbHcc_both_Z_dR_stack_4->SetBinError(19,4.404972);
   VbbHcc_both_Z_dR_stack_4->SetBinError(20,5.173178);
   VbbHcc_both_Z_dR_stack_4->SetBinError(21,3.993104);
   VbbHcc_both_Z_dR_stack_4->SetBinError(22,3.946931);
   VbbHcc_both_Z_dR_stack_4->SetBinError(23,3.518558);
   VbbHcc_both_Z_dR_stack_4->SetBinError(24,4.17534);
   VbbHcc_both_Z_dR_stack_4->SetBinError(25,2.885872);
   VbbHcc_both_Z_dR_stack_4->SetBinError(26,2.205765);
   VbbHcc_both_Z_dR_stack_4->SetBinError(27,2.382155);
   VbbHcc_both_Z_dR_stack_4->SetBinError(28,2.653357);
   VbbHcc_both_Z_dR_stack_4->SetBinError(29,1.392843);
   VbbHcc_both_Z_dR_stack_4->SetBinError(30,1.154028);
   VbbHcc_both_Z_dR_stack_4->SetBinError(31,0.9326365);
   VbbHcc_both_Z_dR_stack_4->SetEntries(15013);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_5 = new TH1D("VbbHcc_both_Z_dR_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(2,0.0002518302);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(3,22.75256);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(4,13.78237);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(5,10.92662);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(6,7.388542);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(7,8.353319);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(8,7.31661);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(9,5.617263);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(10,6.525349);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(11,4.611192);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(12,7.557357);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(13,6.099335);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(14,7.428478);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(15,9.562927);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(16,4.496793);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(17,5.799495);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(18,7.349257);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(19,4.20831);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(20,3.626404);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(21,3.180227);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(22,3.263255);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(23,2.044572);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(24,2.975269);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(25,1.827481);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(26,2.173931);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(27,1.172174);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(28,1.774061);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(29,1.482262);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(30,1.109192);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(31,0.2046536);
   VbbHcc_both_Z_dR_stack_5->SetBinError(2,0.0002518302);
   VbbHcc_both_Z_dR_stack_5->SetBinError(3,5.887177);
   VbbHcc_both_Z_dR_stack_5->SetBinError(4,1.60462);
   VbbHcc_both_Z_dR_stack_5->SetBinError(5,1.70926);
   VbbHcc_both_Z_dR_stack_5->SetBinError(6,1.108567);
   VbbHcc_both_Z_dR_stack_5->SetBinError(7,1.595071);
   VbbHcc_both_Z_dR_stack_5->SetBinError(8,1.380814);
   VbbHcc_both_Z_dR_stack_5->SetBinError(9,1.039215);
   VbbHcc_both_Z_dR_stack_5->SetBinError(10,1.446971);
   VbbHcc_both_Z_dR_stack_5->SetBinError(11,1.046662);
   VbbHcc_both_Z_dR_stack_5->SetBinError(12,1.680017);
   VbbHcc_both_Z_dR_stack_5->SetBinError(13,1.082037);
   VbbHcc_both_Z_dR_stack_5->SetBinError(14,1.679902);
   VbbHcc_both_Z_dR_stack_5->SetBinError(15,5.324332);
   VbbHcc_both_Z_dR_stack_5->SetBinError(16,1.037659);
   VbbHcc_both_Z_dR_stack_5->SetBinError(17,1.257351);
   VbbHcc_both_Z_dR_stack_5->SetBinError(18,1.796388);
   VbbHcc_both_Z_dR_stack_5->SetBinError(19,0.9659711);
   VbbHcc_both_Z_dR_stack_5->SetBinError(20,0.8756034);
   VbbHcc_both_Z_dR_stack_5->SetBinError(21,0.872157);
   VbbHcc_both_Z_dR_stack_5->SetBinError(22,0.8507193);
   VbbHcc_both_Z_dR_stack_5->SetBinError(23,0.4673994);
   VbbHcc_both_Z_dR_stack_5->SetBinError(24,0.9586089);
   VbbHcc_both_Z_dR_stack_5->SetBinError(25,0.4109813);
   VbbHcc_both_Z_dR_stack_5->SetBinError(26,0.8780203);
   VbbHcc_both_Z_dR_stack_5->SetBinError(27,0.3942409);
   VbbHcc_both_Z_dR_stack_5->SetBinError(28,0.4673235);
   VbbHcc_both_Z_dR_stack_5->SetBinError(29,0.3624331);
   VbbHcc_both_Z_dR_stack_5->SetBinError(30,0.2754407);
   VbbHcc_both_Z_dR_stack_5->SetBinError(31,0.1133301);
   VbbHcc_both_Z_dR_stack_5->SetEntries(3486);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_6 = new TH1D("VbbHcc_both_Z_dR_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(3,0.07803031);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(7,0.1195687);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(11,0.1173155);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(12,0.2295285);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(13,0.1234178);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(22,0.2579188);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(25,0.1297649);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(28,0.1294336);
   VbbHcc_both_Z_dR_stack_6->SetBinError(3,0.07803031);
   VbbHcc_both_Z_dR_stack_6->SetBinError(7,0.1195687);
   VbbHcc_both_Z_dR_stack_6->SetBinError(11,0.1173155);
   VbbHcc_both_Z_dR_stack_6->SetBinError(12,0.1623026);
   VbbHcc_both_Z_dR_stack_6->SetBinError(13,0.1234178);
   VbbHcc_both_Z_dR_stack_6->SetBinError(22,0.1824914);
   VbbHcc_both_Z_dR_stack_6->SetBinError(25,0.1297649);
   VbbHcc_both_Z_dR_stack_6->SetBinError(28,0.1294336);
   VbbHcc_both_Z_dR_stack_6->SetEntries(10);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_7 = new TH1D("VbbHcc_both_Z_dR_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(3,0.5662994);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(4,0.457376);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(5,0.2578937);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(6,0.1823739);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(7,0.09813325);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(8,0.0778465);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(9,0.1797396);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(10,0.1786943);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(11,0.1593737);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(13,0.2604592);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(14,0.3275189);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(15,0.3988554);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(16,0.1887101);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(17,0.2827811);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(18,0.09132081);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(19,0.08558222);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(21,0.09227263);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(22,0.0686903);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(24,0.2458232);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(25,0.0797212);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(29,0.08656424);
   VbbHcc_both_Z_dR_stack_7->SetBinError(3,0.2322378);
   VbbHcc_both_Z_dR_stack_7->SetBinError(4,0.2050838);
   VbbHcc_both_Z_dR_stack_7->SetBinError(5,0.1492826);
   VbbHcc_both_Z_dR_stack_7->SetBinError(6,0.1290231);
   VbbHcc_both_Z_dR_stack_7->SetBinError(7,0.09813325);
   VbbHcc_both_Z_dR_stack_7->SetBinError(8,0.0778465);
   VbbHcc_both_Z_dR_stack_7->SetBinError(9,0.1278823);
   VbbHcc_both_Z_dR_stack_7->SetBinError(10,0.1263656);
   VbbHcc_both_Z_dR_stack_7->SetBinError(11,0.1127139);
   VbbHcc_both_Z_dR_stack_7->SetBinError(13,0.1507859);
   VbbHcc_both_Z_dR_stack_7->SetBinError(14,0.1709814);
   VbbHcc_both_Z_dR_stack_7->SetBinError(15,0.199824);
   VbbHcc_both_Z_dR_stack_7->SetBinError(16,0.1335244);
   VbbHcc_both_Z_dR_stack_7->SetBinError(17,0.1633181);
   VbbHcc_both_Z_dR_stack_7->SetBinError(18,0.09132081);
   VbbHcc_both_Z_dR_stack_7->SetBinError(19,0.08558222);
   VbbHcc_both_Z_dR_stack_7->SetBinError(21,0.09227263);
   VbbHcc_both_Z_dR_stack_7->SetBinError(22,0.0686903);
   VbbHcc_both_Z_dR_stack_7->SetBinError(24,0.1421161);
   VbbHcc_both_Z_dR_stack_7->SetBinError(25,0.0797212);
   VbbHcc_both_Z_dR_stack_7->SetBinError(29,0.08656424);
   VbbHcc_both_Z_dR_stack_7->SetEntries(49);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_8 = new TH1D("VbbHcc_both_Z_dR_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(3,0.4677692);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(4,4.240797);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(5,3.788101);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(6,2.203247);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(7,1.0727);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(8,1.055372);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(9,1.480883);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(10,0.8737488);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(11,1.327839);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(12,1.448337);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(13,1.516845);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(14,1.175836);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(15,1.198901);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(16,1.368726);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(17,1.601636);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(18,1.769145);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(19,0.6553849);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(20,0.2196035);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(21,0.2410249);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(22,1.049539);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(23,0.2342503);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(26,0.6443895);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(27,0.8274177);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(28,0.2460305);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(29,0.4440524);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(30,0.8728669);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(31,0.2268635);
   VbbHcc_both_Z_dR_stack_8->SetBinError(3,0.3311271);
   VbbHcc_both_Z_dR_stack_8->SetBinError(4,0.9532412);
   VbbHcc_both_Z_dR_stack_8->SetBinError(5,0.8737854);
   VbbHcc_both_Z_dR_stack_8->SetBinError(6,0.6673957);
   VbbHcc_both_Z_dR_stack_8->SetBinError(7,0.4444371);
   VbbHcc_both_Z_dR_stack_8->SetBinError(8,0.4808718);
   VbbHcc_both_Z_dR_stack_8->SetBinError(9,0.5297114);
   VbbHcc_both_Z_dR_stack_8->SetBinError(10,0.4375642);
   VbbHcc_both_Z_dR_stack_8->SetBinError(11,0.5052239);
   VbbHcc_both_Z_dR_stack_8->SetBinError(12,0.5598923);
   VbbHcc_both_Z_dR_stack_8->SetBinError(13,0.5745244);
   VbbHcc_both_Z_dR_stack_8->SetBinError(14,0.4973182);
   VbbHcc_both_Z_dR_stack_8->SetBinError(15,0.5384024);
   VbbHcc_both_Z_dR_stack_8->SetBinError(16,0.5187454);
   VbbHcc_both_Z_dR_stack_8->SetBinError(17,0.5600358);
   VbbHcc_both_Z_dR_stack_8->SetBinError(18,0.597654);
   VbbHcc_both_Z_dR_stack_8->SetBinError(19,0.3796967);
   VbbHcc_both_Z_dR_stack_8->SetBinError(20,0.2196035);
   VbbHcc_both_Z_dR_stack_8->SetBinError(21,0.2410249);
   VbbHcc_both_Z_dR_stack_8->SetBinError(22,0.4702881);
   VbbHcc_both_Z_dR_stack_8->SetBinError(23,0.2342503);
   VbbHcc_both_Z_dR_stack_8->SetBinError(26,0.3726348);
   VbbHcc_both_Z_dR_stack_8->SetBinError(27,0.4141517);
   VbbHcc_both_Z_dR_stack_8->SetBinError(28,0.2460305);
   VbbHcc_both_Z_dR_stack_8->SetBinError(29,0.3141074);
   VbbHcc_both_Z_dR_stack_8->SetBinError(30,0.4381991);
   VbbHcc_both_Z_dR_stack_8->SetBinError(31,0.2268635);
   VbbHcc_both_Z_dR_stack_8->SetEntries(158);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_9 = new TH1D("VbbHcc_both_Z_dR_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(2,0.001188163);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(3,1.664107);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(4,3.039549);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(5,2.994626);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(6,2.458985);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(7,1.675836);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(8,1.203015);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(9,0.8355598);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(10,0.7746877);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(11,0.79117);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(12,0.9527344);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(13,1.116415);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(14,1.26574);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(15,1.410506);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(16,1.344347);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(17,1.364714);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(18,1.228765);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(19,0.9801081);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(20,0.8276195);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(21,0.5830289);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(22,0.4529544);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(23,0.3234466);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(24,0.2686794);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(25,0.28211);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(26,0.2995989);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(27,0.2841219);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(28,0.3187581);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(29,0.2823228);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(30,0.1616898);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(31,0.0971673);
   VbbHcc_both_Z_dR_stack_9->SetBinError(2,0.001188163);
   VbbHcc_both_Z_dR_stack_9->SetBinError(3,0.04411712);
   VbbHcc_both_Z_dR_stack_9->SetBinError(4,0.05917861);
   VbbHcc_both_Z_dR_stack_9->SetBinError(5,0.05774482);
   VbbHcc_both_Z_dR_stack_9->SetBinError(6,0.05141538);
   VbbHcc_both_Z_dR_stack_9->SetBinError(7,0.04226024);
   VbbHcc_both_Z_dR_stack_9->SetBinError(8,0.03562226);
   VbbHcc_both_Z_dR_stack_9->SetBinError(9,0.02940097);
   VbbHcc_both_Z_dR_stack_9->SetBinError(10,0.02879634);
   VbbHcc_both_Z_dR_stack_9->SetBinError(11,0.02932243);
   VbbHcc_both_Z_dR_stack_9->SetBinError(12,0.03205911);
   VbbHcc_both_Z_dR_stack_9->SetBinError(13,0.03540137);
   VbbHcc_both_Z_dR_stack_9->SetBinError(14,0.03718633);
   VbbHcc_both_Z_dR_stack_9->SetBinError(15,0.03956583);
   VbbHcc_both_Z_dR_stack_9->SetBinError(16,0.03886608);
   VbbHcc_both_Z_dR_stack_9->SetBinError(17,0.03875426);
   VbbHcc_both_Z_dR_stack_9->SetBinError(18,0.03690534);
   VbbHcc_both_Z_dR_stack_9->SetBinError(19,0.03301547);
   VbbHcc_both_Z_dR_stack_9->SetBinError(20,0.03001044);
   VbbHcc_both_Z_dR_stack_9->SetBinError(21,0.02501139);
   VbbHcc_both_Z_dR_stack_9->SetBinError(22,0.02216868);
   VbbHcc_both_Z_dR_stack_9->SetBinError(23,0.01853778);
   VbbHcc_both_Z_dR_stack_9->SetBinError(24,0.01700822);
   VbbHcc_both_Z_dR_stack_9->SetBinError(25,0.01724463);
   VbbHcc_both_Z_dR_stack_9->SetBinError(26,0.01792659);
   VbbHcc_both_Z_dR_stack_9->SetBinError(27,0.01758073);
   VbbHcc_both_Z_dR_stack_9->SetBinError(28,0.01893451);
   VbbHcc_both_Z_dR_stack_9->SetBinError(29,0.01786639);
   VbbHcc_both_Z_dR_stack_9->SetBinError(30,0.01350133);
   VbbHcc_both_Z_dR_stack_9->SetBinError(31,0.0102542);
   VbbHcc_both_Z_dR_stack_9->SetEntries(28929);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_10 = new TH1D("VbbHcc_both_Z_dR_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(3,0.6014163);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(4,1.227605);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(5,1.455874);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(6,1.294782);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(7,0.955039);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(8,0.6622588);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(9,0.4975012);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(10,0.4536914);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(11,0.4447044);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(12,0.482327);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(13,0.5339712);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(14,0.5427956);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(15,0.551993);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(16,0.5391481);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(17,0.5191437);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(18,0.4768618);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(19,0.4039425);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(20,0.3487386);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(21,0.2887471);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(22,0.2445604);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(23,0.1814037);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(24,0.1642374);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(25,0.1644406);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(26,0.1726188);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(27,0.1871945);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(28,0.1555366);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(29,0.1266071);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(30,0.07766556);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(31,0.04049381);
   VbbHcc_both_Z_dR_stack_10->SetBinError(3,0.01467688);
   VbbHcc_both_Z_dR_stack_10->SetBinError(4,0.02059578);
   VbbHcc_both_Z_dR_stack_10->SetBinError(5,0.0221791);
   VbbHcc_both_Z_dR_stack_10->SetBinError(6,0.02072688);
   VbbHcc_both_Z_dR_stack_10->SetBinError(7,0.01774333);
   VbbHcc_both_Z_dR_stack_10->SetBinError(8,0.01478551);
   VbbHcc_both_Z_dR_stack_10->SetBinError(9,0.01283926);
   VbbHcc_both_Z_dR_stack_10->SetBinError(10,0.01231198);
   VbbHcc_both_Z_dR_stack_10->SetBinError(11,0.01219751);
   VbbHcc_both_Z_dR_stack_10->SetBinError(12,0.01269348);
   VbbHcc_both_Z_dR_stack_10->SetBinError(13,0.01333089);
   VbbHcc_both_Z_dR_stack_10->SetBinError(14,0.01345165);
   VbbHcc_both_Z_dR_stack_10->SetBinError(15,0.01359746);
   VbbHcc_both_Z_dR_stack_10->SetBinError(16,0.01342771);
   VbbHcc_both_Z_dR_stack_10->SetBinError(17,0.01317469);
   VbbHcc_both_Z_dR_stack_10->SetBinError(18,0.01260831);
   VbbHcc_both_Z_dR_stack_10->SetBinError(19,0.01161816);
   VbbHcc_both_Z_dR_stack_10->SetBinError(20,0.01077166);
   VbbHcc_both_Z_dR_stack_10->SetBinError(21,0.009836351);
   VbbHcc_both_Z_dR_stack_10->SetBinError(22,0.009054735);
   VbbHcc_both_Z_dR_stack_10->SetBinError(23,0.007771952);
   VbbHcc_both_Z_dR_stack_10->SetBinError(24,0.007377753);
   VbbHcc_both_Z_dR_stack_10->SetBinError(25,0.00740922);
   VbbHcc_both_Z_dR_stack_10->SetBinError(26,0.007537553);
   VbbHcc_both_Z_dR_stack_10->SetBinError(27,0.007895202);
   VbbHcc_both_Z_dR_stack_10->SetBinError(28,0.007235216);
   VbbHcc_both_Z_dR_stack_10->SetBinError(29,0.006586929);
   VbbHcc_both_Z_dR_stack_10->SetBinError(30,0.005157331);
   VbbHcc_both_Z_dR_stack_10->SetBinError(31,0.003726574);
   VbbHcc_both_Z_dR_stack_10->SetEntries(41891);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_11 = new TH1D("VbbHcc_both_Z_dR_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(3,0.006803305);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(4,0.01510785);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(5,0.004194113);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(6,0.01181013);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(9,0.002209336);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(10,0.00193606);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(11,0.006191193);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(13,0.002332089);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(14,0.002272667);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(15,0.002042848);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(16,0.001765897);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(17,0.003861509);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(18,0.004116352);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(19,0.002067091);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(23,0.001598357);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(29,0.009288348);
   VbbHcc_both_Z_dR_stack_11->SetBinError(3,0.003935239);
   VbbHcc_both_Z_dR_stack_11->SetBinError(4,0.00571368);
   VbbHcc_both_Z_dR_stack_11->SetBinError(5,0.003001164);
   VbbHcc_both_Z_dR_stack_11->SetBinError(6,0.00536432);
   VbbHcc_both_Z_dR_stack_11->SetBinError(9,0.002209336);
   VbbHcc_both_Z_dR_stack_11->SetBinError(10,0.00193606);
   VbbHcc_both_Z_dR_stack_11->SetBinError(11,0.003576011);
   VbbHcc_both_Z_dR_stack_11->SetBinError(13,0.002332089);
   VbbHcc_both_Z_dR_stack_11->SetBinError(14,0.002272667);
   VbbHcc_both_Z_dR_stack_11->SetBinError(15,0.002042848);
   VbbHcc_both_Z_dR_stack_11->SetBinError(16,0.001765897);
   VbbHcc_both_Z_dR_stack_11->SetBinError(17,0.002744127);
   VbbHcc_both_Z_dR_stack_11->SetBinError(18,0.002911577);
   VbbHcc_both_Z_dR_stack_11->SetBinError(19,0.002067091);
   VbbHcc_both_Z_dR_stack_11->SetBinError(23,0.001598357);
   VbbHcc_both_Z_dR_stack_11->SetBinError(29,0.004646959);
   VbbHcc_both_Z_dR_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_12 = new TH1D("VbbHcc_both_Z_dR_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(3,0.002593554);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(4,0.004911378);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(5,0.005495707);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(6,0.005150518);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(7,0.001097658);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(8,0.001366796);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(9,0.001537433);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(10,0.001438207);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(11,0.0005877979);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(12,0.002016434);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(13,0.00143119);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(14,0.0002838662);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(15,0.001087255);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(17,0.001924448);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(18,0.0005523809);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(19,0.001385524);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(20,0.0004729741);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(21,0.0008484922);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(22,0.0002995277);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(23,0.0005883146);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(24,0.0009142188);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(25,0.0008307725);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(26,0.0002965616);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(27,0.0005631945);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(29,0.0005930909);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(31,0.0002860947);
   VbbHcc_both_Z_dR_stack_12->SetBinError(3,0.0008679311);
   VbbHcc_both_Z_dR_stack_12->SetBinError(4,0.001194853);
   VbbHcc_both_Z_dR_stack_12->SetBinError(5,0.001247744);
   VbbHcc_both_Z_dR_stack_12->SetBinError(6,0.001189141);
   VbbHcc_both_Z_dR_stack_12->SetBinError(7,0.0005493767);
   VbbHcc_both_Z_dR_stack_12->SetBinError(8,0.0006134315);
   VbbHcc_both_Z_dR_stack_12->SetBinError(9,0.000687945);
   VbbHcc_both_Z_dR_stack_12->SetBinError(10,0.0006444838);
   VbbHcc_both_Z_dR_stack_12->SetBinError(11,0.0004156413);
   VbbHcc_both_Z_dR_stack_12->SetBinError(12,0.000765048);
   VbbHcc_both_Z_dR_stack_12->SetBinError(13,0.0006405466);
   VbbHcc_both_Z_dR_stack_12->SetBinError(14,0.0002838662);
   VbbHcc_both_Z_dR_stack_12->SetBinError(15,0.00054555);
   VbbHcc_both_Z_dR_stack_12->SetBinError(17,0.0007292308);
   VbbHcc_both_Z_dR_stack_12->SetBinError(18,0.0003915302);
   VbbHcc_both_Z_dR_stack_12->SetBinError(19,0.0006205815);
   VbbHcc_both_Z_dR_stack_12->SetBinError(20,0.0003427673);
   VbbHcc_both_Z_dR_stack_12->SetBinError(21,0.0004983383);
   VbbHcc_both_Z_dR_stack_12->SetBinError(22,0.0002995277);
   VbbHcc_both_Z_dR_stack_12->SetBinError(23,0.0004162905);
   VbbHcc_both_Z_dR_stack_12->SetBinError(24,0.0005285716);
   VbbHcc_both_Z_dR_stack_12->SetBinError(25,0.0004809674);
   VbbHcc_both_Z_dR_stack_12->SetBinError(26,0.0002965616);
   VbbHcc_both_Z_dR_stack_12->SetBinError(27,0.0003994717);
   VbbHcc_both_Z_dR_stack_12->SetBinError(29,0.0004210311);
   VbbHcc_both_Z_dR_stack_12->SetBinError(31,0.0002860947);
   VbbHcc_both_Z_dR_stack_12->SetEntries(137);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR__573 = new TH1D("VbbHcc_both_Z_dR__573","",30,0,6);
   VbbHcc_both_Z_dR__573->SetBinContent(2,6);
   VbbHcc_both_Z_dR__573->SetBinContent(3,7417);
   VbbHcc_both_Z_dR__573->SetBinContent(4,8194);
   VbbHcc_both_Z_dR__573->SetBinContent(5,6197);
   VbbHcc_both_Z_dR__573->SetBinContent(6,5496);
   VbbHcc_both_Z_dR__573->SetBinContent(7,4923);
   VbbHcc_both_Z_dR__573->SetBinContent(8,4591);
   VbbHcc_both_Z_dR__573->SetBinContent(9,4389);
   VbbHcc_both_Z_dR__573->SetBinContent(10,4379);
   VbbHcc_both_Z_dR__573->SetBinContent(11,4256);
   VbbHcc_both_Z_dR__573->SetBinContent(12,4159);
   VbbHcc_both_Z_dR__573->SetBinContent(13,4256);
   VbbHcc_both_Z_dR__573->SetBinContent(14,4240);
   VbbHcc_both_Z_dR__573->SetBinContent(15,4295);
   VbbHcc_both_Z_dR__573->SetBinContent(16,4221);
   VbbHcc_both_Z_dR__573->SetBinContent(17,3856);
   VbbHcc_both_Z_dR__573->SetBinContent(18,3555);
   VbbHcc_both_Z_dR__573->SetBinContent(19,3350);
   VbbHcc_both_Z_dR__573->SetBinContent(20,2909);
   VbbHcc_both_Z_dR__573->SetBinContent(21,2605);
   VbbHcc_both_Z_dR__573->SetBinContent(22,2117);
   VbbHcc_both_Z_dR__573->SetBinContent(23,1841);
   VbbHcc_both_Z_dR__573->SetBinContent(24,1487);
   VbbHcc_both_Z_dR__573->SetBinContent(25,1333);
   VbbHcc_both_Z_dR__573->SetBinContent(26,1188);
   VbbHcc_both_Z_dR__573->SetBinContent(27,1131);
   VbbHcc_both_Z_dR__573->SetBinContent(28,999);
   VbbHcc_both_Z_dR__573->SetBinContent(29,968);
   VbbHcc_both_Z_dR__573->SetBinContent(30,665);
   VbbHcc_both_Z_dR__573->SetBinContent(31,468);
   VbbHcc_both_Z_dR__573->SetEntries(99520);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR__573->SetLineColor(ci);
   VbbHcc_both_Z_dR__573->SetLineWidth(2);
   VbbHcc_both_Z_dR__573->SetMarkerStyle(20);
   VbbHcc_both_Z_dR__573->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR__573->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR__573->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__573->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__573->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__573->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__573->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__573->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__573->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__573->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR__573->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__573->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__573->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__573->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__573->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__573->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_fx1417[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_fy1417[30] = {
   0,
   0.711973,
   12235.47,
   11879.85,
   8396.03,
   9671.514,
   6120.512,
   6142.108,
   4894.748,
   4196.268,
   7674.196,
   5577.33,
   5912.43,
   6500.255,
   9138.817,
   8578.486,
   7265.449,
   4771.865,
   4034.466,
   4471.217,
   3162.899,
   3149.002,
   4139.701,
   927.5211,
   2480.462,
   1760.963,
   1638.269,
   1380.053,
   892.7762,
   656.7156};
   Double_t Graph_from_VbbHcc_both_Z_dR_fex1417[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_Z_dR_fey1417[30] = {
   0,
   0.2069007,
   1484.095,
   1568.005,
   1269.432,
   1546.387,
   823.7345,
   1184.917,
   738.6775,
   565.782,
   1818.374,
   835.6877,
   854.9817,
   1363.67,
   1969.673,
   1648.791,
   1038.776,
   763.6281,
   696.3554,
   747.7264,
   1088.724,
   642.1074,
   1204.399,
   93.8661,
   918.6309,
   490.1625,
   504.895,
   370.7622,
   224.5311,
   187.1387};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_fx1417,Graph_from_VbbHcc_both_Z_dR_fy1417,Graph_from_VbbHcc_both_Z_dR_fex1417,Graph_from_VbbHcc_both_Z_dR_fey1417);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR1417 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR1417","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->SetMinimum(15.09152);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->SetMaximum(15091.52);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR1417->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1417->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR1417);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR","MC unc. (stat.)","fl");

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
   Z_dR_both_16->cd();
  
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
   
   TH1D *data_mc_ratio__574 = new TH1D("data_mc_ratio__574","",30,0,6);
   data_mc_ratio__574->SetBinContent(2,8.427286);
   data_mc_ratio__574->SetBinContent(3,0.6061886);
   data_mc_ratio__574->SetBinContent(4,0.6897393);
   data_mc_ratio__574->SetBinContent(5,0.7380869);
   data_mc_ratio__574->SetBinContent(6,0.5682668);
   data_mc_ratio__574->SetBinContent(7,0.8043445);
   data_mc_ratio__574->SetBinContent(8,0.7474632);
   data_mc_ratio__574->SetBinContent(9,0.8966754);
   data_mc_ratio__574->SetBinContent(10,1.043546);
   data_mc_ratio__574->SetBinContent(11,0.5545858);
   data_mc_ratio__574->SetBinContent(12,0.7456973);
   data_mc_ratio__574->SetBinContent(13,0.7198394);
   data_mc_ratio__574->SetBinContent(14,0.6522821);
   data_mc_ratio__574->SetBinContent(15,0.4699733);
   data_mc_ratio__574->SetBinContent(16,0.4920449);
   data_mc_ratio__574->SetBinContent(17,0.5307312);
   data_mc_ratio__574->SetBinContent(18,0.7449918);
   data_mc_ratio__574->SetBinContent(19,0.8303453);
   data_mc_ratio__574->SetBinContent(20,0.6506058);
   data_mc_ratio__574->SetBinContent(21,0.8236115);
   data_mc_ratio__574->SetBinContent(22,0.6722766);
   data_mc_ratio__574->SetBinContent(23,0.4447181);
   data_mc_ratio__574->SetBinContent(24,1.603198);
   data_mc_ratio__574->SetBinContent(25,0.5373998);
   data_mc_ratio__574->SetBinContent(26,0.6746309);
   data_mc_ratio__574->SetBinContent(27,0.6903627);
   data_mc_ratio__574->SetBinContent(28,0.7238853);
   data_mc_ratio__574->SetBinContent(29,1.084258);
   data_mc_ratio__574->SetBinContent(30,1.012615);
   data_mc_ratio__574->SetBinContent(31,0.9339108);
   data_mc_ratio__574->SetBinError(2,3.440425);
   data_mc_ratio__574->SetBinError(3,0.007038719);
   data_mc_ratio__574->SetBinError(4,0.007619685);
   data_mc_ratio__574->SetBinError(5,0.009375982);
   data_mc_ratio__574->SetBinError(6,0.007665296);
   data_mc_ratio__574->SetBinError(7,0.01146376);
   data_mc_ratio__574->SetBinError(8,0.01103154);
   data_mc_ratio__574->SetBinError(9,0.01353482);
   data_mc_ratio__574->SetBinError(10,0.01576973);
   data_mc_ratio__574->SetBinError(11,0.00850096);
   data_mc_ratio__574->SetBinError(12,0.01156294);
   data_mc_ratio__574->SetBinError(13,0.01103405);
   data_mc_ratio__574->SetBinError(14,0.01001734);
   data_mc_ratio__574->SetBinError(15,0.007171196);
   data_mc_ratio__574->SetBinError(16,0.007573507);
   data_mc_ratio__574->SetBinError(17,0.00854685);
   data_mc_ratio__574->SetBinError(18,0.01249487);
   data_mc_ratio__574->SetBinError(19,0.01434618);
   data_mc_ratio__574->SetBinError(20,0.01206274);
   data_mc_ratio__574->SetBinError(21,0.01613684);
   data_mc_ratio__574->SetBinError(22,0.01461126);
   data_mc_ratio__574->SetBinError(23,0.01036473);
   data_mc_ratio__574->SetBinError(24,0.04157495);
   data_mc_ratio__574->SetBinError(25,0.01471914);
   data_mc_ratio__574->SetBinError(26,0.01957303);
   data_mc_ratio__574->SetBinError(27,0.02052797);
   data_mc_ratio__574->SetBinError(28,0.02290272);
   data_mc_ratio__574->SetBinError(29,0.03484938);
   data_mc_ratio__574->SetBinError(30,0.03926752);
   data_mc_ratio__574->SetBinError(31,0.4171537);
   data_mc_ratio__574->SetMinimum(0.4);
   data_mc_ratio__574->SetMaximum(1.6);
   data_mc_ratio__574->SetEntries(45.93399);
   data_mc_ratio__574->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__574->SetLineColor(ci);
   data_mc_ratio__574->SetLineWidth(2);
   data_mc_ratio__574->SetMarkerStyle(20);
   data_mc_ratio__574->SetMarkerSize(1.2);
   data_mc_ratio__574->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__574->GetXaxis()->SetRange(1,30);
   data_mc_ratio__574->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__574->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__574->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__574->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__574->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__574->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__574->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__574->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__574->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__574->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__574->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__574->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__574->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__574->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__574->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__574->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__574->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1418[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1418[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1418[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1418[30] = {
   0,
   0.2906019,
   0.1212945,
   0.1319886,
   0.1511944,
   0.1598909,
   0.1345859,
   0.192917,
   0.1509123,
   0.1348298,
   0.2369465,
   0.1498365,
   0.1446075,
   0.2097871,
   0.2155282,
   0.1922007,
   0.1429748,
   0.1600272,
   0.1726016,
   0.167231,
   0.3442172,
   0.2039083,
   0.2909386,
   0.101201,
   0.3703466,
   0.2783492,
   0.308188,
   0.268658,
   0.2514977,
   0.2849616};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1418,Graph_from_mc_statistical_error_fy1418,Graph_from_mc_statistical_error_fex1418,Graph_from_mc_statistical_error_fey1418);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1418 = new TH1F("Graph_Graph_from_mc_statistical_error1418","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1418->SetMinimum(0.555584);
   Graph_Graph_from_mc_statistical_error1418->SetMaximum(1.444416);
   Graph_Graph_from_mc_statistical_error1418->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1418->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1418->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1418->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1418->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1418->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1418->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1418->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1418->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1418->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1418->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1418->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1418->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1418->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1418->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1418->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1418);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_both_16->cd();
   Z_dR_both_16->Modified();
   Z_dR_both_16->cd();
   Z_dR_both_16->SetSelected(Z_dR_both_16);
}
