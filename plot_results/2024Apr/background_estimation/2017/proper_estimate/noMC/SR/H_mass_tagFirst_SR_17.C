#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagFirst_SR_17()
{
//=========Macro generated from canvas: H_mass_tagFirst_SR_17/H_mass_tagFirst_SR_17
//=========  (Mon Apr  8 13:43:42 2024) by ROOT version 6.28/10
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
   topPad->Range(-45.96762,-14.64414,315.7258,14639.5);
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
   st->SetMaximum(13174.08);
   
   TH1F *st_stack_108 = new TH1F("st_stack_108","",1000,0,2000);
   st_stack_108->SetMinimum(0.01);
   st_stack_108->SetMaximum(13174.08);
   st_stack_108->SetDirectory(nullptr);
   st_stack_108->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_108->SetLineColor(ci);
   st_stack_108->SetLineWidth(0);
   st_stack_108->GetXaxis()->SetRange(1,150);
   st_stack_108->GetXaxis()->SetLabelFont(42);
   st_stack_108->GetXaxis()->SetTitleOffset(1);
   st_stack_108->GetXaxis()->SetTitleFont(42);
   st_stack_108->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_108->GetYaxis()->SetLabelFont(42);
   st_stack_108->GetYaxis()->SetLabelSize(0.05);
   st_stack_108->GetYaxis()->SetTitleSize(0.057);
   st_stack_108->GetYaxis()->SetTitleOffset(1.2);
   st_stack_108->GetYaxis()->SetTitleFont(42);
   st_stack_108->GetZaxis()->SetLabelFont(42);
   st_stack_108->GetZaxis()->SetTitleOffset(1);
   st_stack_108->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_108);
   
   
   TH1D *VH_tagFirst_2b1c_H_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(48,2896.675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(49,5928.337);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(50,5817.215);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(51,5820.012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(52,5844.02);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(53,5809.524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(54,5829.345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(55,5744.641);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(56,5712.238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(57,5644.636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(58,5592.492);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(59,5657.42);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(60,5624.271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(61,5492.769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(62,5508.023);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(63,5504.285);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(64,5486.811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(65,5475.456);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(66,5393.358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(67,5399.411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(68,5358.282);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(69,5315.282);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(70,5173.603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(71,5227.654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(72,5205.185);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(73,5089.882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(74,4993.077);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(75,5117.059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(76,5044.316);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(77,5055.467);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(78,2503.147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1000,24.00027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1001,8629.797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(9,0.01307736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(10,0.476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(11,0.1388203);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(12,1.977075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(13,4.796059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(14,10.29388);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(15,15.12181);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(16,20.88037);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(17,26.35852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(18,31.73424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(19,37.38676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(20,42.32608);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(21,46.62261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(22,50.66896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(23,53.97595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(24,56.20174);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(25,58.74824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(26,59.84652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(27,61.56602);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(28,62.8093);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(29,62.91334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(30,63.05277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(31,63.24971);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(32,63.42889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(33,63.20913);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(34,62.79554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(35,62.45865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(36,62.64969);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(37,62.29725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(38,62.18019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(39,61.89428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(40,61.85841);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(41,61.90302);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(42,60.99514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(43,60.73818);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(44,60.51255);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(45,60.38805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(46,60.21353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(47,59.20747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(48,59.31937);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(49,59.04071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(50,58.3353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(51,58.5856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(52,58.52269);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(53,58.03727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(54,58.35223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(55,57.80189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(56,57.66995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(57,57.44165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(58,57.10741);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(59,57.86354);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(60,57.49228);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(61,56.63319);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(62,56.65744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(63,56.80752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(64,56.66441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(65,56.8036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(66,56.2076);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(67,56.1912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(68,55.88235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(69,55.8402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(70,55.29589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(71,55.67951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(72,55.00088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(73,54.58154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(74,54.60757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(75,54.69509);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(76,54.62731);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(77,54.47709);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(78,53.65771);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(79,54.15499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(80,53.64654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(81,53.21927);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(82,53.51689);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(83,53.12062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(84,52.65116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(85,53.17204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(86,52.75608);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(87,51.7687);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(88,51.98697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(89,51.94308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(90,51.92877);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(91,51.60236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(92,51.19051);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(93,51.40303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(94,51.2374);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(95,50.47203);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(96,50.7085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(97,50.57188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(98,50.49933);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(99,50.39011);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(100,50.16058);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(101,49.90283);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(102,49.56303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(103,49.48893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(104,49.17812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(105,49.25039);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(106,50.00681);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(107,49.06895);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(108,49.59892);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(109,48.91251);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(110,48.40628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(111,48.66727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(112,48.31125);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(113,48.5325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(114,48.36916);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(115,47.99774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(116,48.5662);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(117,48.76631);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(118,47.93333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(119,47.7364);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(120,47.13221);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(121,47.27843);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(122,47.84374);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(123,47.11481);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(124,48.2356);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(125,46.73681);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(126,47.16418);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(127,46.82771);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(128,47.09846);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(129,46.97625);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(130,46.35702);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(131,46.1615);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(132,46.09102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(133,46.2678);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(134,45.80111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(135,46.28018);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(136,46.53892);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(137,45.67944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(138,46.0724);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(139,46.05021);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(140,46.17488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(141,45.90437);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(142,45.15625);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(143,45.36184);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(144,45.37856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(145,45.4622);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(146,45.35699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(147,44.82068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(148,44.72566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(149,45.44452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(150,45.13075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(151,44.93859);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(152,44.77401);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(153,44.58264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(154,44.50299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(155,44.35152);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(156,44.29982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(157,44.24219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(158,44.35346);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(159,44.33759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(160,43.6739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(161,43.7614);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(162,43.8712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(163,44.27257);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(164,43.54266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(165,43.61702);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(166,43.17595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(167,43.38355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(168,43.35371);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(169,43.31178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(170,42.88046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(171,43.34214);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(172,42.54882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(173,42.53259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(174,43.01193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(175,42.57628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(176,42.50059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(177,42.4387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(178,41.99356);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(179,41.90416);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(180,41.79459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(181,41.82182);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(182,42.12703);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(183,41.63239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(184,41.94472);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(185,42.26614);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(186,41.96003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(187,41.09837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(188,41.49652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(189,41.16804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(190,41.26707);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(191,41.07719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(192,41.10916);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(193,40.33226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(194,40.62578);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(195,40.6785);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(196,40.62887);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(197,39.911);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(198,40.3733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(199,40.26546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(200,39.87917);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(201,40.10613);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(202,40.00108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(203,39.72146);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(204,40.30591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(205,39.56708);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(206,39.57196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(207,39.55981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(208,39.16304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(209,38.79042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(210,39.22345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(211,38.96173);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(212,38.90091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(213,38.73504);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(214,38.33223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(215,38.67007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(216,38.67145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(217,38.21064);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(218,38.28229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(219,37.83077);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(220,38.73204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(221,37.9065);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(222,37.46517);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(223,37.86427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(224,37.7186);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(225,37.757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(226,37.66215);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(227,37.60899);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(228,37.4993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(229,37.53345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(230,37.16564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(231,36.94163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(232,37.04374);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(233,37.32861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(234,36.54225);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(235,36.33568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(236,36.54146);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(237,36.50223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(238,36.12732);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(239,36.4269);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(240,35.86694);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(241,35.68825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(242,36.22601);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(243,35.59938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(244,35.77005);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(245,35.21953);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(246,35.77022);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(247,35.21502);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(248,35.11389);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(249,35.29521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(250,35.30258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(251,35.1178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(252,34.46611);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(253,34.83802);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(254,34.86758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(255,34.54166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(256,34.00668);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(257,34.09802);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(258,34.13159);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(259,34.06513);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(260,34.23954);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(261,34.29538);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(262,33.91979);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(263,33.80619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(264,34.05922);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(265,33.54828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(266,33.17467);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(267,33.4628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(268,33.66893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(269,33.18766);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(270,32.89208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(271,32.93542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(272,33.02202);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(273,32.96661);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(274,32.94781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(275,32.80678);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(276,32.29243);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(277,32.76503);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(278,32.40127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(279,32.23537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(280,32.11151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(281,32.29852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(282,31.8341);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(283,32.14339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(284,31.82217);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(285,31.83298);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(286,31.38151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(287,31.66762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(288,31.51637);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(289,30.84201);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(290,30.96303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(291,31.20901);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(292,30.96882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(293,30.78032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(294,30.59954);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(295,30.78453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(296,30.31459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(297,30.68747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(298,29.99741);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(299,30.17468);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(300,30.49842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(301,30.16413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(302,29.78251);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(303,29.51088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(304,29.85816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(305,29.50128);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(306,29.67441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(307,29.46947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(308,30.00379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(309,29.31996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(310,29.3309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(311,29.38642);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(312,29.03669);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(313,29.71744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(314,28.7353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(315,28.9985);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(316,28.84995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(317,29.04015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(318,28.65507);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(319,28.30372);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(320,28.64411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(321,28.49146);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(322,27.69408);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(323,28.25546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(324,28.17659);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(325,27.97772);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(326,27.71186);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(327,27.5929);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(328,27.97641);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(329,27.78712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(330,27.47596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(331,27.26633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(332,26.63796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(333,26.99767);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(334,27.21181);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(335,27.11719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(336,26.98176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(337,27.27935);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(338,27.23043);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(339,26.64087);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(340,26.51368);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(341,26.65387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(342,26.26177);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(343,26.61257);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(344,26.71922);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(345,26.51939);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(346,26.23079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(347,26.10532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(348,26.07244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(349,26.0739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(350,25.41552);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(351,25.72215);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(352,26.18891);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(353,25.52511);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(354,25.40344);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(355,25.33569);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(356,25.16974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(357,25.54985);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(358,25.2015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(359,25.10406);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(360,24.79388);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(361,25.46696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(362,24.55186);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(363,24.89894);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(364,24.75464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(365,24.67457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(366,24.54219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(367,24.77059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(368,25.40685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(369,24.38446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(370,23.76003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(371,23.95879);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(372,24.30206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(373,23.98388);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(374,23.87617);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(375,23.82238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(376,23.73056);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(377,23.62712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(378,23.64192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(379,24.14806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(380,23.57446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(381,23.39096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(382,23.6808);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(383,23.14978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(384,22.78853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(385,23.27977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(386,23.01121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(387,22.82868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(388,22.80119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(389,23.09516);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(390,23.00536);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(391,23.27384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(392,22.98775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(393,22.23385);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(394,22.55664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(395,22.41596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(396,22.33288);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(397,22.28679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(398,22.26097);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(399,22.14393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(400,22.44072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(401,21.74659);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(402,21.97471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(403,21.76731);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(404,21.73177);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(405,21.6864);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(406,21.64679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(407,21.41122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(408,21.51896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(409,21.57061);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(410,21.17966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(411,21.33441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(412,20.8926);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(413,21.4531);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(414,20.90598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(415,20.98013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(416,20.96665);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(417,21.27827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(418,21.04946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(419,20.72788);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(420,20.75103);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(421,20.38996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(422,20.55893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(423,20.81082);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(424,20.69219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(425,20.28492);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(426,20.61802);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(427,20.7299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(428,20.60923);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(429,20.04088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(430,20.2147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(431,19.90513);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(432,20.04675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(433,20.26744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(434,19.94944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(435,19.41189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(436,19.4179);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(437,19.90071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(438,19.76874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(439,19.66292);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(440,19.66007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(441,19.47253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(442,19.69073);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(443,19.46839);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(444,19.17753);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(445,18.96382);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(446,19.81464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(447,19.36668);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(448,19.34179);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(449,18.71854);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(450,18.86284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(451,18.77902);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(452,18.32271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(453,19.17266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(454,18.8974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(455,19.09506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(456,18.66699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(457,18.13327);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(458,18.45051);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(459,18.7849);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(460,18.59756);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(461,18.47909);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(462,18.16596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(463,18.02201);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(464,17.70734);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(465,17.95008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(466,18.18053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(467,17.56623);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(468,17.72446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(469,17.85883);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(470,17.96586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(471,17.54821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(472,17.53947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(473,17.43013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(474,17.14523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(475,17.38637);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(476,17.53912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(477,17.14542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(478,17.39695);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(479,17.08907);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(480,17.13804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(481,17.32968);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(482,17.26944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(483,16.77442);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(484,17.11692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(485,16.97624);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(486,16.76119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(487,17.33358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(488,16.40435);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(489,17.19891);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(490,16.99163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(491,16.66104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(492,16.80999);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(493,16.28358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(494,16.41892);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(495,16.72661);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(496,16.44994);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(497,16.66311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(498,16.16571);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(499,16.65666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(500,16.38883);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(501,15.70193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(502,16.03106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(503,16.32028);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(504,16.1791);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(505,15.801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(506,15.69785);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(507,15.59133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(508,16.09859);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(509,15.76222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(510,15.61889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(511,15.56727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(512,15.74385);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(513,15.56083);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(514,15.5529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(515,15.45339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(516,15.63933);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(517,15.53596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(518,15.36229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(519,15.81119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(520,15.52134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(521,15.46714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(522,15.32289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(523,15.04917);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(524,15.02758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(525,15.46928);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(526,15.42411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(527,14.87682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(528,15.11762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(529,14.84392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(530,14.83144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(531,14.9059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(532,14.65561);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(533,14.74639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(534,15.11604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(535,15.07371);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(536,14.336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(537,14.49685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(538,14.48845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(539,14.44075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(540,14.47378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(541,14.27839);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(542,14.48498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(543,13.57462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(544,14.36974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(545,14.33554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(546,14.12003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(547,13.93);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(548,13.97216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(549,14.3463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(550,14.2582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(551,13.61535);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(552,14.3046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(553,13.99696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(554,14.03615);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(555,13.86794);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(556,13.16398);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(557,14.0336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(558,14.01018);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(559,13.64973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(560,13.42981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(561,14.00311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(562,12.96243);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(563,13.23079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(564,13.76411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(565,13.5859);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(566,13.71163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(567,13.67108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(568,13.40482);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(569,12.86581);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(570,12.89898);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(571,13.12802);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(572,13.48321);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(573,13.60864);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(574,13.15897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(575,13.58539);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(576,13.27974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(577,13.03474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(578,12.77978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(579,13.22084);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(580,12.61809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(581,12.92779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(582,12.45867);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(583,12.51541);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(584,13.14159);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(585,12.26776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(586,12.36646);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(587,12.60503);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(588,12.66929);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(589,12.45101);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(590,12.67524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(591,12.75034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(592,12.56022);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(593,12.09308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(594,12.46962);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(595,12.1402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(596,12.04846);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(597,12.2376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(598,12.17489);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(599,12.35303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(600,12.10168);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(601,12.173);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(602,11.94415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(603,12.043);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(604,12.02682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(605,12.07013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(606,11.43912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(607,12.61748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(608,12.26589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(609,11.83702);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(610,11.46972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(611,11.95476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(612,11.92101);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(613,11.74468);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(614,11.48176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(615,12.36193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(616,11.74346);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(617,11.54131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(618,11.44892);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(619,11.61424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(620,11.5501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(621,11.51259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(622,11.63524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(623,11.68388);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(624,11.23719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(625,11.20847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(626,11.29586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(627,11.30119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(628,11.35975);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(629,11.34942);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(630,11.40811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(631,10.99734);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(632,11.53295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(633,10.97199);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(634,10.91754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(635,10.861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(636,10.63709);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(637,11.10499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(638,10.83229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(639,11.10224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(640,10.67634);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(641,10.68358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(642,11.19229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(643,11.22212);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(644,10.93786);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(645,10.67015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(646,10.36369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(647,10.45125);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(648,10.19097);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(649,10.40654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(650,10.86794);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(651,10.4976);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(652,10.42671);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(653,10.59788);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(654,10.62971);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(655,10.3129);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(656,10.80982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(657,10.35027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(658,10.51083);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(659,10.22165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(660,10.15585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(661,10.11637);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(662,10.2477);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(663,10.27856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(664,10.35883);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(665,9.881158);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(666,10.28506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(667,10.49754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(668,10.52128);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(669,9.720863);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(670,10.22714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(671,10.02397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(672,10.2533);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(673,9.818136);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(674,9.778019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(675,9.831071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(676,10.04029);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(677,9.820757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(678,9.564573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(679,9.846686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(680,9.848842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(681,10.12275);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(682,9.846471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(683,9.973972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(684,9.668234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(685,9.742265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(686,9.741072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(687,9.597768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(688,9.561405);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(689,9.459464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(690,9.462243);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(691,9.499969);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(692,9.478889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(693,9.504972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(694,9.776088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(695,9.798651);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(696,8.92237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(697,9.285512);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(698,9.415938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(699,9.432707);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(700,9.801385);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(701,9.206797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(702,9.209004);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(703,9.230069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(704,9.075334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(705,9.205427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(706,9.349834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(707,8.875227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(708,9.124373);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(709,8.942575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(710,8.985589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(711,8.903508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(712,8.952299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(713,9.127228);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(714,9.081591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(715,8.669697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(716,8.801162);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(717,8.654976);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(718,8.850425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(719,8.973091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(720,9.13629);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(721,8.735015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(722,8.800896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(723,8.650278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(724,8.669997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(725,8.387406);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(726,8.957038);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(727,8.743822);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(728,9.036741);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(729,8.493977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(730,8.584826);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(731,9.031218);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(732,8.771672);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(733,8.517074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(734,8.461087);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(735,8.324686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(736,8.245537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(737,8.513656);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(738,8.470961);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(739,8.493145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(740,8.771182);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(741,8.291265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(742,8.523012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(743,8.411465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(744,8.036846);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(745,8.713726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(746,8.146223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(747,8.160936);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(748,7.745832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(749,7.895317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(750,8.273445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(751,8.481522);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(752,8.051806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(753,8.244024);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(754,8.224663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(755,8.469696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(756,8.324708);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(757,10.02805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(758,8.492195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(759,8.033529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(760,8.186817);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(761,7.858993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(762,7.897968);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(763,8.000846);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(764,7.753788);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(765,7.749604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(766,8.448322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(767,8.025997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(768,7.645411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(769,7.831815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(770,8.056178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(771,7.460903);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(772,7.597901);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(773,7.716726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(774,7.406554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(775,7.454374);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(776,7.631124);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(777,7.962145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(778,7.179488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(779,7.121853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(780,7.560905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(781,7.335748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(782,7.724968);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(783,8.014197);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(784,7.729842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(785,7.26792);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(786,7.55568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(787,7.550999);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(788,7.893035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(789,7.249019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(790,7.607199);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(791,7.451522);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(792,7.348333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(793,7.340994);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(794,7.420501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(795,7.152519);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(796,7.540645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(797,6.551299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(798,7.099562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(799,7.481415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(800,7.322887);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(801,6.958179);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(802,6.996044);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(803,7.026784);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(804,7.115491);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(805,7.173936);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(806,6.958542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(807,6.534579);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(808,7.301874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(809,6.532259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(810,6.491346);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(811,7.170581);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(812,6.478997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(813,6.934953);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(814,6.60742);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(815,6.571396);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(816,7.416668);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(817,6.748555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(818,6.934271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(819,7.587628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(820,6.960983);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(821,7.033739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(822,6.720627);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(823,6.903198);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(824,6.86923);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(825,6.784701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(826,6.792619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(827,6.826752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(828,7.27009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(829,6.568264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(830,6.980968);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(831,6.647398);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(832,6.67177);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(833,6.796857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(834,6.713861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(835,6.859344);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(836,6.555502);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(837,6.599637);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(838,6.432398);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(839,6.53354);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(840,6.889341);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(841,6.413542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(842,6.505237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(843,6.766741);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(844,6.650489);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(845,6.665911);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(846,6.116672);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(847,6.120617);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(848,6.187207);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(849,6.574016);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(850,6.427084);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(851,6.628104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(852,6.664816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(853,6.422576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(854,6.571686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(855,6.072204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(856,6.444334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(857,6.322945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(858,6.294631);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(859,6.782383);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(860,5.978876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(861,6.54524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(862,5.83286);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(863,6.323629);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(864,6.134147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(865,6.678332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(866,5.827412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(867,5.774639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(868,5.620151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(869,5.825877);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(870,6.000625);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(871,5.722668);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(872,6.034866);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(873,5.913468);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(874,6.333394);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(875,6.15868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(876,5.961092);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(877,5.937266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(878,6.091244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(879,5.530421);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(880,5.903421);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(881,5.883914);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(882,5.9395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(883,5.36015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(884,5.792076);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(885,5.664216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(886,5.816461);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(887,6.072108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(888,6.072078);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(889,5.913308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(890,5.708114);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(891,5.8019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(892,5.603723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(893,6.016773);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(894,5.482749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(895,5.435122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(896,6.196916);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(897,5.48604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(898,5.359025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(899,5.216773);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(900,5.759931);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(901,5.53498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(902,5.738771);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(903,5.595823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(904,5.377461);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(905,5.359254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(906,5.554294);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(907,5.917417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(908,5.532856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(909,5.516585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(910,5.578785);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(911,5.458576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(912,5.897151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(913,5.663237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(914,5.199381);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(915,5.525898);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(916,5.478672);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(917,5.150152);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(918,4.670696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(919,5.489332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(920,5.329436);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(921,5.372899);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(922,4.929137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(923,5.248903);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(924,5.501397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(925,4.842853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(926,5.418447);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(927,5.734077);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(928,5.137242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(929,5.467918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(930,5.134637);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(931,4.522001);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(932,5.199081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(933,5.073863);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(934,4.818435);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(935,5.513983);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(936,5.224949);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(937,5.326433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(938,5.287636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(939,5.152955);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(940,5.218696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(941,5.237674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(942,4.651705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(943,4.863785);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(944,5.064962);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(945,4.881456);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(946,4.9312);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(947,4.953521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(948,4.87499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(949,5.370519);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(950,4.886771);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(951,5.091259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(952,5.064232);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(953,4.644807);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(954,5.083563);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(955,4.960097);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(956,4.88638);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(957,5.01347);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(958,4.662745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(959,4.723539);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(960,4.546911);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(961,4.853938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(962,5.242975);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(963,4.867639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(964,4.51517);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(965,4.291424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(966,5.041192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(967,4.418648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(968,4.230856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(969,4.72203);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(970,4.834139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(971,4.90127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(972,4.763091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(973,4.768805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(974,4.968145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(975,4.670521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(976,4.714413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(977,4.812021);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(978,4.799533);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(979,4.586551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(980,4.570164);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(981,4.809894);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(982,4.437897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(983,4.549074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(984,4.231148);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(985,4.232929);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(986,4.46261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(987,4.446964);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(988,4.687838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(989,4.23711);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(990,4.282004);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(991,4.238126);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(992,4.808646);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(993,4.542723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(994,4.119759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(995,4.335832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(996,4.70971);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(997,4.43529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(998,4.391809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(999,4.286874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1000,4.967492);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1001,69.23319);
   VH_tagFirst_2b1c_H_mass_stack_1->SetEntries(2029897);

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
   
   TH1D *VH_tagFirst_H_mass__215 = new TH1D("VH_tagFirst_H_mass__215","",1000,0,2000);
   VH_tagFirst_H_mass__215->SetBinContent(1000,32);
   VH_tagFirst_H_mass__215->SetBinContent(1001,19880);
   VH_tagFirst_H_mass__215->SetEntries(1412552);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_mass__215->SetLineColor(ci);
   VH_tagFirst_H_mass__215->SetLineWidth(2);
   VH_tagFirst_H_mass__215->SetMarkerStyle(20);
   VH_tagFirst_H_mass__215->SetMarkerSize(1.2);
   VH_tagFirst_H_mass__215->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_H_mass__215->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__215->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__215->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__215->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__215->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__215->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__215->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__215->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__215->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fx1215[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fy1215[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2896.675, 5928.337,
   5817.215, 5820.012, 5844.02, 5809.524, 5829.345, 5744.641, 5712.238, 5644.636, 5592.492, 5657.42, 5624.271, 5492.769, 5508.023, 5504.285, 5486.811, 5475.456,
   5393.358, 5399.411, 5358.282, 5315.282, 5173.603, 5227.654, 5205.185, 5089.882, 4993.077, 5117.059, 5044.316, 5055.467, 2503.147, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 24.00027 };
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fex1215[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fey1215[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0.01307736, 0.476, 0.1388203, 1.977075, 4.796059, 10.29388, 15.12181, 20.88037, 26.35852,
   31.73424, 37.38676, 42.32608, 46.62261, 50.66896, 53.97595, 56.20174, 58.74824, 59.84652, 61.56602, 62.8093, 62.91334, 63.05277, 63.24971, 63.42889, 63.20913,
   62.79554, 62.45865, 62.64969, 62.29725, 62.18019, 61.89428, 61.85841, 61.90302, 60.99514, 60.73818, 60.51255, 60.38805, 60.21353, 59.20747, 59.31937, 59.04071,
   58.3353, 58.5856, 58.52269, 58.03727, 58.35223, 57.80189, 57.66995, 57.44165, 57.10741, 57.86354, 57.49228, 56.63319, 56.65744, 56.80752, 56.66441, 56.8036,
   56.2076, 56.1912, 55.88235, 55.8402, 55.29589, 55.67951, 55.00088, 54.58154, 54.60757, 54.69509, 54.62731, 54.47709, 53.65771, 54.15499, 53.64654, 53.21927,
   53.51689, 53.12062, 52.65116, 53.17204, 52.75608, 51.7687, 51.98697, 51.94308, 51.92877, 51.60236, 51.19051, 51.40303, 51.2374, 50.47203, 50.7085, 50.57188,
   50.49933, 50.39011, 50.16058, 49.90283, 49.56303, 49.48893, 49.17812, 49.25039, 50.00681, 49.06895, 49.59892, 48.91251, 48.40628, 48.66727, 48.31125, 48.5325,
   48.36916, 47.99774, 48.5662, 48.76631, 47.93333, 47.7364, 47.13221, 47.27843, 47.84374, 47.11481, 48.2356, 46.73681, 47.16418, 46.82771, 47.09846, 46.97625,
   46.35702, 46.1615, 46.09102, 46.2678, 45.80111, 46.28018, 46.53892, 45.67944, 46.0724, 46.05021, 46.17488, 45.90437, 45.15625, 45.36184, 45.37856, 45.4622,
   45.35699, 44.82068, 44.72566, 45.44452, 45.13075, 44.93859, 44.77401, 44.58264, 44.50299, 44.35152, 44.29982, 44.24219, 44.35346, 44.33759, 43.6739, 43.7614,
   43.8712, 44.27257, 43.54266, 43.61702, 43.17595, 43.38355, 43.35371, 43.31178, 42.88046, 43.34214, 42.54882, 42.53259, 43.01193, 42.57628, 42.50059, 42.4387,
   41.99356, 41.90416, 41.79459, 41.82182, 42.12703, 41.63239, 41.94472, 42.26614, 41.96003, 41.09837, 41.49652, 41.16804, 41.26707, 41.07719, 41.10916, 40.33226,
   40.62578, 40.6785, 40.62887, 39.911, 40.3733, 40.26546, 39.87917, 40.10613, 40.00108, 39.72146, 40.30591, 39.56708, 39.57196, 39.55981, 39.16304, 38.79042,
   39.22345, 38.96173, 38.90091, 38.73504, 38.33223, 38.67007, 38.67145, 38.21064, 38.28229, 37.83077, 38.73204, 37.9065, 37.46517, 37.86427, 37.7186, 37.757,
   37.66215, 37.60899, 37.4993, 37.53345, 37.16564, 36.94163, 37.04374, 37.32861, 36.54225, 36.33568, 36.54146, 36.50223, 36.12732, 36.4269, 35.86694, 35.68825,
   36.22601, 35.59938, 35.77005, 35.21953, 35.77022, 35.21502, 35.11389, 35.29521, 35.30258, 35.1178, 34.46611, 34.83802, 34.86758, 34.54166, 34.00668, 34.09802,
   34.13159, 34.06513, 34.23954, 34.29538, 33.91979, 33.80619, 34.05922, 33.54828, 33.17467, 33.4628, 33.66893, 33.18766, 32.89208, 32.93542, 33.02202, 32.96661,
   32.94781, 32.80678, 32.29243, 32.76503, 32.40127, 32.23537, 32.11151, 32.29852, 31.8341, 32.14339, 31.82217, 31.83298, 31.38151, 31.66762, 31.51637, 30.84201,
   30.96303, 31.20901, 30.96882, 30.78032, 30.59954, 30.78453, 30.31459, 30.68747, 29.99741, 30.17468, 30.49842, 30.16413, 29.78251, 29.51088, 29.85816, 29.50128,
   29.67441, 29.46947, 30.00379, 29.31996, 29.3309, 29.38642, 29.03669, 29.71744, 28.7353, 28.9985, 28.84995, 29.04015, 28.65507, 28.30372, 28.64411, 28.49146,
   27.69408, 28.25546, 28.17659, 27.97772, 27.71186, 27.5929, 27.97641, 27.78712, 27.47596, 27.26633, 26.63796, 26.99767, 27.21181, 27.11719, 26.98176, 27.27935,
   27.23043, 26.64087, 26.51368, 26.65387, 26.26177, 26.61257, 26.71922, 26.51939, 26.23079, 26.10532, 26.07244, 26.0739, 25.41552, 25.72215, 26.18891, 25.52511,
   25.40344, 25.33569, 25.16974, 25.54985, 25.2015, 25.10406, 24.79388, 25.46696, 24.55186, 24.89894, 24.75464, 24.67457, 24.54219, 24.77059, 25.40685, 24.38446,
   23.76003, 23.95879, 24.30206, 23.98388, 23.87617, 23.82238, 23.73056, 23.62712, 23.64192, 24.14806, 23.57446, 23.39096, 23.6808, 23.14978, 22.78853, 23.27977,
   23.01121, 22.82868, 22.80119, 23.09516, 23.00536, 23.27384, 22.98775, 22.23385, 22.55664, 22.41596, 22.33288, 22.28679, 22.26097, 22.14393, 22.44072, 21.74659,
   21.97471, 21.76731, 21.73177, 21.6864, 21.64679, 21.41122, 21.51896, 21.57061, 21.17966, 21.33441, 20.8926, 21.4531, 20.90598, 20.98013, 20.96665, 21.27827,
   21.04946, 20.72788, 20.75103, 20.38996, 20.55893, 20.81082, 20.69219, 20.28492, 20.61802, 20.7299, 20.60923, 20.04088, 20.2147, 19.90513, 20.04675, 20.26744,
   19.94944, 19.41189, 19.4179, 19.90071, 19.76874, 19.66292, 19.66007, 19.47253, 19.69073, 19.46839, 19.17753, 18.96382, 19.81464, 19.36668, 19.34179, 18.71854,
   18.86284, 18.77902, 18.32271, 19.17266, 18.8974, 19.09506, 18.66699, 18.13327, 18.45051, 18.7849, 18.59756, 18.47909, 18.16596, 18.02201, 17.70734, 17.95008,
   18.18053, 17.56623, 17.72446, 17.85883, 17.96586, 17.54821, 17.53947, 17.43013, 17.14523, 17.38637, 17.53912, 17.14542, 17.39695, 17.08907, 17.13804, 17.32968,
   17.26944, 16.77442, 17.11692, 16.97624, 16.76119, 17.33358, 16.40435, 17.19891, 16.99163, 16.66104, 16.80999, 16.28358, 16.41892, 16.72661, 16.44994, 16.66311,
   16.16571, 16.65666, 16.38883, 15.70193, 16.03106, 16.32028, 16.1791, 15.801, 15.69785, 15.59133, 16.09859, 15.76222, 15.61889, 15.56727, 15.74385, 15.56083,
   15.5529, 15.45339, 15.63933, 15.53596, 15.36229, 15.81119, 15.52134, 15.46714, 15.32289, 15.04917, 15.02758, 15.46928, 15.42411, 14.87682, 15.11762, 14.84392,
   14.83144, 14.9059, 14.65561, 14.74639, 15.11604, 15.07371, 14.336, 14.49685, 14.48845, 14.44075, 14.47378, 14.27839, 14.48498, 13.57462, 14.36974, 14.33554,
   14.12003, 13.93, 13.97216, 14.3463, 14.2582, 13.61535, 14.3046, 13.99696, 14.03615, 13.86794, 13.16398, 14.0336, 14.01018, 13.64973, 13.42981, 14.00311,
   12.96243, 13.23079, 13.76411, 13.5859, 13.71163, 13.67108, 13.40482, 12.86581, 12.89898, 13.12802, 13.48321, 13.60864, 13.15897, 13.58539, 13.27974, 13.03474,
   12.77978, 13.22084, 12.61809, 12.92779, 12.45867, 12.51541, 13.14159, 12.26776, 12.36646, 12.60503, 12.66929, 12.45101, 12.67524, 12.75034, 12.56022, 12.09308,
   12.46962, 12.1402, 12.04846, 12.2376, 12.17489, 12.35303, 12.10168, 12.173, 11.94415, 12.043, 12.02682, 12.07013, 11.43912, 12.61748, 12.26589, 11.83702,
   11.46972, 11.95476, 11.92101, 11.74468, 11.48176, 12.36193, 11.74346, 11.54131, 11.44892, 11.61424, 11.5501, 11.51259, 11.63524, 11.68388, 11.23719, 11.20847,
   11.29586, 11.30119, 11.35975, 11.34942, 11.40811, 10.99734, 11.53295, 10.97199, 10.91754, 10.861, 10.63709, 11.10499, 10.83229, 11.10224, 10.67634, 10.68358,
   11.19229, 11.22212, 10.93786, 10.67015, 10.36369, 10.45125, 10.19097, 10.40654, 10.86794, 10.4976, 10.42671, 10.59788, 10.62971, 10.3129, 10.80982, 10.35027,
   10.51083, 10.22165, 10.15585, 10.11637, 10.2477, 10.27856, 10.35883, 9.881158, 10.28506, 10.49754, 10.52128, 9.720863, 10.22714, 10.02397, 10.2533, 9.818136,
   9.778019, 9.831071, 10.04029, 9.820757, 9.564573, 9.846686, 9.848842, 10.12275, 9.846471, 9.973972, 9.668234, 9.742265, 9.741072, 9.597768, 9.561405, 9.459464,
   9.462243, 9.499969, 9.478889, 9.504972, 9.776088, 9.798651, 8.92237, 9.285512, 9.415938, 9.432707, 9.801385, 9.206797, 9.209004, 9.230069, 9.075334, 9.205427,
   9.349834, 8.875227, 9.124373, 8.942575, 8.985589, 8.903508, 8.952299, 9.127228, 9.081591, 8.669697, 8.801162, 8.654976, 8.850425, 8.973091, 9.13629, 8.735015,
   8.800896, 8.650278, 8.669997, 8.387406, 8.957038, 8.743822, 9.036741, 8.493977, 8.584826, 9.031218, 8.771672, 8.517074, 8.461087, 8.324686, 8.245537, 8.513656,
   8.470961, 8.493145, 8.771182, 8.291265, 8.523012, 8.411465, 8.036846, 8.713726, 8.146223, 8.160936, 7.745832, 7.895317, 8.273445, 8.481522, 8.051806, 8.244024,
   8.224663, 8.469696, 8.324708, 10.02805, 8.492195, 8.033529, 8.186817, 7.858993, 7.897968, 8.000846, 7.753788, 7.749604, 8.448322, 8.025997, 7.645411, 7.831815,
   8.056178, 7.460903, 7.597901, 7.716726, 7.406554, 7.454374, 7.631124, 7.962145, 7.179488, 7.121853, 7.560905, 7.335748, 7.724968, 8.014197, 7.729842, 7.26792,
   7.55568, 7.550999, 7.893035, 7.249019, 7.607199, 7.451522, 7.348333, 7.340994, 7.420501, 7.152519, 7.540645, 6.551299, 7.099562, 7.481415, 7.322887, 6.958179,
   6.996044, 7.026784, 7.115491, 7.173936, 6.958542, 6.534579, 7.301874, 6.532259, 6.491346, 7.170581, 6.478997, 6.934953, 6.60742, 6.571396, 7.416668, 6.748555,
   6.934271, 7.587628, 6.960983, 7.033739, 6.720627, 6.903198, 6.86923, 6.784701, 6.792619, 6.826752, 7.27009, 6.568264, 6.980968, 6.647398, 6.67177, 6.796857,
   6.713861, 6.859344, 6.555502, 6.599637, 6.432398, 6.53354, 6.889341, 6.413542, 6.505237, 6.766741, 6.650489, 6.665911, 6.116672, 6.120617, 6.187207, 6.574016,
   6.427084, 6.628104, 6.664816, 6.422576, 6.571686, 6.072204, 6.444334, 6.322945, 6.294631, 6.782383, 5.978876, 6.54524, 5.83286, 6.323629, 6.134147, 6.678332,
   5.827412, 5.774639, 5.620151, 5.825877, 6.000625, 5.722668, 6.034866, 5.913468, 6.333394, 6.15868, 5.961092, 5.937266, 6.091244, 5.530421, 5.903421, 5.883914,
   5.9395, 5.36015, 5.792076, 5.664216, 5.816461, 6.072108, 6.072078, 5.913308, 5.708114, 5.8019, 5.603723, 6.016773, 5.482749, 5.435122, 6.196916, 5.48604,
   5.359025, 5.216773, 5.759931, 5.53498, 5.738771, 5.595823, 5.377461, 5.359254, 5.554294, 5.917417, 5.532856, 5.516585, 5.578785, 5.458576, 5.897151, 5.663237,
   5.199381, 5.525898, 5.478672, 5.150152, 4.670696, 5.489332, 5.329436, 5.372899, 4.929137, 5.248903, 5.501397, 4.842853, 5.418447, 5.734077, 5.137242, 5.467918,
   5.134637, 4.522001, 5.199081, 5.073863, 4.818435, 5.513983, 5.224949, 5.326433, 5.287636, 5.152955, 5.218696, 5.237674, 4.651705, 4.863785, 5.064962, 4.881456,
   4.9312, 4.953521, 4.87499, 5.370519, 4.886771, 5.091259, 5.064232, 4.644807, 5.083563, 4.960097, 4.88638, 5.01347, 4.662745, 4.723539, 4.546911, 4.853938,
   5.242975, 4.867639, 4.51517, 4.291424, 5.041192, 4.418648, 4.230856, 4.72203, 4.834139, 4.90127, 4.763091, 4.768805, 4.968145, 4.670521, 4.714413, 4.812021,
   4.799533, 4.586551, 4.570164, 4.809894, 4.437897, 4.549074, 4.231148, 4.232929, 4.46261, 4.446964, 4.687838, 4.23711, 4.282004, 4.238126, 4.808646, 4.542723,
   4.119759, 4.335832, 4.70971, 4.43529, 4.391809, 4.286874, 4.967492 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_H_mass_fx1215,Graph_from_VH_tagFirst_2b1c_H_mass_fy1215,Graph_from_VH_tagFirst_2b1c_H_mass_fex1215,Graph_from_VH_tagFirst_2b1c_H_mass_fey1215);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_H_mass1215 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_H_mass1215","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1215->SetMinimum(-668.5095);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1215->SetMaximum(6592.458);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1215->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1215->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1215->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1215->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1215->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1215->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1215->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1215->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1215->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1215->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1215->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_H_mass1215);
   
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
   
   TH1D *data_mc_ratio__216 = new TH1D("data_mc_ratio__216","",1000,0,2000);
   data_mc_ratio__216->SetBinContent(1000,1.333319);
   data_mc_ratio__216->SetBinContent(1001,2.303646);
   data_mc_ratio__216->SetBinError(1000,0.2356997);
   data_mc_ratio__216->SetBinError(1001,0.02466769);
   data_mc_ratio__216->SetMinimum(0.4);
   data_mc_ratio__216->SetMaximum(1.6);
   data_mc_ratio__216->SetEntries(13.49723);
   data_mc_ratio__216->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__216->SetLineColor(ci);
   data_mc_ratio__216->SetLineWidth(2);
   data_mc_ratio__216->SetMarkerStyle(20);
   data_mc_ratio__216->SetMarkerSize(1.2);
   data_mc_ratio__216->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__216->GetXaxis()->SetRange(1,150);
   data_mc_ratio__216->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__216->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__216->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__216->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__216->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__216->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__216->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__216->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__216->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__216->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__216->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__216->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__216->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__216->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__216->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__216->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1216[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1216[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1216[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1216[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.02047844, 0.009959069,
   0.01002805, 0.01006623, 0.01001412, 0.00999002, 0.01001008, 0.01006188, 0.01009586, 0.01017632, 0.01021144, 0.0102279, 0.01022218, 0.0103105, 0.01028635, 0.0103206, 0.01032738, 0.01037422,
   0.01042163, 0.01040691, 0.01042915, 0.01050559, 0.01068808, 0.01065095, 0.01056656, 0.01072354, 0.01093666, 0.01068878, 0.01082948, 0.01077588, 0.0214361, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.2069766 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1216,Graph_from_mc_statistical_error_fy1216,Graph_from_mc_statistical_error_fex1216,Graph_from_mc_statistical_error_fey1216);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1216 = new TH1F("Graph_Graph_from_mc_statistical_error1216","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1216->SetMinimum(0.7516281);
   Graph_Graph_from_mc_statistical_error1216->SetMaximum(1.248372);
   Graph_Graph_from_mc_statistical_error1216->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1216->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1216->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1216->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1216->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1216->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1216->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1216->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1216->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1216->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1216->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1216);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagFirst_SR_17->cd();
   H_mass_tagFirst_SR_17->Modified();
   H_mass_tagFirst_SR_17->cd();
   H_mass_tagFirst_SR_17->SetSelected(H_mass_tagFirst_SR_17);
}
