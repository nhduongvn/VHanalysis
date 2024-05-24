#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagFirst_SR_17()
{
//=========Macro generated from canvas: H_mass_tagFirst_SR_17/H_mass_tagFirst_SR_17
//=========  (Fri May 24 11:23:57 2024) by ROOT version 6.28/10
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
   topPad->Range(-45.96762,-13.55577,315.7258,13552.21);
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
   st->SetMaximum(12195.64);
   
   TH1F *st_stack_108 = new TH1F("st_stack_108","",1000,0,2000);
   st_stack_108->SetMinimum(0.01);
   st_stack_108->SetMaximum(12195.64);
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
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(48,2537.844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(49,5212.778);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(50,5177.176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(51,5204.745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(52,5333.69);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(53,5282.986);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(54,5381.253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(55,5262.508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(56,5488.037);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(57,5430.735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(58,5378.213);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(59,5329.163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(60,5406.323);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(61,5371.533);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(62,5424.407);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(63,5379.99);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(64,5434.54);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(65,5345.1);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(66,5302.448);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(67,5286.337);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(68,5317.97);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(69,5316.765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(70,5264.37);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(71,5217.436);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(72,5169.844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(73,5159.636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(74,5005.281);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(75,5097.891);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(76,4993.046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(77,5104.035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(78,2567.151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1000,28.5511);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1001,14213.42);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(9,0.02762014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(11,0.1241117);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(12,1.875462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(13,3.716246);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(14,8.517372);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(15,11.74718);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(16,16.24199);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(17,20.56781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(18,24.28973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(19,28.37887);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(20,32.43706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(21,36.22798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(22,38.95081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(23,42.28202);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(24,44.48315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(25,46.8029);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(26,48.7308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(27,50.50313);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(28,51.9589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(29,52.73545);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(30,53.93237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(31,55.09054);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(32,55.17737);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(33,55.82752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(34,56.22958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(35,56.7464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(36,56.98908);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(37,57.37298);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(38,57.70461);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(39,58.09591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(40,59.15185);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(41,59.06168);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(42,59.09395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(43,58.77313);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(44,58.6551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(45,58.35954);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(46,58.36867);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(47,57.07427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(48,57.18841);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(49,56.96237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(50,56.13423);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(51,55.898);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(52,55.70715);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(53,55.18644);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(54,55.48574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(55,54.81055);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(56,55.33207);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(57,55.32195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(58,54.68349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(59,55.38505);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(60,54.81586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(61,54.53641);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(62,54.59415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(63,54.50099);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(64,54.72331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(65,54.11539);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(66,54.08247);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(67,53.81252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(68,53.8651);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(69,53.81724);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(70,53.7441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(71,53.5135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(72,53.03339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(73,52.92569);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(74,52.57597);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(75,52.71508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(76,52.59193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(77,52.60633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(78,52.1937);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(79,52.28038);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(80,51.8863);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(81,51.6896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(82,51.56726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(83,52.72057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(84,51.18069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(85,51.02292);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(86,51.09291);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(87,50.37438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(88,50.36873);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(89,50.23798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(90,50.28451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(91,49.62713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(92,49.21433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(93,49.31677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(94,49.46735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(95,48.77205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(96,49.06115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(97,48.79379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(98,48.57738);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(99,48.45003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(100,48.053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(101,47.4573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(102,47.65506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(103,47.04325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(104,47.41875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(105,47.37878);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(106,47.14687);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(107,46.69653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(108,47.06828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(109,46.30359);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(110,45.86477);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(111,46.13995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(112,45.82948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(113,45.06457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(114,45.48232);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(115,45.65159);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(116,44.9087);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(117,45.72537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(118,44.86771);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(119,44.62347);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(120,44.30527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(121,44.26062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(122,44.32589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(123,43.98249);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(124,43.76595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(125,43.3888);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(126,43.73079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(127,43.04463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(128,43.13402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(129,43.00079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(130,42.82827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(131,42.85864);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(132,42.24081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(133,42.64176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(134,42.00367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(135,42.16272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(136,42.32612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(137,41.79813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(138,41.76804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(139,41.69462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(140,41.66807);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(141,41.27761);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(142,41.1907);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(143,41.18985);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(144,40.97885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(145,40.71801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(146,40.7531);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(147,40.49783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(148,40.31665);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(149,40.64445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(150,40.33705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(151,40.20728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(152,40.17598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(153,39.59236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(154,39.89929);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(155,39.4777);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(156,39.16717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(157,39.25351);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(158,39.49259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(159,39.20861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(160,38.96389);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(161,38.77652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(162,38.9009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(163,39.30018);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(164,38.75229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(165,38.88906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(166,38.18868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(167,38.77727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(168,38.04195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(169,38.23626);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(170,37.70991);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(171,37.8095);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(172,37.48466);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(173,37.49806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(174,37.47122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(175,37.5501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(176,37.57485);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(177,37.57236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(178,37.61876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(179,37.06713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(180,36.7813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(181,37.02105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(182,37.14694);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(183,36.56026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(184,36.64546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(185,36.77944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(186,36.47845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(187,36.28384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(188,36.4364);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(189,36.01822);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(190,36.21125);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(191,36.03692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(192,35.69766);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(193,35.33154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(194,35.48578);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(195,35.46862);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(196,35.62672);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(197,34.84177);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(198,35.0948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(199,35.02844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(200,35.0301);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(201,34.69652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(202,34.75183);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(203,34.61811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(204,34.95817);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(205,34.52362);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(206,34.26592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(207,34.64948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(208,34.22234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(209,34.11882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(210,34.30347);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(211,34.21194);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(212,33.86701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(213,33.82574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(214,33.29884);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(215,33.58974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(216,33.61474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(217,33.22207);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(218,33.0687);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(219,33.35478);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(220,33.5269);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(221,32.89946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(222,32.65042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(223,33.25796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(224,32.78585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(225,33.01324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(226,32.58448);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(227,32.86319);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(228,32.16958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(229,32.23496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(230,32.33829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(231,32.22779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(232,32.20628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(233,32.31807);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(234,31.48525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(235,32.07097);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(236,32.08178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(237,31.34613);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(238,31.53776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(239,31.8734);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(240,31.32704);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(241,31.19458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(242,31.77778);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(243,31.05196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(244,31.18665);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(245,30.75876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(246,31.43536);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(247,30.73232);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(248,30.62608);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(249,30.868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(250,30.70299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(251,30.61478);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(252,30.45886);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(253,30.18923);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(254,30.36473);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(255,30.22967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(256,30.02496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(257,29.85252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(258,30.14761);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(259,29.85251);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(260,30.76506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(261,30.05899);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(262,29.77783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(263,29.90837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(264,29.88177);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(265,29.30519);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(266,28.95053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(267,29.52113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(268,29.35551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(269,29.20872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(270,28.84921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(271,28.90974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(272,29.15297);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(273,29.0411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(274,28.98314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(275,29.04121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(276,28.39547);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(277,28.7627);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(278,28.69391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(279,28.37383);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(280,28.39901);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(281,28.4594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(282,28.20966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(283,28.33199);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(284,28.13444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(285,28.07299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(286,27.72188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(287,28.31387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(288,27.61398);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(289,27.63469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(290,27.54476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(291,27.7542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(292,27.44955);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(293,27.58963);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(294,27.43911);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(295,27.58795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(296,27.11594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(297,27.3031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(298,26.80023);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(299,26.8655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(300,27.03248);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(301,26.95776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(302,27.03121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(303,26.20057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(304,26.67368);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(305,26.13617);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(306,26.60364);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(307,26.3921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(308,26.78863);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(309,26.46403);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(310,26.12227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(311,25.83721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(312,26.90832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(313,26.4311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(314,26.06361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(315,25.91655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(316,25.72905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(317,26.03326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(318,25.9529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(319,25.53456);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(320,25.72954);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(321,25.81657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(322,25.23233);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(323,25.63078);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(324,25.33717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(325,25.53253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(326,25.01518);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(327,24.92903);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(328,25.40187);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(329,25.00058);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(330,24.81414);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(331,24.85285);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(332,24.41834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(333,24.7048);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(334,24.85861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(335,24.50014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(336,24.39632);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(337,25.09274);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(338,24.45769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(339,24.28565);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(340,24.1195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(341,24.26412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(342,24.01547);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(343,24.05637);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(344,24.02887);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(345,23.81311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(346,23.84508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(347,23.49353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(348,23.49663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(349,23.73847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(350,23.56913);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(351,23.58672);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(352,23.84646);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(353,23.7791);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(354,23.7308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(355,23.36009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(356,23.01902);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(357,23.36593);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(358,23.18219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(359,23.05126);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(360,23.14746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(361,23.27591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(362,22.95779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(363,22.85416);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(364,23.03946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(365,22.88092);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(366,22.3749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(367,22.96715);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(368,23.1998);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(369,22.59725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(370,22.40585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(371,22.61237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(372,22.39119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(373,22.16784);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(374,22.18259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(375,21.9354);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(376,21.92003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(377,22.17398);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(378,22.41469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(379,22.41332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(380,22.30018);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(381,21.62885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(382,21.8915);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(383,21.57975);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(384,21.47442);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(385,21.79748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(386,21.44157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(387,21.6152);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(388,21.14527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(389,21.57175);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(390,21.57673);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(391,21.3884);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(392,21.45701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(393,20.89764);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(394,21.27632);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(395,21.1761);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(396,21.01619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(397,21.21831);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(398,20.68868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(399,20.91834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(400,21.10868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(401,20.55582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(402,20.74812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(403,20.87682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(404,20.78312);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(405,20.61899);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(406,20.84016);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(407,20.19918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(408,20.72183);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(409,20.55739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(410,20.27227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(411,20.58663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(412,20.14006);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(413,20.08758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(414,20.09147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(415,20.76417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(416,19.90982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(417,20.12091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(418,20.02808);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(419,19.74989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(420,19.94996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(421,19.83968);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(422,19.89774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(423,19.78446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(424,20.09116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(425,19.34757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(426,19.74007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(427,20.14058);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(428,19.58745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(429,19.34686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(430,19.51893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(431,19.74788);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(432,19.4205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(433,19.34074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(434,19.27083);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(435,19.11328);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(436,19.3742);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(437,19.18723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(438,18.80332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(439,19.10781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(440,18.78699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(441,19.26429);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(442,19.62976);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(443,18.68201);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(444,18.77294);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(445,18.84133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(446,18.98777);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(447,19.09933);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(448,18.94359);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(449,18.2774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(450,19.05536);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(451,18.38659);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(452,17.97421);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(453,18.61669);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(454,18.89281);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(455,18.53707);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(456,18.45743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(457,18.01286);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(458,18.14206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(459,17.99209);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(460,17.80752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(461,17.86431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(462,17.66833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(463,17.86075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(464,17.56773);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(465,17.47594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(466,18.32166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(467,17.50654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(468,17.67671);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(469,17.48776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(470,17.63191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(471,17.0793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(472,17.66359);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(473,17.31226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(474,17.14068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(475,16.9403);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(476,17.07523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(477,17.25706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(478,17.0809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(479,16.98806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(480,17.40678);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(481,17.32412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(482,17.76285);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(483,16.88644);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(484,16.99829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(485,17.39242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(486,17.07771);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(487,17.20346);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(488,16.4318);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(489,17.29188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(490,16.66298);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(491,16.71002);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(492,16.45844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(493,16.36445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(494,16.92978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(495,16.48982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(496,16.68492);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(497,17.05347);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(498,16.46955);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(499,16.65419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(500,16.51676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(501,16.26391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(502,16.50036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(503,16.40774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(504,16.25146);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(505,16.1573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(506,15.90797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(507,15.96812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(508,16.57363);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(509,16.3765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(510,15.43377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(511,15.92954);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(512,15.53596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(513,15.58757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(514,16.33074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(515,15.41072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(516,15.99615);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(517,15.52918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(518,15.83643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(519,15.59808);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(520,15.49931);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(521,15.95912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(522,15.37578);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(523,15.51265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(524,15.52806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(525,15.62381);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(526,15.77096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(527,15.51639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(528,15.38612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(529,14.9799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(530,15.37256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(531,15.22349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(532,15.40836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(533,15.41677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(534,15.44608);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(535,16.11178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(536,14.81058);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(537,15.16546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(538,14.74526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(539,14.80098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(540,15.05133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(541,14.59399);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(542,15.06969);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(543,14.56799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(544,14.89627);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(545,14.44044);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(546,14.83278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(547,14.5643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(548,14.60529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(549,14.85185);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(550,14.4868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(551,13.98981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(552,14.53836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(553,14.76951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(554,14.38432);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(555,14.14104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(556,14.05596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(557,14.386);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(558,14.06398);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(559,14.34832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(560,14.38764);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(561,14.06974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(562,14.3356);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(563,14.06193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(564,14.05029);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(565,13.76294);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(566,14.33322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(567,13.77463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(568,14.17843);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(569,13.5007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(570,13.79917);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(571,14.02);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(572,13.9534);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(573,13.53792);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(574,13.95879);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(575,14.03364);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(576,13.6339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(577,13.41634);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(578,13.35637);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(579,13.63465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(580,13.68782);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(581,13.71529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(582,13.24614);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(583,13.19759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(584,13.36083);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(585,13.21892);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(586,13.4);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(587,13.26532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(588,13.43414);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(589,13.09841);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(590,13.07769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(591,13.34619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(592,12.77945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(593,12.90309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(594,13.21396);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(595,12.82834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(596,12.7015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(597,12.97681);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(598,12.95623);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(599,12.89848);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(600,13.05274);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(601,13.20129);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(602,12.88937);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(603,12.65129);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(604,12.62275);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(605,12.77792);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(606,12.272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(607,12.96717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(608,13.01137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(609,12.75018);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(610,12.4658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(611,12.65221);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(612,12.68784);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(613,12.35158);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(614,12.61832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(615,12.81816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(616,12.65988);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(617,12.39824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(618,12.15999);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(619,12.44254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(620,12.24762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(621,12.24493);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(622,12.1493);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(623,12.33684);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(624,12.10216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(625,11.82139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(626,12.08261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(627,12.17453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(628,12.0707);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(629,12.71353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(630,12.12927);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(631,11.6597);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(632,11.96795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(633,11.33792);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(634,11.87103);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(635,11.62638);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(636,11.80553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(637,12.137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(638,11.89695);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(639,11.80369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(640,11.65214);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(641,11.4535);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(642,11.62675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(643,11.67895);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(644,11.67587);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(645,11.3022);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(646,11.25163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(647,11.42971);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(648,11.57457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(649,11.96781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(650,11.45673);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(651,11.95282);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(652,11.54306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(653,11.36206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(654,11.66408);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(655,11.45675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(656,11.54341);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(657,11.54122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(658,11.49302);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(659,11.18598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(660,11.07853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(661,11.13721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(662,10.98041);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(663,10.89274);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(664,11.0915);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(665,10.93057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(666,10.7248);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(667,11.62843);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(668,11.24251);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(669,10.91227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(670,11.24014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(671,11.05078);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(672,11.08896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(673,11.07981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(674,11.05918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(675,10.79767);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(676,10.99752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(677,10.8956);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(678,11.17504);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(679,11.13401);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(680,11.04568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(681,10.93561);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(682,10.63258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(683,10.29032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(684,10.91263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(685,10.63359);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(686,10.64837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(687,10.86969);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(688,10.49079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(689,10.60181);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(690,10.47257);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(691,10.35471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(692,9.853221);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(693,10.96825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(694,10.636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(695,10.20591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(696,10.29612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(697,10.60803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(698,10.39879);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(699,10.04828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(700,10.91006);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(701,10.23392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(702,10.02253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(703,10.16139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(704,10.00599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(705,10.02797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(706,10.29309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(707,10.16351);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(708,10.34588);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(709,10.10037);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(710,10.00746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(711,9.815674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(712,9.717424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(713,9.892072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(714,10.04243);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(715,10.04322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(716,9.744938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(717,9.672186);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(718,10.01842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(719,9.673436);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(720,9.807555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(721,9.6942);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(722,9.710307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(723,9.639805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(724,9.857924);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(725,9.506047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(726,9.814312);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(727,9.798193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(728,9.496585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(729,9.867955);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(730,9.46266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(731,9.669546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(732,10.0053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(733,9.756426);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(734,9.469797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(735,9.23543);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(736,9.680323);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(737,9.803355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(738,9.750747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(739,9.581885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(740,9.687847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(741,9.362291);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(742,9.367764);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(743,9.726256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(744,8.99034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(745,9.545481);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(746,9.290192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(747,9.01878);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(748,9.163686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(749,9.234987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(750,9.206691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(751,9.476411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(752,9.429243);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(753,9.362274);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(754,9.505902);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(755,9.239598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(756,8.872016);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(757,8.654881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(758,9.081995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(759,9.035566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(760,9.080644);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(761,9.022191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(762,8.867688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(763,8.946462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(764,8.710639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(765,8.709606);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(766,9.250269);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(767,9.015651);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(768,8.56036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(769,8.826533);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(770,8.896886);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(771,8.732978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(772,8.647379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(773,8.71776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(774,8.179948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(775,8.599446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(776,8.558881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(777,8.642168);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(778,8.615437);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(779,9.09124);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(780,8.276315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(781,8.288757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(782,8.614144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(783,9.119699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(784,8.306716);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(785,8.395322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(786,8.442527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(787,8.609295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(788,8.433353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(789,8.585634);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(790,8.601274);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(791,8.336755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(792,8.33674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(793,8.398594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(794,8.57617);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(795,8.448498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(796,8.650512);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(797,7.929152);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(798,8.205858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(799,8.093677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(800,8.396306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(801,8.23531);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(802,8.179876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(803,7.986226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(804,7.791523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(805,8.083524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(806,8.490369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(807,7.939115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(808,8.265105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(809,8.107514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(810,8.038044);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(811,8.306309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(812,7.856505);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(813,7.812876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(814,7.667657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(815,7.582548);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(816,8.56515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(817,7.545397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(818,8.090382);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(819,8.078158);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(820,8.047057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(821,7.667222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(822,7.967094);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(823,7.853783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(824,8.069796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(825,7.894838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(826,7.892031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(827,7.896252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(828,7.913365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(829,7.842602);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(830,8.036824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(831,7.496287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(832,7.417036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(833,7.503943);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(834,7.587636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(835,7.583388);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(836,7.547047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(837,7.437052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(838,7.574137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(839,7.134168);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(840,7.958661);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(841,7.80318);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(842,8.076619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(843,7.638341);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(844,7.47222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(845,7.425214);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(846,7.409946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(847,6.9367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(848,7.717363);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(849,7.407881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(850,7.749738);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(851,7.721934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(852,7.558451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(853,7.555676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(854,7.019928);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(855,7.389904);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(856,7.645302);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(857,7.598128);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(858,7.343304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(859,7.644653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(860,7.018952);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(861,7.136101);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(862,6.965487);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(863,7.193176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(864,7.107967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(865,7.565844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(866,7.055845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(867,6.873915);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(868,6.958773);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(869,6.74997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(870,7.074489);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(871,7.064261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(872,7.005374);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(873,6.886146);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(874,6.730911);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(875,7.118276);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(876,7.243438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(877,6.980155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(878,6.904238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(879,6.485498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(880,6.623839);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(881,6.648845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(882,7.16224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(883,6.755376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(884,6.844988);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(885,6.609866);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(886,6.790512);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(887,6.982202);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(888,6.939395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(889,6.35823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(890,6.619049);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(891,6.791816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(892,6.847904);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(893,6.899487);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(894,6.945427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(895,6.564926);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(896,6.830685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(897,6.366213);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(898,6.924366);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(899,6.311245);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(900,6.537548);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(901,6.87017);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(902,6.377831);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(903,6.680952);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(904,6.17304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(905,6.229612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(906,7.009055);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(907,6.7859);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(908,6.439098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(909,6.855366);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(910,6.401305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(911,6.814068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(912,6.492807);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(913,7.034443);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(914,6.227693);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(915,6.323616);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(916,6.395393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(917,5.887864);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(918,6.009795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(919,5.992846);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(920,6.334092);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(921,6.548691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(922,5.810333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(923,6.601912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(924,6.437455);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(925,6.271423);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(926,6.495809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(927,6.687618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(928,6.37441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(929,6.340234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(930,5.809637);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(931,5.775724);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(932,6.345177);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(933,6.084288);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(934,5.987235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(935,6.39604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(936,6.100553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(937,5.889876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(938,6.083832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(939,5.916619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(940,6.145099);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(941,5.951299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(942,5.922291);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(943,6.190942);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(944,6.408922);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(945,6.12054);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(946,5.880141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(947,6.380726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(948,5.923188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(949,5.951574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(950,5.658932);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(951,5.709313);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(952,6.26015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(953,5.316124);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(954,5.919093);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(955,5.912985);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(956,5.887927);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(957,6.173287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(958,5.911049);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(959,5.944312);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(960,5.803794);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(961,5.414243);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(962,5.915871);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(963,5.70583);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(964,5.599743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(965,5.436615);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(966,6.357785);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(967,5.577929);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(968,5.730736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(969,5.722835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(970,5.312976);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(971,5.798809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(972,5.625477);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(973,5.283679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(974,5.814004);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(975,5.53795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(976,5.626796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(977,5.855032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(978,5.566702);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(979,5.223701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(980,5.682615);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(981,5.820478);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(982,5.707672);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(983,5.75484);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(984,5.2003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(985,5.376466);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(986,5.430444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(987,5.45135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(988,5.783828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(989,5.594553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(990,5.389741);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(991,5.345548);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(992,5.461459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(993,5.053349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(994,5.283759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(995,5.471362);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(996,5.563687);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(997,5.521391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(998,5.642826);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(999,5.190657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1000,5.565867);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1001,86.64878);
   VH_tagFirst_2b1c_H_mass_stack_1->SetEntries(2085508);

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
   VH_tagFirst_H_mass__215->SetBinContent(1001,20102);
   VH_tagFirst_H_mass__215->SetEntries(1443866);

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
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2537.844, 5212.778,
   5177.176, 5204.745, 5333.69, 5282.986, 5381.253, 5262.508, 5488.037, 5430.735, 5378.213, 5329.163, 5406.323, 5371.533, 5424.407, 5379.99, 5434.54, 5345.1,
   5302.448, 5286.337, 5317.97, 5316.765, 5264.37, 5217.436, 5169.844, 5159.636, 5005.281, 5097.891, 4993.046, 5104.035, 2567.151, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 28.5511 };
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fey1215[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0.02762014, 0, 0.1241117, 1.875462, 3.716246, 8.517372, 11.74718, 16.24199, 20.56781,
   24.28973, 28.37887, 32.43706, 36.22798, 38.95081, 42.28202, 44.48315, 46.8029, 48.7308, 50.50313, 51.9589, 52.73545, 53.93237, 55.09054, 55.17737, 55.82752,
   56.22958, 56.7464, 56.98908, 57.37298, 57.70461, 58.09591, 59.15185, 59.06168, 59.09395, 58.77313, 58.6551, 58.35954, 58.36867, 57.07427, 57.18841, 56.96237,
   56.13423, 55.898, 55.70715, 55.18644, 55.48574, 54.81055, 55.33207, 55.32195, 54.68349, 55.38505, 54.81586, 54.53641, 54.59415, 54.50099, 54.72331, 54.11539,
   54.08247, 53.81252, 53.8651, 53.81724, 53.7441, 53.5135, 53.03339, 52.92569, 52.57597, 52.71508, 52.59193, 52.60633, 52.1937, 52.28038, 51.8863, 51.6896,
   51.56726, 52.72057, 51.18069, 51.02292, 51.09291, 50.37438, 50.36873, 50.23798, 50.28451, 49.62713, 49.21433, 49.31677, 49.46735, 48.77205, 49.06115, 48.79379,
   48.57738, 48.45003, 48.053, 47.4573, 47.65506, 47.04325, 47.41875, 47.37878, 47.14687, 46.69653, 47.06828, 46.30359, 45.86477, 46.13995, 45.82948, 45.06457,
   45.48232, 45.65159, 44.9087, 45.72537, 44.86771, 44.62347, 44.30527, 44.26062, 44.32589, 43.98249, 43.76595, 43.3888, 43.73079, 43.04463, 43.13402, 43.00079,
   42.82827, 42.85864, 42.24081, 42.64176, 42.00367, 42.16272, 42.32612, 41.79813, 41.76804, 41.69462, 41.66807, 41.27761, 41.1907, 41.18985, 40.97885, 40.71801,
   40.7531, 40.49783, 40.31665, 40.64445, 40.33705, 40.20728, 40.17598, 39.59236, 39.89929, 39.4777, 39.16717, 39.25351, 39.49259, 39.20861, 38.96389, 38.77652,
   38.9009, 39.30018, 38.75229, 38.88906, 38.18868, 38.77727, 38.04195, 38.23626, 37.70991, 37.8095, 37.48466, 37.49806, 37.47122, 37.5501, 37.57485, 37.57236,
   37.61876, 37.06713, 36.7813, 37.02105, 37.14694, 36.56026, 36.64546, 36.77944, 36.47845, 36.28384, 36.4364, 36.01822, 36.21125, 36.03692, 35.69766, 35.33154,
   35.48578, 35.46862, 35.62672, 34.84177, 35.0948, 35.02844, 35.0301, 34.69652, 34.75183, 34.61811, 34.95817, 34.52362, 34.26592, 34.64948, 34.22234, 34.11882,
   34.30347, 34.21194, 33.86701, 33.82574, 33.29884, 33.58974, 33.61474, 33.22207, 33.0687, 33.35478, 33.5269, 32.89946, 32.65042, 33.25796, 32.78585, 33.01324,
   32.58448, 32.86319, 32.16958, 32.23496, 32.33829, 32.22779, 32.20628, 32.31807, 31.48525, 32.07097, 32.08178, 31.34613, 31.53776, 31.8734, 31.32704, 31.19458,
   31.77778, 31.05196, 31.18665, 30.75876, 31.43536, 30.73232, 30.62608, 30.868, 30.70299, 30.61478, 30.45886, 30.18923, 30.36473, 30.22967, 30.02496, 29.85252,
   30.14761, 29.85251, 30.76506, 30.05899, 29.77783, 29.90837, 29.88177, 29.30519, 28.95053, 29.52113, 29.35551, 29.20872, 28.84921, 28.90974, 29.15297, 29.0411,
   28.98314, 29.04121, 28.39547, 28.7627, 28.69391, 28.37383, 28.39901, 28.4594, 28.20966, 28.33199, 28.13444, 28.07299, 27.72188, 28.31387, 27.61398, 27.63469,
   27.54476, 27.7542, 27.44955, 27.58963, 27.43911, 27.58795, 27.11594, 27.3031, 26.80023, 26.8655, 27.03248, 26.95776, 27.03121, 26.20057, 26.67368, 26.13617,
   26.60364, 26.3921, 26.78863, 26.46403, 26.12227, 25.83721, 26.90832, 26.4311, 26.06361, 25.91655, 25.72905, 26.03326, 25.9529, 25.53456, 25.72954, 25.81657,
   25.23233, 25.63078, 25.33717, 25.53253, 25.01518, 24.92903, 25.40187, 25.00058, 24.81414, 24.85285, 24.41834, 24.7048, 24.85861, 24.50014, 24.39632, 25.09274,
   24.45769, 24.28565, 24.1195, 24.26412, 24.01547, 24.05637, 24.02887, 23.81311, 23.84508, 23.49353, 23.49663, 23.73847, 23.56913, 23.58672, 23.84646, 23.7791,
   23.7308, 23.36009, 23.01902, 23.36593, 23.18219, 23.05126, 23.14746, 23.27591, 22.95779, 22.85416, 23.03946, 22.88092, 22.3749, 22.96715, 23.1998, 22.59725,
   22.40585, 22.61237, 22.39119, 22.16784, 22.18259, 21.9354, 21.92003, 22.17398, 22.41469, 22.41332, 22.30018, 21.62885, 21.8915, 21.57975, 21.47442, 21.79748,
   21.44157, 21.6152, 21.14527, 21.57175, 21.57673, 21.3884, 21.45701, 20.89764, 21.27632, 21.1761, 21.01619, 21.21831, 20.68868, 20.91834, 21.10868, 20.55582,
   20.74812, 20.87682, 20.78312, 20.61899, 20.84016, 20.19918, 20.72183, 20.55739, 20.27227, 20.58663, 20.14006, 20.08758, 20.09147, 20.76417, 19.90982, 20.12091,
   20.02808, 19.74989, 19.94996, 19.83968, 19.89774, 19.78446, 20.09116, 19.34757, 19.74007, 20.14058, 19.58745, 19.34686, 19.51893, 19.74788, 19.4205, 19.34074,
   19.27083, 19.11328, 19.3742, 19.18723, 18.80332, 19.10781, 18.78699, 19.26429, 19.62976, 18.68201, 18.77294, 18.84133, 18.98777, 19.09933, 18.94359, 18.2774,
   19.05536, 18.38659, 17.97421, 18.61669, 18.89281, 18.53707, 18.45743, 18.01286, 18.14206, 17.99209, 17.80752, 17.86431, 17.66833, 17.86075, 17.56773, 17.47594,
   18.32166, 17.50654, 17.67671, 17.48776, 17.63191, 17.0793, 17.66359, 17.31226, 17.14068, 16.9403, 17.07523, 17.25706, 17.0809, 16.98806, 17.40678, 17.32412,
   17.76285, 16.88644, 16.99829, 17.39242, 17.07771, 17.20346, 16.4318, 17.29188, 16.66298, 16.71002, 16.45844, 16.36445, 16.92978, 16.48982, 16.68492, 17.05347,
   16.46955, 16.65419, 16.51676, 16.26391, 16.50036, 16.40774, 16.25146, 16.1573, 15.90797, 15.96812, 16.57363, 16.3765, 15.43377, 15.92954, 15.53596, 15.58757,
   16.33074, 15.41072, 15.99615, 15.52918, 15.83643, 15.59808, 15.49931, 15.95912, 15.37578, 15.51265, 15.52806, 15.62381, 15.77096, 15.51639, 15.38612, 14.9799,
   15.37256, 15.22349, 15.40836, 15.41677, 15.44608, 16.11178, 14.81058, 15.16546, 14.74526, 14.80098, 15.05133, 14.59399, 15.06969, 14.56799, 14.89627, 14.44044,
   14.83278, 14.5643, 14.60529, 14.85185, 14.4868, 13.98981, 14.53836, 14.76951, 14.38432, 14.14104, 14.05596, 14.386, 14.06398, 14.34832, 14.38764, 14.06974,
   14.3356, 14.06193, 14.05029, 13.76294, 14.33322, 13.77463, 14.17843, 13.5007, 13.79917, 14.02, 13.9534, 13.53792, 13.95879, 14.03364, 13.6339, 13.41634,
   13.35637, 13.63465, 13.68782, 13.71529, 13.24614, 13.19759, 13.36083, 13.21892, 13.4, 13.26532, 13.43414, 13.09841, 13.07769, 13.34619, 12.77945, 12.90309,
   13.21396, 12.82834, 12.7015, 12.97681, 12.95623, 12.89848, 13.05274, 13.20129, 12.88937, 12.65129, 12.62275, 12.77792, 12.272, 12.96717, 13.01137, 12.75018,
   12.4658, 12.65221, 12.68784, 12.35158, 12.61832, 12.81816, 12.65988, 12.39824, 12.15999, 12.44254, 12.24762, 12.24493, 12.1493, 12.33684, 12.10216, 11.82139,
   12.08261, 12.17453, 12.0707, 12.71353, 12.12927, 11.6597, 11.96795, 11.33792, 11.87103, 11.62638, 11.80553, 12.137, 11.89695, 11.80369, 11.65214, 11.4535,
   11.62675, 11.67895, 11.67587, 11.3022, 11.25163, 11.42971, 11.57457, 11.96781, 11.45673, 11.95282, 11.54306, 11.36206, 11.66408, 11.45675, 11.54341, 11.54122,
   11.49302, 11.18598, 11.07853, 11.13721, 10.98041, 10.89274, 11.0915, 10.93057, 10.7248, 11.62843, 11.24251, 10.91227, 11.24014, 11.05078, 11.08896, 11.07981,
   11.05918, 10.79767, 10.99752, 10.8956, 11.17504, 11.13401, 11.04568, 10.93561, 10.63258, 10.29032, 10.91263, 10.63359, 10.64837, 10.86969, 10.49079, 10.60181,
   10.47257, 10.35471, 9.853221, 10.96825, 10.636, 10.20591, 10.29612, 10.60803, 10.39879, 10.04828, 10.91006, 10.23392, 10.02253, 10.16139, 10.00599, 10.02797,
   10.29309, 10.16351, 10.34588, 10.10037, 10.00746, 9.815674, 9.717424, 9.892072, 10.04243, 10.04322, 9.744938, 9.672186, 10.01842, 9.673436, 9.807555, 9.6942,
   9.710307, 9.639805, 9.857924, 9.506047, 9.814312, 9.798193, 9.496585, 9.867955, 9.46266, 9.669546, 10.0053, 9.756426, 9.469797, 9.23543, 9.680323, 9.803355,
   9.750747, 9.581885, 9.687847, 9.362291, 9.367764, 9.726256, 8.99034, 9.545481, 9.290192, 9.01878, 9.163686, 9.234987, 9.206691, 9.476411, 9.429243, 9.362274,
   9.505902, 9.239598, 8.872016, 8.654881, 9.081995, 9.035566, 9.080644, 9.022191, 8.867688, 8.946462, 8.710639, 8.709606, 9.250269, 9.015651, 8.56036, 8.826533,
   8.896886, 8.732978, 8.647379, 8.71776, 8.179948, 8.599446, 8.558881, 8.642168, 8.615437, 9.09124, 8.276315, 8.288757, 8.614144, 9.119699, 8.306716, 8.395322,
   8.442527, 8.609295, 8.433353, 8.585634, 8.601274, 8.336755, 8.33674, 8.398594, 8.57617, 8.448498, 8.650512, 7.929152, 8.205858, 8.093677, 8.396306, 8.23531,
   8.179876, 7.986226, 7.791523, 8.083524, 8.490369, 7.939115, 8.265105, 8.107514, 8.038044, 8.306309, 7.856505, 7.812876, 7.667657, 7.582548, 8.56515, 7.545397,
   8.090382, 8.078158, 8.047057, 7.667222, 7.967094, 7.853783, 8.069796, 7.894838, 7.892031, 7.896252, 7.913365, 7.842602, 8.036824, 7.496287, 7.417036, 7.503943,
   7.587636, 7.583388, 7.547047, 7.437052, 7.574137, 7.134168, 7.958661, 7.80318, 8.076619, 7.638341, 7.47222, 7.425214, 7.409946, 6.9367, 7.717363, 7.407881,
   7.749738, 7.721934, 7.558451, 7.555676, 7.019928, 7.389904, 7.645302, 7.598128, 7.343304, 7.644653, 7.018952, 7.136101, 6.965487, 7.193176, 7.107967, 7.565844,
   7.055845, 6.873915, 6.958773, 6.74997, 7.074489, 7.064261, 7.005374, 6.886146, 6.730911, 7.118276, 7.243438, 6.980155, 6.904238, 6.485498, 6.623839, 6.648845,
   7.16224, 6.755376, 6.844988, 6.609866, 6.790512, 6.982202, 6.939395, 6.35823, 6.619049, 6.791816, 6.847904, 6.899487, 6.945427, 6.564926, 6.830685, 6.366213,
   6.924366, 6.311245, 6.537548, 6.87017, 6.377831, 6.680952, 6.17304, 6.229612, 7.009055, 6.7859, 6.439098, 6.855366, 6.401305, 6.814068, 6.492807, 7.034443,
   6.227693, 6.323616, 6.395393, 5.887864, 6.009795, 5.992846, 6.334092, 6.548691, 5.810333, 6.601912, 6.437455, 6.271423, 6.495809, 6.687618, 6.37441, 6.340234,
   5.809637, 5.775724, 6.345177, 6.084288, 5.987235, 6.39604, 6.100553, 5.889876, 6.083832, 5.916619, 6.145099, 5.951299, 5.922291, 6.190942, 6.408922, 6.12054,
   5.880141, 6.380726, 5.923188, 5.951574, 5.658932, 5.709313, 6.26015, 5.316124, 5.919093, 5.912985, 5.887927, 6.173287, 5.911049, 5.944312, 5.803794, 5.414243,
   5.915871, 5.70583, 5.599743, 5.436615, 6.357785, 5.577929, 5.730736, 5.722835, 5.312976, 5.798809, 5.625477, 5.283679, 5.814004, 5.53795, 5.626796, 5.855032,
   5.566702, 5.223701, 5.682615, 5.820478, 5.707672, 5.75484, 5.2003, 5.376466, 5.430444, 5.45135, 5.783828, 5.594553, 5.389741, 5.345548, 5.461459, 5.053349,
   5.283759, 5.471362, 5.563687, 5.521391, 5.642826, 5.190657, 5.565867 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_H_mass_fx1215,Graph_from_VH_tagFirst_2b1c_H_mass_fy1215,Graph_from_VH_tagFirst_2b1c_H_mass_fex1215,Graph_from_VH_tagFirst_2b1c_H_mass_fey1215);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_H_mass1215 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_H_mass1215","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1215->SetMinimum(-619.4039);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1215->SetMaximum(6103.621);
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
   data_mc_ratio__216->SetBinContent(1000,1.120798);
   data_mc_ratio__216->SetBinContent(1001,1.414297);
   data_mc_ratio__216->SetBinError(1000,0.1981309);
   data_mc_ratio__216->SetBinError(1001,0.01318492);
   data_mc_ratio__216->SetMinimum(0.4);
   data_mc_ratio__216->SetMaximum(1.6);
   data_mc_ratio__216->SetEntries(14.43977);
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
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.02253425, 0.01092745,
   0.01084264, 0.01073981, 0.01044439, 0.01044607, 0.01031093, 0.01041529, 0.01008231, 0.01018683, 0.01016759, 0.01039282, 0.01013921, 0.01015286, 0.01006454, 0.01013032, 0.01006954, 0.0101243,
   0.01019953, 0.01017955, 0.01012889, 0.01012218, 0.01020903, 0.01025667, 0.01025822, 0.01025764, 0.0105041, 0.01034057, 0.01053303, 0.01030681, 0.02033137, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1949441 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1216,Graph_from_mc_statistical_error_fy1216,Graph_from_mc_statistical_error_fex1216,Graph_from_mc_statistical_error_fey1216);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1216 = new TH1F("Graph_Graph_from_mc_statistical_error1216","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1216->SetMinimum(0.7660671);
   Graph_Graph_from_mc_statistical_error1216->SetMaximum(1.233933);
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
