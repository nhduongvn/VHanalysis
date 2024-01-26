#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagFirst_VR_18()
{
//=========Macro generated from canvas: Z_mass_tagFirst_VR_18/Z_mass_tagFirst_VR_18
//=========  (Thu Jan 25 12:40:57 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_tagFirst_VR_18 = new TCanvas("Z_mass_tagFirst_VR_18", "Z_mass_tagFirst_VR_18",0,0,600,600);
   Z_mass_tagFirst_VR_18->SetHighLightColor(2);
   Z_mass_tagFirst_VR_18->Range(0,0,1,1);
   Z_mass_tagFirst_VR_18->SetFillColor(0);
   Z_mass_tagFirst_VR_18->SetFillStyle(4000);
   Z_mass_tagFirst_VR_18->SetBorderMode(0);
   Z_mass_tagFirst_VR_18->SetBorderSize(2);
   Z_mass_tagFirst_VR_18->SetFrameFillStyle(1000);
   Z_mass_tagFirst_VR_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-42.7758,315.7258,42743.02);
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
   st->SetMaximum(38464.44);
   
   TH1F *st_stack_121 = new TH1F("st_stack_121","",1000,0,2000);
   st_stack_121->SetMinimum(0.01);
   st_stack_121->SetMaximum(38464.44);
   st_stack_121->SetDirectory(nullptr);
   st_stack_121->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_121->SetLineColor(ci);
   st_stack_121->SetLineWidth(0);
   st_stack_121->GetXaxis()->SetRange(1,150);
   st_stack_121->GetXaxis()->SetLabelFont(42);
   st_stack_121->GetXaxis()->SetTitleOffset(1);
   st_stack_121->GetXaxis()->SetTitleFont(42);
   st_stack_121->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_121->GetYaxis()->SetLabelFont(42);
   st_stack_121->GetYaxis()->SetLabelSize(0.05);
   st_stack_121->GetYaxis()->SetTitleSize(0.057);
   st_stack_121->GetYaxis()->SetTitleOffset(1.2);
   st_stack_121->GetYaxis()->SetTitleFont(42);
   st_stack_121->GetZaxis()->SetLabelFont(42);
   st_stack_121->GetZaxis()->SetTitleOffset(1);
   st_stack_121->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_121);
   
   
   TH1D *VH_tagFirst_2b1c_Z_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(26,9948.24);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(27,11045.16);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(28,12104.28);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(29,13128.48);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(30,14185.8);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(61,12498.12);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(62,12385.08);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(63,12273.12);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(64,12139.2);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(65,12021.84);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1000,105.48);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1001,48413.16);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(13,1.193985);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(14,2.990385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(15,6.539725);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(16,10.85983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(17,15.23102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(18,20.21777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(19,25.5194);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(20,31.09366);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(21,36.53069);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(22,41.50474);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(23,46.75706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(24,51.5429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(25,55.52643);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(26,59.84452);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(27,63.05757);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(28,66.01167);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(29,68.74775);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(30,71.46249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(31,72.98151);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(32,74.57389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(33,75.86439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(34,76.80159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(35,77.48033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(36,78.07851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(37,78.23273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(38,78.61117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(39,78.71332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(40,78.85726);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(41,78.72896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(42,78.62189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(43,78.30062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(44,78.12249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(45,77.31707);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(46,76.70957);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(47,76.01799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(48,75.65998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(49,74.74661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(50,73.83511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(51,73.08887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(52,72.09893);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(53,71.29364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(54,70.7187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(55,69.96607);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(56,69.56668);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(57,69.25955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(58,68.3033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(59,68.04476);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(60,67.5487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(61,67.07699);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(62,66.77296);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(63,66.47047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(64,66.10682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(65,65.78649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(66,65.28915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(67,65.16398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(68,64.38165);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(69,63.98082);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(70,63.7505);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(71,63.18385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(72,63.34057);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(73,62.83006);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(74,62.36838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(75,61.96289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(76,61.65466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(77,61.72504);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(78,61.09827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(79,60.83574);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(80,60.63302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(81,60.4071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(82,60.35237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(83,59.65364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(84,59.42509);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(85,59.1102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(86,58.78592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(87,58.53848);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(88,58.13526);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(89,57.6933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(90,57.3915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(91,57.29544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(92,56.69514);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(93,56.66313);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(94,56.49477);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(95,56.00054);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(96,55.55793);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(97,55.09882);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(98,54.77326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(99,54.87491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(100,54.43386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(101,54.06956);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(102,53.64);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(103,53.52269);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(104,53.22159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(105,53.09115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(106,52.67576);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(107,52.36484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(108,51.88623);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(109,51.61577);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(110,51.1998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(111,51.13267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(112,51.01468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(113,50.20548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(114,50.06978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(115,49.83107);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(116,49.55332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(117,49.5677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(118,49.02084);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(119,48.88185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(120,48.64798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(121,48.30041);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(122,48.2588);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(123,47.61128);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(124,47.5459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(125,47.08299);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(126,46.83599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(127,46.8346);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(128,46.60019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(129,46.14745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(130,45.973);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(131,45.6292);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(132,45.86999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(133,45.06188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(134,45.059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(135,44.52517);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(136,44.68353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(137,44.57172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(138,44.19797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(139,44.29902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(140,43.61204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(141,43.67736);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(142,42.96838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(143,43.15948);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(144,43.17599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(145,42.79611);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(146,42.62923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(147,42.26283);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(148,42.13077);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(149,41.88705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(150,41.68234);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(151,41.57649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(152,41.45318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(153,41.09523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(154,40.83263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(155,41.18658);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(156,40.71662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(157,40.60666);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(158,40.44516);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(159,40.16542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(160,39.90807);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(161,40.10245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(162,39.64743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(163,40.00052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(164,39.37683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(165,39.43767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(166,39.14245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(167,39.31259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(168,38.82663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(169,38.6577);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(170,38.75981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(171,38.63087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(172,38.16849);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(173,38.36661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(174,37.70216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(175,38.10902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(176,37.7657);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(177,37.8377);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(178,37.592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(179,37.34989);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(180,37.7554);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(181,37.17774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(182,37.34122);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(183,37.15507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(184,37.09223);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(185,36.65465);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(186,36.66879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(187,36.50762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(188,36.59626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(189,36.49164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(190,36.45789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(191,35.97839);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(192,36.35287);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(193,36.22609);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(194,35.97479);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(195,35.88823);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(196,35.92252);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(197,35.73261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(198,35.7181);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(199,35.35156);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(200,35.56538);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(201,35.33689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(202,35.39186);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(203,35.45406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(204,35.43944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(205,35.17331);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(206,34.86614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(207,34.92742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(208,35.06999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(209,34.691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(210,34.94041);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(211,34.58811);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(212,34.51873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(213,34.3286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(214,34.37387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(215,34.03285);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(216,34.23598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(217,34.2303);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(218,33.89931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(219,33.95088);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(220,34.04047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(221,33.94516);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(222,33.59979);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(223,33.51095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(224,34.04999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(225,33.45483);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(226,33.77291);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(227,33.53995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(228,33.89549);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(229,33.40249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(230,33.23523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(231,33.02595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(232,33.48194);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(233,33.11217);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(234,33.01418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(235,33.3792);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(236,32.94738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(237,32.80744);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(238,32.7778);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(239,32.93164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(240,32.81534);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(241,33.09847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(242,32.65301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(243,32.57552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(244,32.51978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(245,32.53572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(246,32.26371);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(247,32.22553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(248,32.3199);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(249,32.0784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(250,31.96305);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(251,32.11474);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(252,32.02584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(253,32.0056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(254,32.18328);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(255,32.07436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(256,31.99142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(257,31.67182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(258,31.67795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(259,31.71475);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(260,31.34068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(261,31.85542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(262,31.68);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(263,31.22883);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(264,31.56525);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(265,31.4274);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(266,31.14364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(267,31.17276);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(268,31.17276);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(269,31.30551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(270,31.206);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(271,30.9244);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(272,31.02482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(273,30.84467);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(274,30.54913);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(275,30.66135);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(276,30.81945);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(277,30.61694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(278,30.68037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(279,31.03526);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(280,30.87407);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(281,30.67192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(282,30.85307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(283,30.6127);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(284,30.89505);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(285,30.15631);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(286,30.332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(287,30.39603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(288,30.3811);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(289,30.04005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(290,30.42799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(291,30.24643);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(292,30.13912);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(293,30.11546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(294,30.19067);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(295,30.11976);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(296,29.77355);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(297,30.05515);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(298,30.19926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(299,29.97959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(300,29.80835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(301,30.06593);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(302,29.54194);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(303,29.65797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(304,29.76919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(305,29.55949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(306,29.46287);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(307,29.64704);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(308,29.64486);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(309,29.46287);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(310,29.38359);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(311,29.52439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(312,29.31514);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(313,29.12887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(314,29.06652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(315,29.2709);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(316,29.18221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(317,29.21107);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(318,28.9078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(319,28.87191);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(320,28.89883);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(321,29.25983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(322,28.64207);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(323,28.4696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(324,29.04868);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(325,28.92797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(326,28.63302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(327,28.50145);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(328,28.45594);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(329,28.55824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(330,28.31898);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(331,28.82924);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(332,28.59678);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(333,28.53554);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(334,28.22731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(335,28.20204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(336,28.24796);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(337,28.27089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(338,28.20434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(339,27.97364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(340,27.9968);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(341,28.13533);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(342,27.90871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(343,27.87153);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(344,27.89942);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(345,27.82034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(346,27.90639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(347,28.19745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(348,27.95047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(349,27.41678);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(350,27.78538);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(351,27.77838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(352,27.92496);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(353,27.62164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(354,27.51116);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(355,27.45457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(356,27.46401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(357,27.44041);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(358,27.20085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(359,27.27935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(360,27.29835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(361,27.32682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(362,27.24608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(363,27.0048);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(364,26.80248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(365,27.03358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(366,27.23894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(367,27.0072);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(368,27.01679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(369,27.03598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(370,26.86768);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(371,26.76377);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(372,26.7347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(373,26.6181);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(374,26.67403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(375,26.6473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(376,26.61566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(377,26.45204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(378,26.60349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(379,26.46918);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(380,26.6886);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(381,26.50832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(382,26.5352);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(383,26.71772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(384,26.20592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(385,26.41527);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(386,26.41282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(387,26.12668);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(388,25.96995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(389,25.915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(390,26.3145);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(391,26.36124);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(392,25.80474);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(393,25.80474);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(394,25.9225);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(395,25.82232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(396,25.88748);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(397,25.82483);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(398,25.73937);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(399,25.65616);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(400,25.54732);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(401,25.5194);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(402,25.46348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(403,25.65868);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(404,25.35382);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(405,25.25907);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(406,25.36404);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(407,25.18457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(408,25.494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(409,25.23854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(410,25.00122);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(411,24.90773);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(412,25.32569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(413,24.88691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(414,25.11758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(415,24.88952);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(416,25.30265);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(417,25.1614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(418,24.86086);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(419,24.92334);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(420,24.88952);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(421,24.78254);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(422,24.59093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(423,24.55401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(424,24.84782);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(425,24.49852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(426,24.21652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(427,24.49059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(428,24.52232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(429,24.53817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(430,24.09043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(431,24.35261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(432,24.24327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(433,24.03927);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(434,24.04196);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(435,24.30733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(436,24.18171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(437,23.97178);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(438,23.8607);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(439,23.89326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(440,23.9312);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(441,23.92308);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(442,23.58481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(443,23.71632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(444,23.69992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(445,23.49672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(446,23.58756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(447,24.015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(448,23.8036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(449,23.25277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(450,23.63147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(451,23.71632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(452,23.40277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(453,23.69446);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(454,23.44703);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(455,23.20255);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(456,23.39169);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(457,23.35288);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(458,23.11021);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(459,22.97522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(460,23.01186);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(461,23.19138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(462,22.85362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(463,22.93005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(464,22.65999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(465,22.78547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(466,22.69143);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(467,22.79968);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(468,22.52806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(469,23.04);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(470,22.78547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(471,22.34611);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(472,22.42716);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(473,22.4964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(474,22.68571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(475,22.45892);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(476,22.37799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(477,22.33741);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(478,22.23273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(479,22.02188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(480,22.19189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(481,22.37509);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(482,22.33451);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(483,21.98065);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(484,22.10705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(485,21.77628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(486,21.88314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(487,22.02482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(488,21.80899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(489,21.84165);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(490,21.7465);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(491,22.02188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(492,21.86833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(493,21.74054);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(494,21.86833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(495,21.64495);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(496,21.91569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(497,21.594);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(498,21.39503);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(499,21.48268);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(500,21.68085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(501,21.48871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(502,21.27353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(503,21.43739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(504,21.57899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(505,20.93269);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(506,21.16053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(507,20.91721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(508,21.34044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(509,20.99143);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(510,20.9729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(511,20.91721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(512,21.28876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(513,21.19725);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(514,21.26439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(515,21.04076);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(516,20.64593);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(517,20.87069);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(518,20.71799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(519,20.57991);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(520,20.75237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(521,20.53894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(522,20.31689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(523,20.18891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(524,20.16321);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(525,20.15679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(526,20.51052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(527,20.52316);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(528,20.26899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(529,20.22098);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(530,20.15679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(531,20.35831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(532,20.15357);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(533,20.13105);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(534,19.94998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(535,19.80654);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(536,20.13427);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(537,19.92398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(538,20.01483);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(539,20.02131);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(540,19.9954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(541,19.9012);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(542,19.64558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(543,19.55632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(544,19.5132);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(545,19.7738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(546,19.553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(547,19.97595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(548,19.60596);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(549,19.67195);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(550,19.79673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(551,19.52316);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(552,19.50987);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(553,19.39328);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(554,19.29613);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(555,19.17824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(556,19.10037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(557,19.17824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(558,19.18837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(559,19.02218);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(560,19.28942);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(561,18.97101);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(562,19.28606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(563,19.28942);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(564,19.10376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(565,19.03239);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(566,18.65759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(567,18.70268);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(568,19.08679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(569,19.02558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(570,18.66453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(571,18.83044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(572,18.49363);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(573,18.58102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(574,18.89571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(575,18.68882);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(576,18.441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(577,18.37059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(578,18.43748);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(579,18.1898);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(580,18.38821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(581,18.51814);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(582,18.31406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(583,18.56707);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(584,18.34234);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(585,18.24316);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(586,18.25736);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(587,18.25736);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(588,18.31406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(589,17.8953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(590,18.2751);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(591,17.8409);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(592,18.15414);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(593,17.97839);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(594,17.85542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(595,17.71332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(596,17.56269);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(597,17.72794);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(598,17.61427);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(599,17.52205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(600,17.93508);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(601,17.4702);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(602,17.78997);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(603,17.7316);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(604,17.69502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(605,17.6253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(606,17.21237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(607,17.04211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(608,16.79314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(609,17.62162);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(610,17.61059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(611,17.72794);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(612,17.10663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(613,17.11042);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(614,17.04972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(615,17.49244);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(616,17.46278);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(617,17.21613);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(618,17.22742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(619,17.08389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(620,17.09526);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(621,17.10663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(622,16.80471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(623,17.20484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(624,16.80471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(625,17.15958);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(626,16.93914);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(627,16.66921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(628,16.72741);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(629,16.80857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(630,16.92383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(631,16.71579);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(632,16.39878);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(633,16.59127);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(634,16.59908);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(635,16.04324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(636,16.77384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(637,16.15995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(638,16.56782);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(639,16.39878);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(640,16.43036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(641,16.41853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(642,16.14792);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(643,16.46582);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(644,16.21599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(645,16.22798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(646,16.69251);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(647,15.75797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(648,15.75797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(649,16.36714);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(650,16.0028);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(651,16.26387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(652,16.03516);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(653,16.12784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(654,16.01494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(655,15.84818);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(656,16.07955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(657,15.87678);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(658,15.79083);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(659,15.65897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(660,15.81953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(661,15.63412);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(662,15.65897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(663,15.71679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(664,15.61753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(665,15.47581);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(666,15.68791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(667,15.34968);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(668,15.44228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(669,15.30318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(670,15.45906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(671,15.30741);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(672,15.10285);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(673,15.02111);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(674,15.48837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(675,15.25228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(676,15.18415);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(677,15.38763);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(678,15.39184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(679,15.15425);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(680,15.08138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(681,15.15425);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(682,14.82134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(683,15.14569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(684,14.86063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(685,14.90417);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(686,14.57);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(687,15.2947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(688,15.03404);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(689,14.87371);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(690,15.12429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(691,15.15852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(692,14.94759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(693,14.74682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(694,14.80821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(695,14.80384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(696,14.60553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(697,14.74243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(698,15.02111);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(699,14.58778);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(700,14.72043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(701,14.76439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(702,14.44044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(703,14.74682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(704,14.15491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(705,14.31877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(706,14.47182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(707,14.48077);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(708,14.2689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(709,14.41799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(710,14.3459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(711,14.391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(712,14.09528);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(713,13.96132);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(714,14.19149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(715,13.98914);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(716,14.02615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(717,14.33234);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(718,14.08608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(719,14.10906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(720,14.05384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(721,14.14117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(722,14.15034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(723,13.87285);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(724,13.59447);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(725,13.88219);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(726,13.67526);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(727,13.78852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(728,13.81199);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(729,13.82606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(730,13.75087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(731,13.69893);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(732,13.97987);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(733,13.75087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(734,13.71784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(735,13.96132);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(736,13.83543);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(737,13.8073);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(738,13.68);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(739,13.51319);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(740,13.40245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(741,13.66578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(742,13.5515);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(743,13.24193);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(744,13.12396);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(745,13.35886);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(746,13.44107);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(747,13.46034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(748,13.0099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(749,13.30053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(750,13.28102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(751,13.31513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(752,12.84953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(753,13.07945);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(754,12.93498);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(755,13.10914);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(756,12.92997);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(757,13.29078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(758,12.74827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(759,12.76351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(760,12.97499);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(761,12.85961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(762,12.95);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(763,12.91492);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(764,12.91994);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(765,12.99495);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(766,12.75843);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(767,12.86969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(768,12.93998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(769,12.6718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(770,12.89484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(771,13.05465);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(772,12.53296);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(773,12.83439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(774,12.97);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(775,12.66156);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(776,12.86465);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(777,12.55363);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(778,12.77873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(779,12.38212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(780,12.24529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(781,12.55363);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(782,12.32441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(783,12.5019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(784,12.58456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(785,12.27172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(786,12.35068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(787,12.22411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(788,12.47596);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(789,12.30863);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(790,12.09621);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(791,12.27172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(792,12.12831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(793,12.34543);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(794,12.2981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(795,12.10692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(796,11.92899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(797,12.05328);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(798,12.40303);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(799,11.62081);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(800,12.05328);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(801,11.7704);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(802,11.8527);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(803,11.7318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(804,11.97778);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(805,11.88545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(806,11.86363);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(807,11.52);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(808,12.0479);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(809,11.9994);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(810,11.72628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(811,11.67089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(812,11.87454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(813,11.5537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(814,11.68753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(815,11.56491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(816,11.40126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(817,11.53686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(818,11.83081);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(819,11.65422);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(820,11.62638);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(821,11.53124);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(822,11.37281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(823,11.35);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(824,11.47491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(825,11.44664);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(826,11.13675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(827,11.3842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(828,11.27553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(829,11.54809);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(830,11.28702);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(831,11.20057);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(832,11.18899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(833,11.28128);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(834,11.58171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(835,11.20636);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(836,11.00211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(837,11.02564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(838,11.27553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(839,11.21791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(840,10.9134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(841,10.91934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(842,10.7338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(843,11.25828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(844,10.56341);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(845,10.87772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(846,11.12511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(847,10.91934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(848,11.03739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(849,11.3557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(850,10.64286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(851,10.99032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(852,11.09595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(853,10.81199);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(854,10.94305);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(855,10.89558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(856,10.81799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(857,10.7338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(858,10.44);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(859,10.48954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(860,10.62458);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(861,10.69751);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(862,10.90152);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(863,10.91934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(864,10.359);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(865,10.44);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(866,10.78799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(867,10.62458);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(868,10.3715);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(869,10.75189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(870,10.3214);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(871,10.69751);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(872,10.36525);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(873,10.22045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(874,10.06713);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(875,10.44);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(876,10.25842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(877,10.1249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(878,10.09927);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(879,10.25842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(880,10.52654);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(881,10.39023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(882,10.0349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(883,10.4648);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(884,10.1313);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(885,10.33394);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(886,10.26474);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(887,10.16323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(888,9.950598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(889,10.13769);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(890,10.23945);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(891,10.26474);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(892,9.924515);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(893,10.21411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(894,10.05425);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(895,9.976613);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(896,10.06713);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(897,9.394552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(898,10.20141);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(899,9.931042);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(900,9.538302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(901,10.01551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(902,9.773188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(903,10.15047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(904,9.937565);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(905,9.753276);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(906,9.74663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(907,9.57221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(908,9.504273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(909,10.13769);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(910,9.558661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(911,9.706658);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(912,9.766555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(913,9.898364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(914,9.632943);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(915,9.241558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(916,9.476962);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(917,9.773188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(918,9.839268);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(919,9.679917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(920,9.726664);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(921,9.612742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(922,9.276551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(923,9.558661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(924,9.766555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(925,9.234544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(926,9.408337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(927,9.26257);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(928,9.679917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(929,9.394552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(930,9.269563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(931,9);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(932,9.366921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(933,9.626214);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(934,9.227524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(935,9.290511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(936,8.992797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(937,9.171172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(938,9.353074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(939,9.100242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(940,9.311412);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(941,8.854829);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(942,9.064568);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(943,9.093118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(944,9.276551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(945,9.234544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(946,8.985588);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(947,9.114472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(948,9.014388);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(949,8.803454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(950,8.854829);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(951,9.021574);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(952,9.15703);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(953,9.05026);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(954,8.617471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(955,8.677419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(956,9.192345);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(957,8.891344);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(958,8.963928);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(959,8.825508);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(960,8.526758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(961,8.840181);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(962,8.942214);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(963,8.810812);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(964,8.326824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(965,8.396571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(966,8.632497);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(967,8.751777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(968,8.72211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(969,8.526758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(970,8.781344);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(971,8.714677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(972,8.534354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(973,8.751777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(974,8.669948);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(975,8.564672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(976,8.707238);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(977,8.519155);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(978,8.602418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(979,8.481038);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(980,8.920448);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(981,8.699793);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(982,8.295637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(983,8.541944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(984,8.326824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(985,8.773961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(986,8.334603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(987,8.534354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(988,8.373386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(989,8.442748);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(990,8.161765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(991,8.073958);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(992,7.96894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(993,8.465743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(994,8.089994);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(995,8.427384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(996,8.287822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(997,8.357894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(998,7.96894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(999,8.27217);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1000,8.617471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1001,132.0179);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetEntries(6886266);

   ci = TColor::GetColor("#ff6600");
   VH_tagFirst_2b1c_Z_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Z_mass_stack_1->SetLineColor(ci);
   VH_tagFirst_2b1c_Z_mass_stack_1->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_2b1c_Z_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Z_mass_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Z_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Z_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Z_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Z_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Z_mass_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Z_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_2b1c_Z_mass_stack_1,"");
   st->Draw("hist");
   
   TH1D *VH_tagFirst_Z_mass__241 = new TH1D("VH_tagFirst_Z_mass__241","",1000,0,2000);
   VH_tagFirst_Z_mass__241->SetBinContent(26,12234);
   VH_tagFirst_Z_mass__241->SetBinContent(27,13606);
   VH_tagFirst_Z_mass__241->SetBinContent(28,14815);
   VH_tagFirst_Z_mass__241->SetBinContent(29,16162);
   VH_tagFirst_Z_mass__241->SetBinContent(30,17309);
   VH_tagFirst_Z_mass__241->SetBinContent(61,15493);
   VH_tagFirst_Z_mass__241->SetBinContent(62,15325);
   VH_tagFirst_Z_mass__241->SetBinContent(63,15317);
   VH_tagFirst_Z_mass__241->SetBinContent(64,15178);
   VH_tagFirst_Z_mass__241->SetBinContent(65,15113);
   VH_tagFirst_Z_mass__241->SetBinContent(1000,142);
   VH_tagFirst_Z_mass__241->SetBinContent(1001,65888);
   VH_tagFirst_Z_mass__241->SetEntries(3107559);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_mass__241->SetLineColor(ci);
   VH_tagFirst_Z_mass__241->SetLineWidth(2);
   VH_tagFirst_Z_mass__241->SetMarkerStyle(20);
   VH_tagFirst_Z_mass__241->SetMarkerSize(1.2);
   VH_tagFirst_Z_mass__241->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_Z_mass__241->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__241->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__241->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__241->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__241->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__241->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__241->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__241->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__241->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fx1241[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fy1241[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 9948.24, 11045.16, 12104.28, 13128.48, 14185.8, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12498.12, 12385.08, 12273.12, 12139.2, 12021.84,
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
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 105.48 };
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fex1241[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fey1241[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.193985, 2.990385, 6.539725, 10.85983, 15.23102,
   20.21777, 25.5194, 31.09366, 36.53069, 41.50474, 46.75706, 51.5429, 55.52643, 59.84452, 63.05757, 66.01167, 68.74775, 71.46249, 72.98151, 74.57389, 75.86439,
   76.80159, 77.48033, 78.07851, 78.23273, 78.61117, 78.71332, 78.85726, 78.72896, 78.62189, 78.30062, 78.12249, 77.31707, 76.70957, 76.01799, 75.65998, 74.74661,
   73.83511, 73.08887, 72.09893, 71.29364, 70.7187, 69.96607, 69.56668, 69.25955, 68.3033, 68.04476, 67.5487, 67.07699, 66.77296, 66.47047, 66.10682, 65.78649,
   65.28915, 65.16398, 64.38165, 63.98082, 63.7505, 63.18385, 63.34057, 62.83006, 62.36838, 61.96289, 61.65466, 61.72504, 61.09827, 60.83574, 60.63302, 60.4071,
   60.35237, 59.65364, 59.42509, 59.1102, 58.78592, 58.53848, 58.13526, 57.6933, 57.3915, 57.29544, 56.69514, 56.66313, 56.49477, 56.00054, 55.55793, 55.09882,
   54.77326, 54.87491, 54.43386, 54.06956, 53.64, 53.52269, 53.22159, 53.09115, 52.67576, 52.36484, 51.88623, 51.61577, 51.1998, 51.13267, 51.01468, 50.20548,
   50.06978, 49.83107, 49.55332, 49.5677, 49.02084, 48.88185, 48.64798, 48.30041, 48.2588, 47.61128, 47.5459, 47.08299, 46.83599, 46.8346, 46.60019, 46.14745,
   45.973, 45.6292, 45.86999, 45.06188, 45.059, 44.52517, 44.68353, 44.57172, 44.19797, 44.29902, 43.61204, 43.67736, 42.96838, 43.15948, 43.17599, 42.79611,
   42.62923, 42.26283, 42.13077, 41.88705, 41.68234, 41.57649, 41.45318, 41.09523, 40.83263, 41.18658, 40.71662, 40.60666, 40.44516, 40.16542, 39.90807, 40.10245,
   39.64743, 40.00052, 39.37683, 39.43767, 39.14245, 39.31259, 38.82663, 38.6577, 38.75981, 38.63087, 38.16849, 38.36661, 37.70216, 38.10902, 37.7657, 37.8377,
   37.592, 37.34989, 37.7554, 37.17774, 37.34122, 37.15507, 37.09223, 36.65465, 36.66879, 36.50762, 36.59626, 36.49164, 36.45789, 35.97839, 36.35287, 36.22609,
   35.97479, 35.88823, 35.92252, 35.73261, 35.7181, 35.35156, 35.56538, 35.33689, 35.39186, 35.45406, 35.43944, 35.17331, 34.86614, 34.92742, 35.06999, 34.691,
   34.94041, 34.58811, 34.51873, 34.3286, 34.37387, 34.03285, 34.23598, 34.2303, 33.89931, 33.95088, 34.04047, 33.94516, 33.59979, 33.51095, 34.04999, 33.45483,
   33.77291, 33.53995, 33.89549, 33.40249, 33.23523, 33.02595, 33.48194, 33.11217, 33.01418, 33.3792, 32.94738, 32.80744, 32.7778, 32.93164, 32.81534, 33.09847,
   32.65301, 32.57552, 32.51978, 32.53572, 32.26371, 32.22553, 32.3199, 32.0784, 31.96305, 32.11474, 32.02584, 32.0056, 32.18328, 32.07436, 31.99142, 31.67182,
   31.67795, 31.71475, 31.34068, 31.85542, 31.68, 31.22883, 31.56525, 31.4274, 31.14364, 31.17276, 31.17276, 31.30551, 31.206, 30.9244, 31.02482, 30.84467,
   30.54913, 30.66135, 30.81945, 30.61694, 30.68037, 31.03526, 30.87407, 30.67192, 30.85307, 30.6127, 30.89505, 30.15631, 30.332, 30.39603, 30.3811, 30.04005,
   30.42799, 30.24643, 30.13912, 30.11546, 30.19067, 30.11976, 29.77355, 30.05515, 30.19926, 29.97959, 29.80835, 30.06593, 29.54194, 29.65797, 29.76919, 29.55949,
   29.46287, 29.64704, 29.64486, 29.46287, 29.38359, 29.52439, 29.31514, 29.12887, 29.06652, 29.2709, 29.18221, 29.21107, 28.9078, 28.87191, 28.89883, 29.25983,
   28.64207, 28.4696, 29.04868, 28.92797, 28.63302, 28.50145, 28.45594, 28.55824, 28.31898, 28.82924, 28.59678, 28.53554, 28.22731, 28.20204, 28.24796, 28.27089,
   28.20434, 27.97364, 27.9968, 28.13533, 27.90871, 27.87153, 27.89942, 27.82034, 27.90639, 28.19745, 27.95047, 27.41678, 27.78538, 27.77838, 27.92496, 27.62164,
   27.51116, 27.45457, 27.46401, 27.44041, 27.20085, 27.27935, 27.29835, 27.32682, 27.24608, 27.0048, 26.80248, 27.03358, 27.23894, 27.0072, 27.01679, 27.03598,
   26.86768, 26.76377, 26.7347, 26.6181, 26.67403, 26.6473, 26.61566, 26.45204, 26.60349, 26.46918, 26.6886, 26.50832, 26.5352, 26.71772, 26.20592, 26.41527,
   26.41282, 26.12668, 25.96995, 25.915, 26.3145, 26.36124, 25.80474, 25.80474, 25.9225, 25.82232, 25.88748, 25.82483, 25.73937, 25.65616, 25.54732, 25.5194,
   25.46348, 25.65868, 25.35382, 25.25907, 25.36404, 25.18457, 25.494, 25.23854, 25.00122, 24.90773, 25.32569, 24.88691, 25.11758, 24.88952, 25.30265, 25.1614,
   24.86086, 24.92334, 24.88952, 24.78254, 24.59093, 24.55401, 24.84782, 24.49852, 24.21652, 24.49059, 24.52232, 24.53817, 24.09043, 24.35261, 24.24327, 24.03927,
   24.04196, 24.30733, 24.18171, 23.97178, 23.8607, 23.89326, 23.9312, 23.92308, 23.58481, 23.71632, 23.69992, 23.49672, 23.58756, 24.015, 23.8036, 23.25277,
   23.63147, 23.71632, 23.40277, 23.69446, 23.44703, 23.20255, 23.39169, 23.35288, 23.11021, 22.97522, 23.01186, 23.19138, 22.85362, 22.93005, 22.65999, 22.78547,
   22.69143, 22.79968, 22.52806, 23.04, 22.78547, 22.34611, 22.42716, 22.4964, 22.68571, 22.45892, 22.37799, 22.33741, 22.23273, 22.02188, 22.19189, 22.37509,
   22.33451, 21.98065, 22.10705, 21.77628, 21.88314, 22.02482, 21.80899, 21.84165, 21.7465, 22.02188, 21.86833, 21.74054, 21.86833, 21.64495, 21.91569, 21.594,
   21.39503, 21.48268, 21.68085, 21.48871, 21.27353, 21.43739, 21.57899, 20.93269, 21.16053, 20.91721, 21.34044, 20.99143, 20.9729, 20.91721, 21.28876, 21.19725,
   21.26439, 21.04076, 20.64593, 20.87069, 20.71799, 20.57991, 20.75237, 20.53894, 20.31689, 20.18891, 20.16321, 20.15679, 20.51052, 20.52316, 20.26899, 20.22098,
   20.15679, 20.35831, 20.15357, 20.13105, 19.94998, 19.80654, 20.13427, 19.92398, 20.01483, 20.02131, 19.9954, 19.9012, 19.64558, 19.55632, 19.5132, 19.7738,
   19.553, 19.97595, 19.60596, 19.67195, 19.79673, 19.52316, 19.50987, 19.39328, 19.29613, 19.17824, 19.10037, 19.17824, 19.18837, 19.02218, 19.28942, 18.97101,
   19.28606, 19.28942, 19.10376, 19.03239, 18.65759, 18.70268, 19.08679, 19.02558, 18.66453, 18.83044, 18.49363, 18.58102, 18.89571, 18.68882, 18.441, 18.37059,
   18.43748, 18.1898, 18.38821, 18.51814, 18.31406, 18.56707, 18.34234, 18.24316, 18.25736, 18.25736, 18.31406, 17.8953, 18.2751, 17.8409, 18.15414, 17.97839,
   17.85542, 17.71332, 17.56269, 17.72794, 17.61427, 17.52205, 17.93508, 17.4702, 17.78997, 17.7316, 17.69502, 17.6253, 17.21237, 17.04211, 16.79314, 17.62162,
   17.61059, 17.72794, 17.10663, 17.11042, 17.04972, 17.49244, 17.46278, 17.21613, 17.22742, 17.08389, 17.09526, 17.10663, 16.80471, 17.20484, 16.80471, 17.15958,
   16.93914, 16.66921, 16.72741, 16.80857, 16.92383, 16.71579, 16.39878, 16.59127, 16.59908, 16.04324, 16.77384, 16.15995, 16.56782, 16.39878, 16.43036, 16.41853,
   16.14792, 16.46582, 16.21599, 16.22798, 16.69251, 15.75797, 15.75797, 16.36714, 16.0028, 16.26387, 16.03516, 16.12784, 16.01494, 15.84818, 16.07955, 15.87678,
   15.79083, 15.65897, 15.81953, 15.63412, 15.65897, 15.71679, 15.61753, 15.47581, 15.68791, 15.34968, 15.44228, 15.30318, 15.45906, 15.30741, 15.10285, 15.02111,
   15.48837, 15.25228, 15.18415, 15.38763, 15.39184, 15.15425, 15.08138, 15.15425, 14.82134, 15.14569, 14.86063, 14.90417, 14.57, 15.2947, 15.03404, 14.87371,
   15.12429, 15.15852, 14.94759, 14.74682, 14.80821, 14.80384, 14.60553, 14.74243, 15.02111, 14.58778, 14.72043, 14.76439, 14.44044, 14.74682, 14.15491, 14.31877,
   14.47182, 14.48077, 14.2689, 14.41799, 14.3459, 14.391, 14.09528, 13.96132, 14.19149, 13.98914, 14.02615, 14.33234, 14.08608, 14.10906, 14.05384, 14.14117,
   14.15034, 13.87285, 13.59447, 13.88219, 13.67526, 13.78852, 13.81199, 13.82606, 13.75087, 13.69893, 13.97987, 13.75087, 13.71784, 13.96132, 13.83543, 13.8073,
   13.68, 13.51319, 13.40245, 13.66578, 13.5515, 13.24193, 13.12396, 13.35886, 13.44107, 13.46034, 13.0099, 13.30053, 13.28102, 13.31513, 12.84953, 13.07945,
   12.93498, 13.10914, 12.92997, 13.29078, 12.74827, 12.76351, 12.97499, 12.85961, 12.95, 12.91492, 12.91994, 12.99495, 12.75843, 12.86969, 12.93998, 12.6718,
   12.89484, 13.05465, 12.53296, 12.83439, 12.97, 12.66156, 12.86465, 12.55363, 12.77873, 12.38212, 12.24529, 12.55363, 12.32441, 12.5019, 12.58456, 12.27172,
   12.35068, 12.22411, 12.47596, 12.30863, 12.09621, 12.27172, 12.12831, 12.34543, 12.2981, 12.10692, 11.92899, 12.05328, 12.40303, 11.62081, 12.05328, 11.7704,
   11.8527, 11.7318, 11.97778, 11.88545, 11.86363, 11.52, 12.0479, 11.9994, 11.72628, 11.67089, 11.87454, 11.5537, 11.68753, 11.56491, 11.40126, 11.53686,
   11.83081, 11.65422, 11.62638, 11.53124, 11.37281, 11.35, 11.47491, 11.44664, 11.13675, 11.3842, 11.27553, 11.54809, 11.28702, 11.20057, 11.18899, 11.28128,
   11.58171, 11.20636, 11.00211, 11.02564, 11.27553, 11.21791, 10.9134, 10.91934, 10.7338, 11.25828, 10.56341, 10.87772, 11.12511, 10.91934, 11.03739, 11.3557,
   10.64286, 10.99032, 11.09595, 10.81199, 10.94305, 10.89558, 10.81799, 10.7338, 10.44, 10.48954, 10.62458, 10.69751, 10.90152, 10.91934, 10.359, 10.44,
   10.78799, 10.62458, 10.3715, 10.75189, 10.3214, 10.69751, 10.36525, 10.22045, 10.06713, 10.44, 10.25842, 10.1249, 10.09927, 10.25842, 10.52654, 10.39023,
   10.0349, 10.4648, 10.1313, 10.33394, 10.26474, 10.16323, 9.950598, 10.13769, 10.23945, 10.26474, 9.924515, 10.21411, 10.05425, 9.976613, 10.06713, 9.394552,
   10.20141, 9.931042, 9.538302, 10.01551, 9.773188, 10.15047, 9.937565, 9.753276, 9.74663, 9.57221, 9.504273, 10.13769, 9.558661, 9.706658, 9.766555, 9.898364,
   9.632943, 9.241558, 9.476962, 9.773188, 9.839268, 9.679917, 9.726664, 9.612742, 9.276551, 9.558661, 9.766555, 9.234544, 9.408337, 9.26257, 9.679917, 9.394552,
   9.269563, 9, 9.366921, 9.626214, 9.227524, 9.290511, 8.992797, 9.171172, 9.353074, 9.100242, 9.311412, 8.854829, 9.064568, 9.093118, 9.276551, 9.234544,
   8.985588, 9.114472, 9.014388, 8.803454, 8.854829, 9.021574, 9.15703, 9.05026, 8.617471, 8.677419, 9.192345, 8.891344, 8.963928, 8.825508, 8.526758, 8.840181,
   8.942214, 8.810812, 8.326824, 8.396571, 8.632497, 8.751777, 8.72211, 8.526758, 8.781344, 8.714677, 8.534354, 8.751777, 8.669948, 8.564672, 8.707238, 8.519155,
   8.602418, 8.481038, 8.920448, 8.699793, 8.295637, 8.541944, 8.326824, 8.773961, 8.334603, 8.534354, 8.373386, 8.442748, 8.161765, 8.073958, 7.96894, 8.465743,
   8.089994, 8.427384, 8.287822, 8.357894, 7.96894, 8.27217, 8.617471 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_Z_mass_fx1241,Graph_from_VH_tagFirst_2b1c_Z_mass_fy1241,Graph_from_VH_tagFirst_2b1c_Z_mass_fex1241,Graph_from_VH_tagFirst_2b1c_Z_mass_fey1241);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1241 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1241","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1241->SetMinimum(-1512.469);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1241->SetMaximum(15690.87);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1241->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1241->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1241->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1241->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1241->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1241->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1241->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1241->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1241->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1241->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1241->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1241);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_Z_mass","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_tagFirst_2b1c_Z_mass","Data-driven Bckg","F");

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
   entry=leg->AddEntry("Graph_from_VH_tagFirst_2b1c_Z_mass","MC unc. (stat.)","fl");

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
   Z_mass_tagFirst_VR_18->cd();
  
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
   
   TH1D *data_mc_ratio__242 = new TH1D("data_mc_ratio__242","",1000,0,2000);
   data_mc_ratio__242->SetBinContent(26,1.229765);
   data_mc_ratio__242->SetBinContent(27,1.231852);
   data_mc_ratio__242->SetBinContent(28,1.223947);
   data_mc_ratio__242->SetBinContent(29,1.231064);
   data_mc_ratio__242->SetBinContent(30,1.220164);
   data_mc_ratio__242->SetBinContent(61,1.239626);
   data_mc_ratio__242->SetBinContent(62,1.237376);
   data_mc_ratio__242->SetBinContent(63,1.248012);
   data_mc_ratio__242->SetBinContent(64,1.25033);
   data_mc_ratio__242->SetBinContent(65,1.257129);
   data_mc_ratio__242->SetBinContent(1000,1.346227);
   data_mc_ratio__242->SetBinContent(1001,1.360952);
   data_mc_ratio__242->SetBinError(26,0.01111829);
   data_mc_ratio__242->SetBinError(27,0.01056071);
   data_mc_ratio__242->SetBinError(28,0.01005569);
   data_mc_ratio__242->SetBinError(29,0.009683517);
   data_mc_ratio__242->SetBinError(30,0.009274322);
   data_mc_ratio__242->SetBinError(61,0.009959168);
   data_mc_ratio__242->SetBinError(62,0.009995429);
   data_mc_ratio__242->SetBinError(63,0.01008398);
   data_mc_ratio__242->SetBinError(64,0.01014886);
   data_mc_ratio__242->SetBinError(65,0.01022597);
   data_mc_ratio__242->SetBinError(1000,0.1129728);
   data_mc_ratio__242->SetBinError(1001,0.006471792);
   data_mc_ratio__242->SetMinimum(0.4);
   data_mc_ratio__242->SetMaximum(1.6);
   data_mc_ratio__242->SetEntries(7141.824);
   data_mc_ratio__242->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__242->SetLineColor(ci);
   data_mc_ratio__242->SetLineWidth(2);
   data_mc_ratio__242->SetMarkerStyle(20);
   data_mc_ratio__242->SetMarkerSize(1.2);
   data_mc_ratio__242->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__242->GetXaxis()->SetRange(1,150);
   data_mc_ratio__242->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__242->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__242->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__242->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__242->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__242->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__242->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__242->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__242->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__242->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__242->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__242->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__242->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__242->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__242->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__242->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1242[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1242[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1242[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1242[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0.006015589, 0.005709068, 0.005453581, 0.005236535, 0.005037608, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.005366967, 0.005391404, 0.005415939, 0.005445731, 0.005472248,
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
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.08169767 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1242,Graph_from_mc_statistical_error_fy1242,Graph_from_mc_statistical_error_fex1242,Graph_from_mc_statistical_error_fey1242);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1242 = new TH1F("Graph_Graph_from_mc_statistical_error1242","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1242->SetMinimum(0.9019628);
   Graph_Graph_from_mc_statistical_error1242->SetMaximum(1.098037);
   Graph_Graph_from_mc_statistical_error1242->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1242->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1242->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1242->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1242->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1242->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1242->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1242->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1242->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1242->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1242->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1242);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagFirst_VR_18->cd();
   Z_mass_tagFirst_VR_18->Modified();
   Z_mass_tagFirst_VR_18->cd();
   Z_mass_tagFirst_VR_18->SetSelected(Z_mass_tagFirst_VR_18);
}
