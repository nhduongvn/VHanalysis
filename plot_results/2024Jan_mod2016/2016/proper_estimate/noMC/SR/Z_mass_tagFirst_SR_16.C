#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagFirst_SR_16()
{
//=========Macro generated from canvas: Z_mass_tagFirst_SR_16/Z_mass_tagFirst_SR_16
//=========  (Fri Feb  2 13:21:03 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_tagFirst_SR_16 = new TCanvas("Z_mass_tagFirst_SR_16", "Z_mass_tagFirst_SR_16",0,0,600,600);
   Z_mass_tagFirst_SR_16->SetHighLightColor(2);
   Z_mass_tagFirst_SR_16->Range(0,0,1,1);
   Z_mass_tagFirst_SR_16->SetFillColor(0);
   Z_mass_tagFirst_SR_16->SetFillStyle(4000);
   Z_mass_tagFirst_SR_16->SetBorderMode(0);
   Z_mass_tagFirst_SR_16->SetBorderSize(2);
   Z_mass_tagFirst_SR_16->SetFrameFillStyle(1000);
   Z_mass_tagFirst_SR_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-32.88064,315.7258,32857.76);
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
   st->SetMaximum(29568.7);
   
   TH1F *st_stack_12 = new TH1F("st_stack_12","",1000,0,2000);
   st_stack_12->SetMinimum(0.01);
   st_stack_12->SetMaximum(29568.7);
   st_stack_12->SetDirectory(nullptr);
   st_stack_12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_12->SetLineColor(ci);
   st_stack_12->SetLineWidth(0);
   st_stack_12->GetXaxis()->SetRange(1,150);
   st_stack_12->GetXaxis()->SetLabelFont(42);
   st_stack_12->GetXaxis()->SetTitleOffset(1);
   st_stack_12->GetXaxis()->SetTitleFont(42);
   st_stack_12->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_12->GetYaxis()->SetLabelFont(42);
   st_stack_12->GetYaxis()->SetLabelSize(0.05);
   st_stack_12->GetYaxis()->SetTitleSize(0.057);
   st_stack_12->GetYaxis()->SetTitleOffset(1.2);
   st_stack_12->GetYaxis()->SetTitleFont(42);
   st_stack_12->GetZaxis()->SetLabelFont(42);
   st_stack_12->GetZaxis()->SetTitleOffset(1);
   st_stack_12->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_12);
   
   
   TH1D *VH_tagFirst_2b1c_Z_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(31,13272.24);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(32,13301.92);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(33,13305.91);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(34,13151.82);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(35,12812.98);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(36,12573.31);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(37,12351.55);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(38,12057.74);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(39,11598.97);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(40,11357.71);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(41,10855.54);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(42,10443.65);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(43,10179.51);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(44,9956.227);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(45,9713.778);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(46,9639.936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(47,9582.975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(48,9285.538);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(49,9301.299);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(50,9343.787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(51,9192.391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(52,9179.72);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(53,9002.934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(54,8965.593);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(55,8890.661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(56,8873.251);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(57,8820.836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(58,8777.276);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(59,8723.129);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(60,8480.388);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1000,51.17833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1001,25894.87);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(7,0.0128613);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(8,0.01096307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(9,0.05027747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(10,0.01692017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(11,0.02361797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(12,0.827917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(13,2.883778);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(14,5.206121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(15,9.548468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(16,14.78006);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(17,21.07775);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(18,27.70403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(19,33.90334);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(20,40.37374);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(21,45.95676);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(22,51.5224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(23,56.20906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(24,60.18723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(25,63.78365);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(26,66.5757);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(27,68.97749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(28,70.61605);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(29,72.08602);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(30,72.55921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(31,73.80083);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(32,74.07085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(33,74.34443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(34,74.48475);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(35,73.94056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(36,73.74032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(37,73.71411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(38,73.88075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(39,73.30406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(40,73.41442);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(41,72.91683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(42,72.84239);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(43,72.56066);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(44,72.11427);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(45,71.6679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(46,71.1981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(47,70.81661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(48,69.64838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(49,69.05927);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(50,68.7366);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(51,67.76739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(52,67.19766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(53,66.42404);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(54,65.8425);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(55,65.32209);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(56,65.01001);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(57,64.72044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(58,64.29554);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(59,64.1468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(60,63.27078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(61,63.13963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(62,62.87413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(63,62.32898);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(64,62.29597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(65,62.44073);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(66,61.37135);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(67,61.14315);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(68,60.6942);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(69,60.39925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(70,60.53812);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(71,59.79237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(72,59.66567);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(73,59.32198);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(74,59.00427);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(75,58.45753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(76,58.1547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(77,57.85413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(78,57.41076);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(79,57.14118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(80,56.87702);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(81,56.43526);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(82,55.71298);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(83,55.94767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(84,55.43766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(85,54.64358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(86,54.70369);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(87,54.02074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(88,53.83652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(89,53.49683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(90,53.17838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(91,52.8053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(92,52.54075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(93,51.72633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(94,51.57031);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(95,51.71272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(96,51.03756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(97,50.88355);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(98,50.3262);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(99,50.32026);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(100,49.78222);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(101,49.27497);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(102,49.35824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(103,48.71363);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(104,48.46244);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(105,47.97099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(106,47.62057);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(107,47.44364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(108,47.17389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(109,46.56897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(110,46.60137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(111,46.04147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(112,46.1425);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(113,46.10547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(114,45.54235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(115,45.17826);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(116,44.70115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(117,44.63209);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(118,44.5071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(119,44.00542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(120,44.01089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(121,43.32104);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(122,43.35755);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(123,42.83139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(124,42.81862);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(125,42.59376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(126,42.04674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(127,41.91738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(128,41.71941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(129,41.68697);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(130,41.21943);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(131,41.18675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(132,41.07989);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(133,40.6144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(134,40.50936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(135,40.09208);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(136,39.54548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(137,39.93412);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(138,39.77927);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(139,39.6805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(140,39.49005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(141,38.89136);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(142,38.85957);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(143,38.65128);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(144,38.3617);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(145,37.94916);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(146,38.2177);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(147,37.73643);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(148,37.84148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(149,37.47037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(150,37.23822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(151,37.2149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(152,36.84189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(153,36.72701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(154,36.89119);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(155,36.45417);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(156,36.60168);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(157,36.07776);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(158,35.9613);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(159,35.70081);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(160,35.98761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(161,35.72346);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(162,35.37845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(163,35.34868);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(164,35.21599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(165,35.59032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(166,34.8322);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(167,34.98194);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(168,34.66895);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(169,34.62534);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(170,34.86162);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(171,34.29413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(172,34.28452);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(173,34.10887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(174,33.74434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(175,34.23214);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(176,33.9851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(177,33.71283);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(178,33.57222);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(179,34.11354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(180,33.48641);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(181,33.08821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(182,33.21254);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(183,32.95938);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(184,32.95691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(185,32.77498);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(186,32.95379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(187,32.98475);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(188,33.3187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(189,33.05467);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(190,32.52299);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(191,32.69636);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(192,32.69483);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(193,32.47211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(194,32.17968);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(195,32.34715);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(196,31.87144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(197,31.87983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(198,32.09956);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(199,31.91393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(200,31.3232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(201,31.68877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(202,31.85234);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(203,31.73283);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(204,31.51038);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(205,31.26605);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(206,31.59524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(207,31.27992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(208,31.36573);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(209,31.33178);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(210,31.36962);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(211,30.92187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(212,30.96342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(213,30.89543);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(214,31.0184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(215,30.94903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(216,30.84788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(217,30.77426);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(218,30.67267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(219,30.62197);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(220,30.28066);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(221,30.31098);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(222,30.38352);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(223,30.22819);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(224,30.09115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(225,30.40684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(226,30.09692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(227,30.09006);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(228,29.93453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(229,29.98057);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(230,29.93713);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(231,30.14);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(232,29.57386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(233,29.6242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(234,29.49975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(235,29.34548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(236,29.34709);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(237,29.55626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(238,29.31819);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(239,29.28282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(240,29.2963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(241,29.06074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(242,29.17698);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(243,28.98219);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(244,29.0329);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(245,29.03525);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(246,28.68011);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(247,28.95951);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(248,28.94278);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(249,28.84446);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(250,28.46304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(251,29.00537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(252,28.45654);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(253,28.4839);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(254,28.34243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(255,28.96236);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(256,28.78548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(257,28.28198);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(258,28.64781);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(259,28.06004);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(260,28.3719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(261,28.17224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(262,28.0897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(263,27.95745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(264,27.93716);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(265,27.8479);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(266,27.74936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(267,27.96786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(268,28.04822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(269,27.60401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(270,27.90146);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(271,27.70054);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(272,27.61043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(273,27.46327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(274,27.36068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(275,27.33183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(276,27.10662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(277,27.3134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(278,27.13049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(279,27.11399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(280,27.45251);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(281,27.1352);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(282,26.80954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(283,27.25596);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(284,27.04301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(285,26.84632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(286,26.55395);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(287,27.01467);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(288,26.69052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(289,26.38278);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(290,26.56179);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(291,26.59836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(292,25.93718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(293,26.49263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(294,26.0923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(295,26.37276);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(296,26.02655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(297,26.15891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(298,26.22431);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(299,26.34129);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(300,26.09151);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(301,25.93245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(302,26.09777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(303,25.62448);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(304,25.80819);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(305,25.64019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(306,25.24748);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(307,26.00578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(308,25.74918);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(309,25.57826);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(310,25.67459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(311,25.50096);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(312,25.37169);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(313,25.21427);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(314,25.5426);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(315,25.10664);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(316,25.48619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(317,25.14159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(318,24.83189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(319,25.12694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(320,25.23433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(321,24.79325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(322,24.80632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(323,24.64423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(324,24.85901);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(325,24.8956);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(326,24.88765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(327,24.62371);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(328,24.47797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(329,24.52977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(330,24.44536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(331,24.50852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(332,24.76151);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(333,24.33206);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(334,24.64015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(335,24.31153);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(336,24.0593);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(337,24.38251);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(338,24.04091);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(339,24.09454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(340,24.06226);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(341,24.19812);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(342,23.83409);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(343,23.96617);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(344,23.72726);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(345,23.93316);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(346,23.80792);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(347,23.72349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(348,23.74252);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(349,23.7681);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(350,23.63875);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(351,23.46509);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(352,23.62186);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(353,23.79952);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(354,23.53567);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(355,23.33067);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(356,23.39364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(357,23.58489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(358,23.41649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(359,23.03902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(360,22.99707);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(361,23.26945);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(362,23.27618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(363,22.71709);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(364,23.14165);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(365,22.76264);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(366,23.0803);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(367,22.83922);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(368,22.61606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(369,22.65768);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(370,22.53419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(371,22.6278);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(372,22.33622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(373,22.82471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(374,22.43387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(375,22.49715);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(376,22.19433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(377,22.68892);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(378,22.21093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(379,22.54618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(380,22.17615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(381,22.32801);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(382,22.39046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(383,22.47354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(384,21.99281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(385,21.75542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(386,21.94855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(387,21.76443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(388,22.03566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(389,21.76513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(390,21.88007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(391,21.80627);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(392,21.9537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(393,21.92795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(394,21.73205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(395,21.63166);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(396,21.74547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(397,21.23824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(398,21.55092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(399,21.50787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(400,21.4274);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(401,21.44154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(402,21.17607);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(403,21.44033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(404,20.93124);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(405,21.33712);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(406,21.0529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(407,21.17221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(408,21.11517);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(409,21.14289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(410,21.32529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(411,20.88486);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(412,21.03996);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(413,21.07674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(414,21.18673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(415,20.56631);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(416,20.62647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(417,20.89476);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(418,20.65659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(419,20.70609);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(420,20.72431);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(421,20.23417);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(422,20.69722);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(423,21.19244);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(424,20.69397);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(425,20.42443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(426,20.34988);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(427,20.51534);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(428,20.04778);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(429,20.3997);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(430,20.51091);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(431,20.28153);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(432,20.15169);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(433,20.28648);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(434,20.21186);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(435,20.00647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(436,20.01035);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(437,19.89695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(438,20.04088);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(439,19.86147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(440,20.00049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(441,19.90857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(442,20.21701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(443,19.89614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(444,19.50644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(445,19.38765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(446,19.71546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(447,19.87031);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(448,19.69665);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(449,19.67387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(450,19.37193);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(451,19.63822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(452,19.70634);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(453,19.09985);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(454,19.4944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(455,19.25648);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(456,19.61218);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(457,19.46337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(458,19.09348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(459,19.15634);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(460,19.04926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(461,19.0491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(462,18.86408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(463,19.13513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(464,19.441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(465,18.95388);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(466,18.7507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(467,18.75877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(468,18.62098);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(469,18.73562);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(470,18.66062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(471,18.74169);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(472,19.02062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(473,18.97235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(474,18.68929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(475,18.76287);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(476,18.24658);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(477,18.4274);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(478,18.68094);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(479,18.55373);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(480,18.43632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(481,18.48712);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(482,18.54677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(483,18.33424);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(484,17.93923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(485,18.13072);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(486,18.16503);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(487,18.04005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(488,17.843);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(489,18.26296);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(490,17.96284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(491,17.92176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(492,18.10973);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(493,18.12152);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(494,17.95225);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(495,17.97054);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(496,17.91127);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(497,17.83025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(498,17.91628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(499,17.42843);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(500,17.97569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(501,17.52695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(502,17.73584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(503,17.99649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(504,17.52115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(505,17.36279);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(506,17.25882);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(507,17.68543);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(508,17.41643);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(509,17.04837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(510,17.02389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(511,17.03485);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(512,17.52544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(513,17.27088);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(514,17.10622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(515,16.79278);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(516,16.91355);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(517,17.16885);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(518,17.12962);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(519,16.91916);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(520,16.88348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(521,17.01154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(522,17.05283);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(523,17.03338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(524,16.8385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(525,16.78858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(526,17.00802);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(527,16.74569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(528,16.98016);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(529,16.65899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(530,16.77468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(531,16.77813);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(532,16.65843);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(533,16.1558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(534,16.38375);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(535,16.2858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(536,16.44233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(537,15.91844);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(538,17.00988);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(539,16.37652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(540,16.75458);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(541,16.26937);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(542,16.18994);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(543,16.21816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(544,16.25732);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(545,16.20161);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(546,16.32952);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(547,16.15651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(548,16.24551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(549,15.84984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(550,15.84351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(551,16.01372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(552,15.87777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(553,15.77118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(554,16.11399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(555,15.70987);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(556,16.0453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(557,15.69605);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(558,15.911);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(559,15.84398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(560,15.64375);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(561,15.63931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(562,15.717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(563,15.63675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(564,15.81975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(565,15.3822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(566,15.76139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(567,15.27478);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(568,15.33298);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(569,15.18374);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(570,15.33701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(571,15.44181);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(572,15.54718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(573,14.95592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(574,15.08475);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(575,15.07662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(576,15.14812);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(577,15.22521);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(578,15.46465);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(579,15.1765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(580,14.96422);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(581,15.29923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(582,15.2673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(583,14.71293);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(584,15.15049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(585,15.27436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(586,14.72005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(587,15.0161);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(588,14.80513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(589,14.84262);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(590,15.05333);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(591,15.04539);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(592,14.95834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(593,14.664);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(594,14.67043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(595,14.81622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(596,14.74312);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(597,14.45292);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(598,14.65946);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(599,14.78959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(600,14.61027);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(601,14.19128);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(602,14.45524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(603,14.41752);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(604,14.4796);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(605,14.34923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(606,14.46961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(607,14.20475);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(608,14.42232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(609,13.92282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(610,14.11301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(611,14.30585);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(612,14.12734);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(613,13.79558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(614,14.34501);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(615,13.96214);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(616,13.98031);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(617,14.18293);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(618,13.57394);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(619,13.97649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(620,13.94097);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(621,13.73399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(622,13.82791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(623,14.23305);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(624,13.93941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(625,13.65834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(626,13.73304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(627,13.66103);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(628,13.88202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(629,13.39144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(630,13.65071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(631,13.57884);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(632,13.66738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(633,13.50257);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(634,13.64342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(635,13.13267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(636,13.36659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(637,13.28664);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(638,13.31862);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(639,13.5588);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(640,13.43946);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(641,13.4508);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(642,13.50682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(643,13.40027);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(644,13.11451);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(645,12.74904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(646,13.0284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(647,13.0485);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(648,13.20544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(649,13.57679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(650,13.00259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(651,13.12713);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(652,13.31739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(653,12.96052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(654,13.25951);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(655,12.41471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(656,12.96379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(657,12.9834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(658,12.76479);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(659,12.47309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(660,12.44288);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(661,13.08775);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(662,12.53498);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(663,12.73397);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(664,12.46552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(665,12.64794);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(666,12.8348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(667,12.57406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(668,12.72994);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(669,12.39799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(670,12.43762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(671,12.61188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(672,12.27606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(673,12.44129);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(674,12.36551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(675,12.32626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(676,12.59894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(677,11.99372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(678,12.32307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(679,12.29108);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(680,12.34937);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(681,12.36865);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(682,12.22363);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(683,12.36926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(684,12.18738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(685,12.20432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(686,12.11807);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(687,12.43236);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(688,11.85705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(689,11.78104);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(690,12.07007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(691,12.06844);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(692,11.89468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(693,11.94007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(694,12.34159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(695,12.21843);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(696,11.92266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(697,11.61232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(698,11.7768);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(699,11.56833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(700,11.78602);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(701,11.77807);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(702,12.00396);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(703,11.58886);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(704,11.91117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(705,11.4726);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(706,11.7097);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(707,11.71518);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(708,11.83638);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(709,11.34617);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(710,12.12509);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(711,11.47215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(712,11.53585);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(713,11.76546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(714,11.78583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(715,11.71097);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(716,11.26745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(717,11.47105);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(718,11.41519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(719,11.40309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(720,11.19618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(721,10.89781);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(722,11.33693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(723,11.33397);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(724,11.05982);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(725,11.09972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(726,11.42183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(727,11.22024);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(728,10.99518);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(729,11.01581);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(730,11.05828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(731,11.00661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(732,10.91727);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(733,10.70166);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(734,10.91818);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(735,11.01226);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(736,10.6969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(737,11.04474);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(738,10.9183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(739,11.36131);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(740,11.01367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(741,10.78998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(742,10.8359);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(743,10.98769);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(744,10.7945);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(745,10.58019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(746,10.61876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(747,10.78276);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(748,10.62529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(749,10.75312);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(750,10.65343);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(751,10.64251);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(752,10.33896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(753,10.39725);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(754,10.76492);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(755,10.62423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(756,10.56431);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(757,10.25876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(758,10.65226);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(759,10.4304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(760,10.35939);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(761,10.03064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(762,10.51692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(763,10.71363);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(764,10.64333);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(765,10.48323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(766,10.18689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(767,10.41941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(768,10.37037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(769,10.25378);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(770,10.00726);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(771,10.29975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(772,10.12378);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(773,9.908326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(774,9.844743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(775,10.05568);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(776,10.02761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(777,10.35141);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(778,10.40468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(779,10.35356);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(780,9.967873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(781,10.16356);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(782,10.28227);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(783,10.17031);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(784,9.99892);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(785,9.90306);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(786,9.703326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(787,9.644093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(788,9.580795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(789,9.887821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(790,9.77899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(791,9.673714);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(792,9.611659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(793,9.561575);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(794,9.878313);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(795,9.616694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(796,9.597927);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(797,9.779862);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(798,9.676347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(799,9.711662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(800,9.908759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(801,9.726402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(802,9.861331);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(803,9.317628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(804,9.652223);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(805,9.549044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(806,9.619799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(807,9.753424);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(808,9.491478);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(809,9.499909);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(810,9.312855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(811,8.851388);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(812,9.481085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(813,9.135932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(814,9.473563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(815,9.140189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(816,9.167379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(817,8.978709);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(818,8.950194);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(819,8.957932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(820,9.403985);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(821,8.938911);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(822,9.276334);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(823,9.082937);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(824,9.117701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(825,9.058792);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(826,9.054321);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(827,9.066113);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(828,9.288824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(829,8.95895);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(830,9.144312);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(831,8.76652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(832,9.235254);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(833,8.821876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(834,8.655802);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(835,9.082933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(836,8.725686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(837,9.238737);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(838,9.126494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(839,8.642305);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(840,8.991455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(841,8.938601);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(842,8.806881);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(843,9.135569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(844,8.633578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(845,8.69413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(846,9.135383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(847,8.866847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(848,8.620296);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(849,8.961074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(850,8.621836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(851,8.599037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(852,8.584369);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(853,8.296871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(854,8.695694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(855,8.600665);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(856,8.385968);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(857,8.273003);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(858,8.594156);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(859,8.693271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(860,8.405794);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(861,8.649692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(862,8.234481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(863,8.211871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(864,8.411703);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(865,8.476915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(866,8.377198);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(867,8.312367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(868,8.186582);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(869,8.120214);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(870,8.274095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(871,8.042936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(872,8.302654);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(873,8.308647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(874,8.562044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(875,8.362539);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(876,8.075266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(877,8.321518);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(878,7.974671);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(879,7.930439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(880,7.796399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(881,8.138595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(882,8.34758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(883,7.782686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(884,8.09191);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(885,8.112837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(886,8.179721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(887,7.695202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(888,8.11884);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(889,7.63673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(890,8.047088);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(891,8.052403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(892,7.605517);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(893,8.42171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(894,7.877191);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(895,7.871717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(896,7.984984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(897,7.710167);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(898,8.142771);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(899,7.840628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(900,7.822777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(901,8.064187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(902,7.607455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(903,7.829471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(904,7.463789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(905,7.864597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(906,7.370187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(907,8.024518);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(908,7.944234);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(909,7.603488);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(910,7.804325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(911,7.791033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(912,7.474709);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(913,7.596817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(914,7.584292);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(915,7.459724);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(916,7.515432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(917,7.649108);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(918,7.402008);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(919,7.509315);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(920,7.454507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(921,7.48025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(922,7.413454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(923,7.456327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(924,7.63386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(925,7.493016);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(926,7.551259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(927,7.244333);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(928,7.296859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(929,7.253968);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(930,7.461337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(931,7.387985);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(932,7.331522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(933,7.477428);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(934,7.465958);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(935,7.171472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(936,7.144551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(937,7.342638);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(938,7.096527);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(939,7.258677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(940,6.909301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(941,7.29521);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(942,7.125649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(943,7.750442);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(944,6.980895);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(945,7.028789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(946,6.84487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(947,7.205013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(948,7.294836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(949,6.969394);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(950,7.469989);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(951,7.03733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(952,6.960622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(953,7.16376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(954,7.299211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(955,6.888594);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(956,6.895802);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(957,6.94617);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(958,6.898346);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(959,6.624855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(960,6.705016);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(961,6.866369);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(962,7.167448);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(963,6.767906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(964,6.845247);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(965,6.763042);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(966,6.617592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(967,6.92607);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(968,6.597687);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(969,6.924162);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(970,6.490982);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(971,6.69807);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(972,6.41757);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(973,6.860671);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(974,6.703563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(975,6.491608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(976,6.834418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(977,6.551229);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(978,7.118562);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(979,6.773482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(980,6.715041);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(981,6.427489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(982,6.709055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(983,6.682263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(984,6.384859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(985,6.663488);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(986,6.423746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(987,6.740197);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(988,6.498235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(989,6.165282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(990,6.566512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(991,6.634705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(992,6.33585);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(993,6.399632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(994,6.454664);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(995,6.111329);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(996,6.604885);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(997,6.333837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(998,6.630654);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(999,6.580879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1000,6.279507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1001,105.9927);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetEntries(3335294);

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
   
   TH1D *VH_tagFirst_Z_mass__23 = new TH1D("VH_tagFirst_Z_mass__23","",1000,0,2000);
   VH_tagFirst_Z_mass__23->SetBinContent(1000,69);
   VH_tagFirst_Z_mass__23->SetBinContent(1001,37236);
   VH_tagFirst_Z_mass__23->SetEntries(2083119);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_mass__23->SetLineColor(ci);
   VH_tagFirst_Z_mass__23->SetLineWidth(2);
   VH_tagFirst_Z_mass__23->SetMarkerStyle(20);
   VH_tagFirst_Z_mass__23->SetMarkerSize(1.2);
   VH_tagFirst_Z_mass__23->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_Z_mass__23->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__23->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__23->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__23->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__23->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__23->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__23->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__23->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__23->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fx1023[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fy1023[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13272.24, 13301.92, 13305.91,
   13151.82, 12812.98, 12573.31, 12351.55, 12057.74, 11598.97, 11357.71, 10855.54, 10443.65, 10179.51, 9956.227, 9713.778, 9639.936, 9582.975, 9285.538, 9301.299,
   9343.787, 9192.391, 9179.72, 9002.934, 8965.593, 8890.661, 8873.251, 8820.836, 8777.276, 8723.129, 8480.388, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 51.17833 };
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fex1023[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fey1023[1000] = { 0, 0, 0, 0, 0, 0, 0.0128613, 0.01096307, 0.05027747, 0.01692017, 0.02361797, 0.827917, 2.883778, 5.206121, 9.548468, 14.78006, 21.07775,
   27.70403, 33.90334, 40.37374, 45.95676, 51.5224, 56.20906, 60.18723, 63.78365, 66.5757, 68.97749, 70.61605, 72.08602, 72.55921, 73.80083, 74.07085, 74.34443,
   74.48475, 73.94056, 73.74032, 73.71411, 73.88075, 73.30406, 73.41442, 72.91683, 72.84239, 72.56066, 72.11427, 71.6679, 71.1981, 70.81661, 69.64838, 69.05927,
   68.7366, 67.76739, 67.19766, 66.42404, 65.8425, 65.32209, 65.01001, 64.72044, 64.29554, 64.1468, 63.27078, 63.13963, 62.87413, 62.32898, 62.29597, 62.44073,
   61.37135, 61.14315, 60.6942, 60.39925, 60.53812, 59.79237, 59.66567, 59.32198, 59.00427, 58.45753, 58.1547, 57.85413, 57.41076, 57.14118, 56.87702, 56.43526,
   55.71298, 55.94767, 55.43766, 54.64358, 54.70369, 54.02074, 53.83652, 53.49683, 53.17838, 52.8053, 52.54075, 51.72633, 51.57031, 51.71272, 51.03756, 50.88355,
   50.3262, 50.32026, 49.78222, 49.27497, 49.35824, 48.71363, 48.46244, 47.97099, 47.62057, 47.44364, 47.17389, 46.56897, 46.60137, 46.04147, 46.1425, 46.10547,
   45.54235, 45.17826, 44.70115, 44.63209, 44.5071, 44.00542, 44.01089, 43.32104, 43.35755, 42.83139, 42.81862, 42.59376, 42.04674, 41.91738, 41.71941, 41.68697,
   41.21943, 41.18675, 41.07989, 40.6144, 40.50936, 40.09208, 39.54548, 39.93412, 39.77927, 39.6805, 39.49005, 38.89136, 38.85957, 38.65128, 38.3617, 37.94916,
   38.2177, 37.73643, 37.84148, 37.47037, 37.23822, 37.2149, 36.84189, 36.72701, 36.89119, 36.45417, 36.60168, 36.07776, 35.9613, 35.70081, 35.98761, 35.72346,
   35.37845, 35.34868, 35.21599, 35.59032, 34.8322, 34.98194, 34.66895, 34.62534, 34.86162, 34.29413, 34.28452, 34.10887, 33.74434, 34.23214, 33.9851, 33.71283,
   33.57222, 34.11354, 33.48641, 33.08821, 33.21254, 32.95938, 32.95691, 32.77498, 32.95379, 32.98475, 33.3187, 33.05467, 32.52299, 32.69636, 32.69483, 32.47211,
   32.17968, 32.34715, 31.87144, 31.87983, 32.09956, 31.91393, 31.3232, 31.68877, 31.85234, 31.73283, 31.51038, 31.26605, 31.59524, 31.27992, 31.36573, 31.33178,
   31.36962, 30.92187, 30.96342, 30.89543, 31.0184, 30.94903, 30.84788, 30.77426, 30.67267, 30.62197, 30.28066, 30.31098, 30.38352, 30.22819, 30.09115, 30.40684,
   30.09692, 30.09006, 29.93453, 29.98057, 29.93713, 30.14, 29.57386, 29.6242, 29.49975, 29.34548, 29.34709, 29.55626, 29.31819, 29.28282, 29.2963, 29.06074,
   29.17698, 28.98219, 29.0329, 29.03525, 28.68011, 28.95951, 28.94278, 28.84446, 28.46304, 29.00537, 28.45654, 28.4839, 28.34243, 28.96236, 28.78548, 28.28198,
   28.64781, 28.06004, 28.3719, 28.17224, 28.0897, 27.95745, 27.93716, 27.8479, 27.74936, 27.96786, 28.04822, 27.60401, 27.90146, 27.70054, 27.61043, 27.46327,
   27.36068, 27.33183, 27.10662, 27.3134, 27.13049, 27.11399, 27.45251, 27.1352, 26.80954, 27.25596, 27.04301, 26.84632, 26.55395, 27.01467, 26.69052, 26.38278,
   26.56179, 26.59836, 25.93718, 26.49263, 26.0923, 26.37276, 26.02655, 26.15891, 26.22431, 26.34129, 26.09151, 25.93245, 26.09777, 25.62448, 25.80819, 25.64019,
   25.24748, 26.00578, 25.74918, 25.57826, 25.67459, 25.50096, 25.37169, 25.21427, 25.5426, 25.10664, 25.48619, 25.14159, 24.83189, 25.12694, 25.23433, 24.79325,
   24.80632, 24.64423, 24.85901, 24.8956, 24.88765, 24.62371, 24.47797, 24.52977, 24.44536, 24.50852, 24.76151, 24.33206, 24.64015, 24.31153, 24.0593, 24.38251,
   24.04091, 24.09454, 24.06226, 24.19812, 23.83409, 23.96617, 23.72726, 23.93316, 23.80792, 23.72349, 23.74252, 23.7681, 23.63875, 23.46509, 23.62186, 23.79952,
   23.53567, 23.33067, 23.39364, 23.58489, 23.41649, 23.03902, 22.99707, 23.26945, 23.27618, 22.71709, 23.14165, 22.76264, 23.0803, 22.83922, 22.61606, 22.65768,
   22.53419, 22.6278, 22.33622, 22.82471, 22.43387, 22.49715, 22.19433, 22.68892, 22.21093, 22.54618, 22.17615, 22.32801, 22.39046, 22.47354, 21.99281, 21.75542,
   21.94855, 21.76443, 22.03566, 21.76513, 21.88007, 21.80627, 21.9537, 21.92795, 21.73205, 21.63166, 21.74547, 21.23824, 21.55092, 21.50787, 21.4274, 21.44154,
   21.17607, 21.44033, 20.93124, 21.33712, 21.0529, 21.17221, 21.11517, 21.14289, 21.32529, 20.88486, 21.03996, 21.07674, 21.18673, 20.56631, 20.62647, 20.89476,
   20.65659, 20.70609, 20.72431, 20.23417, 20.69722, 21.19244, 20.69397, 20.42443, 20.34988, 20.51534, 20.04778, 20.3997, 20.51091, 20.28153, 20.15169, 20.28648,
   20.21186, 20.00647, 20.01035, 19.89695, 20.04088, 19.86147, 20.00049, 19.90857, 20.21701, 19.89614, 19.50644, 19.38765, 19.71546, 19.87031, 19.69665, 19.67387,
   19.37193, 19.63822, 19.70634, 19.09985, 19.4944, 19.25648, 19.61218, 19.46337, 19.09348, 19.15634, 19.04926, 19.0491, 18.86408, 19.13513, 19.441, 18.95388,
   18.7507, 18.75877, 18.62098, 18.73562, 18.66062, 18.74169, 19.02062, 18.97235, 18.68929, 18.76287, 18.24658, 18.4274, 18.68094, 18.55373, 18.43632, 18.48712,
   18.54677, 18.33424, 17.93923, 18.13072, 18.16503, 18.04005, 17.843, 18.26296, 17.96284, 17.92176, 18.10973, 18.12152, 17.95225, 17.97054, 17.91127, 17.83025,
   17.91628, 17.42843, 17.97569, 17.52695, 17.73584, 17.99649, 17.52115, 17.36279, 17.25882, 17.68543, 17.41643, 17.04837, 17.02389, 17.03485, 17.52544, 17.27088,
   17.10622, 16.79278, 16.91355, 17.16885, 17.12962, 16.91916, 16.88348, 17.01154, 17.05283, 17.03338, 16.8385, 16.78858, 17.00802, 16.74569, 16.98016, 16.65899,
   16.77468, 16.77813, 16.65843, 16.1558, 16.38375, 16.2858, 16.44233, 15.91844, 17.00988, 16.37652, 16.75458, 16.26937, 16.18994, 16.21816, 16.25732, 16.20161,
   16.32952, 16.15651, 16.24551, 15.84984, 15.84351, 16.01372, 15.87777, 15.77118, 16.11399, 15.70987, 16.0453, 15.69605, 15.911, 15.84398, 15.64375, 15.63931,
   15.717, 15.63675, 15.81975, 15.3822, 15.76139, 15.27478, 15.33298, 15.18374, 15.33701, 15.44181, 15.54718, 14.95592, 15.08475, 15.07662, 15.14812, 15.22521,
   15.46465, 15.1765, 14.96422, 15.29923, 15.2673, 14.71293, 15.15049, 15.27436, 14.72005, 15.0161, 14.80513, 14.84262, 15.05333, 15.04539, 14.95834, 14.664,
   14.67043, 14.81622, 14.74312, 14.45292, 14.65946, 14.78959, 14.61027, 14.19128, 14.45524, 14.41752, 14.4796, 14.34923, 14.46961, 14.20475, 14.42232, 13.92282,
   14.11301, 14.30585, 14.12734, 13.79558, 14.34501, 13.96214, 13.98031, 14.18293, 13.57394, 13.97649, 13.94097, 13.73399, 13.82791, 14.23305, 13.93941, 13.65834,
   13.73304, 13.66103, 13.88202, 13.39144, 13.65071, 13.57884, 13.66738, 13.50257, 13.64342, 13.13267, 13.36659, 13.28664, 13.31862, 13.5588, 13.43946, 13.4508,
   13.50682, 13.40027, 13.11451, 12.74904, 13.0284, 13.0485, 13.20544, 13.57679, 13.00259, 13.12713, 13.31739, 12.96052, 13.25951, 12.41471, 12.96379, 12.9834,
   12.76479, 12.47309, 12.44288, 13.08775, 12.53498, 12.73397, 12.46552, 12.64794, 12.8348, 12.57406, 12.72994, 12.39799, 12.43762, 12.61188, 12.27606, 12.44129,
   12.36551, 12.32626, 12.59894, 11.99372, 12.32307, 12.29108, 12.34937, 12.36865, 12.22363, 12.36926, 12.18738, 12.20432, 12.11807, 12.43236, 11.85705, 11.78104,
   12.07007, 12.06844, 11.89468, 11.94007, 12.34159, 12.21843, 11.92266, 11.61232, 11.7768, 11.56833, 11.78602, 11.77807, 12.00396, 11.58886, 11.91117, 11.4726,
   11.7097, 11.71518, 11.83638, 11.34617, 12.12509, 11.47215, 11.53585, 11.76546, 11.78583, 11.71097, 11.26745, 11.47105, 11.41519, 11.40309, 11.19618, 10.89781,
   11.33693, 11.33397, 11.05982, 11.09972, 11.42183, 11.22024, 10.99518, 11.01581, 11.05828, 11.00661, 10.91727, 10.70166, 10.91818, 11.01226, 10.6969, 11.04474,
   10.9183, 11.36131, 11.01367, 10.78998, 10.8359, 10.98769, 10.7945, 10.58019, 10.61876, 10.78276, 10.62529, 10.75312, 10.65343, 10.64251, 10.33896, 10.39725,
   10.76492, 10.62423, 10.56431, 10.25876, 10.65226, 10.4304, 10.35939, 10.03064, 10.51692, 10.71363, 10.64333, 10.48323, 10.18689, 10.41941, 10.37037, 10.25378,
   10.00726, 10.29975, 10.12378, 9.908326, 9.844743, 10.05568, 10.02761, 10.35141, 10.40468, 10.35356, 9.967873, 10.16356, 10.28227, 10.17031, 9.99892, 9.90306,
   9.703326, 9.644093, 9.580795, 9.887821, 9.77899, 9.673714, 9.611659, 9.561575, 9.878313, 9.616694, 9.597927, 9.779862, 9.676347, 9.711662, 9.908759, 9.726402,
   9.861331, 9.317628, 9.652223, 9.549044, 9.619799, 9.753424, 9.491478, 9.499909, 9.312855, 8.851388, 9.481085, 9.135932, 9.473563, 9.140189, 9.167379, 8.978709,
   8.950194, 8.957932, 9.403985, 8.938911, 9.276334, 9.082937, 9.117701, 9.058792, 9.054321, 9.066113, 9.288824, 8.95895, 9.144312, 8.76652, 9.235254, 8.821876,
   8.655802, 9.082933, 8.725686, 9.238737, 9.126494, 8.642305, 8.991455, 8.938601, 8.806881, 9.135569, 8.633578, 8.69413, 9.135383, 8.866847, 8.620296, 8.961074,
   8.621836, 8.599037, 8.584369, 8.296871, 8.695694, 8.600665, 8.385968, 8.273003, 8.594156, 8.693271, 8.405794, 8.649692, 8.234481, 8.211871, 8.411703, 8.476915,
   8.377198, 8.312367, 8.186582, 8.120214, 8.274095, 8.042936, 8.302654, 8.308647, 8.562044, 8.362539, 8.075266, 8.321518, 7.974671, 7.930439, 7.796399, 8.138595,
   8.34758, 7.782686, 8.09191, 8.112837, 8.179721, 7.695202, 8.11884, 7.63673, 8.047088, 8.052403, 7.605517, 8.42171, 7.877191, 7.871717, 7.984984, 7.710167,
   8.142771, 7.840628, 7.822777, 8.064187, 7.607455, 7.829471, 7.463789, 7.864597, 7.370187, 8.024518, 7.944234, 7.603488, 7.804325, 7.791033, 7.474709, 7.596817,
   7.584292, 7.459724, 7.515432, 7.649108, 7.402008, 7.509315, 7.454507, 7.48025, 7.413454, 7.456327, 7.63386, 7.493016, 7.551259, 7.244333, 7.296859, 7.253968,
   7.461337, 7.387985, 7.331522, 7.477428, 7.465958, 7.171472, 7.144551, 7.342638, 7.096527, 7.258677, 6.909301, 7.29521, 7.125649, 7.750442, 6.980895, 7.028789,
   6.84487, 7.205013, 7.294836, 6.969394, 7.469989, 7.03733, 6.960622, 7.16376, 7.299211, 6.888594, 6.895802, 6.94617, 6.898346, 6.624855, 6.705016, 6.866369,
   7.167448, 6.767906, 6.845247, 6.763042, 6.617592, 6.92607, 6.597687, 6.924162, 6.490982, 6.69807, 6.41757, 6.860671, 6.703563, 6.491608, 6.834418, 6.551229,
   7.118562, 6.773482, 6.715041, 6.427489, 6.709055, 6.682263, 6.384859, 6.663488, 6.423746, 6.740197, 6.498235, 6.165282, 6.566512, 6.634705, 6.33585, 6.399632,
   6.454664, 6.111329, 6.604885, 6.333837, 6.630654, 6.580879, 6.279507 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_Z_mass_fx1023,Graph_from_VH_tagFirst_2b1c_Z_mass_fy1023,Graph_from_VH_tagFirst_2b1c_Z_mass_fex1023,Graph_from_VH_tagFirst_2b1c_Z_mass_fey1023);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1023 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1023","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1023->SetMinimum(-1417.841);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1023->SetMaximum(14725.54);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1023->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1023->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1023->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1023->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1023->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1023->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1023->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1023->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1023->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1023);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_Z_mass","Data (BTagCSV, 2016)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_mass_tagFirst_SR_16->cd();
  
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
   
   TH1D *data_mc_ratio__24 = new TH1D("data_mc_ratio__24","",1000,0,2000);
   data_mc_ratio__24->SetBinContent(1000,1.348227);
   data_mc_ratio__24->SetBinContent(1001,1.437968);
   data_mc_ratio__24->SetBinError(1000,0.1623074);
   data_mc_ratio__24->SetBinError(1001,0.009496028);
   data_mc_ratio__24->SetMinimum(0.4);
   data_mc_ratio__24->SetMaximum(1.6);
   data_mc_ratio__24->SetEntries(33.8436);
   data_mc_ratio__24->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__24->SetLineColor(ci);
   data_mc_ratio__24->SetLineWidth(2);
   data_mc_ratio__24->SetMarkerStyle(20);
   data_mc_ratio__24->SetMarkerSize(1.2);
   data_mc_ratio__24->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__24->GetXaxis()->SetRange(1,150);
   data_mc_ratio__24->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__24->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__24->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__24->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__24->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__24->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__24->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__24->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__24->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__24->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__24->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__24->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__24->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__24->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__24->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__24->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1024[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1024[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1024[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1024[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.005560541, 0.005568435, 0.005587323,
   0.005663454, 0.005770756, 0.005864829, 0.005968005, 0.006127247, 0.006319877, 0.00646384, 0.006717013, 0.006974801, 0.00712811, 0.007243133, 0.007377964, 0.007385744, 0.007389835, 0.007500737, 0.007424691,
   0.007356397, 0.007372117, 0.007320229, 0.007378044, 0.007343909, 0.00734727, 0.007326515, 0.007337223, 0.007325227, 0.007353646, 0.007460835, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1226985 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1024,Graph_from_mc_statistical_error_fy1024,Graph_from_mc_statistical_error_fex1024,Graph_from_mc_statistical_error_fey1024);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1024 = new TH1F("Graph_Graph_from_mc_statistical_error1024","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1024->SetMinimum(0.8527618);
   Graph_Graph_from_mc_statistical_error1024->SetMaximum(1.147238);
   Graph_Graph_from_mc_statistical_error1024->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1024->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1024->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1024->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1024->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1024->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1024->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1024->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1024->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1024);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagFirst_SR_16->cd();
   Z_mass_tagFirst_SR_16->Modified();
   Z_mass_tagFirst_SR_16->cd();
   Z_mass_tagFirst_SR_16->SetSelected(Z_mass_tagFirst_SR_16);
}
