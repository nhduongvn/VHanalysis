void H_dR_Bj0_both_16_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_both_16/H_dR_Bj0_both_16
//=========  (Tue Aug 22 09:18:33 2023) by ROOT version 6.14/09
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
   topPad->Range(-0.9193524,-2.85795,6.314516,11.9476);
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
   st->SetMaximum(8.653195e+09);
   
   TH1F *st_stack_233 = new TH1F("st_stack_233","",30,0,6);
   st_stack_233->SetMinimum(0.001435011);
   st_stack_233->SetMaximum(2.931214e+10);
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
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(1,5406.547);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(2,27803.57);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(3,24473.71);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(4,17127.96);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(5,12497.83);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(6,11262.06);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(7,11062.47);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(8,7738.15);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(9,11363.22);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(10,7990.053);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(11,5728.088);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(12,8096.488);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(13,7066.283);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(14,6344.024);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(15,3739.988);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(16,3280.426);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(17,3061.608);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(18,1012.095);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(19,931.3773);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(20,2187.062);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(21,316.9269);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(22,614.5602);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(23,811.2062);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(24,155.3753);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(25,36.12303);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(26,322.2136);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(27,12.49541);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(28,32.81648);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(1,847.1938);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(2,3602.608);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(3,2638.525);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(4,2671.855);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(5,2056.4);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(6,1539.686);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(7,2774.47);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(8,1222.171);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(9,2476.904);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(10,2312.926);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(11,1046.968);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(12,1874.653);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(13,1215.919);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(14,1134.101);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(15,718.1018);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(16,646.199);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(17,770.442);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(18,135.1484);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(19,326.3136);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(20,700.5186);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(21,74.17806);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(22,319.5614);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(23,442.1634);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(24,54.71272);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(25,27.0501);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(26,309.3552);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(27,8.83559);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(28,26.82165);
   VbbHcc_both_H_dR_Bj0_stack_1->SetEntries(9183);

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
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(1,24.13835);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(2,76.70598);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(3,91.60242);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(4,81.75005);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(5,69.98575);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(6,60.86724);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(7,55.74173);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(8,43.05567);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(9,38.21902);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(10,34.40777);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(11,32.64208);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(12,29.08702);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(13,31.15548);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(14,28.67041);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(15,25.71047);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(16,24.86799);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(17,13.70498);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(18,10.02146);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(19,6.557595);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(20,4.362657);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(21,2.953892);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(22,2.089697);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(23,2.799839);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(24,0.8731902);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(25,0.3293433);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(26,0.4058015);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(27,0.3543504);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(28,0.3705415);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(31,0.04473602);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(1,2.064792);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(2,3.491871);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(3,3.806818);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(4,3.666662);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(5,3.444118);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(6,3.094568);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(7,3.061897);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(8,2.637007);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(9,2.457104);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(10,2.253838);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(11,2.234778);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(12,2.121821);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(13,2.238551);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(14,2.215817);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(15,1.968006);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(16,1.965627);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(17,1.346193);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(18,1.146763);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(19,0.9603507);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(20,0.6748253);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(21,0.6190211);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(22,0.4093646);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(23,0.6539569);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(24,0.3234532);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(25,0.1253794);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(26,0.2824304);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(27,0.2723291);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(28,0.2754523);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(31,0.04473602);
   VbbHcc_both_H_dR_Bj0_stack_2->SetEntries(9517);

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
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(1,360.9023);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(2,1463.136);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(3,1846.442);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(4,1679.921);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(5,1442.186);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(6,1214.798);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(7,996.4094);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(8,851.9947);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(9,734.3602);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(10,643.5582);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(11,584.3894);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(12,537.4945);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(13,477.9877);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(14,450.6738);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(15,433.5543);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(16,385.4964);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(17,241.7913);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(18,163.4412);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(19,114.0706);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(20,76.42898);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(21,53.67968);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(22,35.5944);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(23,20.78806);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(24,13.64751);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(25,9.41098);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(26,4.639689);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(27,3.234439);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(28,1.345739);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(29,0.9976447);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(30,0.6368242);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(31,1.057083);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(1,4.860985);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(2,9.807733);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(3,11.03533);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(4,10.52741);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(5,9.743942);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(6,8.930614);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(7,8.089294);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(8,7.460806);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(9,6.930753);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(10,6.49399);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(11,6.187953);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(12,5.928195);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(13,5.592753);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(14,5.433146);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(15,5.334103);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(16,5.026975);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(17,3.975315);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(18,3.269313);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(19,2.731091);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(20,2.230276);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(21,1.867883);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(22,1.528953);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(23,1.154315);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(24,0.9354951);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(25,0.7762547);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(26,0.548097);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(27,0.4641038);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(28,0.2916258);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(29,0.2601382);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(30,0.2040431);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(31,0.2534067);
   VbbHcc_both_H_dR_Bj0_stack_3->SetEntries(232621);

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
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(1,75.55436);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(2,241.0934);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(3,262.0688);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(4,222.2248);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(5,166.6115);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(6,143.2477);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(7,117.3023);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(8,109.8732);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(9,92.11344);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(10,84.67261);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(11,73.28202);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(12,81.94004);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(13,69.6037);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(14,75.94801);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(15,66.47731);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(16,62.28085);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(17,31.10406);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(18,23.07641);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(19,15.82677);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(20,8.109736);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(21,9.235009);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(22,5.253566);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(23,5.861227);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(24,1.12478);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(25,1.0466);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(26,0.1346777);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(27,0.1455187);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(29,0.3971867);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(31,0.06733885);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(1,3.842897);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(2,8.203285);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(3,10.60389);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(4,12.63188);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(5,10.40847);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(6,10.387);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(7,8.893335);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(8,9.022367);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(9,7.467398);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(10,7.028558);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(11,6.79773);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(12,7.233998);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(13,6.006899);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(14,7.470989);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(15,4.63132);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(16,5.82634);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(17,3.178971);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(18,3.659471);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(19,2.76436);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(20,1.161153);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(21,2.546686);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(22,1.06922);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(23,2.411847);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(24,0.4081265);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(25,0.4005685);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(26,0.09523151);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(27,0.1031824);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(29,0.3366513);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(31,0.06733885);
   VbbHcc_both_H_dR_Bj0_stack_4->SetEntries(15013);

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
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(1,8.888769);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(2,26.04477);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(3,29.88168);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(4,23.44158);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(5,16.45977);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(6,12.83172);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(7,5.826157);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(8,9.321658);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(9,7.290309);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(10,7.411627);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(11,8.825516);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(12,7.563822);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(13,8.864042);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(14,9.230606);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(15,5.4196);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(16,5.380902);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(17,4.139717);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(18,4.008634);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(19,1.719775);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(20,1.162065);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(21,1.819024);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(22,0.3669875);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(23,0.07765155);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(24,0.2311426);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(25,0.0002367642);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(27,0.0002367642);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(29,0.0002367642);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(1,0.9695945);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(2,3.227865);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(3,7.735494);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(4,7.557752);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(5,2.790319);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(6,2.1161);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(7,1.226613);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(8,1.763109);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(9,1.383387);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(10,1.359623);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(11,1.694555);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(12,1.340655);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(13,1.947826);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(14,2.022691);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(15,0.7011278);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(16,0.7918541);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(17,0.6524404);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(18,1.186365);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(19,0.3991872);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(20,0.3256351);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(21,1.076007);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(22,0.1546628);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(23,0.07717875);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(24,0.1680251);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(25,0.0002367642);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(27,0.0002367642);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(29,0.0002367642);
   VbbHcc_both_H_dR_Bj0_stack_5->SetEntries(3486);

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
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(3,0.4533354);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(4,0.1511118);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(7,0.1511118);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(11,0.1511118);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(14,0.3022236);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(15,0.3022236);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(3,0.2617333);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(4,0.1511118);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(7,0.1511118);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(11,0.1511118);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(14,0.2137044);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(15,0.2137044);
   VbbHcc_both_H_dR_Bj0_stack_6->SetEntries(10);

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
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(1,0.2244502);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(2,1.010026);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(3,0.6733507);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(4,0.2244502);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(5,0.5611256);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(6,0.1122251);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(7,0.2244502);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(8,0.2244502);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(9,0.4489005);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(10,0.3366753);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(11,0.3366753);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(12,0.1122251);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(13,0.2244502);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(14,0.1122251);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(15,0.2244502);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(16,0.2244502);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(17,0.2244502);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(1,0.1587103);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(2,0.3366753);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(3,0.2748943);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(4,0.1587103);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(5,0.250943);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(6,0.1122251);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(7,0.1587103);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(8,0.1587103);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(9,0.2244502);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(10,0.1943796);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(11,0.1943796);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(12,0.1122251);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(13,0.1587103);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(14,0.1122251);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(15,0.1587103);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(16,0.1587103);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(17,0.1587103);
   VbbHcc_both_H_dR_Bj0_stack_7->SetEntries(49);

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
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(1,1.596375);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(2,9.312188);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(3,5.055187);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(4,6.119438);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(5,2.394562);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(6,1.862437);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(7,1.862437);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(8,1.06425);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(9,2.1285);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(10,1.06425);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(11,1.862437);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(12,1.06425);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(13,1.06425);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(14,1.596375);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(15,1.06425);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(16,0.532125);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(17,1.06425);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(18,0.7981875);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(19,0.532125);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(1,0.6517174);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(2,1.574047);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(3,1.15974);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(4,1.275991);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(5,0.7981875);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(6,0.7039352);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(7,0.7039352);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(8,0.532125);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(9,0.7525384);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(10,0.532125);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(11,0.7039352);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(12,0.532125);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(13,0.532125);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(14,0.6517174);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(15,0.532125);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(16,0.3762692);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(17,0.532125);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(18,0.4608338);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(19,0.3762692);
   VbbHcc_both_H_dR_Bj0_stack_8->SetEntries(158);

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
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(1,1.529207);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(2,6.229493);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(3,6.798308);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(4,5.047895);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(5,3.414268);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(6,2.405788);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(7,1.782014);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(8,1.531955);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(9,1.4083);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(10,1.312123);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(11,1.291514);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(12,1.140379);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(13,1.192589);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(14,1.169232);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(15,1.118396);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(16,0.9796269);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(17,0.6155299);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(18,0.335244);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(19,0.1566304);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(20,0.1044203);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(21,0.07281939);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(22,0.04671433);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(23,0.03022692);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(24,0.01648741);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(25,0.005495803);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(26,0.001373951);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(27,0.005495803);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(28,0.002747902);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(29,0.001373951);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(31,0.001373951);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(1,0.04583727);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(2,0.09251495);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(3,0.09664648);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(4,0.08328001);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(5,0.06849114);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(6,0.0574929);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(7,0.04948131);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(8,0.04587844);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(9,0.04398789);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(10,0.0424593);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(11,0.04212453);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(12,0.03958314);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(13,0.04047912);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(14,0.04008076);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(15,0.03919976);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(16,0.03668732);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(17,0.02908106);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(18,0.0214618);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(19,0.01466978);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(20,0.01197783);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(21,0.01000251);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(22,0.008011441);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(23,0.0064444);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(24,0.004759505);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(25,0.002747902);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(26,0.001373951);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(27,0.002747902);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(28,0.00194306);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(29,0.001373951);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(31,0.001373951);
   VbbHcc_both_H_dR_Bj0_stack_9->SetEntries(28929);

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
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(1,0.594479);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(2,2.721015);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(3,3.21231);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(4,2.423776);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(5,1.58556);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(6,1.138003);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(7,0.878555);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(8,0.7333323);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(9,0.6658165);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(10,0.5949036);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(11,0.5358804);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(12,0.4878974);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(13,0.4509548);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(14,0.4424622);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(15,0.3987256);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(16,0.3770695);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(17,0.2199572);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(18,0.1320593);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(19,0.0777069);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(20,0.04373667);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(21,0.0259023);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(22,0.0152866);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(23,0.01316346);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(24,0.007218674);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(25,0.004670906);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(26,0.002972395);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(27,0.001698511);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(28,0.001273884);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(29,0.0008492557);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(31,0.0008492557);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(1,0.01588812);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(2,0.03399145);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(3,0.03693286);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(4,0.03208119);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(5,0.02594751);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(6,0.02198244);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(7,0.01931473);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(8,0.01764634);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(9,0.01681441);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(10,0.01589379);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(11,0.01508475);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(12,0.01439357);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(13,0.01383792);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(14,0.013707);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(15,0.01301192);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(16,0.01265363);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(17,0.009664366);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(18,0.007488394);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(19,0.005744259);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(20,0.004309502);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(21,0.00331645);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(22,0.002547767);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(23,0.002364228);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(24,0.001750786);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(25,0.001408331);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(26,0.00112346);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(27,0.0008492557);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(28,0.000735477);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(29,0.0006005145);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(31,0.0006005145);
   VbbHcc_both_H_dR_Bj0_stack_10->SetEntries(41891);

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
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(1,4191);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(2,12586);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(3,12389);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(4,9797);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(5,8065);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(6,6688);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(7,5708);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(8,4994);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(9,4499);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(10,4005);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(11,3852);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(12,3636);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(13,3379);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(14,3338);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(15,3202);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(16,3036);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(17,1875);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(18,1281);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(19,962);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(20,641);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(21,487);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(22,340);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(23,220);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(24,127);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(25,78);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(26,45);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(27,22);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(28,19);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(29,11);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(30,7);
   VbbHcc_both_H_dR_Bj0__639->SetBinContent(31,11);
   VbbHcc_both_H_dR_Bj0__639->SetEntries(99520);

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
   5879.986,
   29629.85,
   26719.92,
   19149.29,
   14201.04,
   12699.33,
   12242.66,
   8755.952,
   12239.86,
   8763.415,
   6431.409,
   8755.38,
   7656.827,
   6912.173,
   4274.259,
   3760.569,
   3354.474,
   1213.908,
   1070.319,
   2277.274,
   384.7132,
   657.9268,
   840.7764,
   171.2756,
   46.92036,
   327.3981,
   16.23715,
   34.53678,
   1.397291,
   0.6368242};
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
   847.2198,
   3602.634,
   2638.584,
   2671.92,
   2056.454,
   1539.752,
   2774.498,
   1222.232,
   2476.926,
   2312.948,
   1047.013,
   1874.679,
   1215.951,
   1134.142,
   718.1398,
   646.2484,
   770.4604,
   135.2483,
   326.3386,
   700.5236,
   74.25564,
   319.5672,
   442.172,
   54.72345,
   27.06449,
   309.3559,
   8.852562,
   26.82465,
   0.4254507,
   0.2040431};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_Bj0_fx1465,Graph_from_VbbHcc_both_H_dR_Bj0_fy1465,Graph_from_VbbHcc_both_H_dR_Bj0_fex1465,Graph_from_VbbHcc_both_H_dR_Bj0_fey1465);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_Bj01465 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_Bj01465","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->SetMinimum(0.3895029);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01465->SetMaximum(36555.69);
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
   data_mc_ratio__640->SetBinContent(1,0.7127568);
   data_mc_ratio__640->SetBinContent(2,0.4247744);
   data_mc_ratio__640->SetBinContent(3,0.4636615);
   data_mc_ratio__640->SetBinContent(4,0.5116117);
   data_mc_ratio__640->SetBinContent(5,0.5679162);
   data_mc_ratio__640->SetBinContent(6,0.5266418);
   data_mc_ratio__640->SetBinContent(7,0.4662384);
   data_mc_ratio__640->SetBinContent(8,0.5703549);
   data_mc_ratio__640->SetBinContent(9,0.3675696);
   data_mc_ratio__640->SetBinContent(10,0.4570136);
   data_mc_ratio__640->SetBinContent(11,0.5989356);
   data_mc_ratio__640->SetBinContent(12,0.4152875);
   data_mc_ratio__640->SetBinContent(13,0.4413055);
   data_mc_ratio__640->SetBinContent(14,0.4829162);
   data_mc_ratio__640->SetBinContent(15,0.7491357);
   data_mc_ratio__640->SetBinContent(16,0.8073247);
   data_mc_ratio__640->SetBinContent(17,0.5589549);
   data_mc_ratio__640->SetBinContent(18,1.055269);
   data_mc_ratio__640->SetBinContent(19,0.8987979);
   data_mc_ratio__640->SetBinContent(20,0.2814769);
   data_mc_ratio__640->SetBinContent(21,1.265878);
   data_mc_ratio__640->SetBinContent(22,0.5167748);
   data_mc_ratio__640->SetBinContent(23,0.2616629);
   data_mc_ratio__640->SetBinContent(24,0.741495);
   data_mc_ratio__640->SetBinContent(25,1.662391);
   data_mc_ratio__640->SetBinContent(26,0.1374473);
   data_mc_ratio__640->SetBinContent(27,1.354918);
   data_mc_ratio__640->SetBinContent(28,0.5501381);
   data_mc_ratio__640->SetBinContent(29,7.872374);
   data_mc_ratio__640->SetBinContent(30,10.99205);
   data_mc_ratio__640->SetBinContent(31,9.390628);
   data_mc_ratio__640->SetBinError(1,0.01100988);
   data_mc_ratio__640->SetBinError(2,0.003786295);
   data_mc_ratio__640->SetBinError(3,0.004165651);
   data_mc_ratio__640->SetBinError(4,0.00516885);
   data_mc_ratio__640->SetBinError(5,0.006323857);
   data_mc_ratio__640->SetBinError(6,0.006439723);
   data_mc_ratio__640->SetBinError(7,0.006171149);
   data_mc_ratio__640->SetBinError(8,0.00807088);
   data_mc_ratio__640->SetBinError(9,0.005480013);
   data_mc_ratio__640->SetBinError(10,0.007221508);
   data_mc_ratio__640->SetBinError(11,0.009650216);
   data_mc_ratio__640->SetBinError(12,0.006887109);
   data_mc_ratio__640->SetBinError(13,0.007591809);
   data_mc_ratio__640->SetBinError(14,0.008358505);
   data_mc_ratio__640->SetBinError(15,0.01323884);
   data_mc_ratio__640->SetBinError(16,0.01465202);
   data_mc_ratio__640->SetBinError(17,0.01290851);
   data_mc_ratio__640->SetBinError(18,0.02948416);
   data_mc_ratio__640->SetBinError(19,0.02897841);
   data_mc_ratio__640->SetBinError(20,0.01111767);
   data_mc_ratio__640->SetBinError(21,0.05736241);
   data_mc_ratio__640->SetBinError(22,0.02802605);
   data_mc_ratio__640->SetBinError(23,0.01764131);
   data_mc_ratio__640->SetBinError(24,0.06579704);
   data_mc_ratio__640->SetBinError(25,0.1882288);
   data_mc_ratio__640->SetBinError(26,0.02048944);
   data_mc_ratio__640->SetBinError(27,0.2888694);
   data_mc_ratio__640->SetBinError(28,0.1262103);
   data_mc_ratio__640->SetBinError(29,2.37361);
   data_mc_ratio__640->SetBinError(30,4.154603);
   data_mc_ratio__640->SetBinError(31,3.544553);
   data_mc_ratio__640->SetMinimum(0.4);
   data_mc_ratio__640->SetMaximum(1.6);
   data_mc_ratio__640->SetEntries(31.12873);
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
   0.1440854,
   0.121588,
   0.09874969,
   0.139531,
   0.1448101,
   0.1212467,
   0.2266253,
   0.1395887,
   0.2023656,
   0.2639322,
   0.1627968,
   0.2141173,
   0.1588061,
   0.164079,
   0.1680151,
   0.1718486,
   0.2296814,
   0.1114156,
   0.3048986,
   0.307615,
   0.1930156,
   0.4857184,
   0.5259091,
   0.3195053,
   0.5768177,
   0.9448921,
   0.5452042,
   0.7766981,
   0.3044825,
   0.3204073};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1466,Graph_from_mc_statistical_error_fy1466,Graph_from_mc_statistical_error_fex1466,Graph_from_mc_statistical_error_fey1466);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1466 = new TH1F("Graph_Graph_from_mc_statistical_error1466","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1466->SetMinimum(0.04959711);
   Graph_Graph_from_mc_statistical_error1466->SetMaximum(2.133871);
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
