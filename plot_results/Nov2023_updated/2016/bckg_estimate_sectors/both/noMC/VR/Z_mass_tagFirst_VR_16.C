#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagFirst_VR_16()
{
//=========Macro generated from canvas: Z_mass_tagFirst_VR_16/Z_mass_tagFirst_VR_16
//=========  (Mon Jan  8 11:15:25 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_tagFirst_VR_16 = new TCanvas("Z_mass_tagFirst_VR_16", "Z_mass_tagFirst_VR_16",0,0,600,600);
   Z_mass_tagFirst_VR_16->SetHighLightColor(2);
   Z_mass_tagFirst_VR_16->Range(0,0,1,1);
   Z_mass_tagFirst_VR_16->SetFillColor(0);
   Z_mass_tagFirst_VR_16->SetFillStyle(4000);
   Z_mass_tagFirst_VR_16->SetBorderMode(0);
   Z_mass_tagFirst_VR_16->SetBorderSize(2);
   Z_mass_tagFirst_VR_16->SetFrameFillStyle(1000);
   Z_mass_tagFirst_VR_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-63.05141,315.7258,62998.35);
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
   st->SetMaximum(56692.21);
   
   TH1F *st_stack_19 = new TH1F("st_stack_19","",1000,0,2000);
   st_stack_19->SetMinimum(0.01);
   st_stack_19->SetMaximum(56692.21);
   st_stack_19->SetDirectory(nullptr);
   st_stack_19->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_19->SetLineColor(ci);
   st_stack_19->SetLineWidth(0);
   st_stack_19->GetXaxis()->SetRange(1,150);
   st_stack_19->GetXaxis()->SetLabelFont(42);
   st_stack_19->GetXaxis()->SetTitleOffset(1);
   st_stack_19->GetXaxis()->SetTitleFont(42);
   st_stack_19->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_19->GetYaxis()->SetLabelFont(42);
   st_stack_19->GetYaxis()->SetLabelSize(0.05);
   st_stack_19->GetYaxis()->SetTitleSize(0.057);
   st_stack_19->GetYaxis()->SetTitleOffset(1.2);
   st_stack_19->GetYaxis()->SetTitleFont(42);
   st_stack_19->GetZaxis()->SetLabelFont(42);
   st_stack_19->GetZaxis()->SetTitleOffset(1);
   st_stack_19->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_19);
   
   
   TH1D *VH_tagFirst_2b1c_Z_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(26,21496.97);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(27,22900.18);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(28,24005.72);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(29,25079.79);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(30,25511.5);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(61,18470.61);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(62,18356.21);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(63,18138.13);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(64,17934.87);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(65,17938.57);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1000,97.74377);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1001,50511.32);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(12,0.9795671);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(13,2.867879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(14,6.966054);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(15,13.0743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(16,20.0444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(17,28.09936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(18,36.63147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(19,44.96721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(20,53.37389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(21,60.68687);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(22,68.67457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(23,75.07236);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(24,80.21094);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(25,84.85643);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(26,89.21362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(27,92.07931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(28,94.27575);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(29,96.36173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(30,97.18753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(31,98.69074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(32,98.79069);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(33,98.97576);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(34,98.81289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(35,98.36379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(36,98.08747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(37,97.83349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(38,97.56129);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(39,96.95877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(40,96.6522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(41,96.0768);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(42,95.20753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(43,94.84401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(44,94.40216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(45,93.72379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(46,92.94538);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(47,92.26892);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(48,90.92729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(49,90.20683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(50,89.63288);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(51,88.85258);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(52,87.86668);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(53,87.1099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(54,86.44249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(55,85.79225);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(56,85.1137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(57,84.77966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(58,84.36635);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(59,83.9314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(60,83.24921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(61,82.69576);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(62,82.43926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(63,81.9481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(64,81.48764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(65,81.49605);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(66,80.58774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(67,80.1032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(68,79.34753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(69,79.24381);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(70,79.2758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(71,78.51217);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(72,78.26297);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(73,77.8036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(74,77.68194);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(75,76.84185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(76,76.32726);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(77,76.04207);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(78,75.45029);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(79,75.20371);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(80,74.62825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(81,74.21012);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(82,73.54213);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(83,73.37418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(84,72.85015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(85,72.12682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(86,71.95271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(87,71.3078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(88,71.04105);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(89,70.41893);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(90,69.92275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(91,69.751);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(92,69.02796);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(93,68.2511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(94,67.98849);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(95,67.90275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(96,67.51099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(97,66.99224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(98,66.07749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(99,66.06815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(100,65.43228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(101,64.81554);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(102,64.64401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(103,64.02396);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(104,63.65679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(105,63.10311);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(106,62.8757);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(107,62.39092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(108,61.90125);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(109,61.37975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(110,61.36747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(111,60.68349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(112,60.60776);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(113,60.38117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(114,59.47997);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(115,59.18888);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(116,58.90566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(117,58.53565);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(118,58.1515);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(119,57.91411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(120,57.7102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(121,56.96669);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(122,56.97511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(123,56.48217);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(124,56.27185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(125,55.89789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(126,55.27646);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(127,55.05157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(128,54.83451);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(129,54.63541);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(130,54.2805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(131,53.89146);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(132,54.07555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(133,53.2479);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(134,53.24403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(135,52.85774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(136,52.29195);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(137,52.3653);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(138,52.39801);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(139,51.87744);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(140,51.80472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(141,51.34224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(142,51.26877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(143,50.98456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(144,50.26975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(145,50.18105);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(146,50.26157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(147,49.59855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(148,49.68967);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(149,49.33252);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(150,49.05386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(151,48.97136);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(152,48.36013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(153,48.46348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(154,48.50871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(155,47.93592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(156,48.05587);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(157,47.74968);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(158,47.4444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(159,47.14442);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(160,47.14732);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(161,47.00318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(162,46.83227);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(163,46.64456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(164,46.49297);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(165,46.7898);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(166,46.17641);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(167,45.99646);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(168,45.65696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(169,45.41915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(170,45.57582);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(171,45.12089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(172,45.40859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(173,44.98245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(174,44.65365);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(175,44.99311);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(176,44.74718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(177,44.28993);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(178,44.22954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(179,44.63983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(180,44.22799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(181,43.8623);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(182,43.80131);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(183,43.54551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(184,43.61157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(185,43.42572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(186,43.46674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(187,43.60999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(188,43.37203);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(189,43.46201);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(190,43.02137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(191,43.31668);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(192,42.88254);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(193,42.7625);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(194,42.65819);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(195,42.99906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(196,42.50367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(197,42.04973);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(198,42.15392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(199,42.44719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(200,41.63201);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(201,41.98611);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(202,41.71753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(203,41.96162);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(204,41.576);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(205,41.70439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(206,41.72246);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(207,41.48854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(208,41.4224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(209,41.34954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(210,41.4621);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(211,40.92802);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(212,40.88781);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(213,40.82407);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(214,41.09681);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(215,40.93472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(216,40.74676);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(217,40.67605);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(218,40.13323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(219,40.29344);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(220,39.96723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(221,40.22364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(222,39.94836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(223,39.9998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(224,39.8642);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(225,40.19296);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(226,39.9758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(227,39.81776);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(228,39.71434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(229,39.56911);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(230,39.40595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(231,39.49803);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(232,39.40073);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(233,38.9423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(234,39.14068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(235,38.87008);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(236,39.10038);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(237,38.75352);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(238,38.99507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(239,38.78358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(240,39.09688);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(241,38.48732);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(242,38.52114);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(243,38.39103);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(244,38.3946);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(245,38.54249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(246,38.23719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(247,38.38211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(248,38.00526);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(249,37.96195);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(250,37.98722);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(251,38.51936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(252,37.75738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(253,37.83536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(254,37.56812);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(255,37.89328);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(256,37.72287);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(257,37.33386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(258,37.52979);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(259,37.10552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(260,37.41455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(261,37.24932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(262,37.22907);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(263,37.07965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(264,36.92406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(265,36.97599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(266,36.62024);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(267,37.17933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(268,36.60152);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(269,36.84601);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(270,36.67635);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(271,36.52842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(272,36.41943);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(273,36.41943);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(274,36.312);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(275,36.28178);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(276,36.09808);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(277,36.21182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(278,36.04488);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(279,35.9954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(280,36.08099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(281,35.95349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(282,35.86569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(283,35.94395);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(284,35.7144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(285,35.47563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(286,35.38665);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(287,35.49688);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(288,35.70288);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(289,35.31491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(290,35.19633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(291,35.39052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(292,34.8755);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(293,35.05584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(294,34.79286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(295,34.97754);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(296,34.88336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(297,34.78892);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(298,34.84011);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(299,34.86764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(300,34.69817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(301,34.39263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(302,34.60917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(303,34.36472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(304,34.12856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(305,34.34078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(306,33.97156);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(307,34.40857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(308,34.31283);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(309,34.10445);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(310,33.99374);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(311,33.66756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(312,33.6757);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(313,33.70825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(314,34.11249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(315,33.46337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(316,33.72045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(317,33.37312);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(318,33.12162);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(319,33.40186);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(320,33.35875);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(321,33.18158);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(322,32.99307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(323,33.09471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(324,33.32997);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(325,33.23936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(326,33.04497);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(327,32.64851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(328,32.74493);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(329,32.87236);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(330,32.6149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(331,32.37021);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(332,32.68837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(333,32.48646);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(334,32.46746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(335,32.47591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(336,32.10445);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(337,32.44635);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(338,32.09804);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(339,32.10018);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(340,32.04462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(341,32.14925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(342,31.92461);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(343,31.8709);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(344,31.75671);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(345,32.10231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(346,31.84938);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(347,31.55536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(348,31.64212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(349,31.65944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(350,31.39203);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(351,31.34177);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(352,31.26733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(353,31.45311);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(354,31.28267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(355,31.12673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(356,31.01864);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(357,31.2037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(358,30.94785);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(359,30.75457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(360,30.79466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(361,31.03632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(362,30.58249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(363,30.39591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(364,30.61833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(365,30.16049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(366,30.5511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(367,30.31915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(368,30.29427);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(369,30.03752);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(370,29.97128);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(371,29.91863);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(372,29.91405);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(373,30.08312);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(374,29.95984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(375,29.70943);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(376,29.55678);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(377,29.64708);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(378,29.57069);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(379,29.94611);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(380,29.39867);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(381,29.70251);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(382,29.93009);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(383,29.87737);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(384,29.20218);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(385,29.174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(386,29.43362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(387,28.94759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(388,29.36368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(389,29.23502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(390,29.46621);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(391,28.94522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(392,29.2444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(393,28.93812);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(394,28.73847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(395,28.87647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(396,28.7647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(397,28.66205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(398,28.4677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(399,28.68596);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(400,28.38572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(401,28.44361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(402,28.28413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(403,28.5086);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(404,28.12374);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(405,28.28898);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(406,28.13349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(407,28.20891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(408,27.91091);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(409,27.95263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(410,28.1554);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(411,27.87651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(412,27.81251);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(413,28.26959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(414,27.82483);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(415,27.64443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(416,27.74836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(417,27.48529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(418,27.39788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(419,27.56);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(420,27.42288);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(421,27.18693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(422,27.43538);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(423,28.00896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(424,27.29763);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(425,27.24988);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(426,27.27251);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(427,27.44786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(428,27.05045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(429,26.98957);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(430,26.77796);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(431,26.83677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(432,26.97941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(433,26.81122);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(434,26.80355);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(435,26.51819);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(436,26.67795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(437,26.62137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(438,26.63682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(439,26.36266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(440,26.66768);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(441,26.66253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(442,26.63167);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(443,26.5466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(444,25.91691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(445,26.08036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(446,26.26628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(447,26.125);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(448,26.23495);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(449,26.08561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(450,26.02248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(451,25.81622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(452,25.77371);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(453,25.53593);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(454,25.74178);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(455,25.619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(456,25.85601);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(457,26.03301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(458,25.49564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(459,25.51983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(460,25.37438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(461,25.26882);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(462,25.27153);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(463,25.56544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(464,25.38518);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(465,25.12738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(466,25.20092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(467,24.93846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(468,24.85035);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(469,24.91646);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(470,24.89169);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(471,25.12192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(472,25.0755);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(473,24.93846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(474,24.73701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(475,24.58973);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(476,24.45277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(477,24.50876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(478,24.81447);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(479,24.66765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(480,24.57579);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(481,24.65653);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(482,24.48078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(483,24.3094);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(484,24.20768);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(485,24.21618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(486,23.93147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(487,23.95723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(488,23.88273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(489,24.16234);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(490,23.87986);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(491,23.84252);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(492,24.00867);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(493,23.85402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(494,23.83102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(495,23.91715);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(496,23.99725);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(497,23.87125);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(498,23.70992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(499,23.0295);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(500,23.59981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(501,23.45708);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(502,23.61723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(503,23.49795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(504,23.35752);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(505,23.05924);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(506,22.90416);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(507,23.19852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(508,23.1512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(509,22.76007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(510,22.87422);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(511,22.6907);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(512,23.37512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(513,22.85323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(514,22.62112);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(515,22.527);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(516,22.65443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(517,22.92211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(518,22.68164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(519,22.52092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(520,22.46302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(521,22.76308);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(522,22.66048);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(523,22.61203);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(524,22.1527);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(525,22.20832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(526,22.56956);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(527,22.31301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(528,22.77813);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(529,22.12174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(530,22.19289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(531,22.08453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(532,21.95692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(533,21.4772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(534,21.9163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(535,22.05658);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(536,21.8944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(537,21.5059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(538,22.10934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(539,21.85994);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(540,22.14651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(541,21.69312);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(542,21.51228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(543,21.47082);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(544,21.36522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(545,21.57273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(546,21.53457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(547,21.29774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(548,21.25264);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(549,21.24619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(550,21.10052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(551,21.02242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(552,21.23328);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(553,20.87191);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(554,21.18481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(555,20.86862);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(556,21.19128);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(557,20.90472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(558,21.24296);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(559,20.97999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(560,20.76986);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(561,20.83904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(562,20.90144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(563,20.4774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(564,20.88176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(565,20.59755);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(566,20.76986);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(567,20.32286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(568,20.42043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(569,20.38011);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(570,20.48075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(571,20.62083);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(572,20.65736);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(573,20.07857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(574,20.32623);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(575,19.92436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(576,20.09222);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(577,20.24852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(578,20.34982);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(579,20.03756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(580,20.0273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(581,20.24175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(582,20.20447);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(583,19.62979);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(584,19.77243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(585,20.06491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(586,19.8658);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(587,19.54932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(588,19.58784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(589,19.52827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(590,19.6228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(591,19.70645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(592,19.73773);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(593,19.25968);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(594,19.48611);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(595,19.29879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(596,19.52827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(597,19.03056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(598,19.37676);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(599,19.51422);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(600,19.15978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(601,18.91858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(602,19.04856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(603,19.09887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(604,18.95116);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(605,19.15262);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(606,18.94393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(607,18.7585);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(608,18.90046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(609,18.86416);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(610,18.7146);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(611,18.81687);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(612,18.42673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(613,18.34845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(614,18.54537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(615,18.77676);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(616,18.56384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(617,18.46017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(618,18.18335);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(619,18.39695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(620,18.29982);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(621,18.31854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(622,18.26608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(623,18.43045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(624,18.35965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(625,18.10402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(626,18.21724);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(627,18.11159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(628,18.32602);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(629,18.04334);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(630,18.38577);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(631,18.00912);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(632,17.63221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(633,17.83704);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(634,17.94431);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(635,17.48779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(636,17.83704);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(637,17.65552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(638,17.48779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(639,17.87159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(640,17.60498);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(641,17.53476);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(642,17.75616);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(643,17.69429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(644,17.36192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(645,17.25898);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(646,17.41317);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(647,17.36982);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(648,17.33427);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(649,17.73299);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(650,17.24706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(651,17.27882);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(652,17.40529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(653,17.23116);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(654,17.26295);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(655,16.68143);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(656,16.80016);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(657,17.46426);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(658,16.88967);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(659,16.79608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(660,16.66087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(661,17.33822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(662,16.87749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(663,16.68964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(664,16.69785);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(665,16.71016);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(666,16.65264);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(667,16.59905);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(668,16.6691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(669,16.55357);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(670,16.7634);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(671,16.47055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(672,16.19357);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(673,16.30745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(674,16.25694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(675,16.39547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(676,16.55771);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(677,15.99341);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(678,16.20626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(679,16.28642);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(680,16.32005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(681,16.42054);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(682,16.18934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(683,16.32425);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(684,16.18511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(685,16.1087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(686,16.0362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(687,16.18087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(688,15.86432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(689,15.63367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(690,15.86);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(691,15.62051);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(692,15.6249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(693,15.81673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(694,16.08315);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(695,15.78202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(696,15.79938);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(697,15.53251);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(698,15.55455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(699,15.26096);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(700,15.52809);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(701,15.6687);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(702,15.37729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(703,15.4129);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(704,15.58976);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(705,15.09387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(706,15.42624);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(707,15.41735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(708,15.30133);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(709,15.03017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(710,15.45287);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(711,15.20697);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(712,15.27891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(713,15.40846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(714,15.35499);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(715,15.34606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(716,14.9341);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(717,14.94327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(718,15.03473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(719,15.12563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(720,14.78187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(721,14.49627);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(722,14.92491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(723,14.74473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(724,14.59992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(725,14.76795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(726,14.82354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(727,14.82816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(728,14.71681);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(729,14.61399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(730,14.4584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(731,14.32983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(732,14.61868);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(733,14.22903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(734,14.42517);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(735,14.42992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(736,14.16144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(737,14.34895);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(738,14.3011);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(739,14.80503);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(740,14.18562);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(741,14.27712);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(742,14.26271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(743,14.3059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(744,14.32026);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(745,13.98612);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(746,13.92226);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(747,14.17595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(748,13.90749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(749,14.0106);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(750,14.02527);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(751,13.85812);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(752,13.72393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(753,13.91734);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(754,13.87789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(755,14.05943);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(756,13.76383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(757,13.62368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(758,13.83832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(759,13.81353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(760,13.65383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(761,13.64379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(762,13.81353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(763,13.93703);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(764,13.77876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(765,13.83832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(766,13.72393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(767,13.62871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(768,13.23063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(769,13.69393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(770,13.05331);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(771,13.55812);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(772,13.34411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(773,13.18393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(774,13.17873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(775,13.16832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(776,13.28749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(777,13.62368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(778,13.13706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(779,13.52776);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(780,13.19432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(781,13.39538);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(782,13.19951);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(783,13.28749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(784,13.29781);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(785,12.97959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(786,12.88951);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(787,12.6317);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(788,12.60454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(789,13.10571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(790,13.03229);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(791,12.84157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(792,12.8095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(793,12.75051);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(794,13.01651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(795,12.85757);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(796,12.61541);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(797,12.93728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(798,12.85757);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(799,13.02177);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(800,12.93728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(801,12.62627);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(802,12.90014);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(803,12.42931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(804,12.48982);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(805,12.43483);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(806,12.51723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(807,12.60454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(808,12.13353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(809,12.70204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(810,12.44034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(811,12.09393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(812,12.29626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(813,12.20675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(814,12.26277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(815,12.13353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(816,12.14483);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(817,11.81877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(818,11.64349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(819,11.76063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(820,12.34632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(821,11.93993);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(822,12.24039);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(823,12.13353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(824,12.09959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(825,11.83615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(826,11.71392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(827,12.07691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(828,12.08259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(829,11.96287);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(830,11.87662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(831,11.80717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(832,11.79555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(833,11.90544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(834,11.50135);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(835,11.63172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(836,11.63172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(837,11.87662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(838,11.75481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(839,11.50135);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(840,11.74314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(841,11.78974);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(842,11.47749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(843,11.93993);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(844,11.31511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(845,11.67876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(846,11.68463);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(847,11.4056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(848,11.33931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(849,11.36346);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(850,11.28478);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(851,11.08872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(852,11.29692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(853,11.06397);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(854,11.48943);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(855,11.15036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(856,11.02052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(857,11.23608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(858,11.28478);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(859,11.33326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(860,10.87023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(861,11.24828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(862,11.15036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(863,10.83233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(864,10.97065);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(865,11.1933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(866,10.95189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(867,10.69864);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(868,10.87023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(869,10.7816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(870,10.7943);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(871,10.9644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(872,11.11342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(873,10.76888);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(874,10.63438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(875,11.00185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(876,10.81967);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(877,10.87654);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(878,10.74976);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(879,10.6537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(880,10.55676);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(881,10.69223);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(882,10.68582);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(883,10.52424);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(884,10.59564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(885,10.64082);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(886,10.62148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(887,10.34028);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(888,10.47856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(889,10.13272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(890,10.6537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(891,10.4261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(892,10.28046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(893,10.71144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(894,10.23368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(895,10.36676);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(896,10.54376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(897,10.16649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(898,10.4261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(899,10.37337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(900,10.28712);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(901,10.46547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(902,10.15974);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(903,10.08526);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(904,9.962182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(905,10.20686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(906,9.913905);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(907,10.19342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(908,10.22028);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(909,10.0444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(910,10.34691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(911,10.09884);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(912,9.704285);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(913,9.927722);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(914,9.9828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(915,9.604897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(916,9.788672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(917,10.13948);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(918,9.920816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(919,9.858442);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(920,9.941521);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(921,9.837563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(922,9.704285);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(923,9.872337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(924,9.781667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(925,9.920816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(926,9.948412);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(927,9.597758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(928,9.561986);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(929,9.410256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(930,9.690149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(931,9.31509);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(932,9.482811);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(933,9.74657);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(934,9.683074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(935,9.263441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(936,9.189154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(937,9.767643);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(938,9.475581);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(939,9.475581);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(940,9.211503);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(941,9.256039);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(942,9.189154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(943,9.583465);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(944,9.270837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(945,9.270837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(946,9.106739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(947,9.19661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(948,9.583465);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(949,9.329794);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(950,9.511678);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(951,9.395678);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(952,9.084132);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(953,9.344475);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(954,9.461103);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(955,9.015971);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(956,9.129289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(957,9.144292);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(958,9.218941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(959,8.808326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(960,8.916598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(961,9.076584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(962,9.233798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(963,8.885798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(964,8.970243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(965,8.79275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(966,8.769334);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(967,8.924281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(968,8.800542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(969,8.722313);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(970,8.475217);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(971,8.467126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(972,8.531638);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(973,8.698707);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(974,8.579704);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(975,8.571712);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(976,8.954949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(977,8.619555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(978,9.084132);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(979,8.878081);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(980,8.595667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(981,8.675037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(982,8.870358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(983,8.426555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(984,8.499443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(985,8.611599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(986,8.515556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(987,8.79275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(988,8.555705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(989,8.00955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(990,8.515556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(991,8.667133);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(992,8.170519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(993,8.442807);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(994,8.587689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(995,7.983837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(996,8.507504);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(997,8.426555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(998,8.753688);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(999,8.579704);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1000,8.320145);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1001,136.753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetEntries(9237222);

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
   
   TH1D *VH_tagFirst_Z_mass__37 = new TH1D("VH_tagFirst_Z_mass__37","",1000,0,2000);
   VH_tagFirst_Z_mass__37->SetBinContent(26,21480);
   VH_tagFirst_Z_mass__37->SetBinContent(27,22743);
   VH_tagFirst_Z_mass__37->SetBinContent(28,24065);
   VH_tagFirst_Z_mass__37->SetBinContent(29,24984);
   VH_tagFirst_Z_mass__37->SetBinContent(30,25395);
   VH_tagFirst_Z_mass__37->SetBinContent(61,18928);
   VH_tagFirst_Z_mass__37->SetBinContent(62,18825);
   VH_tagFirst_Z_mass__37->SetBinContent(63,18522);
   VH_tagFirst_Z_mass__37->SetBinContent(64,18732);
   VH_tagFirst_Z_mass__37->SetBinContent(65,18377);
   VH_tagFirst_Z_mass__37->SetBinContent(1000,110);
   VH_tagFirst_Z_mass__37->SetBinContent(1001,60794);
   VH_tagFirst_Z_mass__37->SetEntries(3573384);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_mass__37->SetLineColor(ci);
   VH_tagFirst_Z_mass__37->SetLineWidth(2);
   VH_tagFirst_Z_mass__37->SetMarkerStyle(20);
   VH_tagFirst_Z_mass__37->SetMarkerSize(1.2);
   VH_tagFirst_Z_mass__37->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_Z_mass__37->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__37->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__37->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__37->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__37->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__37->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__37->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__37->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__37->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fx1037[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fy1037[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 21496.97, 22900.18, 24005.72, 25079.79, 25511.5, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18470.61, 18356.21, 18138.13, 17934.87, 17938.57,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 97.74377 };
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fex1037[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fey1037[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.9795671, 2.867879, 6.966054, 13.0743, 20.0444, 28.09936,
   36.63147, 44.96721, 53.37389, 60.68687, 68.67457, 75.07236, 80.21094, 84.85643, 89.21362, 92.07931, 94.27575, 96.36173, 97.18753, 98.69074, 98.79069, 98.97576,
   98.81289, 98.36379, 98.08747, 97.83349, 97.56129, 96.95877, 96.6522, 96.0768, 95.20753, 94.84401, 94.40216, 93.72379, 92.94538, 92.26892, 90.92729, 90.20683,
   89.63288, 88.85258, 87.86668, 87.1099, 86.44249, 85.79225, 85.1137, 84.77966, 84.36635, 83.9314, 83.24921, 82.69576, 82.43926, 81.9481, 81.48764, 81.49605,
   80.58774, 80.1032, 79.34753, 79.24381, 79.2758, 78.51217, 78.26297, 77.8036, 77.68194, 76.84185, 76.32726, 76.04207, 75.45029, 75.20371, 74.62825, 74.21012,
   73.54213, 73.37418, 72.85015, 72.12682, 71.95271, 71.3078, 71.04105, 70.41893, 69.92275, 69.751, 69.02796, 68.2511, 67.98849, 67.90275, 67.51099, 66.99224,
   66.07749, 66.06815, 65.43228, 64.81554, 64.64401, 64.02396, 63.65679, 63.10311, 62.8757, 62.39092, 61.90125, 61.37975, 61.36747, 60.68349, 60.60776, 60.38117,
   59.47997, 59.18888, 58.90566, 58.53565, 58.1515, 57.91411, 57.7102, 56.96669, 56.97511, 56.48217, 56.27185, 55.89789, 55.27646, 55.05157, 54.83451, 54.63541,
   54.2805, 53.89146, 54.07555, 53.2479, 53.24403, 52.85774, 52.29195, 52.3653, 52.39801, 51.87744, 51.80472, 51.34224, 51.26877, 50.98456, 50.26975, 50.18105,
   50.26157, 49.59855, 49.68967, 49.33252, 49.05386, 48.97136, 48.36013, 48.46348, 48.50871, 47.93592, 48.05587, 47.74968, 47.4444, 47.14442, 47.14732, 47.00318,
   46.83227, 46.64456, 46.49297, 46.7898, 46.17641, 45.99646, 45.65696, 45.41915, 45.57582, 45.12089, 45.40859, 44.98245, 44.65365, 44.99311, 44.74718, 44.28993,
   44.22954, 44.63983, 44.22799, 43.8623, 43.80131, 43.54551, 43.61157, 43.42572, 43.46674, 43.60999, 43.37203, 43.46201, 43.02137, 43.31668, 42.88254, 42.7625,
   42.65819, 42.99906, 42.50367, 42.04973, 42.15392, 42.44719, 41.63201, 41.98611, 41.71753, 41.96162, 41.576, 41.70439, 41.72246, 41.48854, 41.4224, 41.34954,
   41.4621, 40.92802, 40.88781, 40.82407, 41.09681, 40.93472, 40.74676, 40.67605, 40.13323, 40.29344, 39.96723, 40.22364, 39.94836, 39.9998, 39.8642, 40.19296,
   39.9758, 39.81776, 39.71434, 39.56911, 39.40595, 39.49803, 39.40073, 38.9423, 39.14068, 38.87008, 39.10038, 38.75352, 38.99507, 38.78358, 39.09688, 38.48732,
   38.52114, 38.39103, 38.3946, 38.54249, 38.23719, 38.38211, 38.00526, 37.96195, 37.98722, 38.51936, 37.75738, 37.83536, 37.56812, 37.89328, 37.72287, 37.33386,
   37.52979, 37.10552, 37.41455, 37.24932, 37.22907, 37.07965, 36.92406, 36.97599, 36.62024, 37.17933, 36.60152, 36.84601, 36.67635, 36.52842, 36.41943, 36.41943,
   36.312, 36.28178, 36.09808, 36.21182, 36.04488, 35.9954, 36.08099, 35.95349, 35.86569, 35.94395, 35.7144, 35.47563, 35.38665, 35.49688, 35.70288, 35.31491,
   35.19633, 35.39052, 34.8755, 35.05584, 34.79286, 34.97754, 34.88336, 34.78892, 34.84011, 34.86764, 34.69817, 34.39263, 34.60917, 34.36472, 34.12856, 34.34078,
   33.97156, 34.40857, 34.31283, 34.10445, 33.99374, 33.66756, 33.6757, 33.70825, 34.11249, 33.46337, 33.72045, 33.37312, 33.12162, 33.40186, 33.35875, 33.18158,
   32.99307, 33.09471, 33.32997, 33.23936, 33.04497, 32.64851, 32.74493, 32.87236, 32.6149, 32.37021, 32.68837, 32.48646, 32.46746, 32.47591, 32.10445, 32.44635,
   32.09804, 32.10018, 32.04462, 32.14925, 31.92461, 31.8709, 31.75671, 32.10231, 31.84938, 31.55536, 31.64212, 31.65944, 31.39203, 31.34177, 31.26733, 31.45311,
   31.28267, 31.12673, 31.01864, 31.2037, 30.94785, 30.75457, 30.79466, 31.03632, 30.58249, 30.39591, 30.61833, 30.16049, 30.5511, 30.31915, 30.29427, 30.03752,
   29.97128, 29.91863, 29.91405, 30.08312, 29.95984, 29.70943, 29.55678, 29.64708, 29.57069, 29.94611, 29.39867, 29.70251, 29.93009, 29.87737, 29.20218, 29.174,
   29.43362, 28.94759, 29.36368, 29.23502, 29.46621, 28.94522, 29.2444, 28.93812, 28.73847, 28.87647, 28.7647, 28.66205, 28.4677, 28.68596, 28.38572, 28.44361,
   28.28413, 28.5086, 28.12374, 28.28898, 28.13349, 28.20891, 27.91091, 27.95263, 28.1554, 27.87651, 27.81251, 28.26959, 27.82483, 27.64443, 27.74836, 27.48529,
   27.39788, 27.56, 27.42288, 27.18693, 27.43538, 28.00896, 27.29763, 27.24988, 27.27251, 27.44786, 27.05045, 26.98957, 26.77796, 26.83677, 26.97941, 26.81122,
   26.80355, 26.51819, 26.67795, 26.62137, 26.63682, 26.36266, 26.66768, 26.66253, 26.63167, 26.5466, 25.91691, 26.08036, 26.26628, 26.125, 26.23495, 26.08561,
   26.02248, 25.81622, 25.77371, 25.53593, 25.74178, 25.619, 25.85601, 26.03301, 25.49564, 25.51983, 25.37438, 25.26882, 25.27153, 25.56544, 25.38518, 25.12738,
   25.20092, 24.93846, 24.85035, 24.91646, 24.89169, 25.12192, 25.0755, 24.93846, 24.73701, 24.58973, 24.45277, 24.50876, 24.81447, 24.66765, 24.57579, 24.65653,
   24.48078, 24.3094, 24.20768, 24.21618, 23.93147, 23.95723, 23.88273, 24.16234, 23.87986, 23.84252, 24.00867, 23.85402, 23.83102, 23.91715, 23.99725, 23.87125,
   23.70992, 23.0295, 23.59981, 23.45708, 23.61723, 23.49795, 23.35752, 23.05924, 22.90416, 23.19852, 23.1512, 22.76007, 22.87422, 22.6907, 23.37512, 22.85323,
   22.62112, 22.527, 22.65443, 22.92211, 22.68164, 22.52092, 22.46302, 22.76308, 22.66048, 22.61203, 22.1527, 22.20832, 22.56956, 22.31301, 22.77813, 22.12174,
   22.19289, 22.08453, 21.95692, 21.4772, 21.9163, 22.05658, 21.8944, 21.5059, 22.10934, 21.85994, 22.14651, 21.69312, 21.51228, 21.47082, 21.36522, 21.57273,
   21.53457, 21.29774, 21.25264, 21.24619, 21.10052, 21.02242, 21.23328, 20.87191, 21.18481, 20.86862, 21.19128, 20.90472, 21.24296, 20.97999, 20.76986, 20.83904,
   20.90144, 20.4774, 20.88176, 20.59755, 20.76986, 20.32286, 20.42043, 20.38011, 20.48075, 20.62083, 20.65736, 20.07857, 20.32623, 19.92436, 20.09222, 20.24852,
   20.34982, 20.03756, 20.0273, 20.24175, 20.20447, 19.62979, 19.77243, 20.06491, 19.8658, 19.54932, 19.58784, 19.52827, 19.6228, 19.70645, 19.73773, 19.25968,
   19.48611, 19.29879, 19.52827, 19.03056, 19.37676, 19.51422, 19.15978, 18.91858, 19.04856, 19.09887, 18.95116, 19.15262, 18.94393, 18.7585, 18.90046, 18.86416,
   18.7146, 18.81687, 18.42673, 18.34845, 18.54537, 18.77676, 18.56384, 18.46017, 18.18335, 18.39695, 18.29982, 18.31854, 18.26608, 18.43045, 18.35965, 18.10402,
   18.21724, 18.11159, 18.32602, 18.04334, 18.38577, 18.00912, 17.63221, 17.83704, 17.94431, 17.48779, 17.83704, 17.65552, 17.48779, 17.87159, 17.60498, 17.53476,
   17.75616, 17.69429, 17.36192, 17.25898, 17.41317, 17.36982, 17.33427, 17.73299, 17.24706, 17.27882, 17.40529, 17.23116, 17.26295, 16.68143, 16.80016, 17.46426,
   16.88967, 16.79608, 16.66087, 17.33822, 16.87749, 16.68964, 16.69785, 16.71016, 16.65264, 16.59905, 16.6691, 16.55357, 16.7634, 16.47055, 16.19357, 16.30745,
   16.25694, 16.39547, 16.55771, 15.99341, 16.20626, 16.28642, 16.32005, 16.42054, 16.18934, 16.32425, 16.18511, 16.1087, 16.0362, 16.18087, 15.86432, 15.63367,
   15.86, 15.62051, 15.6249, 15.81673, 16.08315, 15.78202, 15.79938, 15.53251, 15.55455, 15.26096, 15.52809, 15.6687, 15.37729, 15.4129, 15.58976, 15.09387,
   15.42624, 15.41735, 15.30133, 15.03017, 15.45287, 15.20697, 15.27891, 15.40846, 15.35499, 15.34606, 14.9341, 14.94327, 15.03473, 15.12563, 14.78187, 14.49627,
   14.92491, 14.74473, 14.59992, 14.76795, 14.82354, 14.82816, 14.71681, 14.61399, 14.4584, 14.32983, 14.61868, 14.22903, 14.42517, 14.42992, 14.16144, 14.34895,
   14.3011, 14.80503, 14.18562, 14.27712, 14.26271, 14.3059, 14.32026, 13.98612, 13.92226, 14.17595, 13.90749, 14.0106, 14.02527, 13.85812, 13.72393, 13.91734,
   13.87789, 14.05943, 13.76383, 13.62368, 13.83832, 13.81353, 13.65383, 13.64379, 13.81353, 13.93703, 13.77876, 13.83832, 13.72393, 13.62871, 13.23063, 13.69393,
   13.05331, 13.55812, 13.34411, 13.18393, 13.17873, 13.16832, 13.28749, 13.62368, 13.13706, 13.52776, 13.19432, 13.39538, 13.19951, 13.28749, 13.29781, 12.97959,
   12.88951, 12.6317, 12.60454, 13.10571, 13.03229, 12.84157, 12.8095, 12.75051, 13.01651, 12.85757, 12.61541, 12.93728, 12.85757, 13.02177, 12.93728, 12.62627,
   12.90014, 12.42931, 12.48982, 12.43483, 12.51723, 12.60454, 12.13353, 12.70204, 12.44034, 12.09393, 12.29626, 12.20675, 12.26277, 12.13353, 12.14483, 11.81877,
   11.64349, 11.76063, 12.34632, 11.93993, 12.24039, 12.13353, 12.09959, 11.83615, 11.71392, 12.07691, 12.08259, 11.96287, 11.87662, 11.80717, 11.79555, 11.90544,
   11.50135, 11.63172, 11.63172, 11.87662, 11.75481, 11.50135, 11.74314, 11.78974, 11.47749, 11.93993, 11.31511, 11.67876, 11.68463, 11.4056, 11.33931, 11.36346,
   11.28478, 11.08872, 11.29692, 11.06397, 11.48943, 11.15036, 11.02052, 11.23608, 11.28478, 11.33326, 10.87023, 11.24828, 11.15036, 10.83233, 10.97065, 11.1933,
   10.95189, 10.69864, 10.87023, 10.7816, 10.7943, 10.9644, 11.11342, 10.76888, 10.63438, 11.00185, 10.81967, 10.87654, 10.74976, 10.6537, 10.55676, 10.69223,
   10.68582, 10.52424, 10.59564, 10.64082, 10.62148, 10.34028, 10.47856, 10.13272, 10.6537, 10.4261, 10.28046, 10.71144, 10.23368, 10.36676, 10.54376, 10.16649,
   10.4261, 10.37337, 10.28712, 10.46547, 10.15974, 10.08526, 9.962182, 10.20686, 9.913905, 10.19342, 10.22028, 10.0444, 10.34691, 10.09884, 9.704285, 9.927722,
   9.9828, 9.604897, 9.788672, 10.13948, 9.920816, 9.858442, 9.941521, 9.837563, 9.704285, 9.872337, 9.781667, 9.920816, 9.948412, 9.597758, 9.561986, 9.410256,
   9.690149, 9.31509, 9.482811, 9.74657, 9.683074, 9.263441, 9.189154, 9.767643, 9.475581, 9.475581, 9.211503, 9.256039, 9.189154, 9.583465, 9.270837, 9.270837,
   9.106739, 9.19661, 9.583465, 9.329794, 9.511678, 9.395678, 9.084132, 9.344475, 9.461103, 9.015971, 9.129289, 9.144292, 9.218941, 8.808326, 8.916598, 9.076584,
   9.233798, 8.885798, 8.970243, 8.79275, 8.769334, 8.924281, 8.800542, 8.722313, 8.475217, 8.467126, 8.531638, 8.698707, 8.579704, 8.571712, 8.954949, 8.619555,
   9.084132, 8.878081, 8.595667, 8.675037, 8.870358, 8.426555, 8.499443, 8.611599, 8.515556, 8.79275, 8.555705, 8.00955, 8.515556, 8.667133, 8.170519, 8.442807,
   8.587689, 7.983837, 8.507504, 8.426555, 8.753688, 8.579704, 8.320145 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_Z_mass_fx1037,Graph_from_VH_tagFirst_2b1c_Z_mass_fy1037,Graph_from_VH_tagFirst_2b1c_Z_mass_fex1037,Graph_from_VH_tagFirst_2b1c_Z_mass_fey1037);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1037 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1037","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1037->SetMinimum(-2669.742);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1037->SetMaximum(28179.45);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1037->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1037->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1037->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1037->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1037->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1037->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1037->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1037->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1037->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1037->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1037);
   
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
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
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
   Z_mass_tagFirst_VR_16->cd();
  
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
   
   TH1D *data_mc_ratio__38 = new TH1D("data_mc_ratio__38","",1000,0,2000);
   data_mc_ratio__38->SetBinContent(26,0.9992108);
   data_mc_ratio__38->SetBinContent(27,0.9931362);
   data_mc_ratio__38->SetBinContent(28,1.002469);
   data_mc_ratio__38->SetBinContent(29,0.9961804);
   data_mc_ratio__38->SetBinContent(30,0.9954336);
   data_mc_ratio__38->SetBinContent(61,1.024763);
   data_mc_ratio__38->SetBinContent(62,1.025539);
   data_mc_ratio__38->SetBinContent(63,1.021163);
   data_mc_ratio__38->SetBinContent(64,1.044446);
   data_mc_ratio__38->SetBinContent(65,1.02444);
   data_mc_ratio__38->SetBinContent(1000,1.125391);
   data_mc_ratio__38->SetBinContent(1001,1.203572);
   data_mc_ratio__38->SetBinError(26,0.006817733);
   data_mc_ratio__38->SetBinError(27,0.006585442);
   data_mc_ratio__38->SetBinError(28,0.006462166);
   data_mc_ratio__38->SetBinError(29,0.006302415);
   data_mc_ratio__38->SetBinError(30,0.006246521);
   data_mc_ratio__38->SetBinError(61,0.007448539);
   data_mc_ratio__38->SetBinError(62,0.007474541);
   data_mc_ratio__38->SetBinError(63,0.007503283);
   data_mc_ratio__38->SetBinError(64,0.007631217);
   data_mc_ratio__38->SetBinError(65,0.007556999);
   data_mc_ratio__38->SetBinError(1000,0.1073019);
   data_mc_ratio__38->SetBinError(1001,0.005869047);
   data_mc_ratio__38->SetMinimum(0.4);
   data_mc_ratio__38->SetMaximum(1.6);
   data_mc_ratio__38->SetEntries(5924.943);
   data_mc_ratio__38->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__38->SetLineColor(ci);
   data_mc_ratio__38->SetLineWidth(2);
   data_mc_ratio__38->SetMarkerStyle(20);
   data_mc_ratio__38->SetMarkerSize(1.2);
   data_mc_ratio__38->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__38->GetXaxis()->SetRange(1,150);
   data_mc_ratio__38->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__38->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__38->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__38->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__38->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__38->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__38->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__38->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__38->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__38->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__38->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__38->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__38->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__38->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__38->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__38->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1038[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1038[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1038[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1038[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0.004150056, 0.004020899, 0.00392722, 0.003842206, 0.003809558, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.004477153, 0.004491083, 0.004518001, 0.004543531, 0.004543062,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.08512199 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1038,Graph_from_mc_statistical_error_fy1038,Graph_from_mc_statistical_error_fex1038,Graph_from_mc_statistical_error_fey1038);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1038 = new TH1F("Graph_Graph_from_mc_statistical_error1038","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1038->SetMinimum(0.8978536);
   Graph_Graph_from_mc_statistical_error1038->SetMaximum(1.102146);
   Graph_Graph_from_mc_statistical_error1038->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1038->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1038->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1038->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1038->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1038);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagFirst_VR_16->cd();
   Z_mass_tagFirst_VR_16->Modified();
   Z_mass_tagFirst_VR_16->cd();
   Z_mass_tagFirst_VR_16->SetSelected(Z_mass_tagFirst_VR_16);
}
