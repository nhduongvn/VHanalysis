#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagFirst_SR_17()
{
//=========Macro generated from canvas: H_mass_tagFirst_SR_17/H_mass_tagFirst_SR_17
//=========  (Sat Dec  9 13:50:17 2023) by ROOT version 6.28/10
   TCanvas *H_mass_tagFirst_SR_17 = new TCanvas("H_mass_tagFirst_SR_17", "H_mass_tagFirst_SR_17",0,0,600,600);
   H_mass_tagFirst_SR_17->SetHighLightColor(2);
   H_mass_tagFirst_SR_17->Range(0,0,1,1);
   H_mass_tagFirst_SR_17->SetFillColor(0);
   H_mass_tagFirst_SR_17->SetFillStyle(4000);
   H_mass_tagFirst_SR_17->SetBorderMode(0);
   H_mass_tagFirst_SR_17->SetBorderSize(2);
   H_mass_tagFirst_SR_17->SetFrameFillStyle(1000);
   H_mass_tagFirst_SR_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-15.07453,315.7258,15069.45);
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
   st->SetMaximum(13561);
   
   TH1F *st_stack_94 = new TH1F("st_stack_94","",1000,0,2000);
   st_stack_94->SetMinimum(0.01);
   st_stack_94->SetMaximum(13561);
   st_stack_94->SetDirectory(nullptr);
   st_stack_94->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_94->SetLineColor(ci);
   st_stack_94->SetLineWidth(0);
   st_stack_94->GetXaxis()->SetRange(1,150);
   st_stack_94->GetXaxis()->SetLabelFont(42);
   st_stack_94->GetXaxis()->SetTitleOffset(1);
   st_stack_94->GetXaxis()->SetTitleFont(42);
   st_stack_94->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_94->GetYaxis()->SetLabelFont(42);
   st_stack_94->GetYaxis()->SetLabelSize(0.05);
   st_stack_94->GetYaxis()->SetTitleSize(0.057);
   st_stack_94->GetYaxis()->SetTitleOffset(1.2);
   st_stack_94->GetYaxis()->SetTitleFont(42);
   st_stack_94->GetZaxis()->SetLabelFont(42);
   st_stack_94->GetZaxis()->SetTitleOffset(1);
   st_stack_94->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_94);
   
   
   TH1D *VH_tagFirst_2b1c_H_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(48,3022.044);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(49,6102.45);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(50,6001.488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(51,5998.08);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(52,6008.73);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(53,5950.368);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(54,5984.448);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(55,5882.208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(56,5874.54);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(57,5785.932);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(58,5758.242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(59,5810.214);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(60,5773.152);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(61,5633.424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(62,5643.648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(63,5653.02);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(64,5645.778);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(65,5630.016);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(66,5539.704);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(67,5520.108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(68,5494.122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(69,5482.194);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(70,5365.896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(71,5387.622);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(72,5365.47);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(73,5248.746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(74,5209.98);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(75,5278.992);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(76,5224.89);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(77,5225.742);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(78,2579.004);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1000,22.578);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1001,8174.088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(12,1.807365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(13,4.344365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(14,9.146608);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(15,13.26769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(16,18.23857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(17,23.24727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(18,27.95417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(19,32.9593);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(20,37.37164);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(21,41.08858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(22,44.37767);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(23,47.45648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(24,49.38294);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(25,51.38026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(26,52.47241);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(27,53.86669);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(28,54.94244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(29,55.03979);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(30,55.16165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(31,55.29966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(32,55.21427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(33,55.01341);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(34,54.7124);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(35,54.68586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(36,54.41639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(37,54.07012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(38,53.95589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(39,53.58464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(40,53.54737);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(41,53.29258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(42,52.20021);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(43,52.27317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(44,52.27664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(45,52.12367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(46,51.83039);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(47,51.20336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(48,51.22285);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(49,50.9867);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(50,50.56317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(51,50.54881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(52,50.59367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(53,50.34736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(54,50.49133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(55,50.05817);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(56,50.02553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(57,49.64682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(58,49.52788);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(59,49.75089);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(60,49.59196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(61,48.98815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(62,49.03258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(63,49.07328);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(64,49.04183);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(65,48.97333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(66,48.57895);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(67,48.49295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(68,48.37867);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(69,48.32613);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(70,47.81079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(71,47.90748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(72,47.80889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(73,47.286);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(74,47.11105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(75,47.42205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(76,47.17842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(77,47.18226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(78,46.32836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(79,46.77472);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(80,46.64262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(81,46.11634);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(82,46.26172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(83,45.91126);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(84,45.55611);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(85,45.82818);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(86,45.70525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(87,44.82322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(88,45.18212);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(89,44.79689);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(90,45.14394);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(91,44.7442);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(92,44.3429);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(93,44.2999);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(94,44.13779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(95,43.74338);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(96,44.08019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(97,43.5792);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(98,43.7081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(99,43.5542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(100,43.43947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(101,42.99858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(102,43.05551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(103,42.80187);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(104,42.75308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(105,42.84849);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(106,42.87812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(107,42.66385);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(108,42.37148);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(109,42.40145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(110,41.99504);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(111,41.9345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(112,41.91069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(113,41.94965);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(114,41.88904);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(115,41.55629);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(116,42.04687);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(117,42.00801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(118,41.58467);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(119,41.26927);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(120,40.91596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(121,40.95365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(122,41.51697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(123,40.98244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(124,41.05765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(125,40.50138);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(126,40.70697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(127,40.49914);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(128,40.97137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(129,40.87825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(130,40.21133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(131,40.03947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(132,39.84865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(133,39.93509);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(134,39.85321);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(135,39.96688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(136,40.4386);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(137,39.778);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(138,40.06665);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(139,39.93509);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(140,40.06439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(141,39.42054);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(142,39.15726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(143,39.36987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(144,39.38369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(145,39.46885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(146,39.13408);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(147,38.96678);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(148,38.87352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(149,39.0203);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(150,39.04354);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(151,39.05516);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(152,38.67695);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(153,38.73322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(154,38.61591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(155,38.45107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(156,38.29501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(157,38.39912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(158,38.59475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(159,38.63);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(160,37.8709);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(161,38.24759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(162,38.26419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(163,38.05971);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(164,37.95466);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(165,37.59676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(166,37.46379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(167,37.60642);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(168,37.5122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(169,37.77734);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(170,37.29629);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(171,37.55813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(172,37.06934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(173,37.00319);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(174,36.86562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(175,36.79664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(176,36.78184);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(177,36.65828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(178,36.45973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(179,36.45973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(180,36.14981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(181,36.31759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(182,36.60379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(183,36.18242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(184,36.47217);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(185,36.75222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(186,36.40244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(187,35.64681);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(188,36.07443);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(189,35.77893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(190,35.99133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(191,35.79921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(192,35.76878);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(193,35.00725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(194,35.34773);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(195,35.53208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(196,35.12628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(197,34.6608);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(198,34.91901);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(199,34.88261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(200,34.62675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(201,34.85399);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(202,34.8722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(203,34.54805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(204,34.82794);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(205,34.29763);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(206,34.33729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(207,34.4112);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(208,33.82343);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(209,33.79391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(210,33.98668);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(211,33.976);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(212,33.82612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(213,33.5622);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(214,33.24711);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(215,33.47558);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(216,33.61083);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(217,33.09392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(218,33.18975);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(219,32.88488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(220,33.20341);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(221,32.93727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(222,32.60779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(223,32.61892);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(224,32.78817);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(225,32.8407);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(226,32.73);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(227,32.66062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(228,32.63838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(229,31.8476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(230,32.07472);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(231,32.0832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(232,32.25526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(233,31.8362);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(234,31.74772);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(235,31.57289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(236,31.6504);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(237,31.45484);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(238,31.40288);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(239,31.47215);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(240,31.24645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(241,30.97521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(242,31.51536);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(243,30.97814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(244,30.89308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(245,30.54453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(246,30.96935);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(247,30.51778);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(248,30.4523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(249,30.66904);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(250,30.6572);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(251,30.56531);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(252,29.95964);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(253,30.27898);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(254,30.1679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(255,30.10768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(256,29.46491);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(257,29.48339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(258,29.5633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(259,29.57557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(260,29.53566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(261,29.69804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(262,29.33529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(263,29.2082);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(264,29.43719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(265,29.16467);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(266,28.73527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(267,28.9492);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(268,29.3291);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(269,28.76683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(270,28.58647);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(271,28.69735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(272,28.44009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(273,28.57695);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(274,28.58647);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(275,28.51974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(276,28.0093);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(277,28.24801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(278,28.0352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(279,27.85336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(280,27.762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(281,27.95092);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(282,27.46296);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(283,27.7162);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(284,27.66377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(285,27.72602);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(286,27.23403);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(287,27.43652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(288,27.28729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(289,26.74656);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(290,26.87179);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(291,27.01324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(292,26.80417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(293,26.65821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(294,26.46005);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(295,26.7194);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(296,26.15654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(297,26.5559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(298,25.90556);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(299,26.1114);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(300,26.43947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(301,26.04529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(302,25.85999);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(303,25.52092);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(304,25.85648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(305,25.54224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(306,25.72984);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(307,25.5458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(308,25.96155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(309,25.44258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(310,25.39617);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(311,25.4711);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(312,24.90916);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(313,25.46397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(314,24.94193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(315,24.98191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(316,24.93101);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(317,25.06531);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(318,24.78866);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(319,24.57913);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(320,24.76302);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(321,24.65653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(322,23.98497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(323,24.53109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(324,24.41616);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(325,24.2446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(326,23.98497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(327,23.77981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(328,24.16963);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(329,24.0492);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(330,23.81793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(331,23.55745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(332,23.07489);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(333,23.31353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(334,23.32131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(335,23.43774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(336,23.41838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(337,23.48802);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(338,23.50347);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(339,23.14164);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(340,22.82978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(341,23.09454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(342,22.7302);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(343,22.99611);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(344,23.03159);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(345,22.89329);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(346,22.75015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(347,22.56192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(348,22.50554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(349,22.51361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(350,22.09458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(351,22.26232);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(352,22.64622);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(353,21.9421);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(354,21.91314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(355,21.95864);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(356,21.83847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(357,22.03289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(358,21.78023);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(359,21.76356);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(360,21.47817);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(361,22.13561);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(362,21.17181);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(363,21.58353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(364,21.45704);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(365,21.19751);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(366,21.15466);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(367,21.44435);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(368,21.97103);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(369,21.18038);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(370,20.59832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(371,20.69062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(372,21.08592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(373,20.7213);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(374,20.63353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(375,20.62474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(376,20.68624);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(377,20.51888);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(378,20.47018);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(379,20.57187);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(380,20.55864);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(381,20.18449);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(382,20.55864);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(383,20.08083);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(384,19.90382);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(385,20.04917);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(386,19.88101);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(387,19.59137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(388,19.70221);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(389,19.75281);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(390,19.91749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(391,19.71602);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(392,19.87188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(393,19.44726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(394,19.4799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(395,19.4426);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(396,19.39587);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(397,19.17473);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(398,19.26443);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(399,18.96537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(400,19.40055);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(401,18.54935);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(402,19.12261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(403,18.83575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(404,19.00839);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(405,18.85982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(406,18.71493);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(407,18.60308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(408,18.62746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(409,18.75852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(410,18.2336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(411,18.1488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(412,17.97296);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(413,18.60308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(414,18.1438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(415,18.1438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(416,18.21368);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(417,18.24355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(418,18.30809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(419,17.98305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(420,17.91734);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(421,17.71361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(422,17.66231);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(423,18.02841);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(424,18.01834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(425,17.42439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(426,17.78518);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(427,17.93253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(428,17.83613);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(429,17.3461);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(430,17.4348);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(431,17.2622);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(432,17.39312);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(433,17.48158);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(434,17.25694);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(435,16.90098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(436,16.86874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(437,17.13029);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(438,17.02402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(439,16.96529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(440,17.04);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(441,16.71202);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(442,16.91172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(443,16.79867);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(444,16.59214);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(445,16.36084);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(446,17.02402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(447,16.77164);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(448,16.71745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(449,16.11497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(450,16.20481);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(451,16.31085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(452,15.88814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(453,16.64129);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(454,16.32197);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(455,16.5099);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(456,16.0755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(457,15.7965);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(458,15.93377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(459,16.1431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(460,16.08115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(461,15.85384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(462,15.60579);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(463,15.55921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(464,15.26483);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(465,15.43038);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(466,15.7965);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(467,15.04932);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(468,15.14548);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(469,15.51833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(470,15.45975);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(471,15.09147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(472,15.15746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(473,15.09147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(474,14.71397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(475,15.03726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(476,15.06137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(477,14.88564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(478,15.01914);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(479,14.88564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(480,14.85513);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(481,14.83679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(482,15.07944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(483,14.65836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(484,14.73861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(485,14.79392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(486,14.49652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(487,14.94647);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(488,14.10311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(489,14.90391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(490,14.24395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(491,14.33919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(492,14.50278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(493,14.10311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(494,14.12882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(495,14.54027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(496,14.24395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(497,14.4338);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(498,14.1609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(499,14.32653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(500,14.17371);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(501,13.73148);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(502,13.96734);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(503,14.01922);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(504,14.10311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(505,13.71826);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(506,13.63865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(507,13.49149);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(508,13.97384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(509,13.4713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(510,13.49822);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(511,13.34951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(512,13.68515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(513,13.44433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(514,13.42407);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(515,13.39023);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(516,13.44433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(517,13.45782);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(518,13.13711);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(519,13.36989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(520,13.43758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(521,13.15092);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(522,13.23346);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(523,13.0748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(524,12.97028);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(525,13.37667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(526,13.34951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(527,12.8508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(528,12.94928);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(529,12.8931);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(530,12.92824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(531,12.8296);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(532,12.52179);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(533,12.7302);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(534,12.96329);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(535,12.97728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(536,12.33195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(537,12.54351);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(538,12.31722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(539,12.31722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(540,12.49277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(541,12.48551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(542,12.37601);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(543,11.79028);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(544,12.44912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(545,12.41262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(546,12.12417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(547,12.15407);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(548,12.17645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(549,12.39067);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(550,12.19134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(551,11.75945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(552,12.23592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(553,12.12417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(554,12.17645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(555,11.81334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(556,11.47831);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(557,12.16899);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(558,12.19878);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(559,11.78258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(560,11.46249);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(561,12.11669);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(562,11.29503);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(563,11.42284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(564,11.9887);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(565,11.68204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(566,11.928);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(567,11.73628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(568,11.45457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(569,11.0678);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(570,11.2709);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(571,11.31108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(572,11.69756);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(573,11.80566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(574,11.49411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(575,11.70531);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(576,11.42284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(577,11.28699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(578,10.98552);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(579,11.31108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(580,10.93584);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(581,11.1901);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(582,10.65852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(583,10.70947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(584,11.52564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(585,10.66703);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(586,10.76019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(587,10.96898);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(588,10.89428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(589,10.76019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(590,10.87761);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(591,10.77704);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(592,10.68403);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(593,10.59019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(594,10.69252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(595,10.62441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(596,10.39999);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(597,10.53866);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(598,10.46088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(599,10.78546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(600,10.37378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(601,10.5128);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(602,10.20623);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(603,10.53866);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(604,10.4522);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(605,10.28594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(606,9.890175);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(607,10.82744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(608,10.46955);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(609,10.25944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(610,9.807256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(611,10.224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(612,10.29476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(613,10.1259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(614,9.834974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(615,10.70947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(616,10.11694);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(617,9.917661);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(618,9.834974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(619,9.963301);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(620,10.05396);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(621,9.95419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(622,9.963301);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(623,10.1259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(624,9.629862);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(625,9.658088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(626,9.658088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(627,9.788735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(628,9.899345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(629,9.825743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(630,9.844195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(631,9.477902);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(632,9.95419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(633,9.516119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(634,9.468323);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(635,9.477902);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(636,9.23546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(637,9.658088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(638,9.313728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(639,9.49703);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(640,9.410648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(641,9.215789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(642,9.582633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(643,9.648688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(644,9.429912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(645,9.264888);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(646,8.956137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(647,9.036825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(648,8.688729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(649,8.98648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(650,9.439529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(651,9.066897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(652,8.864486);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(653,8.98648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(654,9.294223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(655,8.946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(656,9.30398);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(657,9.01672);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(658,9.096871);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(659,8.84399);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(660,8.771877);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(661,8.709591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(662,8.864486);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(663,8.751164);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(664,9.04686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(665,8.455859);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(666,8.740789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(667,9.04686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(668,9.156523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(669,8.380406);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(670,8.709591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(671,8.646856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(672,8.854244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(673,8.391227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(674,8.369572);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(675,8.541273);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(676,8.709591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(677,8.55189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(678,8.172097);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(679,8.48799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(680,8.636355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(681,8.782215);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(682,8.466583);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(683,8.657343);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(684,8.412826);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(685,8.380406);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(686,8.380406);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(687,8.326093);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(688,8.326093);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(689,8.060298);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(690,8.238448);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(691,8.21639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(692,8.127562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(693,8.105203);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(694,8.380406);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(695,8.498673);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(696,7.715188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(697,8.026455);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(698,8.11639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(699,8.094);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(700,8.48799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(701,7.981107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(702,7.958337);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(703,7.912599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(704,7.878121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(705,7.946927);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(706,8.026455);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(707,7.62052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(708,7.935501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(709,7.632417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(710,7.785434);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(711,7.738674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(712,7.82032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(713,7.855052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(714,7.831915);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(715,7.548739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(716,7.656158);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(717,7.43977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(718,7.572742);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(719,7.703418);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(720,7.762089);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(721,7.415337);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(722,7.536709);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(723,7.451957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(724,7.451957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(725,7.304378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(726,7.762089);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(727,7.632417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(728,7.500504);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(729,7.329181);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(730,7.43977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(731,7.69163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(732,7.464123);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(733,7.378536);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(734,7.267016);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(735,7.153756);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(736,7.22946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(737,7.291945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(738,7.038675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(739,7.366229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(740,7.488397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(741,7.102839);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(742,7.488397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(743,7.191708);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(744,6.908559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(745,7.47627);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(746,7.153756);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(747,6.960897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(748,6.749109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(749,6.816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(750,7.166429);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(751,7.427564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(752,7.012845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(753,7.166429);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(754,7.141061);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(755,7.291945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(756,7.191708);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(757,6.999894);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(758,7.403091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(759,6.895412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(760,6.921681);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(761,6.775945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(762,6.708655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(763,6.999894);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(764,6.640683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(765,6.640683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(766,7.3539);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(767,6.999894);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(768,6.640683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(769,6.789323);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(770,6.775945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(771,6.418337);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(772,6.640683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(773,6.640683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(774,6.304224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(775,6.375784);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(776,6.695116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(777,6.908559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(778,6.202654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(779,6.00947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(780,6.695116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(781,6.217265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(782,6.735651);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(783,7.025772);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(784,6.44655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(785,6.375784);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(786,6.572008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(787,6.46061);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(788,6.749109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(789,6.275372);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(790,6.5858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(791,6.361537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(792,6.404184);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(793,6.347257);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(794,6.474639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(795,6.099392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(796,6.46061);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(797,5.762821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(798,6.084497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(799,6.404184);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(800,6.361537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(801,6.054598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(802,6.099392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(803,6.054598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(804,5.948766);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(805,6.275372);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(806,6.143859);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(807,5.619326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(808,6.318601);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(809,5.619326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(810,5.603155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(811,6.173326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(812,5.570673);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(813,5.948766);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(814,5.683549);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(815,5.762821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(816,6.46061);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(817,5.825462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(818,5.964);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(819,5.825462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(820,6.039592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(821,6.099392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(822,5.856532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(823,5.856532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(824,5.933493);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(825,5.887437);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(826,5.841018);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(827,5.948766);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(828,6.332945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(829,5.619326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(830,6.039592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(831,5.856532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(832,5.71539);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(833,5.856532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(834,5.762821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(835,5.872005);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(836,5.586938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(837,5.570673);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(838,5.603155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(839,5.505133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(840,6.039592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(841,5.586938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(842,5.586938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(843,5.809865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(844,5.683549);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(845,5.683549);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(846,5.269329);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(847,5.234776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(848,5.388521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(849,5.619326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(850,5.538);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(851,5.651529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(852,5.683549);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(853,5.472069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(854,5.55436);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(855,5.004367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(856,5.55436);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(857,5.269329);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(858,5.388521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(859,5.902829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(860,5.199993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(861,5.619326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(862,5.0405);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(863,5.337765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(864,5.269329);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(865,5.762821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(866,5.094219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(867,4.912872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(868,4.857147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(869,5.076376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(870,5.217413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(871,4.912872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(872,5.0405);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(873,4.967971);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(874,5.488626);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(875,5.182514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(876,5.129719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(877,4.986202);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(878,5.147378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(879,4.686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(880,5.147378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(881,4.986202);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(882,5.129719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(883,4.647111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(884,5.0405);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(885,5.004367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(886,5.0405);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(887,5.286521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(888,5.129719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(889,5.05847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(890,5.05847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(891,4.931307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(892,4.912872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(893,5.112);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(894,4.743735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(895,4.724569);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(896,5.405334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(897,4.705324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(898,4.647111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(899,4.488188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(900,4.967971);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(901,4.800776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(902,4.986202);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(903,4.781838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(904,4.548435);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(905,4.528442);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(906,4.83843);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(907,5.094219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(908,4.857147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(909,4.686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(910,4.912872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(911,4.647111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(912,4.912872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(913,4.967971);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(914,4.528442);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(915,4.666596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(916,4.81964);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(917,4.323428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(918,4.018876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(919,4.686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(920,4.607895);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(921,4.548435);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(922,4.26);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(923,4.447571);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(924,4.83843);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(925,4.152134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(926,4.705324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(927,4.931307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(928,4.217185);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(929,4.58816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(930,4.488188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(931,3.904354);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(932,4.467926);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(933,4.488188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(934,4.130223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(935,4.800776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(936,4.548435);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(937,4.548435);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(938,4.50836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(939,4.406578);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(940,4.447571);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(941,4.607895);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(942,3.973463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(943,4.173931);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(944,4.344365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(945,3.973463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(946,4.26);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(947,4.302389);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(948,4.195613);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(949,4.488188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(950,4.108195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(951,4.467926);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(952,4.281247);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(953,3.973463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(954,4.323428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(955,4.344365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(956,4.130223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(957,4.344365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(958,4.041391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(959,4.152134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(960,4.018876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(961,4.217185);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(962,4.58816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(963,4.108195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(964,3.904354);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(965,3.713782);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(966,4.302389);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(967,3.857594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(968,3.713782);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(969,4.063781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(970,4.217185);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(971,4.217185);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(972,4.063781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(973,4.108195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(974,4.365201);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(975,3.950561);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(976,3.904354);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(977,4.041391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(978,4.086048);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(979,3.950561);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(980,3.76233);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(981,4.195613);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(982,3.786371);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(983,3.904354);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(984,3.564172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(985,3.639746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(986,3.927526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(987,3.834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(988,4.108195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(989,3.58954);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(990,3.713782);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(991,3.58954);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(992,4.130223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(993,3.76233);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(994,3.58954);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(995,3.58954);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(996,4.063781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(997,3.834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(998,3.713782);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(999,3.689268);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1000,4.173931);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1001,59.00984);
   VH_tagFirst_2b1c_H_mass_stack_1->SetEntries(3073644);

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
   
   TH1D *VH_tagFirst_H_mass__187 = new TH1D("VH_tagFirst_H_mass__187","",1000,0,2000);
   VH_tagFirst_H_mass__187->SetBinContent(1000,26);
   VH_tagFirst_H_mass__187->SetBinContent(1001,9229);
   VH_tagFirst_H_mass__187->SetEntries(1359367);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_mass__187->SetLineColor(ci);
   VH_tagFirst_H_mass__187->SetLineWidth(2);
   VH_tagFirst_H_mass__187->SetMarkerStyle(20);
   VH_tagFirst_H_mass__187->SetMarkerSize(1.2);
   VH_tagFirst_H_mass__187->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_H_mass__187->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__187->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__187->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__187->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__187->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__187->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__187->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__187->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__187->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fx1187[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fy1187[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3022.044, 6102.45,
   6001.488, 5998.08, 6008.73, 5950.368, 5984.448, 5882.208, 5874.54, 5785.932, 5758.242, 5810.214, 5773.152, 5633.424, 5643.648, 5653.02, 5645.778, 5630.016,
   5539.704, 5520.108, 5494.122, 5482.194, 5365.896, 5387.622, 5365.47, 5248.746, 5209.98, 5278.992, 5224.89, 5225.742, 2579.004, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 22.578 };
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fex1187[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fey1187[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.807365, 4.344365, 9.146608, 13.26769, 18.23857, 23.24727,
   27.95417, 32.9593, 37.37164, 41.08858, 44.37767, 47.45648, 49.38294, 51.38026, 52.47241, 53.86669, 54.94244, 55.03979, 55.16165, 55.29966, 55.21427, 55.01341,
   54.7124, 54.68586, 54.41639, 54.07012, 53.95589, 53.58464, 53.54737, 53.29258, 52.20021, 52.27317, 52.27664, 52.12367, 51.83039, 51.20336, 51.22285, 50.9867,
   50.56317, 50.54881, 50.59367, 50.34736, 50.49133, 50.05817, 50.02553, 49.64682, 49.52788, 49.75089, 49.59196, 48.98815, 49.03258, 49.07328, 49.04183, 48.97333,
   48.57895, 48.49295, 48.37867, 48.32613, 47.81079, 47.90748, 47.80889, 47.286, 47.11105, 47.42205, 47.17842, 47.18226, 46.32836, 46.77472, 46.64262, 46.11634,
   46.26172, 45.91126, 45.55611, 45.82818, 45.70525, 44.82322, 45.18212, 44.79689, 45.14394, 44.7442, 44.3429, 44.2999, 44.13779, 43.74338, 44.08019, 43.5792,
   43.7081, 43.5542, 43.43947, 42.99858, 43.05551, 42.80187, 42.75308, 42.84849, 42.87812, 42.66385, 42.37148, 42.40145, 41.99504, 41.9345, 41.91069, 41.94965,
   41.88904, 41.55629, 42.04687, 42.00801, 41.58467, 41.26927, 40.91596, 40.95365, 41.51697, 40.98244, 41.05765, 40.50138, 40.70697, 40.49914, 40.97137, 40.87825,
   40.21133, 40.03947, 39.84865, 39.93509, 39.85321, 39.96688, 40.4386, 39.778, 40.06665, 39.93509, 40.06439, 39.42054, 39.15726, 39.36987, 39.38369, 39.46885,
   39.13408, 38.96678, 38.87352, 39.0203, 39.04354, 39.05516, 38.67695, 38.73322, 38.61591, 38.45107, 38.29501, 38.39912, 38.59475, 38.63, 37.8709, 38.24759,
   38.26419, 38.05971, 37.95466, 37.59676, 37.46379, 37.60642, 37.5122, 37.77734, 37.29629, 37.55813, 37.06934, 37.00319, 36.86562, 36.79664, 36.78184, 36.65828,
   36.45973, 36.45973, 36.14981, 36.31759, 36.60379, 36.18242, 36.47217, 36.75222, 36.40244, 35.64681, 36.07443, 35.77893, 35.99133, 35.79921, 35.76878, 35.00725,
   35.34773, 35.53208, 35.12628, 34.6608, 34.91901, 34.88261, 34.62675, 34.85399, 34.8722, 34.54805, 34.82794, 34.29763, 34.33729, 34.4112, 33.82343, 33.79391,
   33.98668, 33.976, 33.82612, 33.5622, 33.24711, 33.47558, 33.61083, 33.09392, 33.18975, 32.88488, 33.20341, 32.93727, 32.60779, 32.61892, 32.78817, 32.8407,
   32.73, 32.66062, 32.63838, 31.8476, 32.07472, 32.0832, 32.25526, 31.8362, 31.74772, 31.57289, 31.6504, 31.45484, 31.40288, 31.47215, 31.24645, 30.97521,
   31.51536, 30.97814, 30.89308, 30.54453, 30.96935, 30.51778, 30.4523, 30.66904, 30.6572, 30.56531, 29.95964, 30.27898, 30.1679, 30.10768, 29.46491, 29.48339,
   29.5633, 29.57557, 29.53566, 29.69804, 29.33529, 29.2082, 29.43719, 29.16467, 28.73527, 28.9492, 29.3291, 28.76683, 28.58647, 28.69735, 28.44009, 28.57695,
   28.58647, 28.51974, 28.0093, 28.24801, 28.0352, 27.85336, 27.762, 27.95092, 27.46296, 27.7162, 27.66377, 27.72602, 27.23403, 27.43652, 27.28729, 26.74656,
   26.87179, 27.01324, 26.80417, 26.65821, 26.46005, 26.7194, 26.15654, 26.5559, 25.90556, 26.1114, 26.43947, 26.04529, 25.85999, 25.52092, 25.85648, 25.54224,
   25.72984, 25.5458, 25.96155, 25.44258, 25.39617, 25.4711, 24.90916, 25.46397, 24.94193, 24.98191, 24.93101, 25.06531, 24.78866, 24.57913, 24.76302, 24.65653,
   23.98497, 24.53109, 24.41616, 24.2446, 23.98497, 23.77981, 24.16963, 24.0492, 23.81793, 23.55745, 23.07489, 23.31353, 23.32131, 23.43774, 23.41838, 23.48802,
   23.50347, 23.14164, 22.82978, 23.09454, 22.7302, 22.99611, 23.03159, 22.89329, 22.75015, 22.56192, 22.50554, 22.51361, 22.09458, 22.26232, 22.64622, 21.9421,
   21.91314, 21.95864, 21.83847, 22.03289, 21.78023, 21.76356, 21.47817, 22.13561, 21.17181, 21.58353, 21.45704, 21.19751, 21.15466, 21.44435, 21.97103, 21.18038,
   20.59832, 20.69062, 21.08592, 20.7213, 20.63353, 20.62474, 20.68624, 20.51888, 20.47018, 20.57187, 20.55864, 20.18449, 20.55864, 20.08083, 19.90382, 20.04917,
   19.88101, 19.59137, 19.70221, 19.75281, 19.91749, 19.71602, 19.87188, 19.44726, 19.4799, 19.4426, 19.39587, 19.17473, 19.26443, 18.96537, 19.40055, 18.54935,
   19.12261, 18.83575, 19.00839, 18.85982, 18.71493, 18.60308, 18.62746, 18.75852, 18.2336, 18.1488, 17.97296, 18.60308, 18.1438, 18.1438, 18.21368, 18.24355,
   18.30809, 17.98305, 17.91734, 17.71361, 17.66231, 18.02841, 18.01834, 17.42439, 17.78518, 17.93253, 17.83613, 17.3461, 17.4348, 17.2622, 17.39312, 17.48158,
   17.25694, 16.90098, 16.86874, 17.13029, 17.02402, 16.96529, 17.04, 16.71202, 16.91172, 16.79867, 16.59214, 16.36084, 17.02402, 16.77164, 16.71745, 16.11497,
   16.20481, 16.31085, 15.88814, 16.64129, 16.32197, 16.5099, 16.0755, 15.7965, 15.93377, 16.1431, 16.08115, 15.85384, 15.60579, 15.55921, 15.26483, 15.43038,
   15.7965, 15.04932, 15.14548, 15.51833, 15.45975, 15.09147, 15.15746, 15.09147, 14.71397, 15.03726, 15.06137, 14.88564, 15.01914, 14.88564, 14.85513, 14.83679,
   15.07944, 14.65836, 14.73861, 14.79392, 14.49652, 14.94647, 14.10311, 14.90391, 14.24395, 14.33919, 14.50278, 14.10311, 14.12882, 14.54027, 14.24395, 14.4338,
   14.1609, 14.32653, 14.17371, 13.73148, 13.96734, 14.01922, 14.10311, 13.71826, 13.63865, 13.49149, 13.97384, 13.4713, 13.49822, 13.34951, 13.68515, 13.44433,
   13.42407, 13.39023, 13.44433, 13.45782, 13.13711, 13.36989, 13.43758, 13.15092, 13.23346, 13.0748, 12.97028, 13.37667, 13.34951, 12.8508, 12.94928, 12.8931,
   12.92824, 12.8296, 12.52179, 12.7302, 12.96329, 12.97728, 12.33195, 12.54351, 12.31722, 12.31722, 12.49277, 12.48551, 12.37601, 11.79028, 12.44912, 12.41262,
   12.12417, 12.15407, 12.17645, 12.39067, 12.19134, 11.75945, 12.23592, 12.12417, 12.17645, 11.81334, 11.47831, 12.16899, 12.19878, 11.78258, 11.46249, 12.11669,
   11.29503, 11.42284, 11.9887, 11.68204, 11.928, 11.73628, 11.45457, 11.0678, 11.2709, 11.31108, 11.69756, 11.80566, 11.49411, 11.70531, 11.42284, 11.28699,
   10.98552, 11.31108, 10.93584, 11.1901, 10.65852, 10.70947, 11.52564, 10.66703, 10.76019, 10.96898, 10.89428, 10.76019, 10.87761, 10.77704, 10.68403, 10.59019,
   10.69252, 10.62441, 10.39999, 10.53866, 10.46088, 10.78546, 10.37378, 10.5128, 10.20623, 10.53866, 10.4522, 10.28594, 9.890175, 10.82744, 10.46955, 10.25944,
   9.807256, 10.224, 10.29476, 10.1259, 9.834974, 10.70947, 10.11694, 9.917661, 9.834974, 9.963301, 10.05396, 9.95419, 9.963301, 10.1259, 9.629862, 9.658088,
   9.658088, 9.788735, 9.899345, 9.825743, 9.844195, 9.477902, 9.95419, 9.516119, 9.468323, 9.477902, 9.23546, 9.658088, 9.313728, 9.49703, 9.410648, 9.215789,
   9.582633, 9.648688, 9.429912, 9.264888, 8.956137, 9.036825, 8.688729, 8.98648, 9.439529, 9.066897, 8.864486, 8.98648, 9.294223, 8.946, 9.30398, 9.01672,
   9.096871, 8.84399, 8.771877, 8.709591, 8.864486, 8.751164, 9.04686, 8.455859, 8.740789, 9.04686, 9.156523, 8.380406, 8.709591, 8.646856, 8.854244, 8.391227,
   8.369572, 8.541273, 8.709591, 8.55189, 8.172097, 8.48799, 8.636355, 8.782215, 8.466583, 8.657343, 8.412826, 8.380406, 8.380406, 8.326093, 8.326093, 8.060298,
   8.238448, 8.21639, 8.127562, 8.105203, 8.380406, 8.498673, 7.715188, 8.026455, 8.11639, 8.094, 8.48799, 7.981107, 7.958337, 7.912599, 7.878121, 7.946927,
   8.026455, 7.62052, 7.935501, 7.632417, 7.785434, 7.738674, 7.82032, 7.855052, 7.831915, 7.548739, 7.656158, 7.43977, 7.572742, 7.703418, 7.762089, 7.415337,
   7.536709, 7.451957, 7.451957, 7.304378, 7.762089, 7.632417, 7.500504, 7.329181, 7.43977, 7.69163, 7.464123, 7.378536, 7.267016, 7.153756, 7.22946, 7.291945,
   7.038675, 7.366229, 7.488397, 7.102839, 7.488397, 7.191708, 6.908559, 7.47627, 7.153756, 6.960897, 6.749109, 6.816, 7.166429, 7.427564, 7.012845, 7.166429,
   7.141061, 7.291945, 7.191708, 6.999894, 7.403091, 6.895412, 6.921681, 6.775945, 6.708655, 6.999894, 6.640683, 6.640683, 7.3539, 6.999894, 6.640683, 6.789323,
   6.775945, 6.418337, 6.640683, 6.640683, 6.304224, 6.375784, 6.695116, 6.908559, 6.202654, 6.00947, 6.695116, 6.217265, 6.735651, 7.025772, 6.44655, 6.375784,
   6.572008, 6.46061, 6.749109, 6.275372, 6.5858, 6.361537, 6.404184, 6.347257, 6.474639, 6.099392, 6.46061, 5.762821, 6.084497, 6.404184, 6.361537, 6.054598,
   6.099392, 6.054598, 5.948766, 6.275372, 6.143859, 5.619326, 6.318601, 5.619326, 5.603155, 6.173326, 5.570673, 5.948766, 5.683549, 5.762821, 6.46061, 5.825462,
   5.964, 5.825462, 6.039592, 6.099392, 5.856532, 5.856532, 5.933493, 5.887437, 5.841018, 5.948766, 6.332945, 5.619326, 6.039592, 5.856532, 5.71539, 5.856532,
   5.762821, 5.872005, 5.586938, 5.570673, 5.603155, 5.505133, 6.039592, 5.586938, 5.586938, 5.809865, 5.683549, 5.683549, 5.269329, 5.234776, 5.388521, 5.619326,
   5.538, 5.651529, 5.683549, 5.472069, 5.55436, 5.004367, 5.55436, 5.269329, 5.388521, 5.902829, 5.199993, 5.619326, 5.0405, 5.337765, 5.269329, 5.762821,
   5.094219, 4.912872, 4.857147, 5.076376, 5.217413, 4.912872, 5.0405, 4.967971, 5.488626, 5.182514, 5.129719, 4.986202, 5.147378, 4.686, 5.147378, 4.986202,
   5.129719, 4.647111, 5.0405, 5.004367, 5.0405, 5.286521, 5.129719, 5.05847, 5.05847, 4.931307, 4.912872, 5.112, 4.743735, 4.724569, 5.405334, 4.705324,
   4.647111, 4.488188, 4.967971, 4.800776, 4.986202, 4.781838, 4.548435, 4.528442, 4.83843, 5.094219, 4.857147, 4.686, 4.912872, 4.647111, 4.912872, 4.967971,
   4.528442, 4.666596, 4.81964, 4.323428, 4.018876, 4.686, 4.607895, 4.548435, 4.26, 4.447571, 4.83843, 4.152134, 4.705324, 4.931307, 4.217185, 4.58816,
   4.488188, 3.904354, 4.467926, 4.488188, 4.130223, 4.800776, 4.548435, 4.548435, 4.50836, 4.406578, 4.447571, 4.607895, 3.973463, 4.173931, 4.344365, 3.973463,
   4.26, 4.302389, 4.195613, 4.488188, 4.108195, 4.467926, 4.281247, 3.973463, 4.323428, 4.344365, 4.130223, 4.344365, 4.041391, 4.152134, 4.018876, 4.217185,
   4.58816, 4.108195, 3.904354, 3.713782, 4.302389, 3.857594, 3.713782, 4.063781, 4.217185, 4.217185, 4.063781, 4.108195, 4.365201, 3.950561, 3.904354, 4.041391,
   4.086048, 3.950561, 3.76233, 4.195613, 3.786371, 3.904354, 3.564172, 3.639746, 3.927526, 3.834, 4.108195, 3.58954, 3.713782, 3.58954, 4.130223, 3.76233,
   3.58954, 3.58954, 4.063781, 3.834, 3.713782, 3.689268, 4.173931 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_H_mass_fx1187,Graph_from_VH_tagFirst_2b1c_H_mass_fy1187,Graph_from_VH_tagFirst_2b1c_H_mass_fex1187,Graph_from_VH_tagFirst_2b1c_H_mass_fey1187);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_H_mass1187 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_H_mass1187","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1187->SetMinimum(-676.1733);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1187->SetMaximum(6774.31);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1187->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1187->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1187->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1187->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1187->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1187->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1187->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1187->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1187->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1187->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1187->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_H_mass1187);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_H_mass","Data (BTagCSV, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_mass_tagFirst_SR_17->cd();
  
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
   
   TH1D *data_mc_ratio__188 = new TH1D("data_mc_ratio__188","",1000,0,2000);
   data_mc_ratio__188->SetBinContent(1000,1.151563);
   data_mc_ratio__188->SetBinContent(1001,1.129056);
   data_mc_ratio__188->SetBinError(1000,0.2258402);
   data_mc_ratio__188->SetBinError(1001,0.01430251);
   data_mc_ratio__188->SetMinimum(0.4);
   data_mc_ratio__188->SetMaximum(1.6);
   data_mc_ratio__188->SetEntries(13.76701);
   data_mc_ratio__188->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__188->SetLineColor(ci);
   data_mc_ratio__188->SetLineWidth(2);
   data_mc_ratio__188->SetMarkerStyle(20);
   data_mc_ratio__188->SetMarkerSize(1.2);
   data_mc_ratio__188->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__188->GetXaxis()->SetRange(1,150);
   data_mc_ratio__188->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__188->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__188->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__188->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__188->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__188->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__188->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__188->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__188->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__188->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__188->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__188->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__188->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__188->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__188->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__188->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1188[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1188[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1188[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1188[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01694974, 0.00835512,
   0.008425105, 0.008427498, 0.008420026, 0.008461218, 0.008437091, 0.008510099, 0.008515651, 0.008580609, 0.008601216, 0.008562661, 0.008590102, 0.008695981, 0.008688101, 0.008680896, 0.008686462, 0.008698613,
   0.008769231, 0.008784782, 0.008805533, 0.008815107, 0.008910122, 0.008892139, 0.008910476, 0.009009009, 0.009042464, 0.008983163, 0.009029552, 0.009028816, 0.01796366, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1848672 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1188,Graph_from_mc_statistical_error_fy1188,Graph_from_mc_statistical_error_fex1188,Graph_from_mc_statistical_error_fey1188);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1188 = new TH1F("Graph_Graph_from_mc_statistical_error1188","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1188->SetMinimum(0.7781594);
   Graph_Graph_from_mc_statistical_error1188->SetMaximum(1.221841);
   Graph_Graph_from_mc_statistical_error1188->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1188->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1188->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1188->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1188->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1188->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1188->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1188->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1188->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1188->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1188->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1188);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagFirst_SR_17->cd();
   H_mass_tagFirst_SR_17->Modified();
   H_mass_tagFirst_SR_17->cd();
   H_mass_tagFirst_SR_17->SetSelected(H_mass_tagFirst_SR_17);
}
