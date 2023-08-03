void H_dR_Bj1_both_all()
{
//=========Macro generated from canvas: H_dR_Bj1_both_all/H_dR_Bj1_both_all
//=========  (Thu Aug  3 12:26:11 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_both_all = new TCanvas("H_dR_Bj1_both_all", "H_dR_Bj1_both_all",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_both_all->SetHighLightColor(2);
   H_dR_Bj1_both_all->Range(0,0,1,1);
   H_dR_Bj1_both_all->SetFillColor(0);
   H_dR_Bj1_both_all->SetFillStyle(4000);
   H_dR_Bj1_both_all->SetBorderMode(0);
   H_dR_Bj1_both_all->SetBorderSize(2);
   H_dR_Bj1_both_all->SetFrameFillStyle(1000);
   H_dR_Bj1_both_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-342.0324,6.314516,341990.4);
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
   st->SetMaximum(293102);
   
   TH1F *st_stack_240 = new TH1F("st_stack_240","",30,0,6);
   st_stack_240->SetMinimum(0.3);
   st_stack_240->SetMaximum(307757.1);
   st_stack_240->SetDirectory(0);
   st_stack_240->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_240->SetLineColor(ci);
   st_stack_240->GetXaxis()->SetRange(1,30);
   st_stack_240->GetXaxis()->SetLabelFont(42);
   st_stack_240->GetXaxis()->SetLabelSize(0.035);
   st_stack_240->GetXaxis()->SetTitleSize(0.035);
   st_stack_240->GetXaxis()->SetTitleFont(42);
   st_stack_240->GetYaxis()->SetTitle("Events/0.2");
   st_stack_240->GetYaxis()->SetLabelFont(42);
   st_stack_240->GetYaxis()->SetLabelSize(0.05);
   st_stack_240->GetYaxis()->SetTitleSize(0.057);
   st_stack_240->GetYaxis()->SetTitleOffset(1.2);
   st_stack_240->GetYaxis()->SetTitleFont(42);
   st_stack_240->GetZaxis()->SetLabelFont(42);
   st_stack_240->GetZaxis()->SetLabelSize(0.035);
   st_stack_240->GetZaxis()->SetTitleSize(0.035);
   st_stack_240->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_240);
   
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(1,29607.2);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(2,121844.6);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(3,78582.02);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(4,62666.4);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(5,47651.26);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(6,40484.93);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(7,33967.6);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(8,23673);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(9,22753.84);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(10,24584.72);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(11,21411.98);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(12,17004.15);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(13,14709.4);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(14,16519.66);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(15,15561.2);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(16,12529.37);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(17,5665.775);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(18,6322.914);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(19,2688.934);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(20,1982.567);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(21,3711.77);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(22,1133.084);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(23,921.9628);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(24,454.0463);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(25,198.3879);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(26,57.64874);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(27,430.287);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(28,24.23099);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(29,23.18878);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinContent(31,22.07238);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(1,1750.5);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(2,21414.47);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(3,4229.458);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(4,3794.895);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(5,3268.907);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(6,3640.042);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(7,3119.29);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(8,1931.351);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(9,2004.724);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(10,3034.5);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(11,2416.663);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(12,1743.538);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(13,1508.703);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(14,2660.476);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(15,2127.885);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(16,1402.709);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(17,764.183);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(18,1115.674);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(19,620.853);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(20,550.5022);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(21,1586.554);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(22,392.5107);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(23,390.1811);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(24,274.7622);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(25,66.70721);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(26,32.22077);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(27,372.0378);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(28,13.33565);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(29,13.30193);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetBinError(31,22.07238);
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetEntries(31751);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(1,181.1605);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(2,419.178);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(3,447.6054);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(4,382.592);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(5,287.9732);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(6,243.309);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(7,197.3057);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(8,162.3525);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(9,140.2732);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(10,123.7826);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(11,105.1951);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(12,93.52008);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(13,93.41976);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(14,90.19801);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(15,74.35967);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(16,59.04374);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(17,38.82508);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(18,28.24487);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(19,17.34089);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(20,12.56103);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(21,10.67723);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(22,5.590083);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(23,3.394486);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(24,2.512038);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(25,1.700989);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(26,0.7653122);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(27,0.602648);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(28,0.5041935);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(29,0.670752);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(30,0.04860075);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinContent(31,0.1504903);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(1,5.673395);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(2,8.128101);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(3,8.46327);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(4,7.958005);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(5,6.723395);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(6,6.267227);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(7,5.643167);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(8,5.109336);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(9,4.780073);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(10,4.525412);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(11,4.097322);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(12,3.942198);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(13,3.922491);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(14,3.904546);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(15,3.467749);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(16,3.005132);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(17,2.474613);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(18,2.103962);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(19,1.635639);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(20,1.306151);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(21,1.288282);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(22,0.9225911);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(23,0.6833792);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(24,0.5903775);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(25,0.5416428);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(26,0.3116472);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(27,0.3262858);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(28,0.288385);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(29,0.4107953);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(30,0.04860075);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetBinError(31,0.08707452);
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetEntries(38814);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_3 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_3","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(1,2729.395);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(2,8202.042);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(3,9209.754);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(4,7863.742);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(5,6375.529);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(6,4969.481);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(7,3992.193);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(8,3240.08);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(9,2679.575);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(10,2295.672);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(11,1986.404);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(12,1756.87);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(13,1570.047);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(14,1424.816);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(15,1312.414);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(16,1175.044);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(17,685.469);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(18,443.6033);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(19,295.0742);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(20,198.6051);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(21,136.595);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(22,85.80229);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(23,59.64654);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(24,37.016);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(25,22.37529);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(26,11.67845);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(27,8.971446);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(28,4.589817);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(29,3.385023);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(30,1.439087);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinContent(31,3.6282);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(1,13.06606);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(2,22.61917);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(3,24.00544);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(4,22.18714);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(5,19.95971);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(6,17.59562);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(7,15.76822);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(8,14.17882);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(9,12.89125);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(10,11.94406);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(11,11.10854);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(12,10.44335);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(13,9.885637);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(14,9.407031);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(15,9.02796);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(16,8.545158);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(17,6.531849);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(18,5.246734);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(19,4.272884);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(20,3.502684);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(21,2.916155);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(22,2.290788);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(23,1.921018);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(24,1.515867);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(25,1.169561);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(26,0.8411696);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(27,0.746705);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(28,0.531372);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(29,0.457131);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(30,0.3051572);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetBinError(31,0.4806184);
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetEntries(1047064);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_4 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_4","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(1,504.575);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(2,1227.409);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(3,1178.301);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(4,915.3925);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(5,681.0373);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(6,533.6381);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(7,448.6205);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(8,336.9157);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(9,300.1338);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(10,275.5976);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(11,243.9123);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(12,222.0142);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(13,212.9195);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(14,184.8407);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(15,193.5005);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(16,162.3043);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(17,89.75397);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(18,74.50618);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(19,34.26032);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(20,25.01134);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(21,19.86439);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(22,11.98217);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(23,6.449877);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(24,5.107942);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(25,1.56823);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(26,1.993503);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(27,0.2846611);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(28,0.1923533);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(29,0.4317244);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(30,0.09257296);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinContent(31,0.2849263);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(1,10.03073);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(2,21.18963);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(3,21.51362);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(4,23.10332);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(5,20.55332);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(6,18.5376);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(7,18.13842);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(8,13.81798);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(9,13.08345);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(10,13.76657);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(11,10.47321);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(12,10.13479);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(13,11.00346);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(14,9.577398);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(15,9.325028);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(16,9.656503);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(17,6.0155);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(18,9.678066);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(19,3.833235);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(20,2.507574);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(21,4.141584);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(22,3.05964);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(23,1.322074);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(24,1.107872);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(25,0.4850133);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(26,0.7232401);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(27,0.1696671);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(28,0.142311);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(29,0.3619921);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(30,0.09257296);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetBinError(31,0.1697709);
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetEntries(52623);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_5 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_5","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(1,76.60044);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(2,127.6487);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(3,127.5315);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(4,91.23792);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(5,73.51835);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(6,43.77085);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(7,41.04783);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(8,22.95227);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(9,35.11087);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(10,29.41734);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(11,22.11039);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(12,17.4691);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(13,15.14817);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(14,16.94261);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(15,24.39712);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(16,15.91939);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(17,7.195963);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(18,5.870251);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(19,3.659091);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(20,3.205226);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(21,5.072369);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(22,0.9909882);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(23,0.6389878);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(24,1.396103);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(25,0.07139802);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(26,0.007990861);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(27,0.1265664);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(28,0.07097071);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinContent(29,0.08120236);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(1,4.383569);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(2,7.008448);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(3,12.41165);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(4,13.76382);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(5,7.35176);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(6,4.887776);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(7,4.985816);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(8,3.166673);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(9,5.135033);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(10,6.748691);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(11,2.911501);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(12,2.414046);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(13,1.8351);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(14,2.299199);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(15,4.479287);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(16,2.182132);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(17,1.727049);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(18,2.192662);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(19,0.7852521);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(20,0.675879);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(21,2.441432);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(22,0.4266145);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(23,0.2872427);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(24,1.053798);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(25,0.07097136);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(26,0.007780141);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(27,0.1265664);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(28,0.07097071);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetBinError(29,0.08120236);
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetEntries(8810);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_6 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_6","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(1,0.3153059);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(2,0.4496752);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(3,1.940172);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(4,0.586412);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(5,0.7207813);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(8,0.1343693);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(10,0.2687386);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(14,0.4496752);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(15,0.1343693);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinContent(16,0.3153059);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(1,0.3153059);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(2,0.3427432);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(3,0.8651912);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(4,0.4715906);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(5,0.4903599);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(8,0.1343693);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(10,0.1900269);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(14,0.3427432);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(15,0.1343693);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetBinError(16,0.3153059);
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetEntries(21);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_7 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_7","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(1,0.8605991);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(2,1.62401);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(3,1.99861);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(4,0.9973359);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(5,0.8882772);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(6,0.7634105);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(7,0.2181173);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(8,0.2181173);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(9,0.1090586);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(10,0.1090586);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(12,0.4362346);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(13,0.2181173);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(14,0.4243645);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(15,0.2181173);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(16,0.3153059);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinContent(23,0.1090586);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(1,0.398606);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(2,0.4920805);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(3,0.8649433);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(4,0.5136258);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(5,0.5019141);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(6,0.288542);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(7,0.1542322);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(8,0.1542322);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(9,0.1090586);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(10,0.1090586);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(12,0.2181173);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(13,0.1542322);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(14,0.3336339);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(15,0.1542322);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(16,0.3153059);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetBinError(23,0.1090586);
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetEntries(62);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_8 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_8","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(1,12.70936);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(2,32.62816);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(3,26.75225);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(4,17.1472);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(5,9.093147);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(6,8.566659);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(7,6.222947);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(8,5.177704);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(9,4.480423);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(10,3.320407);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(11,5.213911);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(12,4.50046);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(13,3.889254);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(14,4.096254);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(15,2.23509);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(16,4.50046);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(17,1.893505);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(18,0.4964328);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(19,0.53264);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(20,0.2432072);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(1,1.837637);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(2,2.923656);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(3,2.63999);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(4,2.114579);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(5,1.539787);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(6,1.494239);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(7,1.272689);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(8,1.159868);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(9,1.088943);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(10,0.9222699);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(11,1.167997);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(12,1.0935);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(13,1.005833);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(14,1.025635);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(15,0.7458174);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(16,1.0935);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(17,0.7166832);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(18,0.3511024);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(19,0.3770883);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(20,0.2432072);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetBinError(23,0.2794144);
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetEntries(591);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_9 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_9","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(1,8.553312);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(2,28.57914);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(3,27.15497);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(4,18.91145);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(5,12.41074);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(6,8.653656);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(7,6.65184);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(8,5.592813);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(9,4.835708);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(10,4.388779);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(11,3.94846);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(12,3.779947);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(13,3.549374);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(14,3.497837);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(15,3.206892);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(16,2.896617);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(17,1.559958);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(18,0.9271078);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(19,0.5564716);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(20,0.3381051);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(21,0.1969199);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(22,0.1011013);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(23,0.06887942);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(24,0.03075746);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(25,0.02953921);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(26,0.01948427);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(27,0.008263914);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(28,0.001615117);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(29,0.003659729);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(30,0.003659729);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinContent(31,0.007801791);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(1,0.1265391);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(2,0.230393);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(3,0.2230486);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(4,0.1852268);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(5,0.1498463);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(6,0.1250588);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(7,0.1100296);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(8,0.1010948);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(9,0.09393137);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(10,0.08953687);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(11,0.08489371);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(12,0.08344523);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(13,0.08069555);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(14,0.0802295);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(15,0.07692945);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(16,0.07302864);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(17,0.05340214);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(18,0.04162466);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(19,0.03245358);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(20,0.0249048);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(21,0.01907664);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(22,0.01383413);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(23,0.01097298);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(24,0.00760794);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(25,0.007778951);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(26,0.006022948);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(27,0.003770606);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(28,0.001615117);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(29,0.002666932);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(30,0.002666932);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetBinError(31,0.003958127);
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetEntries(85972);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_10 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_10","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(1,3.432991);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(2,11.6103);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(3,12.93121);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(4,9.706277);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(5,6.555262);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(6,4.315878);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(7,3.279684);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(8,2.784173);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(9,2.424174);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(10,1.927293);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(11,1.805469);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(12,1.616572);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(13,1.361972);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(14,1.303113);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(15,1.1676);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(16,1.100528);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(17,0.5721652);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(18,0.3285159);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(19,0.1834214);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(20,0.1067677);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(21,0.08897306);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(22,0.04380212);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(23,0.02463869);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(24,0.02053225);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(25,0.005475266);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(26,0.004106449);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(27,0.008212898);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(28,0.002737633);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinContent(31,0.002737633);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(1,0.04054619);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(2,0.07456507);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(3,0.07869248);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(4,0.06817734);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(5,0.05602846);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(6,0.04546197);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(7,0.03963051);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(8,0.0365142);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(9,0.03407184);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(10,0.03037999);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(11,0.02940415);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(12,0.02782347);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(13,0.02553864);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(14,0.02498071);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(15,0.02364617);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(16,0.02295696);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(17,0.01655291);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(18,0.01254273);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(19,0.009372139);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(20,0.007150454);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(21,0.006527441);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(22,0.004579956);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(23,0.003434967);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(24,0.003135681);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(25,0.001619259);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(26,0.001402319);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(27,0.001983179);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(28,0.001144989);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetBinError(31,0.001144989);
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetEntries(150600);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_11 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_11","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(1,0.01703805);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(2,0.1005939);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(3,0.09198381);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(4,0.06372242);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(5,0.03538634);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(6,0.03519711);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(7,0.01657881);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(8,0.005436264);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(9,0.009751523);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(10,0.0127228);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(11,0.009751523);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(12,0.00659102);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(13,0.005010769);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(14,0.00659102);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(15,0.005470015);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(16,0.009751523);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(17,0.003856013);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinContent(21,0.004315259);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(1,0.006163553);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(2,0.01463985);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(3,0.01416676);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(4,0.0113648);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(5,0.008562021);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(6,0.008727818);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(7,0.005973961);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(8,0.003189589);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(9,0.00448898);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(10,0.00529263);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(11,0.00448898);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(12,0.003893142);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(13,0.003557999);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(14,0.003893142);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(15,0.003867885);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(16,0.00448898);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(17,0.002770611);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetBinError(21,0.003158712);
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetEntries(215);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all_stack_12 = new TH1D("VbbHcc_both_H_dR_Bj1_all_stack_12","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(1,0.006893732);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(2,0.03839791);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(3,0.03746416);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(4,0.03261143);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(5,0.02193771);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(6,0.01746379);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(7,0.009060494);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(8,0.006905961);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(9,0.008438687);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(10,0.005453057);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(11,0.004565026);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(12,0.006467246);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(13,0.001844611);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(14,0.002835969);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(15,0.004414693);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(16,0.002593921);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(17,0.001314182);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(18,0.0008069192);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(19,0.0005993136);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(20,0.0008989704);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(21,0.0002996568);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(22,0.0002076057);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinContent(23,0.0002996568);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(1,0.001377209);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(2,0.003323569);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(3,0.003293503);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(4,0.003050135);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(5,0.002497139);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(6,0.00223988);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(7,0.001640589);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(8,0.001366222);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(9,0.001524592);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(10,0.001218843);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(11,0.001129306);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(12,0.001353015);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(13,0.0007193555);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(14,0.0008684847);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(15,0.00116162);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(16,0.0008380431);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(17,0.0005963076);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(18,0.0004718988);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(19,0.0004237787);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(20,0.0005190208);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(21,0.0002996568);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(22,0.0002076057);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetBinError(23,0.0002996568);
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetEntries(775);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR_Bj1_all__659 = new TH1D("VbbHcc_both_H_dR_Bj1_all__659","",30,0,6);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(1,29404);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(2,76553);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(3,71098);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(4,55497);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(5,43499);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(6,35076);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(7,28319);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(8,23628);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(9,20305);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(10,18018);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(11,16001);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(12,14678);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(13,13431);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(14,12677);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(15,11963);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(16,11042);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(17,6345);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(18,4352);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(19,2977);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(20,2085);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(21,1453);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(22,997);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(23,665);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(24,458);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(25,270);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(26,162);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(27,82);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(28,46);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(29,22);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(30,27);
   VbbHcc_both_H_dR_Bj1_all__659->SetBinContent(31,35);
   VbbHcc_both_H_dR_Bj1_all__659->SetEntries(501194);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_all__659->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_all__659->SetLineWidth(2);
   VbbHcc_both_H_dR_Bj1_all__659->SetMarkerStyle(20);
   VbbHcc_both_H_dR_Bj1_all__659->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_Bj1_all__659->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_all__659->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all__659->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all__659->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all__659->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all__659->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all__659->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all__659->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all__659->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_all__659->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all__659->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_all__659->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_all__659->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_all__659->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_all__659->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_all_fx1479[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_all_fy1479[30] = {
   33124.82,
   131895.9,
   89616.12,
   71966.81,
   55099.04,
   46297.48,
   38663.17,
   27449.22,
   25920.8,
   27319.22,
   23780.59,
   19104.37,
   16609.96,
   18246.23,
   17172.84,
   13950.82,
   6491.05,
   6876.892,
   3040.541,
   2222.639,
   3884.269,
   1237.594,
   992.575,
   500.1297,
   224.1388,
   72.11759,
   440.2888,
   29.59268,
   27.76115,
   1.58392};
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_all_fex1479[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_all_fey1479[30] = {
   1750.593,
   21414.5,
   4229.608,
   3795.064,
   3269.048,
   3640.141,
   3119.392,
   1931.462,
   2004.821,
   3034.566,
   2416.717,
   1743.606,
   1508.783,
   2660.514,
   2127.932,
   1402.773,
   764.2409,
   1115.733,
   620.8823,
   550.5211,
   1586.565,
   392.5306,
   390.1889,
   274.7713,
   66.72146,
   32.24137,
   372.0388,
   13.3503,
   13.32128,
   0.322583};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_Bj1_all_fx1479,Graph_from_VbbHcc_both_H_dR_Bj1_all_fy1479,Graph_from_VbbHcc_both_H_dR_Bj1_all_fex1479,Graph_from_VbbHcc_both_H_dR_Bj1_all_fey1479);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_Bj1_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->SetMinimum(1.135204);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->SetMaximum(168641.3);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_Bj1_all1479);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR_Bj1_all","MC unc. (stat.)","fl");

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
   H_dR_Bj1_both_all->cd();
  
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
   
   TH1D *data_mc_ratio__660 = new TH1D("data_mc_ratio__660","",30,0,6);
   data_mc_ratio__660->SetBinContent(1,0.8876727);
   data_mc_ratio__660->SetBinContent(2,0.5804047);
   data_mc_ratio__660->SetBinContent(3,0.7933617);
   data_mc_ratio__660->SetBinContent(4,0.7711472);
   data_mc_ratio__660->SetBinContent(5,0.7894693);
   data_mc_ratio__660->SetBinContent(6,0.7576223);
   data_mc_ratio__660->SetBinContent(7,0.7324542);
   data_mc_ratio__660->SetBinContent(8,0.8607895);
   data_mc_ratio__660->SetBinContent(9,0.7833477);
   data_mc_ratio__660->SetBinContent(10,0.6595357);
   data_mc_ratio__660->SetBinContent(11,0.6728598);
   data_mc_ratio__660->SetBinContent(12,0.7683058);
   data_mc_ratio__660->SetBinContent(13,0.8086111);
   data_mc_ratio__660->SetBinContent(14,0.6947735);
   data_mc_ratio__660->SetBinContent(15,0.6966232);
   data_mc_ratio__660->SetBinContent(16,0.7914947);
   data_mc_ratio__660->SetBinContent(17,0.9774998);
   data_mc_ratio__660->SetBinContent(18,0.6328441);
   data_mc_ratio__660->SetBinContent(19,0.9791019);
   data_mc_ratio__660->SetBinContent(20,0.9380741);
   data_mc_ratio__660->SetBinContent(21,0.374073);
   data_mc_ratio__660->SetBinContent(22,0.8055952);
   data_mc_ratio__660->SetBinContent(23,0.6699746);
   data_mc_ratio__660->SetBinContent(24,0.9157625);
   data_mc_ratio__660->SetBinContent(25,1.204611);
   data_mc_ratio__660->SetBinContent(26,2.246331);
   data_mc_ratio__660->SetBinContent(27,0.1862414);
   data_mc_ratio__660->SetBinContent(28,1.554438);
   data_mc_ratio__660->SetBinContent(29,0.7924745);
   data_mc_ratio__660->SetBinContent(30,17.04631);
   data_mc_ratio__660->SetBinContent(31,1.338609);
   data_mc_ratio__660->SetBinError(1,0.00517666);
   data_mc_ratio__660->SetBinError(2,0.002097731);
   data_mc_ratio__660->SetBinError(3,0.002975381);
   data_mc_ratio__660->SetBinError(4,0.003273426);
   data_mc_ratio__660->SetBinError(5,0.003785259);
   data_mc_ratio__660->SetBinError(6,0.004045272);
   data_mc_ratio__660->SetBinError(7,0.004352527);
   data_mc_ratio__660->SetBinError(8,0.005599942);
   data_mc_ratio__660->SetBinError(9,0.005497346);
   data_mc_ratio__660->SetBinError(10,0.004913433);
   data_mc_ratio__660->SetBinError(11,0.005319258);
   data_mc_ratio__660->SetBinError(12,0.006341627);
   data_mc_ratio__660->SetBinError(13,0.00697727);
   data_mc_ratio__660->SetBinError(14,0.006170708);
   data_mc_ratio__660->SetBinError(15,0.006369097);
   data_mc_ratio__660->SetBinError(16,0.00753224);
   data_mc_ratio__660->SetBinError(17,0.01227159);
   data_mc_ratio__660->SetBinError(18,0.009592952);
   data_mc_ratio__660->SetBinError(19,0.01794479);
   data_mc_ratio__660->SetBinError(20,0.02054396);
   data_mc_ratio__660->SetBinError(21,0.00981349);
   data_mc_ratio__660->SetBinError(22,0.02551346);
   data_mc_ratio__660->SetBinError(23,0.0259805);
   data_mc_ratio__660->SetBinError(24,0.04279077);
   data_mc_ratio__660->SetBinError(25,0.07331028);
   data_mc_ratio__660->SetBinError(26,0.1764885);
   data_mc_ratio__660->SetBinError(27,0.02056692);
   data_mc_ratio__660->SetBinError(28,0.2291894);
   data_mc_ratio__660->SetBinError(29,0.1689561);
   data_mc_ratio__660->SetBinError(30,3.280564);
   data_mc_ratio__660->SetBinError(31,1.152761);
   data_mc_ratio__660->SetMinimum(0.4);
   data_mc_ratio__660->SetMaximum(1.6);
   data_mc_ratio__660->SetEntries(67.54763);
   data_mc_ratio__660->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__660->SetLineColor(ci);
   data_mc_ratio__660->SetLineWidth(2);
   data_mc_ratio__660->SetMarkerStyle(20);
   data_mc_ratio__660->SetMarkerSize(1.2);
   data_mc_ratio__660->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__660->GetXaxis()->SetRange(1,30);
   data_mc_ratio__660->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__660->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__660->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__660->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__660->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__660->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__660->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__660->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__660->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__660->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__660->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__660->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__660->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__660->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__660->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__660->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__660->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1480[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1480[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1480[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1480[30] = {
   0.05284838,
   0.1623591,
   0.04719696,
   0.05273353,
   0.0593304,
   0.07862504,
   0.08068122,
   0.07036494,
   0.07734409,
   0.1110781,
   0.1016256,
   0.09126736,
   0.090836,
   0.1458117,
   0.1239126,
   0.1005513,
   0.1177376,
   0.1622438,
   0.2042012,
   0.247688,
   0.408459,
   0.3171723,
   0.3931077,
   0.5494001,
   0.2976792,
   0.4470667,
   0.8449881,
   0.4511351,
   0.4798535,
   0.2036611};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1480,Graph_from_mc_statistical_error_fy1480,Graph_from_mc_statistical_error_fex1480,Graph_from_mc_statistical_error_fey1480);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1480 = new TH1F("Graph_Graph_from_mc_statistical_error1480","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1480->SetMinimum(0.1395107);
   Graph_Graph_from_mc_statistical_error1480->SetMaximum(2.013986);
   Graph_Graph_from_mc_statistical_error1480->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1480->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1480->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1480->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1480->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1480->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1480->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1480->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1480->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1480->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1480);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_both_all->cd();
   H_dR_Bj1_both_all->Modified();
   H_dR_Bj1_both_all->cd();
   H_dR_Bj1_both_all->SetSelected(H_dR_Bj1_both_all);
}
