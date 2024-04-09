#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_DHZfirst_VR_18()
{
//=========Macro generated from canvas: Z_mass_DHZfirst_VR_18/Z_mass_DHZfirst_VR_18
//=========  (Mon Apr  8 13:43:41 2024) by ROOT version 6.28/10
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
   topPad->Range(-45.96762,-3.932641,315.7258,3938.709);
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
   st->SetMaximum(3544.444);
   
   TH1F *st_stack_91 = new TH1F("st_stack_91","",1000,0,2000);
   st_stack_91->SetMinimum(0.01);
   st_stack_91->SetMaximum(3544.444);
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
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(26,432.599);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(27,553.2174);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(28,715.938);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(29,889.1615);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(30,1024.587);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(61,1325.225);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(62,1289.351);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(63,1297.674);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(64,1259.803);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(65,1267.129);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(1000,12.73107);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(1001,6057.014);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(7,0.01245575);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(8,0.01217397);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(9,0.0171384);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(12,0.01409757);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(13,0.0131778);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(14,0.01817653);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(15,0.01191904);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(16,0.4853838);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(17,0.6175551);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(18,1.009616);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(19,1.895742);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(20,2.564157);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(21,3.735202);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(22,4.820925);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(23,6.075895);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(24,7.544046);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(25,8.892307);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(26,10.00354);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(27,11.76823);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(28,12.95189);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(29,14.40512);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(30,15.46649);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(31,16.35274);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(32,17.26151);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(33,18.09851);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(34,18.80008);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(35,19.17746);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(36,19.56175);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(37,20.00565);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(38,20.42984);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(39,20.58866);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(40,20.86171);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(41,21.01341);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(42,20.86614);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(43,21.51853);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(44,21.0472);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(45,21.33342);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(46,20.9339);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(47,20.93393);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(48,20.97355);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(49,20.661);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(50,20.74321);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(51,20.42053);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(52,20.91656);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(53,19.99118);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(54,19.8692);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(55,19.79361);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(56,19.76494);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(57,19.57849);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(58,19.26354);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(59,19.83001);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(60,19.4352);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(61,19.27913);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(62,19.22127);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(63,19.1225);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(64,18.88566);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(65,18.83242);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(66,18.92042);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(67,18.68512);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(68,18.44026);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(69,18.809);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(70,18.35262);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(71,18.37422);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(72,18.57168);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(73,19.95326);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(74,18.04981);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(75,17.71674);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(76,17.97253);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(77,17.68917);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(78,17.67124);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(79,17.77407);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(80,17.61018);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(81,17.68619);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(82,17.3983);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(83,17.28696);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(84,17.31825);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(85,17.08758);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(86,16.89372);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(87,17.02022);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(88,16.62793);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(89,16.68561);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(90,16.63305);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(91,16.23774);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(92,16.18172);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(93,16.45079);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(94,16.4833);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(95,16.17277);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(96,15.99766);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(97,16.15932);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(98,15.67726);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(99,15.47475);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(100,15.57633);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(101,15.36418);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(102,15.23759);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(103,15.3159);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(104,14.88749);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(105,14.87018);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(106,14.80104);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(107,14.69011);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(108,14.52105);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(109,14.55282);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(110,14.39518);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(111,14.45815);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(112,14.65309);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(113,14.16539);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(114,13.93024);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(115,13.96835);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(116,13.8429);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(117,13.98227);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(118,13.80566);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(119,13.57328);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(120,13.43002);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(121,13.21818);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(122,13.22859);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(123,13.27412);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(124,13.1001);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(125,13.06839);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(126,13.15777);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(127,12.55957);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(128,12.74457);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(129,12.75466);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(130,12.67788);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(131,12.6721);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(132,12.64667);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(133,12.38222);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(134,12.46169);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(135,12.3901);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(136,12.16199);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(137,12.06684);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(138,12.06822);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(139,12.0245);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(140,12.19258);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(141,11.95909);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(142,11.57628);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(143,11.73929);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(144,11.73609);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(145,11.62294);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(146,11.62539);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(147,11.61488);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(148,11.43456);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(149,11.3236);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(150,11.23887);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(151,11.39526);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(152,12.49187);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(153,11.06004);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(154,12.19473);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(155,10.96576);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(156,11.20495);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(157,10.79401);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(158,11.12659);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(159,10.85686);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(160,11.05901);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(161,10.97266);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(162,10.75715);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(163,10.67472);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(164,10.54979);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(165,10.65493);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(166,10.42194);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(167,10.42377);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(168,10.40237);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(169,10.37208);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(170,10.60523);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(171,10.36326);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(172,10.14754);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(173,10.25738);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(174,10.05841);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(175,10.16121);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(176,10.06714);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(177,9.961894);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(178,10.19919);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(179,9.975925);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(180,10.03491);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(181,9.807491);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(182,9.784256);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(183,9.737743);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(184,10.35188);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(185,9.780551);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(186,9.738925);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(187,9.544436);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(188,9.468682);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(189,9.790086);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(190,9.347401);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(191,9.318911);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(192,9.480598);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(193,9.276095);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(194,9.451104);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(195,9.198344);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(196,9.239744);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(197,9.276423);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(198,9.317334);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(199,9.042809);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(200,9.305835);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(201,9.081538);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(202,9.148673);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(203,9.112048);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(204,9.364473);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(205,8.912628);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(206,8.764744);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(207,8.929411);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(208,8.879048);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(209,8.876317);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(210,9.467358);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(211,8.760257);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(212,8.860228);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(213,8.749368);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(214,8.770815);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(215,8.688102);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(216,10.95161);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(217,8.523399);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(218,8.626795);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(219,8.490699);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(220,8.469047);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(221,8.458007);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(222,8.434409);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(223,8.328048);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(224,8.412391);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(225,8.342049);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(226,8.36686);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(227,8.69257);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(228,8.440582);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(229,8.278305);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(230,8.20813);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(231,8.336208);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(232,8.998664);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(233,8.193336);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(234,8.114949);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(235,8.164828);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(236,7.831122);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(237,8.000998);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(238,7.944725);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(239,7.87306);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(240,7.920867);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(241,8.013461);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(242,8.001469);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(243,7.976206);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(244,7.898402);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(245,7.752353);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(246,7.627013);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(247,7.879345);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(248,7.962797);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(249,8.312917);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(250,7.66553);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(251,7.670623);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(252,7.844187);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(253,7.695318);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(254,7.84016);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(255,7.726207);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(256,7.378047);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(257,7.793739);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(258,7.723192);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(259,7.94191);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(260,7.347593);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(261,7.506332);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(262,7.417794);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(263,7.29953);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(264,7.410741);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(265,7.44681);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(266,7.400882);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(267,7.381135);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(268,7.340622);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(269,7.086087);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(270,7.424914);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(271,7.115582);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(272,7.272214);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(273,7.272452);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(274,7.349315);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(275,7.01506);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(276,7.127092);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(277,7.790927);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(278,6.995716);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(279,7.245355);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(280,7.079914);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(281,9.22981);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(282,7.04934);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(283,7.131963);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(284,7.34066);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(285,7.080092);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(286,7.120176);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(287,7.033023);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(288,7.20587);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(289,6.973349);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(290,6.835706);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(291,6.908809);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(292,6.921552);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(293,6.989645);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(294,7.021015);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(295,6.892121);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(296,6.976197);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(297,6.806966);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(298,6.768489);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(299,6.992513);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(300,6.789699);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(301,6.810043);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(302,6.751063);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(303,6.691553);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(304,6.753919);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(305,6.917287);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(306,6.718961);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(307,6.771322);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(308,6.655222);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(309,6.528534);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(310,6.739355);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(311,6.453578);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(312,6.652966);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(313,6.541715);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(314,6.738065);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(315,6.989574);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(316,6.683753);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(317,8.053357);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(318,6.611133);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(319,6.450679);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(320,6.59409);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(321,6.805983);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(322,6.605937);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(323,6.462045);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(324,6.514074);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(325,6.504918);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(326,6.479041);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(327,6.721281);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(328,6.571628);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(329,6.691578);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(330,6.431419);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(331,6.415696);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(332,6.499541);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(333,6.615448);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(334,6.408326);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(335,6.343515);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(336,6.476698);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(337,6.39044);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(338,6.416848);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(339,6.35194);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(340,6.59415);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(341,6.309145);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(342,6.255759);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(343,6.209178);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(344,6.33626);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(345,6.32891);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(346,6.400233);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(347,6.468881);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(348,6.405397);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(349,6.348966);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(350,6.353356);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(351,6.219411);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(352,6.222309);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(353,6.243945);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(354,6.444791);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(355,6.239413);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(356,6.326863);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(357,6.162607);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(358,6.116526);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(359,6.298699);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(360,6.181772);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(361,6.313699);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(362,6.395642);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(363,6.257175);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(364,6.021431);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(365,6.132671);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(366,6.110577);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(367,6.196615);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(368,6.304124);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(369,6.300025);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(370,6.284896);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(371,6.290541);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(372,6.1764);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(373,6.166165);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(374,6.127295);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(375,6.134027);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(376,5.998133);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(377,6.003139);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(378,6.166793);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(379,5.993556);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(380,6.29097);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(381,5.905754);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(382,5.906249);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(383,6.014054);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(384,5.835512);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(385,5.971084);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(386,6.143669);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(387,5.910158);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(388,5.923792);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(389,5.944297);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(390,6.004405);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(391,6.029236);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(392,5.999042);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(393,6.001012);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(394,6.268312);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(395,5.890096);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(396,6.119033);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(397,6.107021);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(398,5.988819);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(399,6.060482);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(400,5.930817);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(401,5.905457);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(402,5.690538);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(403,5.851897);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(404,6.14611);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(405,5.890829);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(406,5.915139);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(407,5.909398);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(408,5.832712);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(409,5.779149);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(410,5.779725);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(411,6.065939);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(412,5.658385);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(413,5.859934);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(414,5.727197);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(415,5.818333);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(416,5.844554);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(417,5.947392);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(418,5.814724);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(419,6.046921);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(420,6.007683);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(421,5.843966);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(422,5.541195);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(423,5.744632);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(424,5.948744);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(425,5.978599);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(426,5.711527);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(427,5.73383);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(428,5.888962);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(429,5.777968);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(430,5.622579);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(431,5.759705);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(432,5.666222);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(433,5.663896);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(434,5.614308);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(435,5.825207);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(436,5.570767);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(437,5.674189);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(438,5.527778);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(439,5.76318);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(440,5.577626);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(441,5.658582);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(442,5.538627);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(443,5.555157);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(444,5.796438);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(445,5.656759);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(446,5.695498);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(447,5.6647);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(448,5.808844);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(449,5.508756);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(450,5.67755);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(451,5.63547);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(452,5.706204);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(453,5.628311);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(454,5.54227);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(455,5.665045);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(456,5.476743);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(457,5.616825);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(458,5.409648);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(459,5.569917);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(460,5.418748);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(461,5.406653);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(462,5.44505);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(463,5.432882);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(464,5.680511);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(465,5.411359);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(466,5.477247);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(467,5.514406);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(468,5.44705);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(469,5.397441);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(470,5.446512);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(471,5.178318);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(472,5.482813);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(473,5.363821);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(474,5.424757);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(475,5.321156);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(476,5.394151);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(477,5.445549);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(478,5.567433);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(479,5.118785);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(480,5.547265);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(481,5.494506);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(482,5.19131);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(483,5.166996);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(484,5.359911);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(485,5.0324);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(486,5.42033);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(487,5.264588);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(488,5.449187);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(489,5.324885);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(490,5.245641);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(491,5.235741);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(492,5.292846);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(493,5.338377);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(494,5.228506);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(495,5.287314);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(496,5.274623);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(497,5.186834);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(498,5.05755);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(499,5.159988);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(500,5.037916);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(501,5.294177);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(502,5.414235);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(503,5.020932);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(504,5.281552);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(505,5.136284);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(506,5.192422);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(507,5.002218);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(508,5.284264);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(509,5.098259);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(510,5.038289);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(511,5.176381);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(512,5.35513);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(513,5.021417);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(514,5.109345);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(515,5.201949);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(516,4.89881);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(517,5.148861);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(518,5.106389);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(519,5.002687);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(520,5.189573);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(521,5.046634);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(522,4.91585);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(523,4.902234);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(524,4.801936);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(525,5.210318);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(526,4.747806);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(527,5.014832);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(528,5.005201);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(529,4.829271);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(530,5.010356);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(531,5.20622);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(532,4.669174);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(533,4.896204);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(534,5.029894);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(535,5.008106);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(536,4.868473);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(537,4.952455);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(538,4.818721);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(539,4.745368);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(540,5.079168);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(541,5.032722);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(542,4.730106);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(543,4.863737);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(544,4.767733);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(545,4.785116);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(546,4.909744);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(547,4.875719);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(548,4.71506);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(549,4.938427);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(550,5.085557);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(551,4.848341);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(552,4.624992);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(553,4.748974);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(554,4.765454);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(555,4.494428);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(556,4.682624);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(557,4.628268);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(558,4.703892);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(559,4.61543);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(560,4.640579);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(561,5.009154);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(562,4.80917);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(563,4.709696);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(564,4.717507);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(565,4.492567);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(566,4.613883);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(567,4.549641);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(568,4.719398);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(569,4.855517);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(570,4.855851);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(571,4.731143);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(572,4.648431);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(573,4.506866);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(574,4.482534);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(575,4.529927);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(576,4.737878);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(577,4.421344);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(578,4.484977);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(579,4.551801);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(580,4.494866);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(581,4.569759);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(582,4.88141);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(583,4.512074);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(584,4.400285);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(585,4.602078);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(586,4.441685);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(587,4.677387);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(588,4.295878);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(589,4.530199);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(590,4.518971);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(591,4.607844);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(592,4.479106);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(593,4.368384);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(594,4.360253);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(595,4.462168);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(596,4.32275);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(597,11.4928);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(598,4.618611);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(599,4.281542);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(600,4.402032);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(601,4.390697);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(602,4.510809);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(603,4.624787);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(604,4.29749);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(605,4.486379);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(606,4.335086);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(607,4.406713);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(608,4.259249);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(609,4.520193);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(610,4.382447);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(611,4.529575);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(612,4.321588);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(613,4.340473);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(614,4.13571);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(615,4.396112);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(616,4.554969);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(617,4.230907);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(618,4.430617);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(619,4.190743);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(620,4.131014);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(621,4.332516);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(622,4.33519);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(623,4.099948);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(624,4.096231);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(625,4.2425);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(626,4.13307);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(627,4.207426);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(628,4.385047);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(629,4.373358);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(630,4.410018);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(631,4.384809);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(632,4.29735);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(633,4.263513);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(634,4.336525);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(635,4.080272);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(636,4.218501);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(637,4.054304);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(638,4.310506);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(639,4.256542);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(640,4.21903);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(641,4.216667);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(642,3.878245);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(643,4.111152);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(644,4.220781);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(645,4.155574);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(646,4.022737);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(647,3.991039);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(648,4.163688);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(649,4.243296);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(650,4.16571);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(651,4.110738);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(652,4.023011);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(653,4.17076);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(654,4.062672);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(655,4.127573);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(656,4.271954);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(657,4.198438);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(658,4.191557);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(659,4.006215);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(660,3.994573);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(661,4.058952);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(662,3.896599);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(663,3.920062);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(664,4.133986);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(665,4.013164);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(666,3.909979);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(667,3.911311);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(668,4.017678);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(669,3.925503);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(670,4.008315);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(671,3.94406);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(672,3.960337);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(673,3.794418);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(674,3.888116);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(675,3.949174);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(676,3.955893);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(677,3.900195);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(678,3.998591);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(679,3.960493);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(680,3.739565);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(681,4.130626);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(682,3.945127);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(683,3.938099);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(684,3.90431);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(685,3.969784);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(686,3.951612);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(687,4.110373);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(688,4.033998);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(689,3.699638);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(690,3.849307);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(691,3.89875);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(692,3.894393);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(693,3.764899);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(694,3.716201);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(695,3.831896);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(696,3.859897);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(697,3.653687);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(698,4.103503);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(699,3.773824);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(700,3.790502);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(701,3.860722);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(702,3.808338);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(703,3.927609);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(704,3.705166);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(705,3.70578);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(706,3.750963);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(707,3.831037);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(708,3.800714);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(709,3.860064);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(710,3.631067);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(711,3.706128);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(712,3.544478);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(713,3.665216);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(714,3.567033);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(715,3.695763);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(716,3.604397);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(717,3.749089);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(718,3.567523);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(719,3.724092);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(720,3.63828);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(721,3.475278);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(722,3.732895);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(723,4.16859);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(724,3.490962);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(725,3.588777);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(726,3.72818);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(727,3.567076);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(728,3.490798);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(729,3.54646);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(730,3.535476);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(731,3.580463);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(732,3.472108);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(733,3.728632);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(734,3.577557);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(735,3.680795);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(736,3.639131);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(737,3.609816);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(738,3.490458);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(739,3.453588);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(740,3.606282);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(741,3.544258);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(742,3.543836);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(743,3.452275);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(744,3.650703);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(745,3.681533);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(746,3.448798);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(747,3.417314);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(748,3.594642);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(749,3.500086);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(750,3.645467);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(751,3.449426);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(752,3.494372);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(753,3.507248);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(754,3.502705);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(755,3.454567);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(756,3.464792);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(757,3.416264);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(758,3.388883);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(759,3.500383);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(760,3.479274);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(761,3.874361);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(762,3.466054);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(763,3.600042);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(764,3.499927);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(765,3.351965);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(766,3.606868);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(767,3.385554);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(768,3.407017);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(769,3.613708);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(770,3.567873);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(771,3.305124);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(772,3.459812);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(773,3.511607);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(774,3.372799);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(775,3.369538);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(776,3.484312);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(777,3.396933);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(778,3.334185);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(779,3.369529);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(780,3.446821);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(781,3.349101);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(782,3.177648);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(783,3.269869);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(784,3.313482);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(785,3.300556);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(786,3.121063);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(787,3.302565);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(788,3.128424);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(789,3.309599);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(790,6.493234);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(791,3.291196);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(792,3.110663);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(793,3.238176);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(794,3.42997);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(795,3.18415);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(796,3.146478);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(797,3.287483);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(798,3.257596);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(799,3.273469);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(800,3.265996);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(801,3.270005);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(802,3.269148);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(803,3.180457);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(804,3.228032);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(805,3.462749);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(806,3.251824);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(807,3.236328);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(808,3.337289);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(809,3.316784);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(810,3.169357);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(811,3.322022);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(812,3.126015);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(813,3.142811);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(814,3.189389);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(815,3.48647);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(816,3.151109);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(817,3.309082);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(818,3.176837);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(819,3.226065);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(820,3.263826);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(821,3.263265);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(822,3.051015);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(823,3.072348);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(824,3.381771);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(825,3.030721);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(826,3.114661);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(827,3.106366);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(828,3.03668);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(829,3.058553);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(830,3.208285);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(831,2.957944);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(832,3.233786);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(833,3.16613);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(834,3.07606);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(835,2.895172);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(836,3.198534);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(837,3.013695);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(838,3.203764);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(839,2.984224);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(840,2.938669);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(841,3.018485);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(842,3.109861);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(843,2.988206);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(844,3.040804);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(845,2.990436);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(846,2.999409);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(847,3.085782);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(848,3.067892);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(849,2.963988);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(850,3.009928);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(851,2.968137);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(852,3.027167);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(853,2.886393);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(854,2.916155);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(855,3.052016);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(856,3.057811);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(857,2.933694);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(858,2.900317);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(859,2.973022);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(860,2.851223);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(861,2.863866);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(862,2.90307);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(863,3.09422);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(864,2.734808);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(865,3.106059);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(866,3.016195);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(867,2.890567);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(868,2.812931);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(869,2.953745);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(870,2.894986);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(871,2.674647);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(872,2.930813);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(873,2.907251);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(874,2.880153);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(875,2.870258);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(876,2.843586);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(877,2.70799);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(878,2.797379);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(879,2.842973);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(880,2.871012);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(881,2.908131);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(882,3.001262);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(883,2.980152);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(884,2.732074);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(885,2.749138);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(886,2.83704);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(887,2.68536);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(888,2.708587);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(889,2.955757);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(890,2.873294);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(891,2.939579);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(892,2.83153);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(893,2.669583);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(894,2.737966);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(895,2.840238);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(896,2.887291);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(897,2.802811);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(898,2.971829);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(899,2.775878);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(900,2.510759);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(901,2.738056);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(902,2.630291);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(903,2.771709);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(904,2.616108);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(905,2.954868);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(906,2.766088);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(907,2.615047);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(908,2.782703);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(909,2.775414);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(910,2.82954);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(911,2.76693);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(912,3.460327);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(913,5.839517);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(914,2.527147);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(915,2.529708);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(916,2.542805);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(917,2.548906);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(918,2.896784);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(919,2.75482);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(920,2.610897);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(921,2.884982);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(922,2.856042);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(923,2.735033);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(924,2.777173);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(925,2.716287);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(926,2.783159);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(927,2.551404);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(928,2.78342);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(929,2.542729);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(930,2.578214);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(931,2.476297);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(932,2.719825);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(933,2.793191);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(934,2.587462);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(935,2.732123);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(936,2.630537);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(937,2.626438);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(938,2.666062);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(939,2.614404);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(940,2.625967);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(941,2.487303);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(942,2.451706);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(943,2.740146);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(944,2.627307);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(945,2.45057);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(946,2.620502);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(947,2.523354);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(948,2.742896);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(949,2.527925);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(950,2.595055);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(951,2.594231);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(952,2.590164);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(953,2.581852);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(954,2.540358);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(955,2.546741);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(956,2.693579);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(957,2.58842);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(958,2.615287);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(959,2.529311);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(960,3.118656);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(961,2.553626);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(962,2.497803);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(963,2.455994);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(964,2.425804);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(965,2.440914);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(966,2.676528);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(967,2.580447);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(968,2.309653);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(969,2.457782);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(970,2.511854);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(971,2.416787);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(972,2.425044);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(973,2.691293);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(974,2.461129);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(975,2.372052);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(976,2.260776);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(977,2.34678);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(978,2.406517);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(979,2.385964);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(980,2.491864);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(981,2.528522);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(982,2.636612);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(983,2.437873);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(984,2.594901);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(985,2.501989);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(986,2.420354);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(987,2.596652);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(988,2.400733);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(989,2.277941);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(990,2.423804);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(991,2.254872);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(992,2.300116);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(993,2.449686);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(994,2.327335);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(995,2.382874);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(996,2.461931);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(997,2.51153);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(998,2.406942);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(999,2.185382);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(1000,2.385532);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(1001,38.83093);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetEntries(875069.6);

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
   VH_DHZfirst_Z_mass__181->SetBinContent(26,427);
   VH_DHZfirst_Z_mass__181->SetBinContent(27,591);
   VH_DHZfirst_Z_mass__181->SetBinContent(28,701);
   VH_DHZfirst_Z_mass__181->SetBinContent(29,867);
   VH_DHZfirst_Z_mass__181->SetBinContent(30,1016);
   VH_DHZfirst_Z_mass__181->SetBinContent(61,1595);
   VH_DHZfirst_Z_mass__181->SetBinContent(62,1516);
   VH_DHZfirst_Z_mass__181->SetBinContent(63,1526);
   VH_DHZfirst_Z_mass__181->SetBinContent(64,1481);
   VH_DHZfirst_Z_mass__181->SetBinContent(65,1521);
   VH_DHZfirst_Z_mass__181->SetBinContent(1000,12);
   VH_DHZfirst_Z_mass__181->SetBinContent(1001,6587);
   VH_DHZfirst_Z_mass__181->SetEntries(256402);

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
   0, 0, 0, 0, 0, 0, 0, 0, 432.599, 553.2174, 715.938, 889.1615, 1024.587, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1325.225, 1289.351, 1297.674, 1259.803, 1267.129,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 12.73107 };
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
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fey1181[1000] = { 0, 0, 0, 0, 0, 0, 0.01245575, 0.01217397, 0.0171384, 0, 0, 0.01409757, 0.0131778, 0.01817653, 0.01191904, 0.4853838, 0.6175551,
   1.009616, 1.895742, 2.564157, 3.735202, 4.820925, 6.075895, 7.544046, 8.892307, 10.00354, 11.76823, 12.95189, 14.40512, 15.46649, 16.35274, 17.26151, 18.09851,
   18.80008, 19.17746, 19.56175, 20.00565, 20.42984, 20.58866, 20.86171, 21.01341, 20.86614, 21.51853, 21.0472, 21.33342, 20.9339, 20.93393, 20.97355, 20.661,
   20.74321, 20.42053, 20.91656, 19.99118, 19.8692, 19.79361, 19.76494, 19.57849, 19.26354, 19.83001, 19.4352, 19.27913, 19.22127, 19.1225, 18.88566, 18.83242,
   18.92042, 18.68512, 18.44026, 18.809, 18.35262, 18.37422, 18.57168, 19.95326, 18.04981, 17.71674, 17.97253, 17.68917, 17.67124, 17.77407, 17.61018, 17.68619,
   17.3983, 17.28696, 17.31825, 17.08758, 16.89372, 17.02022, 16.62793, 16.68561, 16.63305, 16.23774, 16.18172, 16.45079, 16.4833, 16.17277, 15.99766, 16.15932,
   15.67726, 15.47475, 15.57633, 15.36418, 15.23759, 15.3159, 14.88749, 14.87018, 14.80104, 14.69011, 14.52105, 14.55282, 14.39518, 14.45815, 14.65309, 14.16539,
   13.93024, 13.96835, 13.8429, 13.98227, 13.80566, 13.57328, 13.43002, 13.21818, 13.22859, 13.27412, 13.1001, 13.06839, 13.15777, 12.55957, 12.74457, 12.75466,
   12.67788, 12.6721, 12.64667, 12.38222, 12.46169, 12.3901, 12.16199, 12.06684, 12.06822, 12.0245, 12.19258, 11.95909, 11.57628, 11.73929, 11.73609, 11.62294,
   11.62539, 11.61488, 11.43456, 11.3236, 11.23887, 11.39526, 12.49187, 11.06004, 12.19473, 10.96576, 11.20495, 10.79401, 11.12659, 10.85686, 11.05901, 10.97266,
   10.75715, 10.67472, 10.54979, 10.65493, 10.42194, 10.42377, 10.40237, 10.37208, 10.60523, 10.36326, 10.14754, 10.25738, 10.05841, 10.16121, 10.06714, 9.961894,
   10.19919, 9.975925, 10.03491, 9.807491, 9.784256, 9.737743, 10.35188, 9.780551, 9.738925, 9.544436, 9.468682, 9.790086, 9.347401, 9.318911, 9.480598, 9.276095,
   9.451104, 9.198344, 9.239744, 9.276423, 9.317334, 9.042809, 9.305835, 9.081538, 9.148673, 9.112048, 9.364473, 8.912628, 8.764744, 8.929411, 8.879048, 8.876317,
   9.467358, 8.760257, 8.860228, 8.749368, 8.770815, 8.688102, 10.95161, 8.523399, 8.626795, 8.490699, 8.469047, 8.458007, 8.434409, 8.328048, 8.412391, 8.342049,
   8.36686, 8.69257, 8.440582, 8.278305, 8.20813, 8.336208, 8.998664, 8.193336, 8.114949, 8.164828, 7.831122, 8.000998, 7.944725, 7.87306, 7.920867, 8.013461,
   8.001469, 7.976206, 7.898402, 7.752353, 7.627013, 7.879345, 7.962797, 8.312917, 7.66553, 7.670623, 7.844187, 7.695318, 7.84016, 7.726207, 7.378047, 7.793739,
   7.723192, 7.94191, 7.347593, 7.506332, 7.417794, 7.29953, 7.410741, 7.44681, 7.400882, 7.381135, 7.340622, 7.086087, 7.424914, 7.115582, 7.272214, 7.272452,
   7.349315, 7.01506, 7.127092, 7.790927, 6.995716, 7.245355, 7.079914, 9.22981, 7.04934, 7.131963, 7.34066, 7.080092, 7.120176, 7.033023, 7.20587, 6.973349,
   6.835706, 6.908809, 6.921552, 6.989645, 7.021015, 6.892121, 6.976197, 6.806966, 6.768489, 6.992513, 6.789699, 6.810043, 6.751063, 6.691553, 6.753919, 6.917287,
   6.718961, 6.771322, 6.655222, 6.528534, 6.739355, 6.453578, 6.652966, 6.541715, 6.738065, 6.989574, 6.683753, 8.053357, 6.611133, 6.450679, 6.59409, 6.805983,
   6.605937, 6.462045, 6.514074, 6.504918, 6.479041, 6.721281, 6.571628, 6.691578, 6.431419, 6.415696, 6.499541, 6.615448, 6.408326, 6.343515, 6.476698, 6.39044,
   6.416848, 6.35194, 6.59415, 6.309145, 6.255759, 6.209178, 6.33626, 6.32891, 6.400233, 6.468881, 6.405397, 6.348966, 6.353356, 6.219411, 6.222309, 6.243945,
   6.444791, 6.239413, 6.326863, 6.162607, 6.116526, 6.298699, 6.181772, 6.313699, 6.395642, 6.257175, 6.021431, 6.132671, 6.110577, 6.196615, 6.304124, 6.300025,
   6.284896, 6.290541, 6.1764, 6.166165, 6.127295, 6.134027, 5.998133, 6.003139, 6.166793, 5.993556, 6.29097, 5.905754, 5.906249, 6.014054, 5.835512, 5.971084,
   6.143669, 5.910158, 5.923792, 5.944297, 6.004405, 6.029236, 5.999042, 6.001012, 6.268312, 5.890096, 6.119033, 6.107021, 5.988819, 6.060482, 5.930817, 5.905457,
   5.690538, 5.851897, 6.14611, 5.890829, 5.915139, 5.909398, 5.832712, 5.779149, 5.779725, 6.065939, 5.658385, 5.859934, 5.727197, 5.818333, 5.844554, 5.947392,
   5.814724, 6.046921, 6.007683, 5.843966, 5.541195, 5.744632, 5.948744, 5.978599, 5.711527, 5.73383, 5.888962, 5.777968, 5.622579, 5.759705, 5.666222, 5.663896,
   5.614308, 5.825207, 5.570767, 5.674189, 5.527778, 5.76318, 5.577626, 5.658582, 5.538627, 5.555157, 5.796438, 5.656759, 5.695498, 5.6647, 5.808844, 5.508756,
   5.67755, 5.63547, 5.706204, 5.628311, 5.54227, 5.665045, 5.476743, 5.616825, 5.409648, 5.569917, 5.418748, 5.406653, 5.44505, 5.432882, 5.680511, 5.411359,
   5.477247, 5.514406, 5.44705, 5.397441, 5.446512, 5.178318, 5.482813, 5.363821, 5.424757, 5.321156, 5.394151, 5.445549, 5.567433, 5.118785, 5.547265, 5.494506,
   5.19131, 5.166996, 5.359911, 5.0324, 5.42033, 5.264588, 5.449187, 5.324885, 5.245641, 5.235741, 5.292846, 5.338377, 5.228506, 5.287314, 5.274623, 5.186834,
   5.05755, 5.159988, 5.037916, 5.294177, 5.414235, 5.020932, 5.281552, 5.136284, 5.192422, 5.002218, 5.284264, 5.098259, 5.038289, 5.176381, 5.35513, 5.021417,
   5.109345, 5.201949, 4.89881, 5.148861, 5.106389, 5.002687, 5.189573, 5.046634, 4.91585, 4.902234, 4.801936, 5.210318, 4.747806, 5.014832, 5.005201, 4.829271,
   5.010356, 5.20622, 4.669174, 4.896204, 5.029894, 5.008106, 4.868473, 4.952455, 4.818721, 4.745368, 5.079168, 5.032722, 4.730106, 4.863737, 4.767733, 4.785116,
   4.909744, 4.875719, 4.71506, 4.938427, 5.085557, 4.848341, 4.624992, 4.748974, 4.765454, 4.494428, 4.682624, 4.628268, 4.703892, 4.61543, 4.640579, 5.009154,
   4.80917, 4.709696, 4.717507, 4.492567, 4.613883, 4.549641, 4.719398, 4.855517, 4.855851, 4.731143, 4.648431, 4.506866, 4.482534, 4.529927, 4.737878, 4.421344,
   4.484977, 4.551801, 4.494866, 4.569759, 4.88141, 4.512074, 4.400285, 4.602078, 4.441685, 4.677387, 4.295878, 4.530199, 4.518971, 4.607844, 4.479106, 4.368384,
   4.360253, 4.462168, 4.32275, 11.4928, 4.618611, 4.281542, 4.402032, 4.390697, 4.510809, 4.624787, 4.29749, 4.486379, 4.335086, 4.406713, 4.259249, 4.520193,
   4.382447, 4.529575, 4.321588, 4.340473, 4.13571, 4.396112, 4.554969, 4.230907, 4.430617, 4.190743, 4.131014, 4.332516, 4.33519, 4.099948, 4.096231, 4.2425,
   4.13307, 4.207426, 4.385047, 4.373358, 4.410018, 4.384809, 4.29735, 4.263513, 4.336525, 4.080272, 4.218501, 4.054304, 4.310506, 4.256542, 4.21903, 4.216667,
   3.878245, 4.111152, 4.220781, 4.155574, 4.022737, 3.991039, 4.163688, 4.243296, 4.16571, 4.110738, 4.023011, 4.17076, 4.062672, 4.127573, 4.271954, 4.198438,
   4.191557, 4.006215, 3.994573, 4.058952, 3.896599, 3.920062, 4.133986, 4.013164, 3.909979, 3.911311, 4.017678, 3.925503, 4.008315, 3.94406, 3.960337, 3.794418,
   3.888116, 3.949174, 3.955893, 3.900195, 3.998591, 3.960493, 3.739565, 4.130626, 3.945127, 3.938099, 3.90431, 3.969784, 3.951612, 4.110373, 4.033998, 3.699638,
   3.849307, 3.89875, 3.894393, 3.764899, 3.716201, 3.831896, 3.859897, 3.653687, 4.103503, 3.773824, 3.790502, 3.860722, 3.808338, 3.927609, 3.705166, 3.70578,
   3.750963, 3.831037, 3.800714, 3.860064, 3.631067, 3.706128, 3.544478, 3.665216, 3.567033, 3.695763, 3.604397, 3.749089, 3.567523, 3.724092, 3.63828, 3.475278,
   3.732895, 4.16859, 3.490962, 3.588777, 3.72818, 3.567076, 3.490798, 3.54646, 3.535476, 3.580463, 3.472108, 3.728632, 3.577557, 3.680795, 3.639131, 3.609816,
   3.490458, 3.453588, 3.606282, 3.544258, 3.543836, 3.452275, 3.650703, 3.681533, 3.448798, 3.417314, 3.594642, 3.500086, 3.645467, 3.449426, 3.494372, 3.507248,
   3.502705, 3.454567, 3.464792, 3.416264, 3.388883, 3.500383, 3.479274, 3.874361, 3.466054, 3.600042, 3.499927, 3.351965, 3.606868, 3.385554, 3.407017, 3.613708,
   3.567873, 3.305124, 3.459812, 3.511607, 3.372799, 3.369538, 3.484312, 3.396933, 3.334185, 3.369529, 3.446821, 3.349101, 3.177648, 3.269869, 3.313482, 3.300556,
   3.121063, 3.302565, 3.128424, 3.309599, 6.493234, 3.291196, 3.110663, 3.238176, 3.42997, 3.18415, 3.146478, 3.287483, 3.257596, 3.273469, 3.265996, 3.270005,
   3.269148, 3.180457, 3.228032, 3.462749, 3.251824, 3.236328, 3.337289, 3.316784, 3.169357, 3.322022, 3.126015, 3.142811, 3.189389, 3.48647, 3.151109, 3.309082,
   3.176837, 3.226065, 3.263826, 3.263265, 3.051015, 3.072348, 3.381771, 3.030721, 3.114661, 3.106366, 3.03668, 3.058553, 3.208285, 2.957944, 3.233786, 3.16613,
   3.07606, 2.895172, 3.198534, 3.013695, 3.203764, 2.984224, 2.938669, 3.018485, 3.109861, 2.988206, 3.040804, 2.990436, 2.999409, 3.085782, 3.067892, 2.963988,
   3.009928, 2.968137, 3.027167, 2.886393, 2.916155, 3.052016, 3.057811, 2.933694, 2.900317, 2.973022, 2.851223, 2.863866, 2.90307, 3.09422, 2.734808, 3.106059,
   3.016195, 2.890567, 2.812931, 2.953745, 2.894986, 2.674647, 2.930813, 2.907251, 2.880153, 2.870258, 2.843586, 2.70799, 2.797379, 2.842973, 2.871012, 2.908131,
   3.001262, 2.980152, 2.732074, 2.749138, 2.83704, 2.68536, 2.708587, 2.955757, 2.873294, 2.939579, 2.83153, 2.669583, 2.737966, 2.840238, 2.887291, 2.802811,
   2.971829, 2.775878, 2.510759, 2.738056, 2.630291, 2.771709, 2.616108, 2.954868, 2.766088, 2.615047, 2.782703, 2.775414, 2.82954, 2.76693, 3.460327, 5.839517,
   2.527147, 2.529708, 2.542805, 2.548906, 2.896784, 2.75482, 2.610897, 2.884982, 2.856042, 2.735033, 2.777173, 2.716287, 2.783159, 2.551404, 2.78342, 2.542729,
   2.578214, 2.476297, 2.719825, 2.793191, 2.587462, 2.732123, 2.630537, 2.626438, 2.666062, 2.614404, 2.625967, 2.487303, 2.451706, 2.740146, 2.627307, 2.45057,
   2.620502, 2.523354, 2.742896, 2.527925, 2.595055, 2.594231, 2.590164, 2.581852, 2.540358, 2.546741, 2.693579, 2.58842, 2.615287, 2.529311, 3.118656, 2.553626,
   2.497803, 2.455994, 2.425804, 2.440914, 2.676528, 2.580447, 2.309653, 2.457782, 2.511854, 2.416787, 2.425044, 2.691293, 2.461129, 2.372052, 2.260776, 2.34678,
   2.406517, 2.385964, 2.491864, 2.528522, 2.636612, 2.437873, 2.594901, 2.501989, 2.420354, 2.596652, 2.400733, 2.277941, 2.423804, 2.254872, 2.300116, 2.449686,
   2.327335, 2.382874, 2.461931, 2.51153, 2.406942, 2.185382, 2.385532 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_DHZfirst_2b1c_Z_mass_fx1181,Graph_from_VH_DHZfirst_2b1c_Z_mass_fy1181,Graph_from_VH_DHZfirst_2b1c_Z_mass_fex1181,Graph_from_VH_DHZfirst_2b1c_Z_mass_fey1181);
   gre->SetName("Graph_from_VH_DHZfirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1181 = new TH1F("Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1181","",1000,0,2200);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1181->SetMinimum(-158.1208);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1181->SetMaximum(1481.107);
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
   data_mc_ratio__182->SetBinContent(26,0.9870572);
   data_mc_ratio__182->SetBinContent(27,1.068296);
   data_mc_ratio__182->SetBinContent(28,0.979135);
   data_mc_ratio__182->SetBinContent(29,0.9750759);
   data_mc_ratio__182->SetBinContent(30,0.9916186);
   data_mc_ratio__182->SetBinContent(61,1.203569);
   data_mc_ratio__182->SetBinContent(62,1.175786);
   data_mc_ratio__182->SetBinContent(63,1.17595);
   data_mc_ratio__182->SetBinContent(64,1.175581);
   data_mc_ratio__182->SetBinContent(65,1.200352);
   data_mc_ratio__182->SetBinContent(1000,0.9425762);
   data_mc_ratio__182->SetBinContent(1001,1.0875);
   data_mc_ratio__182->SetBinError(26,0.04776705);
   data_mc_ratio__182->SetBinError(27,0.04394383);
   data_mc_ratio__182->SetBinError(28,0.03698142);
   data_mc_ratio__182->SetBinError(29,0.03311531);
   data_mc_ratio__182->SetBinError(30,0.03110984);
   data_mc_ratio__182->SetBinError(61,0.03013635);
   data_mc_ratio__182->SetBinError(62,0.03019803);
   data_mc_ratio__182->SetBinError(63,0.03010312);
   data_mc_ratio__182->SetBinError(64,0.03054745);
   data_mc_ratio__182->SetBinError(65,0.03077825);
   data_mc_ratio__182->SetBinError(1000,0.2720983);
   data_mc_ratio__182->SetBinError(1001,0.01510465);
   data_mc_ratio__182->SetMinimum(0.4);
   data_mc_ratio__182->SetMaximum(1.6);
   data_mc_ratio__182->SetEntries(1166.855);
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
   0, 0, 0, 0, 0, 0, 0, 0, 0.02312428, 0.02127234, 0.0180908, 0.01620079, 0.01509533, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01454781, 0.01490771, 0.01473598, 0.01499097, 0.01486228,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1873788 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1182,Graph_from_mc_statistical_error_fy1182,Graph_from_mc_statistical_error_fex1182,Graph_from_mc_statistical_error_fey1182);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1182 = new TH1F("Graph_Graph_from_mc_statistical_error1182","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1182->SetMinimum(0.7751455);
   Graph_Graph_from_mc_statistical_error1182->SetMaximum(1.224855);
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
