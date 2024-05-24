#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagFirst_VR_18()
{
//=========Macro generated from canvas: H_mass_tagFirst_VR_18/H_mass_tagFirst_VR_18
//=========  (Fri May 24 11:23:58 2024) by ROOT version 6.28/10
   TCanvas *H_mass_tagFirst_VR_18 = new TCanvas("H_mass_tagFirst_VR_18", "H_mass_tagFirst_VR_18",0,0,600,600);
   H_mass_tagFirst_VR_18->SetHighLightColor(2);
   H_mass_tagFirst_VR_18->Range(0,0,1,1);
   H_mass_tagFirst_VR_18->SetFillColor(0);
   H_mass_tagFirst_VR_18->SetFillStyle(4000);
   H_mass_tagFirst_VR_18->SetBorderMode(0);
   H_mass_tagFirst_VR_18->SetBorderSize(2);
   H_mass_tagFirst_VR_18->SetFrameFillStyle(1000);
   H_mass_tagFirst_VR_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-37.13002,315.7258,37102.89);
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
   st->SetMaximum(33388.89);
   
   TH1F *st_stack_115 = new TH1F("st_stack_115","",1000,0,2000);
   st_stack_115->SetMinimum(0.01);
   st_stack_115->SetMaximum(33388.89);
   st_stack_115->SetDirectory(nullptr);
   st_stack_115->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_115->SetLineColor(ci);
   st_stack_115->SetLineWidth(0);
   st_stack_115->GetXaxis()->SetRange(1,150);
   st_stack_115->GetXaxis()->SetLabelFont(42);
   st_stack_115->GetXaxis()->SetTitleOffset(1);
   st_stack_115->GetXaxis()->SetTitleFont(42);
   st_stack_115->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_115->GetYaxis()->SetLabelFont(42);
   st_stack_115->GetYaxis()->SetLabelSize(0.05);
   st_stack_115->GetYaxis()->SetTitleSize(0.057);
   st_stack_115->GetYaxis()->SetTitleOffset(1.2);
   st_stack_115->GetYaxis()->SetTitleFont(42);
   st_stack_115->GetZaxis()->SetLabelFont(42);
   st_stack_115->GetZaxis()->SetTitleOffset(1);
   st_stack_115->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_115);
   
   
   TH1D *VH_tagFirst_2b1c_H_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(43,4600.239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(44,9374.941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(45,9521.445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(46,9749.599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(47,9896.528);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(48,4918.31);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(78,5116.546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(79,9835.829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(80,10055.65);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(81,9848.799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(82,9942.844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(83,4902.65);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1000,51.72844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1001,30643.63);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(5,0.03359878);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(7,0.2055689);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(8,0.06932864);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(9,0.1281793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(10,0.05190091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(11,0.665988);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(12,2.735667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(13,7.558936);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(14,11.98465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(15,17.74641);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(16,23.41977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(17,28.95139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(18,34.69766);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(19,40.0845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(20,45.39244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(21,50.16386);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(22,54.33285);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(23,58.86088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(24,61.80924);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(25,65.31449);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(26,68.62345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(27,70.26271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(28,72.71393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(29,74.87726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(30,76.21896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(31,77.88559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(32,79.09016);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(33,79.95525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(34,81.27622);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(35,82.59967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(36,82.93449);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(37,83.96313);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(38,85.03116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(39,87.14812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(40,87.68555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(41,87.00188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(42,87.20155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(43,86.53281);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(44,86.533);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(45,89.70521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(46,85.72083);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(47,84.14774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(48,82.99934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(49,82.55593);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(50,82.86755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(51,81.99078);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(52,81.25475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(53,80.42739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(54,81.14921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(55,81.14257);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(56,80.36881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(57,80.91789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(58,79.92863);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(59,79.78716);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(60,80.15841);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(61,79.9375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(62,80.40668);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(63,79.11782);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(64,78.81968);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(65,78.81495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(66,79.08359);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(67,78.9293);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(68,78.73155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(69,78.49959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(70,77.73876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(71,77.5731);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(72,78.39397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(73,77.84755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(74,77.24547);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(75,77.21811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(76,77.18607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(77,76.10861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(78,77.12478);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(79,75.61393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(80,76.15649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(81,75.33144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(82,75.75833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(83,74.75188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(84,74.58004);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(85,74.17781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(86,74.41392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(87,73.89799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(88,73.81354);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(89,73.4214);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(90,73.88141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(91,72.85974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(92,72.63627);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(93,72.71836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(94,71.97199);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(95,71.70962);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(96,71.65399);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(97,71.3589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(98,71.15035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(99,71.72425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(100,70.32671);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(101,70.61805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(102,69.63146);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(103,69.52529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(104,69.69072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(105,69.49774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(106,70.66259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(107,68.63496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(108,68.15077);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(109,68.18735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(110,67.69249);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(111,67.71164);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(112,68.04756);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(113,67.14686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(114,68.00911);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(115,68.31082);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(116,66.3895);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(117,65.99504);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(118,66.07871);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(119,66.0753);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(120,65.51878);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(121,65.19796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(122,65.90895);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(123,64.7282);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(124,65.481);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(125,64.81484);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(126,64.5216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(127,63.76586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(128,63.39913);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(129,66.62319);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(130,62.98895);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(131,63.402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(132,62.81036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(133,62.40258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(134,62.24203);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(135,63.29696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(136,61.62421);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(137,61.53115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(138,61.89919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(139,61.97631);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(140,61.41472);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(141,61.21166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(142,61.20606);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(143,60.75662);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(144,60.70473);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(145,60.67752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(146,60.14161);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(147,60.35678);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(148,60.24941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(149,60.20072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(150,59.39604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(151,60.85065);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(152,59.08876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(153,58.39605);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(154,58.97163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(155,59.92415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(156,58.41628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(157,58.43623);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(158,58.15565);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(159,57.93923);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(160,57.58371);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(161,57.41177);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(162,57.44825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(163,57.45371);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(164,57.29775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(165,57.12187);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(166,57.04281);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(167,56.84314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(168,56.85838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(169,56.0505);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(170,56.50168);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(171,56.62117);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(172,55.7336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(173,56.38765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(174,55.23374);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(175,55.35569);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(176,55.30345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(177,55.30659);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(178,54.73217);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(179,54.75366);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(180,54.71527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(181,54.46759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(182,54.42636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(183,54.01173);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(184,54.38832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(185,53.825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(186,53.93222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(187,53.46388);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(188,53.42381);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(189,53.25572);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(190,53.56036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(191,53.29681);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(192,53.26861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(193,53.32016);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(194,52.80019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(195,52.88295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(196,52.3831);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(197,52.66809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(198,52.34333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(199,52.14163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(200,52.02037);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(201,51.5739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(202,52.16491);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(203,51.83213);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(204,51.14405);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(205,51.42734);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(206,51.65876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(207,51.01749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(208,51.24019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(209,50.63649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(210,50.61534);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(211,50.95186);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(212,50.32557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(213,50.24444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(214,50.41188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(215,49.87568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(216,50.18341);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(217,50.43789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(218,49.34262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(219,49.8262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(220,49.72429);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(221,49.92647);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(222,49.93475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(223,49.75165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(224,59.42137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(225,48.66491);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(226,48.60265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(227,48.46287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(228,48.72344);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(229,48.18683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(230,48.18562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(231,48.97457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(232,48.20876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(233,48.36525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(234,47.82821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(235,47.77517);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(236,47.53948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(237,47.54163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(238,47.5121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(239,46.95614);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(240,47.15255);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(241,47.20249);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(242,47.01104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(243,47.44529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(244,46.51376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(245,46.42941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(246,46.48264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(247,45.76328);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(248,47.34375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(249,46.15213);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(250,46.1912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(251,46.36307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(252,46.34915);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(253,45.99852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(254,45.89248);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(255,46.46945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(256,45.41852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(257,45.44584);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(258,45.71707);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(259,44.90871);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(260,44.8724);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(261,45.31309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(262,44.26329);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(263,45.44464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(264,44.72423);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(265,44.74999);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(266,44.23106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(267,45.08598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(268,44.37761);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(269,44.09645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(270,43.77125);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(271,43.74993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(272,43.97402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(273,43.73134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(274,51.8004);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(275,43.32778);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(276,43.25637);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(277,43.67825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(278,43.28157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(279,42.66834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(280,44.31581);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(281,43.03512);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(282,42.47295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(283,43.52963);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(284,42.32242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(285,42.2556);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(286,42.33153);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(287,42.2161);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(288,41.92855);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(289,41.88109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(290,42.1987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(291,41.34625);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(292,42.17923);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(293,41.73238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(294,41.4338);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(295,41.95438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(296,40.70018);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(297,41.01507);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(298,41.1667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(299,40.3788);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(300,41.90105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(301,40.82135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(302,41.01002);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(303,40.08989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(304,41.21969);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(305,40.12137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(306,40.55798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(307,40.74075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(308,39.86056);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(309,39.99564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(310,40.16562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(311,39.1475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(312,39.0684);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(313,39.67138);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(314,39.51615);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(315,39.41194);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(316,39.52714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(317,38.96243);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(318,38.8376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(319,38.76466);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(320,39.62429);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(321,38.55607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(322,38.63505);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(323,38.27399);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(324,38.84088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(325,38.75233);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(326,37.98302);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(327,38.54671);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(328,37.97604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(329,37.8313);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(330,38.09812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(331,38.14416);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(332,37.82986);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(333,37.90528);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(334,37.0402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(335,37.28527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(336,36.91886);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(337,37.48662);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(338,36.44858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(339,36.9829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(340,36.58739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(341,36.74914);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(342,36.74643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(343,36.47766);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(344,36.44784);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(345,36.43733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(346,37.27844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(347,36.72938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(348,36.41439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(349,36.48313);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(350,35.78821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(351,36.70179);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(352,35.97992);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(353,35.72071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(354,35.56236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(355,35.53337);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(356,35.81671);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(357,36.76212);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(358,35.67824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(359,35.21338);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(360,35.02729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(361,35.18527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(362,36.04822);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(363,35.12746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(364,35.18217);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(365,35.44748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(366,34.47062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(367,34.20974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(368,34.72092);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(369,34.58257);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(370,34.32336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(371,34.25501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(372,34.18115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(373,33.93908);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(374,34.58542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(375,34.03946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(376,34.14236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(377,33.81896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(378,33.38457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(379,33.84037);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(380,33.38438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(381,33.33231);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(382,34.06318);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(383,33.32966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(384,56.68751);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(385,33.05231);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(386,32.89566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(387,32.90621);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(388,32.76724);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(389,32.64374);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(390,34.03744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(391,32.26601);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(392,32.31915);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(393,33.07109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(394,32.46506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(395,32.28706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(396,32.27835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(397,40.06236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(398,31.97254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(399,31.55012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(400,31.38997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(401,31.54341);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(402,31.66714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(403,31.71779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(404,31.62392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(405,31.35555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(406,31.72018);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(407,31.80018);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(408,31.03347);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(409,30.84594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(410,30.89983);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(411,31.21697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(412,31.14852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(413,31.13953);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(414,30.73006);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(415,30.78993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(416,30.572);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(417,30.70798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(418,30.62522);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(419,30.44096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(420,30.5069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(421,30.62061);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(422,30.99506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(423,29.75221);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(424,29.55259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(425,29.93826);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(426,29.69886);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(427,29.41351);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(428,29.76209);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(429,29.7755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(430,28.93794);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(431,29.82643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(432,29.39003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(433,28.95701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(434,29.40286);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(435,29.34157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(436,29.53505);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(437,29.00288);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(438,29.62404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(439,28.62247);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(440,28.68981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(441,28.32724);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(442,28.77189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(443,28.41556);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(444,28.58391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(445,28.65168);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(446,28.20566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(447,28.587);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(448,28.37741);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(449,28.37508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(450,28.40116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(451,28.21131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(452,27.97915);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(453,27.69764);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(454,27.32043);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(455,28.02957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(456,27.97898);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(457,27.50643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(458,27.67286);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(459,27.11326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(460,28.38742);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(461,27.21155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(462,27.14215);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(463,27.52978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(464,27.35246);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(465,27.10489);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(466,27.1215);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(467,26.96207);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(468,26.73455);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(469,26.67886);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(470,26.87367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(471,26.71433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(472,26.37815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(473,26.6309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(474,26.50043);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(475,26.10783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(476,27.90945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(477,26.41834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(478,26.36748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(479,26.21926);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(480,26.47083);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(481,26.24865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(482,26.05949);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(483,26.51169);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(484,26.22314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(485,25.80874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(486,26.03102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(487,25.61896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(488,26.10111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(489,25.53623);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(490,25.88507);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(491,25.47594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(492,25.3968);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(493,25.86738);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(494,25.37963);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(495,25.2951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(496,25.04033);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(497,25.39465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(498,25.15547);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(499,25.44351);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(500,25.35823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(501,24.92465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(502,24.97212);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(503,24.68694);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(504,24.94356);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(505,25.12612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(506,24.71751);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(507,24.33944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(508,24.56355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(509,24.02172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(510,25.12802);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(511,24.80842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(512,23.85601);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(513,24.15313);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(514,23.87018);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(515,23.80449);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(516,23.7211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(517,24.04482);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(518,23.51644);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(519,23.67192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(520,23.38787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(521,24.95741);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(522,23.86098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(523,23.44263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(524,23.29581);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(525,23.1068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(526,23.22931);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(527,23.73047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(528,23.0069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(529,23.18051);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(530,23.18697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(531,22.89606);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(532,23.48267);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(533,23.06399);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(534,23.08106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(535,22.6812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(536,22.96307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(537,23.19925);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(538,22.66649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(539,23.34128);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(540,22.30694);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(541,22.7086);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(542,22.19821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(543,22.61555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(544,22.44495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(545,22.75642);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(546,22.38508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(547,22.40426);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(548,23.13916);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(549,22.10938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(550,21.93057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(551,21.88504);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(552,22.10789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(553,21.85238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(554,21.73589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(555,21.42228);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(556,21.25179);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(557,21.85157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(558,21.27647);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(559,21.73201);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(560,21.98033);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(561,21.81765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(562,21.65136);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(563,21.41244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(564,21.04137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(565,21.45422);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(566,21.12842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(567,21.33909);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(568,20.92607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(569,21.57249);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(570,21.38376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(571,20.74647);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(572,21.13969);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(573,20.93115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(574,22.7136);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(575,20.72963);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(576,20.52824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(577,20.93335);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(578,20.40728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(579,20.16899);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(580,20.20753);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(581,20.62915);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(582,20.60511);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(583,20.64206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(584,20.03958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(585,20.72813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(586,20.71205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(587,20.08551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(588,20.35202);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(589,20.33431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(590,20.10476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(591,19.61106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(592,20.79977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(593,20.13132);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(594,19.82845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(595,19.73807);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(596,20.09926);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(597,19.98137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(598,19.64996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(599,19.49325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(600,20.03764);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(601,19.15835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(602,19.43388);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(603,19.28744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(604,19.51814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(605,19.19185);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(606,19.23004);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(607,19.42222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(608,19.14426);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(609,19.17381);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(610,19.1237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(611,18.83734);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(612,19.1677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(613,19.1172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(614,19.20594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(615,19.09511);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(616,18.95287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(617,19.21876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(618,18.74678);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(619,19.00889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(620,18.67633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(621,18.22351);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(622,18.6783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(623,18.4953);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(624,18.31276);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(625,18.53788);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(626,18.75855);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(627,18.66012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(628,18.93031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(629,18.11434);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(630,18.21949);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(631,18.03247);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(632,18.0663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(633,18.39181);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(634,17.47439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(635,18.10329);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(636,18.20525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(637,18.02508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(638,17.77052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(639,18.20155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(640,17.80356);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(641,17.4913);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(642,17.85202);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(643,17.92306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(644,17.35221);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(645,17.4655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(646,17.70756);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(647,17.70585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(648,17.52472);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(649,17.29179);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(650,17.61407);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(651,17.52359);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(652,17.36751);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(653,17.06141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(654,17.23098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(655,16.75565);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(656,16.95591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(657,17.11089);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(658,17.1804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(659,17.17249);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(660,17.61211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(661,17.09326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(662,17.1066);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(663,17.19957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(664,17.05366);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(665,16.67548);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(666,16.82381);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(667,16.66432);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(668,16.52797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(669,16.88954);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(670,16.89423);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(671,16.32461);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(672,16.45357);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(673,16.72786);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(674,16.73273);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(675,16.57277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(676,16.20299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(677,16.87229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(678,16.01272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(679,16.2096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(680,16.0072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(681,16.11416);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(682,16.14812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(683,15.95924);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(684,16.05883);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(685,15.88197);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(686,16.28188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(687,15.91236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(688,15.96162);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(689,16.06054);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(690,15.99392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(691,15.90936);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(692,15.64801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(693,15.88503);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(694,15.6159);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(695,15.85168);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(696,15.77604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(697,15.90018);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(698,15.62923);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(699,15.63817);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(700,15.58255);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(701,15.21775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(702,15.65732);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(703,15.26214);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(704,15.47479);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(705,15.1474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(706,15.11953);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(707,15.63345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(708,14.98471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(709,14.66721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(710,15.13549);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(711,15.31786);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(712,14.82136);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(713,15.69675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(714,15.08111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(715,14.98746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(716,14.99031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(717,14.81237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(718,15.60125);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(719,14.84263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(720,14.98107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(721,15.85315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(722,14.66628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(723,14.56748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(724,14.59798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(725,15.16529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(726,14.96207);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(727,14.61002);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(728,14.61577);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(729,14.32298);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(730,14.51279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(731,14.57943);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(732,14.5826);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(733,13.78053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(734,14.44092);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(735,14.48112);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(736,14.29919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(737,13.92806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(738,14.66286);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(739,14.43089);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(740,14.4762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(741,14.13657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(742,14.06798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(743,13.70618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(744,13.94533);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(745,13.9447);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(746,13.76658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(747,13.73574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(748,13.66596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(749,14.09195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(750,14.26);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(751,13.33205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(752,14.16353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(753,13.54179);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(754,14.04746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(755,13.5014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(756,13.68795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(757,13.6135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(758,13.94449);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(759,13.80593);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(760,13.919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(761,13.47508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(762,13.53048);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(763,13.40177);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(764,13.17921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(765,13.28027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(766,13.35646);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(767,13.30469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(768,13.21549);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(769,13.34313);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(770,13.48837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(771,12.93451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(772,13.15229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(773,13.74829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(774,13.12952);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(775,13.31009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(776,12.78789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(777,13.26666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(778,12.58749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(779,13.38478);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(780,13.45395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(781,12.93136);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(782,13.08542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(783,13.54413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(784,12.78779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(785,12.72487);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(786,12.58368);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(787,12.20952);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(788,12.88747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(789,12.75574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(790,12.44529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(791,12.61823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(792,12.93742);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(793,12.46311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(794,12.63559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(795,12.11397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(796,14.58147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(797,12.27237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(798,12.36419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(799,12.54439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(800,12.21519);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(801,12.22064);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(802,12.34157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(803,12.64755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(804,12.26706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(805,12.16059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(806,12.08402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(807,12.11623);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(808,12.31811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(809,12.78179);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(810,12.07947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(811,12.00702);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(812,12.42453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(813,11.7599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(814,12.21088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(815,11.78937);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(816,11.85391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(817,11.97096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(818,12.14003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(819,11.46823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(820,12.10126);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(821,12.26254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(822,11.67236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(823,11.62689);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(824,11.78469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(825,11.93896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(826,11.47847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(827,11.42123);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(828,11.9862);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(829,11.82917);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(830,12.23444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(831,11.60206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(832,11.83458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(833,11.63928);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(834,11.36585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(835,11.2174);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(836,11.16011);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(837,11.3506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(838,11.67501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(839,11.54872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(840,11.29622);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(841,11.43534);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(842,11.41436);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(843,11.23435);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(844,11.41987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(845,11.76338);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(846,11.03975);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(847,11.15423);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(848,10.82729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(849,11.25573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(850,10.86008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(851,11.1204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(852,10.63088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(853,10.59058);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(854,11.05594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(855,11.08663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(856,11.11907);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(857,10.93412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(858,10.93343);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(859,10.41281);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(860,10.65993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(861,11.3127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(862,10.71548);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(863,10.85563);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(864,10.49627);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(865,10.71241);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(866,10.68259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(867,10.52927);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(868,10.50035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(869,10.42897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(870,10.45029);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(871,10.6105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(872,10.63373);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(873,10.58261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(874,10.52356);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(875,10.43818);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(876,10.35107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(877,10.13711);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(878,10.17044);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(879,10.24587);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(880,10.34692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(881,10.35129);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(882,10.74633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(883,10.38635);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(884,10.27287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(885,10.438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(886,10.11425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(887,10.1433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(888,10.35952);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(889,9.836104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(890,9.527906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(891,10.33735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(892,9.738989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(893,10.23747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(894,9.770082);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(895,10.25436);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(896,9.948875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(897,10.26215);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(898,10.33852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(899,9.319114);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(900,9.864638);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(901,9.704048);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(902,9.626942);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(903,9.952773);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(904,10.22779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(905,10.04833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(906,9.907882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(907,9.832532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(908,9.798199);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(909,9.761891);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(910,9.432626);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(911,9.503782);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(912,9.499659);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(913,9.737717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(914,9.99576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(915,9.818147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(916,9.519542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(917,9.74455);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(918,9.70026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(919,9.215215);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(920,9.840746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(921,9.305557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(922,9.395859);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(923,9.648557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(924,9.051657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(925,9.015108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(926,9.300373);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(927,9.658458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(928,9.352478);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(929,9.702765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(930,9.298238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(931,9.373652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(932,9.243089);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(933,9.382919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(934,9.412517);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(935,9.230977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(936,9.787635);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(937,9.525653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(938,9.082231);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(939,8.884443);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(940,9.079538);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(941,9.617048);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(942,8.806166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(943,8.97837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(944,9.045107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(945,9.084608);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(946,9.361838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(947,8.905757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(948,9.154453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(949,9.266045);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(950,9.455861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(951,8.984777);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(952,8.759606);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(953,8.824922);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(954,9.101809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(955,8.73848);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(956,9.042411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(957,8.791765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(958,8.578782);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(959,9.896999);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(960,8.532333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(961,8.675109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(962,8.774676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(963,8.314801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(964,8.660439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(965,8.776035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(966,8.691411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(967,8.782545);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(968,8.845057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(969,8.582472);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(970,8.514517);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(971,8.427359);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(972,8.49646);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(973,8.671628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(974,8.152211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(975,8.513794);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(976,8.374483);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(977,8.218593);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(978,8.668084);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(979,7.839378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(980,8.379902);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(981,8.765119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(982,8.163949);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(983,8.306589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(984,8.256749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(985,8.286393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(986,8.427064);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(987,8.283184);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(988,8.113023);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(989,8.073358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(990,8.50262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(991,8.237252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(992,8.26586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(993,8.373106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(994,7.971033);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(995,8.10892);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(996,8.60409);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(997,7.842522);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(998,8.132645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(999,8.355991);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1000,7.968432);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1001,129.375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetEntries(4025610);

   ci = TColor::GetColor("#ff6600");
   VH_tagFirst_2b1c_H_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_H_mass_stack_1->SetLineColor(ci);
   VH_tagFirst_2b1c_H_mass_stack_1->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_2b1c_H_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_H_mass_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_H_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_H_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_H_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_H_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_H_mass_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_H_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_2b1c_H_mass_stack_1,"");
   st->Draw("hist");
   
   TH1D *VH_tagFirst_H_mass__229 = new TH1D("VH_tagFirst_H_mass__229","",1000,0,2000);
   VH_tagFirst_H_mass__229->SetBinContent(43,7538);
   VH_tagFirst_H_mass__229->SetBinContent(44,15025);
   VH_tagFirst_H_mass__229->SetBinContent(45,14662);
   VH_tagFirst_H_mass__229->SetBinContent(46,14522);
   VH_tagFirst_H_mass__229->SetBinContent(47,14341);
   VH_tagFirst_H_mass__229->SetBinContent(48,6922);
   VH_tagFirst_H_mass__229->SetBinContent(78,6038);
   VH_tagFirst_H_mass__229->SetBinContent(79,11627);
   VH_tagFirst_H_mass__229->SetBinContent(80,11797);
   VH_tagFirst_H_mass__229->SetBinContent(81,11608);
   VH_tagFirst_H_mass__229->SetBinContent(82,11687);
   VH_tagFirst_H_mass__229->SetBinContent(83,5804);
   VH_tagFirst_H_mass__229->SetBinContent(1000,80);
   VH_tagFirst_H_mass__229->SetBinContent(1001,41645);
   VH_tagFirst_H_mass__229->SetEntries(3004483);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_mass__229->SetLineColor(ci);
   VH_tagFirst_H_mass__229->SetLineWidth(2);
   VH_tagFirst_H_mass__229->SetMarkerStyle(20);
   VH_tagFirst_H_mass__229->SetMarkerSize(1.2);
   VH_tagFirst_H_mass__229->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_H_mass__229->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__229->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__229->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__229->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__229->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__229->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__229->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__229->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__229->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fx1229[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
   35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65,
   67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97,
   99, 101, 103, 105, 107, 109, 111, 113, 115, 117, 119, 121, 123, 125, 127, 129,
   131, 133, 135, 137, 139, 141, 143, 145, 147, 149, 151, 153, 155, 157, 159, 161,
   163, 165, 167, 169, 171, 173, 175, 177, 179, 181, 183, 185, 187, 189, 191, 193,
   195, 197, 199, 201, 203, 205, 207, 209, 211, 213, 215, 217, 219, 221, 223, 225,
   227, 229, 231, 233, 235, 237, 239, 241, 243, 245, 247, 249, 251, 253, 255, 257,
   259, 261, 263, 265, 267, 269, 271, 273, 275, 277, 279, 281, 283, 285, 287, 289,
   291, 293, 295, 297, 299, 301, 303, 305, 307, 309, 311, 313, 315, 317, 319, 321,
   323, 325, 327, 329, 331, 333, 335, 337, 339, 341, 343, 345, 347, 349, 351, 353,
   355, 357, 359, 361, 363, 365, 367, 369, 371, 373, 375, 377, 379, 381, 383, 385,
   387, 389, 391, 393, 395, 397, 399, 401, 403, 405, 407, 409, 411, 413, 415, 417,
   419, 421, 423, 425, 427, 429, 431, 433, 435, 437, 439, 441, 443, 445, 447, 449,
   451, 453, 455, 457, 459, 461, 463, 465, 467, 469, 471, 473, 475, 477, 479, 481,
   483, 485, 487, 489, 491, 493, 495, 497, 499, 501, 503, 505, 507, 509, 511, 513,
   515, 517, 519, 521, 523, 525, 527, 529, 531, 533, 535, 537, 539, 541, 543, 545,
   547, 549, 551, 553, 555, 557, 559, 561, 563, 565, 567, 569, 571, 573, 575, 577,
   579, 581, 583, 585, 587, 589, 591, 593, 595, 597, 599, 601, 603, 605, 607, 609,
   611, 613, 615, 617, 619, 621, 623, 625, 627, 629, 631, 633, 635, 637, 639, 641,
   643, 645, 647, 649, 651, 653, 655, 657, 659, 661, 663, 665, 667, 669, 671, 673,
   675, 677, 679, 681, 683, 685, 687, 689, 691, 693, 695, 697, 699, 701, 703, 705,
   707, 709, 711, 713, 715, 717, 719, 721, 723, 725, 727, 729, 731, 733, 735, 737,
   739, 741, 743, 745, 747, 749, 751, 753, 755, 757, 759, 761, 763, 765, 767, 769,
   771, 773, 775, 777, 779, 781, 783, 785, 787, 789, 791, 793, 795, 797, 799, 801,
   803, 805, 807, 809, 811, 813, 815, 817, 819, 821, 823, 825, 827, 829, 831, 833,
   835, 837, 839, 841, 843, 845, 847, 849, 851, 853, 855, 857, 859, 861, 863, 865,
   867, 869, 871, 873, 875, 877, 879, 881, 883, 885, 887, 889, 891, 893, 895, 897,
   899, 901, 903, 905, 907, 909, 911, 913, 915, 917, 919, 921, 923, 925, 927, 929,
   931, 933, 935, 937, 939, 941, 943, 945, 947, 949, 951, 953, 955, 957, 959, 961,
   963, 965, 967, 969, 971, 973, 975, 977, 979, 981, 983, 985, 987, 989, 991, 993,
   995, 997, 999, 1001, 1003, 1005, 1007, 1009, 1011, 1013, 1015, 1017, 1019, 1021, 1023, 1025,
   1027, 1029, 1031, 1033, 1035, 1037, 1039, 1041, 1043, 1045, 1047, 1049, 1051, 1053, 1055, 1057,
   1059, 1061, 1063, 1065, 1067, 1069, 1071, 1073, 1075, 1077, 1079, 1081, 1083, 1085, 1087, 1089,
   1091, 1093, 1095, 1097, 1099, 1101, 1103, 1105, 1107, 1109, 1111, 1113, 1115, 1117, 1119, 1121,
   1123, 1125, 1127, 1129, 1131, 1133, 1135, 1137, 1139, 1141, 1143, 1145, 1147, 1149, 1151, 1153,
   1155, 1157, 1159, 1161, 1163, 1165, 1167, 1169, 1171, 1173, 1175, 1177, 1179, 1181, 1183, 1185,
   1187, 1189, 1191, 1193, 1195, 1197, 1199, 1201, 1203, 1205, 1207, 1209, 1211, 1213, 1215, 1217,
   1219, 1221, 1223, 1225, 1227, 1229, 1231, 1233, 1235, 1237, 1239, 1241, 1243, 1245, 1247, 1249,
   1251, 1253, 1255, 1257, 1259, 1261, 1263, 1265, 1267, 1269, 1271, 1273, 1275, 1277, 1279, 1281,
   1283, 1285, 1287, 1289, 1291, 1293, 1295, 1297, 1299, 1301, 1303, 1305, 1307, 1309, 1311, 1313,
   1315, 1317, 1319, 1321, 1323, 1325, 1327, 1329, 1331, 1333, 1335, 1337, 1339, 1341, 1343, 1345,
   1347, 1349, 1351, 1353, 1355, 1357, 1359, 1361, 1363, 1365, 1367, 1369, 1371, 1373, 1375, 1377,
   1379, 1381, 1383, 1385, 1387, 1389, 1391, 1393, 1395, 1397, 1399, 1401, 1403, 1405, 1407, 1409,
   1411, 1413, 1415, 1417, 1419, 1421, 1423, 1425, 1427, 1429, 1431, 1433, 1435, 1437, 1439, 1441,
   1443, 1445, 1447, 1449, 1451, 1453, 1455, 1457, 1459, 1461, 1463, 1465, 1467, 1469, 1471, 1473,
   1475, 1477, 1479, 1481, 1483, 1485, 1487, 1489, 1491, 1493, 1495, 1497, 1499, 1501, 1503, 1505,
   1507, 1509, 1511, 1513, 1515, 1517, 1519, 1521, 1523, 1525, 1527, 1529, 1531, 1533, 1535, 1537,
   1539, 1541, 1543, 1545, 1547, 1549, 1551, 1553, 1555, 1557, 1559, 1561, 1563, 1565, 1567, 1569,
   1571, 1573, 1575, 1577, 1579, 1581, 1583, 1585, 1587, 1589, 1591, 1593, 1595, 1597, 1599, 1601,
   1603, 1605, 1607, 1609, 1611, 1613, 1615, 1617, 1619, 1621, 1623, 1625, 1627, 1629, 1631, 1633,
   1635, 1637, 1639, 1641, 1643, 1645, 1647, 1649, 1651, 1653, 1655, 1657, 1659, 1661, 1663, 1665,
   1667, 1669, 1671, 1673, 1675, 1677, 1679, 1681, 1683, 1685, 1687, 1689, 1691, 1693, 1695, 1697,
   1699, 1701, 1703, 1705, 1707, 1709, 1711, 1713, 1715, 1717, 1719, 1721, 1723, 1725, 1727, 1729,
   1731, 1733, 1735, 1737, 1739, 1741, 1743, 1745, 1747, 1749, 1751, 1753, 1755, 1757, 1759, 1761,
   1763, 1765, 1767, 1769, 1771, 1773, 1775, 1777, 1779, 1781, 1783, 1785, 1787, 1789, 1791, 1793,
   1795, 1797, 1799, 1801, 1803, 1805, 1807, 1809, 1811, 1813, 1815, 1817, 1819, 1821, 1823, 1825,
   1827, 1829, 1831, 1833, 1835, 1837, 1839, 1841, 1843, 1845, 1847, 1849, 1851, 1853, 1855, 1857,
   1859, 1861, 1863, 1865, 1867, 1869, 1871, 1873, 1875, 1877, 1879, 1881, 1883, 1885, 1887, 1889,
   1891, 1893, 1895, 1897, 1899, 1901, 1903, 1905, 1907, 1909, 1911, 1913, 1915, 1917, 1919, 1921,
   1923, 1925, 1927, 1929, 1931, 1933, 1935, 1937, 1939, 1941, 1943, 1945, 1947, 1949, 1951, 1953,
   1955, 1957, 1959, 1961, 1963, 1965, 1967, 1969, 1971, 1973, 1975, 1977, 1979, 1981, 1983, 1985,
   1987, 1989, 1991, 1993, 1995, 1997, 1999 };
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fy1229[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 4600.239, 9374.941, 9521.445, 9749.599, 9896.528, 4918.31, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5116.546, 9835.829, 10055.65, 9848.799,
   9942.844, 4902.65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 51.72844 };
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fex1229[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1 };
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fey1229[1000] = { 0, 0, 0, 0, 0.03359878, 0, 0.2055689, 0.06932864, 0.1281793, 0.05190091, 0.665988, 2.735667, 7.558936, 11.98465, 17.74641, 23.41977, 28.95139,
   34.69766, 40.0845, 45.39244, 50.16386, 54.33285, 58.86088, 61.80924, 65.31449, 68.62345, 70.26271, 72.71393, 74.87726, 76.21896, 77.88559, 79.09016, 79.95525,
   81.27622, 82.59967, 82.93449, 83.96313, 85.03116, 87.14812, 87.68555, 87.00188, 87.20155, 86.53281, 86.533, 89.70521, 85.72083, 84.14774, 82.99934, 82.55593,
   82.86755, 81.99078, 81.25475, 80.42739, 81.14921, 81.14257, 80.36881, 80.91789, 79.92863, 79.78716, 80.15841, 79.9375, 80.40668, 79.11782, 78.81968, 78.81495,
   79.08359, 78.9293, 78.73155, 78.49959, 77.73876, 77.5731, 78.39397, 77.84755, 77.24547, 77.21811, 77.18607, 76.10861, 77.12478, 75.61393, 76.15649, 75.33144,
   75.75833, 74.75188, 74.58004, 74.17781, 74.41392, 73.89799, 73.81354, 73.4214, 73.88141, 72.85974, 72.63627, 72.71836, 71.97199, 71.70962, 71.65399, 71.3589,
   71.15035, 71.72425, 70.32671, 70.61805, 69.63146, 69.52529, 69.69072, 69.49774, 70.66259, 68.63496, 68.15077, 68.18735, 67.69249, 67.71164, 68.04756, 67.14686,
   68.00911, 68.31082, 66.3895, 65.99504, 66.07871, 66.0753, 65.51878, 65.19796, 65.90895, 64.7282, 65.481, 64.81484, 64.5216, 63.76586, 63.39913, 66.62319,
   62.98895, 63.402, 62.81036, 62.40258, 62.24203, 63.29696, 61.62421, 61.53115, 61.89919, 61.97631, 61.41472, 61.21166, 61.20606, 60.75662, 60.70473, 60.67752,
   60.14161, 60.35678, 60.24941, 60.20072, 59.39604, 60.85065, 59.08876, 58.39605, 58.97163, 59.92415, 58.41628, 58.43623, 58.15565, 57.93923, 57.58371, 57.41177,
   57.44825, 57.45371, 57.29775, 57.12187, 57.04281, 56.84314, 56.85838, 56.0505, 56.50168, 56.62117, 55.7336, 56.38765, 55.23374, 55.35569, 55.30345, 55.30659,
   54.73217, 54.75366, 54.71527, 54.46759, 54.42636, 54.01173, 54.38832, 53.825, 53.93222, 53.46388, 53.42381, 53.25572, 53.56036, 53.29681, 53.26861, 53.32016,
   52.80019, 52.88295, 52.3831, 52.66809, 52.34333, 52.14163, 52.02037, 51.5739, 52.16491, 51.83213, 51.14405, 51.42734, 51.65876, 51.01749, 51.24019, 50.63649,
   50.61534, 50.95186, 50.32557, 50.24444, 50.41188, 49.87568, 50.18341, 50.43789, 49.34262, 49.8262, 49.72429, 49.92647, 49.93475, 49.75165, 59.42137, 48.66491,
   48.60265, 48.46287, 48.72344, 48.18683, 48.18562, 48.97457, 48.20876, 48.36525, 47.82821, 47.77517, 47.53948, 47.54163, 47.5121, 46.95614, 47.15255, 47.20249,
   47.01104, 47.44529, 46.51376, 46.42941, 46.48264, 45.76328, 47.34375, 46.15213, 46.1912, 46.36307, 46.34915, 45.99852, 45.89248, 46.46945, 45.41852, 45.44584,
   45.71707, 44.90871, 44.8724, 45.31309, 44.26329, 45.44464, 44.72423, 44.74999, 44.23106, 45.08598, 44.37761, 44.09645, 43.77125, 43.74993, 43.97402, 43.73134,
   51.8004, 43.32778, 43.25637, 43.67825, 43.28157, 42.66834, 44.31581, 43.03512, 42.47295, 43.52963, 42.32242, 42.2556, 42.33153, 42.2161, 41.92855, 41.88109,
   42.1987, 41.34625, 42.17923, 41.73238, 41.4338, 41.95438, 40.70018, 41.01507, 41.1667, 40.3788, 41.90105, 40.82135, 41.01002, 40.08989, 41.21969, 40.12137,
   40.55798, 40.74075, 39.86056, 39.99564, 40.16562, 39.1475, 39.0684, 39.67138, 39.51615, 39.41194, 39.52714, 38.96243, 38.8376, 38.76466, 39.62429, 38.55607,
   38.63505, 38.27399, 38.84088, 38.75233, 37.98302, 38.54671, 37.97604, 37.8313, 38.09812, 38.14416, 37.82986, 37.90528, 37.0402, 37.28527, 36.91886, 37.48662,
   36.44858, 36.9829, 36.58739, 36.74914, 36.74643, 36.47766, 36.44784, 36.43733, 37.27844, 36.72938, 36.41439, 36.48313, 35.78821, 36.70179, 35.97992, 35.72071,
   35.56236, 35.53337, 35.81671, 36.76212, 35.67824, 35.21338, 35.02729, 35.18527, 36.04822, 35.12746, 35.18217, 35.44748, 34.47062, 34.20974, 34.72092, 34.58257,
   34.32336, 34.25501, 34.18115, 33.93908, 34.58542, 34.03946, 34.14236, 33.81896, 33.38457, 33.84037, 33.38438, 33.33231, 34.06318, 33.32966, 56.68751, 33.05231,
   32.89566, 32.90621, 32.76724, 32.64374, 34.03744, 32.26601, 32.31915, 33.07109, 32.46506, 32.28706, 32.27835, 40.06236, 31.97254, 31.55012, 31.38997, 31.54341,
   31.66714, 31.71779, 31.62392, 31.35555, 31.72018, 31.80018, 31.03347, 30.84594, 30.89983, 31.21697, 31.14852, 31.13953, 30.73006, 30.78993, 30.572, 30.70798,
   30.62522, 30.44096, 30.5069, 30.62061, 30.99506, 29.75221, 29.55259, 29.93826, 29.69886, 29.41351, 29.76209, 29.7755, 28.93794, 29.82643, 29.39003, 28.95701,
   29.40286, 29.34157, 29.53505, 29.00288, 29.62404, 28.62247, 28.68981, 28.32724, 28.77189, 28.41556, 28.58391, 28.65168, 28.20566, 28.587, 28.37741, 28.37508,
   28.40116, 28.21131, 27.97915, 27.69764, 27.32043, 28.02957, 27.97898, 27.50643, 27.67286, 27.11326, 28.38742, 27.21155, 27.14215, 27.52978, 27.35246, 27.10489,
   27.1215, 26.96207, 26.73455, 26.67886, 26.87367, 26.71433, 26.37815, 26.6309, 26.50043, 26.10783, 27.90945, 26.41834, 26.36748, 26.21926, 26.47083, 26.24865,
   26.05949, 26.51169, 26.22314, 25.80874, 26.03102, 25.61896, 26.10111, 25.53623, 25.88507, 25.47594, 25.3968, 25.86738, 25.37963, 25.2951, 25.04033, 25.39465,
   25.15547, 25.44351, 25.35823, 24.92465, 24.97212, 24.68694, 24.94356, 25.12612, 24.71751, 24.33944, 24.56355, 24.02172, 25.12802, 24.80842, 23.85601, 24.15313,
   23.87018, 23.80449, 23.7211, 24.04482, 23.51644, 23.67192, 23.38787, 24.95741, 23.86098, 23.44263, 23.29581, 23.1068, 23.22931, 23.73047, 23.0069, 23.18051,
   23.18697, 22.89606, 23.48267, 23.06399, 23.08106, 22.6812, 22.96307, 23.19925, 22.66649, 23.34128, 22.30694, 22.7086, 22.19821, 22.61555, 22.44495, 22.75642,
   22.38508, 22.40426, 23.13916, 22.10938, 21.93057, 21.88504, 22.10789, 21.85238, 21.73589, 21.42228, 21.25179, 21.85157, 21.27647, 21.73201, 21.98033, 21.81765,
   21.65136, 21.41244, 21.04137, 21.45422, 21.12842, 21.33909, 20.92607, 21.57249, 21.38376, 20.74647, 21.13969, 20.93115, 22.7136, 20.72963, 20.52824, 20.93335,
   20.40728, 20.16899, 20.20753, 20.62915, 20.60511, 20.64206, 20.03958, 20.72813, 20.71205, 20.08551, 20.35202, 20.33431, 20.10476, 19.61106, 20.79977, 20.13132,
   19.82845, 19.73807, 20.09926, 19.98137, 19.64996, 19.49325, 20.03764, 19.15835, 19.43388, 19.28744, 19.51814, 19.19185, 19.23004, 19.42222, 19.14426, 19.17381,
   19.1237, 18.83734, 19.1677, 19.1172, 19.20594, 19.09511, 18.95287, 19.21876, 18.74678, 19.00889, 18.67633, 18.22351, 18.6783, 18.4953, 18.31276, 18.53788,
   18.75855, 18.66012, 18.93031, 18.11434, 18.21949, 18.03247, 18.0663, 18.39181, 17.47439, 18.10329, 18.20525, 18.02508, 17.77052, 18.20155, 17.80356, 17.4913,
   17.85202, 17.92306, 17.35221, 17.4655, 17.70756, 17.70585, 17.52472, 17.29179, 17.61407, 17.52359, 17.36751, 17.06141, 17.23098, 16.75565, 16.95591, 17.11089,
   17.1804, 17.17249, 17.61211, 17.09326, 17.1066, 17.19957, 17.05366, 16.67548, 16.82381, 16.66432, 16.52797, 16.88954, 16.89423, 16.32461, 16.45357, 16.72786,
   16.73273, 16.57277, 16.20299, 16.87229, 16.01272, 16.2096, 16.0072, 16.11416, 16.14812, 15.95924, 16.05883, 15.88197, 16.28188, 15.91236, 15.96162, 16.06054,
   15.99392, 15.90936, 15.64801, 15.88503, 15.6159, 15.85168, 15.77604, 15.90018, 15.62923, 15.63817, 15.58255, 15.21775, 15.65732, 15.26214, 15.47479, 15.1474,
   15.11953, 15.63345, 14.98471, 14.66721, 15.13549, 15.31786, 14.82136, 15.69675, 15.08111, 14.98746, 14.99031, 14.81237, 15.60125, 14.84263, 14.98107, 15.85315,
   14.66628, 14.56748, 14.59798, 15.16529, 14.96207, 14.61002, 14.61577, 14.32298, 14.51279, 14.57943, 14.5826, 13.78053, 14.44092, 14.48112, 14.29919, 13.92806,
   14.66286, 14.43089, 14.4762, 14.13657, 14.06798, 13.70618, 13.94533, 13.9447, 13.76658, 13.73574, 13.66596, 14.09195, 14.26, 13.33205, 14.16353, 13.54179,
   14.04746, 13.5014, 13.68795, 13.6135, 13.94449, 13.80593, 13.919, 13.47508, 13.53048, 13.40177, 13.17921, 13.28027, 13.35646, 13.30469, 13.21549, 13.34313,
   13.48837, 12.93451, 13.15229, 13.74829, 13.12952, 13.31009, 12.78789, 13.26666, 12.58749, 13.38478, 13.45395, 12.93136, 13.08542, 13.54413, 12.78779, 12.72487,
   12.58368, 12.20952, 12.88747, 12.75574, 12.44529, 12.61823, 12.93742, 12.46311, 12.63559, 12.11397, 14.58147, 12.27237, 12.36419, 12.54439, 12.21519, 12.22064,
   12.34157, 12.64755, 12.26706, 12.16059, 12.08402, 12.11623, 12.31811, 12.78179, 12.07947, 12.00702, 12.42453, 11.7599, 12.21088, 11.78937, 11.85391, 11.97096,
   12.14003, 11.46823, 12.10126, 12.26254, 11.67236, 11.62689, 11.78469, 11.93896, 11.47847, 11.42123, 11.9862, 11.82917, 12.23444, 11.60206, 11.83458, 11.63928,
   11.36585, 11.2174, 11.16011, 11.3506, 11.67501, 11.54872, 11.29622, 11.43534, 11.41436, 11.23435, 11.41987, 11.76338, 11.03975, 11.15423, 10.82729, 11.25573,
   10.86008, 11.1204, 10.63088, 10.59058, 11.05594, 11.08663, 11.11907, 10.93412, 10.93343, 10.41281, 10.65993, 11.3127, 10.71548, 10.85563, 10.49627, 10.71241,
   10.68259, 10.52927, 10.50035, 10.42897, 10.45029, 10.6105, 10.63373, 10.58261, 10.52356, 10.43818, 10.35107, 10.13711, 10.17044, 10.24587, 10.34692, 10.35129,
   10.74633, 10.38635, 10.27287, 10.438, 10.11425, 10.1433, 10.35952, 9.836104, 9.527906, 10.33735, 9.738989, 10.23747, 9.770082, 10.25436, 9.948875, 10.26215,
   10.33852, 9.319114, 9.864638, 9.704048, 9.626942, 9.952773, 10.22779, 10.04833, 9.907882, 9.832532, 9.798199, 9.761891, 9.432626, 9.503782, 9.499659, 9.737717,
   9.99576, 9.818147, 9.519542, 9.74455, 9.70026, 9.215215, 9.840746, 9.305557, 9.395859, 9.648557, 9.051657, 9.015108, 9.300373, 9.658458, 9.352478, 9.702765,
   9.298238, 9.373652, 9.243089, 9.382919, 9.412517, 9.230977, 9.787635, 9.525653, 9.082231, 8.884443, 9.079538, 9.617048, 8.806166, 8.97837, 9.045107, 9.084608,
   9.361838, 8.905757, 9.154453, 9.266045, 9.455861, 8.984777, 8.759606, 8.824922, 9.101809, 8.73848, 9.042411, 8.791765, 8.578782, 9.896999, 8.532333, 8.675109,
   8.774676, 8.314801, 8.660439, 8.776035, 8.691411, 8.782545, 8.845057, 8.582472, 8.514517, 8.427359, 8.49646, 8.671628, 8.152211, 8.513794, 8.374483, 8.218593,
   8.668084, 7.839378, 8.379902, 8.765119, 8.163949, 8.306589, 8.256749, 8.286393, 8.427064, 8.283184, 8.113023, 8.073358, 8.50262, 8.237252, 8.26586, 8.373106,
   7.971033, 8.10892, 8.60409, 7.842522, 8.132645, 8.355991, 7.968432 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_H_mass_fx1229,Graph_from_VH_tagFirst_2b1c_H_mass_fy1229,Graph_from_VH_tagFirst_2b1c_H_mass_fex1229,Graph_from_VH_tagFirst_2b1c_H_mass_fey1229);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_H_mass1229 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_H_mass1229","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1229->SetMinimum(-1109.634);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1229->SetMaximum(11153.75);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1229->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1229->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1229->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1229->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1229->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1229->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1229->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1229->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1229->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1229->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1229->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_H_mass1229);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_H_mass","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_tagFirst_2b1c_H_mass","Data-driven Bckg","F");

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
   entry=leg->AddEntry("Graph_from_VH_tagFirst_2b1c_H_mass","MC unc. (stat.)","fl");

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
   H_mass_tagFirst_VR_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-45.96762,-0.2774193,315.7258,1.658065);
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
   
   TH1D *data_mc_ratio__230 = new TH1D("data_mc_ratio__230","",1000,0,2000);
   data_mc_ratio__230->SetBinContent(43,1.63861);
   data_mc_ratio__230->SetBinContent(44,1.602677);
   data_mc_ratio__230->SetBinContent(45,1.539892);
   data_mc_ratio__230->SetBinContent(46,1.489497);
   data_mc_ratio__230->SetBinContent(47,1.449094);
   data_mc_ratio__230->SetBinContent(48,1.407394);
   data_mc_ratio__230->SetBinContent(78,1.180093);
   data_mc_ratio__230->SetBinContent(79,1.182107);
   data_mc_ratio__230->SetBinContent(80,1.173172);
   data_mc_ratio__230->SetBinContent(81,1.178621);
   data_mc_ratio__230->SetBinContent(82,1.175418);
   data_mc_ratio__230->SetBinContent(83,1.18385);
   data_mc_ratio__230->SetBinContent(1000,1.546538);
   data_mc_ratio__230->SetBinContent(1001,1.35901);
   data_mc_ratio__230->SetBinError(43,0.01887329);
   data_mc_ratio__230->SetBinError(44,0.01307491);
   data_mc_ratio__230->SetBinError(45,0.01271727);
   data_mc_ratio__230->SetBinError(46,0.01236023);
   data_mc_ratio__230->SetBinError(47,0.0121006);
   data_mc_ratio__230->SetBinError(48,0.01691609);
   data_mc_ratio__230->SetBinError(78,0.01518692);
   data_mc_ratio__230->SetBinError(79,0.01096283);
   data_mc_ratio__230->SetBinError(80,0.0108013);
   data_mc_ratio__230->SetBinError(81,0.01093945);
   data_mc_ratio__230->SetBinError(82,0.01087279);
   data_mc_ratio__230->SetBinError(83,0.01553935);
   data_mc_ratio__230->SetBinError(1000,0.1729082);
   data_mc_ratio__230->SetBinError(1001,0.008790294);
   data_mc_ratio__230->SetMinimum(0.4);
   data_mc_ratio__230->SetMaximum(1.6);
   data_mc_ratio__230->SetEntries(3419.485);
   data_mc_ratio__230->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__230->SetLineColor(ci);
   data_mc_ratio__230->SetLineWidth(2);
   data_mc_ratio__230->SetMarkerStyle(20);
   data_mc_ratio__230->SetMarkerSize(1.2);
   data_mc_ratio__230->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__230->GetXaxis()->SetRange(1,150);
   data_mc_ratio__230->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__230->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__230->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__230->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__230->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__230->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__230->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__230->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__230->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__230->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__230->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__230->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__230->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__230->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__230->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__230->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1230[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
   35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65,
   67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97,
   99, 101, 103, 105, 107, 109, 111, 113, 115, 117, 119, 121, 123, 125, 127, 129,
   131, 133, 135, 137, 139, 141, 143, 145, 147, 149, 151, 153, 155, 157, 159, 161,
   163, 165, 167, 169, 171, 173, 175, 177, 179, 181, 183, 185, 187, 189, 191, 193,
   195, 197, 199, 201, 203, 205, 207, 209, 211, 213, 215, 217, 219, 221, 223, 225,
   227, 229, 231, 233, 235, 237, 239, 241, 243, 245, 247, 249, 251, 253, 255, 257,
   259, 261, 263, 265, 267, 269, 271, 273, 275, 277, 279, 281, 283, 285, 287, 289,
   291, 293, 295, 297, 299, 301, 303, 305, 307, 309, 311, 313, 315, 317, 319, 321,
   323, 325, 327, 329, 331, 333, 335, 337, 339, 341, 343, 345, 347, 349, 351, 353,
   355, 357, 359, 361, 363, 365, 367, 369, 371, 373, 375, 377, 379, 381, 383, 385,
   387, 389, 391, 393, 395, 397, 399, 401, 403, 405, 407, 409, 411, 413, 415, 417,
   419, 421, 423, 425, 427, 429, 431, 433, 435, 437, 439, 441, 443, 445, 447, 449,
   451, 453, 455, 457, 459, 461, 463, 465, 467, 469, 471, 473, 475, 477, 479, 481,
   483, 485, 487, 489, 491, 493, 495, 497, 499, 501, 503, 505, 507, 509, 511, 513,
   515, 517, 519, 521, 523, 525, 527, 529, 531, 533, 535, 537, 539, 541, 543, 545,
   547, 549, 551, 553, 555, 557, 559, 561, 563, 565, 567, 569, 571, 573, 575, 577,
   579, 581, 583, 585, 587, 589, 591, 593, 595, 597, 599, 601, 603, 605, 607, 609,
   611, 613, 615, 617, 619, 621, 623, 625, 627, 629, 631, 633, 635, 637, 639, 641,
   643, 645, 647, 649, 651, 653, 655, 657, 659, 661, 663, 665, 667, 669, 671, 673,
   675, 677, 679, 681, 683, 685, 687, 689, 691, 693, 695, 697, 699, 701, 703, 705,
   707, 709, 711, 713, 715, 717, 719, 721, 723, 725, 727, 729, 731, 733, 735, 737,
   739, 741, 743, 745, 747, 749, 751, 753, 755, 757, 759, 761, 763, 765, 767, 769,
   771, 773, 775, 777, 779, 781, 783, 785, 787, 789, 791, 793, 795, 797, 799, 801,
   803, 805, 807, 809, 811, 813, 815, 817, 819, 821, 823, 825, 827, 829, 831, 833,
   835, 837, 839, 841, 843, 845, 847, 849, 851, 853, 855, 857, 859, 861, 863, 865,
   867, 869, 871, 873, 875, 877, 879, 881, 883, 885, 887, 889, 891, 893, 895, 897,
   899, 901, 903, 905, 907, 909, 911, 913, 915, 917, 919, 921, 923, 925, 927, 929,
   931, 933, 935, 937, 939, 941, 943, 945, 947, 949, 951, 953, 955, 957, 959, 961,
   963, 965, 967, 969, 971, 973, 975, 977, 979, 981, 983, 985, 987, 989, 991, 993,
   995, 997, 999, 1001, 1003, 1005, 1007, 1009, 1011, 1013, 1015, 1017, 1019, 1021, 1023, 1025,
   1027, 1029, 1031, 1033, 1035, 1037, 1039, 1041, 1043, 1045, 1047, 1049, 1051, 1053, 1055, 1057,
   1059, 1061, 1063, 1065, 1067, 1069, 1071, 1073, 1075, 1077, 1079, 1081, 1083, 1085, 1087, 1089,
   1091, 1093, 1095, 1097, 1099, 1101, 1103, 1105, 1107, 1109, 1111, 1113, 1115, 1117, 1119, 1121,
   1123, 1125, 1127, 1129, 1131, 1133, 1135, 1137, 1139, 1141, 1143, 1145, 1147, 1149, 1151, 1153,
   1155, 1157, 1159, 1161, 1163, 1165, 1167, 1169, 1171, 1173, 1175, 1177, 1179, 1181, 1183, 1185,
   1187, 1189, 1191, 1193, 1195, 1197, 1199, 1201, 1203, 1205, 1207, 1209, 1211, 1213, 1215, 1217,
   1219, 1221, 1223, 1225, 1227, 1229, 1231, 1233, 1235, 1237, 1239, 1241, 1243, 1245, 1247, 1249,
   1251, 1253, 1255, 1257, 1259, 1261, 1263, 1265, 1267, 1269, 1271, 1273, 1275, 1277, 1279, 1281,
   1283, 1285, 1287, 1289, 1291, 1293, 1295, 1297, 1299, 1301, 1303, 1305, 1307, 1309, 1311, 1313,
   1315, 1317, 1319, 1321, 1323, 1325, 1327, 1329, 1331, 1333, 1335, 1337, 1339, 1341, 1343, 1345,
   1347, 1349, 1351, 1353, 1355, 1357, 1359, 1361, 1363, 1365, 1367, 1369, 1371, 1373, 1375, 1377,
   1379, 1381, 1383, 1385, 1387, 1389, 1391, 1393, 1395, 1397, 1399, 1401, 1403, 1405, 1407, 1409,
   1411, 1413, 1415, 1417, 1419, 1421, 1423, 1425, 1427, 1429, 1431, 1433, 1435, 1437, 1439, 1441,
   1443, 1445, 1447, 1449, 1451, 1453, 1455, 1457, 1459, 1461, 1463, 1465, 1467, 1469, 1471, 1473,
   1475, 1477, 1479, 1481, 1483, 1485, 1487, 1489, 1491, 1493, 1495, 1497, 1499, 1501, 1503, 1505,
   1507, 1509, 1511, 1513, 1515, 1517, 1519, 1521, 1523, 1525, 1527, 1529, 1531, 1533, 1535, 1537,
   1539, 1541, 1543, 1545, 1547, 1549, 1551, 1553, 1555, 1557, 1559, 1561, 1563, 1565, 1567, 1569,
   1571, 1573, 1575, 1577, 1579, 1581, 1583, 1585, 1587, 1589, 1591, 1593, 1595, 1597, 1599, 1601,
   1603, 1605, 1607, 1609, 1611, 1613, 1615, 1617, 1619, 1621, 1623, 1625, 1627, 1629, 1631, 1633,
   1635, 1637, 1639, 1641, 1643, 1645, 1647, 1649, 1651, 1653, 1655, 1657, 1659, 1661, 1663, 1665,
   1667, 1669, 1671, 1673, 1675, 1677, 1679, 1681, 1683, 1685, 1687, 1689, 1691, 1693, 1695, 1697,
   1699, 1701, 1703, 1705, 1707, 1709, 1711, 1713, 1715, 1717, 1719, 1721, 1723, 1725, 1727, 1729,
   1731, 1733, 1735, 1737, 1739, 1741, 1743, 1745, 1747, 1749, 1751, 1753, 1755, 1757, 1759, 1761,
   1763, 1765, 1767, 1769, 1771, 1773, 1775, 1777, 1779, 1781, 1783, 1785, 1787, 1789, 1791, 1793,
   1795, 1797, 1799, 1801, 1803, 1805, 1807, 1809, 1811, 1813, 1815, 1817, 1819, 1821, 1823, 1825,
   1827, 1829, 1831, 1833, 1835, 1837, 1839, 1841, 1843, 1845, 1847, 1849, 1851, 1853, 1855, 1857,
   1859, 1861, 1863, 1865, 1867, 1869, 1871, 1873, 1875, 1877, 1879, 1881, 1883, 1885, 1887, 1889,
   1891, 1893, 1895, 1897, 1899, 1901, 1903, 1905, 1907, 1909, 1911, 1913, 1915, 1917, 1919, 1921,
   1923, 1925, 1927, 1929, 1931, 1933, 1935, 1937, 1939, 1941, 1943, 1945, 1947, 1949, 1951, 1953,
   1955, 1957, 1959, 1961, 1963, 1965, 1967, 1969, 1971, 1973, 1975, 1977, 1979, 1981, 1983, 1985,
   1987, 1989, 1991, 1993, 1995, 1997, 1999 };
   Double_t Graph_from_mc_statistical_error_fy1230[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1230[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fey1230[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0.0188105, 0.009230244, 0.009421386, 0.008792242, 0.008502754, 0.01687558, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.0150736, 0.007687601, 0.007573506, 0.007648795,
   0.007619382, 0.01524724, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1540435 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1230,Graph_from_mc_statistical_error_fy1230,Graph_from_mc_statistical_error_fex1230,Graph_from_mc_statistical_error_fey1230);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1230 = new TH1F("Graph_Graph_from_mc_statistical_error1230","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1230->SetMinimum(0.8151478);
   Graph_Graph_from_mc_statistical_error1230->SetMaximum(1.184852);
   Graph_Graph_from_mc_statistical_error1230->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1230->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1230->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1230);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagFirst_VR_18->cd();
   H_mass_tagFirst_VR_18->Modified();
   H_mass_tagFirst_VR_18->cd();
   H_mass_tagFirst_VR_18->SetSelected(H_mass_tagFirst_VR_18);
}
