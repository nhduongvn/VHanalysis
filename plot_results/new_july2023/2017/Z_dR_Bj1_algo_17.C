void Z_dR_Bj1_algo_17()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_17/Z_dR_Bj1_algo_17
//=========  (Fri Jul 14 13:38:26 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_algo_17 = new TCanvas("Z_dR_Bj1_algo_17", "Z_dR_Bj1_algo_17",0,0,600,600);
   Z_dR_Bj1_algo_17->SetHighLightColor(2);
   Z_dR_Bj1_algo_17->Range(0,0,1,1);
   Z_dR_Bj1_algo_17->SetFillColor(0);
   Z_dR_Bj1_algo_17->SetFillStyle(4000);
   Z_dR_Bj1_algo_17->SetBorderMode(0);
   Z_dR_Bj1_algo_17->SetBorderSize(2);
   Z_dR_Bj1_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-85.15051,6.314516,85075.35);
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
   st->SetMaximum(72913.62);
   
   TH1F *st_stack_150 = new TH1F("st_stack_150","",30,0,6);
   st_stack_150->SetMinimum(0.01);
   st_stack_150->SetMaximum(76559.3);
   st_stack_150->SetDirectory(0);
   st_stack_150->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_150->SetLineColor(ci);
   st_stack_150->GetXaxis()->SetRange(1,30);
   st_stack_150->GetXaxis()->SetLabelFont(42);
   st_stack_150->GetXaxis()->SetLabelSize(0.035);
   st_stack_150->GetXaxis()->SetTitleSize(0.035);
   st_stack_150->GetXaxis()->SetTitleFont(42);
   st_stack_150->GetYaxis()->SetTitle("Events/0.2");
   st_stack_150->GetYaxis()->SetLabelFont(42);
   st_stack_150->GetYaxis()->SetLabelSize(0.05);
   st_stack_150->GetYaxis()->SetTitleSize(0.057);
   st_stack_150->GetYaxis()->SetTitleOffset(1.2);
   st_stack_150->GetYaxis()->SetTitleFont(42);
   st_stack_150->GetZaxis()->SetLabelFont(42);
   st_stack_150->GetZaxis()->SetLabelSize(0.035);
   st_stack_150->GetZaxis()->SetTitleSize(0.035);
   st_stack_150->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_150);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(1,296.1139);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(2,28038.77);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(3,30377.49);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(4,23150.57);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(5,14841.22);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(6,13220.68);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(7,8768.239);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(8,7689.676);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(9,5029.46);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(10,5194.554);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(11,2295.339);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(12,2196.819);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(13,2622.096);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(14,2022.305);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(15,2000.002);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(16,2776.286);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(17,3612.222);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(18,1844.165);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(19,1437.211);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(20,2143.076);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(21,2245.871);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(22,2844.431);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(23,1106.707);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(24,1263.146);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(25,705.7584);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(26,384.244);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(27,393.9579);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(28,229.9874);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(29,91.25062);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(30,59.52314);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(31,104.5842);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(1,249.8579);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(2,1914.687);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(3,1983.705);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(4,2611.513);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(5,1380.963);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(6,2030.821);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(7,1029.597);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(8,1021.886);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(9,774.801);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(10,880.0014);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(11,385.6265);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(12,384.7453);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(13,573.9792);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(14,450.7026);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(15,450.4403);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(16,1240.887);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(17,797.763);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(18,509.332);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(19,370.2584);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(20,568.4399);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(21,618.1333);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(22,752.3647);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(23,271.8539);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(24,438.5679);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(25,259.0907);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(26,67.71404);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(27,72.5244);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(28,48.53643);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(29,29.28109);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(30,18.06124);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(31,35.85486);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetEntries(13510);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(1,0.05188141);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(2,69.01588);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(3,156.9908);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(4,177.1342);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(5,178.9787);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(6,146.2935);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(7,123.7365);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(8,97.39474);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(9,76.30648);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(10,66.10583);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(11,51.20076);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(12,38.77006);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(13,38.06748);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(14,32.4152);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(15,28.65239);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(16,30.08324);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(17,26.54374);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(18,21.82121);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(19,21.2376);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(20,20.01193);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(21,16.52616);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(22,13.78338);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(23,10.73095);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(24,8.033468);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(25,5.60777);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(26,6.239388);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(27,2.629146);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(28,1.571786);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(29,0.9008615);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(30,0.909004);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(31,1.341094);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(1,0.05188141);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(2,3.242154);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(3,4.896514);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(4,5.003398);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(5,5.045669);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(6,4.467567);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(7,4.179472);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(8,3.568202);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(9,3.20257);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(10,2.993147);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(11,2.60279);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(12,2.196028);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(13,2.224865);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(14,2.123807);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(15,1.925083);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(16,2.081598);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(17,1.852429);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(18,1.674977);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(19,1.716755);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(20,1.667841);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(21,1.486844);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(22,1.401892);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(23,1.168533);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(24,1.086339);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(25,0.743714);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(26,1.018517);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(27,0.593023);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(28,0.3647093);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(29,0.3166991);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(30,0.3952268);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(31,0.4212947);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetEntries(19837);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_3 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(1,2.840123);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(2,754.7565);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(3,1805.036);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(4,2165.514);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(5,1965.631);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(6,1572.771);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(7,1221.6);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(8,938.1109);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(9,741.106);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(10,588.0469);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(11,490.4186);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(12,411.5886);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(13,365.3121);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(14,306.6557);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(15,293.2491);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(16,276.7027);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(17,253.1084);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(18,233.3912);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(19,217.7803);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(20,190.5685);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(21,169.4168);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(22,136.0705);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(23,99.04418);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(24,71.5417);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(25,48.92579);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(26,32.13247);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(27,18.07933);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(28,11.6408);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(29,6.826079);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(30,4.409426);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(31,5.541416);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(1,0.4000466);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(2,6.987605);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(3,10.8193);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(4,11.7873);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(5,11.15441);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(6,9.92984);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(7,8.74421);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(8,7.645686);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(9,6.77862);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(10,6.039925);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(11,5.503475);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(12,5.043408);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(13,4.765625);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(14,4.351008);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(15,4.255208);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(16,4.15201);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(17,3.965472);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(18,3.810901);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(19,3.692507);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(20,3.459413);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(21,3.258459);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(22,2.930867);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(23,2.496522);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(24,2.122458);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(25,1.757263);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(26,1.417335);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(27,1.0587);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(28,0.8484576);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(29,0.648002);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(30,0.523826);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(31,0.5770435);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetEntries(257832);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_4 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(1,0.1989294);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(2,205.2391);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(3,321.6335);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(4,186.4072);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(5,111.966);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(6,79.67078);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(7,57.82609);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(8,44.16748);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(9,34.89627);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(10,28.69599);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(11,34.5908);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(12,20.85706);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(13,15.21288);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(14,13.99723);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(15,12.97185);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(16,13.48141);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(17,11.52);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(18,11.01133);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(19,9.63885);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(20,11.73323);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(21,11.06862);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(22,9.255823);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(23,9.646355);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(24,5.981539);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(25,7.293613);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(26,3.214769);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(27,3.112085);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(28,1.526107);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(29,1.105995);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(30,0.5530866);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(31,0.3243994);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(1,0.114852);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(2,8.44155);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(3,14.80452);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(4,10.82452);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(5,10.02495);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(6,7.241883);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(7,5.13617);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(8,4.015725);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(9,4.626829);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(10,2.486921);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(11,5.896033);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(12,2.080474);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(13,1.665283);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(14,1.694378);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(15,1.637414);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(16,1.735579);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(17,1.576625);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(18,1.619217);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(19,1.329047);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(20,1.57751);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(21,1.462409);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(22,1.417718);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(23,1.395729);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(24,1.165979);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(25,1.245508);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(26,0.6737438);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(27,0.7980137);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(28,0.3559828);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(29,0.4287083);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(30,0.3723147);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(31,0.1648749);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetEntries(8463);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_5 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(1,0.4196569);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(2,118.4891);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(3,133.944);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(4,78.50638);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(5,55.54717);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(6,39.39533);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(7,37.95427);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(8,32.81469);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(9,18.97665);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(10,14.08555);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(11,15.08661);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(12,12.26019);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(13,10.91783);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(14,7.702896);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(15,10.71623);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(16,6.512654);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(17,5.321902);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(18,3.448778);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(19,5.755763);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(20,14.5278);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(21,8.657172);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(22,13.30911);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(23,3.186061);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(24,5.954997);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(25,3.155734);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(26,2.780785);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(27,1.259298);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(28,1.015677);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(29,0.3368763);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(30,0.2091795);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(31,0.2091795);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(1,0.2254651);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(2,12.38872);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(3,11.18847);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(4,9.554532);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(5,5.720263);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(6,4.805891);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(7,7.939621);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(8,7.651088);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(9,3.52056);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(10,2.395661);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(11,6.886256);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(12,2.756736);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(13,2.725503);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(14,1.869287);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(15,2.496648);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(16,1.791565);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(17,1.751453);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(18,0.7545685);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(19,1.529823);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(20,6.9803);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(21,2.651967);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(22,6.960213);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(23,1.258933);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(24,2.091642);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(25,0.7599285);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(26,0.6392583);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(27,0.3905172);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(28,0.3643802);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(29,0.1626275);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(30,0.1239404);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(31,0.1239404);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetEntries(3604);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_6 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(2,0.2016151);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(3,1.008076);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(4,0.2016151);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(6,1.008076);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(7,0.2016151);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(10,0.6048454);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(11,0.2016151);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(12,0.4032303);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(14,0.2016151);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(15,0.2016151);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(19,0.2016151);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(2,0.2016151);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(3,0.4508252);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(4,0.2016151);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(6,0.4508252);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(7,0.2016151);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(10,0.3492077);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(11,0.2016151);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(12,0.2851269);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(14,0.2016151);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(15,0.2016151);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(19,0.2016151);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetEntries(22);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_7 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(2,4.644257);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(3,5.369922);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(4,2.031863);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(5,1.161064);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(6,0.4353991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(7,0.2902661);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(8,0.2902661);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(9,0.145133);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(10,0.2902661);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(21,0.4353991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(24,0.145133);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(25,0.145133);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(2,0.8209964);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(3,0.8828098);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(4,0.5430381);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(5,0.4104982);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(6,0.2513778);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(7,0.2052491);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(8,0.2052491);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(9,0.145133);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(10,0.2052491);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(21,0.2513778);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(24,0.145133);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(25,0.145133);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetEntries(106);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_8 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(2,4.109008);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(3,5.416419);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(4,2.614823);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(5,0.5603192);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(6,0.7470923);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(8,0.3735461);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(9,0.1867731);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(10,0.1867731);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(11,0.1867731);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(12,0.1867731);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(13,0.3735461);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(14,0.1867731);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(18,0.3735461);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(20,0.1867731);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(26,0.1867731);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(27,0.1867731);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(2,0.8760434);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(3,1.005804);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(4,0.6988408);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(5,0.3235004);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(6,0.3735461);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(8,0.264137);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(9,0.1867731);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(10,0.1867731);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(11,0.1867731);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(12,0.1867731);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(13,0.264137);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(14,0.1867731);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(18,0.264137);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(20,0.1867731);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(26,0.1867731);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(27,0.1867731);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetEntries(86);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_9 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(2,1.137042);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(3,2.48728);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(4,1.965597);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(5,0.9141562);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(6,0.5006862);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(7,0.2923362);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(8,0.2099652);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(9,0.1744326);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(10,0.09044655);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(11,0.1130582);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(12,0.09367678);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(13,0.09852213);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(14,0.1033675);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(15,0.06298956);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(16,0.09206166);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(17,0.07752561);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(18,0.06621979);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(19,0.07429538);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(20,0.07752561);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(21,0.07591049);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(22,0.08560119);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(23,0.06460468);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(24,0.05975932);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(25,0.04683839);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(26,0.0290721);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(27,0.01292094);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(28,0.009690701);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(30,0.003230234);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(31,0.001615117);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(2,0.04285389);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(3,0.06338176);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(4,0.0563442);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(5,0.03842485);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(6,0.02843707);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(7,0.02172918);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(8,0.01841517);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(9,0.01678479);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(10,0.01208643);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(11,0.01351304);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(12,0.01230036);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(13,0.01261447);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(14,0.01292094);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(15,0.0100864);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(16,0.01219387);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(17,0.01118986);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(18,0.01034179);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(19,0.01095426);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(20,0.01118986);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(21,0.01107268);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(22,0.01175823);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(23,0.0102149);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(24,0.009824372);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(25,0.008697671);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(26,0.006852361);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(27,0.00456824);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(28,0.003956212);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(30,0.00228412);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(31,0.001615117);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetEntries(5585);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_10 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(1,0.003317004);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(2,0.6940831);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(3,1.527895);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(4,1.376971);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(5,0.8300803);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(6,0.4834534);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(7,0.2906525);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(8,0.1977764);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(9,0.1538261);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(10,0.1036564);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(11,0.1115343);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(12,0.0762911);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(13,0.0796081);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(14,0.06924246);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(15,0.05887683);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(16,0.07214484);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(17,0.06385233);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(18,0.07173022);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(19,0.06758396);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(20,0.06634009);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(21,0.06924246);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(22,0.06841321);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(23,0.0601207);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(24,0.0389748);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(25,0.03109692);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(26,0.01326802);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(27,0.01451189);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(28,0.004146255);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(29,0.001658502);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(30,0.001658502);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(31,0.001243877);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(1,0.001172738);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(2,0.01696422);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(3,0.02516951);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(4,0.02389409);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(5,0.01855189);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(6,0.01415811);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(7,0.01097779);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(8,0.009055558);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(9,0.007986252);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(10,0.006555805);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(11,0.006800364);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(12,0.005624254);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(13,0.00574522);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(14,0.005358143);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(15,0.004940833);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(16,0.005469286);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(17,0.005145368);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(18,0.005453547);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(19,0.005293584);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(20,0.005244644);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(21,0.005358143);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(22,0.005325961);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(23,0.004992753);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(24,0.004019944);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(25,0.003590762);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(26,0.002345476);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(27,0.002452958);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(28,0.001311161);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(29,0.0008292511);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(30,0.0008292511);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(31,0.0007181525);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetEntries(16167);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_11 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(2,0.1185188);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(3,0.1611856);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(4,0.06637055);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(5,0.02212352);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(6,0.01106176);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(7,0.006321005);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(8,0.006321005);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(9,0.004740753);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(10,0.004740753);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(11,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(12,0.003160502);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(13,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(14,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(15,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(16,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(17,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(18,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(19,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(20,0.004740753);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(21,0.006321005);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(22,0.006321005);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(23,0.003160502);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(24,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(25,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(2,0.01368538);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(3,0.01595975);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(4,0.0102412);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(5,0.005912758);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(6,0.004180952);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(7,0.003160502);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(8,0.003160502);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(9,0.002737075);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(10,0.002737075);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(11,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(12,0.002234813);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(13,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(14,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(15,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(16,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(17,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(18,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(19,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(20,0.002737075);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(21,0.003160502);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(22,0.003160502);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(23,0.002234813);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(24,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(25,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetEntries(279);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_12 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(2,0.03010282);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(3,0.06477296);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(4,0.03633099);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(5,0.007889015);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(6,0.003944507);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(7,0.003114085);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(8,0.002698874);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(9,0.002076057);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(10,0.001868451);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(11,0.00145324);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(12,0.001245634);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(13,0.001038028);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(15,0.001660845);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(16,0.0004152113);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(17,0.0008304226);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(18,0.001038028);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(19,0.001038028);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(20,0.00145324);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(21,0.000622817);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(22,0.001245634);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(23,0.001245634);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(24,0.001660845);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(25,0.001038028);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(26,0.0004152113);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(27,0.0002076057);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(2,0.002499903);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(3,0.003667047);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(4,0.002746365);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(5,0.001279767);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(6,0.0009049321);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(7,0.0008040532);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(8,0.0007485328);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(9,0.0006565067);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(10,0.000622817);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(11,0.0005492729);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(12,0.0005085279);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(13,0.0004642204);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(15,0.0005871975);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(16,0.0002935987);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(17,0.0004152113);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(18,0.0004642204);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(19,0.0004642204);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(20,0.0005492729);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(21,0.0003595835);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(22,0.0005085279);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(23,0.0005085279);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(24,0.0005871975);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(25,0.0004642204);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(26,0.0002935987);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(27,0.0002076057);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetEntries(816);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1__299 = new TH1D("VbbHcc_algo_Z_dR_Bj1__299","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1__299->SetBinContent(1,13);
   VbbHcc_algo_Z_dR_Bj1__299->SetBinContent(2,3880);
   VbbHcc_algo_Z_dR_Bj1__299->SetBinContent(3,4656);
   VbbHcc_algo_Z_dR_Bj1__299->SetBinContent(4,3523);
   VbbHcc_algo_Z_dR_Bj1__299->SetBinContent(5,2899);
   VbbHcc_algo_Z_dR_Bj1__299->SetBinContent(6,2408);
   VbbHcc_algo_Z_dR_Bj1__299->SetBinContent(7,1940);
   VbbHcc_algo_Z_dR_Bj1__299->SetBinContent(8,1486);
   VbbHcc_algo_Z_dR_Bj1__299->SetBinContent(9,1194);
   VbbHcc_algo_Z_dR_Bj1__299->SetBinContent(10,1058);
   VbbHcc_algo_Z_dR_Bj1__299->SetBinContent(11,851);
   VbbHcc_algo_Z_dR_Bj1__299->SetBinContent(12,652);
   VbbHcc_algo_Z_dR_Bj1__299->SetBinContent(13,621);
   VbbHcc_algo_Z_dR_Bj1__299->SetBinContent(14,617);
   VbbHcc_algo_Z_dR_Bj1__299->SetBinContent(15,508);
   VbbHcc_algo_Z_dR_Bj1__299->SetBinContent(16,509);
   VbbHcc_algo_Z_dR_Bj1__299->SetBinContent(17,423);
   VbbHcc_algo_Z_dR_Bj1__299->SetBinContent(18,360);
   VbbHcc_algo_Z_dR_Bj1__299->SetBinContent(19,377);
   VbbHcc_algo_Z_dR_Bj1__299->SetBinContent(20,339);
   VbbHcc_algo_Z_dR_Bj1__299->SetBinContent(21,290);
   VbbHcc_algo_Z_dR_Bj1__299->SetBinContent(22,263);
   VbbHcc_algo_Z_dR_Bj1__299->SetBinContent(23,223);
   VbbHcc_algo_Z_dR_Bj1__299->SetBinContent(24,181);
   VbbHcc_algo_Z_dR_Bj1__299->SetBinContent(25,146);
   VbbHcc_algo_Z_dR_Bj1__299->SetBinContent(26,115);
   VbbHcc_algo_Z_dR_Bj1__299->SetBinContent(27,86);
   VbbHcc_algo_Z_dR_Bj1__299->SetBinContent(28,53);
   VbbHcc_algo_Z_dR_Bj1__299->SetBinContent(29,29);
   VbbHcc_algo_Z_dR_Bj1__299->SetBinContent(30,18);
   VbbHcc_algo_Z_dR_Bj1__299->SetBinContent(31,25);
   VbbHcc_algo_Z_dR_Bj1__299->SetEntries(29743);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1__299->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1__299->SetLineWidth(2);
   VbbHcc_algo_Z_dR_Bj1__299->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR_Bj1__299->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR_Bj1__299->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1__299->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__299->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__299->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__299->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__299->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__299->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__299->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__299->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1__299->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__299->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__299->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__299->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__299->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__299->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fx1299[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fy1299[30] = {
   299.6278,
   29197.2,
   32811.13,
   25766.43,
   17156.84,
   15062,
   10210.44,
   8803.244,
   5901.412,
   5892.77,
   2887.251,
   2681.059,
   3052.161,
   2383.639,
   2345.919,
   3103.232,
   3908.86,
   2114.352,
   1691.969,
   2380.255,
   2452.127,
   3017.012,
   1229.443,
   1354.905,
   770.967,
   428.8409,
   419.2522,
   245.7556,
   100.4221,
   65.60872};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fex1299[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fey1299[30] = {
   249.8583,
   1914.762,
   1983.828,
   2611.585,
   1381.065,
   2030.869,
   1029.686,
   1021.957,
   774.8591,
   880.0341,
   385.7811,
   384.8003,
   574.0123,
   450.7358,
   450.4745,
   1240.899,
   797.7785,
   509.3522,
   370.2864,
   568.4979,
   618.1511,
   752.4053,
   271.8744,
   438.581,
   259.1019,
   67.74316,
   72.54023,
   48.54789,
   29.29356,
   18.07742};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_Bj1_fx1299,Graph_from_VbbHcc_algo_Z_dR_Bj1_fy1299,Graph_from_VbbHcc_algo_Z_dR_Bj1_fex1299,Graph_from_VbbHcc_algo_Z_dR_Bj1_fey1299);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->SetMinimum(42.77817);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->SetMaximum(38269.7);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR_Bj1","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj1_algo_17->cd();
  
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
   
   TH1D *data_mc_ratio__300 = new TH1D("data_mc_ratio__300","",30,0,6);
   data_mc_ratio__300->SetBinContent(1,0.04338716);
   data_mc_ratio__300->SetBinContent(2,0.1328894);
   data_mc_ratio__300->SetBinContent(3,0.1419031);
   data_mc_ratio__300->SetBinContent(4,0.1367283);
   data_mc_ratio__300->SetBinContent(5,0.1689705);
   data_mc_ratio__300->SetBinContent(6,0.1598725);
   data_mc_ratio__300->SetBinContent(7,0.1900016);
   data_mc_ratio__300->SetBinContent(8,0.1688014);
   data_mc_ratio__300->SetBinContent(9,0.2023245);
   data_mc_ratio__300->SetBinContent(10,0.179542);
   data_mc_ratio__300->SetBinContent(11,0.294744);
   data_mc_ratio__300->SetBinContent(12,0.2431875);
   data_mc_ratio__300->SetBinContent(13,0.2034624);
   data_mc_ratio__300->SetBinContent(14,0.258848);
   data_mc_ratio__300->SetBinContent(15,0.2165463);
   data_mc_ratio__300->SetBinContent(16,0.1640226);
   data_mc_ratio__300->SetBinContent(17,0.1082157);
   data_mc_ratio__300->SetBinContent(18,0.170265);
   data_mc_ratio__300->SetBinContent(19,0.2228173);
   data_mc_ratio__300->SetBinContent(20,0.1424217);
   data_mc_ratio__300->SetBinContent(21,0.1182647);
   data_mc_ratio__300->SetBinContent(22,0.08717235);
   data_mc_ratio__300->SetBinContent(23,0.1813829);
   data_mc_ratio__300->SetBinContent(24,0.1335887);
   data_mc_ratio__300->SetBinContent(25,0.1893726);
   data_mc_ratio__300->SetBinContent(26,0.2681647);
   data_mc_ratio__300->SetBinContent(27,0.2051272);
   data_mc_ratio__300->SetBinContent(28,0.2156614);
   data_mc_ratio__300->SetBinContent(29,0.2887811);
   data_mc_ratio__300->SetBinContent(30,0.2743538);
   data_mc_ratio__300->SetBinContent(31,0.2232081);
   data_mc_ratio__300->SetBinError(1,0.01203343);
   data_mc_ratio__300->SetBinError(2,0.002133411);
   data_mc_ratio__300->SetBinError(3,0.002079626);
   data_mc_ratio__300->SetBinError(4,0.002303574);
   data_mc_ratio__300->SetBinError(5,0.003138245);
   data_mc_ratio__300->SetBinError(6,0.003257958);
   data_mc_ratio__300->SetBinError(7,0.004313764);
   data_mc_ratio__300->SetBinError(8,0.004378917);
   data_mc_ratio__300->SetBinError(9,0.00585526);
   data_mc_ratio__300->SetBinError(10,0.0055198);
   data_mc_ratio__300->SetBinError(11,0.01010369);
   data_mc_ratio__300->SetBinError(12,0.009523957);
   data_mc_ratio__300->SetBinError(13,0.008164665);
   data_mc_ratio__300->SetBinError(14,0.01042083);
   data_mc_ratio__300->SetBinError(15,0.009607688);
   data_mc_ratio__300->SetBinError(16,0.007270172);
   data_mc_ratio__300->SetBinError(17,0.005261627);
   data_mc_ratio__300->SetBinError(18,0.008973751);
   data_mc_ratio__300->SetBinError(19,0.01147567);
   data_mc_ratio__300->SetBinError(20,0.007735287);
   data_mc_ratio__300->SetBinError(21,0.006944741);
   data_mc_ratio__300->SetBinError(22,0.005375277);
   data_mc_ratio__300->SetBinError(23,0.0121463);
   data_mc_ratio__300->SetBinError(24,0.00992957);
   data_mc_ratio__300->SetBinError(25,0.01567259);
   data_mc_ratio__300->SetBinError(26,0.02500649);
   data_mc_ratio__300->SetBinError(27,0.02211943);
   data_mc_ratio__300->SetBinError(28,0.02962337);
   data_mc_ratio__300->SetBinError(29,0.0536253);
   data_mc_ratio__300->SetBinError(30,0.0646658);
   data_mc_ratio__300->SetBinError(31,0.08426608);
   data_mc_ratio__300->SetMinimum(0.4);
   data_mc_ratio__300->SetMaximum(1.6);
   data_mc_ratio__300->SetEntries(505.0996);
   data_mc_ratio__300->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__300->SetLineColor(ci);
   data_mc_ratio__300->SetLineWidth(2);
   data_mc_ratio__300->SetMarkerStyle(20);
   data_mc_ratio__300->SetMarkerSize(1.2);
   data_mc_ratio__300->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__300->GetXaxis()->SetRange(1,30);
   data_mc_ratio__300->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__300->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__300->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__300->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__300->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__300->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__300->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__300->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__300->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__300->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__300->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__300->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__300->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__300->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__300->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__300->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__300->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1300[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1300[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1300[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1300[30] = {
   0.8338956,
   0.06558033,
   0.06046205,
   0.1013561,
   0.08049649,
   0.134834,
   0.1008464,
   0.1160887,
   0.1313006,
   0.1493413,
   0.1336154,
   0.1435255,
   0.1880675,
   0.1890957,
   0.1920248,
   0.399873,
   0.2040949,
   0.2409023,
   0.2188493,
   0.2388391,
   0.2520877,
   0.2493876,
   0.2211362,
   0.3236987,
   0.3360739,
   0.157968,
   0.1730229,
   0.1975454,
   0.2917043,
   0.2755338};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1300,Graph_from_mc_statistical_error_fy1300,Graph_from_mc_statistical_error_fex1300,Graph_from_mc_statistical_error_fey1300);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1300 = new TH1F("Graph_Graph_from_mc_statistical_error1300","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1300->SetMinimum(0.1494939);
   Graph_Graph_from_mc_statistical_error1300->SetMaximum(2.000675);
   Graph_Graph_from_mc_statistical_error1300->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1300->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1300->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1300->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1300->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1300->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1300->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1300->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1300->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1300->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1300->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1300->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1300->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1300->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1300->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1300->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1300);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_algo_17->cd();
   Z_dR_Bj1_algo_17->Modified();
   Z_dR_Bj1_algo_17->cd();
   Z_dR_Bj1_algo_17->SetSelected(Z_dR_Bj1_algo_17);
}
