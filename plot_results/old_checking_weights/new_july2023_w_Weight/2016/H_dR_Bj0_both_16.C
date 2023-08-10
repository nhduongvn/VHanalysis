void H_dR_Bj0_both_16()
{
//=========Macro generated from canvas: H_dR_Bj0_both_16/H_dR_Bj0_both_16
//=========  (Thu Aug 10 10:43:18 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_both_16 = new TCanvas("H_dR_Bj0_both_16", "H_dR_Bj0_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_both_16->SetHighLightColor(2);
   H_dR_Bj0_both_16->Range(0,0,1,1);
   H_dR_Bj0_both_16->SetFillColor(0);
   H_dR_Bj0_both_16->SetFillStyle(4000);
   H_dR_Bj0_both_16->SetBorderMode(0);
   H_dR_Bj0_both_16->SetBorderSize(2);
   H_dR_Bj0_both_16->SetFrameFillStyle(1000);
   H_dR_Bj0_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.858603,6.314516,11.97071);
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
   st->SetMaximum(9.06539e+09);
   
   TH1F *st_stack_233 = new TH1F("st_stack_233","",30,0,6);
   st_stack_233->SetMinimum(0.001432933);
   st_stack_233->SetMaximum(3.074507e+10);
   st_stack_233->SetDirectory(0);
   st_stack_233->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_233->SetLineColor(ci);
   st_stack_233->GetXaxis()->SetRange(1,30);
   st_stack_233->GetXaxis()->SetLabelFont(42);
   st_stack_233->GetXaxis()->SetLabelSize(0.035);
   st_stack_233->GetXaxis()->SetTitleSize(0.035);
   st_stack_233->GetXaxis()->SetTitleFont(42);
   st_stack_233->GetYaxis()->SetTitle("Events/0.2");
   st_stack_233->GetYaxis()->SetLabelFont(42);
   st_stack_233->GetYaxis()->SetLabelSize(0.05);
   st_stack_233->GetYaxis()->SetTitleSize(0.057);
   st_stack_233->GetYaxis()->SetTitleOffset(1.2);
   st_stack_233->GetYaxis()->SetTitleFont(42);
   st_stack_233->GetZaxis()->SetLabelFont(42);
   st_stack_233->GetZaxis()->SetLabelSize(0.035);
   st_stack_233->GetZaxis()->SetTitleSize(0.035);
   st_stack_233->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_233);
   
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(1,5163.352);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(2,28438.69);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(3,22860.58);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(4,17397.01);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(5,12120.9);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(6,12171.79);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(7,10894.47);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(8,7350.256);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(9,10637.42);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(10,8121.3);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(11,5270.922);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(12,7932.839);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(13,6622.036);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(14,5714.417);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(15,3528.257);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(16,3213.285);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(17,2902.875);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(18,963.3916);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(19,1089.373);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(20,1945.578);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(21,291.3729);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(22,536.7613);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(23,731.4651);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(24,189.4709);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(25,39.29699);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(26,281.489);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(27,12.23484);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(28,29.6717);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(1,741.8985);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(2,3436.726);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(3,2398.864);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(4,2550.254);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(5,1919.07);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(6,1497.04);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(7,2638.789);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(8,1099.099);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(9,2318.48);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(10,2204.006);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(11,913.316);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(12,1770.84);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(13,1061.568);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(14,987.7036);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(15,628.407);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(16,567.4508);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(17,673.043);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(18,123.684);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(19,390.7994);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(20,609.4545);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(21,66.6656);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(22,277.4264);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(23,385.2294);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(24,58.89859);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(25,24.95165);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(26,268.9352);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(27,8.651341);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(28,23.89656);
   VbbHcc_both_H_dR_Bj0_stack_1->SetEntries(9914);

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
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(1,24.2846);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(2,76.36412);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(3,91.01163);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(4,80.60611);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(5,69.60357);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(6,60.57876);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(7,55.72626);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(8,43.80873);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(9,38.62455);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(10,34.43382);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(11,32.28829);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(12,29.16312);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(13,31.17798);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(14,28.5464);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(15,26.47809);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(16,24.80844);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(17,13.4782);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(18,10.21901);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(19,6.758676);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(20,4.464736);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(21,3.113377);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(22,1.974263);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(23,2.836959);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(24,0.8867321);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(25,0.323143);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(26,0.4032024);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(27,0.3547719);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(28,0.3632874);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(31,0.0449468);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(1,2.063865);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(2,3.474263);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(3,3.770014);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(4,3.626133);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(5,3.41924);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(6,3.063813);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(7,3.044938);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(8,2.623092);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(9,2.450133);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(10,2.245119);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(11,2.208855);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(12,2.104386);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(13,2.233708);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(14,2.194715);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(15,1.989301);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(16,1.950565);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(17,1.326196);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(18,1.141422);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(19,0.9849021);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(20,0.6701154);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(21,0.6196598);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(22,0.3927798);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(23,0.6520439);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(24,0.3187992);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(25,0.1223908);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(26,0.2794259);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(27,0.2723985);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(28,0.2739324);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(31,0.0449468);
   VbbHcc_both_H_dR_Bj0_stack_2->SetEntries(9807);

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
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(1,363.5908);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(2,1460.543);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(3,1842.932);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(4,1678.517);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(5,1438.182);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(6,1210.584);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(7,997.21);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(8,850.7881);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(9,731.0126);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(10,648.1425);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(11,586.0604);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(12,533.9569);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(13,478.0915);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(14,452.5719);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(15,432.2848);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(16,384.5414);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(17,242.1555);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(18,163.9597);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(19,113.219);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(20,75.81427);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(21,53.62195);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(22,34.67027);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(23,21.24042);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(24,13.65865);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(25,9.496854);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(26,4.560854);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(27,3.154738);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(28,1.382096);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(29,0.9589935);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(30,0.5514318);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(31,0.9505699);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(1,4.839571);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(2,9.721941);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(3,10.94141);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(4,10.43963);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(5,9.651242);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(6,8.844145);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(7,8.02597);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(8,7.394425);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(9,6.859021);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(10,6.46577);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(11,6.145539);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(12,5.858263);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(13,5.54541);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(14,5.399504);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(15,5.282587);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(16,4.982146);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(17,3.943172);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(18,3.24686);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(19,2.698041);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(20,2.200174);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(21,1.852274);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(22,1.496429);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(23,1.156578);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(24,0.9265801);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(25,0.7745835);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(26,0.5379947);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(27,0.454784);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(28,0.2943271);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(29,0.2514469);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(30,0.1872499);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(31,0.235781);
   VbbHcc_both_H_dR_Bj0_stack_3->SetEntries(238439);

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
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(1,74.64449);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(2,236.7012);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(3,266.7844);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(4,226.2717);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(5,166.8627);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(6,144.619);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(7,118.1793);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(8,109.1655);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(9,94.54616);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(10,85.05943);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(11,74.74215);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(12,81.46479);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(13,71.61613);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(14,76.65626);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(15,66.89006);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(16,63.89119);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(17,31.69843);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(18,22.72437);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(19,15.54081);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(20,8.183116);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(21,9.095411);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(22,4.786066);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(23,5.703932);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(24,1.34961);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(25,0.9919129);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(26,0.1332254);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(27,0.1447926);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(28,0.279517);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(29,0.3461297);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(31,0.06661271);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(1,3.781789);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(2,8.034348);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(3,10.80337);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(4,12.97589);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(5,10.75939);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(6,10.81334);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(7,9.227452);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(8,9.109986);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(9,7.741914);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(10,7.245128);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(11,7.072433);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(12,7.499038);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(13,6.216871);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(14,7.802046);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(15,4.644133);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(16,6.068566);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(17,3.220473);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(18,3.77895);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(19,2.81648);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(20,1.106404);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(21,2.635682);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(22,0.9301925);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(23,2.520872);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(24,0.4619995);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(25,0.3594463);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(26,0.0942046);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(27,0.10271);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(28,0.279517);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(29,0.2873448);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(31,0.06661271);
   VbbHcc_both_H_dR_Bj0_stack_4->SetEntries(15488);

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
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(1,9.396169);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(2,25.5705);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(3,28.42979);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(4,21.98949);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(5,16.17305);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(6,12.4771);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(7,6.199214);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(8,9.004209);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(9,7.423561);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(10,7.253942);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(11,8.620228);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(12,7.451306);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(13,8.623971);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(14,8.941492);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(15,5.157246);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(16,5.177596);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(17,4.173962);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(18,3.618309);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(19,1.759798);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(20,1.057355);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(21,2.025252);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(22,0.3629555);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(23,0.0759034);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(24,0.2282679);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(25,0.0002566649);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(27,0.0005133298);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(29,0.0002566649);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(1,0.9761193);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(2,3.212774);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(3,6.726854);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(4,6.52272);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(5,2.775775);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(6,2.102333);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(7,1.232727);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(8,1.75069);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(9,1.376411);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(10,1.34375);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(11,1.684906);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(12,1.330347);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(13,1.941908);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(14,2.012164);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(15,0.6864464);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(16,0.7748319);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(17,0.6446681);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(18,1.171077);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(19,0.3971837);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(20,0.3089446);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(21,1.086865);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(22,0.1545267);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(23,0.07564717);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(24,0.1651286);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(25,0.0002566649);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(27,0.000362979);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(29,0.0002566649);
   VbbHcc_both_H_dR_Bj0_stack_5->SetEntries(3431);

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
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(3,0.4031079);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(4,0.1343693);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(6,0.1343693);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(7,0.1343693);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(11,0.1343693);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(14,0.2687386);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(15,0.2687386);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(3,0.2327345);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(4,0.1343693);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(6,0.1343693);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(7,0.1343693);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(11,0.1343693);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(14,0.1900269);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(15,0.1900269);
   VbbHcc_both_H_dR_Bj0_stack_6->SetEntries(11);

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
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(1,0.2179625);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(2,0.9808311);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(3,0.6538874);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(4,0.4359249);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(5,0.5449062);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(6,0.1089812);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(7,0.2179625);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(8,0.2179625);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(9,0.4359249);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(10,0.4359249);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(11,0.3269437);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(12,0.1089812);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(13,0.2179625);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(14,0.1089812);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(15,0.2179625);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(16,0.2179625);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(17,0.2179625);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(1,0.1541227);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(2,0.3269437);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(3,0.2669484);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(4,0.2179625);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(5,0.2436895);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(6,0.1089812);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(7,0.1541227);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(8,0.1541227);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(9,0.2179625);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(10,0.2179625);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(11,0.188761);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(12,0.1089812);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(13,0.1541227);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(14,0.1089812);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(15,0.1541227);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(16,0.1541227);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(17,0.1541227);
   VbbHcc_both_H_dR_Bj0_stack_7->SetEntries(52);

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
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(1,1.945657);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(2,8.998665);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(3,5.593764);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(4,5.836972);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(5,2.432072);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(6,2.432072);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(7,1.945657);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(8,0.9728286);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(9,2.188864);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(10,0.9728286);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(11,1.945657);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(12,0.9728286);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(13,0.9728286);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(14,1.459243);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(15,0.9728286);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(16,0.4864143);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(17,0.9728286);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(18,0.7296215);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(19,0.7296215);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(1,0.6878937);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(2,1.479371);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(3,1.166381);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(4,1.191467);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(5,0.7690885);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(6,0.7690885);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(7,0.6878937);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(8,0.4864143);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(9,0.7296215);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(10,0.4864143);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(11,0.6878937);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(12,0.4864143);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(13,0.4864143);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(14,0.5957334);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(15,0.4864143);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(16,0.3439469);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(17,0.4864143);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(18,0.4212471);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(19,0.4212471);
   VbbHcc_both_H_dR_Bj0_stack_8->SetEntries(175);

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
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(1,1.527617);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(2,6.235229);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(3,6.78556);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(4,5.04585);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(5,3.417039);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(6,2.405096);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(7,1.77991);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(8,1.522072);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(9,1.398699);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(10,1.314139);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(11,1.293346);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(12,1.135316);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(13,1.189379);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(14,1.164427);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(15,1.121454);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(16,0.9800594);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(17,0.6168691);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(18,0.3354659);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(19,0.1580294);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(20,0.1039667);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(21,0.0734698);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(22,0.04713157);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(23,0.02911067);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(24,0.01663467);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(25,0.00554489);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(26,0.001386223);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(27,0.00554489);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(28,0.002772445);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(29,0.001386223);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(31,0.001386223);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(1,0.04601758);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(2,0.09296997);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(3,0.09698606);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(4,0.08363415);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(5,0.06882424);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(6,0.05774079);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(7,0.04967244);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(8,0.04593399);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(9,0.04403303);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(10,0.04268125);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(11,0.04234224);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(12,0.03967116);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(13,0.04060473);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(14,0.04017655);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(15,0.03942823);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(16,0.03685893);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(17,0.0292424);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(18,0.02156456);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(19,0.01480081);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(20,0.01200504);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(21,0.01009185);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(22,0.008082997);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(23,0.00635247);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(24,0.004802016);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(25,0.002772445);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(26,0.001386223);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(27,0.002772445);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(28,0.001960415);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(29,0.001386223);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(31,0.001386223);
   VbbHcc_both_H_dR_Bj0_stack_9->SetEntries(28649);

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
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(1,0.5950688);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(2,2.755334);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(3,3.223708);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(4,2.444161);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(5,1.620109);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(6,1.159989);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(7,0.8857839);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(8,0.7432976);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(9,0.6722339);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(10,0.5975811);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(11,0.5268763);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(12,0.497087);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(13,0.4518647);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(14,0.4486345);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(15,0.4131026);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(16,0.3861846);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(17,0.2171391);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(18,0.1363849);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(19,0.07824185);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(20,0.04414563);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(21,0.0283537);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(22,0.01507412);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(23,0.01292067);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(24,0.007178152);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(25,0.003947983);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(26,0.002871261);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(27,0.00143563);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(28,0.001076723);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(29,0.001076723);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(31,0.0007178152);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(1,0.0146142);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(2,0.03144694);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(3,0.0340149);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(4,0.02961803);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(5,0.02411368);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(6,0.02040414);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(7,0.01783016);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(8,0.01633325);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(9,0.01553286);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(10,0.01464501);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(11,0.01375136);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(12,0.01335696);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(13,0.0127349);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(14,0.0126893);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(15,0.01217644);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(16,0.01177304);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(17,0.008827959);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(18,0.006996397);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(19,0.005299207);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(20,0.003980478);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(21,0.00319004);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(22,0.002325987);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(23,0.002153446);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(24,0.001605084);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(25,0.001190362);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(26,0.001015144);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(27,0.0007178152);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(28,0.0006216462);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(29,0.0006216462);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(31,0.000507572);
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
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(1,0.008205022);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(2,0.01914505);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(3,0.01094003);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(4,0.01914505);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(5,0.008205022);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(6,0.008205022);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(7,0.01094003);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(9,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(10,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(11,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(14,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(16,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(1,0.004737172);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(2,0.00723615);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(3,0.005470015);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(4,0.00723615);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(5,0.004737172);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(6,0.004737172);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(7,0.005470015);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(9,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(10,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(11,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(14,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(16,0.002735007);
   VbbHcc_both_H_dR_Bj0_stack_11->SetEntries(36);

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
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(1,0.001786329);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(2,0.006073519);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(3,0.009288912);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(4,0.006073519);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(5,0.004644456);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(6,0.003572658);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(7,0.002143595);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(8,0.002858127);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(9,0.003572658);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(10,0.001071798);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(11,0.001429063);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(12,0.001071798);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(13,0.001071798);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(14,0.0007145317);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(15,0.0007145317);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(16,0.0007145317);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(17,0.001786329);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(18,0.0003572658);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(1,0.0007988707);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(2,0.001473045);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(3,0.001821706);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(4,0.001473045);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(5,0.00128814);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(6,0.001129774);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(7,0.000875119);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(8,0.0010105);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(9,0.001129774);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(10,0.0006188026);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(11,0.0007145317);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(12,0.0006188026);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(13,0.0006188026);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(14,0.0005052502);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(15,0.0005052502);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(16,0.0005052502);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(17,0.0007988707);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(18,0.0003572658);
   VbbHcc_both_H_dR_Bj0_stack_12->SetEntries(137);

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
   
   TH1D *VbbHcc_both_H_dR_Bj0__639 = new TH1D("VbbHcc_both_H_dR_Bj0__639","",30,0,6);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(1,4328);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(2,12992);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(3,12784);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(4,10098);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(5,8318);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(6,6914);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(7,5916);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(8,5150);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(9,4634);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(10,4147);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(11,3980);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(12,3748);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(13,3494);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(14,3454);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(15,3291);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(16,3125);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(17,1933);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(18,1322);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(19,989);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(20,662);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(21,504);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(22,342);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(23,225);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(24,129);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(25,80);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(26,48);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(27,23);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(28,21);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(29,12);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(30,7);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(31,11);
   VbbHcc_both_H_dR_Bj0__639->SetEntries(102710);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0__639->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0__639->SetLineWidth(2);
   VbbHcc_both_H_dR_Bj0__639->SetMarkerStyle(20);
   VbbHcc_both_H_dR_Bj0__639->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_Bj0__639->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0__639->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__639->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__639->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__639->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__639->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__639->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__639->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__639->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0__639->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__639->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__639->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__639->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__639->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__639->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fx1465[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fy1465[30] = {
   5639.565,
   30256.87,
   25106.42,
   19418.32,
   13819.75,
   13606.3,
   12076.76,
   8366.482,
   11513.73,
   8899.514,
   5976.864,
   8587.59,
   7214.379,
   6284.586,
   4062.062,
   3693.777,
   3196.407,
   1165.115,
   1227.618,
   2035.246,
   359.3307,
   578.617,
   761.3644,
   205.618,
   50.11865,
   286.5906,
   15.89664,
   31.70045,
   1.307843,
   0.5514318};
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fex1465[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fey1465[30] = {
   741.9278,
   3436.753,
   2398.926,
   2550.32,
   1919.13,
   1497.11,
   2638.819,
   1099.167,
   2318.505,
   2204.03,
   913.3686,
   1770.867,
   1061.605,
   987.7538,
   628.4501,
   567.5091,
   673.064,
   123.7958,
   390.8206,
   609.4599,
   66.75511,
   277.4323,
   385.2399,
   58.90878,
   24.96656,
   268.9359,
   8.668177,
   23.90158,
   0.381831,
   0.1872499};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_Bj0_fx1465,Graph_from_VbbHcc_both_H_dR_Bj0_fy1465,Graph_from_VbbHcc_both_H_dR_Bj0_fex1465,Graph_from_VbbHcc_both_H_dR_Bj0_fey1465);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_Bj01465 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_Bj01465","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->SetMinimum(0.3277637);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->SetMaximum(37062.94);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_Bj01465);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0","Data (JetHT, 2016)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj0_both_16->cd();
  
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
   
   TH1D *data_mc_ratio__640 = new TH1D("data_mc_ratio__640","",30,0,6);
   data_mc_ratio__640->SetBinContent(1,0.7674351);
   data_mc_ratio__640->SetBinContent(2,0.4293902);
   data_mc_ratio__640->SetBinContent(3,0.5091924);
   data_mc_ratio__640->SetBinContent(4,0.5200244);
   data_mc_ratio__640->SetBinContent(5,0.6018922);
   data_mc_ratio__640->SetBinContent(6,0.508147);
   data_mc_ratio__640->SetBinContent(7,0.4898666);
   data_mc_ratio__640->SetBinContent(8,0.6155514);
   data_mc_ratio__640->SetBinContent(9,0.4024759);
   data_mc_ratio__640->SetBinContent(10,0.4659805);
   data_mc_ratio__640->SetBinContent(11,0.665901);
   data_mc_ratio__640->SetBinContent(12,0.4364438);
   data_mc_ratio__640->SetBinContent(13,0.4843106);
   data_mc_ratio__640->SetBinContent(14,0.5495986);
   data_mc_ratio__640->SetBinContent(15,0.8101797);
   data_mc_ratio__640->SetBinContent(16,0.8460175);
   data_mc_ratio__640->SetBinContent(17,0.6047415);
   data_mc_ratio__640->SetBinContent(18,1.134652);
   data_mc_ratio__640->SetBinContent(19,0.8056254);
   data_mc_ratio__640->SetBinContent(20,0.3252679);
   data_mc_ratio__640->SetBinContent(21,1.402608);
   data_mc_ratio__640->SetBinContent(22,0.5910645);
   data_mc_ratio__640->SetBinContent(23,0.2955221);
   data_mc_ratio__640->SetBinContent(24,0.6273769);
   data_mc_ratio__640->SetBinContent(25,1.596212);
   data_mc_ratio__640->SetBinContent(26,0.1674863);
   data_mc_ratio__640->SetBinContent(27,1.446847);
   data_mc_ratio__640->SetBinContent(28,0.6624511);
   data_mc_ratio__640->SetBinContent(29,9.175414);
   data_mc_ratio__640->SetBinContent(30,12.69423);
   data_mc_ratio__640->SetBinContent(31,10.33608);
   data_mc_ratio__640->SetBinError(1,0.01166536);
   data_mc_ratio__640->SetBinError(2,0.00376716);
   data_mc_ratio__640->SetBinError(3,0.004503483);
   data_mc_ratio__640->SetBinError(4,0.005174949);
   data_mc_ratio__640->SetBinError(5,0.006599473);
   data_mc_ratio__640->SetBinError(6,0.006111175);
   data_mc_ratio__640->SetBinError(7,0.00636889);
   data_mc_ratio__640->SetBinError(8,0.0085775);
   data_mc_ratio__640->SetBinError(9,0.005912373);
   data_mc_ratio__640->SetBinError(10,0.007236036);
   data_mc_ratio__640->SetBinError(11,0.01055524);
   data_mc_ratio__640->SetBinError(12,0.007128998);
   data_mc_ratio__640->SetBinError(13,0.008193369);
   data_mc_ratio__640->SetBinError(14,0.009351569);
   data_mc_ratio__640->SetBinError(15,0.01412269);
   data_mc_ratio__640->SetBinError(16,0.01513402);
   data_mc_ratio__640->SetBinError(17,0.01375479);
   data_mc_ratio__640->SetBinError(18,0.03120664);
   data_mc_ratio__640->SetBinError(19,0.0256174);
   data_mc_ratio__640->SetBinError(20,0.01264189);
   data_mc_ratio__640->SetBinError(21,0.06247711);
   data_mc_ratio__640->SetBinError(22,0.03196111);
   data_mc_ratio__640->SetBinError(23,0.01970147);
   data_mc_ratio__640->SetBinError(24,0.05523746);
   data_mc_ratio__640->SetBinError(25,0.1784619);
   data_mc_ratio__640->SetBinError(26,0.02417457);
   data_mc_ratio__640->SetBinError(27,0.3016884);
   data_mc_ratio__640->SetBinError(28,0.1445587);
   data_mc_ratio__640->SetBinError(29,2.648714);
   data_mc_ratio__640->SetBinError(30,4.797966);
   data_mc_ratio__640->SetBinError(31,3.945308);
   data_mc_ratio__640->SetMinimum(0.4);
   data_mc_ratio__640->SetMaximum(1.6);
   data_mc_ratio__640->SetEntries(28.50489);
   data_mc_ratio__640->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__640->SetLineColor(ci);
   data_mc_ratio__640->SetLineWidth(2);
   data_mc_ratio__640->SetMarkerStyle(20);
   data_mc_ratio__640->SetMarkerSize(1.2);
   data_mc_ratio__640->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__640->GetXaxis()->SetRange(1,30);
   data_mc_ratio__640->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__640->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__640->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__640->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__640->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__640->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__640->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__640->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__640->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__640->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__640->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__640->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__640->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__640->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__640->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__640->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__640->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1466[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1466[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1466[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1466[30] = {
   0.1315576,
   0.1135859,
   0.09555029,
   0.1313358,
   0.1388686,
   0.1100306,
   0.218504,
   0.1313774,
   0.2013686,
   0.2476573,
   0.1528174,
   0.2062123,
   0.1471512,
   0.1571709,
   0.1547121,
   0.1536392,
   0.2105689,
   0.106252,
   0.3183569,
   0.2994528,
   0.1857762,
   0.4794748,
   0.5059862,
   0.2864962,
   0.498149,
   0.9383976,
   0.5452836,
   0.7539823,
   0.2919548,
   0.3395704};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1466,Graph_from_mc_statistical_error_fy1466,Graph_from_mc_statistical_error_fex1466,Graph_from_mc_statistical_error_fey1466);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1466 = new TH1F("Graph_Graph_from_mc_statistical_error1466","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1466->SetMinimum(0.05544214);
   Graph_Graph_from_mc_statistical_error1466->SetMaximum(2.126077);
   Graph_Graph_from_mc_statistical_error1466->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1466->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1466->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1466->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1466->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1466->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1466->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1466->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1466->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1466->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1466->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1466->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1466->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1466->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1466->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1466->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1466);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_both_16->cd();
   H_dR_Bj0_both_16->Modified();
   H_dR_Bj0_both_16->cd();
   H_dR_Bj0_both_16->SetSelected(H_dR_Bj0_both_16);
}
