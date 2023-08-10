void H_dR_Bj1_both_18_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_both_18/H_dR_Bj1_both_18
//=========  (Thu Aug 10 12:32:57 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_both_18 = new TCanvas("H_dR_Bj1_both_18", "H_dR_Bj1_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_both_18->SetHighLightColor(2);
   H_dR_Bj1_both_18->Range(0,0,1,1);
   H_dR_Bj1_both_18->SetFillColor(0);
   H_dR_Bj1_both_18->SetFillStyle(4000);
   H_dR_Bj1_both_18->SetBorderMode(0);
   H_dR_Bj1_both_18->SetBorderSize(2);
   H_dR_Bj1_both_18->SetFrameFillStyle(1000);
   H_dR_Bj1_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.873578,6.314516,12.5092);
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
   st->SetMaximum(2.683039e+10);
   
   TH1F *st_stack_239 = new TH1F("st_stack_239","",30,0,6);
   st_stack_239->SetMinimum(0.001386133);
   st_stack_239->SetMaximum(9.352338e+10);
   st_stack_239->SetDirectory(0);
   st_stack_239->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_239->SetLineColor(ci);
   st_stack_239->GetXaxis()->SetRange(1,30);
   st_stack_239->GetXaxis()->SetLabelFont(42);
   st_stack_239->GetXaxis()->SetLabelSize(0.035);
   st_stack_239->GetXaxis()->SetTitleSize(0.035);
   st_stack_239->GetXaxis()->SetTitleFont(42);
   st_stack_239->GetYaxis()->SetTitle("Events/0.2");
   st_stack_239->GetYaxis()->SetLabelFont(42);
   st_stack_239->GetYaxis()->SetLabelSize(0.05);
   st_stack_239->GetYaxis()->SetTitleSize(0.057);
   st_stack_239->GetYaxis()->SetTitleOffset(1.2);
   st_stack_239->GetYaxis()->SetTitleFont(42);
   st_stack_239->GetZaxis()->SetLabelFont(42);
   st_stack_239->GetZaxis()->SetLabelSize(0.035);
   st_stack_239->GetZaxis()->SetTitleSize(0.035);
   st_stack_239->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_239);
   
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(1,13018.44);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(2,33032.4);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(3,28874.6);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(4,25765.74);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(5,19336.15);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(6,16595.57);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(7,12364.26);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(8,6627.324);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(9,8666.529);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(10,7203.466);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(11,9076.375);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(12,7050.385);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(13,5862.957);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(14,7779.283);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(15,6588.527);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(16,4001.122);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(17,1949.477);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(18,2541.144);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(19,582.3047);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(20,873.4306);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(21,1096.507);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(22,226.6137);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(23,209.8704);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(24,97.65282);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(25,121.2436);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(26,5.881228);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(27,377.2675);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(28,10.55304);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(29,10.09914);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(1,1245.167);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(2,2323.952);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(3,2193.307);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(4,2707.796);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(5,2453.561);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(6,2413.911);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(7,1576.091);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(8,896.9962);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(9,1273.445);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(10,1207.761);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(11,1421.735);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(12,1205.977);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(13,955.8043);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(14,2016.288);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(15,1146.308);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(16,779.484);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(17,223.7124);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(18,757.7346);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(19,114.4811);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(20,386.9824);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(21,531.9965);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(22,64.74237);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(23,74.09599);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(24,47.96941);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(25,57.30972);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(26,5.881228);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(27,370.6703);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(28,9.819279);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(29,9.794445);
   VbbHcc_both_H_dR_Bj1_stack_1->SetEntries(10726);

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
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(1,83.49262);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(2,183.2959);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(3,195.7433);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(4,161.355);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(5,123.7726);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(6,107.6902);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(7,85.6554);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(8,69.71927);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(9,59.97639);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(10,50.13189);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(11,46.12268);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(12,38.03054);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(13,38.29755);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(14,37.99485);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(15,31.98199);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(16,24.33497);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(17,13.94147);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(18,11.61858);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(19,6.707031);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(20,5.008235);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(21,4.351425);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(22,3.039545);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(23,1.250431);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(24,0.5469381);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(25,0.8723779);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(26,0.5730027);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(27,0.4481594);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(29,0.6200262);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(30,0.04860075);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(31,0.1033664);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(1,3.978906);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(2,5.520131);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(3,5.726962);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(4,5.306708);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(5,4.562389);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(6,4.347217);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(7,3.824688);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(8,3.432064);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(9,3.217515);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(10,2.888274);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(11,2.868194);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(12,2.518206);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(13,2.515105);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(14,2.578282);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(15,2.338133);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(16,1.905913);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(17,1.497833);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(18,1.301185);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(19,1.036971);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(20,0.810104);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(21,0.8172831);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(22,0.7478223);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(23,0.3726224);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(24,0.1650965);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(25,0.4440708);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(26,0.2963856);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(27,0.3138566);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(29,0.4076514);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(30,0.04860075);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(31,0.07322099);
   VbbHcc_both_H_dR_Bj1_stack_2->SetEntries(15898);

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
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(1,1211.244);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(2,3669.963);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(3,4025.804);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(4,3391.274);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(5,2736.668);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(6,2143.367);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(7,1720.052);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(8,1401.104);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(9,1157.691);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(10,1005.284);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(11,858.4266);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(12,762.9627);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(13,694.9025);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(14,617.3817);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(15,572.578);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(16,518.2053);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(17,296.8371);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(18,188.5075);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(19,132.0165);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(20,86.46366);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(21,57.15827);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(22,36.32776);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(23,24.52511);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(24,15.77496);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(25,9.384448);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(26,4.731379);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(27,3.747514);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(28,1.579896);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(29,1.7305);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(30,0.5960314);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(31,1.876067);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(1,8.664259);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(2,15.06946);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(3,15.80356);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(4,14.50656);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(5,13.02123);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(6,11.50374);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(7,10.30038);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(8,9.287389);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(9,8.442485);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(10,7.871736);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(11,7.270597);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(12,6.854188);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(13,6.549376);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(14,6.168831);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(15,5.941392);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(16,5.657321);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(17,4.274388);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(18,3.405913);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(19,2.845566);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(20,2.29887);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(21,1.874496);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(22,1.478527);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(23,1.222532);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(24,0.985518);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(25,0.7544308);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(26,0.5308539);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(27,0.4776093);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(28,0.3059157);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(29,0.3264362);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(30,0.199723);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(31,0.3470854);
   VbbHcc_both_H_dR_Bj1_stack_3->SetEntries(458232);

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
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(1,228.4945);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(2,542.278);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(3,503.0166);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(4,397.8098);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(5,276.2052);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(6,218.2304);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(7,186.1067);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(8,128.6839);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(9,125.4657);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(10,122.9032);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(11,106.7235);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(12,101.5238);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(13,90.34979);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(14,82.67547);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(15,83.46187);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(16,72.71364);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(17,44.46437);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(18,28.87166);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(19,12.85459);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(20,10.34715);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(21,5.9417);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(22,4.782923);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(23,3.327451);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(24,1.455472);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(25,0.3109243);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(26,0.9261965);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(27,0.2183513);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(28,0.1257783);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(30,0.09257296);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(31,0.2183513);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(1,7.311303);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(2,14.1151);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(3,12.64049);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(4,15.49206);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(5,11.35115);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(6,11.0801);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(7,12.15397);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(8,7.34372);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(9,8.249037);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(10,10.52543);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(11,6.961828);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(12,6.756172);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(13,7.531501);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(14,7.232209);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(15,5.072294);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(16,7.040992);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(17,5.257671);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(18,6.139659);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(19,1.960927);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(20,1.787539);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(21,1.019244);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(22,1.204911);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(23,1.051702);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(24,0.5879913);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(25,0.1815481);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(26,0.5370141);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(27,0.1561728);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(28,0.1257783);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(30,0.09257296);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(31,0.1561728);
   VbbHcc_both_H_dR_Bj1_stack_4->SetEntries(19394);

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
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(1,33.65491);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(2,55.01999);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(3,51.1283);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(4,45.40172);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(5,34.76372);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(6,17.60759);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(7,19.25448);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(8,8.935757);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(9,17.47178);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(10,6.826);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(11,5.920277);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(12,6.754363);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(13,5.960326);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(14,5.637329);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(15,13.15995);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(16,6.157694);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(17,2.099869);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(18,4.008881);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(19,1.481276);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(20,1.125562);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(21,3.049812);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(22,0.5902737);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(24,0.1265664);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(27,0.1265664);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(1,3.609054);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(2,5.090834);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(3,6.729235);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(4,11.54015);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(5,5.879762);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(6,3.320182);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(7,3.965488);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(8,2.367857);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(9,4.387277);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(10,1.153494);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(11,1.005702);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(12,1.197636);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(13,1.075805);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(14,1.073434);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(15,4.067022);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(16,1.106452);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(17,0.5916496);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(18,2.152409);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(19,0.4499512);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(20,0.4864967);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(21,2.125655);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(22,0.3701388);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(24,0.1265664);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(27,0.1265664);
   VbbHcc_both_H_dR_Bj1_stack_5->SetEntries(2575);

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
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(3,1.356128);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(4,0.4520427);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(5,0.4520427);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(3,0.7829609);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(4,0.4520427);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(5,0.4520427);
   VbbHcc_both_H_dR_Bj1_stack_6->SetEntries(5);

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
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(2,2.479394);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(3,2.833593);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(4,2.125195);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(5,0.7083982);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(6,0.7083982);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(7,0.3541991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(8,0.3541991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(9,0.7083982);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(11,0.7083982);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(15,0.3541991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(18,0.3541991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(2,0.9371228);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(3,1.001826);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(4,0.8676071);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(5,0.5009132);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(6,0.5009132);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(7,0.3541991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(8,0.3541991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(9,0.5009132);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(11,0.5009132);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(15,0.3541991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(18,0.3541991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetEntries(33);

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
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(1,6.985359);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(2,14.25013);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(3,9.500088);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(4,6.985359);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(5,3.632387);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(6,3.632387);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(7,2.514729);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(8,1.9559);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(9,2.514729);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(10,0.8382431);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(11,2.235315);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(12,2.514729);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(13,1.397072);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(14,1.117657);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(15,0.2794144);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(16,2.514729);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(17,1.397072);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(19,0.2794144);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(1,1.397072);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(2,1.995418);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(3,1.629252);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(4,1.397072);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(5,1.007443);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(6,1.007443);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(7,0.8382431);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(8,0.7392609);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(9,0.8382431);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(10,0.4839599);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(11,0.7903031);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(12,0.8382431);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(13,0.6247895);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(14,0.5588287);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(15,0.2794144);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(16,0.8382431);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(17,0.6247895);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(19,0.2794144);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(23,0.2794144);
   VbbHcc_both_H_dR_Bj1_stack_8->SetEntries(232);

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
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(1,3.977255);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(2,12.77065);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(3,11.34889);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(4,7.552213);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(5,4.87328);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(6,3.396667);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(7,2.70179);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(8,2.315494);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(9,2.002342);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(10,1.817194);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(11,1.627474);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(12,1.636618);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(13,1.497185);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(14,1.485756);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(15,1.412611);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(16,1.241178);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(17,0.6377322);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(18,0.422869);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(19,0.2742934);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(20,0.1417183);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(21,0.08914537);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(22,0.05028713);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(23,0.02057201);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(24,0.01371467);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(25,0.02057201);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(26,0.009143115);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(27,0.002285779);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(29,0.002285779);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(30,0.002285779);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(31,0.004571557);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(1,0.09534739);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(2,0.1708534);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(3,0.1610623);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(4,0.1313875);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(5,0.1055426);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(6,0.08811373);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(7,0.07858559);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(8,0.07275099);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(9,0.06765287);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(10,0.06444923);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(11,0.06099218);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(12,0.06116327);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(13,0.05849986);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(14,0.05827615);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(15,0.05682356);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(16,0.05326404);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(17,0.03818003);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(18,0.03108995);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(19,0.02503945);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(20,0.01799824);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(21,0.01427468);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(22,0.01072125);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(23,0.006857336);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(24,0.005598991);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(25,0.006857336);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(26,0.004571557);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(27,0.002285779);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(29,0.002285779);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(30,0.002285779);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(31,0.003232579);
   VbbHcc_both_H_dR_Bj1_stack_9->SetEntries(27714);

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
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(1,1.495131);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(2,5.056499);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(3,5.631778);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(4,4.227262);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(5,2.854937);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(6,1.879644);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(7,1.428363);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(8,1.212558);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(9,1.055772);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(10,0.8393717);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(11,0.7863148);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(12,0.7040468);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(13,0.5931639);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(14,0.5675297);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(15,0.5085114);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(16,0.4793003);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(17,0.2491885);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(18,0.1430747);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(19,0.07988338);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(20,0.04649928);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(21,0.0387494);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(22,0.01907663);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(23,0.0107306);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(24,0.00894217);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(25,0.002384579);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(26,0.001788434);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(27,0.003576868);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(28,0.001192289);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(31,0.001192289);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(1,0.02985489);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(2,0.05490359);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(3,0.05794268);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(4,0.05020019);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(5,0.04125476);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(6,0.03347446);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(7,0.02918066);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(8,0.02688606);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(9,0.0250877);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(10,0.02236933);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(11,0.0216508);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(12,0.02048692);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(13,0.01880456);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(14,0.01839374);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(15,0.0174111);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(16,0.01690362);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(17,0.01218821);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(18,0.009235433);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(19,0.006900873);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(20,0.005265007);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(21,0.004806272);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(22,0.003372303);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(23,0.002529228);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(24,0.002308858);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(25,0.001192289);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(26,0.001032553);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(27,0.00146025);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(28,0.0008430758);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(31,0.0008430758);
   VbbHcc_both_H_dR_Bj1_stack_10->SetEntries(50200);

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
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(1,0.006827286);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(2,0.05689405);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(3,0.04323948);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(4,0.02275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(5,0.01137881);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(6,0.01593033);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(7,0.009103048);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(8,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(9,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(10,0.006827286);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(11,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(12,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(13,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(14,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(16,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(17,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(1,0.003941735);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(2,0.01137881);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(3,0.009919816);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(4,0.007196591);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(5,0.005088758);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(6,0.0060211);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(7,0.004551524);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(8,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(9,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(10,0.003941735);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(11,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(12,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(13,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(14,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(16,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(17,0.002275762);
   VbbHcc_both_H_dR_Bj1_stack_11->SetEntries(84);

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
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(1,0.003895538);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(2,0.01887838);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(3,0.01708044);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(4,0.01648112);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(5,0.00839039);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(6,0.009888674);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(7,0.002996568);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(8,0.001797941);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(9,0.003895538);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(10,0.002097598);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(11,0.002397254);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(12,0.002397254);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(13,0.0002996568);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(14,0.001797941);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(15,0.001797941);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(16,0.001198627);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(17,0.0008989704);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(18,0.0005993136);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(19,0.0005993136);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(20,0.0008989704);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(21,0.0002996568);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(23,0.0002996568);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(1,0.001080428);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(2,0.002378452);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(3,0.002262359);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(4,0.002222314);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(5,0.001585635);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(6,0.001721397);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(7,0.000947598);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(8,0.0007340063);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(9,0.001080428);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(10,0.0007928174);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(11,0.0008475574);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(12,0.0008475574);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(13,0.0002996568);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(14,0.0007340063);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(15,0.0007340063);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(16,0.0005993136);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(17,0.0005190208);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(18,0.0004237787);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(19,0.0004237787);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(20,0.0005190208);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(21,0.0002996568);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(23,0.0002996568);
   VbbHcc_both_H_dR_Bj1_stack_12->SetEntries(330);

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
   
   TH1D *VbbHcc_both_H_dR_Bj1__656 = new TH1D("VbbHcc_both_H_dR_Bj1__656","",30,0,6);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(1,17632);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(2,49304);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(3,46467);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(4,36364);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(5,28558);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(6,22905);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(7,18578);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(8,15470);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(9,13422);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(10,11937);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(11,10565);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(12,9735);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(13,8771);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(14,8188);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(15,7941);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(16,7375);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(17,4215);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(18,2833);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(19,1986);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(20,1381);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(21,930);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(22,664);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(23,427);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(24,290);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(25,178);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(26,116);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(27,55);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(28,28);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(29,14);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(30,17);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(31,22);
   VbbHcc_both_H_dR_Bj1__656->SetEntries(326397);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1__656->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1__656->SetLineWidth(2);
   VbbHcc_both_H_dR_Bj1__656->SetMarkerStyle(20);
   VbbHcc_both_H_dR_Bj1__656->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_Bj1__656->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1__656->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__656->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__656->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__656->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__656->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__656->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__656->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__656->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1__656->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__656->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__656->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__656->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__656->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__656->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fx1477[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fy1477[30] = {
   14587.79,
   37517.59,
   33681.02,
   29782.96,
   22520.1,
   19092.11,
   14382.34,
   8241.609,
   10033.42,
   8392.115,
   10098.93,
   7964.516,
   6695.958,
   8526.147,
   7292.266,
   4626.772,
   2309.107,
   2775.071,
   735.9983,
   976.5644,
   1167.137,
   271.4236,
   239.2844,
   115.5794,
   131.8343,
   12.12274,
   381.814,
   12.25991,
   12.45195,
   0.7394909};
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fex1477[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fey1477[30] = {
   1245.231,
   2324.057,
   2193.419,
   2707.909,
   2453.633,
   2413.97,
   1576.181,
   897.0844,
   1273.512,
   1207.836,
   1421.774,
   1206.019,
   955.8606,
   2016.312,
   1146.344,
   779.5399,
   223.8217,
   757.7714,
   114.5391,
   386.9945,
   532.0056,
   64.77583,
   74.115,
   47.98359,
   57.31669,
   5.93691,
   370.6707,
   9.824848,
   9.808359,
   0.2254469};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_Bj1_fx1477,Graph_from_VbbHcc_both_H_dR_Bj1_fy1477,Graph_from_VbbHcc_both_H_dR_Bj1_fex1477,Graph_from_VbbHcc_both_H_dR_Bj1_fey1477);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_Bj11477 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_Bj11477","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->SetMinimum(0.4626396);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->SetMaximum(43825.76);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_Bj11477);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1","Data (JetHT, 2018)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj1_both_18->cd();
  
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
   
   TH1D *data_mc_ratio__657 = new TH1D("data_mc_ratio__657","",30,0,6);
   data_mc_ratio__657->SetBinContent(1,1.208682);
   data_mc_ratio__657->SetBinContent(2,1.314157);
   data_mc_ratio__657->SetBinContent(3,1.37962);
   data_mc_ratio__657->SetBinContent(4,1.220967);
   data_mc_ratio__657->SetBinContent(5,1.268112);
   data_mc_ratio__657->SetBinContent(6,1.19971);
   data_mc_ratio__657->SetBinContent(7,1.291723);
   data_mc_ratio__657->SetBinContent(8,1.877061);
   data_mc_ratio__657->SetBinContent(9,1.337729);
   data_mc_ratio__657->SetBinContent(10,1.422407);
   data_mc_ratio__657->SetBinContent(11,1.04615);
   data_mc_ratio__657->SetBinContent(12,1.222296);
   data_mc_ratio__657->SetBinContent(13,1.309895);
   data_mc_ratio__657->SetBinContent(14,0.96034);
   data_mc_ratio__657->SetBinContent(15,1.088962);
   data_mc_ratio__657->SetBinContent(16,1.593984);
   data_mc_ratio__657->SetBinContent(17,1.825381);
   data_mc_ratio__657->SetBinContent(18,1.020875);
   data_mc_ratio__657->SetBinContent(19,2.698376);
   data_mc_ratio__657->SetBinContent(20,1.414141);
   data_mc_ratio__657->SetBinContent(21,0.7968219);
   data_mc_ratio__657->SetBinContent(22,2.44636);
   data_mc_ratio__657->SetBinContent(23,1.784488);
   data_mc_ratio__657->SetBinContent(24,2.509097);
   data_mc_ratio__657->SetBinContent(25,1.35018);
   data_mc_ratio__657->SetBinContent(26,9.568796);
   data_mc_ratio__657->SetBinContent(27,0.1440492);
   data_mc_ratio__657->SetBinContent(28,2.283867);
   data_mc_ratio__657->SetBinContent(29,1.124322);
   data_mc_ratio__657->SetBinContent(30,22.98879);
   data_mc_ratio__657->SetBinContent(31,9.983897);
   data_mc_ratio__657->SetBinError(1,0.009102512);
   data_mc_ratio__657->SetBinError(2,0.005918425);
   data_mc_ratio__657->SetBinError(3,0.006400105);
   data_mc_ratio__657->SetBinError(4,0.006402772);
   data_mc_ratio__657->SetBinError(5,0.007504013);
   data_mc_ratio__657->SetBinError(6,0.007927043);
   data_mc_ratio__657->SetBinError(7,0.009476981);
   data_mc_ratio__657->SetBinError(8,0.01509153);
   data_mc_ratio__657->SetBinError(9,0.01154674);
   data_mc_ratio__657->SetBinError(10,0.01301896);
   data_mc_ratio__657->SetBinError(11,0.01017793);
   data_mc_ratio__657->SetBinError(12,0.01238821);
   data_mc_ratio__657->SetBinError(13,0.01398659);
   data_mc_ratio__657->SetBinError(14,0.01061295);
   data_mc_ratio__657->SetBinError(15,0.01222011);
   data_mc_ratio__657->SetBinError(16,0.01856107);
   data_mc_ratio__657->SetBinError(17,0.02811608);
   data_mc_ratio__657->SetBinError(18,0.01918003);
   data_mc_ratio__657->SetBinError(19,0.06054981);
   data_mc_ratio__657->SetBinError(20,0.03805362);
   data_mc_ratio__657->SetBinError(21,0.02612882);
   data_mc_ratio__657->SetBinError(22,0.0949372);
   data_mc_ratio__657->SetBinError(23,0.08635741);
   data_mc_ratio__657->SetBinError(24,0.1473393);
   data_mc_ratio__657->SetBinError(25,0.1012002);
   data_mc_ratio__657->SetBinError(26,0.8884404);
   data_mc_ratio__657->SetBinError(27,0.01942359);
   data_mc_ratio__657->SetBinError(28,0.4316103);
   data_mc_ratio__657->SetBinError(29,0.3004876);
   data_mc_ratio__657->SetBinError(30,5.5756);
   data_mc_ratio__657->SetBinError(31,2.759497);
   data_mc_ratio__657->SetMinimum(0.4);
   data_mc_ratio__657->SetMaximum(1.6);
   data_mc_ratio__657->SetEntries(47.73736);
   data_mc_ratio__657->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__657->SetLineColor(ci);
   data_mc_ratio__657->SetLineWidth(2);
   data_mc_ratio__657->SetMarkerStyle(20);
   data_mc_ratio__657->SetMarkerSize(1.2);
   data_mc_ratio__657->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__657->GetXaxis()->SetRange(1,30);
   data_mc_ratio__657->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__657->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__657->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__657->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__657->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__657->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__657->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__657->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__657->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__657->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__657->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__657->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__657->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__657->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__657->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__657->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__657->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1478[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1478[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1478[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1478[30] = {
   0.08536117,
   0.0619458,
   0.06512331,
   0.09092143,
   0.108953,
   0.1264381,
   0.1095915,
   0.1088482,
   0.126927,
   0.1439251,
   0.1407846,
   0.151424,
   0.1427519,
   0.2364858,
   0.1572,
   0.1684846,
   0.09692997,
   0.2730638,
   0.1556242,
   0.3962816,
   0.4558212,
   0.2386522,
   0.3097361,
   0.4151569,
   0.4347631,
   0.4897334,
   0.970815,
   0.8013802,
   0.7876964,
   0.3048677};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1478,Graph_from_mc_statistical_error_fy1478,Graph_from_mc_statistical_error_fex1478,Graph_from_mc_statistical_error_fey1478);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1478 = new TH1F("Graph_Graph_from_mc_statistical_error1478","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1478->SetMinimum(0.02626648);
   Graph_Graph_from_mc_statistical_error1478->SetMaximum(2.164978);
   Graph_Graph_from_mc_statistical_error1478->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1478->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1478->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1478->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1478->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1478->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1478->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1478->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1478->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1478->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1478);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_both_18->cd();
   H_dR_Bj1_both_18->Modified();
   H_dR_Bj1_both_18->cd();
   H_dR_Bj1_both_18->SetSelected(H_dR_Bj1_both_18);
}
