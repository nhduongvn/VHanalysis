void H_dR_Bj1_both_16()
{
//=========Macro generated from canvas: H_dR_Bj1_both_16/H_dR_Bj1_both_16
//=========  (Thu Aug 10 10:43:20 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_both_16 = new TCanvas("H_dR_Bj1_both_16", "H_dR_Bj1_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_both_16->SetHighLightColor(2);
   H_dR_Bj1_both_16->Range(0,0,1,1);
   H_dR_Bj1_both_16->SetFillColor(0);
   H_dR_Bj1_both_16->SetFillStyle(4000);
   H_dR_Bj1_both_16->SetBorderMode(0);
   H_dR_Bj1_both_16->SetBorderSize(2);
   H_dR_Bj1_both_16->SetFrameFillStyle(1000);
   H_dR_Bj1_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.861013,6.314516,12.05623);
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
   st->SetMaximum(1.076977e+10);
   
   TH1F *st_stack_237 = new TH1F("st_stack_237","",30,0,6);
   st_stack_237->SetMinimum(0.001425293);
   st_stack_237->SetMaximum(3.668661e+10);
   st_stack_237->SetDirectory(0);
   st_stack_237->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_237->SetLineColor(ci);
   st_stack_237->GetXaxis()->SetRange(1,30);
   st_stack_237->GetXaxis()->SetLabelFont(42);
   st_stack_237->GetXaxis()->SetLabelSize(0.035);
   st_stack_237->GetXaxis()->SetTitleSize(0.035);
   st_stack_237->GetXaxis()->SetTitleFont(42);
   st_stack_237->GetYaxis()->SetTitle("Events/0.2");
   st_stack_237->GetYaxis()->SetLabelFont(42);
   st_stack_237->GetYaxis()->SetLabelSize(0.05);
   st_stack_237->GetYaxis()->SetTitleSize(0.057);
   st_stack_237->GetYaxis()->SetTitleOffset(1.2);
   st_stack_237->GetYaxis()->SetTitleFont(42);
   st_stack_237->GetZaxis()->SetLabelFont(42);
   st_stack_237->GetZaxis()->SetLabelSize(0.035);
   st_stack_237->GetZaxis()->SetTitleSize(0.035);
   st_stack_237->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_237);
   
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(1,7359.343);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(2,30403.83);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(3,23726.59);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(4,15293.22);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(5,13095.44);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(6,12682.86);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(7,13440.67);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(8,7411.384);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(9,7656.889);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(10,9970.34);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(11,7214.942);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(12,4254.834);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(13,4511.13);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(14,4075.84);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(15,4547.927);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(16,4658.131);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(17,1329.07);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(18,1300.414);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(19,855.7147);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(20,224.1033);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(21,1547.245);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(22,731.4855);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(23,31.62721);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(24,44.36647);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(25,16.01533);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(26,3.780486);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(27,50.43049);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(28,6.575977);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(29,6.303362);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(1,802.5478);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(2,3192.853);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(3,3000.618);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(4,1556.852);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(5,1522.69);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(6,2383.883);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(7,2456.069);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(8,1100.936);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(9,1189.501);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(10,2316.473);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(11,1748.975);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(12,784.0079);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(13,867.6164);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(14,1525.578);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(15,1571.199);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(16,907.7305);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(17,396.5664);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(18,473.1916);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(19,386.5796);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(20,60.13942);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(21,1419.09);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(22,384.1893);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(23,12.48516);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(24,25.24612);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(25,9.44128);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(26,3.780486);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(27,32.88354);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(28,6.134584);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(29,6.120247);
   VbbHcc_both_H_dR_Bj1_stack_1->SetEntries(9914);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(1,41.34754);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(2,101.6116);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(3,102.674);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(4,96.75368);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(5,72.13972);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(6,59.90417);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(7,50.06664);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(8,37.29404);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(9,35.07059);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(10,30.93707);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(11,26.50949);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(12,25.45309);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(13,23.60354);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(14,23.85394);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(15,18.12287);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(16,16.94712);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(17,10.65597);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(18,6.283275);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(19,4.573265);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(20,3.395516);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(21,2.749001);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(22,0.7702414);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(23,0.5455074);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(24,0.6585145);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(25,0.2332494);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(26,0.09840903);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(27,0.05346223);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(28,0.3667711);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(29,0.05346223);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(1,2.675991);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(2,3.979464);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(3,3.962376);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(4,3.906851);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(5,3.298414);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(6,3.02092);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(7,2.808796);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(8,2.348165);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(9,2.376258);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(10,2.249476);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(11,1.989854);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(12,2.117172);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(13,1.999294);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(14,2.033477);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(15,1.689637);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(16,1.639486);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(17,1.294814);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(18,0.9693832);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(19,0.7942479);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(20,0.7161245);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(21,0.6525763);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(22,0.1932651);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(23,0.1650768);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(24,0.2994566);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(25,0.10459);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(26,0.06984572);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(27,0.05346223);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(28,0.2773024);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(29,0.05346223);
   VbbHcc_both_H_dR_Bj1_stack_2->SetEntries(9807);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_3 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(1,640.4941);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(2,1847.221);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(3,2129.901);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(4,1862.888);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(5,1529.485);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(6,1205.399);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(7,963.7021);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(8,773.2987);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(9,645.0156);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(10,546.3365);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(11,477.9777);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(12,418.878);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(13,374.4832);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(14,346.4746);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(15,311.0803);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(16,279.0637);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(17,161.6915);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(18,107.8133);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(19,70.31694);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(20,44.92178);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(21,34.48689);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(22,21.73822);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(23,14.84623);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(24,8.405364);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(25,5.127827);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(26,2.452572);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(27,2.301613);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(28,0.9829859);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(29,0.7417835);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(30,0.359605);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(31,0.5189877);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(1,6.45372);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(2,10.92185);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(3,11.75427);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(4,10.99146);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(5,9.956163);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(6,8.820935);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(7,7.889133);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(8,7.054415);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(9,6.437403);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(10,5.932704);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(11,5.547251);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(12,5.189919);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(13,4.908766);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(14,4.717974);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(15,4.468477);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(16,4.234325);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(17,3.228324);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(18,2.638136);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(19,2.118532);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(20,1.69895);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(21,1.494754);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(22,1.177126);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(23,0.9728448);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(24,0.7322502);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(25,0.5654562);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(26,0.3824237);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(27,0.3850916);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(28,0.250305);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(29,0.2119208);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(30,0.1608202);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(31,0.1773368);
   VbbHcc_both_H_dR_Bj1_stack_3->SetEntries(238439);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_4 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(1,114.2887);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(2,291.491);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(3,299.3478);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(4,238.1518);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(5,190.214);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(6,143.4168);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(7,137.8393);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(8,99.51447);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(9,84.45245);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(10,76.40197);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(11,60.23612);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(12,52.91184);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(13,61.67203);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(14,45.46553);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(15,52.21911);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(16,37.45435);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(17,24.8564);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(18,19.05343);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(19,8.859165);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(20,5.667888);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(21,7.166266);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(22,4.700244);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(23,1.381521);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(24,1.071592);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(25,0.445945);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(26,0.6472821);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(28,0.06661271);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(29,0.07817989);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(31,0.06661271);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(1,3.42717);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(2,9.943712);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(3,12.17074);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(4,12.46433);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(5,12.34623);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(6,10.3142);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(7,11.0176);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(8,8.444205);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(9,7.272656);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(10,7.517342);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(11,5.145438);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(12,4.452553);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(13,6.555494);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(14,4.28463);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(15,5.963765);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(16,3.34629);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(17,3.858812);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(18,4.389603);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(19,2.599611);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(20,0.9944521);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(21,3.446957);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(22,2.472271);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(23,0.4613635);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(24,0.4404766);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(25,0.1825456);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(26,0.3245621);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(28,0.06661271);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(29,0.07817989);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(31,0.06661271);
   VbbHcc_both_H_dR_Bj1_stack_4->SetEntries(15488);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_5 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(1,19.98254);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(2,31.65006);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(3,33.38653);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(4,19.36933);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(5,14.17707);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(6,7.606409);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(7,12.23104);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(8,4.239744);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(9,5.022296);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(10,13.16433);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(11,8.17345);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(12,5.254014);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(13,4.713866);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(14,7.396854);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(15,5.141992);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(16,2.960477);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(17,2.11155);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(18,0.9261829);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(19,1.019013);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(20,0.6400795);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(21,0.4649903);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(22,0.1359226);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(23,0.0836806);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(24,1.180443);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(25,0.07616006);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(26,0.008033872);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(28,0.07564673);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(1,1.682389);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(2,3.017519);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(3,6.819891);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(4,2.676647);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(5,1.976035);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(6,1.640672);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(7,2.349726);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(8,0.6910388);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(9,1.220912);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(10,6.362971);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(11,1.951633);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(12,1.562634);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(13,1.240862);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(14,1.9305);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(15,1.267809);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(16,0.573462);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(17,1.067289);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(18,0.2808749);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(19,0.425007);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(20,0.2341315);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(21,0.236019);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(22,0.08843406);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(23,0.0760459);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(24,1.042524);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(25,0.0756476);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(26,0.007781441);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(28,0.07564673);
   VbbHcc_both_H_dR_Bj1_stack_5->SetEntries(3431);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_6 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(2,0.1343693);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(3,0.2687386);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(4,0.1343693);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(5,0.2687386);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(8,0.1343693);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(10,0.2687386);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(14,0.1343693);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(15,0.1343693);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(2,0.1343693);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(3,0.1900269);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(4,0.1343693);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(5,0.1900269);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(8,0.1343693);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(10,0.1900269);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(14,0.1343693);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(15,0.1343693);
   VbbHcc_both_H_dR_Bj1_stack_6->SetEntries(11);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_7 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(1,0.5449062);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(2,1.307775);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(3,0.3269437);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(4,0.5449062);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(5,0.4359249);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(6,0.7628687);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(7,0.2179625);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(8,0.2179625);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(9,0.1089812);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(10,0.1089812);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(12,0.4359249);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(13,0.2179625);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(14,0.1089812);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(15,0.2179625);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(23,0.1089812);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(1,0.2436895);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(2,0.3775221);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(3,0.188761);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(4,0.2436895);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(5,0.2179625);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(6,0.2883373);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(7,0.1541227);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(8,0.1541227);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(9,0.1089812);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(10,0.1089812);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(12,0.2179625);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(13,0.1541227);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(14,0.1089812);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(15,0.1541227);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(23,0.1089812);
   VbbHcc_both_H_dR_Bj1_stack_7->SetEntries(52);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_8 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(1,2.432072);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(2,8.755457);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(3,5.350557);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(4,5.350557);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(5,2.675279);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(6,3.161693);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(7,2.188864);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(8,1.70245);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(9,1.459243);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(10,1.216036);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(11,1.459243);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(12,0.9728286);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(13,0.9728286);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(14,1.459243);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(15,1.70245);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(16,0.9728286);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(17,0.2432072);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(18,0.2432072);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(20,0.2432072);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(1,0.7690885);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(2,1.459243);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(3,1.140743);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(4,1.140743);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(5,0.8066269);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(6,0.8768959);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(7,0.7296215);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(8,0.6434656);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(9,0.5957334);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(10,0.5438277);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(11,0.5957334);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(12,0.4864143);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(13,0.4864143);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(14,0.5957334);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(15,0.6434656);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(16,0.4864143);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(17,0.2432072);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(18,0.2432072);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(20,0.2432072);
   VbbHcc_both_H_dR_Bj1_stack_8->SetEntries(175);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_9 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(1,1.942098);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(2,6.810512);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(3,7.127957);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(4,5.39102);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(5,3.550116);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(6,2.542332);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(7,1.860311);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(8,1.5193);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(9,1.369588);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(10,1.200469);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(11,1.078481);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(12,0.9911492);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(13,0.9370865);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(14,0.8663891);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(15,0.8650029);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(16,0.7374704);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(17,0.3950734);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(18,0.2023885);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(19,0.1219876);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(20,0.08455958);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(21,0.05822135);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(22,0.02356578);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(23,0.01940712);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(24,0.004158668);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(25,0.004158668);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(26,0.00554489);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(27,0.002772445);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(29,0.001386223);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(30,0.001386223);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(1,0.05188622);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(2,0.09716422);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(3,0.09940289);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(4,0.0864474);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(5,0.07015163);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(6,0.0593653);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(7,0.05078193);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(8,0.04589213);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(9,0.0435724);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(10,0.04079359);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(11,0.03866542);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(12,0.03706688);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(13,0.03604179);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(14,0.03465556);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(15,0.03462783);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(16,0.0319734);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(17,0.02340213);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(18,0.01674979);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(19,0.01300392);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(20,0.01082674);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(21,0.008983749);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(22,0.005715542);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(23,0.00518677);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(24,0.002401008);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(25,0.002401008);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(26,0.002772445);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(27,0.001960415);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(29,0.001386223);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(30,0.001386223);
   VbbHcc_both_H_dR_Bj1_stack_9->SetEntries(28649);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_10 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(1,0.897269);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(2,3.039229);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(3,3.380909);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(4,2.539271);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(5,1.715219);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(6,1.128764);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(7,0.8559946);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(8,0.7289413);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(9,0.6349075);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(10,0.5046241);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(11,0.4723224);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(12,0.4220753);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(13,0.3556774);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(14,0.3398855);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(15,0.3047125);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(16,0.287485);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(17,0.1496645);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(18,0.08577891);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(19,0.04809362);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(20,0.02799479);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(21,0.02332899);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(22,0.01148504);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(23,0.006460337);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(24,0.005383614);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(25,0.00143563);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(26,0.001076723);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(27,0.002153446);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(28,0.0007178152);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(31,0.0007178152);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(1,0.01794538);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(2,0.0330273);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(3,0.03483438);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(4,0.0301888);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(5,0.02481139);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(6,0.02012764);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(7,0.01752778);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(8,0.01617475);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(9,0.01509547);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(10,0.01345784);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(11,0.01301999);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(12,0.01230797);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(13,0.01129847);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(14,0.01104479);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(15,0.01045771);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(16,0.01015778);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(17,0.0073291);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(18,0.005548577);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(19,0.004154656);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(20,0.003169786);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(21,0.002893605);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(22,0.002030288);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(23,0.001522716);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(24,0.001390043);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(25,0.0007178152);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(26,0.0006216462);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(27,0.0008791405);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(28,0.000507572);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(31,0.000507572);
   VbbHcc_both_H_dR_Bj1_stack_10->SetEntries(50073);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_11 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(1,0.005470015);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(2,0.01367504);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(3,0.02188006);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(4,0.01094003);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(5,0.008205022);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(6,0.008205022);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(7,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(9,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(10,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(11,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(12,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(13,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(14,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(15,0.005470015);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(16,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(21,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(1,0.003867885);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(2,0.006115663);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(3,0.007735769);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(4,0.005470015);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(5,0.004737172);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(6,0.004737172);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(7,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(9,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(10,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(11,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(12,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(13,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(14,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(15,0.003867885);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(16,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(21,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_12 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(1,0.0007145317);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(2,0.008931646);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(3,0.01000344);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(4,0.006788051);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(5,0.006073519);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(6,0.003215393);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(7,0.003572658);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(8,0.001786329);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(9,0.001429063);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(10,0.001071798);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(11,0.0007145317);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(12,0.001786329);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(13,0.0007145317);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(15,0.001786329);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(16,0.0003572658);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(1,0.0005052502);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(2,0.001786329);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(3,0.001890473);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(4,0.001557286);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(5,0.001473045);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(6,0.001071798);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(7,0.001129774);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(8,0.0007988707);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(9,0.0007145317);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(10,0.0006188026);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(11,0.0005052502);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(12,0.0007988707);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(13,0.0005052502);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(15,0.0007988707);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(16,0.0003572658);
   VbbHcc_both_H_dR_Bj1_stack_12->SetEntries(137);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR_Bj1__650 = new TH1D("VbbHcc_both_H_dR_Bj1__650","",30,0,6);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(1,6922);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(2,15872);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(3,14326);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(4,11081);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(5,8796);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(6,7083);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(7,5737);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(8,4812);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(9,4056);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(10,3594);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(11,3209);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(12,2947);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(13,2748);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(14,2686);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(15,2411);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(16,2208);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(17,1282);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(18,922);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(19,627);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(20,442);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(21,338);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(22,206);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(23,149);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(24,99);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(25,52);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(26,34);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(27,16);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(28,12);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(29,2);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(30,4);
   VbbHcc_both_H_dR_Bj1__650->SetBinContent(31,8);
   VbbHcc_both_H_dR_Bj1__650->SetEntries(102710);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1__650->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1__650->SetLineWidth(2);
   VbbHcc_both_H_dR_Bj1__650->SetMarkerStyle(20);
   VbbHcc_both_H_dR_Bj1__650->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_Bj1__650->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1__650->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__650->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__650->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__650->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__650->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__650->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__650->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__650->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1__650->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__650->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__650->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__650->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__650->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__650->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fx1473[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fy1473[30] = {
   8181.279,
   32695.88,
   26308.39,
   17524.36,
   14910.11,
   14106.8,
   14609.64,
   8330.036,
   8430.027,
   10640.48,
   7790.853,
   4760.157,
   4978.09,
   4501.942,
   4937.723,
   4996.557,
   1529.173,
   1435.022,
   940.6531,
   279.0843,
   1592.197,
   758.8651,
   48.619,
   55.69193,
   21.9041,
   6.993404,
   52.79049,
   8.068711,
   7.178174,
   0.3609912};
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fex1473[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fey1473[30] = {
   802.5877,
   3192.891,
   3000.676,
   1556.948,
   1522.778,
   2383.924,
   2456.109,
   1100.994,
   1189.544,
   2316.502,
   1748.994,
   784.0424,
   867.6584,
   1525.594,
   1571.219,
   907.7484,
   396.602,
   473.2205,
   386.5952,
   60.17684,
   1419.096,
   384.1991,
   12.5333,
   25.28386,
   9.460841,
   3.814264,
   32.88584,
   6.146774,
   6.124648,
   0.1608262};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_Bj1_fx1473,Graph_from_VbbHcc_both_H_dR_Bj1_fy1473,Graph_from_VbbHcc_both_H_dR_Bj1_fex1473,Graph_from_VbbHcc_both_H_dR_Bj1_fey1473);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_Bj11473 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_Bj11473","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->SetMinimum(0.1801485);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->SetMaximum(39477.62);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_Bj11473);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR_Bj1","MC unc. (stat.)","fl");

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
   H_dR_Bj1_both_16->cd();
  
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
   
   TH1D *data_mc_ratio__651 = new TH1D("data_mc_ratio__651","",30,0,6);
   data_mc_ratio__651->SetBinContent(1,0.846078);
   data_mc_ratio__651->SetBinContent(2,0.4854435);
   data_mc_ratio__651->SetBinContent(3,0.5445411);
   data_mc_ratio__651->SetBinContent(4,0.6323199);
   data_mc_ratio__651->SetBinContent(5,0.5899351);
   data_mc_ratio__651->SetBinContent(6,0.5020984);
   data_mc_ratio__651->SetBinContent(7,0.3926859);
   data_mc_ratio__651->SetBinContent(8,0.5776686);
   data_mc_ratio__651->SetBinContent(9,0.4811373);
   data_mc_ratio__651->SetBinContent(10,0.3377666);
   data_mc_ratio__651->SetBinContent(11,0.4118933);
   data_mc_ratio__651->SetBinContent(12,0.6190972);
   data_mc_ratio__651->SetBinContent(13,0.5520189);
   data_mc_ratio__651->SetBinContent(14,0.5966314);
   data_mc_ratio__651->SetBinContent(15,0.4882818);
   data_mc_ratio__651->SetBinContent(16,0.4419043);
   data_mc_ratio__651->SetBinContent(17,0.8383614);
   data_mc_ratio__651->SetBinContent(18,0.642499);
   data_mc_ratio__651->SetBinContent(19,0.6665581);
   data_mc_ratio__651->SetBinContent(20,1.583751);
   data_mc_ratio__651->SetBinContent(21,0.2122853);
   data_mc_ratio__651->SetBinContent(22,0.271458);
   data_mc_ratio__651->SetBinContent(23,3.064646);
   data_mc_ratio__651->SetBinContent(24,1.777636);
   data_mc_ratio__651->SetBinContent(25,2.373984);
   data_mc_ratio__651->SetBinContent(26,4.861724);
   data_mc_ratio__651->SetBinContent(27,0.3030849);
   data_mc_ratio__651->SetBinContent(28,1.487226);
   data_mc_ratio__651->SetBinContent(29,0.2786224);
   data_mc_ratio__651->SetBinContent(30,11.0806);
   data_mc_ratio__651->SetBinContent(31,13.64447);
   data_mc_ratio__651->SetBinError(1,0.01016938);
   data_mc_ratio__651->SetBinError(2,0.003853212);
   data_mc_ratio__651->SetBinError(3,0.004549547);
   data_mc_ratio__651->SetBinError(4,0.006006858);
   data_mc_ratio__651->SetBinError(5,0.006290159);
   data_mc_ratio__651->SetBinError(6,0.005965958);
   data_mc_ratio__651->SetBinError(7,0.005184452);
   data_mc_ratio__651->SetBinError(8,0.008327525);
   data_mc_ratio__651->SetBinError(9,0.007554749);
   data_mc_ratio__651->SetBinError(10,0.005634141);
   data_mc_ratio__651->SetBinError(11,0.007271096);
   data_mc_ratio__651->SetBinError(12,0.0114043);
   data_mc_ratio__651->SetBinError(13,0.01053042);
   data_mc_ratio__651->SetBinError(14,0.01151206);
   data_mc_ratio__651->SetBinError(15,0.009944247);
   data_mc_ratio__651->SetBinError(16,0.009404348);
   data_mc_ratio__651->SetBinError(17,0.02341463);
   data_mc_ratio__651->SetBinError(18,0.02115958);
   data_mc_ratio__651->SetBinError(19,0.02661977);
   data_mc_ratio__651->SetBinError(20,0.07533134);
   data_mc_ratio__651->SetBinError(21,0.0115468);
   data_mc_ratio__651->SetBinError(22,0.01891337);
   data_mc_ratio__651->SetBinError(23,0.2510656);
   data_mc_ratio__651->SetBinError(24,0.1786592);
   data_mc_ratio__651->SetBinError(25,0.3292124);
   data_mc_ratio__651->SetBinError(26,0.8337788);
   data_mc_ratio__651->SetBinError(27,0.07577122);
   data_mc_ratio__651->SetBinError(28,0.4293253);
   data_mc_ratio__651->SetBinError(29,0.1970158);
   data_mc_ratio__651->SetBinError(30,5.540301);
   data_mc_ratio__651->SetBinError(31,6.534964);
   data_mc_ratio__651->SetMinimum(0.4);
   data_mc_ratio__651->SetMaximum(1.6);
   data_mc_ratio__651->SetEntries(21.35261);
   data_mc_ratio__651->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__651->SetLineColor(ci);
   data_mc_ratio__651->SetLineWidth(2);
   data_mc_ratio__651->SetMarkerStyle(20);
   data_mc_ratio__651->SetMarkerSize(1.2);
   data_mc_ratio__651->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__651->GetXaxis()->SetRange(1,30);
   data_mc_ratio__651->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__651->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__651->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__651->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__651->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__651->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__651->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__651->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__651->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__651->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__651->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__651->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__651->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__651->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__651->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__651->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__651->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1474[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1474[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1474[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1474[30] = {
   0.09810052,
   0.09765425,
   0.1140578,
   0.08884483,
   0.1021305,
   0.1689912,
   0.1681156,
   0.1321715,
   0.1411079,
   0.2177065,
   0.2244932,
   0.1647093,
   0.1742954,
   0.3388747,
   0.3182071,
   0.1816748,
   0.2593571,
   0.3297654,
   0.4109859,
   0.2156224,
   0.8912816,
   0.5062811,
   0.257786,
   0.453995,
   0.4319209,
   0.5454087,
   0.6229501,
   0.7618037,
   0.8532319,
   0.4455128};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1474,Graph_from_mc_statistical_error_fy1474,Graph_from_mc_statistical_error_fex1474,Graph_from_mc_statistical_error_fey1474);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1474 = new TH1F("Graph_Graph_from_mc_statistical_error1474","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1474->SetMinimum(0.0978466);
   Graph_Graph_from_mc_statistical_error1474->SetMaximum(2.069538);
   Graph_Graph_from_mc_statistical_error1474->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1474->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1474->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1474->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1474->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1474->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1474->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1474->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1474->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1474->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1474);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_both_16->cd();
   H_dR_Bj1_both_16->Modified();
   H_dR_Bj1_both_16->cd();
   H_dR_Bj1_both_16->SetSelected(H_dR_Bj1_both_16);
}
