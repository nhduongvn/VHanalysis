#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_DHZfirst_VR_16()
{
//=========Macro generated from canvas: Z_mass_DHZfirst_VR_16/Z_mass_DHZfirst_VR_16
//=========  (Fri May 24 11:23:55 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_DHZfirst_VR_16 = new TCanvas("Z_mass_DHZfirst_VR_16", "Z_mass_DHZfirst_VR_16",0,0,600,600);
   Z_mass_DHZfirst_VR_16->SetHighLightColor(2);
   Z_mass_DHZfirst_VR_16->Range(0,0,1,1);
   Z_mass_DHZfirst_VR_16->SetFillColor(0);
   Z_mass_DHZfirst_VR_16->SetFillStyle(4000);
   Z_mass_DHZfirst_VR_16->SetBorderMode(0);
   Z_mass_DHZfirst_VR_16->SetBorderSize(2);
   Z_mass_DHZfirst_VR_16->SetFrameFillStyle(1000);
   Z_mass_DHZfirst_VR_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-11.48671,315.7258,11485.23);
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
   st->SetMaximum(10335.56);
   
   TH1F *st_stack_75 = new TH1F("st_stack_75","",1000,0,2000);
   st_stack_75->SetMinimum(0.01);
   st_stack_75->SetMaximum(10335.56);
   st_stack_75->SetDirectory(nullptr);
   st_stack_75->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_75->SetLineColor(ci);
   st_stack_75->SetLineWidth(0);
   st_stack_75->GetXaxis()->SetRange(1,150);
   st_stack_75->GetXaxis()->SetLabelFont(42);
   st_stack_75->GetXaxis()->SetTitleOffset(1);
   st_stack_75->GetXaxis()->SetTitleFont(42);
   st_stack_75->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_75->GetYaxis()->SetLabelFont(42);
   st_stack_75->GetYaxis()->SetLabelSize(0.05);
   st_stack_75->GetYaxis()->SetTitleSize(0.057);
   st_stack_75->GetYaxis()->SetTitleOffset(1.2);
   st_stack_75->GetYaxis()->SetTitleFont(42);
   st_stack_75->GetZaxis()->SetLabelFont(42);
   st_stack_75->GetZaxis()->SetTitleOffset(1);
   st_stack_75->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_75);
   
   
   TH1D *VH_DHZfirst_2b1c_Z_mass_stack_1 = new TH1D("VH_DHZfirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(26,3862.424);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(27,4146.258);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(28,4320.5);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(29,4463.606);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(30,4598.747);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(61,2982.932);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(62,2988.38);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(63,2945.258);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(64,2909.707);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(65,2912.306);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(1000,7.405647);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(1001,5656.879);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(10,0.01012104);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(13,0.4902513);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(14,1.114179);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(15,2.298883);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(16,4.49239);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(17,6.794618);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(18,9.539342);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(19,12.56228);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(20,15.31876);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(21,18.23656);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(22,20.78905);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(23,23.03813);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(24,25.11344);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(25,26.80833);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(26,28.12115);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(27,29.1897);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(28,29.70577);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(29,30.20989);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(30,30.71791);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(31,30.75403);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(32,30.79845);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(33,30.84687);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(34,30.98445);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(35,30.67472);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(36,30.77042);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(37,30.48116);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(38,30.06852);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(39,30.0657);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(40,29.75702);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(41,29.65345);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(42,29.42182);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(43,29.25767);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(44,29.17212);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(45,28.89346);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(46,28.61859);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(47,28.6565);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(48,28.15142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(49,28.06749);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(50,27.91441);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(51,27.8176);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(52,27.48733);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(53,27.19123);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(54,27.09562);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(55,27.00795);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(56,26.6356);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(57,26.49539);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(58,26.36436);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(59,26.27795);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(60,25.90356);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(61,25.63294);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(62,25.70502);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(63,25.38212);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(64,25.29097);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(65,25.22558);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(66,24.92476);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(67,24.80042);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(68,24.6634);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(69,24.53999);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(70,24.26628);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(71,24.08383);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(72,23.72964);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(73,23.6759);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(74,23.66835);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(75,23.23312);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(76,22.96142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(77,22.91759);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(78,22.52292);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(79,22.35894);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(80,22.24226);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(81,21.93388);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(82,21.61482);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(83,21.69965);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(84,21.46377);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(85,21.19517);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(86,21.04963);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(87,20.79667);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(88,20.56011);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(89,20.25396);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(90,20.05778);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(91,19.87708);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(92,19.76281);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(93,19.53843);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(94,19.27112);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(95,19.18101);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(96,18.91507);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(97,18.81259);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(98,18.58383);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(99,18.34016);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(100,18.27691);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(101,18.12752);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(102,17.84806);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(103,17.66667);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(104,17.64996);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(105,17.17929);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(106,17.0938);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(107,17.1049);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(108,16.91555);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(109,16.84887);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(110,16.47559);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(111,16.30397);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(112,16.1896);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(113,15.9202);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(114,16.07558);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(115,15.86552);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(116,15.70151);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(117,15.57531);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(118,15.3831);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(119,15.31026);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(120,15.24976);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(121,15.0558);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(122,14.86043);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(123,14.5935);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(124,14.6896);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(125,14.29985);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(126,14.36949);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(127,14.23808);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(128,14.12257);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(129,13.94451);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(130,13.70483);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(131,13.93695);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(132,13.62997);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(133,13.55092);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(134,13.4382);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(135,13.12466);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(136,13.07932);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(137,13.12827);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(138,12.82704);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(139,12.90326);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(140,12.88396);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(141,12.55856);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(142,12.70212);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(143,12.42759);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(144,12.22086);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(145,12.16519);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(146,12.03783);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(147,11.90944);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(148,11.85855);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(149,11.6607);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(150,11.76283);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(151,11.59625);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(152,11.47635);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(153,11.49243);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(154,11.33526);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(155,11.23933);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(156,11.10765);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(157,11.3577);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(158,11.21736);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(159,11.00705);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(160,11.01191);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(161,10.80359);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(162,10.70456);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(163,10.8268);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(164,10.77188);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(165,10.60883);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(166,10.33866);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(167,10.3451);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(168,10.28291);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(169,10.28004);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(170,10.04407);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(171,9.997674);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(172,10.0104);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(173,10.07722);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(174,9.988615);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(175,9.726399);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(176,9.582084);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(177,9.803083);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(178,9.626141);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(179,9.617249);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(180,9.592591);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(181,9.357314);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(182,9.343922);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(183,9.359509);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(184,9.269552);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(185,9.176903);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(186,9.355233);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(187,9.069125);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(188,9.150687);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(189,9.026171);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(190,8.908671);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(191,9.070099);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(192,8.860662);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(193,8.82887);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(194,8.893743);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(195,8.787454);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(196,8.68564);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(197,8.501259);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(198,8.78108);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(199,8.518145);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(200,8.491483);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(201,8.612476);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(202,8.562206);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(203,8.521194);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(204,8.225238);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(205,8.354943);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(206,8.242104);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(207,8.016534);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(208,8.150123);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(209,8.135632);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(210,8.182174);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(211,8.210126);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(212,7.976239);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(213,8.027072);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(214,7.85975);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(215,7.880552);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(216,8.03921);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(217,7.826081);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(218,7.762441);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(219,7.762571);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(220,7.900289);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(221,7.70245);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(222,7.685899);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(223,7.579342);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(224,7.730134);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(225,7.761102);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(226,7.759341);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(227,7.731048);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(228,7.46726);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(229,7.538228);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(230,7.482077);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(231,7.304844);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(232,7.542533);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(233,7.372131);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(234,7.333421);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(235,7.597716);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(236,7.408022);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(237,7.156682);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(238,7.363068);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(239,7.169044);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(240,7.227205);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(241,7.030958);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(242,7.111613);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(243,7.228799);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(244,7.001566);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(245,7.106083);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(246,7.188817);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(247,6.830847);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(248,6.938549);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(249,7.047612);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(250,7.106103);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(251,7.013536);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(252,6.803207);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(253,7.027222);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(254,6.911499);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(255,6.753824);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(256,6.917907);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(257,6.705802);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(258,6.868159);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(259,6.868563);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(260,6.823142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(261,6.702275);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(262,6.812608);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(263,6.658929);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(264,6.693697);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(265,6.680908);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(266,6.64501);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(267,6.570238);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(268,6.413438);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(269,6.759646);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(270,6.750589);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(271,6.69744);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(272,6.398207);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(273,6.592925);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(274,6.55327);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(275,6.518591);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(276,6.516985);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(277,6.53758);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(278,6.323559);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(279,6.279227);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(280,6.419733);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(281,6.446984);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(282,6.570994);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(283,6.326205);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(284,6.432436);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(285,6.406254);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(286,6.31484);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(287,6.299018);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(288,6.214809);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(289,6.38681);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(290,6.248451);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(291,6.348072);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(292,6.301317);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(293,6.190772);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(294,6.165097);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(295,6.219794);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(296,6.173797);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(297,6.174715);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(298,6.136294);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(299,6.198387);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(300,6.151006);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(301,6.076469);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(302,6.110736);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(303,6.197624);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(304,6.087253);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(305,6.107383);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(306,5.970918);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(307,6.112058);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(308,5.95167);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(309,6.057916);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(310,5.89978);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(311,6.051525);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(312,6.15103);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(313,5.974436);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(314,5.863133);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(315,5.77085);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(316,5.922327);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(317,5.924751);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(318,5.748914);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(319,5.921803);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(320,5.986335);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(321,5.693303);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(322,5.72872);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(323,5.738664);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(324,5.947379);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(325,6.047912);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(326,5.827449);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(327,5.855511);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(328,5.640204);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(329,5.705311);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(330,5.727765);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(331,5.49882);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(332,5.636627);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(333,5.590881);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(334,5.726134);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(335,5.705344);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(336,5.511558);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(337,5.811073);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(338,5.81768);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(339,5.731226);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(340,5.584751);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(341,5.759448);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(342,5.49172);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(343,5.656182);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(344,5.688721);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(345,5.586431);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(346,5.690566);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(347,5.528103);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(348,5.691329);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(349,5.50172);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(350,5.625764);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(351,5.492219);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(352,5.764168);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(353,5.517393);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(354,5.550669);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(355,5.513024);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(356,5.599394);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(357,5.441082);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(358,5.462408);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(359,5.574928);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(360,5.45585);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(361,5.472333);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(362,5.494008);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(363,5.412234);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(364,5.567181);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(365,5.483546);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(366,5.379611);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(367,5.571485);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(368,5.287232);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(369,5.434328);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(370,5.387575);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(371,5.254026);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(372,5.357767);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(373,5.527369);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(374,5.449277);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(375,5.401755);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(376,5.487374);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(377,5.459042);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(378,5.423872);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(379,5.321086);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(380,5.282283);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(381,5.379549);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(382,5.409974);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(383,5.332306);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(384,5.290447);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(385,5.283006);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(386,5.319115);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(387,5.379412);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(388,5.122219);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(389,5.253509);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(390,5.344899);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(391,5.311254);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(392,5.430821);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(393,5.240821);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(394,5.076663);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(395,5.303687);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(396,5.261866);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(397,5.176283);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(398,5.471235);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(399,5.114539);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(400,5.178032);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(401,5.022873);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(402,5.104304);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(403,5.269518);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(404,5.335087);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(405,5.194151);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(406,4.882689);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(407,5.058893);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(408,5.102961);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(409,5.210739);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(410,5.334177);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(411,5.143613);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(412,5.218062);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(413,5.248459);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(414,5.007093);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(415,4.944317);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(416,5.111858);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(417,5.067696);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(418,5.033449);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(419,5.189201);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(420,5.046427);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(421,5.062009);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(422,5.083869);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(423,5.144113);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(424,4.983923);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(425,5.035176);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(426,4.854091);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(427,5.204239);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(428,5.122967);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(429,4.984229);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(430,4.965364);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(431,4.945221);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(432,5.225661);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(433,4.919564);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(434,5.067353);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(435,4.845158);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(436,4.884283);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(437,5.046544);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(438,4.926506);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(439,4.816619);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(440,4.934632);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(441,4.853049);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(442,4.926311);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(443,5.051818);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(444,4.78577);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(445,5.027639);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(446,4.901746);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(447,4.773957);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(448,5.109509);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(449,4.831386);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(450,4.921743);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(451,4.70012);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(452,4.818151);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(453,4.780821);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(454,4.86379);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(455,4.885659);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(456,4.697699);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(457,4.796321);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(458,4.949922);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(459,4.846463);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(460,4.658325);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(461,4.784128);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(462,4.719536);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(463,4.606241);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(464,4.868532);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(465,4.900366);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(466,4.866967);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(467,4.898706);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(468,4.732373);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(469,4.86483);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(470,4.78469);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(471,4.713299);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(472,4.909963);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(473,4.817509);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(474,4.745543);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(475,4.703005);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(476,4.7488);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(477,4.652457);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(478,4.56113);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(479,4.842123);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(480,4.912506);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(481,4.632596);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(482,4.70753);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(483,4.744922);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(484,4.641412);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(485,4.787907);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(486,4.74088);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(487,4.6806);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(488,4.660748);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(489,4.728806);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(490,4.773376);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(491,4.630644);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(492,4.593302);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(493,4.591944);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(494,4.466886);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(495,4.511721);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(496,4.584976);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(497,4.515297);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(498,4.54822);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(499,4.426694);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(500,4.71677);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(501,4.699076);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(502,4.551223);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(503,4.63321);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(504,4.704242);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(505,4.580097);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(506,4.524804);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(507,4.616481);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(508,4.456789);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(509,4.481008);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(510,4.542552);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(511,4.393868);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(512,4.498494);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(513,4.588717);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(514,4.567984);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(515,4.485162);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(516,4.590529);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(517,4.439549);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(518,4.345834);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(519,4.621658);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(520,4.472724);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(521,4.564354);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(522,4.411263);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(523,4.480612);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(524,4.437869);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(525,4.420225);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(526,4.687433);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(527,4.430432);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(528,4.710888);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(529,4.352537);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(530,4.42099);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(531,4.278719);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(532,4.32438);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(533,4.495957);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(534,4.505844);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(535,4.377914);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(536,4.517619);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(537,4.475495);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(538,4.192331);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(539,4.28139);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(540,4.636809);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(541,4.368745);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(542,4.226901);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(543,4.324278);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(544,4.299907);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(545,4.558304);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(546,4.412111);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(547,4.498623);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(548,4.368787);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(549,4.22989);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(550,4.035235);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(551,4.429131);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(552,4.258346);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(553,4.118471);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(554,4.363013);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(555,4.257218);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(556,4.23217);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(557,4.220098);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(558,4.22856);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(559,4.270932);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(560,4.361421);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(561,4.280426);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(562,4.343647);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(563,4.447736);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(564,4.334333);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(565,4.341625);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(566,4.176254);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(567,4.227384);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(568,4.321709);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(569,4.125454);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(570,4.161693);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(571,4.071884);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(572,4.358306);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(573,4.358492);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(574,4.092846);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(575,4.157606);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(576,4.085838);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(577,4.214192);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(578,4.0504);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(579,4.230015);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(580,4.219589);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(581,4.254874);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(582,4.155606);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(583,4.038636);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(584,4.219957);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(585,4.107051);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(586,4.212036);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(587,4.149913);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(588,4.089103);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(589,4.072916);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(590,4.386827);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(591,4.158781);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(592,4.160984);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(593,4.209052);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(594,4.017049);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(595,3.965044);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(596,3.924019);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(597,4.139492);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(598,4.215848);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(599,4.138606);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(600,4.053349);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(601,4.12358);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(602,4.097537);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(603,3.879788);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(604,4.092677);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(605,4.106479);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(606,4.019119);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(607,4.00972);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(608,3.938487);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(609,4.068026);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(610,3.973256);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(611,3.830241);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(612,4.038494);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(613,4.108183);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(614,3.772721);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(615,4.051822);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(616,3.835057);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(617,4.046812);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(618,3.888863);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(619,3.895947);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(620,3.848721);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(621,3.861809);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(622,4.022983);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(623,3.86749);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(624,4.053901);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(625,3.807392);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(626,4.051582);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(627,4.060819);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(628,3.685132);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(629,3.926642);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(630,3.884901);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(631,3.852478);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(632,3.957925);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(633,3.812882);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(634,3.826945);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(635,3.776116);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(636,4.001375);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(637,3.981517);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(638,3.955424);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(639,3.937035);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(640,3.874318);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(641,3.722982);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(642,3.585431);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(643,3.968087);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(644,3.859533);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(645,3.851767);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(646,3.702976);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(647,3.696382);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(648,3.967308);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(649,3.742924);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(650,3.810464);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(651,3.7982);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(652,3.542529);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(653,3.891341);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(654,3.692234);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(655,3.634269);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(656,3.71831);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(657,3.859622);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(658,3.837716);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(659,3.623582);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(660,3.637896);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(661,3.786437);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(662,3.734471);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(663,3.618529);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(664,3.665988);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(665,3.874964);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(666,3.754414);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(667,3.453308);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(668,3.630384);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(669,3.61951);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(670,3.68736);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(671,3.816409);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(672,3.645482);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(673,3.673449);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(674,3.662864);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(675,3.645921);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(676,3.562988);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(677,3.684143);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(678,3.678197);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(679,3.560651);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(680,3.850184);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(681,3.614813);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(682,3.732563);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(683,3.600543);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(684,3.715798);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(685,3.63308);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(686,3.829539);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(687,3.487336);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(688,3.472281);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(689,3.640716);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(690,3.454423);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(691,3.649501);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(692,3.369586);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(693,3.425004);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(694,3.573309);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(695,3.565952);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(696,3.548315);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(697,3.482027);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(698,3.411163);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(699,3.481967);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(700,3.408181);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(701,3.359742);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(702,3.393786);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(703,3.395796);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(704,3.61406);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(705,3.516645);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(706,3.383731);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(707,3.340407);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(708,3.373518);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(709,3.621254);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(710,3.476213);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(711,3.378827);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(712,3.323687);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(713,3.269981);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(714,3.54985);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(715,3.413317);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(716,3.40703);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(717,3.339708);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(718,3.480839);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(719,3.293386);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(720,3.388744);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(721,3.330142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(722,3.37906);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(723,3.197503);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(724,3.433096);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(725,3.227998);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(726,3.293181);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(727,3.334999);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(728,3.441027);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(729,3.249849);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(730,3.156875);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(731,3.369559);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(732,3.188982);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(733,3.298233);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(734,3.494622);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(735,3.340449);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(736,3.281928);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(737,3.428631);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(738,3.255427);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(739,3.237372);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(740,3.46005);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(741,3.193154);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(742,3.3702);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(743,3.255235);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(744,3.136063);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(745,3.337263);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(746,2.933336);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(747,3.170904);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(748,3.11843);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(749,3.123245);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(750,3.20468);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(751,3.185911);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(752,3.192629);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(753,3.243196);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(754,3.12376);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(755,3.075921);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(756,3.231781);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(757,3.00759);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(758,3.028118);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(759,3.185574);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(760,3.111186);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(761,3.006769);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(762,3.255533);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(763,3.276292);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(764,3.130049);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(765,3.098429);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(766,3.111284);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(767,3.02594);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(768,3.084407);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(769,3.268929);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(770,3.218648);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(771,3.042743);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(772,2.985232);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(773,3.005675);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(774,3.124881);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(775,3.109272);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(776,3.039559);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(777,3.067027);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(778,3.274031);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(779,3.000879);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(780,2.999634);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(781,2.978928);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(782,3.035965);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(783,2.972738);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(784,3.198833);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(785,3.054713);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(786,2.898853);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(787,2.840634);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(788,3.149871);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(789,3.021057);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(790,3.116208);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(791,3.103243);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(792,2.920017);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(793,3.039474);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(794,2.862881);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(795,3.119774);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(796,2.874693);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(797,3.005697);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(798,2.923881);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(799,2.801219);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(800,2.906125);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(801,3.154066);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(802,3.035459);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(803,2.861445);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(804,3.02523);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(805,2.877616);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(806,2.826556);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(807,2.952882);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(808,2.914866);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(809,2.945324);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(810,2.917548);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(811,2.711503);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(812,2.912728);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(813,2.835912);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(814,3.062647);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(815,2.916077);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(816,2.791499);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(817,3.006601);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(818,2.791892);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(819,2.805659);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(820,2.748665);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(821,2.876658);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(822,2.881856);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(823,2.960447);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(824,2.868569);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(825,2.854533);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(826,2.870475);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(827,2.887874);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(828,2.651431);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(829,2.661124);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(830,2.832837);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(831,2.551066);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(832,2.673671);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(833,2.703667);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(834,2.740687);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(835,2.89227);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(836,2.734563);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(837,2.929607);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(838,2.612435);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(839,2.739437);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(840,2.557167);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(841,2.711773);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(842,2.626895);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(843,3.122523);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(844,2.732302);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(845,2.738959);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(846,2.695964);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(847,2.832257);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(848,2.690056);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(849,2.756122);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(850,2.62125);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(851,2.703102);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(852,2.703823);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(853,2.7593);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(854,2.680347);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(855,2.628463);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(856,2.747225);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(857,2.537554);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(858,2.792569);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(859,2.596224);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(860,2.667304);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(861,2.581732);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(862,2.703071);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(863,2.621036);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(864,2.569148);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(865,2.575199);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(866,2.791217);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(867,2.489185);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(868,2.381073);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(869,2.718684);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(870,2.599153);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(871,2.494427);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(872,2.573947);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(873,2.634506);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(874,2.47047);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(875,2.621727);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(876,2.512096);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(877,2.642632);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(878,2.42103);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(879,2.485568);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(880,2.556096);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(881,2.455133);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(882,2.636409);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(883,2.480574);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(884,2.643892);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(885,2.420573);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(886,2.525802);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(887,2.545051);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(888,2.455751);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(889,2.573585);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(890,2.611504);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(891,2.557864);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(892,2.479034);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(893,2.379396);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(894,2.397071);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(895,2.589202);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(896,2.420786);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(897,2.56588);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(898,2.318575);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(899,2.590278);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(900,2.397787);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(901,2.504237);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(902,2.544385);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(903,2.366525);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(904,2.396802);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(905,2.502526);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(906,2.421499);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(907,2.45719);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(908,2.410663);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(909,2.429597);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(910,2.37969);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(911,2.331255);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(912,2.410774);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(913,2.382519);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(914,2.371867);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(915,2.241199);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(916,2.387141);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(917,2.503621);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(918,2.371453);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(919,2.413319);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(920,2.159828);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(921,2.277523);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(922,2.492622);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(923,2.319023);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(924,2.526416);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(925,2.29498);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(926,2.462205);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(927,2.18664);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(928,2.488172);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(929,2.159233);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(930,2.223424);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(931,2.328844);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(932,2.34534);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(933,2.222962);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(934,2.186445);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(935,2.221947);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(936,2.185395);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(937,2.295139);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(938,2.284482);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(939,2.170564);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(940,2.276113);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(941,2.31178);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(942,2.267124);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(943,2.439131);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(944,2.053706);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(945,2.267117);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(946,2.111063);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(947,2.176346);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(948,2.267227);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(949,2.176112);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(950,2.301084);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(951,2.276029);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(952,2.187248);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(953,2.162675);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(954,2.121673);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(955,2.150791);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(956,2.235417);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(957,2.092866);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(958,2.222116);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(959,2.138381);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(960,2.127359);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(961,2.274271);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(962,2.113036);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(963,2.093365);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(964,2.283933);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(965,2.112703);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(966,1.986268);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(967,2.222981);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(968,2.099522);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(969,1.944639);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(970,2.084566);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(971,1.973635);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(972,1.953004);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(973,2.09124);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(974,2.091416);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(975,1.994051);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(976,2.158402);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(977,2.045049);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(978,2.129555);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(979,2.129864);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(980,2.033659);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(981,1.98505);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(982,2.035015);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(983,2.05263);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(984,2.131307);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(985,2.149277);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(986,2.005755);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(987,2.082442);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(988,2.004824);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(989,2.212498);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(990,2.150015);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(991,2.169707);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(992,1.952962);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(993,1.921736);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(994,2.169111);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(995,2.003488);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(996,1.900759);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(997,2.103212);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(998,2.0988);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(999,2.08138);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(1000,1.891168);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(1001,34.79008);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetEntries(1804875);

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
   
   TH1D *VH_DHZfirst_Z_mass__149 = new TH1D("VH_DHZfirst_Z_mass__149","",1000,0,2000);
   VH_DHZfirst_Z_mass__149->SetBinContent(26,3844);
   VH_DHZfirst_Z_mass__149->SetBinContent(27,4173);
   VH_DHZfirst_Z_mass__149->SetBinContent(28,4349);
   VH_DHZfirst_Z_mass__149->SetBinContent(29,4524);
   VH_DHZfirst_Z_mass__149->SetBinContent(30,4651);
   VH_DHZfirst_Z_mass__149->SetBinContent(61,3157);
   VH_DHZfirst_Z_mass__149->SetBinContent(62,3201);
   VH_DHZfirst_Z_mass__149->SetBinContent(63,3100);
   VH_DHZfirst_Z_mass__149->SetBinContent(64,3105);
   VH_DHZfirst_Z_mass__149->SetBinContent(65,3023);
   VH_DHZfirst_Z_mass__149->SetBinContent(1000,7);
   VH_DHZfirst_Z_mass__149->SetBinContent(1001,6457);
   VH_DHZfirst_Z_mass__149->SetEntries(420311);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_mass__149->SetLineColor(ci);
   VH_DHZfirst_Z_mass__149->SetLineWidth(2);
   VH_DHZfirst_Z_mass__149->SetMarkerStyle(20);
   VH_DHZfirst_Z_mass__149->SetMarkerSize(1.2);
   VH_DHZfirst_Z_mass__149->GetXaxis()->SetRange(1,2000);
   VH_DHZfirst_Z_mass__149->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__149->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_mass__149->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__149->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__149->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__149->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__149->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_mass__149->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__149->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fx1149[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fy1149[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 3862.424, 4146.258, 4320.5, 4463.606, 4598.747, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2982.932, 2988.38, 2945.258, 2909.707, 2912.306,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 7.405647 };
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fex1149[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fey1149[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01012104, 0, 0, 0.4902513, 1.114179, 2.298883, 4.49239, 6.794618,
   9.539342, 12.56228, 15.31876, 18.23656, 20.78905, 23.03813, 25.11344, 26.80833, 28.12115, 29.1897, 29.70577, 30.20989, 30.71791, 30.75403, 30.79845, 30.84687,
   30.98445, 30.67472, 30.77042, 30.48116, 30.06852, 30.0657, 29.75702, 29.65345, 29.42182, 29.25767, 29.17212, 28.89346, 28.61859, 28.6565, 28.15142, 28.06749,
   27.91441, 27.8176, 27.48733, 27.19123, 27.09562, 27.00795, 26.6356, 26.49539, 26.36436, 26.27795, 25.90356, 25.63294, 25.70502, 25.38212, 25.29097, 25.22558,
   24.92476, 24.80042, 24.6634, 24.53999, 24.26628, 24.08383, 23.72964, 23.6759, 23.66835, 23.23312, 22.96142, 22.91759, 22.52292, 22.35894, 22.24226, 21.93388,
   21.61482, 21.69965, 21.46377, 21.19517, 21.04963, 20.79667, 20.56011, 20.25396, 20.05778, 19.87708, 19.76281, 19.53843, 19.27112, 19.18101, 18.91507, 18.81259,
   18.58383, 18.34016, 18.27691, 18.12752, 17.84806, 17.66667, 17.64996, 17.17929, 17.0938, 17.1049, 16.91555, 16.84887, 16.47559, 16.30397, 16.1896, 15.9202,
   16.07558, 15.86552, 15.70151, 15.57531, 15.3831, 15.31026, 15.24976, 15.0558, 14.86043, 14.5935, 14.6896, 14.29985, 14.36949, 14.23808, 14.12257, 13.94451,
   13.70483, 13.93695, 13.62997, 13.55092, 13.4382, 13.12466, 13.07932, 13.12827, 12.82704, 12.90326, 12.88396, 12.55856, 12.70212, 12.42759, 12.22086, 12.16519,
   12.03783, 11.90944, 11.85855, 11.6607, 11.76283, 11.59625, 11.47635, 11.49243, 11.33526, 11.23933, 11.10765, 11.3577, 11.21736, 11.00705, 11.01191, 10.80359,
   10.70456, 10.8268, 10.77188, 10.60883, 10.33866, 10.3451, 10.28291, 10.28004, 10.04407, 9.997674, 10.0104, 10.07722, 9.988615, 9.726399, 9.582084, 9.803083,
   9.626141, 9.617249, 9.592591, 9.357314, 9.343922, 9.359509, 9.269552, 9.176903, 9.355233, 9.069125, 9.150687, 9.026171, 8.908671, 9.070099, 8.860662, 8.82887,
   8.893743, 8.787454, 8.68564, 8.501259, 8.78108, 8.518145, 8.491483, 8.612476, 8.562206, 8.521194, 8.225238, 8.354943, 8.242104, 8.016534, 8.150123, 8.135632,
   8.182174, 8.210126, 7.976239, 8.027072, 7.85975, 7.880552, 8.03921, 7.826081, 7.762441, 7.762571, 7.900289, 7.70245, 7.685899, 7.579342, 7.730134, 7.761102,
   7.759341, 7.731048, 7.46726, 7.538228, 7.482077, 7.304844, 7.542533, 7.372131, 7.333421, 7.597716, 7.408022, 7.156682, 7.363068, 7.169044, 7.227205, 7.030958,
   7.111613, 7.228799, 7.001566, 7.106083, 7.188817, 6.830847, 6.938549, 7.047612, 7.106103, 7.013536, 6.803207, 7.027222, 6.911499, 6.753824, 6.917907, 6.705802,
   6.868159, 6.868563, 6.823142, 6.702275, 6.812608, 6.658929, 6.693697, 6.680908, 6.64501, 6.570238, 6.413438, 6.759646, 6.750589, 6.69744, 6.398207, 6.592925,
   6.55327, 6.518591, 6.516985, 6.53758, 6.323559, 6.279227, 6.419733, 6.446984, 6.570994, 6.326205, 6.432436, 6.406254, 6.31484, 6.299018, 6.214809, 6.38681,
   6.248451, 6.348072, 6.301317, 6.190772, 6.165097, 6.219794, 6.173797, 6.174715, 6.136294, 6.198387, 6.151006, 6.076469, 6.110736, 6.197624, 6.087253, 6.107383,
   5.970918, 6.112058, 5.95167, 6.057916, 5.89978, 6.051525, 6.15103, 5.974436, 5.863133, 5.77085, 5.922327, 5.924751, 5.748914, 5.921803, 5.986335, 5.693303,
   5.72872, 5.738664, 5.947379, 6.047912, 5.827449, 5.855511, 5.640204, 5.705311, 5.727765, 5.49882, 5.636627, 5.590881, 5.726134, 5.705344, 5.511558, 5.811073,
   5.81768, 5.731226, 5.584751, 5.759448, 5.49172, 5.656182, 5.688721, 5.586431, 5.690566, 5.528103, 5.691329, 5.50172, 5.625764, 5.492219, 5.764168, 5.517393,
   5.550669, 5.513024, 5.599394, 5.441082, 5.462408, 5.574928, 5.45585, 5.472333, 5.494008, 5.412234, 5.567181, 5.483546, 5.379611, 5.571485, 5.287232, 5.434328,
   5.387575, 5.254026, 5.357767, 5.527369, 5.449277, 5.401755, 5.487374, 5.459042, 5.423872, 5.321086, 5.282283, 5.379549, 5.409974, 5.332306, 5.290447, 5.283006,
   5.319115, 5.379412, 5.122219, 5.253509, 5.344899, 5.311254, 5.430821, 5.240821, 5.076663, 5.303687, 5.261866, 5.176283, 5.471235, 5.114539, 5.178032, 5.022873,
   5.104304, 5.269518, 5.335087, 5.194151, 4.882689, 5.058893, 5.102961, 5.210739, 5.334177, 5.143613, 5.218062, 5.248459, 5.007093, 4.944317, 5.111858, 5.067696,
   5.033449, 5.189201, 5.046427, 5.062009, 5.083869, 5.144113, 4.983923, 5.035176, 4.854091, 5.204239, 5.122967, 4.984229, 4.965364, 4.945221, 5.225661, 4.919564,
   5.067353, 4.845158, 4.884283, 5.046544, 4.926506, 4.816619, 4.934632, 4.853049, 4.926311, 5.051818, 4.78577, 5.027639, 4.901746, 4.773957, 5.109509, 4.831386,
   4.921743, 4.70012, 4.818151, 4.780821, 4.86379, 4.885659, 4.697699, 4.796321, 4.949922, 4.846463, 4.658325, 4.784128, 4.719536, 4.606241, 4.868532, 4.900366,
   4.866967, 4.898706, 4.732373, 4.86483, 4.78469, 4.713299, 4.909963, 4.817509, 4.745543, 4.703005, 4.7488, 4.652457, 4.56113, 4.842123, 4.912506, 4.632596,
   4.70753, 4.744922, 4.641412, 4.787907, 4.74088, 4.6806, 4.660748, 4.728806, 4.773376, 4.630644, 4.593302, 4.591944, 4.466886, 4.511721, 4.584976, 4.515297,
   4.54822, 4.426694, 4.71677, 4.699076, 4.551223, 4.63321, 4.704242, 4.580097, 4.524804, 4.616481, 4.456789, 4.481008, 4.542552, 4.393868, 4.498494, 4.588717,
   4.567984, 4.485162, 4.590529, 4.439549, 4.345834, 4.621658, 4.472724, 4.564354, 4.411263, 4.480612, 4.437869, 4.420225, 4.687433, 4.430432, 4.710888, 4.352537,
   4.42099, 4.278719, 4.32438, 4.495957, 4.505844, 4.377914, 4.517619, 4.475495, 4.192331, 4.28139, 4.636809, 4.368745, 4.226901, 4.324278, 4.299907, 4.558304,
   4.412111, 4.498623, 4.368787, 4.22989, 4.035235, 4.429131, 4.258346, 4.118471, 4.363013, 4.257218, 4.23217, 4.220098, 4.22856, 4.270932, 4.361421, 4.280426,
   4.343647, 4.447736, 4.334333, 4.341625, 4.176254, 4.227384, 4.321709, 4.125454, 4.161693, 4.071884, 4.358306, 4.358492, 4.092846, 4.157606, 4.085838, 4.214192,
   4.0504, 4.230015, 4.219589, 4.254874, 4.155606, 4.038636, 4.219957, 4.107051, 4.212036, 4.149913, 4.089103, 4.072916, 4.386827, 4.158781, 4.160984, 4.209052,
   4.017049, 3.965044, 3.924019, 4.139492, 4.215848, 4.138606, 4.053349, 4.12358, 4.097537, 3.879788, 4.092677, 4.106479, 4.019119, 4.00972, 3.938487, 4.068026,
   3.973256, 3.830241, 4.038494, 4.108183, 3.772721, 4.051822, 3.835057, 4.046812, 3.888863, 3.895947, 3.848721, 3.861809, 4.022983, 3.86749, 4.053901, 3.807392,
   4.051582, 4.060819, 3.685132, 3.926642, 3.884901, 3.852478, 3.957925, 3.812882, 3.826945, 3.776116, 4.001375, 3.981517, 3.955424, 3.937035, 3.874318, 3.722982,
   3.585431, 3.968087, 3.859533, 3.851767, 3.702976, 3.696382, 3.967308, 3.742924, 3.810464, 3.7982, 3.542529, 3.891341, 3.692234, 3.634269, 3.71831, 3.859622,
   3.837716, 3.623582, 3.637896, 3.786437, 3.734471, 3.618529, 3.665988, 3.874964, 3.754414, 3.453308, 3.630384, 3.61951, 3.68736, 3.816409, 3.645482, 3.673449,
   3.662864, 3.645921, 3.562988, 3.684143, 3.678197, 3.560651, 3.850184, 3.614813, 3.732563, 3.600543, 3.715798, 3.63308, 3.829539, 3.487336, 3.472281, 3.640716,
   3.454423, 3.649501, 3.369586, 3.425004, 3.573309, 3.565952, 3.548315, 3.482027, 3.411163, 3.481967, 3.408181, 3.359742, 3.393786, 3.395796, 3.61406, 3.516645,
   3.383731, 3.340407, 3.373518, 3.621254, 3.476213, 3.378827, 3.323687, 3.269981, 3.54985, 3.413317, 3.40703, 3.339708, 3.480839, 3.293386, 3.388744, 3.330142,
   3.37906, 3.197503, 3.433096, 3.227998, 3.293181, 3.334999, 3.441027, 3.249849, 3.156875, 3.369559, 3.188982, 3.298233, 3.494622, 3.340449, 3.281928, 3.428631,
   3.255427, 3.237372, 3.46005, 3.193154, 3.3702, 3.255235, 3.136063, 3.337263, 2.933336, 3.170904, 3.11843, 3.123245, 3.20468, 3.185911, 3.192629, 3.243196,
   3.12376, 3.075921, 3.231781, 3.00759, 3.028118, 3.185574, 3.111186, 3.006769, 3.255533, 3.276292, 3.130049, 3.098429, 3.111284, 3.02594, 3.084407, 3.268929,
   3.218648, 3.042743, 2.985232, 3.005675, 3.124881, 3.109272, 3.039559, 3.067027, 3.274031, 3.000879, 2.999634, 2.978928, 3.035965, 2.972738, 3.198833, 3.054713,
   2.898853, 2.840634, 3.149871, 3.021057, 3.116208, 3.103243, 2.920017, 3.039474, 2.862881, 3.119774, 2.874693, 3.005697, 2.923881, 2.801219, 2.906125, 3.154066,
   3.035459, 2.861445, 3.02523, 2.877616, 2.826556, 2.952882, 2.914866, 2.945324, 2.917548, 2.711503, 2.912728, 2.835912, 3.062647, 2.916077, 2.791499, 3.006601,
   2.791892, 2.805659, 2.748665, 2.876658, 2.881856, 2.960447, 2.868569, 2.854533, 2.870475, 2.887874, 2.651431, 2.661124, 2.832837, 2.551066, 2.673671, 2.703667,
   2.740687, 2.89227, 2.734563, 2.929607, 2.612435, 2.739437, 2.557167, 2.711773, 2.626895, 3.122523, 2.732302, 2.738959, 2.695964, 2.832257, 2.690056, 2.756122,
   2.62125, 2.703102, 2.703823, 2.7593, 2.680347, 2.628463, 2.747225, 2.537554, 2.792569, 2.596224, 2.667304, 2.581732, 2.703071, 2.621036, 2.569148, 2.575199,
   2.791217, 2.489185, 2.381073, 2.718684, 2.599153, 2.494427, 2.573947, 2.634506, 2.47047, 2.621727, 2.512096, 2.642632, 2.42103, 2.485568, 2.556096, 2.455133,
   2.636409, 2.480574, 2.643892, 2.420573, 2.525802, 2.545051, 2.455751, 2.573585, 2.611504, 2.557864, 2.479034, 2.379396, 2.397071, 2.589202, 2.420786, 2.56588,
   2.318575, 2.590278, 2.397787, 2.504237, 2.544385, 2.366525, 2.396802, 2.502526, 2.421499, 2.45719, 2.410663, 2.429597, 2.37969, 2.331255, 2.410774, 2.382519,
   2.371867, 2.241199, 2.387141, 2.503621, 2.371453, 2.413319, 2.159828, 2.277523, 2.492622, 2.319023, 2.526416, 2.29498, 2.462205, 2.18664, 2.488172, 2.159233,
   2.223424, 2.328844, 2.34534, 2.222962, 2.186445, 2.221947, 2.185395, 2.295139, 2.284482, 2.170564, 2.276113, 2.31178, 2.267124, 2.439131, 2.053706, 2.267117,
   2.111063, 2.176346, 2.267227, 2.176112, 2.301084, 2.276029, 2.187248, 2.162675, 2.121673, 2.150791, 2.235417, 2.092866, 2.222116, 2.138381, 2.127359, 2.274271,
   2.113036, 2.093365, 2.283933, 2.112703, 1.986268, 2.222981, 2.099522, 1.944639, 2.084566, 1.973635, 1.953004, 2.09124, 2.091416, 1.994051, 2.158402, 2.045049,
   2.129555, 2.129864, 2.033659, 1.98505, 2.035015, 2.05263, 2.131307, 2.149277, 2.005755, 2.082442, 2.004824, 2.212498, 2.150015, 2.169707, 1.952962, 1.921736,
   2.169111, 2.003488, 1.900759, 2.103212, 2.0988, 2.08138, 1.891168 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_DHZfirst_2b1c_Z_mass_fx1149,Graph_from_VH_DHZfirst_2b1c_Z_mass_fy1149,Graph_from_VH_DHZfirst_2b1c_Z_mass_fex1149,Graph_from_VH_DHZfirst_2b1c_Z_mass_fey1149);
   gre->SetName("Graph_from_VH_DHZfirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1149 = new TH1F("Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1149","",1000,0,2200);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1149->SetMinimum(-497.0294);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1149->SetMaximum(5095.509);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1149->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1149->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1149->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1149->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1149->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1149->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1149->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1149->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1149->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1149->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1149->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1149);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_Z_mass","Data (BTagCSV, 2016)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_mass_DHZfirst_VR_16->cd();
  
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
   
   TH1D *data_mc_ratio__150 = new TH1D("data_mc_ratio__150","",1000,0,2000);
   data_mc_ratio__150->SetBinContent(26,0.9952299);
   data_mc_ratio__150->SetBinContent(27,1.00645);
   data_mc_ratio__150->SetBinContent(28,1.006597);
   data_mc_ratio__150->SetBinContent(29,1.01353);
   data_mc_ratio__150->SetBinContent(30,1.011363);
   data_mc_ratio__150->SetBinContent(61,1.058355);
   data_mc_ratio__150->SetBinContent(62,1.071149);
   data_mc_ratio__150->SetBinContent(63,1.052539);
   data_mc_ratio__150->SetBinContent(64,1.067118);
   data_mc_ratio__150->SetBinContent(65,1.038009);
   data_mc_ratio__150->SetBinContent(1000,0.9452246);
   data_mc_ratio__150->SetBinContent(1001,1.141442);
   data_mc_ratio__150->SetBinError(26,0.01605209);
   data_mc_ratio__150->SetBinError(27,0.01558002);
   data_mc_ratio__150->SetBinError(28,0.01526373);
   data_mc_ratio__150->SetBinError(29,0.01506869);
   data_mc_ratio__150->SetBinError(30,0.01482975);
   data_mc_ratio__150->SetBinError(61,0.01883623);
   data_mc_ratio__150->SetBinError(62,0.01893246);
   data_mc_ratio__150->SetBinError(63,0.01890417);
   data_mc_ratio__150->SetBinError(64,0.01915056);
   data_mc_ratio__150->SetBinError(65,0.01887913);
   data_mc_ratio__150->SetBinError(1000,0.3572613);
   data_mc_ratio__150->SetBinError(1001,0.01584484);
   data_mc_ratio__150->SetMinimum(0.4);
   data_mc_ratio__150->SetMaximum(1.6);
   data_mc_ratio__150->SetEntries(669.6036);
   data_mc_ratio__150->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__150->SetLineColor(ci);
   data_mc_ratio__150->SetLineWidth(2);
   data_mc_ratio__150->SetMarkerStyle(20);
   data_mc_ratio__150->SetMarkerSize(1.2);
   data_mc_ratio__150->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__150->GetXaxis()->SetRange(1,150);
   data_mc_ratio__150->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__150->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__150->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__150->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__150->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__150->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__150->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__150->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__150->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__150->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__150->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__150->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__150->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__150->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__150->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__150->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1150[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1150[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1150[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1150[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0.007280698, 0.007040011, 0.006875541, 0.006768046, 0.006679626, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.008593204, 0.008601655, 0.008617962, 0.00869193, 0.008661719,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.2553684 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1150,Graph_from_mc_statistical_error_fy1150,Graph_from_mc_statistical_error_fex1150,Graph_from_mc_statistical_error_fey1150);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1150 = new TH1F("Graph_Graph_from_mc_statistical_error1150","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1150->SetMinimum(0.6935579);
   Graph_Graph_from_mc_statistical_error1150->SetMaximum(1.306442);
   Graph_Graph_from_mc_statistical_error1150->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1150->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1150->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1150->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1150->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1150->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1150->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1150->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1150->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1150->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1150->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1150);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_DHZfirst_VR_16->cd();
   Z_mass_DHZfirst_VR_16->Modified();
   Z_mass_DHZfirst_VR_16->cd();
   Z_mass_DHZfirst_VR_16->SetSelected(Z_mass_DHZfirst_VR_16);
}
