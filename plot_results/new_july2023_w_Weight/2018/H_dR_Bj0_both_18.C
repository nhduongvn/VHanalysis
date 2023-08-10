void H_dR_Bj0_both_18()
{
//=========Macro generated from canvas: H_dR_Bj0_both_18/H_dR_Bj0_both_18
//=========  (Thu Aug 10 12:25:01 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_both_18 = new TCanvas("H_dR_Bj0_both_18", "H_dR_Bj0_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_both_18->SetHighLightColor(2);
   H_dR_Bj0_both_18->Range(0,0,1,1);
   H_dR_Bj0_both_18->SetFillColor(0);
   H_dR_Bj0_both_18->SetFillStyle(4000);
   H_dR_Bj0_both_18->SetBorderMode(0);
   H_dR_Bj0_both_18->SetBorderSize(2);
   H_dR_Bj0_both_18->SetFrameFillStyle(1000);
   H_dR_Bj0_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-106.9158,6.314516,106818.9);
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
   st->SetMaximum(91548.89);
   
   TH1F *st_stack_235 = new TH1F("st_stack_235","",30,0,6);
   st_stack_235->SetMinimum(0.01);
   st_stack_235->SetMaximum(96126.33);
   st_stack_235->SetDirectory(0);
   st_stack_235->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_235->SetLineColor(ci);
   st_stack_235->GetXaxis()->SetRange(1,30);
   st_stack_235->GetXaxis()->SetLabelFont(42);
   st_stack_235->GetXaxis()->SetLabelSize(0.035);
   st_stack_235->GetXaxis()->SetTitleSize(0.035);
   st_stack_235->GetXaxis()->SetTitleFont(42);
   st_stack_235->GetYaxis()->SetTitle("Events/0.2");
   st_stack_235->GetYaxis()->SetLabelFont(42);
   st_stack_235->GetYaxis()->SetLabelSize(0.05);
   st_stack_235->GetYaxis()->SetTitleSize(0.057);
   st_stack_235->GetYaxis()->SetTitleOffset(1.2);
   st_stack_235->GetYaxis()->SetTitleFont(42);
   st_stack_235->GetZaxis()->SetLabelFont(42);
   st_stack_235->GetZaxis()->SetLabelSize(0.035);
   st_stack_235->GetZaxis()->SetTitleSize(0.035);
   st_stack_235->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_235);
   
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(1,8576.92);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(2,28911.74);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(3,27909.88);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(4,23041.23);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(5,23466.42);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(6,13442.72);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(7,14760.24);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(8,9851.077);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(9,10924.37);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(10,6107.974);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(11,8478.628);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(12,8900.12);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(13,7405.904);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(14,7306.132);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(15,3888.769);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(16,6263.718);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(17,3402.444);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(18,2489.218);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(19,1547.333);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(20,1011.076);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(21,468.5784);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(22,1006.143);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(23,455.8489);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(24,179.4765);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(25,58.55301);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(26,21.13443);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(27,20.37094);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(28,10.94896);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(29,31.578);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(1,1041.212);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(2,2189.625);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(3,2697.546);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(4,3004.213);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(5,2773.715);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(6,1586.11);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(7,1785.927);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(8,1286.219);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(9,1480.363);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(10,956.0723);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(11,1321.338);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(12,1275.215);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(13,1152.995);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(14,1206.45);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(15,461.0994);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(16,1021.071);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(17,580.3237);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(18,561.3436);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(19,406.0597);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(20,154.9882);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(21,99.7335);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(22,529.144);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(23,372.611);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(24,61.12312);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(25,35.27568);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(26,14.42465);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(27,14.40443);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(28,10.21404);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(29,31.578);
   VbbHcc_both_H_dR_Bj0_stack_1->SetEntries(10527);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(1,40.33855);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(2,137.7897);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(3,165.1966);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(4,148.6357);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(5,117.3076);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(6,100.1655);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(7,87.75738);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(8,77.77629);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(9,69.57135);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(10,69.85216);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(11,52.97617);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(12,52.44579);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(13,47.72088);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(14,48.78884);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(15,43.20055);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(16,43.17153);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(17,26.98497);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(18,19.42345);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(19,13.92166);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(20,7.97569);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(21,6.793103);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(22,3.518967);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(23,2.999642);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(24,1.817094);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(25,0.8048911);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(26,0.2989319);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(27,0.7598187);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(28,0.2144968);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(29,0.04982199);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(30,0.04982199);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(31,0.3911064);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(1,2.627609);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(2,4.728721);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(3,5.253526);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(4,5.02411);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(5,4.449049);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(6,4.050668);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(7,3.769704);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(8,3.620345);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(9,3.426338);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(10,3.558399);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(11,2.93199);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(12,2.996421);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(13,2.772367);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(14,2.836348);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(15,2.624489);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(16,2.659208);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(17,2.085271);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(18,1.847806);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(19,1.477163);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(20,0.9574839);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(21,0.9539001);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(22,0.656259);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(23,0.674164);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(24,0.4658553);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(25,0.3234686);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(26,0.1220385);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(27,0.4004866);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(28,0.1080541);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(29,0.04982199);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(30,0.04982199);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(31,0.2881446);
   VbbHcc_both_H_dR_Bj0_stack_2->SetEntries(15109);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_3 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(1,699.0618);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(2,2819.414);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(3,3509.277);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(4,3121.581);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(5,2596.009);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(6,2130.283);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(7,1777.914);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(8,1519.879);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(9,1334.263);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(10,1185.937);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(11,1070.114);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(12,967.7796);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(13,912.1409);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(14,842.3683);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(15,803.1853);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(16,719.8805);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(17,443.8577);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(18,302.8452);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(19,199.1503);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(20,134.6858);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(21,92.49977);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(22,60.19279);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(23,40.8765);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(24,24.12728);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(25,14.73382);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(26,9.118444);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(27,5.096021);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(28,2.865941);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(29,1.959714);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(30,1.314197);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(31,1.421705);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(1,7.10724);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(2,14.27957);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(3,15.94752);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(4,15.03399);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(5,13.70445);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(6,12.4106);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(7,11.33267);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(8,10.47635);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(9,9.816752);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(10,9.249191);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(11,8.790329);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(12,8.360193);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(13,8.117621);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(14,7.804739);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(15,7.62357);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(16,7.210454);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(17,5.661971);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(18,4.676208);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(19,3.787707);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(20,3.115072);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(21,2.583156);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(22,2.076818);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(23,1.713872);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(24,1.319644);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(25,1.024392);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(26,0.8093166);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(27,0.6092278);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(28,0.4517526);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(29,0.3752831);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(30,0.3100266);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(31,0.3218448);
   VbbHcc_both_H_dR_Bj0_stack_3->SetEntries(383737);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_4 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(1,150.5089);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(2,439.6695);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(3,475.106);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(4,345.4548);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(5,273.5542);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(6,214.5962);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(7,177.7191);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(8,153.1401);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(9,162.3766);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(10,135.4999);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(11,123.5266);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(12,113.9478);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(13,105.3167);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(14,112.53);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(15,127.8459);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(16,103.1695);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(17,63.30961);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(18,33.78787);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(19,23.47961);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(20,16.80695);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(21,10.80772);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(22,9.581314);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(23,2.761456);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(24,2.66184);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(25,1.997915);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(26,0.2183513);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(27,1.225954);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(28,0.1257783);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(30,0.1257783);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(31,0.2515567);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(1,6.745468);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(2,14.02187);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(3,15.69021);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(4,13.55454);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(5,10.99428);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(6,10.62549);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(7,9.202375);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(8,8.727383);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(9,11.82229);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(10,7.550213);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(11,7.278105);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(12,7.929096);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(13,6.70827);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(14,6.912383);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(15,10.50919);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(16,5.3636);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(17,6.857704);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(18,3.036005);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(19,2.533624);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(20,2.284387);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(21,1.820621);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(22,1.841293);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(23,0.8617955);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(24,0.8490819);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(25,0.9280307);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(26,0.1561728);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(27,0.7475161);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(28,0.1257783);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(30,0.1257783);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(31,0.1778774);
   VbbHcc_both_H_dR_Bj0_stack_4->SetEntries(19219);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_5 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(1,14.47461);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(2,41.18566);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(3,39.75456);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(4,37.1602);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(5,26.14575);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(6,26.59355);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(7,15.49471);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(8,17.13476);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(9,17.38613);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(10,13.88404);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(11,11.84925);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(12,15.21972);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(13,14.26784);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(14,11.14885);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(15,10.36688);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(16,14.94272);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(17,6.167977);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(18,4.858726);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(19,3.764355);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(20,1.264481);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(21,1.889674);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(22,0.5268248);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(23,0.3787758);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(24,0.1395572);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(25,0.04495706);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(26,0.391019);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(29,0.01224321);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(31,0.01224321);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(1,2.19055);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(2,11.12368);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(3,4.859675);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(4,5.588984);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(5,3.604686);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(6,5.355652);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(7,1.710631);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(8,3.364598);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(9,4.341077);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(10,3.773257);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(11,2.495187);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(12,3.816702);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(13,3.235571);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(14,2.477047);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(15,1.388585);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(16,3.80302);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(17,2.232412);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(18,1.007025);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(19,2.158597);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(20,0.4677212);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(21,0.6371004);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(22,0.3164752);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(23,0.3787758);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(24,0.1269934);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(25,0.04495706);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(26,0.3789736);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(29,0.01224321);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(31,0.01224321);
   VbbHcc_both_H_dR_Bj0_stack_5->SetEntries(2591);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_6 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(2,0.4520427);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(3,0.4520427);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(7,0.4520427);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(15,0.4520427);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(16,0.4520427);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(2,0.4520427);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(3,0.4520427);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(7,0.4520427);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(15,0.4520427);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(16,0.4520427);
   VbbHcc_both_H_dR_Bj0_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_7 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(1,2.479394);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(2,2.833593);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(3,0.7083982);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(4,1.062597);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(5,0.7083982);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(6,0.3541991);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(7,0.7083982);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(8,0.3541991);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(9,0.7083982);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(13,0.7083982);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(15,0.7083982);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(16,0.3541991);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(1,0.9371228);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(2,1.001826);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(3,0.5009132);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(4,0.6134909);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(5,0.5009132);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(6,0.3541991);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(7,0.5009132);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(8,0.3541991);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(9,0.5009132);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(13,0.5009132);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(15,0.5009132);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(16,0.3541991);
   VbbHcc_both_H_dR_Bj0_stack_7->SetEntries(33);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_8 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(1,3.352972);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(2,12.85306);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(3,11.17657);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(4,7.264773);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(5,2.514729);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(6,2.235315);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(7,3.911801);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(8,1.9559);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(9,2.794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(10,3.632387);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(11,1.676486);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(12,1.676486);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(13,2.235315);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(14,1.676486);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(15,1.9559);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(16,1.676486);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(17,0.2794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(18,1.117657);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(19,0.2794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(20,0.2794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(22,0.2794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(1,0.9679197);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(2,1.89508);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(3,1.767172);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(4,1.424739);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(5,0.8382431);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(6,0.7903031);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(7,1.045473);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(8,0.7392609);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(9,0.8835858);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(10,1.007443);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(11,0.6844226);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(12,0.6844226);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(13,0.7903031);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(14,0.6844226);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(15,0.7392609);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(16,0.6844226);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(17,0.2794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(18,0.5588287);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(19,0.2794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(20,0.2794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(22,0.2794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetEntries(232);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_9 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(1,2.717791);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(2,11.83119);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(3,10.95117);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(4,7.289348);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(5,4.46184);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(6,3.147517);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(7,2.548643);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(8,2.308636);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(9,2.14406);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(10,2.08463);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(11,2.050343);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(12,2.038915);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(13,1.924626);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(14,1.853766);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(15,1.945198);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(16,1.77605);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(17,0.9531697);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(18,0.5394438);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(19,0.3177232);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(20,0.1737192);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(21,0.1051458);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(22,0.09371692);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(23,0.02514357);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(24,0.01828623);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(25,0.01828623);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(26,0.01828623);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(28,0.004571557);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(29,0.002285779);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(30,0.002285779);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(31,0.002285779);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(1,0.07881794);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(2,0.164449);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(3,0.1582149);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(4,0.1290807);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(5,0.100989);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(6,0.08482056);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(7,0.07632584);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(8,0.07264318);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(9,0.07000605);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(10,0.069029);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(11,0.06845898);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(12,0.06826791);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(13,0.06632698);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(14,0.06509455);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(15,0.06668052);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(16,0.06371544);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(17,0.04667692);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(18,0.0351148);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(19,0.02694893);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(20,0.01992696);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(21,0.01550291);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(22,0.01463612);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(23,0.00758107);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(24,0.006465158);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(25,0.006465158);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(26,0.006465158);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(28,0.003232579);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(29,0.002285779);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(30,0.002285779);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(31,0.002285779);
   VbbHcc_both_H_dR_Bj0_stack_9->SetEntries(27714);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_10 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(1,0.9907857);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(2,4.587613);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(3,5.367453);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(4,4.069512);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(5,2.697471);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(6,1.931375);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(7,1.474825);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(8,1.237586);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(9,1.119265);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(10,0.9949688);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(11,0.8772457);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(12,0.8276467);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(13,0.7523517);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(14,0.7469735);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(15,0.6878132);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(16,0.6429948);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(17,0.3615352);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(18,0.22708);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(19,0.1302722);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(20,0.0735022);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(21,0.04720873);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(22,0.02509831);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(23,0.02151284);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(24,0.01195158);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(25,0.006573367);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(26,0.004780631);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(27,0.002390315);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(28,0.001792736);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(29,0.001792736);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(31,0.001195158);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(1,0.02433254);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(2,0.05235896);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(3,0.05663459);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(4,0.04931383);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(5,0.04014912);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(6,0.03397276);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(7,0.0296871);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(8,0.02719476);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(9,0.02586212);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(10,0.02438385);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(11,0.02289593);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(12,0.02223925);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(13,0.02120353);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(14,0.0211276);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(15,0.02027369);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(16,0.01960204);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(17,0.0146985);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(18,0.01164896);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(19,0.008823146);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(20,0.00662747);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(21,0.005311397);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(22,0.003872753);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(23,0.003585473);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(24,0.002672454);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(25,0.001981945);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(26,0.001690208);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(27,0.001195158);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(28,0.001035037);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(29,0.001035037);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(31,0.0008451041);
   VbbHcc_both_H_dR_Bj0_stack_10->SetEntries(50073);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_11 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(1,0.01839453);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(2,0.03153347);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(3,0.01839453);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(4,0.01839453);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(5,0.0236501);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(6,0.01839453);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(7,0.01313895);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(8,0.005255579);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(9,0.01051116);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(10,0.002627789);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(11,0.005255579);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(12,0.002627789);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(13,0.005255579);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(15,0.002627789);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(16,0.002627789);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(26,0.002627789);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(1,0.006952477);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(2,0.00910293);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(3,0.006952477);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(4,0.006952477);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(5,0.007883368);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(6,0.006952477);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(7,0.005875916);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(8,0.003716255);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(9,0.005255579);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(10,0.002627789);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(11,0.003716255);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(12,0.002627789);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(13,0.003716255);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(15,0.002627789);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(16,0.002627789);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(26,0.002627789);
   VbbHcc_both_H_dR_Bj0_stack_11->SetEntries(69);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_12 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(1,0.003595882);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(2,0.01378421);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(3,0.01678078);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(4,0.01468318);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(5,0.01018833);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(6,0.00839039);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(7,0.005393822);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(8,0.006292793);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(9,0.002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(10,0.002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(11,0.002397254);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(12,0.002397254);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(13,0.002097598);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(14,0.001198627);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(15,0.002097598);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(16,0.0002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(17,0.002097598);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(18,0.0002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(19,0.0005993136);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(20,0.0002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(1,0.001038042);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(2,0.002032371);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(3,0.002242426);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(4,0.002097598);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(5,0.001747284);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(6,0.001585635);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(7,0.001271336);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(8,0.0013732);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(9,0.000947598);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(10,0.000947598);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(11,0.0008475574);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(12,0.0008475574);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(13,0.0007928174);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(14,0.0005993136);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(15,0.0007928174);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(16,0.0002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(17,0.0007928174);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(18,0.0002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(19,0.0004237787);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(20,0.0002996568);
   VbbHcc_both_H_dR_Bj0_stack_12->SetEntries(330);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR_Bj0__645 = new TH1D("VbbHcc_both_H_dR_Bj0__645","",30,0,6);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(1,11674);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(2,40820);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(3,41197);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(4,32437);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(5,26560);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(6,22477);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(7,19033);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(8,16569);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(9,15143);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(10,13630);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(11,12665);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(12,11736);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(13,11228);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(14,10712);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(15,10311);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(16,9594);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(17,6204);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(18,4275);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(19,2981);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(20,2135);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(21,1500);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(22,1058);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(23,687);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(24,423);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(25,263);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(26,211);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(27,92);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(28,66);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(29,37);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(30,18);
   VbbHcc_both_H_dR_Bj0__645->SetBinContent(31,31);
   VbbHcc_both_H_dR_Bj0__645->SetEntries(325796);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0__645->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0__645->SetLineWidth(2);
   VbbHcc_both_H_dR_Bj0__645->SetMarkerStyle(20);
   VbbHcc_both_H_dR_Bj0__645->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_Bj0__645->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0__645->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__645->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__645->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__645->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__645->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__645->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__645->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__645->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0__645->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__645->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__645->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__645->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__645->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__645->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fx1469[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fy1469[30] = {
   9490.867,
   32382.4,
   32127.9,
   26713.78,
   26489.86,
   15922.05,
   16828.24,
   11624.87,
   12514.75,
   7519.864,
   9741.705,
   10054.06,
   8490.978,
   8325.246,
   4879.122,
   7149.787,
   3944.36,
   2852.018,
   1788.376,
   1172.336,
   580.721,
   1080.361,
   502.912,
   208.2525,
   76.15945,
   31.18687,
   27.45512,
   14.16154,
   33.60385,
   1.492083};
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fex1469[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fey1469[30] = {
   1041.264,
   2189.751,
   2697.649,
   3004.291,
   2773.777,
   1586.209,
   1785.992,
   1286.301,
   1480.454,
   956.1614,
   1321.393,
   1275.276,
   1153.051,
   1206.501,
   461.2928,
   1021.122,
   580.3999,
   561.3755,
   406.0938,
   155.0403,
   99.79016,
   529.1519,
   372.6168,
   61.14517,
   35.30426,
   14.45366,
   14.44222,
   10.22537,
   31.58027,
   0.3382664};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_Bj0_fx1469,Graph_from_VbbHcc_both_H_dR_Bj0_fy1469,Graph_from_VbbHcc_both_H_dR_Bj0_fex1469,Graph_from_VbbHcc_both_H_dR_Bj0_fey1469);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_Bj01469 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_Bj01469","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->SetMinimum(1.038435);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->SetMaximum(38307.99);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01469->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_Bj01469);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR_Bj0","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj0_both_18->cd();
  
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
   
   TH1D *data_mc_ratio__646 = new TH1D("data_mc_ratio__646","",30,0,6);
   data_mc_ratio__646->SetBinContent(1,1.230025);
   data_mc_ratio__646->SetBinContent(2,1.260561);
   data_mc_ratio__646->SetBinContent(3,1.282281);
   data_mc_ratio__646->SetBinContent(4,1.214242);
   data_mc_ratio__646->SetBinContent(5,1.002648);
   data_mc_ratio__646->SetBinContent(6,1.41169);
   data_mc_ratio__646->SetBinContent(7,1.131015);
   data_mc_ratio__646->SetBinContent(8,1.425306);
   data_mc_ratio__646->SetBinContent(9,1.210012);
   data_mc_ratio__646->SetBinContent(10,1.812533);
   data_mc_ratio__646->SetBinContent(11,1.30008);
   data_mc_ratio__646->SetBinContent(12,1.16729);
   data_mc_ratio__646->SetBinContent(13,1.322345);
   data_mc_ratio__646->SetBinContent(14,1.286689);
   data_mc_ratio__646->SetBinContent(15,2.11329);
   data_mc_ratio__646->SetBinContent(16,1.341858);
   data_mc_ratio__646->SetBinContent(17,1.572879);
   data_mc_ratio__646->SetBinContent(18,1.498939);
   data_mc_ratio__646->SetBinContent(19,1.666875);
   data_mc_ratio__646->SetBinContent(20,1.821151);
   data_mc_ratio__646->SetBinContent(21,2.582996);
   data_mc_ratio__646->SetBinContent(22,0.9793024);
   data_mc_ratio__646->SetBinContent(23,1.366044);
   data_mc_ratio__646->SetBinContent(24,2.031188);
   data_mc_ratio__646->SetBinContent(25,3.453281);
   data_mc_ratio__646->SetBinContent(26,6.765668);
   data_mc_ratio__646->SetBinContent(27,3.350923);
   data_mc_ratio__646->SetBinContent(28,4.66051);
   data_mc_ratio__646->SetBinContent(29,1.101064);
   data_mc_ratio__646->SetBinContent(30,12.06367);
   data_mc_ratio__646->SetBinContent(31,14.90318);
   data_mc_ratio__646->SetBinError(1,0.01138424);
   data_mc_ratio__646->SetBinError(2,0.006239178);
   data_mc_ratio__646->SetBinError(3,0.006317576);
   data_mc_ratio__646->SetBinError(4,0.006741943);
   data_mc_ratio__646->SetBinError(5,0.006152256);
   data_mc_ratio__646->SetBinError(6,0.00941608);
   data_mc_ratio__646->SetBinError(7,0.008198131);
   data_mc_ratio__646->SetBinError(8,0.01107286);
   data_mc_ratio__646->SetBinError(9,0.009832949);
   data_mc_ratio__646->SetBinError(10,0.01552523);
   data_mc_ratio__646->SetBinError(11,0.01155228);
   data_mc_ratio__646->SetBinError(12,0.01077503);
   data_mc_ratio__646->SetBinError(13,0.01247939);
   data_mc_ratio__646->SetBinError(14,0.01243192);
   data_mc_ratio__646->SetBinError(15,0.02081176);
   data_mc_ratio__646->SetBinError(16,0.01369956);
   data_mc_ratio__646->SetBinError(17,0.01996914);
   data_mc_ratio__646->SetBinError(18,0.02292534);
   data_mc_ratio__646->SetBinError(19,0.03052967);
   data_mc_ratio__646->SetBinError(20,0.03941367);
   data_mc_ratio__646->SetBinError(21,0.06669267);
   data_mc_ratio__646->SetBinError(22,0.03010745);
   data_mc_ratio__646->SetBinError(23,0.05211784);
   data_mc_ratio__646->SetBinError(24,0.09875975);
   data_mc_ratio__646->SetBinError(25,0.2129384);
   data_mc_ratio__646->SetBinError(26,0.4657678);
   data_mc_ratio__646->SetBinError(27,0.3493579);
   data_mc_ratio__646->SetBinError(28,0.5736692);
   data_mc_ratio__646->SetBinError(29,0.1810138);
   data_mc_ratio__646->SetBinError(30,2.843435);
   data_mc_ratio__646->SetBinError(31,4.286734);
   data_mc_ratio__646->SetMinimum(0.4);
   data_mc_ratio__646->SetMaximum(1.6);
   data_mc_ratio__646->SetEntries(94.33205);
   data_mc_ratio__646->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__646->SetLineColor(ci);
   data_mc_ratio__646->SetLineWidth(2);
   data_mc_ratio__646->SetMarkerStyle(20);
   data_mc_ratio__646->SetMarkerSize(1.2);
   data_mc_ratio__646->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__646->GetXaxis()->SetRange(1,30);
   data_mc_ratio__646->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__646->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__646->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__646->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__646->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__646->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__646->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__646->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__646->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__646->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__646->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__646->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__646->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__646->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__646->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__646->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__646->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1470[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1470[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1470[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1470[30] = {
   0.1097123,
   0.06762162,
   0.08396592,
   0.1124622,
   0.1047109,
   0.09962339,
   0.1061306,
   0.1106507,
   0.1182967,
   0.1271514,
   0.1356429,
   0.1268419,
   0.1357972,
   0.1449207,
   0.09454423,
   0.1428185,
   0.1471468,
   0.1968345,
   0.227074,
   0.132249,
   0.1718384,
   0.4897918,
   0.7409185,
   0.2936107,
   0.4635572,
   0.4634535,
   0.5260303,
   0.7220524,
   0.9397811,
   0.2267075};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1470,Graph_from_mc_statistical_error_fy1470,Graph_from_mc_statistical_error_fex1470,Graph_from_mc_statistical_error_fey1470);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1470 = new TH1F("Graph_Graph_from_mc_statistical_error1470","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1470->SetMinimum(0.05419697);
   Graph_Graph_from_mc_statistical_error1470->SetMaximum(2.127737);
   Graph_Graph_from_mc_statistical_error1470->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1470->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1470->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1470->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1470->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1470->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1470->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1470->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1470->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1470->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1470);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_both_18->cd();
   H_dR_Bj0_both_18->Modified();
   H_dR_Bj0_both_18->cd();
   H_dR_Bj0_both_18->SetSelected(H_dR_Bj0_both_18);
}
