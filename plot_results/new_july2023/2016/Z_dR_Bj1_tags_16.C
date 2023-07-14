void Z_dR_Bj1_tags_16()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_16/Z_dR_Bj1_tags_16
//=========  (Fri Jul 14 13:38:02 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_tags_16 = new TCanvas("Z_dR_Bj1_tags_16", "Z_dR_Bj1_tags_16",0,0,600,600);
   Z_dR_Bj1_tags_16->SetHighLightColor(2);
   Z_dR_Bj1_tags_16->Range(0,0,1,1);
   Z_dR_Bj1_tags_16->SetFillColor(0);
   Z_dR_Bj1_tags_16->SetFillStyle(4000);
   Z_dR_Bj1_tags_16->SetBorderMode(0);
   Z_dR_Bj1_tags_16->SetBorderSize(2);
   Z_dR_Bj1_tags_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1441.319,6.314516,1439888);
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
   st->SetMaximum(1234052);
   
   TH1F *st_stack_53 = new TH1F("st_stack_53","",30,0,6);
   st_stack_53->SetMinimum(0.01);
   st_stack_53->SetMaximum(1295755);
   st_stack_53->SetDirectory(0);
   st_stack_53->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_53->SetLineColor(ci);
   st_stack_53->GetXaxis()->SetRange(1,30);
   st_stack_53->GetXaxis()->SetLabelFont(42);
   st_stack_53->GetXaxis()->SetLabelSize(0.035);
   st_stack_53->GetXaxis()->SetTitleSize(0.035);
   st_stack_53->GetXaxis()->SetTitleFont(42);
   st_stack_53->GetYaxis()->SetTitle("Events/0.2");
   st_stack_53->GetYaxis()->SetLabelFont(42);
   st_stack_53->GetYaxis()->SetLabelSize(0.05);
   st_stack_53->GetYaxis()->SetTitleSize(0.057);
   st_stack_53->GetYaxis()->SetTitleOffset(1.2);
   st_stack_53->GetYaxis()->SetTitleFont(42);
   st_stack_53->GetZaxis()->SetLabelFont(42);
   st_stack_53->GetZaxis()->SetLabelSize(0.035);
   st_stack_53->GetZaxis()->SetTitleSize(0.035);
   st_stack_53->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_53);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(1,102189.1);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(2,514425);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(3,403902.7);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(4,329535.8);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(5,213572.3);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(6,185115.6);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(7,137737.6);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(8,106792);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(9,88837.12);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(10,75862.82);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(11,75413.33);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(12,74440.39);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(13,57718.77);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(14,49167.31);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(15,48303.61);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(16,48236.87);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(17,29324.85);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(18,30461.83);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(19,28037.57);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(20,18577.56);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(21,16932.23);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(22,15208.17);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(23,10122.48);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(24,7978.375);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(25,6885.501);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(26,5037.308);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(27,3227.66);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(28,2612.992);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(29,662.0544);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(30,287.3716);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(31,1971.183);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(1,3001.607);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(2,30556.34);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(3,10642.28);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(4,22651.88);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(5,7764.234);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(6,7886.852);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(7,6155.412);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(8,5623.85);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(9,5024.675);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(10,4224.38);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(11,4951.678);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(12,5329.094);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(13,3594.238);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(14,3329.569);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(15,3641.748);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(16,4833.958);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(17,2824.592);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(18,3450.779);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(19,3143.714);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(20,2127.24);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(21,2089.81);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(22,2419.125);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(23,1204.409);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(24,1037.283);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(25,1027.77);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(26,829.8941);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(27,567.2163);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(28,667.6369);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(29,95.1658);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(30,60.65221);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(31,610.1498);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetEntries(174298);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(1,495.7258);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(2,2595.04);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(3,3588.312);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(4,3492.66);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(5,2978.596);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(6,2414.475);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(7,1987.108);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(8,1689.869);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(9,1464.562);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(10,1267.798);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(11,1135.134);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(12,1054.852);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(13,944.8534);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(14,811.6562);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(15,711.0424);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(16,611.0016);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(17,499.3265);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(18,427.4513);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(19,351.2233);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(20,277.2021);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(21,230.2998);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(22,165.0565);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(23,127.6282);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(24,100.3238);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(25,75.79722);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(26,59.01013);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(27,37.67139);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(28,22.65073);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(29,17.09579);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(30,13.24142);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(31,19.00185);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(1,9.241428);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(2,19.89704);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(3,23.20942);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(4,22.80857);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(5,21.06193);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(6,18.8985);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(7,17.21851);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(8,15.84961);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(9,14.80358);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(10,13.73599);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(11,12.86896);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(12,12.62337);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(13,11.93933);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(14,10.96927);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(15,10.3555);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(16,9.659561);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(17,8.631117);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(18,8.203366);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(19,7.38868);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(20,6.604595);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(21,6.016092);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(22,5.060904);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(23,4.556405);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(24,4.056432);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(25,3.575191);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(26,3.21784);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(27,2.512956);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(28,1.93684);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(29,1.721303);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(30,1.63088);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(31,1.82975);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetEntries(391454);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_3 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(1,4474.913);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(2,32429.95);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(3,54344.6);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(4,57653.71);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(5,50311.94);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(6,40333.34);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(7,32421.08);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(8,26969.31);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(9,23455.23);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(10,21070.5);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(11,19375.41);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(12,17842.45);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(13,16127.58);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(14,13998.78);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(15,11947.14);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(16,9939.51);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(17,8092.556);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(18,6466.437);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(19,5143.938);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(20,4002.675);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(21,3057.138);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(22,2280.677);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(23,1671.76);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(24,1197.907);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(25,854.4851);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(26,564.5936);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(27,376.329);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(28,236.2312);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(29,160.1161);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(30,100.6774);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(31,176.1466);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(1,16.66958);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(2,44.87407);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(3,58.1934);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(4,59.99247);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(5,56.04313);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(6,50.16527);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(7,44.97072);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(8,41.01584);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(9,38.25306);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(10,36.26439);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(11,34.78364);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(12,33.39473);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(13,31.75648);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(14,29.57764);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(15,27.31666);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(16,24.91117);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(17,22.47946);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(18,20.09075);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(19,17.90102);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(20,15.7921);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(21,13.79872);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(22,11.90381);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(23,10.19083);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(24,8.627213);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(25,7.284242);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(26,5.913207);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(27,4.825624);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(28,3.82417);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(29,3.153098);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(30,2.499642);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(31,3.290117);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetEntries(7663533);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_4 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(1,1110.514);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(2,3586.745);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(3,3801.421);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(4,2752.441);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(5,1660.914);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(6,1097.973);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(7,834.4161);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(8,653.6917);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(9,609.4024);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(10,494.6777);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(11,460.5409);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(12,387.6592);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(13,369.9171);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(14,359.8956);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(15,309.3494);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(16,258.7394);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(17,232.7351);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(18,198.4896);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(19,164.6793);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(20,154.7108);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(21,123.8229);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(22,108.391);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(23,91.87369);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(24,70.15912);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(25,56.99779);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(26,42.5152);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(27,32.27609);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(28,15.56042);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(29,6.080215);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(30,10.83246);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(31,6.680342);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(1,12.39942);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(2,34.47614);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(3,44.39356);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(4,46.02854);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(5,36.80044);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(6,27.39779);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(7,23.42447);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(8,21.26802);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(9,21.5994);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(10,17.80904);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(11,17.10792);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(12,13.86343);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(13,14.89392);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(14,16.20685);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(15,14.12791);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(16,11.98354);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(17,11.84124);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(18,11.56004);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(19,9.038281);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(20,10.29451);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(21,7.820373);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(22,7.622448);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(23,5.952237);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(24,4.187928);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(25,4.719895);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(26,4.438612);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(27,4.184689);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(28,1.359009);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(29,0.8821829);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(30,3.88815);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(31,1.030842);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetEntries(163132);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_5 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(1,716.8133);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(2,2184.251);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(3,1781.671);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(4,1186.541);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(5,905.5353);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(6,730.8037);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(7,597.5304);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(8,494.5367);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(9,433.2841);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(10,368.2453);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(11,300.9678);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(12,341.72);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(13,256.3711);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(14,250.5073);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(15,222.4826);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(16,209.6517);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(17,149.6915);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(18,158.0103);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(19,116.3232);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(20,93.93118);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(21,79.60308);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(22,82.86872);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(23,47.30369);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(24,42.50149);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(25,33.80616);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(26,25.40677);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(27,16.50331);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(28,10.26646);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(29,14.32514);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(30,3.57184);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(31,8.279298);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(1,20.41756);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(2,48.78035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(3,48.51112);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(4,42.76572);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(5,37.70679);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(6,33.77299);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(7,30.57282);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(8,26.70438);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(9,24.02422);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(10,22.96342);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(11,17.50257);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(12,25.07571);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(13,15.88202);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(14,19.00354);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(15,18.58662);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(16,17.64925);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(17,13.24224);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(18,15.99649);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(19,12.67626);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(20,6.672835);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(21,8.386244);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(22,12.01808);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(23,4.259594);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(24,4.390753);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(25,4.013595);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(26,3.37781);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(27,2.432517);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(28,1.753338);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(29,6.51589);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(30,1.179483);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(31,2.178392);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetEntries(113083);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_6 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(1,3.179017);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(2,10.39624);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(3,8.677857);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(4,5.670679);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(5,5.241082);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(6,4.210049);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(7,3.350856);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(8,3.694533);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(9,2.491662);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(10,2.233904);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(11,3.007178);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(12,1.804307);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(13,2.233904);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(14,1.890226);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(15,1.288791);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(16,1.031033);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(17,1.202871);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(18,0.687355);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(19,1.288791);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(20,0.3436775);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(21,0.3436775);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(22,0.5155163);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(23,0.2577581);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(24,0.5155163);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(25,0.08591938);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(27,0.08591938);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(28,0.08591938);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(1,0.5226272);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(2,0.9451131);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(3,0.863479);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(4,0.6980123);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(5,0.6710518);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(6,0.6014356);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(7,0.5365663);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(8,0.563411);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(9,0.46269);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(10,0.4381046);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(11,0.5083059);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(12,0.393732);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(13,0.4381046);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(14,0.4029976);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(15,0.3327643);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(16,0.2976334);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(17,0.3214809);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(18,0.2430167);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(19,0.3327643);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(20,0.1718388);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(21,0.1718388);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(22,0.2104586);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(23,0.1488167);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(24,0.2104586);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(25,0.08591938);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(27,0.08591938);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(28,0.08591938);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetEntries(766);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_7 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(1,10.89511);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(2,37.0816);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(3,35.55247);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(4,24.27507);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(5,9.939399);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(6,5.797983);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(7,4.842271);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(8,3.759132);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(9,2.930848);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(10,3.376847);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(11,3.121991);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(12,1.911423);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(13,2.102565);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(14,1.783995);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(15,1.720281);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(16,1.592852);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(17,1.592852);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(18,1.337996);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(19,0.7008551);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(20,1.146854);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(21,1.08314);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(22,0.7645692);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(23,0.7008551);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(24,0.1911423);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(25,0.3822846);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(26,0.2548564);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(27,0.1911423);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(1,0.8331699);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(2,1.537082);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(3,1.505056);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(4,1.24365);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(5,0.7957888);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(6,0.6077937);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(7,0.5554466);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(8,0.4893973);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(9,0.43213);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(10,0.4638456);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(11,0.4459987);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(12,0.3489765);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(13,0.3660096);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(14,0.3371433);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(15,0.3310682);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(16,0.3185705);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(17,0.3185705);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(18,0.2919747);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(19,0.2113157);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(20,0.270316);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(21,0.2626999);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(22,0.2207121);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(23,0.2113157);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(24,0.1103561);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(25,0.156067);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(26,0.1274282);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(27,0.1103561);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetEntries(2496);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_8 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(1,6.995964);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(2,33.54475);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(3,28.52201);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(4,21.16728);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(5,10.58364);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(6,7.354732);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(7,5.560895);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(8,5.022744);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(9,3.049523);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(10,3.767058);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(11,2.331988);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(12,2.152604);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(13,3.228907);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(14,3.767058);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(15,2.511372);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(16,1.43507);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(17,2.331988);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(18,1.614453);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(19,0.8969185);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(20,0.8969185);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(21,0.3587674);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(22,0.8969185);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(23,0.3587674);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(24,0.3587674);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(25,0.5381511);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(26,0.3587674);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(1,1.120251);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(2,2.453035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(3,2.261942);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(4,1.948606);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(5,1.377872);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(6,1.148616);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(7,0.9987662);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(8,0.9492093);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(9,0.7396179);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(10,0.8220394);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(11,0.6467771);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(12,0.6214034);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(13,0.7610606);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(14,0.8220394);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(15,0.6711923);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(16,0.5073737);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(17,0.6467771);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(18,0.5381511);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(19,0.4011141);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(20,0.4011141);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(21,0.2536869);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(22,0.4011141);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(23,0.2536869);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(24,0.2536869);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(25,0.3107017);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(26,0.2536869);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetEntries(834);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_9 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(1,3.135348);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(2,13.5511);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(3,17.01061);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(4,14.32908);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(5,10.30127);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(6,6.41829);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(7,4.445766);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(8,3.284321);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(9,2.805674);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(10,2.448413);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(11,2.227711);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(12,2.248401);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(13,1.938039);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(14,1.634574);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(15,1.393181);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(16,1.140753);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(17,0.9876414);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(18,0.7848714);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(19,0.6703823);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(20,0.5724458);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(21,0.4827856);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(22,0.3945048);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(23,0.3627789);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(24,0.2551867);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(25,0.1834585);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(26,0.1324212);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(27,0.07448692);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(28,0.03172591);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(29,0.01931142);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(30,0.004138162);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(31,0.006896937);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(1,0.06576366);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(2,0.1367195);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(3,0.1531803);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(4,0.1405893);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(5,0.1192033);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(6,0.09409202);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(7,0.07830985);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(8,0.06730789);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(9,0.06221022);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(10,0.05811462);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(11,0.05543353);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(12,0.05569036);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(13,0.05170403);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(14,0.0474838);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(15,0.04383762);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(16,0.03966788);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(17,0.03690989);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(18,0.03290352);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(19,0.03040916);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(20,0.02810026);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(21,0.02580598);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(22,0.02332756);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(23,0.0223699);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(24,0.0187617);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(25,0.01590787);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(26,0.01351518);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(27,0.01013639);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(28,0.00661531);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(29,0.005161195);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(30,0.002389169);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(31,0.003084404);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetEntries(67621);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_10 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(1,1.888694);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(2,7.185987);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(3,8.449532);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(4,6.900983);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(5,4.624883);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(6,2.925954);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(7,1.96997);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(8,1.476225);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(9,1.236692);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(10,1.079509);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(11,0.9473903);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(12,0.8514339);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(13,0.7955787);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(14,0.6981901);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(15,0.57359);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(16,0.4944618);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(17,0.4425451);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(18,0.387764);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(19,0.3473048);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(20,0.3014749);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(21,0.2681766);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(22,0.2284335);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(23,0.1869001);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(24,0.1539599);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(25,0.1253162);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(26,0.0705351);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(27,0.0565713);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(28,0.02506323);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(29,0.01145748);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(30,0.005370693);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(31,0.004654601);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(1,0.02600461);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(2,0.05072391);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(3,0.05500294);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(4,0.04970785);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(5,0.04069302);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(6,0.03236706);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(7,0.02655824);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(8,0.02299036);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(9,0.02104264);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(10,0.01965996);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(11,0.01841764);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(12,0.01746003);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(13,0.01687762);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(14,0.01581089);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(15,0.0143308);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(16,0.01330564);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(17,0.01258776);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(18,0.01178293);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(19,0.01115129);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(20,0.01038951);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(21,0.00979896);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(22,0.009043768);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(23,0.008180396);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(24,0.007424604);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(25,0.006698431);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(26,0.005025418);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(27,0.004500571);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(28,0.002995629);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(29,0.002025415);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(30,0.001386707);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(31,0.001290954);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetEntries(124885);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_11 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(1,0.1039303);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(2,0.5223864);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(3,0.6290517);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(4,0.3309359);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(5,0.1996555);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(6,0.07931522);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(7,0.08205022);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(8,0.05470015);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(9,0.04376012);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(10,0.05743516);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(11,0.04923013);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(12,0.05196514);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(13,0.03282009);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(14,0.04376012);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(15,0.01367504);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(16,0.01641004);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(17,0.01914505);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(18,0.01641004);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(19,0.008205022);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(20,0.01367504);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(21,0.008205022);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(22,0.008205022);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(23,0.01094003);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(24,0.005470015);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(25,0.008205022);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(26,0.01367504);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(27,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(28,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(1,0.01685972);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(2,0.03779856);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(3,0.04147844);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(4,0.03008508);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(5,0.02336791);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(6,0.01472847);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(7,0.01498025);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(8,0.01223133);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(9,0.01094003);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(10,0.01253338);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(11,0.01160365);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(12,0.01192162);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(13,0.009474344);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(14,0.01094003);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(15,0.006115663);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(16,0.006699373);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(17,0.00723615);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(18,0.006699373);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(19,0.004737172);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(20,0.006115663);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(21,0.004737172);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(22,0.004737172);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(23,0.005470015);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(24,0.003867885);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(25,0.004737172);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(26,0.006115663);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(27,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(28,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetEntries(888);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_12 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(1,0.06144973);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(2,0.2497288);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(3,0.2554451);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(4,0.1536243);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(5,0.07538309);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(6,0.04823089);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(7,0.03108213);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(8,0.02750947);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(9,0.02608041);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(10,0.01893509);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(11,0.02500861);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(12,0.01679149);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(13,0.0146479);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(14,0.01429063);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(15,0.0146479);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(16,0.007859849);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(17,0.009646178);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(18,0.009288912);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(19,0.008931646);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(20,0.006430785);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(21,0.006788051);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(22,0.006073519);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(23,0.005358988);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(24,0.002500861);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(25,0.002143595);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(26,0.001786329);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(27,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(28,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(30,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(1,0.004685498);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(2,0.009445612);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(3,0.009553104);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(4,0.007408422);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(5,0.005189586);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(6,0.004151054);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(7,0.003332354);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(8,0.003134995);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(9,0.003052481);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(10,0.002600935);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(11,0.002989101);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(12,0.002449291);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(13,0.002287618);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(14,0.002259548);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(15,0.002287618);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(16,0.001675725);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(17,0.001856408);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(18,0.001821706);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(19,0.001786329);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(20,0.001515751);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(21,0.001557286);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(22,0.001473045);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(23,0.001383685);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(24,0.0009452366);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(25,0.000875119);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(26,0.0007988707);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(27,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(28,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(30,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetEntries(3081);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1__105 = new TH1D("VbbHcc_tags_Z_dR_Bj1__105","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1__105->SetBinContent(1,73669);
   VbbHcc_tags_Z_dR_Bj1__105->SetBinContent(2,246606);
   VbbHcc_tags_Z_dR_Bj1__105->SetBinContent(3,218215);
   VbbHcc_tags_Z_dR_Bj1__105->SetBinContent(4,161502);
   VbbHcc_tags_Z_dR_Bj1__105->SetBinContent(5,125704);
   VbbHcc_tags_Z_dR_Bj1__105->SetBinContent(6,98628);
   VbbHcc_tags_Z_dR_Bj1__105->SetBinContent(7,79411);
   VbbHcc_tags_Z_dR_Bj1__105->SetBinContent(8,65889);
   VbbHcc_tags_Z_dR_Bj1__105->SetBinContent(9,56526);
   VbbHcc_tags_Z_dR_Bj1__105->SetBinContent(10,49915);
   VbbHcc_tags_Z_dR_Bj1__105->SetBinContent(11,45250);
   VbbHcc_tags_Z_dR_Bj1__105->SetBinContent(12,41302);
   VbbHcc_tags_Z_dR_Bj1__105->SetBinContent(13,38093);
   VbbHcc_tags_Z_dR_Bj1__105->SetBinContent(14,33610);
   VbbHcc_tags_Z_dR_Bj1__105->SetBinContent(15,30120);
   VbbHcc_tags_Z_dR_Bj1__105->SetBinContent(16,26442);
   VbbHcc_tags_Z_dR_Bj1__105->SetBinContent(17,21866);
   VbbHcc_tags_Z_dR_Bj1__105->SetBinContent(18,18510);
   VbbHcc_tags_Z_dR_Bj1__105->SetBinContent(19,15496);
   VbbHcc_tags_Z_dR_Bj1__105->SetBinContent(20,13237);
   VbbHcc_tags_Z_dR_Bj1__105->SetBinContent(21,11034);
   VbbHcc_tags_Z_dR_Bj1__105->SetBinContent(22,9238);
   VbbHcc_tags_Z_dR_Bj1__105->SetBinContent(23,7445);
   VbbHcc_tags_Z_dR_Bj1__105->SetBinContent(24,6072);
   VbbHcc_tags_Z_dR_Bj1__105->SetBinContent(25,4696);
   VbbHcc_tags_Z_dR_Bj1__105->SetBinContent(26,3583);
   VbbHcc_tags_Z_dR_Bj1__105->SetBinContent(27,2513);
   VbbHcc_tags_Z_dR_Bj1__105->SetBinContent(28,1580);
   VbbHcc_tags_Z_dR_Bj1__105->SetBinContent(29,986);
   VbbHcc_tags_Z_dR_Bj1__105->SetBinContent(30,574);
   VbbHcc_tags_Z_dR_Bj1__105->SetBinContent(31,963);
   VbbHcc_tags_Z_dR_Bj1__105->SetEntries(1508675);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1__105->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1__105->SetLineWidth(2);
   VbbHcc_tags_Z_dR_Bj1__105->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_Bj1__105->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_Bj1__105->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1__105->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__105->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__105->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__105->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__105->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__105->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__105->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__105->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1__105->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__105->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__105->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__105->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__105->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__105->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fx1105[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fy1105[30] = {
   109013.4,
   555323.5,
   467517.8,
   394694,
   269470.3,
   229719,
   173598,
   136616.7,
   114812.2,
   99077.02,
   96697.1,
   94076.12,
   75427.84,
   64597.99,
   61501.14,
   59261.49,
   38305.75,
   37717.05,
   33817.66,
   23109.36,
   20425.64,
   17847.98,
   12062.93,
   9390.75,
   7907.913,
   5729.665,
   3690.851,
   2897.847,
   859.7024,
   415.7046};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fex1105[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fey1105[30] = {
   3001.763,
   30556.44,
   10642.67,
   22652.06,
   7764.644,
   7887.154,
   6155.721,
   5624.126,
   5024.947,
   4224.658,
   4951.878,
   5329.29,
   3594.464,
   3329.812,
   3641.941,
   4834.079,
   2824.751,
   3450.904,
   3143.812,
   2127.345,
   2089.895,
   2419.202,
   1204.483,
   1037.344,
   1027.821,
   829.9402,
   567.2631,
   667.6544,
   95.4603,
   60.86137};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_Bj1_fx1105,Graph_from_VbbHcc_tags_Z_dR_Bj1_fy1105,Graph_from_VbbHcc_tags_Z_dR_Bj1_fex1105,Graph_from_VbbHcc_tags_Z_dR_Bj1_fey1105);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->SetMinimum(319.3589);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->SetMaximum(644432.5);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR_Bj1","MC unc. (stat.)","fl");

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
   Z_dR_Bj1_tags_16->cd();
  
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
   
   TH1D *data_mc_ratio__106 = new TH1D("data_mc_ratio__106","",30,0,6);
   data_mc_ratio__106->SetBinContent(1,0.6757795);
   data_mc_ratio__106->SetBinContent(2,0.4440763);
   data_mc_ratio__106->SetBinContent(3,0.4667522);
   data_mc_ratio__106->SetBinContent(4,0.4091828);
   data_mc_ratio__106->SetBinContent(5,0.4664856);
   data_mc_ratio__106->SetBinContent(6,0.4293419);
   data_mc_ratio__106->SetBinContent(7,0.4574418);
   data_mc_ratio__106->SetBinContent(8,0.4822909);
   data_mc_ratio__106->SetBinContent(9,0.4923345);
   data_mc_ratio__106->SetBinContent(10,0.5038);
   data_mc_ratio__106->SetBinContent(11,0.4679561);
   data_mc_ratio__106->SetBinContent(12,0.4390275);
   data_mc_ratio__106->SetBinContent(13,0.5050257);
   data_mc_ratio__106->SetBinContent(14,0.5202949);
   data_mc_ratio__106->SetBinContent(15,0.489747);
   data_mc_ratio__106->SetBinContent(16,0.4461919);
   data_mc_ratio__106->SetBinContent(17,0.5708282);
   data_mc_ratio__106->SetBinContent(18,0.4907595);
   data_mc_ratio__106->SetBinContent(19,0.4582222);
   data_mc_ratio__106->SetBinContent(20,0.5727982);
   data_mc_ratio__106->SetBinContent(21,0.5402033);
   data_mc_ratio__106->SetBinContent(22,0.5175936);
   data_mc_ratio__106->SetBinContent(23,0.6171803);
   data_mc_ratio__106->SetBinContent(24,0.6465938);
   data_mc_ratio__106->SetBinContent(25,0.5938356);
   data_mc_ratio__106->SetBinContent(26,0.6253419);
   data_mc_ratio__106->SetBinContent(27,0.6808729);
   data_mc_ratio__106->SetBinContent(28,0.5452324);
   data_mc_ratio__106->SetBinContent(29,1.146909);
   data_mc_ratio__106->SetBinContent(30,1.380788);
   data_mc_ratio__106->SetBinContent(31,0.4414794);
   data_mc_ratio__106->SetBinError(1,0.002489789);
   data_mc_ratio__106->SetBinError(2,0.0008942434);
   data_mc_ratio__106->SetBinError(3,0.0009991809);
   data_mc_ratio__106->SetBinError(4,0.001018189);
   data_mc_ratio__106->SetBinError(5,0.001315721);
   data_mc_ratio__106->SetBinError(6,0.001367109);
   data_mc_ratio__106->SetBinError(7,0.001623288);
   data_mc_ratio__106->SetBinError(8,0.001878895);
   data_mc_ratio__106->SetBinError(9,0.002070791);
   data_mc_ratio__106->SetBinError(10,0.002254979);
   data_mc_ratio__106->SetBinError(11,0.002199864);
   data_mc_ratio__106->SetBinError(12,0.002160261);
   data_mc_ratio__106->SetBinError(13,0.002587563);
   data_mc_ratio__106->SetBinError(14,0.002838019);
   data_mc_ratio__106->SetBinError(15,0.002821917);
   data_mc_ratio__106->SetBinError(16,0.00274394);
   data_mc_ratio__106->SetBinError(17,0.003860297);
   data_mc_ratio__106->SetBinError(18,0.00360716);
   data_mc_ratio__106->SetBinError(19,0.003681004);
   data_mc_ratio__106->SetBinError(20,0.004978596);
   data_mc_ratio__106->SetBinError(21,0.005142695);
   data_mc_ratio__106->SetBinError(22,0.005385176);
   data_mc_ratio__106->SetBinError(23,0.00715286);
   data_mc_ratio__106->SetBinError(24,0.008297851);
   data_mc_ratio__106->SetBinError(25,0.00866567);
   data_mc_ratio__106->SetBinError(26,0.01044706);
   data_mc_ratio__106->SetBinError(27,0.01358219);
   data_mc_ratio__106->SetBinError(28,0.01371681);
   data_mc_ratio__106->SetBinError(29,0.03652501);
   data_mc_ratio__106->SetBinError(30,0.05763298);
   data_mc_ratio__106->SetBinError(31,0.1243099);
   data_mc_ratio__106->SetMinimum(0.4);
   data_mc_ratio__106->SetMaximum(1.6);
   data_mc_ratio__106->SetEntries(2130.023);
   data_mc_ratio__106->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__106->SetLineColor(ci);
   data_mc_ratio__106->SetLineWidth(2);
   data_mc_ratio__106->SetMarkerStyle(20);
   data_mc_ratio__106->SetMarkerSize(1.2);
   data_mc_ratio__106->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__106->GetXaxis()->SetRange(1,30);
   data_mc_ratio__106->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__106->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__106->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__106->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__106->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__106->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__106->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__106->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__106->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__106->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__106->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__106->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__106->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__106->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__106->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__106->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__106->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1106[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1106[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1106[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1106[30] = {
   0.02753573,
   0.05502457,
   0.0227642,
   0.05739145,
   0.02881447,
   0.03433392,
   0.03545962,
   0.04116718,
   0.04376667,
   0.04264014,
   0.0512102,
   0.05664871,
   0.04765434,
   0.05154669,
   0.05921745,
   0.081572,
   0.07374222,
   0.09149453,
   0.09296364,
   0.09205555,
   0.1023172,
   0.1355449,
   0.09985002,
   0.1104645,
   0.1299737,
   0.1448497,
   0.1536944,
   0.2303967,
   0.1110388,
   0.1464053};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1106,Graph_from_mc_statistical_error_fy1106,Graph_from_mc_statistical_error_fex1106,Graph_from_mc_statistical_error_fey1106);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1106 = new TH1F("Graph_Graph_from_mc_statistical_error1106","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1106->SetMinimum(0.7235239);
   Graph_Graph_from_mc_statistical_error1106->SetMaximum(1.276476);
   Graph_Graph_from_mc_statistical_error1106->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1106->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1106->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1106->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1106->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1106->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1106->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1106->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1106->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1106->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1106->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1106->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1106->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1106->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1106->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1106->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1106);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_tags_16->cd();
   Z_dR_Bj1_tags_16->Modified();
   Z_dR_Bj1_tags_16->cd();
   Z_dR_Bj1_tags_16->SetSelected(Z_dR_Bj1_tags_16);
}
