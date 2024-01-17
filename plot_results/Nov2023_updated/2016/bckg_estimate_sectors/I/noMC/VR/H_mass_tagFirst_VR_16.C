#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagFirst_VR_16()
{
//=========Macro generated from canvas: H_mass_tagFirst_VR_16/H_mass_tagFirst_VR_16
//=========  (Mon Jan  8 11:15:25 2024) by ROOT version 6.28/10
   TCanvas *H_mass_tagFirst_VR_16 = new TCanvas("H_mass_tagFirst_VR_16", "H_mass_tagFirst_VR_16",0,0,600,600);
   H_mass_tagFirst_VR_16->SetHighLightColor(2);
   H_mass_tagFirst_VR_16->Range(0,0,1,1);
   H_mass_tagFirst_VR_16->SetFillColor(0);
   H_mass_tagFirst_VR_16->SetFillStyle(4000);
   H_mass_tagFirst_VR_16->SetBorderMode(0);
   H_mass_tagFirst_VR_16->SetBorderSize(2);
   H_mass_tagFirst_VR_16->SetFrameFillStyle(1000);
   H_mass_tagFirst_VR_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-44.37264,315.7258,44338.26);
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
   st->SetMaximum(39900);
   
   TH1F *st_stack_7 = new TH1F("st_stack_7","",1000,0,2000);
   st_stack_7->SetMinimum(0.01);
   st_stack_7->SetMaximum(39900);
   st_stack_7->SetDirectory(nullptr);
   st_stack_7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_7->SetLineColor(ci);
   st_stack_7->SetLineWidth(0);
   st_stack_7->GetXaxis()->SetRange(1,150);
   st_stack_7->GetXaxis()->SetLabelFont(42);
   st_stack_7->GetXaxis()->SetTitleOffset(1);
   st_stack_7->GetXaxis()->SetTitleFont(42);
   st_stack_7->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_7->GetYaxis()->SetLabelFont(42);
   st_stack_7->GetYaxis()->SetLabelSize(0.05);
   st_stack_7->GetYaxis()->SetTitleSize(0.057);
   st_stack_7->GetYaxis()->SetTitleOffset(1.2);
   st_stack_7->GetYaxis()->SetTitleFont(42);
   st_stack_7->GetZaxis()->SetLabelFont(42);
   st_stack_7->GetZaxis()->SetTitleOffset(1);
   st_stack_7->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_7);
   
   
   TH1D *VH_tagFirst_2b1c_H_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(43,8507.415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(44,17279.55);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(45,17037.42);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(46,16803.42);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(47,16697.53);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(48,8317.111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(78,7048.663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(79,13961.45);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(80,13841.12);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(81,13860);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(82,13564.92);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(83,6859.469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1000,30.73007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1001,19677.61);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(10,0.5236009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(11,0.9795676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(12,4.253754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(13,9.900074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(14,17.61277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(15,25.24169);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(16,33.33204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(17,41.60074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(18,49.84945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(19,57.14691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(20,63.45624);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(21,69.32029);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(22,73.85743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(23,77.47525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(24,80.46692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(25,82.5224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(26,83.74587);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(27,84.25177);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(28,84.8912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(29,85.17733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(30,84.79506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(31,84.64378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(32,84.21189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(33,83.8334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(34,83.74669);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(35,82.90109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(36,82.73889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(37,82.32282);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(38,81.74717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(39,81.32181);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(40,81.00683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(41,80.79588);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(42,80.27675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(43,79.90534);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(44,79.98508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(45,79.42268);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(46,78.8754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(47,78.62649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(48,78.42748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(49,78.36978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(50,78.34354);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(51,78.24112);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(52,77.87673);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(53,77.9849);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(54,78.13505);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(55,77.69345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(56,77.52389);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(57,77.21205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(58,77.10724);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(59,76.84992);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(60,76.97379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(61,76.56399);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(62,76.37756);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(63,76.44305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(64,76.01957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(65,75.56924);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(66,75.503);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(67,75.11347);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(68,74.79342);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(69,74.82365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(70,74.47015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(71,74.30154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(72,74.01317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(73,73.66229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(74,73.41998);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(75,73.20963);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(76,72.65894);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(77,72.56266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(78,72.36498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(79,71.89653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(80,71.58603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(81,71.63484);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(82,70.86818);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(83,70.91169);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(84,70.61336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(85,70.45789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(86,69.74317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(87,69.79131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(88,69.92278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(89,69.51776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(90,69.346);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(91,68.60871);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(92,68.84805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(93,68.88189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(94,68.42865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(95,68.07114);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(96,67.93608);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(97,67.41654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(98,67.6074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(99,67.58408);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(100,67.19455);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(101,67.23533);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(102,67.08736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(103,66.37661);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(104,66.51175);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(105,66.09412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(106,66.40552);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(107,66.07234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(108,66.03913);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(109,65.50664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(110,65.32643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(111,65.24559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(112,65.50141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(113,65.22458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(114,65.03832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(115,65.11204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(116,64.70869);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(117,64.95712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(118,64.53262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(119,64.57509);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(120,64.31985);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(121,64.18438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(122,64.19932);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(123,64.10958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(124,64.08071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(125,63.62344);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(126,63.39897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(127,63.57818);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(128,63.34489);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(129,63.43896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(130,63.30918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(131,62.47878);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(132,62.7426);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(133,62.77318);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(134,62.48865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(135,62.59495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(136,62.41292);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(137,62.1907);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(138,61.91567);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(139,62.03953);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(140,61.79378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(141,61.60605);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(142,61.10447);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(143,61.22214);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(144,61.07979);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(145,61.15269);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(146,60.96635);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(147,60.65075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(148,60.39368);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(149,60.27554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(150,60.2744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(151,60.46287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(152,59.87623);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(153,59.82241);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(154,59.80178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(155,59.81324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(156,59.315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(157,59.62962);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(158,58.88707);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(159,59.17154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(160,58.48648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(161,58.40204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(162,58.34451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(163,58.23398);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(164,58.30103);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(165,58.03237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(166,57.59491);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(167,57.80635);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(168,57.49248);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(169,57.39344);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(170,56.95589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(171,57.22841);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(172,56.63247);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(173,56.4822);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(174,56.80648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(175,56.38625);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(176,56.2085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(177,55.81939);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(178,55.88811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(179,55.68909);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(180,55.59177);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(181,55.30996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(182,55.28889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(183,55.41271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(184,54.56766);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(185,54.68309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(186,54.76575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(187,54.47841);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(188,54.12372);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(189,54.06671);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(190,53.43809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(191,53.40729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(192,53.63524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(193,53.49961);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(194,53.11905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(195,53.03253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(196,52.90183);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(197,52.99116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(198,52.83702);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(199,52.12788);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(200,51.86557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(201,52.02523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(202,51.58731);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(203,51.53015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(204,52.12394);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(205,51.04639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(206,50.96711);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(207,51.03296);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(208,51.03431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(209,50.81357);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(210,50.56342);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(211,50.46302);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(212,50.0265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(213,50.25614);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(214,49.75311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(215,49.69246);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(216,49.60549);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(217,49.45327);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(218,49.56955);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(219,48.46492);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(220,48.73287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(221,48.97978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(222,48.5271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(223,47.94452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(224,48.23385);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(225,47.30699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(226,47.88731);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(227,47.87156);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(228,47.59875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(229,47.09062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(230,47.12699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(231,47.05859);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(232,46.94339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(233,46.96236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(234,46.36752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(235,46.9536);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(236,46.41479);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(237,46.19573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(238,45.76643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(239,46.0977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(240,45.37539);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(241,45.63295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(242,45.23015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(243,45.0175);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(244,45.38898);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(245,45.15887);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(246,44.75027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(247,44.85735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(248,44.51532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(249,44.59992);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(250,44.4213);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(251,44.23731);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(252,44.06655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(253,43.89512);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(254,43.58329);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(255,43.42101);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(256,43.68696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(257,43.13595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(258,43.08348);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(259,43.08666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(260,42.78816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(261,42.47949);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(262,42.83459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(263,42.62928);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(264,41.7783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(265,42.01225);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(266,41.87171);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(267,41.89462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(268,41.50838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(269,41.36944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(270,41.26826);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(271,41.31473);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(272,40.91465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(273,40.94311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(274,40.81569);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(275,40.50384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(276,40.50553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(277,40.08369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(278,40.0683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(279,39.94495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(280,40.31387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(281,40.13667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(282,40.02723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(283,39.41814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(284,39.5206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(285,39.60895);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(286,39.10216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(287,39.34853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(288,38.8454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(289,39.05129);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(290,38.49802);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(291,38.33388);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(292,38.57095);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(293,38.239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(294,38.12232);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(295,38.00528);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(296,38.01069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(297,37.75014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(298,37.59732);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(299,37.7701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(300,37.26406);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(301,37.09815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(302,37.10185);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(303,37.21068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(304,36.85347);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(305,37.03158);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(306,36.98157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(307,36.54719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(308,36.24968);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(309,36.37048);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(310,36.42321);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(311,36.0962);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(312,36.0829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(313,35.77386);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(314,35.66449);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(315,35.44666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(316,35.59909);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(317,35.55671);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(318,35.1905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(319,35.44279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(320,34.85389);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(321,35.33045);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(322,35.07931);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(323,34.84012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(324,34.37072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(325,34.68634);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(326,34.35676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(327,34.38468);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(328,33.87864);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(329,34.47227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(330,34.45238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(331,33.78951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(332,33.87055);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(333,33.85638);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(334,33.64925);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(335,33.6981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(336,33.26618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(337,33.18986);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(338,33.05743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(339,33.1175);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(340,33.1692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(341,32.89948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(342,32.82857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(343,32.80977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(344,32.73029);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(345,32.36387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(346,32.41043);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(347,32.27481);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(348,32.04036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(349,31.9053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(350,31.8171);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(351,31.78478);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(352,31.55972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(353,31.47708);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(354,31.5206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(355,31.08267);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(356,31.15535);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(357,31.22128);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(358,30.84138);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(359,31.34616);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(360,30.83694);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(361,30.91907);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(362,30.49273);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(363,30.55112);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(364,30.25127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(365,30.18776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(366,30.34402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(367,30.17414);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(368,29.79699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(369,30.09225);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(370,30.1923);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(371,29.77167);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(372,29.46622);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(373,29.63091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(374,29.27955);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(375,29.25613);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(376,29.30528);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(377,29.08696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(378,29.33801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(379,28.83611);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(380,28.89072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(381,28.79567);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(382,28.62857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(383,28.55426);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(384,28.70747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(385,28.48456);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(386,28.07253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(387,27.86423);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(388,27.96);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(389,27.90356);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(390,27.87652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(391,27.79527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(392,28.42193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(393,28.01632);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(394,27.40539);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(395,27.4204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(396,27.52767);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(397,27.17686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(398,27.26247);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(399,27.29764);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(400,26.99974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(401,27.19702);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(402,26.62911);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(403,26.75237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(404,26.59821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(405,26.42759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(406,26.9082);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(407,26.56985);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(408,26.49493);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(409,26.34446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(410,26.17481);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(411,26.34446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(412,26.23497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(413,26.14599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(414,26.08037);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(415,25.85603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(416,25.72581);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(417,25.72847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(418,25.59225);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(419,25.28781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(420,25.16555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(421,25.16827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(422,25.07004);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(423,24.97417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(424,25.18733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(425,24.70376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(426,25.28239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(427,24.47799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(428,24.69266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(429,24.73703);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(430,24.78685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(431,24.55906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(432,24.28684);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(433,24.55069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(434,24.00298);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(435,24.23034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(436,24.21902);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(437,23.85978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(438,24.34885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(439,24.30377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(440,23.61725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(441,23.76768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(442,23.65784);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(443,23.88849);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(444,23.53585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(445,23.41907);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(446,23.48337);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(447,23.37513);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(448,23.45417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(449,22.95797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(450,22.73899);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(451,22.44166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(452,22.88621);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(453,23.15418);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(454,22.65746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(455,23.03547);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(456,22.81122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(457,22.59385);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(458,22.52701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(459,22.37437);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(460,22.59082);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(461,22.37131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(462,22.74502);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(463,22.35905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(464,21.97565);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(465,21.92569);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(466,21.98812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(467,21.84426);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(468,21.81287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(469,21.89441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(470,21.85054);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(471,21.32991);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(472,21.49954);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(473,21.42609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(474,21.53458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(475,21.56003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(476,21.13623);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(477,20.99307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(478,21.05501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(479,21.15244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(480,21.23975);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(481,21.01265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(482,20.78636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(483,20.63745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(484,20.73684);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(485,20.52422);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(486,20.99307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(487,20.72362);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(488,20.48411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(489,20.29587);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(490,20.45062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(491,20.35993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(492,20.50417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(493,20.17393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(494,20.14673);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(495,20.23499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(496,20.07858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(497,19.70646);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(498,19.50721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(499,19.82436);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(500,19.87271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(501,19.6821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(502,19.95874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(503,19.71342);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(504,19.20267);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(505,19.65771);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(506,19.50018);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(507,19.45796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(508,19.16336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(509,18.82416);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(510,19.26325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(511,18.61915);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(512,19.11681);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(513,19.12757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(514,18.80959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(515,18.47132);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(516,19.24545);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(517,18.74023);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(518,18.80595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(519,18.69996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(520,18.78042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(521,18.53799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(522,18.50468);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(523,18.50839);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(524,18.47132);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(525,18.26234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(526,18.12295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(527,18.13429);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(528,18.49357);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(529,17.91756);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(530,18.06613);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(531,17.74845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(532,18.33725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(533,17.47996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(534,17.82167);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(535,17.78317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(536,18.24357);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(537,17.40136);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(538,17.61666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(539,17.8716);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(540,17.31053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(541,17.61666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(542,17.15143);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(543,17.34613);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(544,17.47604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(545,17.26693);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(546,17.29073);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(547,16.92211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(548,17.19931);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(549,17.47996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(550,17.26693);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(551,16.8124);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(552,16.90591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(553,16.70607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(554,16.63618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(555,16.40802);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(556,16.73476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(557,16.48304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(558,16.61144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(559,16.792);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(560,16.12572);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(561,16.45807);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(562,16.32006);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(563,16.19781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(564,16.26116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(565,16.13422);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(566,16.2738);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(567,15.93761);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(568,16.19781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(569,16.52042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(570,16.11722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(571,16.03194);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(572,15.89454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(573,16.07463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(574,16.16393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(575,15.82107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(576,15.98484);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(577,15.62052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(578,15.77334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(579,15.80807);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(580,15.58098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(581,15.30134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(582,15.27444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(583,15.48832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(584,15.28789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(585,15.62052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(586,15.02561);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(587,15.58098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(588,15.02561);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(589,15.29237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(590,15.31477);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(591,15.1528);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(592,14.83279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(593,15.15732);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(594,15.22049);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(595,14.8143);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(596,14.74009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(597,14.79578);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(598,14.74009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(599,14.61869);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(600,14.8143);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(601,14.43943);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(602,14.74474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(603,14.74938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(604,14.5199);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(605,14.60462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(606,14.2194);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(607,14.24349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(608,14.46788);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(609,14.35373);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(610,14.40141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(611,14.40141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(612,14.20976);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(613,14.01061);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(614,13.98122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(615,13.91242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(616,13.98122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(617,13.83337);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(618,14.07893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(619,14.06919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(620,13.95178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(621,13.82842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(622,13.92227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(623,13.75387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(624,13.83833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(625,13.69394);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(626,14.02527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(627,13.59851);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(628,13.20471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(629,13.5227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(630,13.47192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(631,13.43115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(632,12.94258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(633,13.30812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(634,13.55813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(635,13.35952);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(636,13.50748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(637,12.90015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(638,13.03756);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(639,12.9796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(640,13.13706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(641,13.13706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(642,13.16833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(643,12.85757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(644,13.04807);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(645,13.16833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(646,12.68585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(647,12.66963);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(648,12.6317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(649,13.14228);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(650,12.84157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(651,12.70744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(652,12.94788);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(653,12.52818);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(654,12.44585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(655,12.41829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(656,12.73438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(657,12.48983);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(658,12.11658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(659,12.41277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(660,12.5008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(661,13.00598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(662,12.7988);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(663,12.45136);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(664,12.41277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(665,11.88816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(666,12.15611);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(667,11.96861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(668,12.45686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(669,11.89393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(670,12.07692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(671,11.83616);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(672,11.87663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(673,12.08827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(674,11.90545);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(675,11.6905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(676,11.79556);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(677,11.95141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(678,11.87085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(679,11.20555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(680,11.82457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(681,11.52517);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(682,11.68463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(683,11.5904);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(684,11.6729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(685,11.51922);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(686,11.27871);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(687,11.41762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(688,11.48943);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(689,11.71393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(690,11.78974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(691,11.63172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(692,11.71393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(693,11.18106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(694,11.24828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(695,11.08873);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(696,11.48943);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(697,11.32722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(698,11.13191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(699,11.33932);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(700,11.41162);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(701,11.0949);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(702,11.08254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(703,11.04537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(704,11.32722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(705,11.06397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(706,10.87654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(707,10.87654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(708,10.87024);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(709,10.76251);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(710,10.93311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(711,10.83234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(712,10.98315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(713,10.47856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(714,10.88284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(715,10.92056);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(716,10.60857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(717,10.55676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(718,10.76888);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(719,10.49164);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(720,10.46547);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(721,10.38658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(722,10.62794);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(723,10.63439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(724,10.43924);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(725,10.60211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(726,10.6537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(727,10.45892);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(728,10.15975);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(729,10.4261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(730,10.15975);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(731,10.16649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(732,10.17997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(733,10.26044);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(734,9.920821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(735,10.45892);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(736,9.774663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(737,9.886218);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(738,10.05805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(739,10.04441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(740,10.30044);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(741,9.989669);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(742,10.17997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(743,10.21357);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(744,10.26712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(745,9.927728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(746,9.927728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(747,9.920821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(748,9.781672);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(749,9.697225);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(750,10.07847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(751,9.830599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(752,9.920821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(753,9.417542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(754,9.71135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(755,9.569156);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(756,9.71135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(757,9.263446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(758,9.263446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(759,9.446608);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(760,9.569156);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(761,9.241223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(762,9.482816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(763,8.854895);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(764,9.597763);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(765,9.263446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(766,9.315094);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(767,9.359138);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(768,9.211508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(769,9.151789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(770,9.446608);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(771,9.189159);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(772,9.000759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(773,9.129294);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(774,8.993141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(775,9.015976);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(776,9.189159);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(777,9.218946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(778,8.901216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(779,9.114266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(780,8.714456);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(781,8.962604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(782,9.099214);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(783,9.000759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(784,8.931963);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(785,9.129294);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(786,8.908912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(787,9.263446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(788,8.738019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(789,8.893512);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(790,8.901216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(791,8.698712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(792,8.808331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(793,8.603641);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(794,8.722318);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(795,8.539673);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(796,8.847151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(797,8.682939);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(798,8.753693);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(799,8.682939);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(800,8.49138);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(801,8.738019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(802,8.547695);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(803,8.262283);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(804,8.643381);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(805,8.426559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(806,8.714456);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(807,8.459032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(808,8.253984);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(809,8.611604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(810,8.547695);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(811,8.229034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(812,8.459032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(813,8.442811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(814,7.914865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(815,8.21236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(816,8.237359);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(817,8.270575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(818,8.162131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(819,8.04371);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(820,8.204009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(821,8.270575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(822,8.237359);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(823,8.187284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(824,8.060734);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(825,8.009554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(826,7.914865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(827,8.094674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(828,7.668564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(829,7.730875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(830,8.000992);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(831,7.533305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(832,7.792688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(833,8.120036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(834,7.686419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(835,7.533305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(836,7.596726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(837,7.854014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(838,7.605743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(839,7.766257);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(840,7.659621);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(841,7.3863);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(842,7.596726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(843,7.940801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(844,7.792688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(845,7.460165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(846,7.404835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(847,7.713123);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(848,7.677497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(849,7.686419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(850,7.236309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(851,7.560551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(852,7.404835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(853,7.748586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(854,7.57866);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(855,7.188795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(856,7.460165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(857,7.505961);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(858,7.623745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(859,7.073459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(860,7.092812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(861,6.946351);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(862,6.975889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(863,7.112112);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(864,7.404835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(865,7.083142);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(866,7.650668);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(867,7.339757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(868,7.169701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(869,7.330413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(870,7.121743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(871,7.112112);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(872,7.292917);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(873,7.264668);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(874,7.207838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(875,7.092812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(876,7.034594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(877,7.083142);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(878,6.946351);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(879,7.160135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(880,7.283513);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(881,7.063763);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(882,7.207838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(883,7.063763);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(884,6.846971);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(885,7.005303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(886,7.005303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(887,6.975889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(888,6.836953);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(889,6.715577);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(890,7.169701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(891,6.906771);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(892,7.092812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(893,6.756278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(894,6.786644);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(895,6.591967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(896,6.796735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(897,6.380631);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(898,6.725776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(899,6.956211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(900,6.956211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(901,6.956211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(902,6.560701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(903,6.715577);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(904,6.465994);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(905,6.602356);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(906,6.139765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(907,6.36988);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(908,6.48716);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(909,6.434116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(910,6.654059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(911,6.581562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(912,6.571139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(913,6.348324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(914,6.476586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(915,6.48716);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(916,6.348324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(917,6.602356);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(918,6.348324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(919,6.455386);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(920,6.315851);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(921,6.654059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(922,6.261356);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(923,6.402079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(924,6.29411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(925,6.348324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(926,5.969969);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(927,6.061119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(928,5.865733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(929,6.004312);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(930,6.027099);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(931,6.359111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(932,6.228431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(933,6.239425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(934,6.380631);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(935,5.900683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(936,6.0498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(937,6.239425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(938,6.391364);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(939,6.004312);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(940,6.015717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(941,6.128592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(942,5.889056);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(943,6.128592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(944,6.03846);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(945,6.0498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(946,6.015717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(947,6.283211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(948,6.30499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(949,5.981439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(950,5.807015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(951,5.923868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(952,5.912287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(953,5.830573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(954,5.771498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(955,5.935427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(956,5.553626);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(957,5.818806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(958,5.735761);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(959,5.747698);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(960,5.66361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(961,5.675699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(962,5.50404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(963,5.687762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(964,5.614994);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(965,5.969969);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(966,5.66361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(967,5.723799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(968,5.711812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(969,5.723799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(970,5.889056);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(971,5.66361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(972,5.651495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(973,5.66361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(974,5.830573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(975,5.75961);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(976,5.339703);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(977,5.390801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(978,5.830573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(979,5.326851);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(980,5.639355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(981,5.675699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(982,5.44142);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(983,5.528889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(984,5.6998);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(985,5.541271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(986,5.66361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(987,5.403501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(988,5.466554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(989,5.103431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(990,5.249083);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(991,5.541271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(992,5.541271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(993,5.627188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(994,5.170145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(995,5.675699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(996,5.651495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(997,4.855675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(998,5.66361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(999,5.06298);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1000,5.236009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1001,85.35498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetEntries(9237222);

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
   
   TH1D *VH_tagFirst_H_mass__13 = new TH1D("VH_tagFirst_H_mass__13","",1000,0,2000);
   VH_tagFirst_H_mass__13->SetBinContent(43,8825);
   VH_tagFirst_H_mass__13->SetBinContent(44,17955);
   VH_tagFirst_H_mass__13->SetBinContent(45,17540);
   VH_tagFirst_H_mass__13->SetBinContent(46,17248);
   VH_tagFirst_H_mass__13->SetBinContent(47,17470);
   VH_tagFirst_H_mass__13->SetBinContent(48,8550);
   VH_tagFirst_H_mass__13->SetBinContent(78,7206);
   VH_tagFirst_H_mass__13->SetBinContent(79,14405);
   VH_tagFirst_H_mass__13->SetBinContent(80,14133);
   VH_tagFirst_H_mass__13->SetBinContent(81,14153);
   VH_tagFirst_H_mass__13->SetBinContent(82,14116);
   VH_tagFirst_H_mass__13->SetBinContent(83,7000);
   VH_tagFirst_H_mass__13->SetBinContent(1000,25);
   VH_tagFirst_H_mass__13->SetBinContent(1001,23051);
   VH_tagFirst_H_mass__13->SetEntries(3573384);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_mass__13->SetLineColor(ci);
   VH_tagFirst_H_mass__13->SetLineWidth(2);
   VH_tagFirst_H_mass__13->SetMarkerStyle(20);
   VH_tagFirst_H_mass__13->SetMarkerSize(1.2);
   VH_tagFirst_H_mass__13->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_H_mass__13->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__13->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__13->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__13->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__13->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__13->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__13->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__13->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__13->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fx1013[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fy1013[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 8507.415, 17279.55, 17037.42, 16803.42, 16697.53, 8317.111, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7048.663, 13961.45, 13841.12, 13860,
   13564.92, 6859.469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 30.73007 };
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fex1013[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fey1013[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.5236009, 0.9795676, 4.253754, 9.900074, 17.61277, 25.24169, 33.33204, 41.60074,
   49.84945, 57.14691, 63.45624, 69.32029, 73.85743, 77.47525, 80.46692, 82.5224, 83.74587, 84.25177, 84.8912, 85.17733, 84.79506, 84.64378, 84.21189, 83.8334,
   83.74669, 82.90109, 82.73889, 82.32282, 81.74717, 81.32181, 81.00683, 80.79588, 80.27675, 79.90534, 79.98508, 79.42268, 78.8754, 78.62649, 78.42748, 78.36978,
   78.34354, 78.24112, 77.87673, 77.9849, 78.13505, 77.69345, 77.52389, 77.21205, 77.10724, 76.84992, 76.97379, 76.56399, 76.37756, 76.44305, 76.01957, 75.56924,
   75.503, 75.11347, 74.79342, 74.82365, 74.47015, 74.30154, 74.01317, 73.66229, 73.41998, 73.20963, 72.65894, 72.56266, 72.36498, 71.89653, 71.58603, 71.63484,
   70.86818, 70.91169, 70.61336, 70.45789, 69.74317, 69.79131, 69.92278, 69.51776, 69.346, 68.60871, 68.84805, 68.88189, 68.42865, 68.07114, 67.93608, 67.41654,
   67.6074, 67.58408, 67.19455, 67.23533, 67.08736, 66.37661, 66.51175, 66.09412, 66.40552, 66.07234, 66.03913, 65.50664, 65.32643, 65.24559, 65.50141, 65.22458,
   65.03832, 65.11204, 64.70869, 64.95712, 64.53262, 64.57509, 64.31985, 64.18438, 64.19932, 64.10958, 64.08071, 63.62344, 63.39897, 63.57818, 63.34489, 63.43896,
   63.30918, 62.47878, 62.7426, 62.77318, 62.48865, 62.59495, 62.41292, 62.1907, 61.91567, 62.03953, 61.79378, 61.60605, 61.10447, 61.22214, 61.07979, 61.15269,
   60.96635, 60.65075, 60.39368, 60.27554, 60.2744, 60.46287, 59.87623, 59.82241, 59.80178, 59.81324, 59.315, 59.62962, 58.88707, 59.17154, 58.48648, 58.40204,
   58.34451, 58.23398, 58.30103, 58.03237, 57.59491, 57.80635, 57.49248, 57.39344, 56.95589, 57.22841, 56.63247, 56.4822, 56.80648, 56.38625, 56.2085, 55.81939,
   55.88811, 55.68909, 55.59177, 55.30996, 55.28889, 55.41271, 54.56766, 54.68309, 54.76575, 54.47841, 54.12372, 54.06671, 53.43809, 53.40729, 53.63524, 53.49961,
   53.11905, 53.03253, 52.90183, 52.99116, 52.83702, 52.12788, 51.86557, 52.02523, 51.58731, 51.53015, 52.12394, 51.04639, 50.96711, 51.03296, 51.03431, 50.81357,
   50.56342, 50.46302, 50.0265, 50.25614, 49.75311, 49.69246, 49.60549, 49.45327, 49.56955, 48.46492, 48.73287, 48.97978, 48.5271, 47.94452, 48.23385, 47.30699,
   47.88731, 47.87156, 47.59875, 47.09062, 47.12699, 47.05859, 46.94339, 46.96236, 46.36752, 46.9536, 46.41479, 46.19573, 45.76643, 46.0977, 45.37539, 45.63295,
   45.23015, 45.0175, 45.38898, 45.15887, 44.75027, 44.85735, 44.51532, 44.59992, 44.4213, 44.23731, 44.06655, 43.89512, 43.58329, 43.42101, 43.68696, 43.13595,
   43.08348, 43.08666, 42.78816, 42.47949, 42.83459, 42.62928, 41.7783, 42.01225, 41.87171, 41.89462, 41.50838, 41.36944, 41.26826, 41.31473, 40.91465, 40.94311,
   40.81569, 40.50384, 40.50553, 40.08369, 40.0683, 39.94495, 40.31387, 40.13667, 40.02723, 39.41814, 39.5206, 39.60895, 39.10216, 39.34853, 38.8454, 39.05129,
   38.49802, 38.33388, 38.57095, 38.239, 38.12232, 38.00528, 38.01069, 37.75014, 37.59732, 37.7701, 37.26406, 37.09815, 37.10185, 37.21068, 36.85347, 37.03158,
   36.98157, 36.54719, 36.24968, 36.37048, 36.42321, 36.0962, 36.0829, 35.77386, 35.66449, 35.44666, 35.59909, 35.55671, 35.1905, 35.44279, 34.85389, 35.33045,
   35.07931, 34.84012, 34.37072, 34.68634, 34.35676, 34.38468, 33.87864, 34.47227, 34.45238, 33.78951, 33.87055, 33.85638, 33.64925, 33.6981, 33.26618, 33.18986,
   33.05743, 33.1175, 33.1692, 32.89948, 32.82857, 32.80977, 32.73029, 32.36387, 32.41043, 32.27481, 32.04036, 31.9053, 31.8171, 31.78478, 31.55972, 31.47708,
   31.5206, 31.08267, 31.15535, 31.22128, 30.84138, 31.34616, 30.83694, 30.91907, 30.49273, 30.55112, 30.25127, 30.18776, 30.34402, 30.17414, 29.79699, 30.09225,
   30.1923, 29.77167, 29.46622, 29.63091, 29.27955, 29.25613, 29.30528, 29.08696, 29.33801, 28.83611, 28.89072, 28.79567, 28.62857, 28.55426, 28.70747, 28.48456,
   28.07253, 27.86423, 27.96, 27.90356, 27.87652, 27.79527, 28.42193, 28.01632, 27.40539, 27.4204, 27.52767, 27.17686, 27.26247, 27.29764, 26.99974, 27.19702,
   26.62911, 26.75237, 26.59821, 26.42759, 26.9082, 26.56985, 26.49493, 26.34446, 26.17481, 26.34446, 26.23497, 26.14599, 26.08037, 25.85603, 25.72581, 25.72847,
   25.59225, 25.28781, 25.16555, 25.16827, 25.07004, 24.97417, 25.18733, 24.70376, 25.28239, 24.47799, 24.69266, 24.73703, 24.78685, 24.55906, 24.28684, 24.55069,
   24.00298, 24.23034, 24.21902, 23.85978, 24.34885, 24.30377, 23.61725, 23.76768, 23.65784, 23.88849, 23.53585, 23.41907, 23.48337, 23.37513, 23.45417, 22.95797,
   22.73899, 22.44166, 22.88621, 23.15418, 22.65746, 23.03547, 22.81122, 22.59385, 22.52701, 22.37437, 22.59082, 22.37131, 22.74502, 22.35905, 21.97565, 21.92569,
   21.98812, 21.84426, 21.81287, 21.89441, 21.85054, 21.32991, 21.49954, 21.42609, 21.53458, 21.56003, 21.13623, 20.99307, 21.05501, 21.15244, 21.23975, 21.01265,
   20.78636, 20.63745, 20.73684, 20.52422, 20.99307, 20.72362, 20.48411, 20.29587, 20.45062, 20.35993, 20.50417, 20.17393, 20.14673, 20.23499, 20.07858, 19.70646,
   19.50721, 19.82436, 19.87271, 19.6821, 19.95874, 19.71342, 19.20267, 19.65771, 19.50018, 19.45796, 19.16336, 18.82416, 19.26325, 18.61915, 19.11681, 19.12757,
   18.80959, 18.47132, 19.24545, 18.74023, 18.80595, 18.69996, 18.78042, 18.53799, 18.50468, 18.50839, 18.47132, 18.26234, 18.12295, 18.13429, 18.49357, 17.91756,
   18.06613, 17.74845, 18.33725, 17.47996, 17.82167, 17.78317, 18.24357, 17.40136, 17.61666, 17.8716, 17.31053, 17.61666, 17.15143, 17.34613, 17.47604, 17.26693,
   17.29073, 16.92211, 17.19931, 17.47996, 17.26693, 16.8124, 16.90591, 16.70607, 16.63618, 16.40802, 16.73476, 16.48304, 16.61144, 16.792, 16.12572, 16.45807,
   16.32006, 16.19781, 16.26116, 16.13422, 16.2738, 15.93761, 16.19781, 16.52042, 16.11722, 16.03194, 15.89454, 16.07463, 16.16393, 15.82107, 15.98484, 15.62052,
   15.77334, 15.80807, 15.58098, 15.30134, 15.27444, 15.48832, 15.28789, 15.62052, 15.02561, 15.58098, 15.02561, 15.29237, 15.31477, 15.1528, 14.83279, 15.15732,
   15.22049, 14.8143, 14.74009, 14.79578, 14.74009, 14.61869, 14.8143, 14.43943, 14.74474, 14.74938, 14.5199, 14.60462, 14.2194, 14.24349, 14.46788, 14.35373,
   14.40141, 14.40141, 14.20976, 14.01061, 13.98122, 13.91242, 13.98122, 13.83337, 14.07893, 14.06919, 13.95178, 13.82842, 13.92227, 13.75387, 13.83833, 13.69394,
   14.02527, 13.59851, 13.20471, 13.5227, 13.47192, 13.43115, 12.94258, 13.30812, 13.55813, 13.35952, 13.50748, 12.90015, 13.03756, 12.9796, 13.13706, 13.13706,
   13.16833, 12.85757, 13.04807, 13.16833, 12.68585, 12.66963, 12.6317, 13.14228, 12.84157, 12.70744, 12.94788, 12.52818, 12.44585, 12.41829, 12.73438, 12.48983,
   12.11658, 12.41277, 12.5008, 13.00598, 12.7988, 12.45136, 12.41277, 11.88816, 12.15611, 11.96861, 12.45686, 11.89393, 12.07692, 11.83616, 11.87663, 12.08827,
   11.90545, 11.6905, 11.79556, 11.95141, 11.87085, 11.20555, 11.82457, 11.52517, 11.68463, 11.5904, 11.6729, 11.51922, 11.27871, 11.41762, 11.48943, 11.71393,
   11.78974, 11.63172, 11.71393, 11.18106, 11.24828, 11.08873, 11.48943, 11.32722, 11.13191, 11.33932, 11.41162, 11.0949, 11.08254, 11.04537, 11.32722, 11.06397,
   10.87654, 10.87654, 10.87024, 10.76251, 10.93311, 10.83234, 10.98315, 10.47856, 10.88284, 10.92056, 10.60857, 10.55676, 10.76888, 10.49164, 10.46547, 10.38658,
   10.62794, 10.63439, 10.43924, 10.60211, 10.6537, 10.45892, 10.15975, 10.4261, 10.15975, 10.16649, 10.17997, 10.26044, 9.920821, 10.45892, 9.774663, 9.886218,
   10.05805, 10.04441, 10.30044, 9.989669, 10.17997, 10.21357, 10.26712, 9.927728, 9.927728, 9.920821, 9.781672, 9.697225, 10.07847, 9.830599, 9.920821, 9.417542,
   9.71135, 9.569156, 9.71135, 9.263446, 9.263446, 9.446608, 9.569156, 9.241223, 9.482816, 8.854895, 9.597763, 9.263446, 9.315094, 9.359138, 9.211508, 9.151789,
   9.446608, 9.189159, 9.000759, 9.129294, 8.993141, 9.015976, 9.189159, 9.218946, 8.901216, 9.114266, 8.714456, 8.962604, 9.099214, 9.000759, 8.931963, 9.129294,
   8.908912, 9.263446, 8.738019, 8.893512, 8.901216, 8.698712, 8.808331, 8.603641, 8.722318, 8.539673, 8.847151, 8.682939, 8.753693, 8.682939, 8.49138, 8.738019,
   8.547695, 8.262283, 8.643381, 8.426559, 8.714456, 8.459032, 8.253984, 8.611604, 8.547695, 8.229034, 8.459032, 8.442811, 7.914865, 8.21236, 8.237359, 8.270575,
   8.162131, 8.04371, 8.204009, 8.270575, 8.237359, 8.187284, 8.060734, 8.009554, 7.914865, 8.094674, 7.668564, 7.730875, 8.000992, 7.533305, 7.792688, 8.120036,
   7.686419, 7.533305, 7.596726, 7.854014, 7.605743, 7.766257, 7.659621, 7.3863, 7.596726, 7.940801, 7.792688, 7.460165, 7.404835, 7.713123, 7.677497, 7.686419,
   7.236309, 7.560551, 7.404835, 7.748586, 7.57866, 7.188795, 7.460165, 7.505961, 7.623745, 7.073459, 7.092812, 6.946351, 6.975889, 7.112112, 7.404835, 7.083142,
   7.650668, 7.339757, 7.169701, 7.330413, 7.121743, 7.112112, 7.292917, 7.264668, 7.207838, 7.092812, 7.034594, 7.083142, 6.946351, 7.160135, 7.283513, 7.063763,
   7.207838, 7.063763, 6.846971, 7.005303, 7.005303, 6.975889, 6.836953, 6.715577, 7.169701, 6.906771, 7.092812, 6.756278, 6.786644, 6.591967, 6.796735, 6.380631,
   6.725776, 6.956211, 6.956211, 6.956211, 6.560701, 6.715577, 6.465994, 6.602356, 6.139765, 6.36988, 6.48716, 6.434116, 6.654059, 6.581562, 6.571139, 6.348324,
   6.476586, 6.48716, 6.348324, 6.602356, 6.348324, 6.455386, 6.315851, 6.654059, 6.261356, 6.402079, 6.29411, 6.348324, 5.969969, 6.061119, 5.865733, 6.004312,
   6.027099, 6.359111, 6.228431, 6.239425, 6.380631, 5.900683, 6.0498, 6.239425, 6.391364, 6.004312, 6.015717, 6.128592, 5.889056, 6.128592, 6.03846, 6.0498,
   6.015717, 6.283211, 6.30499, 5.981439, 5.807015, 5.923868, 5.912287, 5.830573, 5.771498, 5.935427, 5.553626, 5.818806, 5.735761, 5.747698, 5.66361, 5.675699,
   5.50404, 5.687762, 5.614994, 5.969969, 5.66361, 5.723799, 5.711812, 5.723799, 5.889056, 5.66361, 5.651495, 5.66361, 5.830573, 5.75961, 5.339703, 5.390801,
   5.830573, 5.326851, 5.639355, 5.675699, 5.44142, 5.528889, 5.6998, 5.541271, 5.66361, 5.403501, 5.466554, 5.103431, 5.249083, 5.541271, 5.541271, 5.627188,
   5.170145, 5.675699, 5.651495, 4.855675, 5.66361, 5.06298, 5.236009 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_H_mass_fx1013,Graph_from_VH_tagFirst_2b1c_H_mass_fy1013,Graph_from_VH_tagFirst_2b1c_H_mass_fex1013,Graph_from_VH_tagFirst_2b1c_H_mass_fey1013);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_H_mass1013 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_H_mass1013","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1013->SetMinimum(-1829.649);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1013->SetMaximum(19104.01);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1013->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1013->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1013->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1013->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1013->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1013->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1013->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1013->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_H_mass1013);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_H_mass","Data (BTagCSV, 2016)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_mass_tagFirst_VR_16->cd();
  
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
   
   TH1D *data_mc_ratio__14 = new TH1D("data_mc_ratio__14","",1000,0,2000);
   data_mc_ratio__14->SetBinContent(43,1.03733);
   data_mc_ratio__14->SetBinContent(44,1.039089);
   data_mc_ratio__14->SetBinContent(45,1.029499);
   data_mc_ratio__14->SetBinContent(46,1.026458);
   data_mc_ratio__14->SetBinContent(47,1.046262);
   data_mc_ratio__14->SetBinContent(48,1.028001);
   data_mc_ratio__14->SetBinContent(78,1.022322);
   data_mc_ratio__14->SetBinContent(79,1.03177);
   data_mc_ratio__14->SetBinContent(80,1.021088);
   data_mc_ratio__14->SetBinContent(81,1.02114);
   data_mc_ratio__14->SetBinContent(82,1.040626);
   data_mc_ratio__14->SetBinContent(83,1.020487);
   data_mc_ratio__14->SetBinContent(1000,0.8135355);
   data_mc_ratio__14->SetBinContent(1001,1.171433);
   data_mc_ratio__14->SetBinError(43,0.0110423);
   data_mc_ratio__14->SetBinError(44,0.007754614);
   data_mc_ratio__14->SetBinError(45,0.007773401);
   data_mc_ratio__14->SetBinError(46,0.007815767);
   data_mc_ratio__14->SetBinError(47,0.007915788);
   data_mc_ratio__14->SetBinError(48,0.01111759);
   data_mc_ratio__14->SetBinError(78,0.01204316);
   data_mc_ratio__14->SetBinError(79,0.00859659);
   data_mc_ratio__14->SetBinError(80,0.008589067);
   data_mc_ratio__14->SetBinError(81,0.008583433);
   data_mc_ratio__14->SetBinError(82,0.00875868);
   data_mc_ratio__14->SetBinError(83,0.01219715);
   data_mc_ratio__14->SetBinError(1000,0.1627071);
   data_mc_ratio__14->SetBinError(1001,0.009238548);
   data_mc_ratio__14->SetMinimum(0.4);
   data_mc_ratio__14->SetMaximum(1.6);
   data_mc_ratio__14->SetEntries(3664.474);
   data_mc_ratio__14->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__14->SetLineColor(ci);
   data_mc_ratio__14->SetLineWidth(2);
   data_mc_ratio__14->SetMarkerStyle(20);
   data_mc_ratio__14->SetMarkerSize(1.2);
   data_mc_ratio__14->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__14->GetXaxis()->SetRange(1,150);
   data_mc_ratio__14->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__14->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__14->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__14->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__14->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__14->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__14->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__14->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__14->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__14->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__14->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__14->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__14->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__14->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__14->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__14->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1014[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1014[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1014[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1014[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0.009392435, 0.004628886, 0.004661663, 0.004694008, 0.004708868, 0.009429655, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01026648, 0.005149647, 0.005171983, 0.005168459,
   0.005224372, 0.01033778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1703872 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1014,Graph_from_mc_statistical_error_fy1014,Graph_from_mc_statistical_error_fex1014,Graph_from_mc_statistical_error_fey1014);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1014 = new TH1F("Graph_Graph_from_mc_statistical_error1014","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1014->SetMinimum(0.7955354);
   Graph_Graph_from_mc_statistical_error1014->SetMaximum(1.204465);
   Graph_Graph_from_mc_statistical_error1014->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1014->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1014->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1014->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1014);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagFirst_VR_16->cd();
   H_mass_tagFirst_VR_16->Modified();
   H_mass_tagFirst_VR_16->cd();
   H_mass_tagFirst_VR_16->SetSelected(H_mass_tagFirst_VR_16);
}
