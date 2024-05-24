#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_DHZfirst_VR_18()
{
//=========Macro generated from canvas: Z_mass_DHZfirst_VR_18/Z_mass_DHZfirst_VR_18
//=========  (Fri May 24 11:23:56 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_DHZfirst_VR_18 = new TCanvas("Z_mass_DHZfirst_VR_18", "Z_mass_DHZfirst_VR_18",0,0,600,600);
   Z_mass_DHZfirst_VR_18->SetHighLightColor(2);
   Z_mass_DHZfirst_VR_18->Range(0,0,1,1);
   Z_mass_DHZfirst_VR_18->SetFillColor(0);
   Z_mass_DHZfirst_VR_18->SetFillStyle(4000);
   Z_mass_DHZfirst_VR_18->SetBorderMode(0);
   Z_mass_DHZfirst_VR_18->SetBorderSize(2);
   Z_mass_DHZfirst_VR_18->SetFrameFillStyle(1000);
   Z_mass_DHZfirst_VR_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-7.77242,315.7258,7774.647);
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
   st->SetMaximum(6996.405);
   
   TH1F *st_stack_91 = new TH1F("st_stack_91","",1000,0,2000);
   st_stack_91->SetMinimum(0.01);
   st_stack_91->SetMaximum(6996.405);
   st_stack_91->SetDirectory(nullptr);
   st_stack_91->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_91->SetLineColor(ci);
   st_stack_91->SetLineWidth(0);
   st_stack_91->GetXaxis()->SetRange(1,150);
   st_stack_91->GetXaxis()->SetLabelFont(42);
   st_stack_91->GetXaxis()->SetTitleOffset(1);
   st_stack_91->GetXaxis()->SetTitleFont(42);
   st_stack_91->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_91->GetYaxis()->SetLabelFont(42);
   st_stack_91->GetYaxis()->SetLabelSize(0.05);
   st_stack_91->GetYaxis()->SetTitleSize(0.057);
   st_stack_91->GetYaxis()->SetTitleOffset(1.2);
   st_stack_91->GetYaxis()->SetTitleFont(42);
   st_stack_91->GetZaxis()->SetLabelFont(42);
   st_stack_91->GetZaxis()->SetTitleOffset(1);
   st_stack_91->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_91);
   
   
   TH1D *VH_DHZfirst_2b1c_Z_mass_stack_1 = new TH1D("VH_DHZfirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(26,1934.068);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(27,2277.202);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(28,2563.308);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(29,2935.872);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(30,3148.382);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(61,2725.837);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(62,2599.35);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(63,2617.643);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(64,2626.58);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(65,2629.912);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(1000,17.20212);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(1001,8902.024);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(7,0.01870828);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(10,0.05027279);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(13,0.3156212);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(14,0.3177737);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(15,1.135824);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(16,1.788016);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(17,2.827106);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(18,4.812414);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(19,6.929981);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(20,9.434407);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(21,11.95065);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(22,16.2858);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(23,17.52011);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(24,20.96587);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(25,23.54493);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(26,25.40723);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(27,28.26595);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(28,29.45599);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(29,31.70103);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(30,32.56217);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(31,33.49706);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(32,34.54668);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(33,35.21591);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(34,36.29898);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(35,36.38748);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(36,36.37255);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(37,36.79833);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(38,36.87518);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(39,37.08096);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(40,37.2762);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(41,37.00328);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(42,36.6466);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(43,37.07209);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(44,36.68741);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(45,36.75669);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(46,36.44002);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(47,35.93386);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(48,35.92509);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(49,35.78706);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(50,35.59987);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(51,35.27689);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(52,34.26674);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(53,34.6069);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(54,34.05041);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(55,33.92224);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(56,33.80062);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(57,33.41792);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(58,33.33261);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(59,33.50313);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(60,32.85488);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(61,32.82934);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(62,32.22652);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(63,32.48903);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(64,32.10222);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(65,32.21298);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(66,31.65145);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(67,31.91627);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(68,31.58849);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(69,31.3772);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(70,31.30297);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(71,31.16276);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(72,31.23827);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(73,33.09225);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(74,30.64298);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(75,30.60113);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(76,30.33231);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(77,30.12384);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(78,30.05319);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(79,29.82587);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(80,29.91217);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(81,29.69504);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(82,29.23902);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(83,29.02419);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(84,29.51356);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(85,28.64271);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(86,28.33641);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(87,28.3151);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(88,27.91646);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(89,28.01012);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(90,27.86754);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(91,27.9478);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(92,27.74639);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(93,27.25137);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(94,26.66184);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(95,26.62061);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(96,26.82446);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(97,26.71785);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(98,25.91002);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(99,25.63889);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(100,25.64259);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(101,25.86724);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(102,24.82749);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(103,25.43675);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(104,24.73471);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(105,24.66165);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(106,24.40405);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(107,23.99178);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(108,23.86856);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(109,23.36144);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(110,24.49194);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(111,23.14988);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(112,23.25469);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(113,23.00453);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(114,23.26025);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(115,22.27061);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(116,22.06013);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(117,22.13946);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(118,22.13914);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(119,21.55576);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(120,21.5479);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(121,21.03719);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(122,21.43795);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(123,21.03385);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(124,21.8505);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(125,22.3634);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(126,20.61716);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(127,20.03443);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(128,20.19701);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(129,19.95861);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(130,20.99508);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(131,19.583);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(132,20.24423);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(133,19.30169);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(134,19.46172);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(135,19.15003);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(136,18.98033);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(137,18.76992);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(138,18.66492);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(139,18.39203);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(140,18.49828);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(141,18.37768);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(142,18.25719);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(143,18.03698);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(144,17.76822);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(145,17.77262);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(146,17.63973);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(147,17.32655);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(148,17.03413);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(149,17.18504);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(150,17.13997);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(151,16.94806);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(152,16.8534);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(153,16.47759);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(154,18.01992);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(155,16.47051);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(156,16.45805);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(157,16.06199);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(158,16.01543);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(159,15.98038);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(160,15.7374);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(161,16.01791);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(162,15.62207);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(163,15.6538);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(164,15.17873);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(165,15.2833);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(166,15.21608);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(167,14.86406);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(168,14.73988);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(169,14.94235);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(170,15.06347);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(171,14.55013);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(172,14.75981);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(173,14.33993);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(174,14.27791);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(175,14.19451);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(176,14.29354);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(177,14.06195);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(178,14.22427);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(179,13.98961);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(180,13.88134);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(181,13.72151);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(182,13.67443);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(183,13.58923);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(184,13.32665);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(185,13.38762);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(186,13.24294);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(187,13.2582);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(188,13.2431);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(189,13.42497);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(190,12.8856);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(191,12.74751);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(192,12.82115);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(193,12.92938);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(194,12.91972);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(195,12.37953);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(196,12.47383);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(197,12.61703);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(198,12.39952);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(199,12.23539);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(200,12.20502);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(201,12.24968);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(202,12.01944);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(203,12.18178);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(204,12.13381);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(205,11.98732);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(206,11.90386);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(207,11.91241);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(208,11.55591);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(209,11.47549);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(210,11.57889);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(211,11.56489);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(212,11.35594);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(213,11.35467);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(214,11.42833);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(215,11.3796);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(216,11.08092);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(217,11.64105);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(218,11.15732);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(219,11.09162);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(220,11.01992);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(221,11.00815);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(222,11.01077);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(223,10.86073);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(224,10.76061);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(225,10.69945);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(226,10.85321);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(227,10.78735);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(228,10.38332);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(229,10.44445);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(230,10.7905);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(231,12.25903);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(232,11.57034);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(233,10.81464);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(234,10.25186);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(235,10.12139);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(236,10.13685);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(237,10.02246);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(238,10.18872);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(239,10.06791);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(240,10.12517);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(241,9.947955);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(242,9.757295);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(243,9.737927);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(244,9.924622);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(245,9.800681);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(246,9.679907);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(247,9.954583);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(248,9.918721);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(249,9.676371);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(250,9.872371);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(251,9.390627);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(252,9.465726);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(253,9.625934);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(254,9.212798);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(255,9.27631);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(256,9.384707);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(257,9.123811);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(258,9.678213);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(259,9.040892);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(260,8.950145);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(261,9.498122);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(262,9.360925);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(263,9.131027);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(264,9.160042);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(265,9.000766);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(266,9.299239);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(267,8.745512);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(268,8.992971);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(269,8.974208);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(270,9.316741);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(271,9.026658);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(272,8.911324);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(273,8.664879);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(274,8.868301);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(275,8.71964);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(276,8.532056);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(277,8.691518);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(278,8.564078);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(279,8.80808);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(280,8.768262);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(281,8.61495);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(282,8.431297);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(283,8.556428);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(284,8.587764);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(285,8.424837);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(286,8.590799);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(287,8.547951);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(288,8.585573);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(289,8.701296);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(290,8.338725);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(291,7.974991);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(292,8.400976);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(293,8.744901);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(294,8.32297);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(295,8.417725);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(296,8.26976);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(297,8.364483);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(298,8.311891);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(299,8.126999);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(300,8.427757);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(301,8.238462);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(302,8.080506);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(303,8.298531);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(304,7.935346);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(305,8.27949);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(306,8.09172);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(307,8.131578);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(308,8.082966);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(309,7.962897);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(310,7.964336);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(311,8.042167);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(312,8.06711);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(313,8.141429);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(314,7.993942);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(315,7.786497);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(316,8.007528);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(317,7.775325);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(318,7.819704);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(319,7.88983);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(320,7.948502);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(321,7.917243);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(322,8.052247);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(323,8.061124);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(324,7.436737);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(325,7.995505);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(326,7.772317);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(327,8.546001);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(328,7.699991);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(329,8.079251);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(330,7.708616);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(331,8.21586);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(332,7.967474);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(333,7.569734);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(334,7.496703);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(335,8.302632);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(336,8.036754);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(337,7.792542);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(338,7.468688);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(339,7.569904);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(340,7.861449);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(341,7.849571);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(342,7.444086);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(343,7.642459);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(344,7.587109);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(345,7.869838);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(346,7.469653);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(347,7.605466);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(348,7.541943);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(349,7.398493);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(350,7.643115);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(351,7.818861);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(352,7.562344);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(353,7.189292);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(354,7.43647);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(355,7.593471);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(356,7.488841);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(357,7.293583);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(358,7.249451);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(359,7.271217);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(360,7.142057);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(361,7.460582);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(362,6.980323);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(363,7.731579);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(364,7.410581);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(365,7.286161);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(366,7.474128);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(367,7.242068);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(368,7.198463);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(369,7.356979);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(370,7.199768);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(371,7.19989);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(372,7.435857);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(373,7.235184);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(374,7.245984);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(375,7.10971);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(376,7.055954);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(377,7.488362);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(378,7.510835);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(379,7.172967);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(380,7.036964);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(381,7.065035);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(382,6.898167);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(383,7.207634);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(384,7.211861);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(385,7.29763);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(386,7.078433);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(387,7.175661);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(388,6.92939);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(389,7.032974);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(390,7.260784);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(391,7.038895);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(392,6.824067);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(393,8.301399);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(394,7.017366);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(395,6.946077);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(396,7.079423);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(397,7.3192);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(398,6.91749);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(399,6.991476);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(400,7.003275);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(401,7.094012);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(402,7.161673);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(403,6.789631);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(404,7.247872);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(405,6.972705);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(406,6.983355);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(407,6.981917);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(408,6.860557);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(409,6.633881);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(410,7.014221);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(411,6.668645);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(412,6.861395);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(413,6.695898);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(414,8.85573);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(415,6.845036);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(416,7.100209);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(417,6.809311);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(418,6.948158);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(419,7.162554);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(420,6.900132);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(421,7.028635);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(422,6.823588);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(423,6.592473);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(424,6.802473);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(425,7.106842);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(426,6.868154);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(427,6.549475);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(428,6.655228);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(429,6.756535);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(430,6.581905);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(431,6.796495);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(432,6.962708);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(433,6.906334);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(434,6.897815);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(435,6.448949);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(436,6.654228);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(437,6.582781);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(438,6.219692);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(439,6.792971);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(440,6.590774);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(441,6.69494);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(442,6.738978);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(443,6.632229);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(444,6.837626);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(445,6.627928);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(446,6.78189);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(447,6.888628);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(448,6.713961);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(449,6.325957);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(450,6.750039);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(451,6.400409);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(452,6.858413);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(453,6.61468);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(454,6.356821);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(455,6.520419);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(456,6.47798);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(457,6.687248);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(458,6.476442);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(459,6.691857);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(460,9.532775);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(461,6.638352);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(462,6.535762);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(463,6.623762);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(464,6.521721);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(465,6.516972);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(466,6.363148);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(467,6.562683);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(468,6.644226);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(469,6.456128);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(470,6.522019);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(471,6.374284);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(472,6.580142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(473,6.652259);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(474,6.418663);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(475,6.026576);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(476,6.446338);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(477,6.672514);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(478,6.387041);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(479,6.410581);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(480,6.69481);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(481,6.455291);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(482,6.525509);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(483,6.208158);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(484,6.40196);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(485,6.382482);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(486,6.416237);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(487,6.491934);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(488,6.564311);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(489,6.041904);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(490,6.231686);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(491,6.378584);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(492,6.567867);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(493,6.384464);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(494,6.250556);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(495,6.53532);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(496,6.442936);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(497,6.361491);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(498,6.323481);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(499,6.189837);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(500,6.219819);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(501,6.228806);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(502,6.445718);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(503,6.200256);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(504,6.391404);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(505,6.375208);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(506,6.252929);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(507,5.964221);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(508,6.359807);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(509,6.004119);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(510,6.314986);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(511,6.413271);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(512,6.05459);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(513,6.086539);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(514,6.239476);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(515,6.047848);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(516,6.004581);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(517,6.268877);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(518,6.068575);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(519,6.44917);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(520,5.996686);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(521,6.008472);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(522,5.970531);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(523,5.983887);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(524,5.892779);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(525,5.720901);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(526,6.257767);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(527,6.021895);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(528,6.02046);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(529,6.016292);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(530,6.116768);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(531,6.389722);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(532,6.060184);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(533,6.215359);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(534,5.921955);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(535,6.100946);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(536,6.168747);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(537,5.858948);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(538,5.938667);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(539,6.192754);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(540,6.558913);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(541,6.181529);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(542,5.976163);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(543,6.015078);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(544,5.861041);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(545,5.859462);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(546,5.873236);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(547,5.968541);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(548,5.756885);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(549,6.339852);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(550,5.972229);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(551,6.129371);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(552,5.810211);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(553,5.92317);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(554,5.993782);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(555,5.850723);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(556,5.909029);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(557,7.075691);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(558,5.944383);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(559,5.900307);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(560,5.886953);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(561,5.866337);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(562,6.182086);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(563,5.737795);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(564,5.775864);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(565,5.92916);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(566,6.25623);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(567,6.065869);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(568,5.948813);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(569,5.552992);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(570,5.837904);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(571,5.991958);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(572,5.976922);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(573,5.672899);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(574,5.858017);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(575,5.75589);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(576,5.673323);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(577,5.683653);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(578,5.61382);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(579,5.824762);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(580,5.876537);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(581,5.842793);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(582,6.157849);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(583,5.91046);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(584,5.776051);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(585,6.471684);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(586,5.74064);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(587,5.69811);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(588,5.335372);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(589,5.445122);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(590,5.708453);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(591,5.90752);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(592,5.765358);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(593,5.72934);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(594,5.635995);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(595,5.733018);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(596,5.403919);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(597,5.851816);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(598,5.742294);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(599,5.663506);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(600,5.706816);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(601,5.724529);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(602,5.884215);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(603,5.595281);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(604,5.419476);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(605,5.366789);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(606,5.729075);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(607,5.75671);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(608,5.338918);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(609,5.42221);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(610,5.615605);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(611,5.466563);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(612,5.637516);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(613,5.779919);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(614,5.567845);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(615,5.784866);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(616,5.580736);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(617,5.452488);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(618,5.671423);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(619,5.55216);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(620,5.418582);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(621,5.416021);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(622,5.642981);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(623,5.533308);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(624,5.297091);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(625,5.59219);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(626,5.582031);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(627,5.605915);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(628,5.502139);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(629,5.314737);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(630,5.430975);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(631,5.63997);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(632,5.561838);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(633,5.857916);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(634,5.908223);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(635,5.544275);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(636,5.684523);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(637,5.398727);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(638,5.43164);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(639,5.497813);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(640,5.478749);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(641,5.301334);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(642,5.325491);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(643,5.2705);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(644,5.430536);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(645,5.547313);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(646,5.001066);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(647,5.142048);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(648,5.49387);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(649,5.401929);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(650,5.433423);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(651,5.512105);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(652,5.114989);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(653,5.338775);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(654,5.41785);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(655,5.292597);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(656,5.624604);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(657,5.22503);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(658,5.428402);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(659,5.278566);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(660,5.38198);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(661,5.223291);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(662,5.357207);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(663,5.32981);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(664,5.462826);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(665,5.522386);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(666,5.11856);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(667,5.167988);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(668,5.189864);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(669,5.070264);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(670,5.044244);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(671,5.438289);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(672,5.376972);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(673,5.289389);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(674,5.026786);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(675,5.405525);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(676,5.346761);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(677,5.019384);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(678,5.19851);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(679,5.179081);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(680,5.149551);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(681,5.243226);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(682,5.542482);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(683,5.083711);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(684,5.327538);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(685,5.336166);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(686,5.323173);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(687,5.441044);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(688,4.922055);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(689,5.22038);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(690,5.096914);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(691,5.23935);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(692,5.375518);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(693,4.958147);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(694,5.160457);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(695,5.235578);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(696,5.126828);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(697,5.065393);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(698,5.109261);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(699,5.012294);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(700,5.038435);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(701,5.201368);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(702,4.95143);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(703,5.529073);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(704,5.076409);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(705,5.483844);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(706,5.059839);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(707,5.005298);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(708,5.267702);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(709,5.328975);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(710,4.972681);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(711,5.008072);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(712,4.979572);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(713,5.005062);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(714,4.841302);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(715,5.247014);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(716,5.042106);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(717,5.093081);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(718,5.027458);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(719,5.274154);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(720,5.016684);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(721,4.758624);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(722,5.059569);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(723,5.625272);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(724,5.214707);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(725,4.731632);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(726,4.922443);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(727,4.965445);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(728,5.167432);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(729,4.967472);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(730,4.851333);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(731,5.001033);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(732,4.643039);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(733,5.01229);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(734,4.876651);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(735,4.926124);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(736,5.016633);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(737,4.972447);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(738,5.043616);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(739,4.902086);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(740,4.672739);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(741,4.773233);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(742,4.615539);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(743,4.571049);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(744,4.950589);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(745,5.102837);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(746,4.961388);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(747,4.53552);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(748,4.88762);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(749,4.926091);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(750,5.048288);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(751,4.795997);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(752,4.973682);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(753,4.793866);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(754,4.840734);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(755,4.79987);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(756,4.872612);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(757,5.032648);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(758,5.010602);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(759,5.299554);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(760,4.664391);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(761,4.744661);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(762,4.750918);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(763,4.605862);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(764,4.771248);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(765,4.895153);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(766,4.954722);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(767,4.721003);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(768,4.528576);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(769,4.616895);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(770,4.815118);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(771,4.649248);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(772,4.765309);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(773,4.61282);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(774,4.331938);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(775,4.610632);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(776,4.8482);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(777,4.506396);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(778,4.358919);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(779,5.171734);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(780,4.552009);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(781,4.89862);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(782,4.516596);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(783,4.370477);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(784,4.567421);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(785,4.503756);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(786,4.729094);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(787,4.563741);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(788,4.594134);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(789,4.345761);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(790,4.514677);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(791,4.509477);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(792,4.504508);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(793,4.768248);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(794,4.539716);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(795,4.398425);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(796,4.430779);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(797,4.631453);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(798,4.704151);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(799,4.339589);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(800,4.163379);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(801,4.617606);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(802,4.753075);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(803,4.520541);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(804,4.500599);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(805,4.377952);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(806,4.470794);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(807,4.254866);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(808,4.735376);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(809,4.396842);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(810,4.53239);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(811,4.291009);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(812,4.257476);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(813,4.495388);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(814,4.685015);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(815,4.466117);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(816,4.322411);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(817,4.572033);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(818,4.524189);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(819,4.446024);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(820,4.391442);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(821,4.55443);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(822,4.365018);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(823,4.5139);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(824,4.43107);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(825,4.316501);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(826,4.40823);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(827,4.365385);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(828,4.538348);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(829,4.400327);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(830,4.25932);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(831,4.27983);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(832,4.412174);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(833,4.239548);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(834,4.518098);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(835,4.101643);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(836,4.492935);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(837,4.416618);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(838,4.431733);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(839,4.355507);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(840,4.149604);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(841,4.111595);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(842,4.34361);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(843,4.109512);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(844,4.223206);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(845,3.896094);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(846,3.972796);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(847,4.462335);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(848,3.990012);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(849,3.844813);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(850,4.182445);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(851,4.190732);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(852,3.993289);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(853,3.840474);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(854,4.062659);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(855,4.306981);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(856,4.333192);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(857,4.298913);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(858,4.159647);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(859,3.722384);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(860,4.289809);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(861,3.973231);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(862,4.264016);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(863,4.451529);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(864,4.000959);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(865,4.124531);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(866,3.917432);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(867,3.76417);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(868,4.181484);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(869,4.018141);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(870,4.052328);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(871,4.267416);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(872,4.232633);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(873,4.253645);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(874,3.908558);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(875,4.150179);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(876,3.890435);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(877,4.045512);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(878,3.90704);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(879,4.170587);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(880,4.177879);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(881,4.375708);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(882,4.065196);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(883,3.970968);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(884,3.64896);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(885,3.975002);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(886,3.878149);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(887,3.78715);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(888,3.979325);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(889,4.203711);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(890,4.060547);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(891,4.323542);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(892,3.997183);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(893,3.9494);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(894,3.823604);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(895,3.957029);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(896,4.001055);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(897,3.556242);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(898,4.1334);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(899,3.896963);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(900,3.788585);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(901,3.764634);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(902,3.854944);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(903,3.826373);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(904,3.793564);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(905,3.959877);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(906,3.993061);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(907,3.993434);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(908,3.676412);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(909,3.851965);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(910,3.790436);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(911,3.931114);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(912,4.038059);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(913,7.959894);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(914,3.921436);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(915,3.514971);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(916,3.840775);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(917,3.83507);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(918,3.474323);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(919,3.559442);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(920,3.927479);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(921,3.622);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(922,3.70745);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(923,3.510525);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(924,3.793597);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(925,3.819225);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(926,4.070414);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(927,3.674771);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(928,3.551264);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(929,3.515399);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(930,3.718529);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(931,3.851552);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(932,3.869414);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(933,3.882214);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(934,3.849641);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(935,3.700089);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(936,3.417319);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(937,3.367518);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(938,3.578797);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(939,3.728206);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(940,3.669889);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(941,3.492961);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(942,3.300347);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(943,3.563311);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(944,3.692154);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(945,3.545892);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(946,3.601495);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(947,3.684246);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(948,3.808592);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(949,3.515825);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(950,3.410094);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(951,3.626281);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(952,3.678737);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(953,3.581128);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(954,3.345933);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(955,3.576267);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(956,3.84249);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(957,3.55044);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(958,3.571767);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(959,3.43164);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(960,3.144701);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(961,3.454029);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(962,3.502944);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(963,3.64605);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(964,3.368067);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(965,3.28083);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(966,3.736843);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(967,3.383055);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(968,3.667912);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(969,3.602215);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(970,3.502471);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(971,3.392486);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(972,3.482612);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(973,3.790368);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(974,3.528002);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(975,3.498366);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(976,3.274604);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(977,3.510242);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(978,3.308504);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(979,3.595625);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(980,3.593047);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(981,3.606861);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(982,3.94798);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(983,3.419819);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(984,3.301471);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(985,3.21883);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(986,3.336928);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(987,3.372703);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(988,3.345205);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(989,3.154025);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(990,3.031575);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(991,3.398823);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(992,3.274452);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(993,3.923446);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(994,3.133833);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(995,3.132305);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(996,3.351576);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(997,3.522191);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(998,3.358022);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(999,3.047568);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(1000,3.22906);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(1001,56.92725);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetEntries(992498.6);

   ci = TColor::GetColor("#ff6600");
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetLineColor(ci);
   VH_DHZfirst_2b1c_Z_mass_stack_1->GetXaxis()->SetRange(1,2000);
   VH_DHZfirst_2b1c_Z_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Z_mass_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Z_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Z_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Z_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Z_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Z_mass_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Z_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_2b1c_Z_mass_stack_1,"");
   st->Draw("hist");
   
   TH1D *VH_DHZfirst_Z_mass__181 = new TH1D("VH_DHZfirst_Z_mass__181","",1000,0,2000);
   VH_DHZfirst_Z_mass__181->SetBinContent(26,1351);
   VH_DHZfirst_Z_mass__181->SetBinContent(27,1535);
   VH_DHZfirst_Z_mass__181->SetBinContent(28,1822);
   VH_DHZfirst_Z_mass__181->SetBinContent(29,2057);
   VH_DHZfirst_Z_mass__181->SetBinContent(30,2182);
   VH_DHZfirst_Z_mass__181->SetBinContent(61,2200);
   VH_DHZfirst_Z_mass__181->SetBinContent(62,2090);
   VH_DHZfirst_Z_mass__181->SetBinContent(63,2056);
   VH_DHZfirst_Z_mass__181->SetBinContent(64,2071);
   VH_DHZfirst_Z_mass__181->SetBinContent(65,2001);
   VH_DHZfirst_Z_mass__181->SetBinContent(1000,10);
   VH_DHZfirst_Z_mass__181->SetBinContent(1001,6814);
   VH_DHZfirst_Z_mass__181->SetEntries(292428);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_mass__181->SetLineColor(ci);
   VH_DHZfirst_Z_mass__181->SetLineWidth(2);
   VH_DHZfirst_Z_mass__181->SetMarkerStyle(20);
   VH_DHZfirst_Z_mass__181->SetMarkerSize(1.2);
   VH_DHZfirst_Z_mass__181->GetXaxis()->SetRange(1,2000);
   VH_DHZfirst_Z_mass__181->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__181->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_mass__181->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__181->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__181->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__181->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__181->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_mass__181->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__181->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fx1181[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fy1181[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 1934.068, 2277.202, 2563.308, 2935.872, 3148.382, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2725.837, 2599.35, 2617.643, 2626.58, 2629.912,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 17.20212 };
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fex1181[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fey1181[1000] = { 0, 0, 0, 0, 0, 0, 0.01870828, 0, 0, 0.05027279, 0, 0, 0.3156212, 0.3177737, 1.135824, 1.788016, 2.827106,
   4.812414, 6.929981, 9.434407, 11.95065, 16.2858, 17.52011, 20.96587, 23.54493, 25.40723, 28.26595, 29.45599, 31.70103, 32.56217, 33.49706, 34.54668, 35.21591,
   36.29898, 36.38748, 36.37255, 36.79833, 36.87518, 37.08096, 37.2762, 37.00328, 36.6466, 37.07209, 36.68741, 36.75669, 36.44002, 35.93386, 35.92509, 35.78706,
   35.59987, 35.27689, 34.26674, 34.6069, 34.05041, 33.92224, 33.80062, 33.41792, 33.33261, 33.50313, 32.85488, 32.82934, 32.22652, 32.48903, 32.10222, 32.21298,
   31.65145, 31.91627, 31.58849, 31.3772, 31.30297, 31.16276, 31.23827, 33.09225, 30.64298, 30.60113, 30.33231, 30.12384, 30.05319, 29.82587, 29.91217, 29.69504,
   29.23902, 29.02419, 29.51356, 28.64271, 28.33641, 28.3151, 27.91646, 28.01012, 27.86754, 27.9478, 27.74639, 27.25137, 26.66184, 26.62061, 26.82446, 26.71785,
   25.91002, 25.63889, 25.64259, 25.86724, 24.82749, 25.43675, 24.73471, 24.66165, 24.40405, 23.99178, 23.86856, 23.36144, 24.49194, 23.14988, 23.25469, 23.00453,
   23.26025, 22.27061, 22.06013, 22.13946, 22.13914, 21.55576, 21.5479, 21.03719, 21.43795, 21.03385, 21.8505, 22.3634, 20.61716, 20.03443, 20.19701, 19.95861,
   20.99508, 19.583, 20.24423, 19.30169, 19.46172, 19.15003, 18.98033, 18.76992, 18.66492, 18.39203, 18.49828, 18.37768, 18.25719, 18.03698, 17.76822, 17.77262,
   17.63973, 17.32655, 17.03413, 17.18504, 17.13997, 16.94806, 16.8534, 16.47759, 18.01992, 16.47051, 16.45805, 16.06199, 16.01543, 15.98038, 15.7374, 16.01791,
   15.62207, 15.6538, 15.17873, 15.2833, 15.21608, 14.86406, 14.73988, 14.94235, 15.06347, 14.55013, 14.75981, 14.33993, 14.27791, 14.19451, 14.29354, 14.06195,
   14.22427, 13.98961, 13.88134, 13.72151, 13.67443, 13.58923, 13.32665, 13.38762, 13.24294, 13.2582, 13.2431, 13.42497, 12.8856, 12.74751, 12.82115, 12.92938,
   12.91972, 12.37953, 12.47383, 12.61703, 12.39952, 12.23539, 12.20502, 12.24968, 12.01944, 12.18178, 12.13381, 11.98732, 11.90386, 11.91241, 11.55591, 11.47549,
   11.57889, 11.56489, 11.35594, 11.35467, 11.42833, 11.3796, 11.08092, 11.64105, 11.15732, 11.09162, 11.01992, 11.00815, 11.01077, 10.86073, 10.76061, 10.69945,
   10.85321, 10.78735, 10.38332, 10.44445, 10.7905, 12.25903, 11.57034, 10.81464, 10.25186, 10.12139, 10.13685, 10.02246, 10.18872, 10.06791, 10.12517, 9.947955,
   9.757295, 9.737927, 9.924622, 9.800681, 9.679907, 9.954583, 9.918721, 9.676371, 9.872371, 9.390627, 9.465726, 9.625934, 9.212798, 9.27631, 9.384707, 9.123811,
   9.678213, 9.040892, 8.950145, 9.498122, 9.360925, 9.131027, 9.160042, 9.000766, 9.299239, 8.745512, 8.992971, 8.974208, 9.316741, 9.026658, 8.911324, 8.664879,
   8.868301, 8.71964, 8.532056, 8.691518, 8.564078, 8.80808, 8.768262, 8.61495, 8.431297, 8.556428, 8.587764, 8.424837, 8.590799, 8.547951, 8.585573, 8.701296,
   8.338725, 7.974991, 8.400976, 8.744901, 8.32297, 8.417725, 8.26976, 8.364483, 8.311891, 8.126999, 8.427757, 8.238462, 8.080506, 8.298531, 7.935346, 8.27949,
   8.09172, 8.131578, 8.082966, 7.962897, 7.964336, 8.042167, 8.06711, 8.141429, 7.993942, 7.786497, 8.007528, 7.775325, 7.819704, 7.88983, 7.948502, 7.917243,
   8.052247, 8.061124, 7.436737, 7.995505, 7.772317, 8.546001, 7.699991, 8.079251, 7.708616, 8.21586, 7.967474, 7.569734, 7.496703, 8.302632, 8.036754, 7.792542,
   7.468688, 7.569904, 7.861449, 7.849571, 7.444086, 7.642459, 7.587109, 7.869838, 7.469653, 7.605466, 7.541943, 7.398493, 7.643115, 7.818861, 7.562344, 7.189292,
   7.43647, 7.593471, 7.488841, 7.293583, 7.249451, 7.271217, 7.142057, 7.460582, 6.980323, 7.731579, 7.410581, 7.286161, 7.474128, 7.242068, 7.198463, 7.356979,
   7.199768, 7.19989, 7.435857, 7.235184, 7.245984, 7.10971, 7.055954, 7.488362, 7.510835, 7.172967, 7.036964, 7.065035, 6.898167, 7.207634, 7.211861, 7.29763,
   7.078433, 7.175661, 6.92939, 7.032974, 7.260784, 7.038895, 6.824067, 8.301399, 7.017366, 6.946077, 7.079423, 7.3192, 6.91749, 6.991476, 7.003275, 7.094012,
   7.161673, 6.789631, 7.247872, 6.972705, 6.983355, 6.981917, 6.860557, 6.633881, 7.014221, 6.668645, 6.861395, 6.695898, 8.85573, 6.845036, 7.100209, 6.809311,
   6.948158, 7.162554, 6.900132, 7.028635, 6.823588, 6.592473, 6.802473, 7.106842, 6.868154, 6.549475, 6.655228, 6.756535, 6.581905, 6.796495, 6.962708, 6.906334,
   6.897815, 6.448949, 6.654228, 6.582781, 6.219692, 6.792971, 6.590774, 6.69494, 6.738978, 6.632229, 6.837626, 6.627928, 6.78189, 6.888628, 6.713961, 6.325957,
   6.750039, 6.400409, 6.858413, 6.61468, 6.356821, 6.520419, 6.47798, 6.687248, 6.476442, 6.691857, 9.532775, 6.638352, 6.535762, 6.623762, 6.521721, 6.516972,
   6.363148, 6.562683, 6.644226, 6.456128, 6.522019, 6.374284, 6.580142, 6.652259, 6.418663, 6.026576, 6.446338, 6.672514, 6.387041, 6.410581, 6.69481, 6.455291,
   6.525509, 6.208158, 6.40196, 6.382482, 6.416237, 6.491934, 6.564311, 6.041904, 6.231686, 6.378584, 6.567867, 6.384464, 6.250556, 6.53532, 6.442936, 6.361491,
   6.323481, 6.189837, 6.219819, 6.228806, 6.445718, 6.200256, 6.391404, 6.375208, 6.252929, 5.964221, 6.359807, 6.004119, 6.314986, 6.413271, 6.05459, 6.086539,
   6.239476, 6.047848, 6.004581, 6.268877, 6.068575, 6.44917, 5.996686, 6.008472, 5.970531, 5.983887, 5.892779, 5.720901, 6.257767, 6.021895, 6.02046, 6.016292,
   6.116768, 6.389722, 6.060184, 6.215359, 5.921955, 6.100946, 6.168747, 5.858948, 5.938667, 6.192754, 6.558913, 6.181529, 5.976163, 6.015078, 5.861041, 5.859462,
   5.873236, 5.968541, 5.756885, 6.339852, 5.972229, 6.129371, 5.810211, 5.92317, 5.993782, 5.850723, 5.909029, 7.075691, 5.944383, 5.900307, 5.886953, 5.866337,
   6.182086, 5.737795, 5.775864, 5.92916, 6.25623, 6.065869, 5.948813, 5.552992, 5.837904, 5.991958, 5.976922, 5.672899, 5.858017, 5.75589, 5.673323, 5.683653,
   5.61382, 5.824762, 5.876537, 5.842793, 6.157849, 5.91046, 5.776051, 6.471684, 5.74064, 5.69811, 5.335372, 5.445122, 5.708453, 5.90752, 5.765358, 5.72934,
   5.635995, 5.733018, 5.403919, 5.851816, 5.742294, 5.663506, 5.706816, 5.724529, 5.884215, 5.595281, 5.419476, 5.366789, 5.729075, 5.75671, 5.338918, 5.42221,
   5.615605, 5.466563, 5.637516, 5.779919, 5.567845, 5.784866, 5.580736, 5.452488, 5.671423, 5.55216, 5.418582, 5.416021, 5.642981, 5.533308, 5.297091, 5.59219,
   5.582031, 5.605915, 5.502139, 5.314737, 5.430975, 5.63997, 5.561838, 5.857916, 5.908223, 5.544275, 5.684523, 5.398727, 5.43164, 5.497813, 5.478749, 5.301334,
   5.325491, 5.2705, 5.430536, 5.547313, 5.001066, 5.142048, 5.49387, 5.401929, 5.433423, 5.512105, 5.114989, 5.338775, 5.41785, 5.292597, 5.624604, 5.22503,
   5.428402, 5.278566, 5.38198, 5.223291, 5.357207, 5.32981, 5.462826, 5.522386, 5.11856, 5.167988, 5.189864, 5.070264, 5.044244, 5.438289, 5.376972, 5.289389,
   5.026786, 5.405525, 5.346761, 5.019384, 5.19851, 5.179081, 5.149551, 5.243226, 5.542482, 5.083711, 5.327538, 5.336166, 5.323173, 5.441044, 4.922055, 5.22038,
   5.096914, 5.23935, 5.375518, 4.958147, 5.160457, 5.235578, 5.126828, 5.065393, 5.109261, 5.012294, 5.038435, 5.201368, 4.95143, 5.529073, 5.076409, 5.483844,
   5.059839, 5.005298, 5.267702, 5.328975, 4.972681, 5.008072, 4.979572, 5.005062, 4.841302, 5.247014, 5.042106, 5.093081, 5.027458, 5.274154, 5.016684, 4.758624,
   5.059569, 5.625272, 5.214707, 4.731632, 4.922443, 4.965445, 5.167432, 4.967472, 4.851333, 5.001033, 4.643039, 5.01229, 4.876651, 4.926124, 5.016633, 4.972447,
   5.043616, 4.902086, 4.672739, 4.773233, 4.615539, 4.571049, 4.950589, 5.102837, 4.961388, 4.53552, 4.88762, 4.926091, 5.048288, 4.795997, 4.973682, 4.793866,
   4.840734, 4.79987, 4.872612, 5.032648, 5.010602, 5.299554, 4.664391, 4.744661, 4.750918, 4.605862, 4.771248, 4.895153, 4.954722, 4.721003, 4.528576, 4.616895,
   4.815118, 4.649248, 4.765309, 4.61282, 4.331938, 4.610632, 4.8482, 4.506396, 4.358919, 5.171734, 4.552009, 4.89862, 4.516596, 4.370477, 4.567421, 4.503756,
   4.729094, 4.563741, 4.594134, 4.345761, 4.514677, 4.509477, 4.504508, 4.768248, 4.539716, 4.398425, 4.430779, 4.631453, 4.704151, 4.339589, 4.163379, 4.617606,
   4.753075, 4.520541, 4.500599, 4.377952, 4.470794, 4.254866, 4.735376, 4.396842, 4.53239, 4.291009, 4.257476, 4.495388, 4.685015, 4.466117, 4.322411, 4.572033,
   4.524189, 4.446024, 4.391442, 4.55443, 4.365018, 4.5139, 4.43107, 4.316501, 4.40823, 4.365385, 4.538348, 4.400327, 4.25932, 4.27983, 4.412174, 4.239548,
   4.518098, 4.101643, 4.492935, 4.416618, 4.431733, 4.355507, 4.149604, 4.111595, 4.34361, 4.109512, 4.223206, 3.896094, 3.972796, 4.462335, 3.990012, 3.844813,
   4.182445, 4.190732, 3.993289, 3.840474, 4.062659, 4.306981, 4.333192, 4.298913, 4.159647, 3.722384, 4.289809, 3.973231, 4.264016, 4.451529, 4.000959, 4.124531,
   3.917432, 3.76417, 4.181484, 4.018141, 4.052328, 4.267416, 4.232633, 4.253645, 3.908558, 4.150179, 3.890435, 4.045512, 3.90704, 4.170587, 4.177879, 4.375708,
   4.065196, 3.970968, 3.64896, 3.975002, 3.878149, 3.78715, 3.979325, 4.203711, 4.060547, 4.323542, 3.997183, 3.9494, 3.823604, 3.957029, 4.001055, 3.556242,
   4.1334, 3.896963, 3.788585, 3.764634, 3.854944, 3.826373, 3.793564, 3.959877, 3.993061, 3.993434, 3.676412, 3.851965, 3.790436, 3.931114, 4.038059, 7.959894,
   3.921436, 3.514971, 3.840775, 3.83507, 3.474323, 3.559442, 3.927479, 3.622, 3.70745, 3.510525, 3.793597, 3.819225, 4.070414, 3.674771, 3.551264, 3.515399,
   3.718529, 3.851552, 3.869414, 3.882214, 3.849641, 3.700089, 3.417319, 3.367518, 3.578797, 3.728206, 3.669889, 3.492961, 3.300347, 3.563311, 3.692154, 3.545892,
   3.601495, 3.684246, 3.808592, 3.515825, 3.410094, 3.626281, 3.678737, 3.581128, 3.345933, 3.576267, 3.84249, 3.55044, 3.571767, 3.43164, 3.144701, 3.454029,
   3.502944, 3.64605, 3.368067, 3.28083, 3.736843, 3.383055, 3.667912, 3.602215, 3.502471, 3.392486, 3.482612, 3.790368, 3.528002, 3.498366, 3.274604, 3.510242,
   3.308504, 3.595625, 3.593047, 3.606861, 3.94798, 3.419819, 3.301471, 3.21883, 3.336928, 3.372703, 3.345205, 3.154025, 3.031575, 3.398823, 3.274452, 3.923446,
   3.133833, 3.132305, 3.351576, 3.522191, 3.358022, 3.047568, 3.22906 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_DHZfirst_2b1c_Z_mass_fx1181,Graph_from_VH_DHZfirst_2b1c_Z_mass_fy1181,Graph_from_VH_DHZfirst_2b1c_Z_mass_fex1181,Graph_from_VH_DHZfirst_2b1c_Z_mass_fey1181);
   gre->SetName("Graph_from_VH_DHZfirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1181 = new TH1F("Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1181","",1000,0,2200);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1181->SetMinimum(-359.0983);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1181->SetMaximum(3502.767);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1181->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1181->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1181->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1181->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1181->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1181->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1181->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1181->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1181->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1181->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1181->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1181);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_Z_mass","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_DHZfirst_2b1c_Z_mass","Data-driven Bckg","F");

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
   entry=leg->AddEntry("Graph_from_VH_DHZfirst_2b1c_Z_mass","MC unc. (stat.)","fl");

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
   Z_mass_DHZfirst_VR_18->cd();
  
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
   
   TH1D *data_mc_ratio__182 = new TH1D("data_mc_ratio__182","",1000,0,2000);
   data_mc_ratio__182->SetBinContent(26,0.6985276);
   data_mc_ratio__182->SetBinContent(27,0.6740729);
   data_mc_ratio__182->SetBinContent(28,0.7108004);
   data_mc_ratio__182->SetBinContent(29,0.7006437);
   data_mc_ratio__182->SetBinContent(30,0.6930543);
   data_mc_ratio__182->SetBinContent(61,0.8070917);
   data_mc_ratio__182->SetBinContent(62,0.8040472);
   data_mc_ratio__182->SetBinContent(63,0.7854395);
   data_mc_ratio__182->SetBinContent(64,0.7884777);
   data_mc_ratio__182->SetBinContent(65,0.760862);
   data_mc_ratio__182->SetBinContent(1000,0.5813236);
   data_mc_ratio__182->SetBinContent(1001,0.7654439);
   data_mc_ratio__182->SetBinError(26,0.01900448);
   data_mc_ratio__182->SetBinError(27,0.01720492);
   data_mc_ratio__182->SetBinError(28,0.01665227);
   data_mc_ratio__182->SetBinError(29,0.01544828);
   data_mc_ratio__182->SetBinError(30,0.01483679);
   data_mc_ratio__182->SetBinError(61,0.01720725);
   data_mc_ratio__182->SetBinError(62,0.01758767);
   data_mc_ratio__182->SetBinError(63,0.01732213);
   data_mc_ratio__182->SetBinError(64,0.01732604);
   data_mc_ratio__182->SetBinError(65,0.01700914);
   data_mc_ratio__182->SetBinError(1000,0.1838307);
   data_mc_ratio__182->SetBinError(1001,0.01048549);
   data_mc_ratio__182->SetMinimum(0.4);
   data_mc_ratio__182->SetMaximum(1.6);
   data_mc_ratio__182->SetEntries(1297.276);
   data_mc_ratio__182->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__182->SetLineColor(ci);
   data_mc_ratio__182->SetLineWidth(2);
   data_mc_ratio__182->SetMarkerStyle(20);
   data_mc_ratio__182->SetMarkerSize(1.2);
   data_mc_ratio__182->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__182->GetXaxis()->SetRange(1,150);
   data_mc_ratio__182->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__182->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__182->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__182->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__182->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__182->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__182->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__182->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__182->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__182->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__182->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__182->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__182->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__182->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__182->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__182->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1182[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1182[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1182[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1182[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0.01313668, 0.01241258, 0.0114914, 0.01079782, 0.01034251, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01204376, 0.01239792, 0.01241156, 0.01222206, 0.01224869,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1877129 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1182,Graph_from_mc_statistical_error_fy1182,Graph_from_mc_statistical_error_fex1182,Graph_from_mc_statistical_error_fey1182);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1182 = new TH1F("Graph_Graph_from_mc_statistical_error1182","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1182->SetMinimum(0.7747445);
   Graph_Graph_from_mc_statistical_error1182->SetMaximum(1.225255);
   Graph_Graph_from_mc_statistical_error1182->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1182->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1182->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1182->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1182->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1182->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1182->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1182->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1182->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1182->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1182->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1182);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_DHZfirst_VR_18->cd();
   Z_mass_DHZfirst_VR_18->Modified();
   Z_mass_DHZfirst_VR_18->cd();
   Z_mass_DHZfirst_VR_18->SetSelected(Z_mass_DHZfirst_VR_18);
}
