#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_DHZfirst_SR_16()
{
//=========Macro generated from canvas: H_mass_DHZfirst_SR_16/H_mass_DHZfirst_SR_16
//=========  (Fri May 24 11:23:54 2024) by ROOT version 6.28/10
   TCanvas *H_mass_DHZfirst_SR_16 = new TCanvas("H_mass_DHZfirst_SR_16", "H_mass_DHZfirst_SR_16",0,0,600,600);
   H_mass_DHZfirst_SR_16->SetHighLightColor(2);
   H_mass_DHZfirst_SR_16->Range(0,0,1,1);
   H_mass_DHZfirst_SR_16->SetFillColor(0);
   H_mass_DHZfirst_SR_16->SetFillStyle(4000);
   H_mass_DHZfirst_SR_16->SetBorderMode(0);
   H_mass_DHZfirst_SR_16->SetBorderSize(2);
   H_mass_DHZfirst_SR_16->SetFrameFillStyle(1000);
   H_mass_DHZfirst_SR_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-5.924968,315.7258,5929.043);
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
   st->SetMaximum(5335.546);
   
   TH1F *st_stack_52 = new TH1F("st_stack_52","",1000,0,2000);
   st_stack_52->SetMinimum(0.01);
   st_stack_52->SetMaximum(5335.546);
   st_stack_52->SetDirectory(nullptr);
   st_stack_52->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_52->SetLineColor(ci);
   st_stack_52->SetLineWidth(0);
   st_stack_52->GetXaxis()->SetRange(1,150);
   st_stack_52->GetXaxis()->SetLabelFont(42);
   st_stack_52->GetXaxis()->SetTitleOffset(1);
   st_stack_52->GetXaxis()->SetTitleFont(42);
   st_stack_52->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_52->GetYaxis()->SetLabelFont(42);
   st_stack_52->GetYaxis()->SetLabelSize(0.05);
   st_stack_52->GetYaxis()->SetTitleSize(0.057);
   st_stack_52->GetYaxis()->SetTitleOffset(1.2);
   st_stack_52->GetYaxis()->SetTitleFont(42);
   st_stack_52->GetZaxis()->SetLabelFont(42);
   st_stack_52->GetZaxis()->SetTitleOffset(1);
   st_stack_52->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_52);
   
   
   TH1D *VH_DHZfirst_2b1c_H_mass_stack_1 = new TH1D("VH_DHZfirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(48,1192.927);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(49,2350.385);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(50,2400.996);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(51,2349.8);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(52,2316.622);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(53,2247.043);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(54,2274.978);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(55,2177.375);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(56,2192.054);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(57,2194.342);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(58,2157.351);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(59,2115.372);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(60,2129.868);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(61,2059.45);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(62,2073.852);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(63,1998.082);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(64,2018.053);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(65,1986.778);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(66,1938.128);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(67,1962.056);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(68,1910.357);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(69,1859.752);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(70,1916.265);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(71,1863.538);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(72,1829.352);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(73,1807.569);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(74,1814.755);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(75,1777.428);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(76,1744.615);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(77,1703.278);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(78,832.3604);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(1000,5.531959);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(1001,3712.396);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(13,0.2011372);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(14,0.8255305);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(15,1.526083);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(16,2.74627);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(17,4.097881);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(18,5.907582);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(19,7.627172);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(20,9.695199);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(21,11.76981);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(22,13.89348);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(23,15.8425);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(24,17.62157);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(25,18.91692);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(26,20.62127);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(27,21.62577);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(28,22.66955);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(29,23.46701);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(30,23.94996);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(31,24.34854);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(32,24.59384);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(33,24.76554);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(34,24.81686);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(35,24.83838);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(36,24.94841);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(37,25.15377);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(38,25.19386);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(39,25.09648);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(40,24.94445);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(41,24.76461);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(42,24.67919);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(43,24.5993);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(44,24.25309);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(45,24.20566);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(46,24.20838);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(47,23.75488);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(48,23.42131);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(49,23.09067);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(50,23.19487);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(51,22.89826);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(52,22.72139);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(53,22.28551);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(54,22.44412);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(55,21.87649);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(56,21.92287);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(57,21.98349);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(58,21.76075);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(59,21.52477);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(60,21.61543);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(61,21.21559);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(62,21.3001);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(63,20.91104);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(64,20.98513);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(65,20.81793);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(66,20.61189);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(67,20.69318);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(68,20.44741);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(69,20.17102);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(70,20.43107);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(71,20.11216);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(72,19.96014);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(73,19.81841);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(74,19.84622);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(75,19.70423);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(76,19.48327);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(77,19.31377);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(78,19.11954);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(79,18.9742);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(80,18.90806);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(81,18.97014);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(82,18.66174);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(83,18.78168);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(84,18.41805);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(85,18.47395);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(86,18.32708);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(87,18.21688);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(88,18.10425);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(89,18.04515);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(90,17.98229);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(91,17.81869);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(92,17.56942);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(93,17.74872);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(94,17.56225);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(95,17.41201);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(96,17.39592);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(97,17.13868);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(98,17.14107);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(99,16.93712);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(100,17.03071);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(101,16.86979);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(102,16.89425);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(103,16.82396);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(104,16.60146);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(105,16.58584);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(106,16.46264);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(107,16.3071);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(108,16.39334);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(109,16.21343);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(110,15.97645);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(111,16.00324);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(112,15.72878);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(113,15.76131);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(114,15.73093);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(115,15.78185);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(116,15.68292);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(117,15.7272);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(118,15.63367);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(119,15.38545);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(120,15.36533);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(121,15.38832);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(122,15.40063);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(123,15.1155);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(124,15.10478);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(125,14.86816);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(126,15.03877);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(127,15.10478);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(128,14.77966);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(129,14.76452);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(130,14.77198);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(131,14.85316);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(132,14.65677);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(133,14.77013);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(134,14.69835);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(135,14.58524);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(136,14.45454);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(137,14.40119);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(138,14.24697);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(139,14.36819);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(140,14.34628);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(141,14.11891);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(142,14.2419);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(143,14.2011);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(144,14.12585);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(145,14.06564);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(146,14.08968);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(147,13.89889);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(148,13.57002);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(149,13.81293);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(150,13.8074);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(151,13.74023);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(152,13.49079);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(153,13.5369);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(154,13.53515);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(155,13.47459);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(156,13.34446);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(157,13.52982);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(158,13.37194);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(159,13.37696);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(160,13.32901);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(161,13.30364);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(162,13.48191);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(163,13.21451);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(164,13.1146);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(165,13.15939);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(166,13.14838);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(167,13.05136);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(168,12.92217);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(169,12.93845);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(170,12.85455);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(171,12.87209);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(172,12.94372);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(173,12.93284);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(174,12.74923);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(175,12.81502);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(176,12.64577);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(177,12.72607);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(178,12.57191);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(179,12.62593);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(180,12.62099);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(181,12.51773);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(182,12.47919);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(183,12.48463);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(184,12.58527);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(185,12.36435);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(186,12.53104);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(187,12.44739);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(188,12.3721);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(189,12.33723);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(190,12.125);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(191,12.11156);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(192,12.30698);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(193,12.1026);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(194,12.26803);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(195,12.30879);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(196,11.86319);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(197,11.95987);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(198,11.91209);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(199,12.11729);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(200,12.05019);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(201,12.06557);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(202,11.87232);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(203,11.93071);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(204,11.78775);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(205,11.67547);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(206,11.64086);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(207,11.73051);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(208,11.81213);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(209,11.58169);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(210,11.49597);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(211,11.39639);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(212,11.74078);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(213,11.61038);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(214,11.50373);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(215,11.4678);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(216,11.5491);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(217,11.51786);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(218,11.37962);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(219,11.24882);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(220,11.41228);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(221,11.15561);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(222,11.32684);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(223,11.14984);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(224,11.22399);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(225,11.22341);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(226,11.09945);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(227,11.25603);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(228,11.10292);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(229,11.15822);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(230,11.06581);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(231,11.06012);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(232,10.97696);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(233,11.1681);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(234,11.17104);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(235,11.13805);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(236,10.90178);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(237,10.98523);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(238,10.88876);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(239,10.80809);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(240,10.8512);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(241,10.97504);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(242,10.7946);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(243,10.7373);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(244,10.83549);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(245,10.87609);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(246,10.66485);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(247,10.85941);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(248,10.5663);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(249,10.51686);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(250,10.54387);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(251,10.50019);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(252,10.55271);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(253,10.62127);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(254,10.51061);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(255,10.54252);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(256,10.32049);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(257,10.57112);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(258,10.16951);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(259,10.47578);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(260,10.33238);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(261,10.40396);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(262,10.4499);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(263,10.25319);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(264,10.21929);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(265,10.22328);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(266,10.29372);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(267,10.26064);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(268,10.12332);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(269,9.998793);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(270,10.11938);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(271,10.06235);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(272,10.02664);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(273,10.31602);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(274,10.09292);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(275,10.01765);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(276,9.835025);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(277,10.02871);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(278,9.946557);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(279,9.942245);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(280,9.869815);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(281,9.965325);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(282,9.628197);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(283,9.774744);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(284,9.945415);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(285,9.682094);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(286,9.589333);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(287,9.678971);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(288,9.753802);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(289,9.675325);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(290,9.60204);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(291,9.552317);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(292,9.661246);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(293,9.574225);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(294,9.5145);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(295,9.402487);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(296,9.691467);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(297,9.480947);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(298,9.422576);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(299,9.411921);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(300,9.416312);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(301,9.433462);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(302,9.477326);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(303,9.336507);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(304,9.218024);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(305,9.209447);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(306,9.366611);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(307,9.289296);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(308,9.298924);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(309,9.397728);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(310,9.277134);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(311,9.149057);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(312,9.283746);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(313,9.198586);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(314,9.035098);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(315,9.141579);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(316,9.106497);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(317,9.192051);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(318,9.124481);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(319,9.15798);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(320,8.882946);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(321,9.115259);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(322,9.054508);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(323,8.914154);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(324,8.897185);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(325,9.100539);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(326,8.950375);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(327,8.888984);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(328,9.057323);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(329,8.72732);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(330,8.768566);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(331,8.962211);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(332,8.75671);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(333,8.865223);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(334,8.806776);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(335,8.859744);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(336,8.638482);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(337,8.773442);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(338,8.706923);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(339,8.735078);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(340,8.555013);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(341,8.541576);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(342,8.577961);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(343,8.679017);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(344,8.670695);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(345,8.60088);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(346,8.444873);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(347,8.6342);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(348,8.546437);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(349,8.524714);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(350,8.392451);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(351,8.545136);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(352,8.529652);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(353,8.407174);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(354,8.425967);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(355,8.422938);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(356,8.31798);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(357,8.314281);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(358,8.324156);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(359,8.365052);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(360,8.234071);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(361,8.143087);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(362,8.122487);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(363,8.029779);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(364,8.033784);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(365,7.938555);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(366,8.090975);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(367,8.102909);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(368,7.912458);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(369,8.114741);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(370,8.061782);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(371,7.872549);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(372,7.819053);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(373,8.09336);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(374,7.984409);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(375,7.806628);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(376,7.977051);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(377,8.009544);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(378,7.874282);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(379,7.921468);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(380,7.881382);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(381,7.817774);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(382,7.814767);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(383,7.74558);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(384,7.884534);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(385,7.803033);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(386,7.948405);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(387,7.604227);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(388,7.790769);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(389,7.595611);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(390,7.62789);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(391,7.599551);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(392,7.644897);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(393,7.80968);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(394,7.635507);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(395,7.578804);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(396,7.527521);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(397,7.523339);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(398,7.559454);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(399,7.693571);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(400,7.56821);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(401,7.383806);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(402,7.430299);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(403,7.316019);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(404,7.531206);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(405,7.213942);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(406,7.443572);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(407,7.156652);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(408,7.369566);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(409,7.278452);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(410,7.377311);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(411,7.314467);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(412,7.245113);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(413,7.267998);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(414,7.113701);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(415,7.290088);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(416,7.219053);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(417,7.12435);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(418,7.101084);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(419,7.072211);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(420,7.092585);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(421,7.0182);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(422,7.085518);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(423,6.990002);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(424,6.975989);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(425,7.037727);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(426,6.856589);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(427,6.962396);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(428,6.951913);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(429,7.025967);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(430,6.987208);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(431,6.758002);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(432,7.071991);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(433,6.861687);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(434,6.774678);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(435,6.710005);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(436,6.828456);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(437,6.870267);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(438,6.88251);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(439,6.692261);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(440,6.857508);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(441,6.688244);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(442,6.655421);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(443,6.828077);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(444,6.736062);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(445,6.708256);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(446,6.510801);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(447,6.78255);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(448,6.670731);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(449,6.721487);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(450,6.558427);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(451,6.580143);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(452,6.442518);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(453,6.589259);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(454,6.624741);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(455,6.577389);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(456,6.522437);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(457,6.662517);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(458,6.334239);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(459,6.484461);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(460,6.419039);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(461,6.450878);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(462,6.259873);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(463,6.43805);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(464,6.335915);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(465,6.244676);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(466,6.327729);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(467,6.209458);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(468,6.393333);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(469,6.345888);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(470,6.258456);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(471,6.353186);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(472,6.354415);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(473,6.251451);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(474,6.205446);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(475,6.28729);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(476,6.131686);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(477,6.107782);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(478,6.196693);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(479,6.143723);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(480,6.238539);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(481,6.222251);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(482,5.924263);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(483,5.957626);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(484,6.27373);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(485,6.126868);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(486,6.146728);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(487,5.925003);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(488,6.009925);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(489,6.04376);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(490,5.825253);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(491,6.002776);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(492,5.98839);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(493,5.921843);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(494,5.848766);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(495,5.749021);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(496,5.773255);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(497,5.758553);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(498,5.887709);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(499,5.717923);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(500,5.806535);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(501,5.709093);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(502,5.672783);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(503,5.634001);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(504,5.751927);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(505,5.741478);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(506,5.773905);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(507,5.637213);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(508,5.626369);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(509,5.657541);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(510,5.480441);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(511,5.449397);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(512,5.550819);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(513,5.691988);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(514,5.593372);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(515,5.647719);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(516,5.626585);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(517,5.439455);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(518,5.409989);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(519,5.552689);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(520,5.517728);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(521,5.397427);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(522,5.510398);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(523,5.692661);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(524,5.569797);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(525,5.236253);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(526,5.290725);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(527,5.371418);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(528,5.46898);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(529,5.443368);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(530,5.391684);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(531,5.3184);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(532,5.308817);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(533,5.290828);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(534,5.331733);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(535,5.305043);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(536,5.388605);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(537,5.482281);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(538,5.437172);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(539,5.339545);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(540,5.15251);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(541,5.090773);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(542,5.309727);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(543,5.318728);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(544,5.035245);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(545,5.327134);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(546,5.066473);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(547,5.308505);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(548,5.326197);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(549,5.126007);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(550,5.182702);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(551,4.947506);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(552,5.245933);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(553,5.246662);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(554,5.0957);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(555,5.151904);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(556,5.002172);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(557,5.037406);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(558,5.031618);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(559,5.034704);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(560,4.875909);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(561,5.017112);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(562,4.867137);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(563,4.841418);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(564,4.98904);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(565,4.789332);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(566,4.9851);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(567,4.99893);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(568,5.010859);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(569,5.069475);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(570,4.956598);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(571,4.921349);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(572,4.79027);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(573,4.825521);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(574,5.013672);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(575,4.772012);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(576,4.812715);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(577,4.71109);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(578,4.707001);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(579,4.791563);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(580,4.749507);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(581,4.83982);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(582,4.792709);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(583,4.495485);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(584,4.835216);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(585,4.829015);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(586,4.685641);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(587,4.56061);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(588,4.824502);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(589,4.647349);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(590,4.771722);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(591,4.536444);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(592,4.625622);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(593,4.525594);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(594,4.701907);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(595,4.53056);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(596,4.54514);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(597,4.643239);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(598,4.45432);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(599,4.556114);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(600,4.662808);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(601,4.42523);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(602,4.590301);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(603,4.401949);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(604,4.349772);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(605,4.465419);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(606,4.567328);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(607,4.576869);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(608,4.446338);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(609,4.374412);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(610,4.305748);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(611,4.459575);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(612,4.397336);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(613,4.429301);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(614,4.255815);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(615,4.370704);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(616,4.500292);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(617,4.373907);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(618,4.385598);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(619,4.463316);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(620,4.394191);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(621,4.337354);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(622,4.379152);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(623,4.24306);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(624,4.07982);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(625,4.423078);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(626,4.215846);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(627,4.257371);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(628,4.406804);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(629,4.235285);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(630,4.250653);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(631,4.068498);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(632,4.020472);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(633,4.186852);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(634,4.121086);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(635,4.215406);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(636,4.307134);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(637,4.259986);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(638,4.327178);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(639,4.136413);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(640,4.167617);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(641,4.058815);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(642,4.00469);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(643,4.144388);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(644,4.082752);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(645,3.992912);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(646,4.010146);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(647,4.020379);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(648,3.904919);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(649,4.215658);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(650,4.02631);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(651,4.12687);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(652,4.038295);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(653,3.996845);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(654,3.96723);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(655,4.109817);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(656,4.035534);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(657,4.055233);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(658,3.924455);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(659,3.960015);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(660,3.788674);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(661,3.951363);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(662,3.917036);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(663,3.946855);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(664,3.949591);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(665,3.876994);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(666,3.9343);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(667,3.874461);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(668,3.819472);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(669,4.028022);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(670,3.958768);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(671,3.848644);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(672,3.832086);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(673,3.837581);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(674,3.824603);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(675,3.815747);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(676,3.835808);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(677,3.882657);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(678,3.753744);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(679,3.75062);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(680,3.811026);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(681,3.605588);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(682,3.856728);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(683,3.730277);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(684,3.665658);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(685,3.637317);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(686,3.858105);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(687,3.577512);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(688,3.947372);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(689,3.524188);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(690,3.92838);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(691,3.792475);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(692,3.730269);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(693,3.736203);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(694,3.690232);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(695,3.626261);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(696,3.840383);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(697,3.440383);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(698,3.729446);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(699,3.491984);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(700,3.635733);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(701,3.815833);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(702,3.620801);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(703,3.802482);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(704,3.757351);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(705,3.729063);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(706,3.582127);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(707,3.50246);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(708,3.444951);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(709,3.320022);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(710,3.496126);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(711,3.669231);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(712,3.471764);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(713,3.597294);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(714,3.620064);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(715,3.525486);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(716,3.505396);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(717,3.410387);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(718,3.484724);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(719,3.30053);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(720,3.415862);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(721,3.564826);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(722,3.282397);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(723,3.449903);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(724,3.475611);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(725,3.439214);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(726,3.402962);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(727,3.397203);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(728,3.319913);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(729,3.549691);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(730,3.389762);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(731,3.190989);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(732,3.37049);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(733,3.289051);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(734,3.355056);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(735,3.367374);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(736,3.329928);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(737,3.277354);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(738,3.34339);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(739,3.27812);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(740,3.208862);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(741,3.088901);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(742,3.354235);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(743,3.280768);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(744,3.331098);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(745,3.283373);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(746,3.313356);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(747,3.264745);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(748,3.276175);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(749,3.233932);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(750,3.188171);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(751,3.18899);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(752,3.207917);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(753,3.299543);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(754,3.211835);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(755,3.189387);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(756,3.201833);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(757,3.194542);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(758,3.107277);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(759,3.292449);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(760,3.066911);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(761,3.126334);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(762,3.030115);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(763,3.238644);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(764,3.282135);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(765,3.228795);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(766,3.157353);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(767,3.07077);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(768,3.041964);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(769,3.116737);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(770,3.142397);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(771,3.287923);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(772,2.916827);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(773,2.857817);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(774,3.111481);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(775,3.040282);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(776,2.981562);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(777,3.163516);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(778,3.052195);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(779,2.981674);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(780,2.878204);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(781,3.029032);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(782,2.946498);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(783,3.073534);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(784,3.117796);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(785,3.230663);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(786,3.1991);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(787,3.047959);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(788,2.903047);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(789,3.138064);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(790,3.028393);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(791,3.02277);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(792,2.834992);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(793,3.034261);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(794,2.892016);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(795,2.879021);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(796,2.97372);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(797,2.914707);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(798,3.007202);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(799,2.981776);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(800,2.86303);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(801,2.979626);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(802,2.952677);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(803,2.765898);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(804,2.946207);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(805,2.939867);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(806,2.776536);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(807,2.980337);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(808,2.939048);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(809,2.836758);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(810,2.829179);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(811,2.86261);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(812,2.952624);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(813,2.959537);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(814,2.85154);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(815,2.637445);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(816,2.69034);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(817,2.674519);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(818,2.752098);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(819,2.85706);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(820,2.55404);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(821,2.851516);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(822,2.733202);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(823,2.755793);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(824,2.849395);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(825,2.799063);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(826,2.675445);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(827,2.496877);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(828,2.706535);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(829,2.750474);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(830,2.629086);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(831,2.757805);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(832,2.77585);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(833,2.682702);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(834,2.537595);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(835,2.682791);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(836,2.568497);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(837,2.733686);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(838,2.521368);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(839,2.622487);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(840,2.681405);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(841,2.35793);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(842,2.705194);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(843,2.577497);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(844,2.682629);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(845,2.776406);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(846,2.509488);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(847,2.650524);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(848,2.52331);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(849,2.563191);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(850,2.682187);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(851,2.530109);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(852,2.47278);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(853,2.567655);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(854,2.488304);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(855,2.504855);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(856,2.567387);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(857,2.621497);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(858,2.440076);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(859,2.61367);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(860,2.494686);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(861,2.481199);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(862,2.598437);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(863,2.502358);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(864,2.497777);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(865,2.547594);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(866,2.675014);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(867,2.668517);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(868,2.464664);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(869,2.575017);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(870,2.496569);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(871,2.480314);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(872,2.439432);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(873,2.331117);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(874,2.474372);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(875,2.143964);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(876,2.454267);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(877,2.551722);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(878,2.480173);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(879,2.480471);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(880,2.356272);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(881,2.528063);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(882,2.52799);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(883,2.365216);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(884,2.347309);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(885,2.46987);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(886,2.33524);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(887,2.432361);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(888,2.372993);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(889,2.356465);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(890,2.374394);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(891,2.224068);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(892,2.488096);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(893,2.365843);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(894,2.226027);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(895,2.286136);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(896,2.29742);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(897,2.521418);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(898,2.196284);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(899,2.346448);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(900,2.281258);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(901,2.470853);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(902,2.279592);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(903,2.103435);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(904,2.188271);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(905,2.504796);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(906,2.302574);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(907,2.085692);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(908,2.234064);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(909,2.07511);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(910,2.234351);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(911,2.320366);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(912,2.212299);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(913,2.091375);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(914,2.286572);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(915,2.284224);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(916,2.2327);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(917,2.217271);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(918,2.159744);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(919,2.171264);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(920,2.251884);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(921,2.178208);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(922,2.159111);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(923,2.140112);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(924,2.094745);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(925,2.132073);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(926,2.214217);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(927,2.005644);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(928,2.103868);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(929,2.113496);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(930,2.093234);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(931,2.038768);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(932,2.331357);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(933,2.173858);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(934,2.015916);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(935,2.178188);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(936,2.120647);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(937,2.076938);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(938,2.035146);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(939,2.074904);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(940,1.871404);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(941,2.104697);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(942,1.975132);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(943,2.252342);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(944,1.996313);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(945,2.341879);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(946,2.0367);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(947,2.035539);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(948,2.187113);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(949,1.985167);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(950,1.944419);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(951,1.933851);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(952,1.891954);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(953,2.002051);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(954,1.893285);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(955,1.99598);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(956,1.964457);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(957,2.092931);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(958,2.111605);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(959,1.955233);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(960,1.829545);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(961,1.966268);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(962,2.158283);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(963,2.073361);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(964,1.849382);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(965,1.80818);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(966,1.957298);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(967,1.955861);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(968,2.007247);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(969,1.944532);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(970,1.968324);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(971,1.861599);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(972,2.082263);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(973,1.881651);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(974,1.912333);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(975,2.09329);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(976,1.92569);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(977,2.004647);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(978,1.974043);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(979,1.850701);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(980,1.983601);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(981,1.837974);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(982,1.806066);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(983,1.955115);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(984,1.870753);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(985,1.986347);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(986,1.923058);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(987,1.964225);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(988,1.63205);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(989,1.878549);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(990,2.063217);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(991,1.797061);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(992,2.063831);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(993,1.954434);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(994,1.966021);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(995,1.860524);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(996,2.024576);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(997,1.815902);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(998,1.678577);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(999,1.593118);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(1000,1.607246);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(1001,28.53282);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetEntries(1812388);

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
   
   TH1D *VH_DHZfirst_H_mass__103 = new TH1D("VH_DHZfirst_H_mass__103","",1000,0,2000);
   VH_DHZfirst_H_mass__103->SetBinContent(1000,6);
   VH_DHZfirst_H_mass__103->SetBinContent(1001,4385);
   VH_DHZfirst_H_mass__103->SetEntries(419311);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_mass__103->SetLineColor(ci);
   VH_DHZfirst_H_mass__103->SetLineWidth(2);
   VH_DHZfirst_H_mass__103->SetMarkerStyle(20);
   VH_DHZfirst_H_mass__103->SetMarkerSize(1.2);
   VH_DHZfirst_H_mass__103->GetXaxis()->SetRange(1,2000);
   VH_DHZfirst_H_mass__103->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__103->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_mass__103->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__103->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__103->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__103->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__103->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_mass__103->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__103->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fx1103[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fy1103[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1192.927, 2350.385,
   2400.996, 2349.8, 2316.622, 2247.043, 2274.978, 2177.375, 2192.054, 2194.342, 2157.351, 2115.372, 2129.868, 2059.45, 2073.852, 1998.082, 2018.053, 1986.778,
   1938.128, 1962.056, 1910.357, 1859.752, 1916.265, 1863.538, 1829.352, 1807.569, 1814.755, 1777.428, 1744.615, 1703.278, 832.3604, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 5.531959 };
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fex1103[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fey1103[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.2011372, 0.8255305, 1.526083, 2.74627, 4.097881,
   5.907582, 7.627172, 9.695199, 11.76981, 13.89348, 15.8425, 17.62157, 18.91692, 20.62127, 21.62577, 22.66955, 23.46701, 23.94996, 24.34854, 24.59384, 24.76554,
   24.81686, 24.83838, 24.94841, 25.15377, 25.19386, 25.09648, 24.94445, 24.76461, 24.67919, 24.5993, 24.25309, 24.20566, 24.20838, 23.75488, 23.42131, 23.09067,
   23.19487, 22.89826, 22.72139, 22.28551, 22.44412, 21.87649, 21.92287, 21.98349, 21.76075, 21.52477, 21.61543, 21.21559, 21.3001, 20.91104, 20.98513, 20.81793,
   20.61189, 20.69318, 20.44741, 20.17102, 20.43107, 20.11216, 19.96014, 19.81841, 19.84622, 19.70423, 19.48327, 19.31377, 19.11954, 18.9742, 18.90806, 18.97014,
   18.66174, 18.78168, 18.41805, 18.47395, 18.32708, 18.21688, 18.10425, 18.04515, 17.98229, 17.81869, 17.56942, 17.74872, 17.56225, 17.41201, 17.39592, 17.13868,
   17.14107, 16.93712, 17.03071, 16.86979, 16.89425, 16.82396, 16.60146, 16.58584, 16.46264, 16.3071, 16.39334, 16.21343, 15.97645, 16.00324, 15.72878, 15.76131,
   15.73093, 15.78185, 15.68292, 15.7272, 15.63367, 15.38545, 15.36533, 15.38832, 15.40063, 15.1155, 15.10478, 14.86816, 15.03877, 15.10478, 14.77966, 14.76452,
   14.77198, 14.85316, 14.65677, 14.77013, 14.69835, 14.58524, 14.45454, 14.40119, 14.24697, 14.36819, 14.34628, 14.11891, 14.2419, 14.2011, 14.12585, 14.06564,
   14.08968, 13.89889, 13.57002, 13.81293, 13.8074, 13.74023, 13.49079, 13.5369, 13.53515, 13.47459, 13.34446, 13.52982, 13.37194, 13.37696, 13.32901, 13.30364,
   13.48191, 13.21451, 13.1146, 13.15939, 13.14838, 13.05136, 12.92217, 12.93845, 12.85455, 12.87209, 12.94372, 12.93284, 12.74923, 12.81502, 12.64577, 12.72607,
   12.57191, 12.62593, 12.62099, 12.51773, 12.47919, 12.48463, 12.58527, 12.36435, 12.53104, 12.44739, 12.3721, 12.33723, 12.125, 12.11156, 12.30698, 12.1026,
   12.26803, 12.30879, 11.86319, 11.95987, 11.91209, 12.11729, 12.05019, 12.06557, 11.87232, 11.93071, 11.78775, 11.67547, 11.64086, 11.73051, 11.81213, 11.58169,
   11.49597, 11.39639, 11.74078, 11.61038, 11.50373, 11.4678, 11.5491, 11.51786, 11.37962, 11.24882, 11.41228, 11.15561, 11.32684, 11.14984, 11.22399, 11.22341,
   11.09945, 11.25603, 11.10292, 11.15822, 11.06581, 11.06012, 10.97696, 11.1681, 11.17104, 11.13805, 10.90178, 10.98523, 10.88876, 10.80809, 10.8512, 10.97504,
   10.7946, 10.7373, 10.83549, 10.87609, 10.66485, 10.85941, 10.5663, 10.51686, 10.54387, 10.50019, 10.55271, 10.62127, 10.51061, 10.54252, 10.32049, 10.57112,
   10.16951, 10.47578, 10.33238, 10.40396, 10.4499, 10.25319, 10.21929, 10.22328, 10.29372, 10.26064, 10.12332, 9.998793, 10.11938, 10.06235, 10.02664, 10.31602,
   10.09292, 10.01765, 9.835025, 10.02871, 9.946557, 9.942245, 9.869815, 9.965325, 9.628197, 9.774744, 9.945415, 9.682094, 9.589333, 9.678971, 9.753802, 9.675325,
   9.60204, 9.552317, 9.661246, 9.574225, 9.5145, 9.402487, 9.691467, 9.480947, 9.422576, 9.411921, 9.416312, 9.433462, 9.477326, 9.336507, 9.218024, 9.209447,
   9.366611, 9.289296, 9.298924, 9.397728, 9.277134, 9.149057, 9.283746, 9.198586, 9.035098, 9.141579, 9.106497, 9.192051, 9.124481, 9.15798, 8.882946, 9.115259,
   9.054508, 8.914154, 8.897185, 9.100539, 8.950375, 8.888984, 9.057323, 8.72732, 8.768566, 8.962211, 8.75671, 8.865223, 8.806776, 8.859744, 8.638482, 8.773442,
   8.706923, 8.735078, 8.555013, 8.541576, 8.577961, 8.679017, 8.670695, 8.60088, 8.444873, 8.6342, 8.546437, 8.524714, 8.392451, 8.545136, 8.529652, 8.407174,
   8.425967, 8.422938, 8.31798, 8.314281, 8.324156, 8.365052, 8.234071, 8.143087, 8.122487, 8.029779, 8.033784, 7.938555, 8.090975, 8.102909, 7.912458, 8.114741,
   8.061782, 7.872549, 7.819053, 8.09336, 7.984409, 7.806628, 7.977051, 8.009544, 7.874282, 7.921468, 7.881382, 7.817774, 7.814767, 7.74558, 7.884534, 7.803033,
   7.948405, 7.604227, 7.790769, 7.595611, 7.62789, 7.599551, 7.644897, 7.80968, 7.635507, 7.578804, 7.527521, 7.523339, 7.559454, 7.693571, 7.56821, 7.383806,
   7.430299, 7.316019, 7.531206, 7.213942, 7.443572, 7.156652, 7.369566, 7.278452, 7.377311, 7.314467, 7.245113, 7.267998, 7.113701, 7.290088, 7.219053, 7.12435,
   7.101084, 7.072211, 7.092585, 7.0182, 7.085518, 6.990002, 6.975989, 7.037727, 6.856589, 6.962396, 6.951913, 7.025967, 6.987208, 6.758002, 7.071991, 6.861687,
   6.774678, 6.710005, 6.828456, 6.870267, 6.88251, 6.692261, 6.857508, 6.688244, 6.655421, 6.828077, 6.736062, 6.708256, 6.510801, 6.78255, 6.670731, 6.721487,
   6.558427, 6.580143, 6.442518, 6.589259, 6.624741, 6.577389, 6.522437, 6.662517, 6.334239, 6.484461, 6.419039, 6.450878, 6.259873, 6.43805, 6.335915, 6.244676,
   6.327729, 6.209458, 6.393333, 6.345888, 6.258456, 6.353186, 6.354415, 6.251451, 6.205446, 6.28729, 6.131686, 6.107782, 6.196693, 6.143723, 6.238539, 6.222251,
   5.924263, 5.957626, 6.27373, 6.126868, 6.146728, 5.925003, 6.009925, 6.04376, 5.825253, 6.002776, 5.98839, 5.921843, 5.848766, 5.749021, 5.773255, 5.758553,
   5.887709, 5.717923, 5.806535, 5.709093, 5.672783, 5.634001, 5.751927, 5.741478, 5.773905, 5.637213, 5.626369, 5.657541, 5.480441, 5.449397, 5.550819, 5.691988,
   5.593372, 5.647719, 5.626585, 5.439455, 5.409989, 5.552689, 5.517728, 5.397427, 5.510398, 5.692661, 5.569797, 5.236253, 5.290725, 5.371418, 5.46898, 5.443368,
   5.391684, 5.3184, 5.308817, 5.290828, 5.331733, 5.305043, 5.388605, 5.482281, 5.437172, 5.339545, 5.15251, 5.090773, 5.309727, 5.318728, 5.035245, 5.327134,
   5.066473, 5.308505, 5.326197, 5.126007, 5.182702, 4.947506, 5.245933, 5.246662, 5.0957, 5.151904, 5.002172, 5.037406, 5.031618, 5.034704, 4.875909, 5.017112,
   4.867137, 4.841418, 4.98904, 4.789332, 4.9851, 4.99893, 5.010859, 5.069475, 4.956598, 4.921349, 4.79027, 4.825521, 5.013672, 4.772012, 4.812715, 4.71109,
   4.707001, 4.791563, 4.749507, 4.83982, 4.792709, 4.495485, 4.835216, 4.829015, 4.685641, 4.56061, 4.824502, 4.647349, 4.771722, 4.536444, 4.625622, 4.525594,
   4.701907, 4.53056, 4.54514, 4.643239, 4.45432, 4.556114, 4.662808, 4.42523, 4.590301, 4.401949, 4.349772, 4.465419, 4.567328, 4.576869, 4.446338, 4.374412,
   4.305748, 4.459575, 4.397336, 4.429301, 4.255815, 4.370704, 4.500292, 4.373907, 4.385598, 4.463316, 4.394191, 4.337354, 4.379152, 4.24306, 4.07982, 4.423078,
   4.215846, 4.257371, 4.406804, 4.235285, 4.250653, 4.068498, 4.020472, 4.186852, 4.121086, 4.215406, 4.307134, 4.259986, 4.327178, 4.136413, 4.167617, 4.058815,
   4.00469, 4.144388, 4.082752, 3.992912, 4.010146, 4.020379, 3.904919, 4.215658, 4.02631, 4.12687, 4.038295, 3.996845, 3.96723, 4.109817, 4.035534, 4.055233,
   3.924455, 3.960015, 3.788674, 3.951363, 3.917036, 3.946855, 3.949591, 3.876994, 3.9343, 3.874461, 3.819472, 4.028022, 3.958768, 3.848644, 3.832086, 3.837581,
   3.824603, 3.815747, 3.835808, 3.882657, 3.753744, 3.75062, 3.811026, 3.605588, 3.856728, 3.730277, 3.665658, 3.637317, 3.858105, 3.577512, 3.947372, 3.524188,
   3.92838, 3.792475, 3.730269, 3.736203, 3.690232, 3.626261, 3.840383, 3.440383, 3.729446, 3.491984, 3.635733, 3.815833, 3.620801, 3.802482, 3.757351, 3.729063,
   3.582127, 3.50246, 3.444951, 3.320022, 3.496126, 3.669231, 3.471764, 3.597294, 3.620064, 3.525486, 3.505396, 3.410387, 3.484724, 3.30053, 3.415862, 3.564826,
   3.282397, 3.449903, 3.475611, 3.439214, 3.402962, 3.397203, 3.319913, 3.549691, 3.389762, 3.190989, 3.37049, 3.289051, 3.355056, 3.367374, 3.329928, 3.277354,
   3.34339, 3.27812, 3.208862, 3.088901, 3.354235, 3.280768, 3.331098, 3.283373, 3.313356, 3.264745, 3.276175, 3.233932, 3.188171, 3.18899, 3.207917, 3.299543,
   3.211835, 3.189387, 3.201833, 3.194542, 3.107277, 3.292449, 3.066911, 3.126334, 3.030115, 3.238644, 3.282135, 3.228795, 3.157353, 3.07077, 3.041964, 3.116737,
   3.142397, 3.287923, 2.916827, 2.857817, 3.111481, 3.040282, 2.981562, 3.163516, 3.052195, 2.981674, 2.878204, 3.029032, 2.946498, 3.073534, 3.117796, 3.230663,
   3.1991, 3.047959, 2.903047, 3.138064, 3.028393, 3.02277, 2.834992, 3.034261, 2.892016, 2.879021, 2.97372, 2.914707, 3.007202, 2.981776, 2.86303, 2.979626,
   2.952677, 2.765898, 2.946207, 2.939867, 2.776536, 2.980337, 2.939048, 2.836758, 2.829179, 2.86261, 2.952624, 2.959537, 2.85154, 2.637445, 2.69034, 2.674519,
   2.752098, 2.85706, 2.55404, 2.851516, 2.733202, 2.755793, 2.849395, 2.799063, 2.675445, 2.496877, 2.706535, 2.750474, 2.629086, 2.757805, 2.77585, 2.682702,
   2.537595, 2.682791, 2.568497, 2.733686, 2.521368, 2.622487, 2.681405, 2.35793, 2.705194, 2.577497, 2.682629, 2.776406, 2.509488, 2.650524, 2.52331, 2.563191,
   2.682187, 2.530109, 2.47278, 2.567655, 2.488304, 2.504855, 2.567387, 2.621497, 2.440076, 2.61367, 2.494686, 2.481199, 2.598437, 2.502358, 2.497777, 2.547594,
   2.675014, 2.668517, 2.464664, 2.575017, 2.496569, 2.480314, 2.439432, 2.331117, 2.474372, 2.143964, 2.454267, 2.551722, 2.480173, 2.480471, 2.356272, 2.528063,
   2.52799, 2.365216, 2.347309, 2.46987, 2.33524, 2.432361, 2.372993, 2.356465, 2.374394, 2.224068, 2.488096, 2.365843, 2.226027, 2.286136, 2.29742, 2.521418,
   2.196284, 2.346448, 2.281258, 2.470853, 2.279592, 2.103435, 2.188271, 2.504796, 2.302574, 2.085692, 2.234064, 2.07511, 2.234351, 2.320366, 2.212299, 2.091375,
   2.286572, 2.284224, 2.2327, 2.217271, 2.159744, 2.171264, 2.251884, 2.178208, 2.159111, 2.140112, 2.094745, 2.132073, 2.214217, 2.005644, 2.103868, 2.113496,
   2.093234, 2.038768, 2.331357, 2.173858, 2.015916, 2.178188, 2.120647, 2.076938, 2.035146, 2.074904, 1.871404, 2.104697, 1.975132, 2.252342, 1.996313, 2.341879,
   2.0367, 2.035539, 2.187113, 1.985167, 1.944419, 1.933851, 1.891954, 2.002051, 1.893285, 1.99598, 1.964457, 2.092931, 2.111605, 1.955233, 1.829545, 1.966268,
   2.158283, 2.073361, 1.849382, 1.80818, 1.957298, 1.955861, 2.007247, 1.944532, 1.968324, 1.861599, 2.082263, 1.881651, 1.912333, 2.09329, 1.92569, 2.004647,
   1.974043, 1.850701, 1.983601, 1.837974, 1.806066, 1.955115, 1.870753, 1.986347, 1.923058, 1.964225, 1.63205, 1.878549, 2.063217, 1.797061, 2.063831, 1.954434,
   1.966021, 1.860524, 2.024576, 1.815902, 1.678577, 1.593118, 1.607246 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_DHZfirst_2b1c_H_mass_fx1103,Graph_from_VH_DHZfirst_2b1c_H_mass_fy1103,Graph_from_VH_DHZfirst_2b1c_H_mass_fex1103,Graph_from_VH_DHZfirst_2b1c_H_mass_fey1103);
   gre->SetName("Graph_from_VH_DHZfirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1103 = new TH1F("Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1103","",1000,0,2200);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1103->SetMinimum(-270.1323);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1103->SetMaximum(2669.129);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1103->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1103->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1103->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1103->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1103->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1103->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1103->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1103->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1103->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1103->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1103->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1103);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_H_mass","Data (BTagCSV, 2016)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_mass_DHZfirst_SR_16->cd();
  
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
   
   TH1D *data_mc_ratio__104 = new TH1D("data_mc_ratio__104","",1000,0,2000);
   data_mc_ratio__104->SetBinContent(1000,1.084607);
   data_mc_ratio__104->SetBinContent(1001,1.181178);
   data_mc_ratio__104->SetBinError(1000,0.4427888);
   data_mc_ratio__104->SetBinError(1001,0.02001468);
   data_mc_ratio__104->SetMinimum(0.4);
   data_mc_ratio__104->SetMaximum(1.6);
   data_mc_ratio__104->SetEntries(3.982808);
   data_mc_ratio__104->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__104->SetLineColor(ci);
   data_mc_ratio__104->SetLineWidth(2);
   data_mc_ratio__104->SetMarkerStyle(20);
   data_mc_ratio__104->SetMarkerSize(1.2);
   data_mc_ratio__104->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__104->GetXaxis()->SetRange(1,150);
   data_mc_ratio__104->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__104->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__104->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__104->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__104->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__104->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__104->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__104->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__104->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__104->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__104->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__104->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__104->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__104->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__104->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__104->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1104[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1104[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1104[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1104[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01963348, 0.009824204,
   0.00966052, 0.009744767, 0.00980798, 0.009917705, 0.009865643, 0.01004718, 0.01000106, 0.01001826, 0.01008679, 0.01017541, 0.01014872, 0.01030158, 0.01027079, 0.01046556, 0.0103987, 0.01047823,
   0.01063495, 0.01054668, 0.01070345, 0.01084608, 0.01066192, 0.01079246, 0.01091105, 0.01096412, 0.01093603, 0.01108581, 0.01116766, 0.01133918, 0.02297027, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.2905382 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1104,Graph_from_mc_statistical_error_fy1104,Graph_from_mc_statistical_error_fex1104,Graph_from_mc_statistical_error_fey1104);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1104 = new TH1F("Graph_Graph_from_mc_statistical_error1104","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1104->SetMinimum(0.6513541);
   Graph_Graph_from_mc_statistical_error1104->SetMaximum(1.348646);
   Graph_Graph_from_mc_statistical_error1104->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1104->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1104->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1104->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1104->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1104->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1104);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_DHZfirst_SR_16->cd();
   H_mass_DHZfirst_SR_16->Modified();
   H_mass_DHZfirst_SR_16->cd();
   H_mass_DHZfirst_SR_16->SetSelected(H_mass_DHZfirst_SR_16);
}
