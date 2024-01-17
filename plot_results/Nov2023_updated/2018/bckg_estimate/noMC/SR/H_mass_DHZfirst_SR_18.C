#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_DHZfirst_SR_18()
{
//=========Macro generated from canvas: H_mass_DHZfirst_SR_18/H_mass_DHZfirst_SR_18
//=========  (Sat Dec  9 13:50:15 2023) by ROOT version 6.28/10
   TCanvas *H_mass_DHZfirst_SR_18 = new TCanvas("H_mass_DHZfirst_SR_18", "H_mass_DHZfirst_SR_18",0,0,600,600);
   H_mass_DHZfirst_SR_18->SetHighLightColor(2);
   H_mass_DHZfirst_SR_18->Range(0,0,1,1);
   H_mass_DHZfirst_SR_18->SetFillColor(0);
   H_mass_DHZfirst_SR_18->SetFillStyle(4000);
   H_mass_DHZfirst_SR_18->SetBorderMode(0);
   H_mass_DHZfirst_SR_18->SetBorderSize(2);
   H_mass_DHZfirst_SR_18->SetFrameFillStyle(1000);
   H_mass_DHZfirst_SR_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-4.168677,315.7258,4174.508);
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
   st->SetMaximum(3756.64);
   
   TH1F *st_stack_59 = new TH1F("st_stack_59","",1000,0,2000);
   st_stack_59->SetMinimum(0.01);
   st_stack_59->SetMaximum(3756.64);
   st_stack_59->SetDirectory(nullptr);
   st_stack_59->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_59->SetLineColor(ci);
   st_stack_59->SetLineWidth(0);
   st_stack_59->GetXaxis()->SetRange(1,150);
   st_stack_59->GetXaxis()->SetLabelFont(42);
   st_stack_59->GetXaxis()->SetTitleOffset(1);
   st_stack_59->GetXaxis()->SetTitleFont(42);
   st_stack_59->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_59->GetYaxis()->SetLabelFont(42);
   st_stack_59->GetYaxis()->SetLabelSize(0.05);
   st_stack_59->GetYaxis()->SetTitleSize(0.057);
   st_stack_59->GetYaxis()->SetTitleOffset(1.2);
   st_stack_59->GetYaxis()->SetTitleFont(42);
   st_stack_59->GetZaxis()->SetLabelFont(42);
   st_stack_59->GetZaxis()->SetTitleOffset(1);
   st_stack_59->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_59);
   
   
   TH1D *VH_DHZfirst_2b1c_H_mass_stack_1 = new TH1D("VH_DHZfirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(48,834.432);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(49,1671.408);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(50,1690.488);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(51,1675.648);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(52,1658.688);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(53,1612.896);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(54,1635.792);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(55,1646.816);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(56,1587.032);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(57,1646.604);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(58,1613.744);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(59,1590.424);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(60,1575.796);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(61,1591.06);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(62,1540.18);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(63,1578.128);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(64,1528.944);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(65,1571.556);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(66,1548.66);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(67,1528.096);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(68,1520.676);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(69,1532.76);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(70,1534.244);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(71,1490.572);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(72,1431.636);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(73,1457.288);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(74,1436.3);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(75,1427.82);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(76,1412.768);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(77,1398.564);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(78,679.036);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(1000,4.876);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(1001,2576.86);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(10,0.212);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(11,0.2998133);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(13,0.4740464);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(14,0.636);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(15,1.437854);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(16,1.954543);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(17,2.756);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(18,3.786441);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(19,4.935549);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(20,6.111339);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(21,7.129633);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(22,8.57749);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(23,9.988778);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(24,11.17182);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(25,12.44315);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(26,13.60934);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(27,14.72904);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(28,15.42218);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(29,16.27713);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(30,16.9494);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(31,17.44465);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(32,17.95003);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(33,18.22584);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(34,18.39764);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(35,18.67165);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(36,18.99146);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(37,19.32808);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(38,19.40234);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(39,19.28384);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(40,19.38148);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(41,19.35828);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(42,19.30132);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(43,19.29666);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(44,19.34667);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(45,19.41624);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(46,18.98199);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(47,19.05525);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(48,18.80358);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(49,18.82388);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(50,18.93102);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(51,18.84774);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(52,18.75212);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(53,18.49146);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(54,18.62224);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(55,18.68489);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(56,18.34259);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(57,18.68368);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(58,18.49632);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(59,18.36219);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(60,18.27755);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(61,18.36586);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(62,18.06981);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(63,18.29107);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(64,18.00378);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(65,18.25294);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(66,18.11949);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(67,17.99879);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(68,17.95504);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(69,18.02623);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(70,18.03496);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(71,17.77642);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(72,17.42145);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(73,17.57683);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(74,17.4498);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(75,17.39821);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(76,17.30627);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(77,17.21905);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(78,17.08541);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(79,16.99574);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(80,16.83899);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(81,16.6673);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(82,16.64166);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(83,16.56587);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(84,16.47746);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(85,16.2315);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(86,16.17881);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(87,16.21488);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(88,15.95925);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(89,15.95502);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(90,15.71805);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(91,15.86321);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(92,15.52095);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(93,15.6119);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(94,15.62341);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(95,15.32864);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(96,15.27283);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(97,15.28754);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(98,14.99966);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(99,14.77322);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(100,14.87025);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(101,14.83243);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(102,14.61724);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(103,14.5278);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(104,14.75039);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(105,14.4487);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(106,14.25296);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(107,14.42691);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(108,14.40352);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(109,14.10557);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(110,14.0545);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(111,13.9534);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(112,13.85806);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(113,13.82233);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(114,13.73099);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(115,13.7228);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(116,13.47827);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(117,13.55474);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(118,13.4315);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(119,13.29698);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(120,13.17474);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(121,13.32231);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(122,13.29529);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(123,12.85357);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(124,13.0324);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(125,13.04791);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(126,12.95457);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(127,13.01169);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(128,12.77465);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(129,12.87627);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(130,12.7094);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(131,12.67398);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(132,12.76057);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(133,12.56536);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(134,12.45038);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(135,12.41965);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(136,12.33068);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(137,12.44315);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(138,12.47382);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(139,12.37978);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(140,12.18401);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(141,12.22819);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(142,12.15076);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(143,12.2006);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(144,12.10073);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(145,12.06166);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(146,12.18216);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(147,12.09887);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(148,11.94371);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(149,11.76361);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(150,11.77507);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(151,11.66193);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(152,11.63299);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(153,11.64843);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(154,11.41064);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(155,11.65036);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(156,11.64457);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(157,11.58653);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(158,11.58653);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(159,11.43229);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(160,11.4911);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(161,11.29982);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(162,11.244);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(163,11.20195);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(164,11.10322);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(165,11.52235);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(166,11.13151);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(167,11.25399);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(168,11.14967);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(169,11.07484);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(170,10.96473);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(171,11.21598);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(172,11.12748);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(173,11.07281);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(174,10.89688);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(175,10.98929);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(176,10.90719);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(177,10.76826);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(178,10.88037);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(179,10.76618);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(180,11.07484);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(181,10.51272);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(182,10.58939);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(183,10.70757);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(184,10.8452);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(185,10.61483);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(186,10.69497);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(187,10.42471);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(188,10.67605);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(189,10.61059);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(190,10.49989);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(191,10.28145);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(192,10.26176);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(193,10.36634);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(194,10.46129);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(195,10.05604);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(196,10.23545);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(197,10.43979);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(198,10.22227);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(199,10.06274);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(200,10.36418);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(201,10.10509);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(202,10.176);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(203,10.01349);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(204,9.930113);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(205,10.02471);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(206,10.06274);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(207,10.03367);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(208,9.89838);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(209,9.745085);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(210,9.909725);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(211,9.820887);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(212,9.893838);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(213,9.973017);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(214,9.765816);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(215,9.911992);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(216,9.684943);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(217,9.687263);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(218,9.659386);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(219,9.689583);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(220,9.749695);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(221,9.745085);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(222,9.54471);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(223,9.450065);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(224,9.54471);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(225,9.629095);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(226,9.238434);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(227,9.39282);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(228,9.390427);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(229,9.416715);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(230,9.240866);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(231,9.318359);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(232,9.294212);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(233,9.421486);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(234,9.223827);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(235,9.279693);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(236,9.172522);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(237,9.123392);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(238,9.416715);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(239,8.85338);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(240,8.976892);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(241,9.170072);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(242,9.113535);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(243,9.004386);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(244,9.034285);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(245,8.710079);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(246,8.873663);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(247,9.021839);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(248,9.016856);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(249,8.91661);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(250,8.805021);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(251,8.85338);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(252,8.896425);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(253,8.640138);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(254,8.753829);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(255,8.810124);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(256,8.634935);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(257,8.697169);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(258,8.421498);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(259,8.722969);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(260,8.769218);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(261,8.748693);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(262,8.572248);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(263,8.838137);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(264,8.68424);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(265,8.621913);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(266,8.572248);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(267,8.49853);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(268,8.51438);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(269,8.5091);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(270,8.553878);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(271,8.378695);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(272,8.548622);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(273,8.34914);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(274,8.335672);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(275,8.092182);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(276,8.213461);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(277,8.191544);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(278,8.218931);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(279,8.240776);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(280,8.351831);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(281,8.155803);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(282,8.06715);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(283,8.136493);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(284,8.097734);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(285,8.108827);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(286,8.284292);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(287,7.798027);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(288,8.081066);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(289,8.058789);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(290,8.094958);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(291,7.82392);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(292,8.030855);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(293,7.940808);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(294,7.87545);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(295,7.734369);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(296,7.835401);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(297,7.966237);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(298,7.898245);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(299,7.841135);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(300,7.751782);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(301,7.667252);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(302,7.699424);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(303,7.722738);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(304,7.634944);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(305,7.629055);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(306,7.590666);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(307,7.584743);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(308,7.719828);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(309,7.611361);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(310,7.725648);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(311,7.501326);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(312,7.447207);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(313,7.471308);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(314,7.44117);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(315,7.423028);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(316,7.501326);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(317,7.519279);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(318,7.495332);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(319,7.501326);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(320,7.459268);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(321,7.254614);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(322,7.46529);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(323,7.186143);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(324,7.297852);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(325,7.201762);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(326,7.291691);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(327,7.340835);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(328,7.232898);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(329,7.186143);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(330,6.999211);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(331,7.173624);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(332,7.304008);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(333,7.16422);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(334,7.211117);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(335,7.044017);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(336,7.161083);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(337,7.002421);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(338,6.967031);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(339,7.044017);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(340,7.02485);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(341,6.90222);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(342,7.012042);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(343,6.915231);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(344,7.063132);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(345,6.908728);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(346,7.040826);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(347,7.00563);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(348,6.872856);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(349,6.790622);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(350,6.757448);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(351,7.002421);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(352,7.047207);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(353,6.800542);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(354,6.784);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(355,6.84993);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(356,6.7408);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(357,6.954117);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(358,6.653558);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(359,6.737465);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(360,6.623092);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(361,6.551452);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(362,6.677159);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(363,6.482487);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(364,6.595892);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(365,6.527397);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(366,6.472079);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(367,6.548021);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(368,6.482487);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(369,6.530839);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(370,6.260285);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(371,6.423285);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(372,6.472079);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(373,6.426783);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(374,6.40226);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(375,6.444242);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(376,6.367063);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(377,6.391721);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(378,6.111339);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(379,6.503253);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(380,6.288936);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(381,6.191707);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(382,6.324568);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(383,6.180809);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(384,6.288936);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(385,6.335218);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(386,6.177172);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(387,6.198961);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(388,6.363532);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(389,6.36);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(390,5.962441);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(391,6.12236);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(392,6.235107);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(393,6.24591);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(394,6.177172);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(395,6.070756);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(396,5.947346);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(397,6.067053);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(398,6.033626);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(399,5.88658);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(400,5.905637);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(401,5.939785);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(402,5.71221);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(403,6.048505);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(404,5.992517);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(405,5.89421);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(406,5.875116);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(407,5.909441);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(408,5.774812);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(409,5.743596);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(410,5.716143);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(411,5.700396);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(412,5.905637);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(413,5.969974);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(414,5.82518);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(415,5.89421);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(416,5.89421);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(417,5.813595);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(418,5.672733);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(419,5.604985);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(420,5.612998);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(421,5.700396);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(422,5.704337);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(423,5.767023);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(424,5.556665);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(425,5.375778);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(426,5.584903);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(427,5.544519);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(428,5.688557);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(429,5.316933);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(430,5.425709);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(431,5.664805);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(432,5.532347);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(433,5.442251);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(434,5.392473);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(435,5.495668);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(436,5.367411);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(437,5.652892);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(438,5.520148);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(439,5.240304);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(440,5.433986);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(441,5.454624);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(442,5.450503);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(443,5.350638);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(444,5.3);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(445,5.499756);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(446,5.304238);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(447,5.363223);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(448,5.316933);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(449,5.291513);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(450,5.218818);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(451,5.153824);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(452,5.205884);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(453,5.223122);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(454,5.184256);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(455,5.00338);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(456,5.162537);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(457,5.192918);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(458,5.061431);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(459,4.912731);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(460,5.034721);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(461,5.030256);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(462,5.096826);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(463,4.885209);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(464,5.00338);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(465,5.110036);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(466,5.00338);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(467,5.00338);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(468,5.034721);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(469,5.083581);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(470,5.131977);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(471,5.048094);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(472,4.83899);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(473,4.876);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(474,4.989887);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(475,4.754664);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(476,4.871389);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(477,4.980872);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(478,4.773532);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(479,4.787634);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(480,4.85753);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(481,4.69282);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(482,4.735721);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(483,4.889807);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(484,4.989887);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(485,4.768822);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(486,4.668816);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(487,4.716702);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(488,4.730974);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(489,4.801695);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(490,4.745202);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(491,4.668816);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(492,4.678432);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(493,4.782938);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(494,4.688029);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(495,4.778237);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(496,4.673626);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(497,4.600937);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(498,4.63015);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(499,4.581359);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(500,4.697606);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(501,4.615567);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(502,4.697606);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(503,4.59605);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(504,4.702387);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(505,4.406337);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(506,4.639847);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(507,4.38589);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(508,4.541948);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(509,4.654354);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(510,4.659179);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(511,4.42669);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(512,4.581359);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(513,4.522115);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(514,4.502193);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(515,4.477167);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(516,4.197386);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(517,4.329163);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(518,4.406337);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(519,4.33435);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(520,4.213417);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(521,4.339532);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(522,4.467117);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(523,4.487194);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(524,4.318768);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(525,4.401234);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(526,4.401234);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(527,4.365347);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(528,4.487194);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(529,4.202736);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(530,4.380763);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(531,4.28219);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(532,4.229387);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(533,4.276939);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(534,4.25587);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(535,4.15974);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(536,4.22407);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(537,4.154335);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(538,4.250587);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(539,4.329163);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(540,4.245297);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(541,4.261147);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(542,4.143502);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(543,4.20808);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(544,4.181294);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(545,4.24);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(546,3.943428);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(547,4.186665);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(548,4.044702);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(549,4.116295);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(550,3.774553);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(551,4.121751);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(552,4.197386);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(553,3.82776);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(554,4.105362);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(555,4.000008);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(556,3.851171);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(557,3.874441);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(558,4.022417);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(559,4.110833);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(560,4.083408);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(561,3.994386);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(562,3.960487);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(563,3.798292);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(564,3.886024);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(565,3.696346);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(566,3.862824);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(567,3.926295);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(568,3.954809);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(569,4.005622);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(570,3.750663);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(571,3.994386);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(572,3.954809);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(573,3.82776);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(574,3.845332);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(575,3.72662);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(576,3.821884);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(577,3.839483);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(578,3.909087);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(579,3.702421);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(580,3.702421);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(581,3.868637);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(582,3.702421);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(583,3.914831);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(584,3.774553);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(585,3.732645);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(586,3.684167);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(587,3.780502);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(588,3.810107);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(589,3.845332);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(590,3.547439);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(591,3.647386);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(592,3.868637);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(593,3.720585);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(594,3.671948);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(595,3.75665);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(596,3.671948);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(597,3.616449);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(598,3.604);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(599,3.786441);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(600,3.845332);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(601,3.311546);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(602,3.528383);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(603,3.547439);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(604,3.515622);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(605,3.671948);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(606,3.61023);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(607,3.553768);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(608,3.665823);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(609,3.684167);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(610,3.585245);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(611,3.477059);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(612,3.671948);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(613,3.43152);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(614,3.560085);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(615,3.385369);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(616,3.464109);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(617,3.345304);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(618,3.444592);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(619,3.502815);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(620,3.477059);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(621,3.45111);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(622,3.457615);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(623,3.477059);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(624,3.48996);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(625,3.578972);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(626,3.372066);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(627,3.372066);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(628,3.270577);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(629,3.438062);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(630,3.392);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(631,3.534746);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(632,3.547439);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(633,3.43152);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(634,3.365396);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(635,3.385369);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(636,3.560085);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(637,3.483515);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(638,3.331842);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(639,3.27744);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(640,3.32509);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(641,3.23604);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(642,3.263699);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(643,3.215139);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(644,3.020535);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(645,3.297946);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(646,3.256806);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(647,3.411817);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(648,3.311546);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(649,3.158729);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(650,3.311546);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(651,3.165835);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(652,3.352014);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(653,3.072172);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(654,3.208142);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(655,3.101293);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(656,3.10853);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(657,2.983104);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(658,3.345304);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(659,3.23604);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(660,3.229088);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(661,3.28429);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(662,3.158729);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(663,3.372066);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(664,2.998133);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(665,3.094038);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(666,3.187059);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(667,3.187059);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(668,3.050149);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(669,3.064848);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(670,3.144468);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(671,3.27744);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(672,2.867883);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(673,2.983104);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(674,3.137314);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(675,3.130142);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(676,3.10853);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(677,3.042772);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(678,2.922218);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(679,2.998133);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(680,3.005619);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(681,3.130142);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(682,3.072172);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(683,2.968);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(684,3.005619);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(685,2.922218);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(686,3.130142);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(687,2.731429);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(688,3.013086);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(689,3.151607);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(690,3.079478);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(691,3.079478);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(692,3.005619);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(693,2.844278);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(694,3.005619);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(695,2.714925);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(696,2.828433);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(697,2.952818);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(698,2.812498);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(699,2.852168);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(700,2.937558);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(701,2.922218);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(702,2.990628);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(703,2.780354);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(704,3.050149);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(705,2.836367);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(706,3.130142);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(707,2.647879);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(708,2.852168);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(709,2.706635);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(710,3.020535);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(711,2.922218);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(712,2.922218);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(713,2.77226);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(714,2.998133);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(715,2.945198);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(716,2.867883);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(717,2.756);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(718,2.780354);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(719,2.764142);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(720,2.673218);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(721,2.544);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(722,2.796472);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(723,2.77226);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(724,2.756);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(725,2.77226);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(726,2.788425);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(727,2.714925);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(728,2.875708);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(729,2.622295);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(730,2.731429);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(731,2.630851);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(732,2.517361);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(733,2.77226);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(734,2.723189);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(735,2.804496);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(736,2.812498);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(737,2.764142);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(738,2.723189);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(739,2.804496);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(740,2.647879);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(741,2.739644);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(742,2.739644);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(743,2.579091);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(744,2.639379);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(745,2.613712);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(746,2.6051);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(747,2.472324);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(748,2.579091);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(749,2.647879);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(750,2.535151);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(751,2.58779);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(752,2.673218);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(753,2.552818);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(754,2.681611);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(755,2.836367);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(756,2.714925);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(757,2.499443);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(758,2.544);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(759,2.561606);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(760,2.656352);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(761,2.370232);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(762,2.370232);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(763,2.780354);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(764,2.622295);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(765,2.302909);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(766,2.535151);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(767,2.544);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(768,2.341617);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(769,2.360732);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(770,2.444903);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(771,2.535151);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(772,2.481396);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(773,2.490436);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(774,2.426451);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(775,2.552818);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(776,2.535151);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(777,2.463217);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(778,2.332);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(779,2.472324);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(780,2.579091);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(781,2.312647);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(782,2.526272);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(783,2.561606);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(784,2.417172);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(785,2.535151);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(786,2.426451);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(787,2.407857);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(788,2.435695);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(789,2.243597);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(790,2.312647);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(791,2.398506);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(792,2.398506);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(793,2.398506);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(794,2.243597);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(795,2.454077);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(796,2.407857);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(797,2.389119);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(798,2.341617);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(799,2.508418);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(800,2.293131);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(801,2.370232);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(802,2.243597);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(803,2.508418);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(804,2.172354);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(805,2.223475);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(806,2.28331);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(807,2.192945);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(808,2.517361);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(809,2.044454);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(810,2.182674);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(811,2.06632);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(812,2.370232);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(813,2.243597);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(814,2.454077);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(815,2.12);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(816,2.322344);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(817,2.243597);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(818,2.161984);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(819,2.130574);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(820,2.223475);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(821,2.130574);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(822,2.203169);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(823,2.130574);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(824,2.033433);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(825,2.087958);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(826,2.263541);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(827,2.182674);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(828,2.022351);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(829,2.098693);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(830,2.109373);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(831,2.130574);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(832,2.161984);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(833,2.000004);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(834,2.172354);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(835,2.379694);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(836,2.033433);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(837,2.203169);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(838,2.151565);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(839,2.022351);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(840,2.243597);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(841,2.011209);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(842,2.044454);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(843,2.243597);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(844,2.087958);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(845,2.253591);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(846,2.253591);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(847,2.203169);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(848,2.192945);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(849,2.151565);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(850,2.022351);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(851,2.087958);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(852,1.908);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(853,1.988736);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(854,2.273447);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(855,2.203169);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(856,2.098693);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(857,2.213345);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(858,2.06632);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(859,2.044454);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(860,2.06632);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(861,2.087958);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(862,1.79888);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(863,2.151565);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(864,1.954543);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(865,1.988736);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(866,2.087958);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(867,1.823693);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(868,1.988736);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(869,2.000004);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(870,1.773719);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(871,2.077167);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(872,2.000004);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(873,2.109373);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(874,1.966007);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(875,1.79888);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(876,1.884297);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(877,2.12);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(878,1.977404);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(879,1.908);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(880,2.011209);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(881,2.044454);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(882,1.860292);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(883,2.130574);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(884,1.919742);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(885,1.931412);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(886,2.087958);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(887,2.109373);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(888,1.628403);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(889,1.908);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(890,1.761004);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(891,2.055416);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(892,1.896186);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(893,2.022351);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(894,1.884297);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(895,1.735295);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(896,1.896186);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(897,1.586463);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(898,2.033433);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(899,1.860292);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(900,1.748197);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(901,1.988736);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(902,1.988736);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(903,2.06632);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(904,1.735295);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(905,1.848173);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(906,1.66929);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(907,1.908);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(908,1.79888);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(909,1.860292);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(910,1.586463);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(911,1.761004);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(912,1.773719);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(913,1.722296);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(914,1.748197);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(915,1.919742);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(916,1.872333);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(917,1.682698);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(918,1.943012);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(919,1.786344);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(920,1.884297);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(921,1.682698);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(922,1.655773);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(923,1.872333);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(924,1.696);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(925,1.79888);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(926,1.786344);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(927,1.709199);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(928,1.811329);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(929,1.943012);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(930,1.896186);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(931,1.931412);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(932,1.586463);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(933,1.896186);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(934,1.761004);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(935,1.773719);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(936,1.614544);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(937,1.628403);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(938,1.919742);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(939,1.848173);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(940,1.655773);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(941,1.484);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(942,1.437854);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(943,1.722296);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(944,1.79888);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(945,1.628403);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(946,1.722296);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(947,1.773719);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(948,1.696);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(949,1.66929);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(950,1.696);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(951,1.735295);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(952,1.66929);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(953,1.709199);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(954,1.499066);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(955,1.586463);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(956,1.655773);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(957,1.722296);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(958,1.586463);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(959,1.614544);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(960,1.484);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(961,1.642145);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(962,1.468779);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(963,1.543383);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(964,1.655773);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(965,1.66929);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(966,1.696);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(967,1.586463);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(968,1.543383);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(969,1.543383);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(970,1.696);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(971,1.543383);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(972,1.696);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(973,1.453399);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(974,1.453399);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(975,1.600565);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(976,1.586463);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(977,1.557875);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(978,1.614544);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(979,1.340806);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(980,1.468779);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(981,1.513983);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(982,1.32394);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(983,1.614544);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(984,1.499066);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(985,1.682698);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(986,1.642145);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(987,1.543383);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(988,1.586463);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(989,1.373917);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(990,1.709199);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(991,1.66929);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(992,1.513983);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(993,1.557875);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(994,1.557875);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(995,1.528754);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(996,1.600565);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(997,1.586463);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(998,1.390177);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(999,1.390177);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(1000,1.437854);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(1001,23.37294);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetEntries(1303947);

   ci = TColor::GetColor("#ff6600");
   VH_DHZfirst_2b1c_H_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_H_mass_stack_1->SetLineColor(ci);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetXaxis()->SetRange(1,2000);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_2b1c_H_mass_stack_1,"");
   st->Draw("hist");
   
   TH1D *VH_DHZfirst_H_mass__117 = new TH1D("VH_DHZfirst_H_mass__117","",1000,0,2000);
   VH_DHZfirst_H_mass__117->SetBinContent(1000,5);
   VH_DHZfirst_H_mass__117->SetBinContent(1001,2562);
   VH_DHZfirst_H_mass__117->SetEntries(264168);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_mass__117->SetLineColor(ci);
   VH_DHZfirst_H_mass__117->SetLineWidth(2);
   VH_DHZfirst_H_mass__117->SetMarkerStyle(20);
   VH_DHZfirst_H_mass__117->SetMarkerSize(1.2);
   VH_DHZfirst_H_mass__117->GetXaxis()->SetRange(1,2000);
   VH_DHZfirst_H_mass__117->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__117->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_mass__117->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__117->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__117->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__117->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__117->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_mass__117->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__117->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fx1117[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fy1117[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 834.432, 1671.408,
   1690.488, 1675.648, 1658.688, 1612.896, 1635.792, 1646.816, 1587.032, 1646.604, 1613.744, 1590.424, 1575.796, 1591.06, 1540.18, 1578.128, 1528.944, 1571.556,
   1548.66, 1528.096, 1520.676, 1532.76, 1534.244, 1490.572, 1431.636, 1457.288, 1436.3, 1427.82, 1412.768, 1398.564, 679.036, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 4.876 };
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fex1117[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fey1117[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.212, 0.2998133, 0, 0.4740464, 0.636, 1.437854, 1.954543, 2.756,
   3.786441, 4.935549, 6.111339, 7.129633, 8.57749, 9.988778, 11.17182, 12.44315, 13.60934, 14.72904, 15.42218, 16.27713, 16.9494, 17.44465, 17.95003, 18.22584,
   18.39764, 18.67165, 18.99146, 19.32808, 19.40234, 19.28384, 19.38148, 19.35828, 19.30132, 19.29666, 19.34667, 19.41624, 18.98199, 19.05525, 18.80358, 18.82388,
   18.93102, 18.84774, 18.75212, 18.49146, 18.62224, 18.68489, 18.34259, 18.68368, 18.49632, 18.36219, 18.27755, 18.36586, 18.06981, 18.29107, 18.00378, 18.25294,
   18.11949, 17.99879, 17.95504, 18.02623, 18.03496, 17.77642, 17.42145, 17.57683, 17.4498, 17.39821, 17.30627, 17.21905, 17.08541, 16.99574, 16.83899, 16.6673,
   16.64166, 16.56587, 16.47746, 16.2315, 16.17881, 16.21488, 15.95925, 15.95502, 15.71805, 15.86321, 15.52095, 15.6119, 15.62341, 15.32864, 15.27283, 15.28754,
   14.99966, 14.77322, 14.87025, 14.83243, 14.61724, 14.5278, 14.75039, 14.4487, 14.25296, 14.42691, 14.40352, 14.10557, 14.0545, 13.9534, 13.85806, 13.82233,
   13.73099, 13.7228, 13.47827, 13.55474, 13.4315, 13.29698, 13.17474, 13.32231, 13.29529, 12.85357, 13.0324, 13.04791, 12.95457, 13.01169, 12.77465, 12.87627,
   12.7094, 12.67398, 12.76057, 12.56536, 12.45038, 12.41965, 12.33068, 12.44315, 12.47382, 12.37978, 12.18401, 12.22819, 12.15076, 12.2006, 12.10073, 12.06166,
   12.18216, 12.09887, 11.94371, 11.76361, 11.77507, 11.66193, 11.63299, 11.64843, 11.41064, 11.65036, 11.64457, 11.58653, 11.58653, 11.43229, 11.4911, 11.29982,
   11.244, 11.20195, 11.10322, 11.52235, 11.13151, 11.25399, 11.14967, 11.07484, 10.96473, 11.21598, 11.12748, 11.07281, 10.89688, 10.98929, 10.90719, 10.76826,
   10.88037, 10.76618, 11.07484, 10.51272, 10.58939, 10.70757, 10.8452, 10.61483, 10.69497, 10.42471, 10.67605, 10.61059, 10.49989, 10.28145, 10.26176, 10.36634,
   10.46129, 10.05604, 10.23545, 10.43979, 10.22227, 10.06274, 10.36418, 10.10509, 10.176, 10.01349, 9.930113, 10.02471, 10.06274, 10.03367, 9.89838, 9.745085,
   9.909725, 9.820887, 9.893838, 9.973017, 9.765816, 9.911992, 9.684943, 9.687263, 9.659386, 9.689583, 9.749695, 9.745085, 9.54471, 9.450065, 9.54471, 9.629095,
   9.238434, 9.39282, 9.390427, 9.416715, 9.240866, 9.318359, 9.294212, 9.421486, 9.223827, 9.279693, 9.172522, 9.123392, 9.416715, 8.85338, 8.976892, 9.170072,
   9.113535, 9.004386, 9.034285, 8.710079, 8.873663, 9.021839, 9.016856, 8.91661, 8.805021, 8.85338, 8.896425, 8.640138, 8.753829, 8.810124, 8.634935, 8.697169,
   8.421498, 8.722969, 8.769218, 8.748693, 8.572248, 8.838137, 8.68424, 8.621913, 8.572248, 8.49853, 8.51438, 8.5091, 8.553878, 8.378695, 8.548622, 8.34914,
   8.335672, 8.092182, 8.213461, 8.191544, 8.218931, 8.240776, 8.351831, 8.155803, 8.06715, 8.136493, 8.097734, 8.108827, 8.284292, 7.798027, 8.081066, 8.058789,
   8.094958, 7.82392, 8.030855, 7.940808, 7.87545, 7.734369, 7.835401, 7.966237, 7.898245, 7.841135, 7.751782, 7.667252, 7.699424, 7.722738, 7.634944, 7.629055,
   7.590666, 7.584743, 7.719828, 7.611361, 7.725648, 7.501326, 7.447207, 7.471308, 7.44117, 7.423028, 7.501326, 7.519279, 7.495332, 7.501326, 7.459268, 7.254614,
   7.46529, 7.186143, 7.297852, 7.201762, 7.291691, 7.340835, 7.232898, 7.186143, 6.999211, 7.173624, 7.304008, 7.16422, 7.211117, 7.044017, 7.161083, 7.002421,
   6.967031, 7.044017, 7.02485, 6.90222, 7.012042, 6.915231, 7.063132, 6.908728, 7.040826, 7.00563, 6.872856, 6.790622, 6.757448, 7.002421, 7.047207, 6.800542,
   6.784, 6.84993, 6.7408, 6.954117, 6.653558, 6.737465, 6.623092, 6.551452, 6.677159, 6.482487, 6.595892, 6.527397, 6.472079, 6.548021, 6.482487, 6.530839,
   6.260285, 6.423285, 6.472079, 6.426783, 6.40226, 6.444242, 6.367063, 6.391721, 6.111339, 6.503253, 6.288936, 6.191707, 6.324568, 6.180809, 6.288936, 6.335218,
   6.177172, 6.198961, 6.363532, 6.36, 5.962441, 6.12236, 6.235107, 6.24591, 6.177172, 6.070756, 5.947346, 6.067053, 6.033626, 5.88658, 5.905637, 5.939785,
   5.71221, 6.048505, 5.992517, 5.89421, 5.875116, 5.909441, 5.774812, 5.743596, 5.716143, 5.700396, 5.905637, 5.969974, 5.82518, 5.89421, 5.89421, 5.813595,
   5.672733, 5.604985, 5.612998, 5.700396, 5.704337, 5.767023, 5.556665, 5.375778, 5.584903, 5.544519, 5.688557, 5.316933, 5.425709, 5.664805, 5.532347, 5.442251,
   5.392473, 5.495668, 5.367411, 5.652892, 5.520148, 5.240304, 5.433986, 5.454624, 5.450503, 5.350638, 5.3, 5.499756, 5.304238, 5.363223, 5.316933, 5.291513,
   5.218818, 5.153824, 5.205884, 5.223122, 5.184256, 5.00338, 5.162537, 5.192918, 5.061431, 4.912731, 5.034721, 5.030256, 5.096826, 4.885209, 5.00338, 5.110036,
   5.00338, 5.00338, 5.034721, 5.083581, 5.131977, 5.048094, 4.83899, 4.876, 4.989887, 4.754664, 4.871389, 4.980872, 4.773532, 4.787634, 4.85753, 4.69282,
   4.735721, 4.889807, 4.989887, 4.768822, 4.668816, 4.716702, 4.730974, 4.801695, 4.745202, 4.668816, 4.678432, 4.782938, 4.688029, 4.778237, 4.673626, 4.600937,
   4.63015, 4.581359, 4.697606, 4.615567, 4.697606, 4.59605, 4.702387, 4.406337, 4.639847, 4.38589, 4.541948, 4.654354, 4.659179, 4.42669, 4.581359, 4.522115,
   4.502193, 4.477167, 4.197386, 4.329163, 4.406337, 4.33435, 4.213417, 4.339532, 4.467117, 4.487194, 4.318768, 4.401234, 4.401234, 4.365347, 4.487194, 4.202736,
   4.380763, 4.28219, 4.229387, 4.276939, 4.25587, 4.15974, 4.22407, 4.154335, 4.250587, 4.329163, 4.245297, 4.261147, 4.143502, 4.20808, 4.181294, 4.24,
   3.943428, 4.186665, 4.044702, 4.116295, 3.774553, 4.121751, 4.197386, 3.82776, 4.105362, 4.000008, 3.851171, 3.874441, 4.022417, 4.110833, 4.083408, 3.994386,
   3.960487, 3.798292, 3.886024, 3.696346, 3.862824, 3.926295, 3.954809, 4.005622, 3.750663, 3.994386, 3.954809, 3.82776, 3.845332, 3.72662, 3.821884, 3.839483,
   3.909087, 3.702421, 3.702421, 3.868637, 3.702421, 3.914831, 3.774553, 3.732645, 3.684167, 3.780502, 3.810107, 3.845332, 3.547439, 3.647386, 3.868637, 3.720585,
   3.671948, 3.75665, 3.671948, 3.616449, 3.604, 3.786441, 3.845332, 3.311546, 3.528383, 3.547439, 3.515622, 3.671948, 3.61023, 3.553768, 3.665823, 3.684167,
   3.585245, 3.477059, 3.671948, 3.43152, 3.560085, 3.385369, 3.464109, 3.345304, 3.444592, 3.502815, 3.477059, 3.45111, 3.457615, 3.477059, 3.48996, 3.578972,
   3.372066, 3.372066, 3.270577, 3.438062, 3.392, 3.534746, 3.547439, 3.43152, 3.365396, 3.385369, 3.560085, 3.483515, 3.331842, 3.27744, 3.32509, 3.23604,
   3.263699, 3.215139, 3.020535, 3.297946, 3.256806, 3.411817, 3.311546, 3.158729, 3.311546, 3.165835, 3.352014, 3.072172, 3.208142, 3.101293, 3.10853, 2.983104,
   3.345304, 3.23604, 3.229088, 3.28429, 3.158729, 3.372066, 2.998133, 3.094038, 3.187059, 3.187059, 3.050149, 3.064848, 3.144468, 3.27744, 2.867883, 2.983104,
   3.137314, 3.130142, 3.10853, 3.042772, 2.922218, 2.998133, 3.005619, 3.130142, 3.072172, 2.968, 3.005619, 2.922218, 3.130142, 2.731429, 3.013086, 3.151607,
   3.079478, 3.079478, 3.005619, 2.844278, 3.005619, 2.714925, 2.828433, 2.952818, 2.812498, 2.852168, 2.937558, 2.922218, 2.990628, 2.780354, 3.050149, 2.836367,
   3.130142, 2.647879, 2.852168, 2.706635, 3.020535, 2.922218, 2.922218, 2.77226, 2.998133, 2.945198, 2.867883, 2.756, 2.780354, 2.764142, 2.673218, 2.544,
   2.796472, 2.77226, 2.756, 2.77226, 2.788425, 2.714925, 2.875708, 2.622295, 2.731429, 2.630851, 2.517361, 2.77226, 2.723189, 2.804496, 2.812498, 2.764142,
   2.723189, 2.804496, 2.647879, 2.739644, 2.739644, 2.579091, 2.639379, 2.613712, 2.6051, 2.472324, 2.579091, 2.647879, 2.535151, 2.58779, 2.673218, 2.552818,
   2.681611, 2.836367, 2.714925, 2.499443, 2.544, 2.561606, 2.656352, 2.370232, 2.370232, 2.780354, 2.622295, 2.302909, 2.535151, 2.544, 2.341617, 2.360732,
   2.444903, 2.535151, 2.481396, 2.490436, 2.426451, 2.552818, 2.535151, 2.463217, 2.332, 2.472324, 2.579091, 2.312647, 2.526272, 2.561606, 2.417172, 2.535151,
   2.426451, 2.407857, 2.435695, 2.243597, 2.312647, 2.398506, 2.398506, 2.398506, 2.243597, 2.454077, 2.407857, 2.389119, 2.341617, 2.508418, 2.293131, 2.370232,
   2.243597, 2.508418, 2.172354, 2.223475, 2.28331, 2.192945, 2.517361, 2.044454, 2.182674, 2.06632, 2.370232, 2.243597, 2.454077, 2.12, 2.322344, 2.243597,
   2.161984, 2.130574, 2.223475, 2.130574, 2.203169, 2.130574, 2.033433, 2.087958, 2.263541, 2.182674, 2.022351, 2.098693, 2.109373, 2.130574, 2.161984, 2.000004,
   2.172354, 2.379694, 2.033433, 2.203169, 2.151565, 2.022351, 2.243597, 2.011209, 2.044454, 2.243597, 2.087958, 2.253591, 2.253591, 2.203169, 2.192945, 2.151565,
   2.022351, 2.087958, 1.908, 1.988736, 2.273447, 2.203169, 2.098693, 2.213345, 2.06632, 2.044454, 2.06632, 2.087958, 1.79888, 2.151565, 1.954543, 1.988736,
   2.087958, 1.823693, 1.988736, 2.000004, 1.773719, 2.077167, 2.000004, 2.109373, 1.966007, 1.79888, 1.884297, 2.12, 1.977404, 1.908, 2.011209, 2.044454,
   1.860292, 2.130574, 1.919742, 1.931412, 2.087958, 2.109373, 1.628403, 1.908, 1.761004, 2.055416, 1.896186, 2.022351, 1.884297, 1.735295, 1.896186, 1.586463,
   2.033433, 1.860292, 1.748197, 1.988736, 1.988736, 2.06632, 1.735295, 1.848173, 1.66929, 1.908, 1.79888, 1.860292, 1.586463, 1.761004, 1.773719, 1.722296,
   1.748197, 1.919742, 1.872333, 1.682698, 1.943012, 1.786344, 1.884297, 1.682698, 1.655773, 1.872333, 1.696, 1.79888, 1.786344, 1.709199, 1.811329, 1.943012,
   1.896186, 1.931412, 1.586463, 1.896186, 1.761004, 1.773719, 1.614544, 1.628403, 1.919742, 1.848173, 1.655773, 1.484, 1.437854, 1.722296, 1.79888, 1.628403,
   1.722296, 1.773719, 1.696, 1.66929, 1.696, 1.735295, 1.66929, 1.709199, 1.499066, 1.586463, 1.655773, 1.722296, 1.586463, 1.614544, 1.484, 1.642145,
   1.468779, 1.543383, 1.655773, 1.66929, 1.696, 1.586463, 1.543383, 1.543383, 1.696, 1.543383, 1.696, 1.453399, 1.453399, 1.600565, 1.586463, 1.557875,
   1.614544, 1.340806, 1.468779, 1.513983, 1.32394, 1.614544, 1.499066, 1.682698, 1.642145, 1.543383, 1.586463, 1.373917, 1.709199, 1.66929, 1.513983, 1.557875,
   1.557875, 1.528754, 1.600565, 1.586463, 1.390177, 1.390177, 1.437854 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_DHZfirst_2b1c_H_mass_fx1117,Graph_from_VH_DHZfirst_2b1c_H_mass_fy1117,Graph_from_VH_DHZfirst_2b1c_H_mass_fex1117,Graph_from_VH_DHZfirst_2b1c_H_mass_fey1117);
   gre->SetName("Graph_from_VH_DHZfirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1117 = new TH1F("Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1117","",1000,0,2200);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1117->SetMinimum(-192.2998);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1117->SetMaximum(1882.303);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1117->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1117->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1117->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1117->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1117->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1117->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1117->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1117->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1117->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1117->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1117->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1117);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_H_mass","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_DHZfirst_2b1c_H_mass","Data-driven Bckg","F");

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
   entry=leg->AddEntry("Graph_from_VH_DHZfirst_2b1c_H_mass","MC unc. (stat.)","fl");

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
   H_mass_DHZfirst_SR_18->cd();
  
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
   
   TH1D *data_mc_ratio__118 = new TH1D("data_mc_ratio__118","",1000,0,2000);
   data_mc_ratio__118->SetBinContent(1000,1.025431);
   data_mc_ratio__118->SetBinContent(1001,0.9942333);
   data_mc_ratio__118->SetBinError(1000,0.4585865);
   data_mc_ratio__118->SetBinError(1001,0.02161379);
   data_mc_ratio__118->SetMinimum(0.4);
   data_mc_ratio__118->SetMaximum(1.6);
   data_mc_ratio__118->SetEntries(3.484848);
   data_mc_ratio__118->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__118->SetLineColor(ci);
   data_mc_ratio__118->SetLineWidth(2);
   data_mc_ratio__118->SetMarkerStyle(20);
   data_mc_ratio__118->SetMarkerSize(1.2);
   data_mc_ratio__118->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__118->GetXaxis()->SetRange(1,150);
   data_mc_ratio__118->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__118->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__118->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__118->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__118->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__118->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__118->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__118->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__118->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__118->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__118->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__118->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__118->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__118->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__118->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__118->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1118[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1118[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1118[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1118[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.02253458, 0.01126229,
   0.01119855, 0.01124803, 0.01130539, 0.01146475, 0.01138424, 0.01134607, 0.0115578, 0.0113468, 0.01146174, 0.01154547, 0.01159893, 0.01154316, 0.01173227, 0.01159036, 0.0117753, 0.01161457,
   0.01170011, 0.01177857, 0.01180727, 0.01176064, 0.01175495, 0.01192591, 0.01216891, 0.01206133, 0.01214913, 0.01218516, 0.0122499, 0.01231195, 0.02516127, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.2948839 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1118,Graph_from_mc_statistical_error_fy1118,Graph_from_mc_statistical_error_fex1118,Graph_from_mc_statistical_error_fey1118);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1118 = new TH1F("Graph_Graph_from_mc_statistical_error1118","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1118->SetMinimum(0.6461393);
   Graph_Graph_from_mc_statistical_error1118->SetMaximum(1.353861);
   Graph_Graph_from_mc_statistical_error1118->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1118->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1118->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1118->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1118->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1118->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1118);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_DHZfirst_SR_18->cd();
   H_mass_DHZfirst_SR_18->Modified();
   H_mass_DHZfirst_SR_18->cd();
   H_mass_DHZfirst_SR_18->SetSelected(H_mass_DHZfirst_SR_18);
}
