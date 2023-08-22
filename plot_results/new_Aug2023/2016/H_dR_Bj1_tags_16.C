void H_dR_Bj1_tags_16()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_16/H_dR_Bj1_tags_16
//=========  (Tue Aug 22 09:20:35 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_tags_16 = new TCanvas("H_dR_Bj1_tags_16", "H_dR_Bj1_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
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
   topPad->Range(-0.9193524,-62.9928,6.314516,62939.81);
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
   st->SetMaximum(53942.41);
   
   TH1F *st_stack_45 = new TH1F("st_stack_45","",30,0,6);
   st_stack_45->SetMinimum(0.01);
   st_stack_45->SetMaximum(56639.53);
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
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(1,6660.846);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(2,22463.98);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(3,19064.06);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(4,18690.19);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(5,14416.03);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(6,8498.222);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(7,10672);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(8,7785.21);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(9,8565.516);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(10,9215.581);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(11,7650.713);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(12,9024.49);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(13,7923.566);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(14,6366.816);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(15,3249.02);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(16,3082.359);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(17,2555.012);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(18,1313.49);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(19,1652.778);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(20,2553.479);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(21,1053.725);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(22,1159.233);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(23,812.9407);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(24,242.5762);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(25,1046.543);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(26,146.3663);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(27,682.7898);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(28,65.62517);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(29,48.01953);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(30,4.285587);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(31,59.22308);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(1,1046.731);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(2,2803.667);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(3,2329.418);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(4,2404.282);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(5,2191.54);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(6,1189.23);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(7,1506.084);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(8,1825.322);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(9,1924.537);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(10,2734.644);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(11,1848.793);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(12,2356.106);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(13,1898.038);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(14,1792.782);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(15,715.636);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(16,712.0562);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(17,704.9876);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(18,451.792);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(19,460.4357);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(20,1528.225);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(21,446.1158);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(22,449.7978);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(23,440.3191);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(24,71.41047);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(25,537.1928);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(26,48.88751);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(27,437.7006);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(28,30.01332);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(29,16.91221);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(30,3.575784);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(31,37.2184);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetEntries(8758);

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
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(1,28.67941);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(2,83.23894);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(3,88.30514);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(4,74.72202);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(5,70.44001);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(6,54.19179);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(7,46.40277);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(8,35.91824);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(9,35.39257);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(10,30.41968);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(11,27.80118);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(12,24.52041);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(13,23.06847);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(14,21.93069);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(15,18.4621);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(16,14.12247);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(17,8.448319);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(18,9.492422);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(19,8.22806);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(20,7.572372);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(21,7.92114);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(22,6.708297);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(23,3.791462);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(24,3.225369);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(25,3.107109);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(26,1.173329);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(27,0.7643497);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(28,0.9362182);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(29,0.4226527);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(30,0.3772566);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(31,0.2398712);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(1,2.239283);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(2,3.577608);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(3,3.705758);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(4,3.335929);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(5,3.370015);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(6,2.934683);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(7,2.707125);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(8,2.347221);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(9,2.384313);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(10,2.179727);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(11,2.194156);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(12,1.995065);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(13,1.913886);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(14,1.92218);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(15,1.725455);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(16,1.473853);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(17,1.037789);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(18,1.235441);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(19,1.001439);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(20,1.095862);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(21,1.211304);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(22,1.101957);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(23,0.7770611);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(24,0.6715539);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(25,0.7566801);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(26,0.4227002);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(27,0.1927522);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(28,0.4018258);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(29,0.1511745);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(30,0.2819156);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(31,0.1082468);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetEntries(8949);

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
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(1,398.4205);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(2,1444.368);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(3,1783.833);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(4,1644.619);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(5,1332.342);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(6,1053.123);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(7,847.1786);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(8,704.5705);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(9,619.4871);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(10,546.6888);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(11,499.6506);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(12,449.2151);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(13,402.955);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(14,357.0789);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(15,317.2534);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(16,277.606);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(17,223.2437);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(18,186.3332);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(19,153.6945);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(20,121.4368);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(21,94.91852);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(22,81.36998);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(23,61.99851);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(24,44.45004);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(25,35.73519);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(26,25.6239);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(27,18.1298);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(28,11.95771);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(29,8.29935);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(30,5.395683);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinContent(31,10.3417);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(1,5.104595);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(2,9.708213);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(3,10.81663);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(4,10.39725);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(5,9.360985);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(6,8.324584);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(7,7.449714);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(8,6.801277);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(9,6.368847);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(10,5.990615);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(11,5.726077);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(12,5.441096);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(13,5.145706);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(14,4.841157);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(15,4.562344);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(16,4.268271);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(17,3.812891);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(18,3.494505);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(19,3.166147);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(20,2.813249);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(21,2.481743);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(22,2.302305);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(23,2.00803);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(24,1.693505);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(25,1.527153);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(26,1.285117);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(27,1.083894);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(28,0.8815682);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(29,0.7429025);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(30,0.5906327);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetBinError(31,0.8104209);
   VbbHcc_tags_H_dR_Bj1_stack_3->SetEntries(216002);

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
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(1,72.69119);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(2,237.5731);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(3,278.7191);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(4,233.7955);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(5,174.5181);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(6,149.2073);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(7,105.886);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(8,99.74069);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(9,84.19486);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(10,73.95835);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(11,68.25945);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(12,65.44916);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(13,58.73493);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(14,62.88462);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(15,39.25938);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(16,44.49334);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(17,32.36667);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(18,28.52176);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(19,22.64443);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(20,18.86218);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(21,11.53648);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(22,5.88697);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(23,8.21932);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(24,7.433964);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(25,3.825733);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(26,3.888518);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(27,2.344869);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(28,1.533367);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(29,0.3692174);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(30,0.3018785);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinContent(31,1.50428);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(1,4.106489);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(2,9.151294);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(3,13.2467);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(4,12.00727);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(5,11.48039);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(6,9.970112);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(7,6.991327);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(8,8.120569);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(9,6.96736);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(10,6.48601);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(11,5.301436);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(12,6.378321);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(13,5.49942);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(14,6.35623);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(15,4.138017);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(16,5.221844);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(17,4.96861);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(18,3.94674);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(19,3.725309);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(20,2.965522);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(21,2.613726);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(22,0.8764704);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(23,1.30266);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(24,2.418303);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(25,0.7879871);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(26,0.8406273);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(27,0.6508439);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(28,0.3355268);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(29,0.1655455);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(30,0.151231);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetBinError(31,0.6036976);
   VbbHcc_tags_H_dR_Bj1_stack_4->SetEntries(14509);

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
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(1,13.35202);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(2,29.99813);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(3,21.71447);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(4,17.47994);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(5,16.39634);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(6,17.74932);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(7,8.223228);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(8,8.861363);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(9,9.151016);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(10,5.622928);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(11,5.866659);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(12,10.79318);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(13,5.605366);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(14,3.949267);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(15,3.138155);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(16,2.654624);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(17,2.569114);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(18,2.071477);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(19,2.05017);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(20,1.145027);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(21,0.8731046);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(22,0.9438201);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(23,0.9862519);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(24,0.3196228);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(25,1.46118);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(26,0.2317708);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(27,0.2274986);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(28,0.172586);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(29,0.1246412);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(30,0.2772836);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinContent(31,0.0002367642);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(1,1.101357);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(2,7.422606);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(3,2.838503);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(4,2.610025);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(5,2.741325);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(6,7.416864);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(7,1.43748);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(8,1.966612);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(9,2.215394);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(10,1.563377);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(11,1.257619);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(12,2.496885);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(13,1.604336);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(14,1.174209);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(15,1.125655);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(16,0.4850826);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(17,0.6823274);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(18,0.4551989);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(19,1.075546);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(20,0.3279917);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(21,0.2949203);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(22,0.3039101);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(23,0.2941823);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(24,0.1510257);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(25,1.087301);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(26,0.1336765);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(27,0.1125142);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(28,0.1098665);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(29,0.09035808);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(30,0.1775854);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetBinError(31,0.0002367642);
   VbbHcc_tags_H_dR_Bj1_stack_5->SetEntries(3148);

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
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(2,0.3022236);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(3,0.3022236);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(5,0.1511118);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(6,0.3022236);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(9,0.1511118);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(11,0.1511118);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinContent(17,0.1511118);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(2,0.2137044);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(3,0.2137044);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(5,0.1511118);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(6,0.2137044);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(9,0.1511118);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(11,0.1511118);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetBinError(17,0.1511118);
   VbbHcc_tags_H_dR_Bj1_stack_6->SetEntries(10);

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
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(1,0.4489005);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(2,1.010026);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(3,0.5611256);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(4,0.7855758);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(5,0.2244502);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(6,0.5611256);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(8,0.1122251);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(11,0.2244502);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(12,0.1122251);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(14,0.1122251);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(15,0.2244502);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(16,0.3366753);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(17,0.2244502);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinContent(30,0.1122251);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(1,0.2244502);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(2,0.3366753);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(3,0.250943);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(4,0.2969197);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(5,0.1587103);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(6,0.250943);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(8,0.1122251);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(11,0.1587103);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(12,0.1122251);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(14,0.1122251);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(15,0.1587103);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(16,0.1943796);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(17,0.1587103);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetBinError(30,0.1122251);
   VbbHcc_tags_H_dR_Bj1_stack_7->SetEntries(45);

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
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(1,0.532125);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(2,6.917625);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(3,3.458812);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(4,3.19275);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(5,3.990937);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(6,2.926687);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(7,2.926687);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(8,2.1285);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(9,1.596375);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(10,2.1285);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(11,1.06425);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(12,2.1285);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(13,1.06425);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(14,1.330312);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(15,1.06425);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(16,1.330312);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(17,1.596375);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(18,0.2660625);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(19,0.2660625);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(20,0.2660625);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(21,0.532125);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(23,0.532125);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinContent(27,0.2660625);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(1,0.3762692);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(2,1.356658);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(3,0.959302);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(4,0.9216675);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(5,1.030456);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(6,0.8824295);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(7,0.8824295);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(8,0.7525384);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(9,0.6517174);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(10,0.7525384);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(11,0.532125);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(12,0.7525384);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(13,0.532125);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(14,0.5949338);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(15,0.532125);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(16,0.5949338);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(17,0.6517174);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(18,0.2660625);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(19,0.2660625);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(20,0.2660625);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(21,0.3762692);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(23,0.3762692);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetBinError(27,0.2660625);
   VbbHcc_tags_H_dR_Bj1_stack_8->SetEntries(156);

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
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(1,1.17885);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(2,4.602735);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(3,5.90524);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(4,4.968206);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(5,3.836071);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(6,2.668212);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(7,2.098023);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(8,1.768275);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(9,1.596531);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(10,1.640497);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(11,1.574548);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(12,1.479745);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(13,1.346472);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(14,1.115648);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(15,0.8697108);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(16,0.6443829);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(17,0.4808828);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(18,0.3366179);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(19,0.2610506);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(20,0.2005968);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(21,0.140143);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(22,0.1250295);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(23,0.1085421);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(24,0.06732359);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(25,0.06594964);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(26,0.04808828);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(27,0.02473111);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(28,0.01099161);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(29,0.006869754);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(30,0.002747902);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinContent(31,0.001373951);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(1,0.04024527);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(2,0.07952315);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(3,0.09007502);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(4,0.08262004);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(5,0.07259871);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(6,0.06054744);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(7,0.05368966);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(8,0.04929019);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(9,0.0468354);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(10,0.04747591);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(11,0.04651184);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(12,0.04508987);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(13,0.04301146);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(14,0.03915157);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(15,0.0345679);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(16,0.02975484);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(17,0.02570427);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(18,0.02150573);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(19,0.0189386);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(20,0.01660151);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(21,0.01387622);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(22,0.01310666);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(23,0.01221194);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(24,0.009617655);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(25,0.00951901);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(26,0.008128402);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(27,0.005829179);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(28,0.00388612);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(29,0.003072247);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(30,0.00194306);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetBinError(31,0.001373951);
   VbbHcc_tags_H_dR_Bj1_stack_9->SetEntries(28512);

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
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(1,0.5227169);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(2,2.068362);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(3,2.631843);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(4,2.279402);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(5,1.699785);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(6,1.234393);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(7,0.9647545);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(8,0.7821645);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(9,0.7002113);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(10,0.6760075);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(11,0.6433112);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(12,0.5932051);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(13,0.5320587);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(14,0.459872);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(15,0.3643307);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(16,0.2802544);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(17,0.2399147);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(18,0.1664541);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(19,0.1265391);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(20,0.1040338);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(21,0.08110392);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(22,0.06539269);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(23,0.05859864);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(24,0.03906576);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(25,0.02420379);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(26,0.02632693);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(27,0.01104032);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(28,0.008917185);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(29,0.002123139);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(30,0.0004246279);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinContent(31,0.0008492557);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(1,0.01489833);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(2,0.02963586);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(3,0.03342984);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(4,0.03111105);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(5,0.02686589);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(6,0.02289449);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(7,0.0202401);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(8,0.0182244);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(9,0.01724324);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(10,0.0169426);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(11,0.01652779);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(12,0.01587109);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(13,0.01503087);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(14,0.01397406);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(15,0.01243805);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(16,0.01090889);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(17,0.01009329);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(18,0.008407203);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(19,0.007330213);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(20,0.006646477);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(21,0.005868474);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(22,0.005269493);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(23,0.004988248);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(24,0.004072887);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(25,0.00320587);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(26,0.003343523);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(27,0.002165186);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(28,0.001945889);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(29,0.0009494968);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(30,0.0004246279);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetBinError(31,0.0006005145);
   VbbHcc_tags_H_dR_Bj1_stack_10->SetEntries(40948);

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
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(1,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(2,0.01367504);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(3,0.01367504);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(4,0.01367504);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(5,0.005470015);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(6,0.01094003);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(7,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(8,0.005470015);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(9,0.005470015);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(13,0.008205022);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(14,0.005470015);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(15,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(16,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(18,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinContent(23,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(1,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(2,0.006115663);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(3,0.006115663);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(4,0.006115663);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(5,0.003867885);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(6,0.005470015);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(7,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(8,0.003867885);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(9,0.003867885);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(13,0.004737172);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(14,0.003867885);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(15,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(16,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(18,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetBinError(23,0.002735007);
   VbbHcc_tags_H_dR_Bj1_stack_11->SetEntries(36);

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
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(1,0.001071798);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(2,0.00857438);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(3,0.008217114);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(4,0.003929924);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(5,0.005358988);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(6,0.001429063);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(7,0.001429063);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(8,0.002858127);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(9,0.001429063);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(10,0.001786329);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(11,0.0007145317);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(12,0.001786329);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(13,0.001429063);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(14,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(15,0.001071798);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(16,0.001071798);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(17,0.0007145317);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(20,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(21,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(22,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(24,0.0007145317);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinContent(25,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(1,0.0006188026);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(2,0.001750238);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(3,0.001713387);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(4,0.001184917);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(5,0.001383685);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(6,0.0007145317);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(7,0.0007145317);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(8,0.0010105);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(9,0.0007145317);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(10,0.0007988707);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(11,0.0005052502);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(12,0.0007988707);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(13,0.0007145317);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(14,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(15,0.0006188026);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(16,0.0006188026);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(17,0.0005052502);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(20,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(21,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(22,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(24,0.0005052502);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetBinError(25,0.0003572658);
   VbbHcc_tags_H_dR_Bj1_stack_12->SetEntries(127);

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
   
   TH1D *VbbHcc_tags_H_dR_Bj1__122 = new TH1D("VbbHcc_tags_H_dR_Bj1__122","",30,0,6);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(1,4489);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(2,12075);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(3,11900);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(4,9669);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(5,7816);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(6,6619);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(7,5281);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(8,4673);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(9,3995);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(10,3642);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(11,3371);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(12,3039);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(13,2813);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(14,2537);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(15,2175);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(16,1873);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(17,1581);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(18,1368);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(19,1105);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(20,825);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(21,810);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(22,621);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(23,511);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(24,413);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(25,269);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(26,204);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(27,172);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(28,113);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(29,78);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(30,48);
   VbbHcc_tags_H_dR_Bj1__122->SetBinContent(31,89);
   VbbHcc_tags_H_dR_Bj1__122->SetEntries(94203);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1__122->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1__122->SetLineWidth(2);
   VbbHcc_tags_H_dR_Bj1__122->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_Bj1__122->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_Bj1__122->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1__122->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__122->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__122->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__122->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__122->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__122->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__122->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__122->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj1__122->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__122->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__122->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj1__122->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj1__122->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__122->Draw("same E");
   
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
   7176.675,
   24274.08,
   21249.52,
   20672.05,
   16019.64,
   9780.199,
   11685.68,
   8639.101,
   9317.792,
   9876.718,
   8255.95,
   9578.783,
   8416.882,
   6815.683,
   3629.66,
   3423.831,
   2824.333,
   1540.681,
   1840.049,
   2703.066,
   1169.728,
   1254.333,
   888.6382,
   298.1123,
   1090.762,
   177.3582,
   704.5581,
   80.24496,
   57.24438,
   10.75309};
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
   1046.754,
   2803.711,
   2329.485,
   2404.338,
   2191.595,
   1189.328,
   1506.122,
   1825.355,
   1924.563,
   2734.66,
   1848.812,
   2356.123,
   1898.055,
   1792.802,
   715.6657,
   712.0901,
   705.0168,
   451.8248,
   460.4641,
   1528.231,
   446.1322,
   449.806,
   440.3266,
   71.47479,
   537.1972,
   48.91364,
   437.7025,
   30.03103,
   16.93025,
   3.644388};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_Bj1_fx1089,Graph_from_VbbHcc_tags_H_dR_Bj1_fy1089,Graph_from_VbbHcc_tags_H_dR_Bj1_fex1089,Graph_from_VbbHcc_tags_H_dR_Bj1_fey1089);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->SetMinimum(6.397828);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj11089->SetMaximum(29784.86);
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
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
   
   TH1D *data_mc_ratio__123 = new TH1D("data_mc_ratio__123","",30,0,6);
   data_mc_ratio__123->SetBinContent(1,0.6254985);
   data_mc_ratio__123->SetBinContent(2,0.4974441);
   data_mc_ratio__123->SetBinContent(3,0.5600127);
   data_mc_ratio__123->SetBinContent(4,0.4677331);
   data_mc_ratio__123->SetBinContent(5,0.4879012);
   data_mc_ratio__123->SetBinContent(6,0.6767756);
   data_mc_ratio__123->SetBinContent(7,0.4519206);
   data_mc_ratio__123->SetBinContent(8,0.5409128);
   data_mc_ratio__123->SetBinContent(9,0.4287496);
   data_mc_ratio__123->SetBinContent(10,0.368746);
   data_mc_ratio__123->SetBinContent(11,0.4083116);
   data_mc_ratio__123->SetBinContent(12,0.3172637);
   data_mc_ratio__123->SetBinContent(13,0.3342093);
   data_mc_ratio__123->SetBinContent(14,0.3722298);
   data_mc_ratio__123->SetBinContent(15,0.5992297);
   data_mc_ratio__123->SetBinContent(16,0.547048);
   data_mc_ratio__123->SetBinContent(17,0.5597782);
   data_mc_ratio__123->SetBinContent(18,0.8879189);
   data_mc_ratio__123->SetBinContent(19,0.6005275);
   data_mc_ratio__123->SetBinContent(20,0.3052089);
   data_mc_ratio__123->SetBinContent(21,0.6924687);
   data_mc_ratio__123->SetBinContent(22,0.4950838);
   data_mc_ratio__123->SetBinContent(23,0.5750372);
   data_mc_ratio__123->SetBinContent(24,1.385384);
   data_mc_ratio__123->SetBinContent(25,0.2466165);
   data_mc_ratio__123->SetBinContent(26,1.150214);
   data_mc_ratio__123->SetBinContent(27,0.2441246);
   data_mc_ratio__123->SetBinContent(28,1.408188);
   data_mc_ratio__123->SetBinContent(29,1.362579);
   data_mc_ratio__123->SetBinContent(30,4.463835);
   data_mc_ratio__123->SetBinContent(31,1.248047);
   data_mc_ratio__123->SetBinError(1,0.009335799);
   data_mc_ratio__123->SetBinError(2,0.004526898);
   data_mc_ratio__123->SetBinError(3,0.005133628);
   data_mc_ratio__123->SetBinError(4,0.004756717);
   data_mc_ratio__123->SetBinError(5,0.005518736);
   data_mc_ratio__123->SetBinError(6,0.008318567);
   data_mc_ratio__123->SetBinError(7,0.006218764);
   data_mc_ratio__123->SetBinError(8,0.007912785);
   data_mc_ratio__123->SetBinError(9,0.006783368);
   data_mc_ratio__123->SetBinError(10,0.006110227);
   data_mc_ratio__123->SetBinError(11,0.007032542);
   data_mc_ratio__123->SetBinError(12,0.005755128);
   data_mc_ratio__123->SetBinError(13,0.006301351);
   data_mc_ratio__123->SetBinError(14,0.007390109);
   data_mc_ratio__123->SetBinError(15,0.01284883);
   data_mc_ratio__123->SetBinError(16,0.01264028);
   data_mc_ratio__123->SetBinError(17,0.01407829);
   data_mc_ratio__123->SetBinError(18,0.02400658);
   data_mc_ratio__123->SetBinError(19,0.01806557);
   data_mc_ratio__123->SetBinError(20,0.01062601);
   data_mc_ratio__123->SetBinError(21,0.02433087);
   data_mc_ratio__123->SetBinError(22,0.01986703);
   data_mc_ratio__123->SetBinError(23,0.02543815);
   data_mc_ratio__123->SetBinError(24,0.0681703);
   data_mc_ratio__123->SetBinError(25,0.01503648);
   data_mc_ratio__123->SetBinError(26,0.08053112);
   data_mc_ratio__123->SetBinError(27,0.01861433);
   data_mc_ratio__123->SetBinError(28,0.1324712);
   data_mc_ratio__123->SetBinError(29,0.1542817);
   data_mc_ratio__123->SetBinError(30,0.6442991);
   data_mc_ratio__123->SetBinError(31,0.6649097);
   data_mc_ratio__123->SetMinimum(0.4);
   data_mc_ratio__123->SetMaximum(1.6);
   data_mc_ratio__123->SetEntries(125.0272);
   data_mc_ratio__123->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__123->SetLineColor(ci);
   data_mc_ratio__123->SetLineWidth(2);
   data_mc_ratio__123->SetMarkerStyle(20);
   data_mc_ratio__123->SetMarkerSize(1.2);
   data_mc_ratio__123->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__123->GetXaxis()->SetRange(1,30);
   data_mc_ratio__123->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__123->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__123->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__123->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__123->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__123->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__123->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__123->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__123->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__123->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__123->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__123->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__123->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__123->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__123->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__123->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__123->Draw("E1");
   
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
   0.1458551,
   0.1155023,
   0.1096253,
   0.1163087,
   0.1368068,
   0.1216057,
   0.1288861,
   0.21129,
   0.2065472,
   0.2768794,
   0.2239369,
   0.2459731,
   0.2255057,
   0.2630406,
   0.1971716,
   0.2079805,
   0.2496224,
   0.293263,
   0.2502456,
   0.5653694,
   0.3813983,
   0.3586017,
   0.4955072,
   0.239758,
   0.4924971,
   0.2757901,
   0.621244,
   0.374242,
   0.2957539,
   0.3389155};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1090,Graph_from_mc_statistical_error_fy1090,Graph_from_mc_statistical_error_fex1090,Graph_from_mc_statistical_error_fey1090);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1090 = new TH1F("Graph_Graph_from_mc_statistical_error1090","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1090->SetMinimum(0.2545072);
   Graph_Graph_from_mc_statistical_error1090->SetMaximum(1.745493);
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
