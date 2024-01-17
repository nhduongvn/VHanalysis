#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagFirst_VR_18()
{
//=========Macro generated from canvas: H_mass_tagFirst_VR_18/H_mass_tagFirst_VR_18
//=========  (Sat Dec  9 13:50:17 2023) by ROOT version 6.28/10
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
   topPad->Range(-45.96762,-38.19293,315.7258,38164.74);
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
   st->SetMaximum(34344.44);
   
   TH1F *st_stack_100 = new TH1F("st_stack_100","",1000,0,2000);
   st_stack_100->SetMinimum(0.01);
   st_stack_100->SetMaximum(34344.44);
   st_stack_100->SetDirectory(nullptr);
   st_stack_100->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_100->SetLineColor(ci);
   st_stack_100->SetLineWidth(0);
   st_stack_100->GetXaxis()->SetRange(1,150);
   st_stack_100->GetXaxis()->SetLabelFont(42);
   st_stack_100->GetXaxis()->SetTitleOffset(1);
   st_stack_100->GetXaxis()->SetTitleFont(42);
   st_stack_100->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_100->GetYaxis()->SetLabelFont(42);
   st_stack_100->GetYaxis()->SetLabelSize(0.05);
   st_stack_100->GetYaxis()->SetTitleSize(0.057);
   st_stack_100->GetYaxis()->SetTitleOffset(1.2);
   st_stack_100->GetYaxis()->SetTitleFont(42);
   st_stack_100->GetZaxis()->SetLabelFont(42);
   st_stack_100->GetZaxis()->SetTitleOffset(1);
   st_stack_100->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_100);
   
   
   TH1D *VH_tagFirst_2b1c_H_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(43,7488.901);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(44,15163.94);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(45,14972.1);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(46,14767.96);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(47,14612.99);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(48,7197.844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(78,5974.79);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(79,11669.5);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(80,11704.62);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(81,11585.65);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(82,11562.38);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(83,5754.412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1000,46.973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1001,21720.4);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(11,0.6208398);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(12,3.009632);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(13,7.816173);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(14,14.21845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(15,21.13592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(16,28.81727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(17,36.12626);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(18,43.29662);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(19,49.97856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(20,56.74659);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(21,62.43222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(22,67.05213);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(23,71.13426);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(24,74.71904);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(25,77.6968);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(26,79.64433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(27,81.44012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(28,82.78614);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(29,83.72019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(30,84.48441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(31,85.22029);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(32,84.86904);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(33,85.07544);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(34,85.05278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(35,84.5756);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(36,84.4673);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(37,84.57446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(38,84.11634);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(39,83.24811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(40,83.30596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(41,82.83501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(42,81.7731);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(43,81.57844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(44,81.59025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(45,81.0725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(46,80.51791);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(47,80.09434);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(48,79.44566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(49,79.44687);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(50,79.16863);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(51,78.95412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(52,78.39193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(53,77.88385);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(54,77.88013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(55,78.06304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(56,77.32883);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(57,77.43716);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(58,77.13668);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(59,76.80869);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(60,76.71454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(61,76.01168);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(62,75.999);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(63,75.87591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(64,75.36493);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(65,75.30226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(66,75.51566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(67,75.44289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(68,74.92124);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(69,74.8466);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(70,74.27667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(71,73.95815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(72,73.60552);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(73,73.62123);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(74,73.46531);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(75,73.17223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(76,72.59446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(77,72.41371);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(78,72.55463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(79,71.5745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(80,71.68213);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(81,71.3169);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(82,71.24525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(83,70.76892);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(84,70.40717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(85,70.03392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(86,69.72503);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(87,69.66696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(88,69.64621);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(89,69.8824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(90,69.47444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(91,68.75783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(92,68.57259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(93,68.07756);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(94,67.94722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(95,67.59175);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(96,67.3418);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(97,67.33035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(98,67.59032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(99,66.95578);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(100,67.06363);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(101,66.73955);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(102,66.15513);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(103,66.00639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(104,65.61251);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(105,65.28271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(106,65.40069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(107,65.20443);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(108,64.92452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(109,64.78486);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(110,64.21566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(111,64.34758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(112,64.19765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(113,63.82583);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(114,63.96307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(115,63.65803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(116,63.49282);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(117,63.18551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(118,63.01294);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(119,62.90734);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(120,62.97623);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(121,62.40443);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(122,62.68637);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(123,62.22196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(124,62.07621);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(125,61.92857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(126,61.6838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(127,61.66348);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(128,61.22122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(129,61.57122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(130,61.18186);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(131,61.04942);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(132,61.25269);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(133,60.44506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(134,60.82487);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(135,60.57246);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(136,60.53108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(137,60.3046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(138,60.04198);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(139,59.72498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(140,60.21506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(141,60.15902);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(142,59.60385);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(143,59.38844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(144,59.70077);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(145,58.92257);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(146,59.27801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(147,58.93074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(148,59.2585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(149,58.65375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(150,58.78667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(151,58.45792);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(152,58.17868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(153,57.99454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(154,58.16212);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(155,57.80148);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(156,58.12566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(157,57.948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(158,57.47716);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(159,57.10882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(160,57.50565);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(161,57.17459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(162,57.17122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(163,57.31262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(164,56.77375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(165,56.95507);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(166,56.77205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(167,56.86025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(168,56.4401);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(169,56.32389);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(170,55.99789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(171,56.10104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(172,56.0873);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(173,56.19886);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(174,55.50877);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(175,55.61803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(176,55.38538);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(177,55.45493);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(178,55.20589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(179,55.33142);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(180,54.78713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(181,54.52974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(182,54.37578);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(183,54.875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(184,54.43423);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(185,54.558);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(186,54.26935);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(187,53.71789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(188,54.07546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(189,53.61914);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(190,53.743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(191,53.58138);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(192,53.60476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(193,53.48418);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(194,53.206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(195,53.22592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(196,53.27478);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(197,52.53163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(198,52.85713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(199,52.5353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(200,52.87536);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(201,52.43432);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(202,52.17825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(203,52.34971);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(204,51.81502);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(205,51.53344);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(206,51.44548);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(207,51.68654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(208,51.39113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(209,51.26723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(210,51.41175);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(211,51.01475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(212,51.1468);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(213,50.78188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(214,50.87857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(215,51.00341);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(216,50.58796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(217,50.55938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(218,49.94192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(219,50.57082);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(220,50.20556);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(221,50.13257);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(222,50.18444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(223,49.52535);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(224,49.35774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(225,49.35969);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(226,49.34797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(227,49.00113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(228,49.26003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(229,48.92438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(230,48.7547);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(231,48.59831);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(232,48.84948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(233,48.80804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(234,48.51298);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(235,48.49907);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(236,47.70377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(237,47.85503);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(238,48.25007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(239,47.54595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(240,47.65526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(241,47.66942);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(242,47.3998);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(243,47.75222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(244,47.24097);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(245,46.96274);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(246,46.80448);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(247,46.4822);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(248,46.67873);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(249,46.37636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(250,46.3223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(251,46.60642);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(252,46.50293);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(253,46.15141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(254,46.05317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(255,45.97778);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(256,46.19106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(257,45.69608);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(258,45.32555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(259,45.35531);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(260,45.51649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(261,45.25321);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(262,44.82747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(263,44.81457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(264,44.69399);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(265,44.74786);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(266,44.7414);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(267,44.42151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(268,44.15825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(269,44.41066);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(270,44.18225);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(271,43.73507);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(272,43.75709);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(273,43.75489);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(274,43.64464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(275,43.8297);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(276,43.36778);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(277,43.15618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(278,43.42551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(279,43.11597);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(280,43.25208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(281,43.2699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(282,42.66439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(283,42.57847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(284,42.54904);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(285,42.56263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(286,41.89633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(287,42.41522);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(288,41.93771);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(289,41.94461);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(290,42.00888);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(291,41.587);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(292,41.65645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(293,41.13034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(294,41.329);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(295,41.4826);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(296,40.56417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(297,40.9001);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(298,41.0858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(299,40.51188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(300,40.71355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(301,40.46428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(302,40.70882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(303,39.95624);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(304,40.04296);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(305,39.98275);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(306,39.67064);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(307,39.9297);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(308,39.70463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(309,39.51732);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(310,39.72889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(311,39.21133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(312,39.10551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(313,39.28498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(314,39.15723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(315,39.36339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(316,38.76646);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(317,38.72667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(318,38.59706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(319,38.44698);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(320,38.35916);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(321,38.31894);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(322,38.04385);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(323,37.99316);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(324,37.92462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(325,37.55952);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(326,37.21933);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(327,37.4336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(328,37.413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(329,37.58517);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(330,37.36919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(331,37.19343);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(332,37.10524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(333,37.24521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(334,36.59796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(335,36.87077);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(336,36.4079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(337,36.49249);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(338,35.59692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(339,36.51625);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(340,36.12092);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(341,35.86391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(342,36.08089);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(343,35.83165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(344,35.28697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(345,35.64291);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(346,35.7428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(347,35.60774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(348,35.25145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(349,35.6402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(350,35.37425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(351,35.04859);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(352,35.21043);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(353,34.79196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(354,34.47198);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(355,34.53622);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(356,34.64208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(357,34.49434);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(358,34.53622);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(359,34.00196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(360,34.09818);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(361,34.15465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(362,34.27575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(363,34.05576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(364,33.7916);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(365,33.27145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(366,33.53397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(367,33.37266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(368,33.24827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(369,33.26855);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(370,33.10596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(371,33.31197);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(372,33.00976);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(373,32.61034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(374,32.82241);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(375,32.50379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(376,32.65759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(377,32.2956);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(378,32.15806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(379,32.30455);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(380,32.25381);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(381,31.81766);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(382,32.11908);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(383,31.77523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(384,31.90537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(385,31.45826);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(386,31.62933);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(387,31.44907);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(388,31.22768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(389,31.30165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(390,31.16591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(391,30.87703);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(392,31.10091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(393,30.89263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(394,30.97673);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(395,30.83643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(396,30.66408);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(397,30.75821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(398,30.05788);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(399,30.26872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(400,30.16987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(401,29.91649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(402,30.44015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(403,30.17945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(404,29.88749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(405,30.0739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(406,29.68692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(407,29.82293);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(408,29.38022);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(409,29.22237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(410,29.3014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(411,29.37038);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(412,29.413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(413,29.3014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(414,28.99395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(415,29.02716);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(416,29.00392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(417,28.68656);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(418,28.90074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(419,28.63276);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(420,28.52149);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(421,28.87405);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(422,28.53838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(423,28.32486);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(424,27.79602);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(425,28.07885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(426,28.40299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(427,27.96192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(428,27.98259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(429,27.8272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(430,27.17903);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(431,27.19321);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(432,27.63609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(433,27.09736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(434,27.56626);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(435,27.10803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(436,26.86163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(437,27.4296);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(438,27.29931);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(439,26.61296);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(440,26.73578);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(441,26.73218);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(442,26.7754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(443,26.71054);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(444,26.62382);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(445,26.44223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(446,26.14907);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(447,26.31438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(448,26.1859);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(449,26.31072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(450,26.03459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(451,26.28873);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(452,25.99755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(453,25.58658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(454,25.59788);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(455,25.60541);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(456,25.22627);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(457,25.3368);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(458,25.70307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(459,24.74418);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(460,25.85259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(461,25.12676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(462,25.3292);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(463,24.97289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(464,25.10374);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(465,25.06148);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(466,24.93427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(467,24.5487);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(468,24.56832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(469,24.23264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(470,24.45037);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(471,24.51728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(472,24.33977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(473,24.56832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(474,24.31204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(475,23.54694);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(476,24.02898);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(477,24.16096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(478,23.87208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(479,24.06104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(480,23.92852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(481,23.73444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(482,23.56739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(483,23.69787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(484,23.864);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(485,23.38267);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(486,23.36206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(487,23.49368);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(488,23.42385);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(489,23.36618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(490,23.28356);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(491,22.95009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(492,23.12993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(493,23.23384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(494,22.91227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(495,23.12993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(496,22.92908);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(497,22.94169);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(498,22.60743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(499,22.432);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(500,22.69252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(501,22.36316);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(502,22.58611);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(503,22.28547);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(504,22.62874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(505,21.95439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(506,22.3847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(507,21.84439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(508,21.89726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(509,21.83556);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(510,22.02013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(511,21.89286);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(512,21.53339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(513,21.8488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(514,21.43921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(515,21.65387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(516,21.31299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(517,21.17692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(518,21.02622);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(519,21.42572);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(520,20.91594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(521,21.55575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(522,21.12224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(523,21.28131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(524,20.54876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(525,20.74943);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(526,21.00329);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(527,20.78191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(528,20.60496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(529,20.75407);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(530,20.53469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(531,20.62366);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(532,20.42176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(533,20.41232);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(534,20.71689);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(535,20.35086);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(536,20.62366);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(537,20.39343);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(538,20.23214);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(539,20.71224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(540,20.1223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(541,20.194);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(542,19.71594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(543,19.77937);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(544,20.09354);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(545,19.91532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(546,19.64249);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(547,19.61795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(548,19.87657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(549,19.38572);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(550,19.50465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(551,19.667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(552,19.50959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(553,19.05483);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(554,19.89111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(555,19.24102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(556,18.72323);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(557,18.99404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(558,18.92289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(559,19.18586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(560,19.32099);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(561,18.62519);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(562,19.1557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(563,18.88721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(564,18.57338);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(565,18.82077);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(566,18.30688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(567,18.81564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(568,18.29108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(569,17.97221);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(570,18.63037);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(571,18.35944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(572,18.67686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(573,18.79002);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(574,18.04712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(575,18.24889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(576,17.87544);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(577,17.87544);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(578,17.82145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(579,17.57645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(580,17.69666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(581,17.4278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(582,17.77815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(583,17.63119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(584,17.68576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(585,17.90776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(586,17.58742);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(587,17.70754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(588,17.59289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(589,17.59289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(590,17.35022);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(591,17.34467);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(592,17.23879);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(593,17.16597);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(594,17.53254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(595,17.47749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(596,17.30573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(597,17.04202);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(598,17.03071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(599,17.20522);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(600,17.29459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(601,16.91147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(602,16.66466);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(603,16.74542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(604,16.97971);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(605,16.79139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(606,16.68778);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(607,16.50196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(608,16.58351);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(609,16.38476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(610,16.71086);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(611,16.31994);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(612,16.49028);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(613,16.36122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(614,16.44932);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(615,16.26671);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(616,16.33764);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(617,15.98587);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(618,15.97984);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(619,16.23113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(620,15.94362);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(621,15.804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(622,15.94966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(623,16.17761);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(624,15.877);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(625,16.04003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(626,15.63851);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(627,16.01598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(628,15.8527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(629,15.63235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(630,15.69387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(631,15.60149);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(632,15.47125);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(633,15.53961);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(634,15.49614);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(635,15.25801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(636,15.92548);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(637,15.2264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(638,15.28956);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(639,15.05456);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(640,15.24538);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(641,15.24538);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(642,14.94536);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(643,15.5272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(644,14.74413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(645,15.07375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(646,15.28956);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(647,14.93891);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(648,14.91308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(649,14.73105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(650,14.95824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(651,14.57982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(652,14.91308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(653,14.60624);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(654,14.54011);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(655,14.39358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(656,14.43369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(657,14.53349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(658,14.64577);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(659,14.44704);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(660,14.50694);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(661,14.52685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(662,14.46037);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(663,14.16413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(664,14.28606);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(665,14.20489);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(666,13.79885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(667,14.07541);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(668,14.00678);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(669,14.08226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(670,13.95854);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(671,14.11643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(672,13.79885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(673,14.00678);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(674,14.19132);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(675,14.23877);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(676,13.91706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(677,14.17093);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(678,13.56645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(679,13.73586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(680,13.50951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(681,13.6937);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(682,13.66553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(683,13.63729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(684,13.41646);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(685,13.60192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(686,13.83373);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(687,13.25751);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(688,13.2938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(689,13.42364);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(690,13.35166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(691,13.30829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(692,13.14803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(693,13.07454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(694,13.00804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(695,13.2938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(696,12.83653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(697,13.15536);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(698,12.9412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(699,12.83653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(700,13.22112);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(701,12.87401);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(702,13.14803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(703,12.75369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(704,13.12603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(705,12.74613);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(706,12.70069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(707,13.03763);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(708,12.45554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(709,12.6855);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(710,12.64747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(711,12.90391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(712,12.70069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(713,12.60167);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(714,12.50957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(715,12.94864);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(716,12.63222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(717,12.48644);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(718,12.9263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(719,12.76124);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(720,12.4168);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(721,12.02251);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(722,11.90977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(723,12.37014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(724,12.37014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(725,11.99041);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(726,12.4478);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(727,11.96627);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(728,12.37793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(729,11.84487);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(730,11.93402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(731,12.237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(732,11.92594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(733,11.34626);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(734,11.90977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(735,12.00647);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(736,11.78778);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(737,11.45613);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(738,12.27631);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(739,12.16592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(740,11.93402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(741,11.81228);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(742,11.55663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(743,11.32926);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(744,11.58162);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(745,11.53159);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(746,11.47294);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(747,11.67278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(748,11.08855);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(749,11.47294);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(750,11.38864);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(751,11.56496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(752,11.56496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(753,11.19235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(754,11.48134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(755,11.59824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(756,11.34626);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(757,11.12326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(758,11.58162);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(759,11.38018);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(760,10.975);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(761,11.02755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(762,11.23531);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(763,11.48134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(764,10.975);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(765,10.77117);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(766,11.09724);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(767,10.80689);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(768,10.57252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(769,10.61799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(770,10.7443);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(771,10.80689);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(772,10.75326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(773,11.01881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(774,10.65423);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(775,10.98378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(776,11.01881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(777,10.40717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(778,10.16358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(779,10.75326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(780,10.72634);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(781,10.52685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(782,10.536);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(783,10.77117);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(784,10.20144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(785,10.55428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(786,10.50853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(787,10.44414);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(788,10.50853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(789,10.54514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(790,10.67231);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(791,10.37007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(792,10.42567);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(793,10.25796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(794,9.82615);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(795,10.19199);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(796,10.46258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(797,10.06833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(798,10.1541);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(799,9.875061);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(800,9.757263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(801,10.22031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(802,10.01074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(803,10.3235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(804,10.25796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(805,9.527413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(806,9.981821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(807,10.12559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(808,10.06833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(809,9.884814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(810,9.943132);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(811,9.835952);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(812,9.865298);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(813,9.618008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(814,9.816338);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(815,9.517293);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(816,9.628022);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(817,9.435947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(818,9.865298);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(819,9.537521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(820,9.456349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(821,9.384748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(822,9.343587);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(823,9.557707);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(824,9.776994);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(825,9.677934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(826,9.737491);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(827,9.507163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(828,9.446154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(829,9.537521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(830,9.219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(831,9.291879);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(832,9.446154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(833,9.250304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(834,9.050217);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(835,9.039563);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(836,9.435947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(837,9.384748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(838,9.786845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(839,9.198071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(840,9.124444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(841,9.271115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(842,9.36419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(843,9.405261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(844,9.260715);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(845,9.497022);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(846,8.856492);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(847,9.082103);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(848,8.647297);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(849,9.607984);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(850,9.028897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(851,9.050217);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(852,8.713901);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(853,8.724952);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(854,9.219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(855,9.36419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(856,8.94311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(857,8.669555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(858,8.823791);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(859,8.702836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(860,9.018218);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(861,8.758022);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(862,8.329439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(863,8.478498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(864,8.444334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(865,8.283035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(866,8.602608);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(867,8.387083);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(868,8.975376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(869,8.591399);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(870,8.432915);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(871,8.899906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(872,8.352545);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(873,8.432915);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(874,8.478498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(875,8.387083);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(876,8.23637);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(877,8.867365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(878,8.118533);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(879,8.294661);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(880,8.444334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(881,8.41003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(882,8.259736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(883,8.387083);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(884,8.294661);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(885,8.317863);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(886,8.248061);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(887,8.680663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(888,8.23637);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(889,7.914185);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(890,8.189439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(891,7.59102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(892,7.974831);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(893,7.986905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(894,7.729393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(895,7.791477);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(896,8.189439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(897,7.865332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(898,8.106655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(899,7.603703);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(900,7.729393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(901,7.974831);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(902,7.59102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(903,8.106655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(904,7.926351);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(905,8.189439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(906,7.902);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(907,8.09476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(908,7.666805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(909,7.840791);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(910,7.463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(911,7.803835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(912,7.411173);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(913,7.578315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(914,7.666805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(915,7.51447);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(916,7.437132);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(917,7.840791);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(918,7.424164);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(919,7.578315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(920,7.450077);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(921,7.488779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(922,7.629007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(923,7.679364);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(924,7.501635);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(925,7.463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(926,7.488779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(927,7.654227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(928,7.540073);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(929,7.791477);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(930,7.411173);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(931,7.411173);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(932,7.226852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(933,7.159873);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(934,7.051384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(935,7.240173);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(936,7.078662);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(937,7.240173);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(938,7.437132);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(939,7.078662);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(940,7.119384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(941,7.293216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(942,7.213506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(943,7.132906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(944,7.18674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(945,7.279991);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(946,7.319593);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(947,7.092262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(948,7.024);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(949,7.293216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(950,7.279991);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(951,7.037705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(952,6.772562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(953,6.941199);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(954,6.829237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(955,7.213506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(956,6.913379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(957,6.955068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(958,6.729743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(959,6.758319);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(960,6.540953);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(961,7.037705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(962,6.555668);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(963,6.843333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(964,7.105836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(965,6.643275);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(966,7.037705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(967,7.078662);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(968,7.037705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(969,6.437004);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(970,6.800959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(971,6.941199);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(972,6.526204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(973,6.223899);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(974,6.701044);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(975,6.540953);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(976,6.628755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(977,6.31611);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(978,6.786775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(979,6.130301);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(980,6.146);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(981,6.815113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(982,5.906141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(983,6.643275);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(984,6.406994);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(985,6.772562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(986,6.526204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(987,6.982722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(988,6.686649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(989,6.254787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(990,6.744046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(991,6.628755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(992,6.346549);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(993,6.701044);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(994,6.406994);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(995,6.406994);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(996,6.729743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(997,6.035252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(998,6.376843);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(999,6.300835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1000,6.161659);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1001,97.64864);
   VH_tagFirst_2b1c_H_mass_stack_1->SetEntries(6886266);

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
   
   TH1D *VH_tagFirst_H_mass__199 = new TH1D("VH_tagFirst_H_mass__199","",1000,0,2000);
   VH_tagFirst_H_mass__199->SetBinContent(43,7673);
   VH_tagFirst_H_mass__199->SetBinContent(44,15455);
   VH_tagFirst_H_mass__199->SetBinContent(45,15250);
   VH_tagFirst_H_mass__199->SetBinContent(46,15076);
   VH_tagFirst_H_mass__199->SetBinContent(47,14925);
   VH_tagFirst_H_mass__199->SetBinContent(48,7340);
   VH_tagFirst_H_mass__199->SetBinContent(78,6037);
   VH_tagFirst_H_mass__199->SetBinContent(79,11873);
   VH_tagFirst_H_mass__199->SetBinContent(80,11814);
   VH_tagFirst_H_mass__199->SetBinContent(81,11633);
   VH_tagFirst_H_mass__199->SetBinContent(82,11599);
   VH_tagFirst_H_mass__199->SetBinContent(83,5802);
   VH_tagFirst_H_mass__199->SetBinContent(1000,55);
   VH_tagFirst_H_mass__199->SetBinContent(1001,23972);
   VH_tagFirst_H_mass__199->SetEntries(3107559);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_mass__199->SetLineColor(ci);
   VH_tagFirst_H_mass__199->SetLineWidth(2);
   VH_tagFirst_H_mass__199->SetMarkerStyle(20);
   VH_tagFirst_H_mass__199->SetMarkerSize(1.2);
   VH_tagFirst_H_mass__199->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_H_mass__199->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__199->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__199->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__199->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__199->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__199->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__199->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__199->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__199->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fx1199[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fy1199[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 7488.901, 15163.94, 14972.1, 14767.96, 14612.99, 7197.844, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5974.79, 11669.5, 11704.62, 11585.65,
   11562.38, 5754.412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   0, 0, 0, 0, 0, 0, 46.973 };
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fex1199[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fey1199[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.6208398, 3.009632, 7.816173, 14.21845, 21.13592, 28.81727, 36.12626,
   43.29662, 49.97856, 56.74659, 62.43222, 67.05213, 71.13426, 74.71904, 77.6968, 79.64433, 81.44012, 82.78614, 83.72019, 84.48441, 85.22029, 84.86904, 85.07544,
   85.05278, 84.5756, 84.4673, 84.57446, 84.11634, 83.24811, 83.30596, 82.83501, 81.7731, 81.57844, 81.59025, 81.0725, 80.51791, 80.09434, 79.44566, 79.44687,
   79.16863, 78.95412, 78.39193, 77.88385, 77.88013, 78.06304, 77.32883, 77.43716, 77.13668, 76.80869, 76.71454, 76.01168, 75.999, 75.87591, 75.36493, 75.30226,
   75.51566, 75.44289, 74.92124, 74.8466, 74.27667, 73.95815, 73.60552, 73.62123, 73.46531, 73.17223, 72.59446, 72.41371, 72.55463, 71.5745, 71.68213, 71.3169,
   71.24525, 70.76892, 70.40717, 70.03392, 69.72503, 69.66696, 69.64621, 69.8824, 69.47444, 68.75783, 68.57259, 68.07756, 67.94722, 67.59175, 67.3418, 67.33035,
   67.59032, 66.95578, 67.06363, 66.73955, 66.15513, 66.00639, 65.61251, 65.28271, 65.40069, 65.20443, 64.92452, 64.78486, 64.21566, 64.34758, 64.19765, 63.82583,
   63.96307, 63.65803, 63.49282, 63.18551, 63.01294, 62.90734, 62.97623, 62.40443, 62.68637, 62.22196, 62.07621, 61.92857, 61.6838, 61.66348, 61.22122, 61.57122,
   61.18186, 61.04942, 61.25269, 60.44506, 60.82487, 60.57246, 60.53108, 60.3046, 60.04198, 59.72498, 60.21506, 60.15902, 59.60385, 59.38844, 59.70077, 58.92257,
   59.27801, 58.93074, 59.2585, 58.65375, 58.78667, 58.45792, 58.17868, 57.99454, 58.16212, 57.80148, 58.12566, 57.948, 57.47716, 57.10882, 57.50565, 57.17459,
   57.17122, 57.31262, 56.77375, 56.95507, 56.77205, 56.86025, 56.4401, 56.32389, 55.99789, 56.10104, 56.0873, 56.19886, 55.50877, 55.61803, 55.38538, 55.45493,
   55.20589, 55.33142, 54.78713, 54.52974, 54.37578, 54.875, 54.43423, 54.558, 54.26935, 53.71789, 54.07546, 53.61914, 53.743, 53.58138, 53.60476, 53.48418,
   53.206, 53.22592, 53.27478, 52.53163, 52.85713, 52.5353, 52.87536, 52.43432, 52.17825, 52.34971, 51.81502, 51.53344, 51.44548, 51.68654, 51.39113, 51.26723,
   51.41175, 51.01475, 51.1468, 50.78188, 50.87857, 51.00341, 50.58796, 50.55938, 49.94192, 50.57082, 50.20556, 50.13257, 50.18444, 49.52535, 49.35774, 49.35969,
   49.34797, 49.00113, 49.26003, 48.92438, 48.7547, 48.59831, 48.84948, 48.80804, 48.51298, 48.49907, 47.70377, 47.85503, 48.25007, 47.54595, 47.65526, 47.66942,
   47.3998, 47.75222, 47.24097, 46.96274, 46.80448, 46.4822, 46.67873, 46.37636, 46.3223, 46.60642, 46.50293, 46.15141, 46.05317, 45.97778, 46.19106, 45.69608,
   45.32555, 45.35531, 45.51649, 45.25321, 44.82747, 44.81457, 44.69399, 44.74786, 44.7414, 44.42151, 44.15825, 44.41066, 44.18225, 43.73507, 43.75709, 43.75489,
   43.64464, 43.8297, 43.36778, 43.15618, 43.42551, 43.11597, 43.25208, 43.2699, 42.66439, 42.57847, 42.54904, 42.56263, 41.89633, 42.41522, 41.93771, 41.94461,
   42.00888, 41.587, 41.65645, 41.13034, 41.329, 41.4826, 40.56417, 40.9001, 41.0858, 40.51188, 40.71355, 40.46428, 40.70882, 39.95624, 40.04296, 39.98275,
   39.67064, 39.9297, 39.70463, 39.51732, 39.72889, 39.21133, 39.10551, 39.28498, 39.15723, 39.36339, 38.76646, 38.72667, 38.59706, 38.44698, 38.35916, 38.31894,
   38.04385, 37.99316, 37.92462, 37.55952, 37.21933, 37.4336, 37.413, 37.58517, 37.36919, 37.19343, 37.10524, 37.24521, 36.59796, 36.87077, 36.4079, 36.49249,
   35.59692, 36.51625, 36.12092, 35.86391, 36.08089, 35.83165, 35.28697, 35.64291, 35.7428, 35.60774, 35.25145, 35.6402, 35.37425, 35.04859, 35.21043, 34.79196,
   34.47198, 34.53622, 34.64208, 34.49434, 34.53622, 34.00196, 34.09818, 34.15465, 34.27575, 34.05576, 33.7916, 33.27145, 33.53397, 33.37266, 33.24827, 33.26855,
   33.10596, 33.31197, 33.00976, 32.61034, 32.82241, 32.50379, 32.65759, 32.2956, 32.15806, 32.30455, 32.25381, 31.81766, 32.11908, 31.77523, 31.90537, 31.45826,
   31.62933, 31.44907, 31.22768, 31.30165, 31.16591, 30.87703, 31.10091, 30.89263, 30.97673, 30.83643, 30.66408, 30.75821, 30.05788, 30.26872, 30.16987, 29.91649,
   30.44015, 30.17945, 29.88749, 30.0739, 29.68692, 29.82293, 29.38022, 29.22237, 29.3014, 29.37038, 29.413, 29.3014, 28.99395, 29.02716, 29.00392, 28.68656,
   28.90074, 28.63276, 28.52149, 28.87405, 28.53838, 28.32486, 27.79602, 28.07885, 28.40299, 27.96192, 27.98259, 27.8272, 27.17903, 27.19321, 27.63609, 27.09736,
   27.56626, 27.10803, 26.86163, 27.4296, 27.29931, 26.61296, 26.73578, 26.73218, 26.7754, 26.71054, 26.62382, 26.44223, 26.14907, 26.31438, 26.1859, 26.31072,
   26.03459, 26.28873, 25.99755, 25.58658, 25.59788, 25.60541, 25.22627, 25.3368, 25.70307, 24.74418, 25.85259, 25.12676, 25.3292, 24.97289, 25.10374, 25.06148,
   24.93427, 24.5487, 24.56832, 24.23264, 24.45037, 24.51728, 24.33977, 24.56832, 24.31204, 23.54694, 24.02898, 24.16096, 23.87208, 24.06104, 23.92852, 23.73444,
   23.56739, 23.69787, 23.864, 23.38267, 23.36206, 23.49368, 23.42385, 23.36618, 23.28356, 22.95009, 23.12993, 23.23384, 22.91227, 23.12993, 22.92908, 22.94169,
   22.60743, 22.432, 22.69252, 22.36316, 22.58611, 22.28547, 22.62874, 21.95439, 22.3847, 21.84439, 21.89726, 21.83556, 22.02013, 21.89286, 21.53339, 21.8488,
   21.43921, 21.65387, 21.31299, 21.17692, 21.02622, 21.42572, 20.91594, 21.55575, 21.12224, 21.28131, 20.54876, 20.74943, 21.00329, 20.78191, 20.60496, 20.75407,
   20.53469, 20.62366, 20.42176, 20.41232, 20.71689, 20.35086, 20.62366, 20.39343, 20.23214, 20.71224, 20.1223, 20.194, 19.71594, 19.77937, 20.09354, 19.91532,
   19.64249, 19.61795, 19.87657, 19.38572, 19.50465, 19.667, 19.50959, 19.05483, 19.89111, 19.24102, 18.72323, 18.99404, 18.92289, 19.18586, 19.32099, 18.62519,
   19.1557, 18.88721, 18.57338, 18.82077, 18.30688, 18.81564, 18.29108, 17.97221, 18.63037, 18.35944, 18.67686, 18.79002, 18.04712, 18.24889, 17.87544, 17.87544,
   17.82145, 17.57645, 17.69666, 17.4278, 17.77815, 17.63119, 17.68576, 17.90776, 17.58742, 17.70754, 17.59289, 17.59289, 17.35022, 17.34467, 17.23879, 17.16597,
   17.53254, 17.47749, 17.30573, 17.04202, 17.03071, 17.20522, 17.29459, 16.91147, 16.66466, 16.74542, 16.97971, 16.79139, 16.68778, 16.50196, 16.58351, 16.38476,
   16.71086, 16.31994, 16.49028, 16.36122, 16.44932, 16.26671, 16.33764, 15.98587, 15.97984, 16.23113, 15.94362, 15.804, 15.94966, 16.17761, 15.877, 16.04003,
   15.63851, 16.01598, 15.8527, 15.63235, 15.69387, 15.60149, 15.47125, 15.53961, 15.49614, 15.25801, 15.92548, 15.2264, 15.28956, 15.05456, 15.24538, 15.24538,
   14.94536, 15.5272, 14.74413, 15.07375, 15.28956, 14.93891, 14.91308, 14.73105, 14.95824, 14.57982, 14.91308, 14.60624, 14.54011, 14.39358, 14.43369, 14.53349,
   14.64577, 14.44704, 14.50694, 14.52685, 14.46037, 14.16413, 14.28606, 14.20489, 13.79885, 14.07541, 14.00678, 14.08226, 13.95854, 14.11643, 13.79885, 14.00678,
   14.19132, 14.23877, 13.91706, 14.17093, 13.56645, 13.73586, 13.50951, 13.6937, 13.66553, 13.63729, 13.41646, 13.60192, 13.83373, 13.25751, 13.2938, 13.42364,
   13.35166, 13.30829, 13.14803, 13.07454, 13.00804, 13.2938, 12.83653, 13.15536, 12.9412, 12.83653, 13.22112, 12.87401, 13.14803, 12.75369, 13.12603, 12.74613,
   12.70069, 13.03763, 12.45554, 12.6855, 12.64747, 12.90391, 12.70069, 12.60167, 12.50957, 12.94864, 12.63222, 12.48644, 12.9263, 12.76124, 12.4168, 12.02251,
   11.90977, 12.37014, 12.37014, 11.99041, 12.4478, 11.96627, 12.37793, 11.84487, 11.93402, 12.237, 11.92594, 11.34626, 11.90977, 12.00647, 11.78778, 11.45613,
   12.27631, 12.16592, 11.93402, 11.81228, 11.55663, 11.32926, 11.58162, 11.53159, 11.47294, 11.67278, 11.08855, 11.47294, 11.38864, 11.56496, 11.56496, 11.19235,
   11.48134, 11.59824, 11.34626, 11.12326, 11.58162, 11.38018, 10.975, 11.02755, 11.23531, 11.48134, 10.975, 10.77117, 11.09724, 10.80689, 10.57252, 10.61799,
   10.7443, 10.80689, 10.75326, 11.01881, 10.65423, 10.98378, 11.01881, 10.40717, 10.16358, 10.75326, 10.72634, 10.52685, 10.536, 10.77117, 10.20144, 10.55428,
   10.50853, 10.44414, 10.50853, 10.54514, 10.67231, 10.37007, 10.42567, 10.25796, 9.82615, 10.19199, 10.46258, 10.06833, 10.1541, 9.875061, 9.757263, 10.22031,
   10.01074, 10.3235, 10.25796, 9.527413, 9.981821, 10.12559, 10.06833, 9.884814, 9.943132, 9.835952, 9.865298, 9.618008, 9.816338, 9.517293, 9.628022, 9.435947,
   9.865298, 9.537521, 9.456349, 9.384748, 9.343587, 9.557707, 9.776994, 9.677934, 9.737491, 9.507163, 9.446154, 9.537521, 9.219, 9.291879, 9.446154, 9.250304,
   9.050217, 9.039563, 9.435947, 9.384748, 9.786845, 9.198071, 9.124444, 9.271115, 9.36419, 9.405261, 9.260715, 9.497022, 8.856492, 9.082103, 8.647297, 9.607984,
   9.028897, 9.050217, 8.713901, 8.724952, 9.219, 9.36419, 8.94311, 8.669555, 8.823791, 8.702836, 9.018218, 8.758022, 8.329439, 8.478498, 8.444334, 8.283035,
   8.602608, 8.387083, 8.975376, 8.591399, 8.432915, 8.899906, 8.352545, 8.432915, 8.478498, 8.387083, 8.23637, 8.867365, 8.118533, 8.294661, 8.444334, 8.41003,
   8.259736, 8.387083, 8.294661, 8.317863, 8.248061, 8.680663, 8.23637, 7.914185, 8.189439, 7.59102, 7.974831, 7.986905, 7.729393, 7.791477, 8.189439, 7.865332,
   8.106655, 7.603703, 7.729393, 7.974831, 7.59102, 8.106655, 7.926351, 8.189439, 7.902, 8.09476, 7.666805, 7.840791, 7.463, 7.803835, 7.411173, 7.578315,
   7.666805, 7.51447, 7.437132, 7.840791, 7.424164, 7.578315, 7.450077, 7.488779, 7.629007, 7.679364, 7.501635, 7.463, 7.488779, 7.654227, 7.540073, 7.791477,
   7.411173, 7.411173, 7.226852, 7.159873, 7.051384, 7.240173, 7.078662, 7.240173, 7.437132, 7.078662, 7.119384, 7.293216, 7.213506, 7.132906, 7.18674, 7.279991,
   7.319593, 7.092262, 7.024, 7.293216, 7.279991, 7.037705, 6.772562, 6.941199, 6.829237, 7.213506, 6.913379, 6.955068, 6.729743, 6.758319, 6.540953, 7.037705,
   6.555668, 6.843333, 7.105836, 6.643275, 7.037705, 7.078662, 7.037705, 6.437004, 6.800959, 6.941199, 6.526204, 6.223899, 6.701044, 6.540953, 6.628755, 6.31611,
   6.786775, 6.130301, 6.146, 6.815113, 5.906141, 6.643275, 6.406994, 6.772562, 6.526204, 6.982722, 6.686649, 6.254787, 6.744046, 6.628755, 6.346549, 6.701044,
   6.406994, 6.406994, 6.729743, 6.035252, 6.376843, 6.300835, 6.161659 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_H_mass_fx1199,Graph_from_VH_tagFirst_2b1c_H_mass_fy1199,Graph_from_VH_tagFirst_2b1c_H_mass_fex1199,Graph_from_VH_tagFirst_2b1c_H_mass_fey1199);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_H_mass1199 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_H_mass1199","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1199->SetMinimum(-1618.295);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1199->SetMaximum(16778.6);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1199->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1199->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1199->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1199->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1199->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1199->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1199->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1199->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1199->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1199->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1199->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_H_mass1199);
   
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
   
   TH1D *data_mc_ratio__200 = new TH1D("data_mc_ratio__200","",1000,0,2000);
   data_mc_ratio__200->SetBinContent(43,1.024583);
   data_mc_ratio__200->SetBinContent(44,1.019194);
   data_mc_ratio__200->SetBinContent(45,1.018562);
   data_mc_ratio__200->SetBinContent(46,1.020859);
   data_mc_ratio__200->SetBinContent(47,1.021351);
   data_mc_ratio__200->SetBinContent(48,1.01975);
   data_mc_ratio__200->SetBinContent(78,1.010412);
   data_mc_ratio__200->SetBinContent(79,1.017439);
   data_mc_ratio__200->SetBinContent(80,1.009345);
   data_mc_ratio__200->SetBinContent(81,1.004087);
   data_mc_ratio__200->SetBinContent(82,1.003167);
   data_mc_ratio__200->SetBinContent(83,1.00827);
   data_mc_ratio__200->SetBinContent(1000,1.170885);
   data_mc_ratio__200->SetBinContent(1001,1.103663);
   data_mc_ratio__200->SetBinError(43,0.01169673);
   data_mc_ratio__200->SetBinError(44,0.008198275);
   data_mc_ratio__200->SetBinError(45,0.00824807);
   data_mc_ratio__200->SetBinError(46,0.00831424);
   data_mc_ratio__200->SetBinError(47,0.008360226);
   data_mc_ratio__200->SetBinError(48,0.0119027);
   data_mc_ratio__200->SetBinError(78,0.01300433);
   data_mc_ratio__200->SetBinError(79,0.009337445);
   data_mc_ratio__200->SetBinError(80,0.009286269);
   data_mc_ratio__200->SetBinError(81,0.009309482);
   data_mc_ratio__200->SetBinError(82,0.009314573);
   data_mc_ratio__200->SetBinError(83,0.01323695);
   data_mc_ratio__200->SetBinError(1000,0.1578822);
   data_mc_ratio__200->SetBinError(1001,0.008685114);
   data_mc_ratio__200->SetMinimum(0.4);
   data_mc_ratio__200->SetMaximum(1.6);
   data_mc_ratio__200->SetEntries(3521.592);
   data_mc_ratio__200->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__200->SetLineColor(ci);
   data_mc_ratio__200->SetLineWidth(2);
   data_mc_ratio__200->SetMarkerStyle(20);
   data_mc_ratio__200->SetMarkerSize(1.2);
   data_mc_ratio__200->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__200->GetXaxis()->SetRange(1,150);
   data_mc_ratio__200->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__200->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__200->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__200->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__200->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__200->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__200->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__200->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__200->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__200->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__200->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__200->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__200->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__200->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__200->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__200->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1200[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1200[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1200[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1200[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01089325, 0.005380545, 0.005414907, 0.005452203, 0.005481036, 0.01103742, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01214346, 0.006133469, 0.00612426, 0.006155624,
   0.006161814, 0.0122982, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   0, 0, 0, 0, 0, 0, 0.1311745 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1200,Graph_from_mc_statistical_error_fy1200,Graph_from_mc_statistical_error_fex1200,Graph_from_mc_statistical_error_fey1200);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1200 = new TH1F("Graph_Graph_from_mc_statistical_error1200","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1200->SetMinimum(0.8425906);
   Graph_Graph_from_mc_statistical_error1200->SetMaximum(1.157409);
   Graph_Graph_from_mc_statistical_error1200->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1200->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1200->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1200->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1200->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1200->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1200->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1200->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1200->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1200->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1200->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1200);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagFirst_VR_18->cd();
   H_mass_tagFirst_VR_18->Modified();
   H_mass_tagFirst_VR_18->cd();
   H_mass_tagFirst_VR_18->SetSelected(H_mass_tagFirst_VR_18);
}
