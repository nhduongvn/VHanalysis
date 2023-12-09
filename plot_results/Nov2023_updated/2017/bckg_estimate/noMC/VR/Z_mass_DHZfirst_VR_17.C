#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_DHZfirst_VR_17()
{
//=========Macro generated from canvas: Z_mass_DHZfirst_VR_17/Z_mass_DHZfirst_VR_17
//=========  (Fri Dec  8 12:19:37 2023) by ROOT version 6.28/04
   TCanvas *Z_mass_DHZfirst_VR_17 = new TCanvas("Z_mass_DHZfirst_VR_17", "Z_mass_DHZfirst_VR_17",0,0,600,600);
   Z_mass_DHZfirst_VR_17->SetHighLightColor(2);
   Z_mass_DHZfirst_VR_17->Range(0,0,1,1);
   Z_mass_DHZfirst_VR_17->SetFillColor(0);
   Z_mass_DHZfirst_VR_17->SetFillStyle(4000);
   Z_mass_DHZfirst_VR_17->SetBorderMode(0);
   Z_mass_DHZfirst_VR_17->SetBorderSize(2);
   Z_mass_DHZfirst_VR_17->SetFrameFillStyle(1000);
   Z_mass_DHZfirst_VR_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-1.98727,315.7258,1995.283);
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
   st->SetMaximum(1795.556);
   
   TH1F *st_stack_62 = new TH1F("st_stack_62","",1000,0,2000);
   st_stack_62->SetMinimum(0.01);
   st_stack_62->SetMaximum(1795.556);
   st_stack_62->SetDirectory(nullptr);
   st_stack_62->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_62->SetLineColor(ci);
   st_stack_62->SetLineWidth(0);
   st_stack_62->GetXaxis()->SetRange(1,150);
   st_stack_62->GetXaxis()->SetLabelFont(42);
   st_stack_62->GetXaxis()->SetTitleOffset(1);
   st_stack_62->GetXaxis()->SetTitleFont(42);
   st_stack_62->GetYaxis()->SetTitle("Events/2.0");
   st_stack_62->GetYaxis()->SetLabelFont(42);
   st_stack_62->GetYaxis()->SetLabelSize(0.05);
   st_stack_62->GetYaxis()->SetTitleSize(0.057);
   st_stack_62->GetYaxis()->SetTitleOffset(1.2);
   st_stack_62->GetYaxis()->SetTitleFont(42);
   st_stack_62->GetZaxis()->SetLabelFont(42);
   st_stack_62->GetZaxis()->SetTitleOffset(1);
   st_stack_62->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_62);
   
   
   TH1D *VH_DHZfirst_2b1c_Z_mass_stack_1 = new TH1D("VH_DHZfirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(26,374.34);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(27,448.392);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(28,541.416);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(29,609.552);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(30,690.54);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(61,792.132);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(62,798.048);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(63,781.116);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(64,788.868);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(65,786.42);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(1000,4.08);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(1001,2424.948);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(15,0.204);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(16,0.204);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(17,0.7066767);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(18,1.27398);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(19,1.824631);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(20,2.53978);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(21,3.539268);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(22,4.332299);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(23,5.431919);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(24,6.499249);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(25,7.550756);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(26,8.738728);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(27,9.564098);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(28,10.50947);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(29,11.15117);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(30,11.86887);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(31,12.36348);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(32,13.12435);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(33,13.38806);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(34,13.90646);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(35,13.65886);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(36,14.08634);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(37,14.22891);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(38,14.27417);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(39,14.09077);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(40,14.3033);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(41,14.14531);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(42,14.4091);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(43,14.13206);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(44,14.10848);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(45,14.10553);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(46,14.25959);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(47,13.74694);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(48,13.7802);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(49,13.78774);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(50,13.77718);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(51,13.81639);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(52,13.38495);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(53,13.50874);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(54,13.20496);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(55,13.31637);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(56,13.16551);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(57,13.25215);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(58,13.11166);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(59,12.94235);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(60,12.91821);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(61,12.712);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(62,12.75938);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(63,12.6233);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(64,12.68578);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(65,12.66608);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(66,12.39206);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(67,12.50405);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(68,12.51736);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(69,12.26038);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(70,12.30274);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(71,12.25189);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(72,12.18377);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(73,11.98923);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(74,12.22129);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(75,12.02216);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(76,11.75082);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(77,12.0187);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(78,11.67978);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(79,11.68334);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(80,11.77382);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(81,11.51832);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(82,11.49663);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(83,11.47307);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(84,11.37472);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(85,11.24223);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(86,11.34174);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(87,11.1493);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(88,11.32522);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(89,11.05371);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(90,10.90399);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(91,10.75604);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(92,10.5746);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(93,10.63738);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(94,10.82739);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(95,10.5154);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(96,10.62564);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(97,10.52332);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(98,10.2752);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(99,10.43196);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(100,10.28128);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(101,10.08099);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(102,9.920778);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(103,9.94173);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(104,9.866095);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(105,9.652887);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(106,9.749407);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(107,9.721622);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(108,9.537954);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(109,9.570623);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(110,9.375126);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(111,9.384);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(112,9.107178);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(113,9.43045);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(114,9.23424);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(115,9.079719);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(116,9.11403);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(117,9.019938);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(118,8.892154);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(119,8.859333);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(120,8.852284);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(121,8.700546);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(122,8.693369);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(123,8.767255);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(124,8.509515);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(125,8.575283);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(126,8.55828);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(127,8.408661);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(128,8.487479);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(129,8.351552);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(130,8.26137);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(131,8.276469);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(132,8.336589);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(133,8.180375);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(134,8.015928);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(135,8.077988);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(136,7.924553);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(137,7.903519);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(138,8.031488);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(139,7.9193);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(140,7.927179);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(141,7.78147);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(142,7.992532);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(143,7.979504);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(144,7.698129);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(145,7.581009);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(146,7.434114);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(147,7.586496);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(148,7.575517);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(149,7.665624);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(150,7.406071);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(151,7.411688);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(152,7.456472);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(153,7.32414);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(154,7.341166);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(155,7.05498);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(156,7.304226);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(157,7.119571);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(158,7.057928);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(159,7.034303);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(160,7.031345);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(161,7.096151);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(162,7.052029);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(163,6.781274);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(164,6.938999);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(165,6.830193);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(166,6.787408);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(167,6.79966);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(168,6.713429);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(169,6.663653);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(170,6.572474);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(171,6.559798);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(172,6.562969);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(173,6.616648);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(174,6.688587);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(175,6.744352);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(176,6.63549);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(177,6.51843);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(178,6.515238);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(179,6.547097);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(180,6.277766);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(181,6.51843);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(182,6.41871);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(183,6.350268);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(184,6.373164);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(185,6.366631);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(186,6.438131);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(187,6.217818);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(188,6.164042);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(189,6.184263);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(190,6.17416);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(191,6.214471);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(192,6.079063);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(193,6.013676);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(194,5.769991);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(195,6.297622);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(196,6.130192);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(197,6.17753);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(198,5.845232);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(199,5.961549);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(200,5.79877);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(201,6.041294);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(202,6.061924);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(203,5.813105);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(204,5.834543);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(205,5.722918);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(206,5.845232);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(207,5.809525);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(208,5.67912);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(209,5.560637);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(210,5.773596);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(211,5.653414);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(212,5.657093);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(213,5.583044);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(214,5.504221);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(215,5.473894);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(216,5.575585);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(217,5.664445);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(218,5.454855);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(219,5.331391);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(220,5.443399);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(221,5.354757);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(222,5.571852);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(223,5.556894);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(224,5.405038);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(225,5.412732);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(226,5.44722);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(227,5.296148);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(228,5.296148);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(229,5.412732);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(230,5.268574);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(231,5.354757);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(232,5.054921);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(233,5.208995);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(234,5.148727);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(235,5.12848);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(236,5.140638);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(237,5.192992);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(238,4.967725);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(239,4.988624);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(240,5.124422);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(241,5.201);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(242,4.971912);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(243,5.12848);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(244,5.112225);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(245,5.07136);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(246,5.091833);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(247,5.059035);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(248,4.980275);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(249,4.849025);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(250,4.762428);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(251,4.95934);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(252,4.929883);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(253,4.669773);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(254,4.744919);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(255,4.853314);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(256,5.009436);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(257,4.866159);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(258,4.844732);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(259,4.950942);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(260,4.642961);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(261,4.762428);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(262,4.731745);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(263,4.840435);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(264,4.844732);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(265,4.557015);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(266,4.633989);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(267,4.740532);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(268,4.844732);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(269,4.606969);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(270,4.766795);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(271,4.597926);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(272,4.450755);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(273,4.700861);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(274,4.629497);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(275,4.557015);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(276,4.696433);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(277,4.538713);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(278,4.597926);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(279,4.766795);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(280,4.593399);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(281,4.683122);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(282,4.543296);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(283,4.464758);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(284,4.561579);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(285,4.552446);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(286,4.492634);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(287,4.380066);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(288,4.346684);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(289,4.460095);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(290,4.606969);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(291,4.478718);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(292,4.488);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(293,4.337099);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(294,4.341895);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(295,4.417907);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(296,4.375313);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(297,4.303385);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(298,4.501888);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(299,4.389557);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(300,4.24006);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(301,4.332299);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(302,4.384814);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(303,4.244965);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(304,4.441394);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(305,4.322683);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(306,4.264527);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(307,4.293703);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(308,4.346684);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(309,4.346684);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(310,4.308217);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(311,4.244965);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(312,4.180756);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(313,4.422615);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(314,4.140748);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(315,4.375313);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(316,4.389557);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(317,4.130685);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(318,4.215452);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(319,4.200617);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(320,4.259645);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(321,4.165798);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(322,4.303385);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(323,4.033839);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(324,4.090187);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(325,4.17079);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(326,4.322683);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(327,4.205568);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(328,3.966213);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(329,4.200617);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(330,4.210513);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(331,4.059549);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(332,4.249864);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(333,4.317866);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(334,4.269404);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(335,4.210513);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(336,4.17079);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(337,4.293703);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(338,3.997567);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(339,4.049284);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(340,4.18573);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(341,3.955707);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(342,4.13572);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(343,3.997567);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(344,4.13572);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(345,4.125645);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(346,4.085097);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(347,4.085097);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(348,4.130685);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(349,4.08);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(350,4.069787);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(351,4.013152);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(352,4.044142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(353,3.987143);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(354,4.090187);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(355,4.05442);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(356,4.095271);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(357,4.069787);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(358,3.93461);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(359,3.843655);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(360,3.827379);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(361,3.966213);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(362,3.950443);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(363,3.897415);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(364,4.069787);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(365,4.140748);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(366,3.971456);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(367,3.93461);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(368,3.897415);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(369,4.033839);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(370,3.832812);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(371,3.694597);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(372,4.023509);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(373,3.90275);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(374,3.821939);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(375,4.018334);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(376,3.93461);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(377,3.865248);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(378,3.950443);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(379,3.918712);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(380,3.838237);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(381,3.992359);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(382,3.913399);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(383,3.897415);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(384,3.750494);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(385,3.772621);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(386,3.816491);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(387,3.783636);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(388,3.778133);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(389,3.805571);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(390,3.981921);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(391,3.789132);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(392,3.816491);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(393,3.821939);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(394,3.783636);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(395,3.778133);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(396,3.574369);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(397,3.750494);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(398,3.688961);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(399,3.881365);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(400,3.966213);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(401,3.733813);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(402,3.750494);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(403,3.637841);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(404,3.700225);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(405,3.65496);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(406,3.811035);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(407,3.811035);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(408,3.865248);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(409,3.694597);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(410,3.688961);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(411,3.649263);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(412,3.614889);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(413,3.849064);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(414,3.666329);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(415,3.722651);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(416,3.694597);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(417,3.783636);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(418,3.728236);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(419,3.789132);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(420,3.666329);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(421,3.574369);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(422,3.545142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(423,3.568543);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(424,3.620641);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(425,3.854467);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(426,3.705844);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(427,3.603358);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(428,3.580185);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(429,3.626383);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(430,3.744942);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(431,3.750494);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(432,3.870628);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(433,3.485954);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(434,3.694597);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(435,3.585993);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(436,3.591791);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(437,3.568543);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(438,3.744942);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(439,3.431811);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(440,3.413573);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(441,3.443916);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(442,3.609128);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(443,3.556862);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(444,3.413573);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(445,3.40136);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(446,3.551007);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(447,3.580185);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(448,3.497871);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(449,3.468);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(450,3.580185);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(451,3.461995);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(452,3.491918);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(453,3.672);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(454,3.419663);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(455,3.407472);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(456,3.562707);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(457,3.389103);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(458,3.283069);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(459,3.314608);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(460,3.443916);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(461,3.491918);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(462,3.358264);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(463,3.276725);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(464,3.443916);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(465,3.431811);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(466,3.479979);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(467,3.497871);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(468,3.425743);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(469,3.283069);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(470,3.539268);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(471,3.407472);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(472,3.199615);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(473,3.413573);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(474,3.289401);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(475,3.289401);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(476,3.314608);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(477,3.370633);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(478,3.314608);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(479,3.443916);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(480,3.345849);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(481,3.314608);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(482,3.160354);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(483,3.509749);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(484,3.289401);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(485,3.276725);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(486,3.473995);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(487,3.289401);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(488,3.264);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(489,3.276725);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(490,3.389103);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(491,3.295721);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(492,3.180045);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(493,3.251225);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(494,3.345849);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(495,3.199615);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(496,3.257619);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(497,3.276725);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(498,3.113925);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(499,3.251225);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(500,3.264);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(501,3.1206);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(502,3.07357);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(503,3.295721);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(504,3.133907);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(505,3.100532);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(506,3.251225);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(507,3.133907);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(508,3.032678);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(509,3.407472);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(510,3.153763);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(511,3.206112);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(512,3.244819);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(513,3.2384);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(514,3.107235);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(515,3.308324);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(516,3.08708);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(517,3.199615);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(518,3.166932);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(519,3.053192);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(520,3.127261);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(521,2.94213);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(522,3.339624);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(523,3.225523);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(524,3.093813);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(525,3.005108);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(526,3.113925);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(527,2.998175);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(528,2.920835);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(529,3.147159);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(530,3.080332);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(531,2.998175);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(532,3.1206);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(533,3.113925);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(534,2.870534);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(535,3.005108);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(536,3.066792);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(537,3.005108);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(538,2.920835);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(539,2.892199);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(540,2.970285);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(541,3.032678);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(542,3.032678);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(543,2.913703);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(544,3.100532);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(545,3.018924);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(546,2.963271);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(547,2.819336);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(548,2.956241);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(549,2.848705);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(550,2.963271);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(551,3.053192);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(552,3.025809);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(553,2.892199);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(554,2.856);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(555,2.991227);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(556,2.848705);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(557,2.935049);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(558,2.870534);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(559,2.991227);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(560,3.005108);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(561,3.04637);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(562,2.877774);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(563,2.856);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(564,3.066792);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(565,2.863276);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(566,3.107235);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(567,2.690945);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(568,2.892199);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(569,2.819336);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(570,2.841391);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(571,2.841391);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(572,2.7747);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(573,2.652);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(574,2.906553);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(575,2.884996);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(576,2.956241);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(577,2.729334);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(578,3.018924);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(579,2.899385);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(580,2.834059);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(581,2.782189);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(582,2.523341);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(583,2.797107);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(584,2.826707);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(585,2.531573);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(586,2.834059);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(587,2.826707);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(588,2.714043);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(589,2.848705);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(590,2.652);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(591,2.848705);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(592,2.690945);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(593,2.759661);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(594,3.012024);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(595,2.572342);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(596,2.819336);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(597,2.804536);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(598,2.811946);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(599,2.531573);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(600,2.698666);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(601,2.683201);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(602,2.721699);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(603,2.877774);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(604,2.596496);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(605,2.977282);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(606,2.877774);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(607,2.804536);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(608,2.698666);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(609,2.596496);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(610,2.675435);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(611,2.58847);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(612,2.782189);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(613,2.659835);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(614,2.877774);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(615,2.644142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(616,2.636261);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(617,2.7747);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(618,2.804536);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(619,2.698666);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(620,2.612475);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(621,2.75211);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(622,2.804536);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(623,2.690945);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(624,2.580419);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(625,2.580419);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(626,2.698666);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(627,2.667646);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(628,2.628356);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(629,2.604498);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(630,2.767191);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(631,2.736947);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(632,2.644142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(633,2.759661);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(634,2.515081);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(635,2.580419);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(636,2.413761);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(637,2.556113);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(638,2.481767);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(639,2.690945);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(640,2.464941);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(641,2.659835);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(642,2.736947);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(643,2.644142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(644,2.422366);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(645,2.652);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(646,2.490137);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(647,2.659835);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(648,2.652);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(649,2.370266);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(650,2.698666);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(651,2.280789);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(652,2.56424);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(653,2.413761);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(654,2.841391);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(655,2.456485);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(656,2.523341);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(657,2.628356);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(658,2.620427);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(659,2.361471);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(660,2.644142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(661,2.298963);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(662,2.352643);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(663,2.396457);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(664,2.667646);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(665,2.481767);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(666,2.379028);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(667,2.325958);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(668,2.448);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(669,2.580419);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(670,2.370266);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(671,2.572342);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(672,2.49848);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(673,2.690945);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(674,2.596496);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(675,2.439485);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(676,2.506794);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(677,2.298963);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(678,2.456485);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(679,2.422366);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(680,2.379028);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(681,2.298963);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(682,2.547959);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(683,2.343782);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(684,2.547959);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(685,2.370266);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(686,2.298963);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(687,2.53978);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(688,2.070374);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(689,2.352643);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(690,2.206597);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(691,2.379028);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(692,2.361471);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(693,2.13957);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(694,2.334887);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(695,2.298963);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(696,2.370266);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(697,2.490137);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(698,2.307997);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(699,2.361471);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(700,2.325958);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(701,2.387759);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(702,2.456485);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(703,2.225377);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(704,2.343782);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(705,2.12003);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(706,2.289894);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(707,2.253254);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(708,2.473369);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(709,2.361471);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(710,2.234708);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(711,2.298963);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(712,2.325958);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(713,2.216007);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(714,2.12003);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(715,2.253254);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(716,2.244);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(717,2.234708);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(718,2.187656);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(719,2.334887);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(720,2.325958);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(721,2.298963);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(722,2.149273);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(723,2.234708);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(724,2.158933);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(725,2.298963);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(726,2.149273);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(727,2.280789);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(728,2.253254);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(729,2.262469);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(730,2.225377);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(731,2.253254);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(732,2.325958);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(733,2.271648);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(734,2.379028);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(735,2.352643);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(736,2.216007);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(737,2.04);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(738,2.187656);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(739,2.110192);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(740,2.234708);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(741,2.187656);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(742,2.129823);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(743,2.307997);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(744,2.149273);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(745,2.050175);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(746,2.158933);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(747,2.12003);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(748,1.967305);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(749,2.234708);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(750,2.253254);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(751,2.090378);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(752,2.050175);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(753,2.12003);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(754,2.050175);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(755,2.13957);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(756,2.100309);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(757,2.16855);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(758,1.924532);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(759,2.253254);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(760,2.334887);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(761,2.253254);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(762,2.262469);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(763,2.197147);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(764,1.956699);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(765,2.225377);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(766,2.060299);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(767,2.158933);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(768,2.216007);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(769,1.998784);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(770,1.977853);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(771,2.13957);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(772,2.12003);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(773,2.129823);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(774,2.0804);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(775,1.790093);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(776,1.977853);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(777,2.197147);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(778,2.110192);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(779,1.902785);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(780,1.869691);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(781,2.253254);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(782,1.778431);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(783,2.129823);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(784,1.977853);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(785,1.956699);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(786,1.902785);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(787,1.754874);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(788,2.029774);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(789,1.967305);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(790,2.0804);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(791,1.988346);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(792,2.019497);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(793,1.935314);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(794,2.149273);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(795,1.766692);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(796,1.988346);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(797,2.009167);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(798,1.778431);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(799,1.801679);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(800,1.988346);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(801,2.149273);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(802,1.935314);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(803,1.801679);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(804,1.977853);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(805,1.946036);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(806,1.754874);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(807,2.019497);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(808,1.998784);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(809,1.935314);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(810,1.869691);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(811,1.977853);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(812,1.836);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(813,2.178124);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(814,2.129823);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(815,1.902785);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(816,1.824631);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(817,1.869691);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(818,1.847299);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(819,1.824631);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(820,1.935314);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(821,2.04);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(822,1.790093);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(823,1.813192);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(824,2.110192);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(825,1.778431);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(826,1.946036);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(827,2.04);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(828,1.847299);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(829,1.891818);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(830,1.880787);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(831,1.778431);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(832,1.824631);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(833,2.009167);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(834,1.682227);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(835,2.029774);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(836,1.967305);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(837,1.706786);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(838,1.858528);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(839,1.880787);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(840,1.657304);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(841,1.91369);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(842,1.946036);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(843,1.813192);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(844,1.778431);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(845,1.946036);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(846,1.858528);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(847,1.858528);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(848,1.632);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(849,1.801679);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(850,1.754874);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(851,1.836);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(852,1.902785);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(853,1.754874);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(854,1.824631);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(855,1.847299);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(856,1.706786);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(857,1.754874);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(858,1.824631);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(859,1.766692);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(860,1.790093);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(861,1.706786);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(862,1.606298);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(863,1.891818);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(864,1.694551);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(865,1.766692);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(866,1.801679);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(867,1.657304);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(868,1.847299);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(869,1.754874);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(870,1.566954);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(871,1.593291);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(872,1.682227);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(873,1.766692);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(874,1.956699);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(875,1.682227);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(876,1.694551);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(877,1.657304);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(878,1.847299);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(879,1.526596);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(880,1.580177);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(881,1.742977);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(882,1.580177);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(883,1.669812);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(884,1.766692);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(885,1.813192);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(886,1.413353);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(887,1.632);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(888,1.778431);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(889,1.858528);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(890,1.428);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(891,1.566954);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(892,1.580177);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(893,1.706786);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(894,1.730997);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(895,1.824631);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(896,1.778431);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(897,1.657304);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(898,1.540166);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(899,1.682227);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(900,1.540166);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(901,1.398554);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(902,1.485142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(903,1.836);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(904,1.512904);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(905,1.790093);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(906,1.442498);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(907,1.880787);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(908,1.566954);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(909,1.606298);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(910,1.485142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(911,1.512904);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(912,1.6192);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(913,1.540166);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(914,1.512904);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(915,1.718935);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(916,1.657304);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(917,1.730997);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(918,1.801679);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(919,1.512904);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(920,1.580177);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(921,1.322071);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(922,1.485142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(923,1.512904);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(924,1.657304);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(925,1.580177);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(926,1.456851);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(927,1.540166);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(928,1.606298);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(929,1.566954);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(930,1.428);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(931,1.606298);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(932,1.632);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(933,1.644701);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(934,1.644701);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(935,1.512904);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(936,1.669812);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(937,1.593291);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(938,1.566954);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(939,1.485142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(940,1.442498);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(941,1.499088);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(942,1.456851);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(943,1.27398);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(944,1.442498);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(945,1.442498);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(946,1.566954);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(947,1.499088);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(948,1.526596);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(949,1.566954);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(950,1.540166);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(951,1.499088);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(952,1.566954);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(953,1.566954);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(954,1.566954);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(955,1.566954);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(956,1.413353);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(957,1.368474);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(958,1.540166);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(959,1.499088);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(960,1.526596);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(961,1.442498);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(962,1.6192);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(963,1.778431);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(964,1.428);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(965,1.428);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(966,1.632);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(967,1.580177);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(968,1.322071);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(969,1.540166);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(970,1.368474);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(971,1.657304);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(972,1.322071);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(973,1.442498);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(974,1.606298);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(975,1.456851);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(976,1.442498);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(977,1.353183);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(978,1.456851);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(979,1.153998);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(980,1.526596);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(981,1.428);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(982,1.290209);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(983,1.337717);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(984,1.428);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(985,1.353183);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(986,1.398554);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(987,1.27398);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(988,1.306237);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(989,1.368474);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(990,1.471065);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(991,1.383595);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(992,1.383595);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(993,1.240884);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(994,1.368474);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(995,1.25754);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(996,1.20688);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(997,1.526596);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(998,1.368474);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(999,1.398554);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(1000,1.306237);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(1001,22.24161);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetEntries(632712);

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
   
   TH1D *VH_DHZfirst_Z_mass__123 = new TH1D("VH_DHZfirst_Z_mass__123","",1000,0,2000);
   VH_DHZfirst_Z_mass__123->SetBinContent(26,378);
   VH_DHZfirst_Z_mass__123->SetBinContent(27,439);
   VH_DHZfirst_Z_mass__123->SetBinContent(28,526);
   VH_DHZfirst_Z_mass__123->SetBinContent(29,565);
   VH_DHZfirst_Z_mass__123->SetBinContent(30,699);
   VH_DHZfirst_Z_mass__123->SetBinContent(61,808);
   VH_DHZfirst_Z_mass__123->SetBinContent(62,751);
   VH_DHZfirst_Z_mass__123->SetBinContent(63,758);
   VH_DHZfirst_Z_mass__123->SetBinContent(64,761);
   VH_DHZfirst_Z_mass__123->SetBinContent(65,786);
   VH_DHZfirst_Z_mass__123->SetBinContent(1000,3);
   VH_DHZfirst_Z_mass__123->SetBinContent(1001,2418);
   VH_DHZfirst_Z_mass__123->SetEntries(126775);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_mass__123->SetLineColor(ci);
   VH_DHZfirst_Z_mass__123->SetLineWidth(2);
   VH_DHZfirst_Z_mass__123->SetMarkerStyle(20);
   VH_DHZfirst_Z_mass__123->SetMarkerSize(1.2);
   VH_DHZfirst_Z_mass__123->GetXaxis()->SetRange(1,2000);
   VH_DHZfirst_Z_mass__123->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__123->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_mass__123->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__123->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__123->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__123->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__123->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_mass__123->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__123->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fx1123[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fy1123[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 374.34, 448.392, 541.416, 609.552, 690.54, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 792.132, 798.048, 781.116, 788.868, 786.42,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 4.08 };
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fex1123[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fey1123[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.204, 0.204, 0.7066767,
   1.27398, 1.824631, 2.53978, 3.539268, 4.332299, 5.431919, 6.499249, 7.550756, 8.738728, 9.564098, 10.50947, 11.15117, 11.86887, 12.36348, 13.12435, 13.38806,
   13.90646, 13.65886, 14.08634, 14.22891, 14.27417, 14.09077, 14.3033, 14.14531, 14.4091, 14.13206, 14.10848, 14.10553, 14.25959, 13.74694, 13.7802, 13.78774,
   13.77718, 13.81639, 13.38495, 13.50874, 13.20496, 13.31637, 13.16551, 13.25215, 13.11166, 12.94235, 12.91821, 12.712, 12.75938, 12.6233, 12.68578, 12.66608,
   12.39206, 12.50405, 12.51736, 12.26038, 12.30274, 12.25189, 12.18377, 11.98923, 12.22129, 12.02216, 11.75082, 12.0187, 11.67978, 11.68334, 11.77382, 11.51832,
   11.49663, 11.47307, 11.37472, 11.24223, 11.34174, 11.1493, 11.32522, 11.05371, 10.90399, 10.75604, 10.5746, 10.63738, 10.82739, 10.5154, 10.62564, 10.52332,
   10.2752, 10.43196, 10.28128, 10.08099, 9.920778, 9.94173, 9.866095, 9.652887, 9.749407, 9.721622, 9.537954, 9.570623, 9.375126, 9.384, 9.107178, 9.43045,
   9.23424, 9.079719, 9.11403, 9.019938, 8.892154, 8.859333, 8.852284, 8.700546, 8.693369, 8.767255, 8.509515, 8.575283, 8.55828, 8.408661, 8.487479, 8.351552,
   8.26137, 8.276469, 8.336589, 8.180375, 8.015928, 8.077988, 7.924553, 7.903519, 8.031488, 7.9193, 7.927179, 7.78147, 7.992532, 7.979504, 7.698129, 7.581009,
   7.434114, 7.586496, 7.575517, 7.665624, 7.406071, 7.411688, 7.456472, 7.32414, 7.341166, 7.05498, 7.304226, 7.119571, 7.057928, 7.034303, 7.031345, 7.096151,
   7.052029, 6.781274, 6.938999, 6.830193, 6.787408, 6.79966, 6.713429, 6.663653, 6.572474, 6.559798, 6.562969, 6.616648, 6.688587, 6.744352, 6.63549, 6.51843,
   6.515238, 6.547097, 6.277766, 6.51843, 6.41871, 6.350268, 6.373164, 6.366631, 6.438131, 6.217818, 6.164042, 6.184263, 6.17416, 6.214471, 6.079063, 6.013676,
   5.769991, 6.297622, 6.130192, 6.17753, 5.845232, 5.961549, 5.79877, 6.041294, 6.061924, 5.813105, 5.834543, 5.722918, 5.845232, 5.809525, 5.67912, 5.560637,
   5.773596, 5.653414, 5.657093, 5.583044, 5.504221, 5.473894, 5.575585, 5.664445, 5.454855, 5.331391, 5.443399, 5.354757, 5.571852, 5.556894, 5.405038, 5.412732,
   5.44722, 5.296148, 5.296148, 5.412732, 5.268574, 5.354757, 5.054921, 5.208995, 5.148727, 5.12848, 5.140638, 5.192992, 4.967725, 4.988624, 5.124422, 5.201,
   4.971912, 5.12848, 5.112225, 5.07136, 5.091833, 5.059035, 4.980275, 4.849025, 4.762428, 4.95934, 4.929883, 4.669773, 4.744919, 4.853314, 5.009436, 4.866159,
   4.844732, 4.950942, 4.642961, 4.762428, 4.731745, 4.840435, 4.844732, 4.557015, 4.633989, 4.740532, 4.844732, 4.606969, 4.766795, 4.597926, 4.450755, 4.700861,
   4.629497, 4.557015, 4.696433, 4.538713, 4.597926, 4.766795, 4.593399, 4.683122, 4.543296, 4.464758, 4.561579, 4.552446, 4.492634, 4.380066, 4.346684, 4.460095,
   4.606969, 4.478718, 4.488, 4.337099, 4.341895, 4.417907, 4.375313, 4.303385, 4.501888, 4.389557, 4.24006, 4.332299, 4.384814, 4.244965, 4.441394, 4.322683,
   4.264527, 4.293703, 4.346684, 4.346684, 4.308217, 4.244965, 4.180756, 4.422615, 4.140748, 4.375313, 4.389557, 4.130685, 4.215452, 4.200617, 4.259645, 4.165798,
   4.303385, 4.033839, 4.090187, 4.17079, 4.322683, 4.205568, 3.966213, 4.200617, 4.210513, 4.059549, 4.249864, 4.317866, 4.269404, 4.210513, 4.17079, 4.293703,
   3.997567, 4.049284, 4.18573, 3.955707, 4.13572, 3.997567, 4.13572, 4.125645, 4.085097, 4.085097, 4.130685, 4.08, 4.069787, 4.013152, 4.044142, 3.987143,
   4.090187, 4.05442, 4.095271, 4.069787, 3.93461, 3.843655, 3.827379, 3.966213, 3.950443, 3.897415, 4.069787, 4.140748, 3.971456, 3.93461, 3.897415, 4.033839,
   3.832812, 3.694597, 4.023509, 3.90275, 3.821939, 4.018334, 3.93461, 3.865248, 3.950443, 3.918712, 3.838237, 3.992359, 3.913399, 3.897415, 3.750494, 3.772621,
   3.816491, 3.783636, 3.778133, 3.805571, 3.981921, 3.789132, 3.816491, 3.821939, 3.783636, 3.778133, 3.574369, 3.750494, 3.688961, 3.881365, 3.966213, 3.733813,
   3.750494, 3.637841, 3.700225, 3.65496, 3.811035, 3.811035, 3.865248, 3.694597, 3.688961, 3.649263, 3.614889, 3.849064, 3.666329, 3.722651, 3.694597, 3.783636,
   3.728236, 3.789132, 3.666329, 3.574369, 3.545142, 3.568543, 3.620641, 3.854467, 3.705844, 3.603358, 3.580185, 3.626383, 3.744942, 3.750494, 3.870628, 3.485954,
   3.694597, 3.585993, 3.591791, 3.568543, 3.744942, 3.431811, 3.413573, 3.443916, 3.609128, 3.556862, 3.413573, 3.40136, 3.551007, 3.580185, 3.497871, 3.468,
   3.580185, 3.461995, 3.491918, 3.672, 3.419663, 3.407472, 3.562707, 3.389103, 3.283069, 3.314608, 3.443916, 3.491918, 3.358264, 3.276725, 3.443916, 3.431811,
   3.479979, 3.497871, 3.425743, 3.283069, 3.539268, 3.407472, 3.199615, 3.413573, 3.289401, 3.289401, 3.314608, 3.370633, 3.314608, 3.443916, 3.345849, 3.314608,
   3.160354, 3.509749, 3.289401, 3.276725, 3.473995, 3.289401, 3.264, 3.276725, 3.389103, 3.295721, 3.180045, 3.251225, 3.345849, 3.199615, 3.257619, 3.276725,
   3.113925, 3.251225, 3.264, 3.1206, 3.07357, 3.295721, 3.133907, 3.100532, 3.251225, 3.133907, 3.032678, 3.407472, 3.153763, 3.206112, 3.244819, 3.2384,
   3.107235, 3.308324, 3.08708, 3.199615, 3.166932, 3.053192, 3.127261, 2.94213, 3.339624, 3.225523, 3.093813, 3.005108, 3.113925, 2.998175, 2.920835, 3.147159,
   3.080332, 2.998175, 3.1206, 3.113925, 2.870534, 3.005108, 3.066792, 3.005108, 2.920835, 2.892199, 2.970285, 3.032678, 3.032678, 2.913703, 3.100532, 3.018924,
   2.963271, 2.819336, 2.956241, 2.848705, 2.963271, 3.053192, 3.025809, 2.892199, 2.856, 2.991227, 2.848705, 2.935049, 2.870534, 2.991227, 3.005108, 3.04637,
   2.877774, 2.856, 3.066792, 2.863276, 3.107235, 2.690945, 2.892199, 2.819336, 2.841391, 2.841391, 2.7747, 2.652, 2.906553, 2.884996, 2.956241, 2.729334,
   3.018924, 2.899385, 2.834059, 2.782189, 2.523341, 2.797107, 2.826707, 2.531573, 2.834059, 2.826707, 2.714043, 2.848705, 2.652, 2.848705, 2.690945, 2.759661,
   3.012024, 2.572342, 2.819336, 2.804536, 2.811946, 2.531573, 2.698666, 2.683201, 2.721699, 2.877774, 2.596496, 2.977282, 2.877774, 2.804536, 2.698666, 2.596496,
   2.675435, 2.58847, 2.782189, 2.659835, 2.877774, 2.644142, 2.636261, 2.7747, 2.804536, 2.698666, 2.612475, 2.75211, 2.804536, 2.690945, 2.580419, 2.580419,
   2.698666, 2.667646, 2.628356, 2.604498, 2.767191, 2.736947, 2.644142, 2.759661, 2.515081, 2.580419, 2.413761, 2.556113, 2.481767, 2.690945, 2.464941, 2.659835,
   2.736947, 2.644142, 2.422366, 2.652, 2.490137, 2.659835, 2.652, 2.370266, 2.698666, 2.280789, 2.56424, 2.413761, 2.841391, 2.456485, 2.523341, 2.628356,
   2.620427, 2.361471, 2.644142, 2.298963, 2.352643, 2.396457, 2.667646, 2.481767, 2.379028, 2.325958, 2.448, 2.580419, 2.370266, 2.572342, 2.49848, 2.690945,
   2.596496, 2.439485, 2.506794, 2.298963, 2.456485, 2.422366, 2.379028, 2.298963, 2.547959, 2.343782, 2.547959, 2.370266, 2.298963, 2.53978, 2.070374, 2.352643,
   2.206597, 2.379028, 2.361471, 2.13957, 2.334887, 2.298963, 2.370266, 2.490137, 2.307997, 2.361471, 2.325958, 2.387759, 2.456485, 2.225377, 2.343782, 2.12003,
   2.289894, 2.253254, 2.473369, 2.361471, 2.234708, 2.298963, 2.325958, 2.216007, 2.12003, 2.253254, 2.244, 2.234708, 2.187656, 2.334887, 2.325958, 2.298963,
   2.149273, 2.234708, 2.158933, 2.298963, 2.149273, 2.280789, 2.253254, 2.262469, 2.225377, 2.253254, 2.325958, 2.271648, 2.379028, 2.352643, 2.216007, 2.04,
   2.187656, 2.110192, 2.234708, 2.187656, 2.129823, 2.307997, 2.149273, 2.050175, 2.158933, 2.12003, 1.967305, 2.234708, 2.253254, 2.090378, 2.050175, 2.12003,
   2.050175, 2.13957, 2.100309, 2.16855, 1.924532, 2.253254, 2.334887, 2.253254, 2.262469, 2.197147, 1.956699, 2.225377, 2.060299, 2.158933, 2.216007, 1.998784,
   1.977853, 2.13957, 2.12003, 2.129823, 2.0804, 1.790093, 1.977853, 2.197147, 2.110192, 1.902785, 1.869691, 2.253254, 1.778431, 2.129823, 1.977853, 1.956699,
   1.902785, 1.754874, 2.029774, 1.967305, 2.0804, 1.988346, 2.019497, 1.935314, 2.149273, 1.766692, 1.988346, 2.009167, 1.778431, 1.801679, 1.988346, 2.149273,
   1.935314, 1.801679, 1.977853, 1.946036, 1.754874, 2.019497, 1.998784, 1.935314, 1.869691, 1.977853, 1.836, 2.178124, 2.129823, 1.902785, 1.824631, 1.869691,
   1.847299, 1.824631, 1.935314, 2.04, 1.790093, 1.813192, 2.110192, 1.778431, 1.946036, 2.04, 1.847299, 1.891818, 1.880787, 1.778431, 1.824631, 2.009167,
   1.682227, 2.029774, 1.967305, 1.706786, 1.858528, 1.880787, 1.657304, 1.91369, 1.946036, 1.813192, 1.778431, 1.946036, 1.858528, 1.858528, 1.632, 1.801679,
   1.754874, 1.836, 1.902785, 1.754874, 1.824631, 1.847299, 1.706786, 1.754874, 1.824631, 1.766692, 1.790093, 1.706786, 1.606298, 1.891818, 1.694551, 1.766692,
   1.801679, 1.657304, 1.847299, 1.754874, 1.566954, 1.593291, 1.682227, 1.766692, 1.956699, 1.682227, 1.694551, 1.657304, 1.847299, 1.526596, 1.580177, 1.742977,
   1.580177, 1.669812, 1.766692, 1.813192, 1.413353, 1.632, 1.778431, 1.858528, 1.428, 1.566954, 1.580177, 1.706786, 1.730997, 1.824631, 1.778431, 1.657304,
   1.540166, 1.682227, 1.540166, 1.398554, 1.485142, 1.836, 1.512904, 1.790093, 1.442498, 1.880787, 1.566954, 1.606298, 1.485142, 1.512904, 1.6192, 1.540166,
   1.512904, 1.718935, 1.657304, 1.730997, 1.801679, 1.512904, 1.580177, 1.322071, 1.485142, 1.512904, 1.657304, 1.580177, 1.456851, 1.540166, 1.606298, 1.566954,
   1.428, 1.606298, 1.632, 1.644701, 1.644701, 1.512904, 1.669812, 1.593291, 1.566954, 1.485142, 1.442498, 1.499088, 1.456851, 1.27398, 1.442498, 1.442498,
   1.566954, 1.499088, 1.526596, 1.566954, 1.540166, 1.499088, 1.566954, 1.566954, 1.566954, 1.566954, 1.413353, 1.368474, 1.540166, 1.499088, 1.526596, 1.442498,
   1.6192, 1.778431, 1.428, 1.428, 1.632, 1.580177, 1.322071, 1.540166, 1.368474, 1.657304, 1.322071, 1.442498, 1.606298, 1.456851, 1.442498, 1.353183,
   1.456851, 1.153998, 1.526596, 1.428, 1.290209, 1.337717, 1.428, 1.353183, 1.398554, 1.27398, 1.306237, 1.368474, 1.471065, 1.383595, 1.383595, 1.240884,
   1.368474, 1.25754, 1.20688, 1.526596, 1.368474, 1.398554, 1.306237 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_DHZfirst_2b1c_Z_mass_fx1123,Graph_from_VH_DHZfirst_2b1c_Z_mass_fy1123,Graph_from_VH_DHZfirst_2b1c_Z_mass_fex1123,Graph_from_VH_DHZfirst_2b1c_Z_mass_fey1123);
   gre->SetName("Graph_from_VH_DHZfirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1123 = new TH1F("Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1123","",1000,0,2200);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1123->SetMinimum(-96.93075);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1123->SetMaximum(893.329);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1123->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1123->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1123->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1123->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1123->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1123->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1123->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1123->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1123->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1123->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1123->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1123);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_Z_mass","Data (BTagCSV, 2017)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_mass_DHZfirst_VR_17->cd();
  
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
   
   TH1D *data_mc_ratio__124 = new TH1D("data_mc_ratio__124","",1000,0,2000);
   data_mc_ratio__124->SetBinContent(26,1.009777);
   data_mc_ratio__124->SetBinContent(27,0.979054);
   data_mc_ratio__124->SetBinContent(28,0.9715265);
   data_mc_ratio__124->SetBinContent(29,0.9269103);
   data_mc_ratio__124->SetBinContent(30,1.012251);
   data_mc_ratio__124->SetBinContent(61,1.020032);
   data_mc_ratio__124->SetBinContent(62,0.9410462);
   data_mc_ratio__124->SetBinContent(63,0.9704064);
   data_mc_ratio__124->SetBinContent(64,0.9646734);
   data_mc_ratio__124->SetBinContent(65,0.9994659);
   data_mc_ratio__124->SetBinContent(1000,0.7352941);
   data_mc_ratio__124->SetBinContent(1001,0.9971348);
   data_mc_ratio__124->SetBinError(26,0.05193734);
   data_mc_ratio__124->SetBinError(27,0.0467277);
   data_mc_ratio__124->SetBinError(28,0.04236057);
   data_mc_ratio__124->SetBinError(29,0.03899541);
   data_mc_ratio__124->SetBinError(30,0.03828686);
   data_mc_ratio__124->SetBinError(61,0.0358846);
   data_mc_ratio__124->SetBinError(62,0.03433926);
   data_mc_ratio__124->SetBinError(63,0.03524675);
   data_mc_ratio__124->SetBinError(64,0.03496938);
   data_mc_ratio__124->SetBinError(65,0.03564977);
   data_mc_ratio__124->SetBinError(1000,0.4245223);
   data_mc_ratio__124->SetBinError(1001,0.02224506);
   data_mc_ratio__124->SetMinimum(0.4);
   data_mc_ratio__124->SetMaximum(1.6);
   data_mc_ratio__124->SetEntries(435.4111);
   data_mc_ratio__124->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__124->SetLineColor(ci);
   data_mc_ratio__124->SetLineWidth(2);
   data_mc_ratio__124->SetMarkerStyle(20);
   data_mc_ratio__124->SetMarkerSize(1.2);
   data_mc_ratio__124->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__124->GetXaxis()->SetRange(1,150);
   data_mc_ratio__124->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__124->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__124->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__124->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__124->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__124->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__124->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__124->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__124->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__124->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__124->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__124->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__124->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__124->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__124->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__124->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1124[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1124[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1124[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1124[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0.02334436, 0.02132977, 0.01941107, 0.01829404, 0.01718781, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01604783, 0.01598824, 0.01616059, 0.01608099, 0.016106,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.3201562 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1124,Graph_from_mc_statistical_error_fy1124,Graph_from_mc_statistical_error_fex1124,Graph_from_mc_statistical_error_fey1124);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1124 = new TH1F("Graph_Graph_from_mc_statistical_error1124","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1124->SetMinimum(0.6158125);
   Graph_Graph_from_mc_statistical_error1124->SetMaximum(1.384187);
   Graph_Graph_from_mc_statistical_error1124->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1124->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1124->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1124->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1124->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1124->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1124->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1124->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1124->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1124->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1124->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1124);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_DHZfirst_VR_17->cd();
   Z_mass_DHZfirst_VR_17->Modified();
   Z_mass_DHZfirst_VR_17->cd();
   Z_mass_DHZfirst_VR_17->SetSelected(Z_mass_DHZfirst_VR_17);
}
