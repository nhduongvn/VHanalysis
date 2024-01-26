#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagFirst_SR_17()
{
//=========Macro generated from canvas: Z_mass_tagFirst_SR_17/Z_mass_tagFirst_SR_17
//=========  (Fri Jan 26 12:50:34 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_tagFirst_SR_17 = new TCanvas("Z_mass_tagFirst_SR_17", "Z_mass_tagFirst_SR_17",0,0,600,600);
   Z_mass_tagFirst_SR_17->SetHighLightColor(2);
   Z_mass_tagFirst_SR_17->Range(0,0,1,1);
   Z_mass_tagFirst_SR_17->SetFillColor(0);
   Z_mass_tagFirst_SR_17->SetFillStyle(4000);
   Z_mass_tagFirst_SR_17->SetBorderMode(0);
   Z_mass_tagFirst_SR_17->SetBorderSize(2);
   Z_mass_tagFirst_SR_17->SetFrameFillStyle(1000);
   Z_mass_tagFirst_SR_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-21.34709,315.7258,21335.74);
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
   st->SetMaximum(19200.03);
   
   TH1F *st_stack_36 = new TH1F("st_stack_36","",1000,0,2000);
   st_stack_36->SetMinimum(0.01);
   st_stack_36->SetMaximum(19200.03);
   st_stack_36->SetDirectory(nullptr);
   st_stack_36->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_36->SetLineColor(ci);
   st_stack_36->SetLineWidth(0);
   st_stack_36->GetXaxis()->SetRange(1,150);
   st_stack_36->GetXaxis()->SetLabelFont(42);
   st_stack_36->GetXaxis()->SetTitleOffset(1);
   st_stack_36->GetXaxis()->SetTitleFont(42);
   st_stack_36->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_36->GetYaxis()->SetLabelFont(42);
   st_stack_36->GetYaxis()->SetLabelSize(0.05);
   st_stack_36->GetYaxis()->SetTitleSize(0.057);
   st_stack_36->GetYaxis()->SetTitleOffset(1.2);
   st_stack_36->GetYaxis()->SetTitleFont(42);
   st_stack_36->GetZaxis()->SetLabelFont(42);
   st_stack_36->GetZaxis()->SetTitleOffset(1);
   st_stack_36->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_36);
   
   
   TH1D *VH_tagFirst_2b1c_Z_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(31,8221.098);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(32,8410.964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(33,8640.013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(34,8538.524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(35,8545.014);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(36,8519.825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(37,8466.057);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(38,8271.581);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(39,7960.75);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(40,7751.615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(41,7586.385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(42,7331.425);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(43,6998.291);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(44,6950.875);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(45,6830.111);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(46,6774.515);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(47,6571.967);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(48,6505.166);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(49,6413.487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(50,6409.491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(51,6289.935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(52,6198.051);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(53,6258.807);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(54,6001.884);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(55,6012.036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(56,6043.852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(57,5891.096);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(58,5771.758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(59,5748.516);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(60,5633.243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1000,38.75595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1001,19641.15);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(6,0.04532417);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(7,0.037812);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(9,0.01453245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(11,0.03315875);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(12,0.9317405);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(13,0.7332751);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(14,2.519996);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(15,5.637532);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(16,8.912741);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(17,13.04929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(18,17.42508);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(19,22.5062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(20,26.75908);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(21,31.8028);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(22,36.64549);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(23,40.69292);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(24,44.73441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(25,48.29481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(26,51.74386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(27,54.24889);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(28,57.03662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(29,58.81934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(30,60.73874);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(31,61.69342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(32,62.48343);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(33,63.44163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(34,63.50144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(35,63.74627);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(36,64.01287);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(37,64.30147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(38,64.53267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(39,63.73462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(40,63.8379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(41,63.95177);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(42,64.17717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(43,63.60875);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(44,63.52727);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(45,63.07477);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(46,62.93602);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(47,62.03619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(48,61.72328);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(49,60.51792);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(50,59.95975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(51,59.69219);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(52,58.7868);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(53,58.29067);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(54,57.11966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(55,56.84351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(56,56.80651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(57,55.97621);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(58,55.43161);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(59,55.18084);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(60,54.60701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(61,54.17042);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(62,54.36304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(63,53.66598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(64,53.51713);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(65,53.3715);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(66,53.2367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(67,52.68114);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(68,52.27487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(69,52.02558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(70,51.73176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(71,51.37425);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(72,51.08417);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(73,51.22056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(74,51.02854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(75,50.45445);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(76,50.16052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(77,49.84461);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(78,49.64355);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(79,49.19759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(80,49.47108);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(81,48.98728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(82,48.6049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(83,48.55989);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(84,47.89949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(85,47.58643);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(86,47.45997);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(87,48.08576);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(88,47.15214);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(89,46.57888);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(90,46.62986);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(91,45.8657);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(92,45.729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(93,45.4818);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(94,45.55772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(95,45.13711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(96,44.94277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(97,44.55078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(98,44.36839);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(99,43.87354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(100,43.74138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(101,43.25334);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(102,43.0426);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(103,43.17427);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(104,42.0643);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(105,42.29735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(106,41.82351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(107,41.92791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(108,41.89632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(109,41.23577);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(110,40.90631);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(111,41.07999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(112,40.64847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(113,40.2733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(114,39.9719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(115,39.89425);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(116,39.60776);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(117,39.25188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(118,38.52235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(119,38.67205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(120,38.29936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(121,38.71488);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(122,37.98245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(123,38.25901);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(124,37.92379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(125,37.20961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(126,37.59779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(127,36.94585);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(128,37.01473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(129,36.77569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(130,36.42711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(131,36.09399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(132,36.06824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(133,36.14996);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(134,35.37029);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(135,35.66408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(136,35.61881);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(137,35.04032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(138,34.93803);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(139,34.93155);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(140,34.91165);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(141,34.98165);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(142,34.53398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(143,34.2277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(144,34.2726);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(145,33.69322);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(146,33.57851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(147,33.3088);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(148,33.36975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(149,33.34938);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(150,33.15302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(151,33.23287);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(152,33.24352);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(153,32.60221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(154,32.37264);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(155,32.49831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(156,32.57796);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(157,31.94901);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(158,32.06632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(159,31.39385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(160,31.86043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(161,31.27102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(162,31.70169);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(163,31.23882);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(164,31.32781);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(165,31.44563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(166,31.13092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(167,30.96218);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(168,31.03246);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(169,30.68043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(170,30.52801);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(171,30.57191);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(172,29.92875);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(173,30.1822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(174,30.21673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(175,30.16381);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(176,29.63183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(177,30.09764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(178,29.77111);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(179,30.08426);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(180,29.50856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(181,29.47619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(182,29.68482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(183,29.22515);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(184,29.43797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(185,29.10783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(186,29.3396);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(187,29.28217);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(188,29.16387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(189,28.66131);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(190,28.65986);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(191,28.58828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(192,28.73429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(193,28.40685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(194,28.50256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(195,28.84357);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(196,28.39032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(197,28.2383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(198,28.03979);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(199,27.97259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(200,27.5462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(201,27.88339);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(202,28.07418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(203,27.75072);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(204,27.88719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(205,27.81164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(206,27.72434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(207,27.46832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(208,27.19725);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(209,27.5332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(210,27.34629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(211,26.95038);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(212,27.52836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(213,27.47455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(214,26.99608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(215,26.83638);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(216,26.81969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(217,27.00105);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(218,26.74018);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(219,27.16858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(220,26.78996);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(221,26.55085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(222,26.87179);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(223,26.39463);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(224,26.52877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(225,26.06949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(226,26.48647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(227,26.3412);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(228,26.2866);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(229,26.26209);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(230,26.25032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(231,26.37595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(232,26.5544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(233,26.04351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(234,25.98289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(235,25.58851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(236,26.37645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(237,25.69398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(238,26.02659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(239,26.04644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(240,25.75193);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(241,26.05756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(242,25.3254);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(243,24.88382);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(244,25.60494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(245,25.52073);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(246,25.37782);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(247,25.55187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(248,25.1586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(249,25.51868);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(250,25.48368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(251,25.65664);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(252,25.27964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(253,24.99467);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(254,25.17324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(255,24.94281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(256,25.2859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(257,24.64847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(258,24.48661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(259,24.82624);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(260,24.64051);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(261,24.8116);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(262,24.80621);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(263,24.99451);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(264,24.78093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(265,24.28007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(266,24.58432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(267,24.77352);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(268,25.26265);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(269,24.44411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(270,24.14649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(271,24.39173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(272,24.57001);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(273,24.44062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(274,24.63576);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(275,24.0743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(276,24.22856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(277,23.79091);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(278,23.96974);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(279,24.44629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(280,23.96729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(281,23.64107);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(282,23.96719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(283,24.18839);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(284,23.7964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(285,24.14256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(286,23.78772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(287,23.75772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(288,23.436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(289,23.90376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(290,23.43353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(291,23.66178);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(292,23.74025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(293,23.50825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(294,23.46047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(295,23.68207);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(296,23.4737);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(297,23.3858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(298,23.25474);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(299,23.00731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(300,23.05879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(301,23.20549);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(302,23.14713);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(303,22.98212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(304,23.12178);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(305,23.09251);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(306,22.69168);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(307,22.71869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(308,23.08089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(309,23.20737);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(310,22.91742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(311,22.42143);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(312,22.75837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(313,22.62285);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(314,23.14658);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(315,22.68409);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(316,22.7958);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(317,22.74642);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(318,22.76814);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(319,22.49273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(320,22.35978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(321,22.5941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(322,23.85279);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(323,22.38642);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(324,22.35714);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(325,22.44457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(326,23.16524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(327,22.20741);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(328,22.18176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(329,22.27619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(330,22.30749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(331,22.42444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(332,22.25671);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(333,22.22766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(334,22.67748);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(335,22.23236);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(336,21.95563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(337,21.96045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(338,21.90805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(339,21.59736);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(340,21.65885);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(341,21.75446);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(342,21.9261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(343,21.66786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(344,21.92798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(345,21.76467);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(346,22.024);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(347,21.49994);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(348,21.21319);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(349,21.33759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(350,21.18588);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(351,21.34172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(352,21.75741);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(353,21.12603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(354,21.41597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(355,21.27003);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(356,21.29547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(357,21.43503);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(358,20.93131);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(359,21.32178);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(360,20.87689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(361,20.9765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(362,20.94522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(363,20.82568);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(364,20.83521);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(365,20.66587);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(366,20.82353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(367,20.55228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(368,20.41029);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(369,20.39994);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(370,20.53622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(371,20.42926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(372,20.82531);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(373,20.10216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(374,20.37966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(375,20.38634);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(376,20.37762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(377,20.42806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(378,20.63977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(379,20.59342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(380,20.20521);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(381,20.38565);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(382,20.04942);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(383,20.34126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(384,20.31969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(385,20.2521);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(386,20.02816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(387,20.07906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(388,19.81497);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(389,19.75162);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(390,19.83902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(391,19.79923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(392,19.55933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(393,19.60429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(394,19.77008);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(395,19.63009);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(396,19.43211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(397,19.49655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(398,19.35322);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(399,20.22629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(400,19.62365);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(401,19.96123);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(402,19.11368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(403,19.32261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(404,19.55709);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(405,19.55984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(406,19.90977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(407,19.44487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(408,19.18457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(409,19.49539);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(410,18.9086);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(411,19.50695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(412,19.58161);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(413,18.77872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(414,19.32046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(415,19.11711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(416,19.31026);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(417,18.96738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(418,19.04038);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(419,19.19513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(420,19.15367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(421,19.1083);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(422,18.99075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(423,18.99861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(424,18.64475);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(425,18.81942);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(426,19.00477);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(427,18.7507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(428,19.00703);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(429,18.77969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(430,18.57246);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(431,18.31387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(432,18.22062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(433,18.3999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(434,18.57048);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(435,18.49072);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(436,18.59772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(437,18.03537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(438,18.15774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(439,18.34162);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(440,17.77424);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(441,18.76359);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(442,18.18923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(443,17.94003);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(444,18.17967);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(445,18.26121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(446,18.43324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(447,18.02055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(448,18.10408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(449,18.28223);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(450,17.98166);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(451,17.45225);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(452,18.31042);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(453,17.89537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(454,17.86563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(455,18.06293);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(456,17.81481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(457,17.6001);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(458,17.82792);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(459,17.34669);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(460,17.54534);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(461,17.51606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(462,17.75524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(463,17.69418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(464,17.70212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(465,17.12209);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(466,17.64462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(467,17.62831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(468,17.14891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(469,17.48242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(470,17.32705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(471,17.04188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(472,17.33454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(473,16.85445);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(474,17.30453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(475,17.27004);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(476,17.25059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(477,17.12306);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(478,17.00936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(479,17.02897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(480,16.90924);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(481,17.13253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(482,16.58487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(483,17.08784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(484,16.80564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(485,17.04625);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(486,17.075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(487,17.07352);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(488,16.4263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(489,16.70259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(490,16.43446);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(491,16.49842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(492,16.26044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(493,16.52866);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(494,16.70599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(495,16.67746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(496,16.48806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(497,16.41296);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(498,16.47831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(499,16.20606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(500,16.15186);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(501,16.15954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(502,16.46333);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(503,16.3691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(504,16.33451);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(505,16.19449);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(506,16.52476);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(507,16.18508);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(508,16.15949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(509,16.3392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(510,16.16575);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(511,15.79637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(512,16.0344);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(513,15.90977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(514,15.78345);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(515,16.02926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(516,15.45529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(517,15.79622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(518,15.75409);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(519,15.8863);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(520,15.53384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(521,15.74126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(522,15.6321);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(523,15.99858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(524,15.66515);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(525,15.83393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(526,15.02194);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(527,16.63659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(528,15.14043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(529,15.70653);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(530,15.18726);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(531,15.11992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(532,15.66162);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(533,15.41052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(534,15.50686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(535,15.10183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(536,15.25516);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(537,15.16031);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(538,15.15377);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(539,14.96759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(540,15.11252);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(541,14.97292);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(542,15.29539);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(543,14.98051);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(544,14.81225);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(545,15.02074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(546,14.89543);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(547,14.58351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(548,14.54356);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(549,14.67935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(550,14.71793);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(551,14.75617);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(552,14.71489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(553,14.81229);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(554,14.27075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(555,14.81875);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(556,14.92629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(557,14.86511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(558,14.70695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(559,14.4507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(560,14.30534);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(561,14.5167);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(562,15.19977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(563,14.68754);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(564,14.78762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(565,14.23549);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(566,14.39921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(567,13.98951);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(568,14.2964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(569,14.1193);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(570,14.27971);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(571,14.17883);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(572,14.04929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(573,13.9854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(574,14.38038);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(575,13.57074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(576,14.05383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(577,13.94761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(578,13.73209);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(579,14.13339);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(580,13.9155);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(581,14.20692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(582,13.8385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(583,13.68713);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(584,13.66391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(585,13.63439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(586,13.60775);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(587,13.49923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(588,13.54764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(589,13.57094);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(590,13.19597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(591,13.52732);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(592,13.42056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(593,13.58045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(594,13.74887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(595,13.90416);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(596,13.37442);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(597,13.39711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(598,13.44918);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(599,13.69421);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(600,13.27654);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(601,13.45347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(602,13.4966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(603,13.33983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(604,13.44774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(605,13.37121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(606,13.51344);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(607,13.28367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(608,13.15497);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(609,13.43336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(610,12.88555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(611,13.18657);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(612,13.02746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(613,13.24031);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(614,13.13788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(615,13.10654);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(616,13.01706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(617,13.29672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(618,12.95624);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(619,12.77862);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(620,12.54763);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(621,12.83086);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(622,12.91985);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(623,12.74835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(624,13.12182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(625,12.83458);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(626,12.58894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(627,12.96577);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(628,12.84055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(629,12.71498);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(630,12.95075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(631,12.56658);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(632,12.58112);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(633,12.77687);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(634,12.55544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(635,12.47777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(636,12.50175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(637,12.72345);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(638,12.47518);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(639,12.58341);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(640,12.42878);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(641,12.38902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(642,12.30744);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(643,12.26079);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(644,11.92379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(645,12.27264);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(646,12.03119);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(647,12.1646);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(648,12.27744);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(649,12.24232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(650,12.36988);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(651,11.86719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(652,12.20649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(653,11.88738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(654,12.81245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(655,12.22531);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(656,11.75544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(657,12.2744);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(658,12.16911);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(659,12.01525);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(660,11.73528);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(661,11.82733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(662,12.1056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(663,11.44805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(664,12.1827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(665,12.01243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(666,11.76192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(667,11.508);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(668,11.54027);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(669,11.50116);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(670,11.51352);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(671,11.86817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(672,11.63332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(673,12.13559);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(674,11.7729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(675,11.61922);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(676,11.55898);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(677,11.56541);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(678,11.4604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(679,11.28201);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(680,11.28844);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(681,11.31312);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(682,11.55471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(683,11.38403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(684,11.6439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(685,11.37747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(686,11.18358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(687,11.64031);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(688,11.27464);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(689,11.16364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(690,11.24523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(691,11.34764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(692,10.99069);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(693,11.24192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(694,10.95866);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(695,11.23699);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(696,11.16629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(697,11.63924);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(698,10.77592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(699,11.06424);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(700,10.90324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(701,11.02364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(702,10.74926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(703,11.22158);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(704,10.96547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(705,10.796);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(706,11.05742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(707,10.63168);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(708,10.74966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(709,11.01485);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(710,10.67902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(711,11.01173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(712,10.93445);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(713,10.68705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(714,10.60575);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(715,10.90531);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(716,10.67856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(717,10.79193);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(718,10.33409);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(719,10.43459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(720,10.65454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(721,11.39904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(722,10.52925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(723,10.77);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(724,10.3956);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(725,10.50826);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(726,10.48021);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(727,10.51834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(728,10.48777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(729,10.28758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(730,10.88711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(731,10.68915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(732,10.30353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(733,10.17398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(734,10.12274);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(735,10.16217);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(736,10.44147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(737,10.11336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(738,10.52315);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(739,10.22799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(740,10.104);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(741,10.43406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(742,10.23937);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(743,10.45735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(744,10.04245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(745,10.22772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(746,10.23831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(747,9.913568);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(748,9.632904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(749,10.46431);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(750,10.10817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(751,11.07057);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(752,9.979704);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(753,10.15728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(754,9.871778);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(755,9.699364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(756,9.692878);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(757,9.557167);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(758,9.872307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(759,10.06441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(760,9.848779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(761,9.735806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(762,9.701232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(763,9.623501);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(764,9.616563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(765,9.86665);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(766,9.480002);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(767,9.789392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(768,9.407798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(769,9.848314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(770,9.43857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(771,9.241967);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(772,9.641263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(773,9.563704);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(774,9.394276);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(775,9.119394);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(776,9.728273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(777,9.327882);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(778,9.071117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(779,9.252053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(780,9.51831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(781,9.769588);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(782,9.292679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(783,9.41813);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(784,9.725386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(785,9.224471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(786,9.538267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(787,9.169857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(788,9.320894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(789,9.189834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(790,9.445095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(791,9.333789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(792,8.962686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(793,8.904147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(794,8.890619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(795,8.827685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(796,9.010173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(797,9.000116);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(798,8.928606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(799,8.906243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(800,9.092469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(801,8.926751);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(802,9.103728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(803,8.820312);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(804,9.190914);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(805,9.018032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(806,8.923663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(807,9.109032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(808,9.354579);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(809,8.464377);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(810,8.855844);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(811,8.857904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(812,8.773857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(813,8.861154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(814,8.762923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(815,8.896414);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(816,8.586392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(817,8.807803);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(818,8.766136);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(819,9.448922);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(820,8.775791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(821,8.7231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(822,8.287682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(823,8.845514);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(824,8.418173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(825,8.274076);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(826,8.569929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(827,8.968932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(828,8.561674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(829,8.510519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(830,8.206634);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(831,8.463922);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(832,8.657969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(833,8.611092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(834,8.107383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(835,8.566466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(836,8.798292);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(837,8.053504);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(838,8.210833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(839,8.264899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(840,8.05688);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(841,8.130304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(842,8.246988);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(843,8.222289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(844,8.174163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(845,8.234665);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(846,8.368362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(847,8.276917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(848,8.213283);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(849,8.436138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(850,8.465033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(851,8.019904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(852,8.373091);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(853,8.0774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(854,8.003938);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(855,7.928414);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(856,8.058935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(857,7.654503);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(858,7.998122);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(859,7.99503);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(860,7.97139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(861,7.782029);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(862,7.998077);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(863,7.939905);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(864,8.076011);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(865,7.824326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(866,7.925522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(867,7.873136);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(868,8.154825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(869,8.25847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(870,7.815061);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(871,7.907806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(872,7.483401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(873,7.660871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(874,7.808508);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(875,7.46737);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(876,8.150523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(877,7.923572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(878,7.975418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(879,7.929775);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(880,7.822289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(881,7.655945);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(882,7.646442);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(883,7.470001);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(884,7.346033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(885,7.512485);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(886,7.217454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(887,7.568659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(888,7.333005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(889,7.55821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(890,7.328425);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(891,7.712185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(892,7.348491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(893,7.093051);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(894,7.614245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(895,7.469183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(896,7.11836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(897,7.108676);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(898,7.472141);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(899,7.258476);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(900,7.32371);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(901,6.806787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(902,7.246444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(903,7.369518);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(904,7.414673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(905,7.596989);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(906,7.396096);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(907,7.462425);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(908,7.202119);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(909,7.182179);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(910,6.925948);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(911,7.071688);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(912,6.826619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(913,6.987233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(914,7.180929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(915,7.259268);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(916,7.235434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(917,7.283975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(918,7.026367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(919,7.10275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(920,7.338134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(921,6.685746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(922,7.589551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(923,6.977744);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(924,7.139921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(925,7.4231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(926,7.016962);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(927,6.695897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(928,6.98936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(929,6.998197);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(930,6.609151);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(931,7.064767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(932,6.817423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(933,6.696592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(934,6.843348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(935,6.898126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(936,6.771721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(937,6.942335);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(938,6.604713);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(939,6.791017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(940,7.166491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(941,7.047118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(942,6.531676);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(943,6.405432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(944,6.790131);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(945,6.552694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(946,6.797254);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(947,6.841571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(948,6.940402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(949,6.61719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(950,6.543221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(951,6.614389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(952,6.98778);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(953,6.760753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(954,6.560973);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(955,6.418624);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(956,6.886156);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(957,6.486106);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(958,6.684775);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(959,6.498912);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(960,6.577186);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(961,6.54253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(962,6.775815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(963,6.652651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(964,6.691965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(965,6.274925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(966,6.423824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(967,6.476904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(968,6.169777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(969,6.752288);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(970,6.206241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(971,6.327272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(972,6.330356);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(973,6.386412);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(974,6.651871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(975,6.558297);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(976,6.734562);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(977,6.023736);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(978,6.451061);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(979,6.23985);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(980,6.37735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(981,6.231664);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(982,6.157269);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(983,6.262852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(984,6.199617);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(985,6.353901);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(986,6.403184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(987,6.014238);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(988,5.932696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(989,6.252792);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(990,6.244187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(991,6.216743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(992,5.768408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(993,6.326656);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(994,6.269955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(995,5.954216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(996,6.097366);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(997,6.346755);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(998,5.648695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(999,6.061486);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1000,6.102731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1001,98.67027);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetEntries(2004549);

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
   
   TH1D *VH_tagFirst_Z_mass__71 = new TH1D("VH_tagFirst_Z_mass__71","",1000,0,2000);
   VH_tagFirst_Z_mass__71->SetBinContent(1000,52);
   VH_tagFirst_Z_mass__71->SetBinContent(1001,27643);
   VH_tagFirst_Z_mass__71->SetEntries(1402468);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_mass__71->SetLineColor(ci);
   VH_tagFirst_Z_mass__71->SetLineWidth(2);
   VH_tagFirst_Z_mass__71->SetMarkerStyle(20);
   VH_tagFirst_Z_mass__71->SetMarkerSize(1.2);
   VH_tagFirst_Z_mass__71->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_Z_mass__71->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__71->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__71->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__71->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__71->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__71->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__71->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__71->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__71->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fx1071[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fy1071[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8221.098, 8410.964, 8640.013,
   8538.524, 8545.014, 8519.825, 8466.057, 8271.581, 7960.75, 7751.615, 7586.385, 7331.425, 6998.291, 6950.875, 6830.111, 6774.515, 6571.967, 6505.166, 6413.487,
   6409.491, 6289.935, 6198.051, 6258.807, 6001.884, 6012.036, 6043.852, 5891.096, 5771.758, 5748.516, 5633.243, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 38.75595 };
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fex1071[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fey1071[1000] = { 0, 0, 0, 0, 0, 0.04532417, 0.037812, 0, 0.01453245, 0, 0.03315875, 0.9317405, 0.7332751, 2.519996, 5.637532, 8.912741, 13.04929,
   17.42508, 22.5062, 26.75908, 31.8028, 36.64549, 40.69292, 44.73441, 48.29481, 51.74386, 54.24889, 57.03662, 58.81934, 60.73874, 61.69342, 62.48343, 63.44163,
   63.50144, 63.74627, 64.01287, 64.30147, 64.53267, 63.73462, 63.8379, 63.95177, 64.17717, 63.60875, 63.52727, 63.07477, 62.93602, 62.03619, 61.72328, 60.51792,
   59.95975, 59.69219, 58.7868, 58.29067, 57.11966, 56.84351, 56.80651, 55.97621, 55.43161, 55.18084, 54.60701, 54.17042, 54.36304, 53.66598, 53.51713, 53.3715,
   53.2367, 52.68114, 52.27487, 52.02558, 51.73176, 51.37425, 51.08417, 51.22056, 51.02854, 50.45445, 50.16052, 49.84461, 49.64355, 49.19759, 49.47108, 48.98728,
   48.6049, 48.55989, 47.89949, 47.58643, 47.45997, 48.08576, 47.15214, 46.57888, 46.62986, 45.8657, 45.729, 45.4818, 45.55772, 45.13711, 44.94277, 44.55078,
   44.36839, 43.87354, 43.74138, 43.25334, 43.0426, 43.17427, 42.0643, 42.29735, 41.82351, 41.92791, 41.89632, 41.23577, 40.90631, 41.07999, 40.64847, 40.2733,
   39.9719, 39.89425, 39.60776, 39.25188, 38.52235, 38.67205, 38.29936, 38.71488, 37.98245, 38.25901, 37.92379, 37.20961, 37.59779, 36.94585, 37.01473, 36.77569,
   36.42711, 36.09399, 36.06824, 36.14996, 35.37029, 35.66408, 35.61881, 35.04032, 34.93803, 34.93155, 34.91165, 34.98165, 34.53398, 34.2277, 34.2726, 33.69322,
   33.57851, 33.3088, 33.36975, 33.34938, 33.15302, 33.23287, 33.24352, 32.60221, 32.37264, 32.49831, 32.57796, 31.94901, 32.06632, 31.39385, 31.86043, 31.27102,
   31.70169, 31.23882, 31.32781, 31.44563, 31.13092, 30.96218, 31.03246, 30.68043, 30.52801, 30.57191, 29.92875, 30.1822, 30.21673, 30.16381, 29.63183, 30.09764,
   29.77111, 30.08426, 29.50856, 29.47619, 29.68482, 29.22515, 29.43797, 29.10783, 29.3396, 29.28217, 29.16387, 28.66131, 28.65986, 28.58828, 28.73429, 28.40685,
   28.50256, 28.84357, 28.39032, 28.2383, 28.03979, 27.97259, 27.5462, 27.88339, 28.07418, 27.75072, 27.88719, 27.81164, 27.72434, 27.46832, 27.19725, 27.5332,
   27.34629, 26.95038, 27.52836, 27.47455, 26.99608, 26.83638, 26.81969, 27.00105, 26.74018, 27.16858, 26.78996, 26.55085, 26.87179, 26.39463, 26.52877, 26.06949,
   26.48647, 26.3412, 26.2866, 26.26209, 26.25032, 26.37595, 26.5544, 26.04351, 25.98289, 25.58851, 26.37645, 25.69398, 26.02659, 26.04644, 25.75193, 26.05756,
   25.3254, 24.88382, 25.60494, 25.52073, 25.37782, 25.55187, 25.1586, 25.51868, 25.48368, 25.65664, 25.27964, 24.99467, 25.17324, 24.94281, 25.2859, 24.64847,
   24.48661, 24.82624, 24.64051, 24.8116, 24.80621, 24.99451, 24.78093, 24.28007, 24.58432, 24.77352, 25.26265, 24.44411, 24.14649, 24.39173, 24.57001, 24.44062,
   24.63576, 24.0743, 24.22856, 23.79091, 23.96974, 24.44629, 23.96729, 23.64107, 23.96719, 24.18839, 23.7964, 24.14256, 23.78772, 23.75772, 23.436, 23.90376,
   23.43353, 23.66178, 23.74025, 23.50825, 23.46047, 23.68207, 23.4737, 23.3858, 23.25474, 23.00731, 23.05879, 23.20549, 23.14713, 22.98212, 23.12178, 23.09251,
   22.69168, 22.71869, 23.08089, 23.20737, 22.91742, 22.42143, 22.75837, 22.62285, 23.14658, 22.68409, 22.7958, 22.74642, 22.76814, 22.49273, 22.35978, 22.5941,
   23.85279, 22.38642, 22.35714, 22.44457, 23.16524, 22.20741, 22.18176, 22.27619, 22.30749, 22.42444, 22.25671, 22.22766, 22.67748, 22.23236, 21.95563, 21.96045,
   21.90805, 21.59736, 21.65885, 21.75446, 21.9261, 21.66786, 21.92798, 21.76467, 22.024, 21.49994, 21.21319, 21.33759, 21.18588, 21.34172, 21.75741, 21.12603,
   21.41597, 21.27003, 21.29547, 21.43503, 20.93131, 21.32178, 20.87689, 20.9765, 20.94522, 20.82568, 20.83521, 20.66587, 20.82353, 20.55228, 20.41029, 20.39994,
   20.53622, 20.42926, 20.82531, 20.10216, 20.37966, 20.38634, 20.37762, 20.42806, 20.63977, 20.59342, 20.20521, 20.38565, 20.04942, 20.34126, 20.31969, 20.2521,
   20.02816, 20.07906, 19.81497, 19.75162, 19.83902, 19.79923, 19.55933, 19.60429, 19.77008, 19.63009, 19.43211, 19.49655, 19.35322, 20.22629, 19.62365, 19.96123,
   19.11368, 19.32261, 19.55709, 19.55984, 19.90977, 19.44487, 19.18457, 19.49539, 18.9086, 19.50695, 19.58161, 18.77872, 19.32046, 19.11711, 19.31026, 18.96738,
   19.04038, 19.19513, 19.15367, 19.1083, 18.99075, 18.99861, 18.64475, 18.81942, 19.00477, 18.7507, 19.00703, 18.77969, 18.57246, 18.31387, 18.22062, 18.3999,
   18.57048, 18.49072, 18.59772, 18.03537, 18.15774, 18.34162, 17.77424, 18.76359, 18.18923, 17.94003, 18.17967, 18.26121, 18.43324, 18.02055, 18.10408, 18.28223,
   17.98166, 17.45225, 18.31042, 17.89537, 17.86563, 18.06293, 17.81481, 17.6001, 17.82792, 17.34669, 17.54534, 17.51606, 17.75524, 17.69418, 17.70212, 17.12209,
   17.64462, 17.62831, 17.14891, 17.48242, 17.32705, 17.04188, 17.33454, 16.85445, 17.30453, 17.27004, 17.25059, 17.12306, 17.00936, 17.02897, 16.90924, 17.13253,
   16.58487, 17.08784, 16.80564, 17.04625, 17.075, 17.07352, 16.4263, 16.70259, 16.43446, 16.49842, 16.26044, 16.52866, 16.70599, 16.67746, 16.48806, 16.41296,
   16.47831, 16.20606, 16.15186, 16.15954, 16.46333, 16.3691, 16.33451, 16.19449, 16.52476, 16.18508, 16.15949, 16.3392, 16.16575, 15.79637, 16.0344, 15.90977,
   15.78345, 16.02926, 15.45529, 15.79622, 15.75409, 15.8863, 15.53384, 15.74126, 15.6321, 15.99858, 15.66515, 15.83393, 15.02194, 16.63659, 15.14043, 15.70653,
   15.18726, 15.11992, 15.66162, 15.41052, 15.50686, 15.10183, 15.25516, 15.16031, 15.15377, 14.96759, 15.11252, 14.97292, 15.29539, 14.98051, 14.81225, 15.02074,
   14.89543, 14.58351, 14.54356, 14.67935, 14.71793, 14.75617, 14.71489, 14.81229, 14.27075, 14.81875, 14.92629, 14.86511, 14.70695, 14.4507, 14.30534, 14.5167,
   15.19977, 14.68754, 14.78762, 14.23549, 14.39921, 13.98951, 14.2964, 14.1193, 14.27971, 14.17883, 14.04929, 13.9854, 14.38038, 13.57074, 14.05383, 13.94761,
   13.73209, 14.13339, 13.9155, 14.20692, 13.8385, 13.68713, 13.66391, 13.63439, 13.60775, 13.49923, 13.54764, 13.57094, 13.19597, 13.52732, 13.42056, 13.58045,
   13.74887, 13.90416, 13.37442, 13.39711, 13.44918, 13.69421, 13.27654, 13.45347, 13.4966, 13.33983, 13.44774, 13.37121, 13.51344, 13.28367, 13.15497, 13.43336,
   12.88555, 13.18657, 13.02746, 13.24031, 13.13788, 13.10654, 13.01706, 13.29672, 12.95624, 12.77862, 12.54763, 12.83086, 12.91985, 12.74835, 13.12182, 12.83458,
   12.58894, 12.96577, 12.84055, 12.71498, 12.95075, 12.56658, 12.58112, 12.77687, 12.55544, 12.47777, 12.50175, 12.72345, 12.47518, 12.58341, 12.42878, 12.38902,
   12.30744, 12.26079, 11.92379, 12.27264, 12.03119, 12.1646, 12.27744, 12.24232, 12.36988, 11.86719, 12.20649, 11.88738, 12.81245, 12.22531, 11.75544, 12.2744,
   12.16911, 12.01525, 11.73528, 11.82733, 12.1056, 11.44805, 12.1827, 12.01243, 11.76192, 11.508, 11.54027, 11.50116, 11.51352, 11.86817, 11.63332, 12.13559,
   11.7729, 11.61922, 11.55898, 11.56541, 11.4604, 11.28201, 11.28844, 11.31312, 11.55471, 11.38403, 11.6439, 11.37747, 11.18358, 11.64031, 11.27464, 11.16364,
   11.24523, 11.34764, 10.99069, 11.24192, 10.95866, 11.23699, 11.16629, 11.63924, 10.77592, 11.06424, 10.90324, 11.02364, 10.74926, 11.22158, 10.96547, 10.796,
   11.05742, 10.63168, 10.74966, 11.01485, 10.67902, 11.01173, 10.93445, 10.68705, 10.60575, 10.90531, 10.67856, 10.79193, 10.33409, 10.43459, 10.65454, 11.39904,
   10.52925, 10.77, 10.3956, 10.50826, 10.48021, 10.51834, 10.48777, 10.28758, 10.88711, 10.68915, 10.30353, 10.17398, 10.12274, 10.16217, 10.44147, 10.11336,
   10.52315, 10.22799, 10.104, 10.43406, 10.23937, 10.45735, 10.04245, 10.22772, 10.23831, 9.913568, 9.632904, 10.46431, 10.10817, 11.07057, 9.979704, 10.15728,
   9.871778, 9.699364, 9.692878, 9.557167, 9.872307, 10.06441, 9.848779, 9.735806, 9.701232, 9.623501, 9.616563, 9.86665, 9.480002, 9.789392, 9.407798, 9.848314,
   9.43857, 9.241967, 9.641263, 9.563704, 9.394276, 9.119394, 9.728273, 9.327882, 9.071117, 9.252053, 9.51831, 9.769588, 9.292679, 9.41813, 9.725386, 9.224471,
   9.538267, 9.169857, 9.320894, 9.189834, 9.445095, 9.333789, 8.962686, 8.904147, 8.890619, 8.827685, 9.010173, 9.000116, 8.928606, 8.906243, 9.092469, 8.926751,
   9.103728, 8.820312, 9.190914, 9.018032, 8.923663, 9.109032, 9.354579, 8.464377, 8.855844, 8.857904, 8.773857, 8.861154, 8.762923, 8.896414, 8.586392, 8.807803,
   8.766136, 9.448922, 8.775791, 8.7231, 8.287682, 8.845514, 8.418173, 8.274076, 8.569929, 8.968932, 8.561674, 8.510519, 8.206634, 8.463922, 8.657969, 8.611092,
   8.107383, 8.566466, 8.798292, 8.053504, 8.210833, 8.264899, 8.05688, 8.130304, 8.246988, 8.222289, 8.174163, 8.234665, 8.368362, 8.276917, 8.213283, 8.436138,
   8.465033, 8.019904, 8.373091, 8.0774, 8.003938, 7.928414, 8.058935, 7.654503, 7.998122, 7.99503, 7.97139, 7.782029, 7.998077, 7.939905, 8.076011, 7.824326,
   7.925522, 7.873136, 8.154825, 8.25847, 7.815061, 7.907806, 7.483401, 7.660871, 7.808508, 7.46737, 8.150523, 7.923572, 7.975418, 7.929775, 7.822289, 7.655945,
   7.646442, 7.470001, 7.346033, 7.512485, 7.217454, 7.568659, 7.333005, 7.55821, 7.328425, 7.712185, 7.348491, 7.093051, 7.614245, 7.469183, 7.11836, 7.108676,
   7.472141, 7.258476, 7.32371, 6.806787, 7.246444, 7.369518, 7.414673, 7.596989, 7.396096, 7.462425, 7.202119, 7.182179, 6.925948, 7.071688, 6.826619, 6.987233,
   7.180929, 7.259268, 7.235434, 7.283975, 7.026367, 7.10275, 7.338134, 6.685746, 7.589551, 6.977744, 7.139921, 7.4231, 7.016962, 6.695897, 6.98936, 6.998197,
   6.609151, 7.064767, 6.817423, 6.696592, 6.843348, 6.898126, 6.771721, 6.942335, 6.604713, 6.791017, 7.166491, 7.047118, 6.531676, 6.405432, 6.790131, 6.552694,
   6.797254, 6.841571, 6.940402, 6.61719, 6.543221, 6.614389, 6.98778, 6.760753, 6.560973, 6.418624, 6.886156, 6.486106, 6.684775, 6.498912, 6.577186, 6.54253,
   6.775815, 6.652651, 6.691965, 6.274925, 6.423824, 6.476904, 6.169777, 6.752288, 6.206241, 6.327272, 6.330356, 6.386412, 6.651871, 6.558297, 6.734562, 6.023736,
   6.451061, 6.23985, 6.37735, 6.231664, 6.157269, 6.262852, 6.199617, 6.353901, 6.403184, 6.014238, 5.932696, 6.252792, 6.244187, 6.216743, 5.768408, 6.326656,
   6.269955, 5.954216, 6.097366, 6.346755, 5.648695, 6.061486, 6.102731 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_Z_mass_fx1071,Graph_from_VH_tagFirst_2b1c_Z_mass_fy1071,Graph_from_VH_tagFirst_2b1c_Z_mass_fex1071,Graph_from_VH_tagFirst_2b1c_Z_mass_fey1071);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1071 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1071","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1071->SetMinimum(-937.1581);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1071->SetMaximum(9579.874);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1071->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1071->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1071->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1071->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1071->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1071->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1071->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1071->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1071->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1071->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1071->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1071);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_Z_mass","Data (BTagCSV, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_mass_tagFirst_SR_17->cd();
  
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
   
   TH1D *data_mc_ratio__72 = new TH1D("data_mc_ratio__72","",1000,0,2000);
   data_mc_ratio__72->SetBinContent(1000,1.34173);
   data_mc_ratio__72->SetBinContent(1001,1.407402);
   data_mc_ratio__72->SetBinError(1000,0.1860644);
   data_mc_ratio__72->SetBinError(1001,0.01102928);
   data_mc_ratio__72->SetMinimum(0.4);
   data_mc_ratio__72->SetMaximum(1.6);
   data_mc_ratio__72->SetEntries(22.71375);
   data_mc_ratio__72->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__72->SetLineColor(ci);
   data_mc_ratio__72->SetLineWidth(2);
   data_mc_ratio__72->SetMarkerStyle(20);
   data_mc_ratio__72->SetMarkerSize(1.2);
   data_mc_ratio__72->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__72->GetXaxis()->SetRange(1,150);
   data_mc_ratio__72->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__72->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__72->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__72->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__72->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__72->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__72->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__72->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__72->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__72->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__72->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__72->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__72->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__72->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__72->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__72->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1072[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1072[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1072[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1072[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.00750428, 0.007428808, 0.00734277,
   0.007437051, 0.007460055, 0.007513402, 0.007595209, 0.007801733, 0.008006107, 0.008235432, 0.008429809, 0.00875371, 0.009089183, 0.009139464, 0.009234809, 0.009290115, 0.009439517, 0.009488349, 0.00943604,
   0.009354838, 0.009490111, 0.009484723, 0.009313383, 0.009516955, 0.009454951, 0.009399057, 0.009501833, 0.009603939, 0.009599144, 0.009693707, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1574657 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1072,Graph_from_mc_statistical_error_fy1072,Graph_from_mc_statistical_error_fex1072,Graph_from_mc_statistical_error_fey1072);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1072 = new TH1F("Graph_Graph_from_mc_statistical_error1072","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1072->SetMinimum(0.8110412);
   Graph_Graph_from_mc_statistical_error1072->SetMaximum(1.188959);
   Graph_Graph_from_mc_statistical_error1072->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1072->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1072->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1072->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1072->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1072->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1072->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1072->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1072->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1072->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1072->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1072);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagFirst_SR_17->cd();
   Z_mass_tagFirst_SR_17->Modified();
   Z_mass_tagFirst_SR_17->cd();
   Z_mass_tagFirst_SR_17->SetSelected(Z_mass_tagFirst_SR_17);
}
