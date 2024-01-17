#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagFirst_SR_17()
{
//=========Macro generated from canvas: Z_mass_tagFirst_SR_17/Z_mass_tagFirst_SR_17
//=========  (Mon Jan  8 11:15:50 2024) by ROOT version 6.28/10
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
   topPad->Range(-45.96762,-24.36517,315.7258,24350.8);
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
   st->SetMaximum(21913.28);
   
   TH1F *st_stack_36 = new TH1F("st_stack_36","",1000,0,2000);
   st_stack_36->SetMinimum(0.01);
   st_stack_36->SetMaximum(21913.28);
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
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(31,9108.112);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(32,9385.232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(33,9662.353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(34,9603.373);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(35,9666.69);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(36,9775.977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(37,9860.977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(38,9794.625);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(39,9673.628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(40,9645.439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(41,9653.246);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(42,9605.975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(43,9414.289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(44,9465.463);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(45,9352.273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(46,9283.318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(47,8981.044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(48,8861.783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(49,8589.433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(50,8489.687);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(51,8285.858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(52,8043.865);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(53,8027.386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(54,7699.525);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(55,7645.749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(56,7576.36);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(57,7395.516);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(58,7272.352);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(59,7195.157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(60,7056.38);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1000,43.36783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1001,23361.82);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(12,0.9697342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(13,0.7511529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(14,2.491292);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(15,5.587554);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(16,8.972007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(17,13.23962);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(18,17.78081);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(19,22.75055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(20,27.12484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(21,32.27336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(22,36.906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(23,41.22454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(24,45.47423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(25,49.01524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(26,52.68254);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(27,55.20846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(28,57.80624);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(29,59.76899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(30,61.4233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(31,62.84895);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(32,63.7979);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(33,64.73294);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(34,64.53506);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(35,64.74746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(36,65.11243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(37,65.39489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(38,65.17451);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(39,64.77069);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(40,64.67625);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(41,64.70242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(42,64.54381);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(43,63.89658);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(44,64.07001);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(45,63.68577);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(46,63.45056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(47,62.40901);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(48,61.99325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(49,61.03319);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(50,60.67778);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(51,59.94495);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(52,59.0631);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(53,59.00257);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(54,57.78509);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(55,57.58294);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(56,57.32105);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(57,56.63281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(58,56.15925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(59,55.86039);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(60,55.31906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(61,54.99513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(62,54.67272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(63,54.4141);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(64,54.34839);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(65,54.07431);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(66,53.79185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(67,53.47801);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(68,52.90698);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(69,52.66291);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(70,52.38719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(71,52.08655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(72,51.74238);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(73,51.73875);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(74,51.74238);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(75,51.06735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(76,50.75519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(77,50.58258);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(78,50.32351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(79,49.85792);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(80,49.64622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(81,49.52295);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(82,49.15701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(83,49.1704);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(84,48.3702);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(85,48.17344);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(86,48.04248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(87,47.95235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(88,47.80504);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(89,47.26895);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(90,47.1893);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(91,46.43802);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(92,46.31636);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(93,46.06595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(94,46.10268);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(95,45.49697);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(96,45.56513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(97,45.13173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(98,45.06291);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(99,44.47265);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(100,44.25432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(101,43.91729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(102,43.59923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(103,43.57334);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(104,42.70355);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(105,42.85742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(106,42.50047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(107,42.41409);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(108,42.4717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(109,41.74365);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(110,41.46337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(111,41.82467);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(112,41.1149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(113,40.77499);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(114,40.53675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(115,40.48103);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(116,40.26441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(117,39.78984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(118,39.14652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(119,39.22092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(120,38.93456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(121,38.93214);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(122,38.50223);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(123,38.67039);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(124,38.34805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(125,37.63268);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(126,38.0477);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(127,37.59768);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(128,37.50252);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(129,37.23325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(130,36.89326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(131,36.56039);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(132,36.59639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(133,36.71696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(134,35.92469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(135,35.92731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(136,36.01358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(137,35.50075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(138,35.29086);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(139,35.37337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(140,35.47955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(141,35.14133);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(142,35.05022);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(143,34.6047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(144,34.74031);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(145,34.12583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(146,34.10377);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(147,33.86025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(148,33.90743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(149,33.75177);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(150,33.53935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(151,33.63734);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(152,33.66249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(153,33.0365);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(154,32.82518);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(155,32.96526);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(156,32.98522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(157,32.34903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(158,32.27627);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(159,31.81556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(160,32.37518);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(161,31.75047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(162,32.10098);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(163,31.55438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(164,31.75935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(165,31.95123);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(166,31.37206);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(167,31.37506);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(168,31.50069);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(169,30.99814);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(170,30.9526);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(171,30.88569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(172,30.29857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(173,30.5243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(174,30.32029);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(175,30.5243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(176,30.13674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(177,30.31408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(178,30.09927);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(179,30.45953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(180,29.9238);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(181,29.81992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(182,29.7473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(183,29.70301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(184,29.77889);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(185,29.54747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(186,29.27248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(187,29.53155);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(188,29.19528);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(189,29.02082);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(190,29.10818);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(191,28.96569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(192,29.15338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(193,28.82248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(194,28.8779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(195,29.27891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(196,28.71789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(197,28.56028);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(198,28.42827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(199,28.35208);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(200,27.98822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(201,28.18242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(202,28.45141);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(203,28.20243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(204,28.24907);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(205,28.27902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(206,28.18575);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(207,27.83999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(208,27.65358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(209,27.80957);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(210,27.50697);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(211,27.30107);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(212,28.03522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(213,27.82985);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(214,27.37675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(215,27.10403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(216,27.22174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(217,27.40765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(218,26.99626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(219,27.38362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(220,27.25971);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(221,26.92301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(222,27.2321);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(223,26.75834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(224,26.89155);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(225,26.45793);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(226,26.72317);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(227,26.80048);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(228,26.62093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(229,26.60326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(230,26.55372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(231,26.79346);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(232,26.75482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(233,26.42237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(234,26.2832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(235,25.95557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(236,26.67033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(237,26.14329);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(238,26.37606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(239,26.17205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(240,26.17205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(241,26.22947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(242,25.64576);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(243,25.28385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(244,25.91568);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(245,25.78837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(246,25.74457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(247,25.84301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(248,25.60172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(249,25.78472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(250,25.94469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(251,25.53552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(252,25.66775);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(253,25.43959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(254,25.53183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(255,25.27269);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(256,25.60539);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(257,24.9883);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(258,24.86758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(259,25.2019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(260,25.07846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(261,24.80701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(262,25.22428);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(263,25.20563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(264,25.08221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(265,24.66253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(266,24.82974);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(267,25.17576);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(268,25.49497);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(269,24.78046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(270,24.52105);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(271,24.75008);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(272,24.67016);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(273,24.8638);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(274,24.97324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(275,24.32854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(276,24.57468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(277,24.12671);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(278,24.35944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(279,24.74628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(280,24.31308);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(281,23.98598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(282,24.20453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(283,24.61674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(284,24.10721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(285,24.35558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(286,23.87201);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(287,24.17343);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(288,23.86019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(289,24.33627);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(290,23.88383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(291,24.11111);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(292,23.93889);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(293,23.79705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(294,23.65038);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(295,23.72977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(296,23.78124);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(297,23.76937);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(298,23.62651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(299,23.37442);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(300,23.44271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(301,23.53879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(302,23.62651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(303,23.3905);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(304,23.35832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(305,23.45073);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(306,23.04216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(307,22.85777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(308,23.35832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(309,23.45474);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(310,23.1805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(311,22.63452);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(312,22.9276);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(313,22.99313);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(314,23.25745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(315,23.06255);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(316,23.04624);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(317,23.04624);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(318,23.08701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(319,22.86188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(320,22.74228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(321,22.86599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(322,22.68017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(323,22.71746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(324,22.61789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(325,22.77947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(326,22.75055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(327,22.50118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(328,22.62621);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(329,22.57628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(330,22.38385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(331,22.78772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(332,22.67188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(333,22.24055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(334,22.9276);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(335,22.43421);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(336,22.29123);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(337,22.12185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(338,22.23632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(339,21.91256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(340,21.91256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(341,21.94687);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(342,22.31653);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(343,21.84809);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(344,22.26168);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(345,22.0452);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(346,22.29545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(347,21.8524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(348,21.45283);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(349,21.56214);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(350,21.42213);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(351,21.51849);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(352,22.0025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(353,21.19263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(354,21.65788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(355,21.46598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(356,21.55778);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(357,21.74887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(358,21.17931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(359,21.61006);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(360,21.21481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(361,21.20594);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(362,21.22367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(363,21.04122);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(364,21.21037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(365,21.00544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(366,21.14376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(367,20.88421);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(368,20.64418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(369,20.68059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(370,20.69423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(371,20.73962);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(372,21.23253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(373,20.42436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(374,20.66239);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(375,20.79396);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(376,20.63507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(377,20.44277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(378,20.91571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(379,20.89772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(380,20.44737);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(381,20.69423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(382,20.35518);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(383,20.63507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(384,20.55288);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(385,20.59401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(386,20.31819);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(387,20.32282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(388,20.00569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(389,20.03857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(390,20.05264);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(391,20.16488);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(392,19.89256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(393,19.84523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(394,20.05733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(395,19.8831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(396,19.60686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(397,19.77877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(398,19.6739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(399,20.40133);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(400,19.8689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(401,20.09948);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(402,19.42859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(403,19.59727);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(404,19.78353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(405,19.8547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(406,20.02448);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(407,19.66912);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(408,19.63083);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(409,19.75975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(410,19.14089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(411,19.77877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(412,19.58767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(413,19.10155);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(414,19.58767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(415,19.45278);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(416,19.54441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(417,19.19486);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(418,19.34614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(419,19.50106);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(420,19.46245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(421,19.28284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(422,19.32668);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(423,19.24379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(424,18.62799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(425,19.08677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(426,19.26332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(427,19.04238);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(428,19.30721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(429,19.02262);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(430,18.88369);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(431,18.51151);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(432,18.48101);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(433,18.6784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(434,18.84381);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(435,18.74875);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(436,18.86376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(437,18.14725);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(438,18.41985);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(439,18.55211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(440,17.88101);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(441,18.85877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(442,18.41985);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(443,18.14725);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(444,18.55718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(445,18.50135);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(446,18.32772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(447,18.28663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(448,18.41474);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(449,18.29691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(450,18.23513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(451,17.69599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(452,18.53182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(453,18.20933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(454,18.06935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(455,18.37384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(456,18.07456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(457,17.83889);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(458,17.92304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(459,17.58939);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(460,17.73845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(461,17.75435);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(462,18.00679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(463,17.98066);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(464,17.88627);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(465,17.41206);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(466,17.7861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(467,17.77023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(468,17.35255);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(469,17.77023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(470,17.60007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(471,17.36339);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(472,17.54656);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(473,17.06291);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(474,17.56799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(475,17.44983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(476,17.38504);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(477,17.36339);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(478,17.22746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(479,17.26563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(480,17.04637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(481,17.27107);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(482,16.89677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(483,17.45522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(484,16.85776);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(485,17.27107);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(486,17.39045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(487,17.29827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(488,16.61616);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(489,17.03533);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(490,16.58217);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(491,16.59351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(492,16.38822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(493,16.79629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(494,16.92457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(495,16.96342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(496,16.70647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(497,16.61616);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(498,16.71772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(499,16.47407);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(500,16.35376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(501,16.4455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(502,16.61616);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(503,16.62182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(504,16.52536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(505,16.46265);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(506,16.6783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(507,16.43978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(508,16.27305);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(509,16.64444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(510,16.29615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(511,16.02851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(512,16.30769);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(513,16.13377);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(514,15.95795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(515,16.45693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(516,15.67854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(517,16.0109);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(518,16.02264);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(519,16.1046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(520,15.71448);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(521,15.93436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(522,15.92846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(523,15.93436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(524,15.91073);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(525,16.08707);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(526,15.13531);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(527,15.67854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(528,15.33284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(529,15.9815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(530,15.38794);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(531,15.21587);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(532,16.00502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(533,15.55207);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(534,15.77421);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(535,15.30215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(536,15.40627);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(537,15.3696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(538,15.42457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(539,15.16014);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(540,15.32057);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(541,15.18494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(542,15.56416);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(543,15.296);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(544,14.88471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(545,15.22822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(546,15.12288);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(547,14.83408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(548,14.60408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(549,14.91626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(550,14.93517);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(551,14.998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(552,14.8214);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(553,14.95404);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(554,14.55248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(555,15.02306);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(556,15.15394);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(557,14.98545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(558,14.96033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(559,14.64909);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(560,14.59764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(561,14.78328);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(562,14.45522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(563,14.90996);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(564,15.06681);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(565,14.55894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(566,14.62982);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(567,14.24552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(568,14.53308);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(569,14.26531);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(570,14.58475);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(571,14.23232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(572,14.23892);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(573,14.09955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(574,14.62982);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(575,13.79615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(576,14.44871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(577,14.21909);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(578,13.87093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(579,14.28508);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(580,14.05947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(581,14.21248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(582,13.97225);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(583,13.93181);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(584,13.85736);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(585,13.83019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(586,13.73467);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(587,13.74151);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(588,13.80297);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(589,13.83019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(590,13.61778);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(591,13.73467);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(592,13.76203);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(593,13.70039);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(594,13.91155);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(595,13.78933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(596,13.56935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(597,13.56935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(598,13.70039);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(599,13.9453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(600,13.61778);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(601,13.67978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(602,13.80297);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(603,13.56935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(604,13.72782);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(605,13.63848);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(606,13.72097);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(607,13.4929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(608,13.47198);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(609,13.66603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(610,13.06805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(611,13.31046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(612,13.15411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(613,13.50683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(614,13.40901);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(615,13.3034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(616,13.26801);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(617,13.49987);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(618,13.17554);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(619,12.92332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(620,12.62145);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(621,13.11832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(622,13.03202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(623,13.0248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(624,12.97416);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(625,13.11115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(626,12.79902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(627,13.2183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(628,13.04644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(629,12.95965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(630,13.15411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(631,12.64379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(632,12.93787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(633,13.05365);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(634,12.77696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(635,12.50168);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(636,12.66608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(637,12.85767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(638,12.64379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(639,12.80637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(640,12.614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(641,12.53173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(642,12.5092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(643,12.41866);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(644,12.09644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(645,12.53923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(646,12.21249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(647,12.32745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(648,12.56171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(649,12.42623);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(650,12.60654);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(651,12.08088);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(652,12.55422);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(653,12.11974);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(654,12.93787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(655,12.44135);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(656,11.85299);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(657,12.614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(658,12.33508);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(659,12.31219);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(660,11.82917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(661,12.02627);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(662,12.27394);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(663,11.62064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(664,12.48662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(665,12.22019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(666,11.86092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(667,11.63681);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(668,11.70931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(669,11.69324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(670,11.78137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(671,12.0419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(672,11.86885);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(673,12.23557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(674,11.95569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(675,11.82121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(676,11.67715);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(677,11.73338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(678,11.67715);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(679,11.50679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(680,11.57198);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(681,11.47405);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(682,11.78935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(683,11.55572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(684,11.86092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(685,11.44944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(686,11.30063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(687,11.79733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(688,11.35873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(689,11.2923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(690,11.41654);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(691,11.6852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(692,11.05667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(693,11.44944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(694,11.04816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(695,11.45765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(696,11.35045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(697,11.82917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(698,10.71106);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(699,11.25894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(700,11.05667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(701,11.23386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(702,10.97986);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(703,11.49043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(704,11.20032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(705,10.89387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(706,11.24223);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(707,10.91113);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(708,10.88524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(709,11.2171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(710,10.86795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(711,11.09912);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(712,11.11605);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(713,10.8766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(714,10.75487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(715,11.08216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(716,10.68469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(717,10.98842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(718,10.59632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(719,10.68469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(720,10.85063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(721,10.80721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(722,10.72861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(723,10.9025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(724,10.55185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(725,10.71106);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(726,10.42633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(727,10.76361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(728,10.71984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(729,10.48928);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(730,10.94555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(731,10.7985);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(732,10.52508);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(733,10.31753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(734,10.2627);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(735,10.35393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(736,10.51614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(737,10.29015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(738,10.58744);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(739,10.44436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(740,10.1799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(741,10.60519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(742,10.37208);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(743,10.59632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(744,10.18913);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(745,10.44436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(746,10.43535);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(747,10.0871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(748,9.774613);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(749,10.70228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(750,10.28101);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(751,10.20758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(752,10.14288);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(753,10.34484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(754,9.965169);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(755,9.832167);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(756,9.917873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(757,9.81302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(758,10.06844);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(759,9.974601);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(760,10.12432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(761,9.955728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(762,9.92735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(763,9.697342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(764,9.774613);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(765,10.02163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(766,9.72639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(767,9.993439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(768,9.540923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(769,10.06844);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(770,9.411919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(771,9.461744);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(772,9.764987);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(773,9.784229);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(774,9.629221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(775,9.260835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(776,9.822598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(777,9.501416);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(778,9.260835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(779,9.260835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(780,9.570446);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(781,9.936818);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(782,9.471677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(783,9.501416);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(784,9.860819);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(785,9.361828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(786,9.361828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(787,9.331645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(788,9.461744);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(789,9.4518);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(790,9.68764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(791,9.580267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(792,9.17924);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(793,9.065848);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(794,9.107245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(795,8.95102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(796,9.230321);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(797,9.189479);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(798,9.045078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(799,9.138169);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(800,9.220127);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(801,8.982482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(802,9.281121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(803,8.887761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(804,9.481601);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(805,9.199706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(806,9.148454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(807,9.281121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(808,9.511308);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(809,8.476165);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(810,9.013834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(811,9.013834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(812,8.929983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(813,9.107245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(814,8.866574);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(815,9.065848);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(816,8.684401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(817,8.898335);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(818,8.982482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(819,9.209923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(820,8.877174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(821,8.792019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(822,8.386939);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(823,9.024261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(824,8.619186);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(825,8.341969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(826,8.727608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(827,9.076215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(828,8.759873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(829,8.716826);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(830,8.364484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(831,8.695223);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(832,8.770601);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(833,8.684401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(834,8.274055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(835,8.727608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(836,8.908897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(837,8.101779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(838,8.442816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(839,8.398144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(840,8.113378);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(841,8.285413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(842,8.476165);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(843,8.364484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(844,8.262682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(845,8.398144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(846,8.509383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(847,8.228467);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(848,8.330688);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(849,8.651855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(850,8.575434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(851,8.101779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(852,8.42051);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(853,8.285413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(854,8.171126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(855,8.020118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(856,8.101779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(857,7.80621);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(858,8.101779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(859,8.090164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(860,8.171126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(861,7.984865);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(862,8.182626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(863,8.101779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(864,8.296755);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(865,8.055217);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(866,8.101779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(867,7.996633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(868,8.217031);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(869,8.341969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(870,8.008384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(871,8.124961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(872,7.598658);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(873,7.745742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(874,7.984865);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(875,7.684799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(876,8.364484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(877,8.055217);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(878,8.159609);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(879,7.949455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(880,7.937616);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(881,7.854248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(882,7.818247);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(883,7.745742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(884,7.498999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(885,7.660286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(886,7.282697);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(887,7.684799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(888,7.461284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(889,7.672553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(890,7.461284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(891,7.794154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(892,7.44867);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(893,7.295598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(894,7.794154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(895,7.648);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(896,7.152406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(897,7.295598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(898,7.511529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(899,7.423377);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(900,7.498999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(901,6.992853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(902,7.308477);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(903,7.56144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(904,7.498999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(905,7.697027);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(906,7.486448);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(907,7.573866);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(908,7.372531);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(909,7.256826);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(910,7.059771);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(911,7.204805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(912,6.965905);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(913,7.073079);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(914,7.385276);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(915,7.461284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(916,7.359765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(917,7.410698);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(918,7.217846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(919,7.178653);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(920,7.44867);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(921,6.801979);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(922,7.769986);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(923,7.112853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(924,7.385276);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(925,7.623369);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(926,7.126062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(927,6.911695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(928,7.165542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(929,7.152406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(930,6.662293);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(931,7.165542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(932,6.925287);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(933,6.81579);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(934,7.006288);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(935,7.112853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(936,6.938853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(937,7.073079);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(938,6.801979);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(939,6.992853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(940,7.295598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(941,7.243856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(942,6.373743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(943,6.562744);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(944,6.911695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(945,6.648163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(946,7.059771);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(947,7.03308);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(948,6.952392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(949,6.81579);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(950,6.704504);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(951,6.788139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(952,7.112853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(953,6.870757);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(954,6.690463);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(955,6.519615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(956,7.006288);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(957,6.619812);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(958,6.829573);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(959,6.648163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(960,6.718516);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(961,6.718516);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(962,6.965905);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(963,6.774272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(964,6.857056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(965,6.417853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(966,6.577057);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(967,6.634003);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(968,6.194165);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(969,6.88443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(970,6.358972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(971,6.417853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(972,6.447092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(973,6.534023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(974,6.857056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(975,6.548399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(976,6.857056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(977,6.133138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(978,6.648163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(979,6.403184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(980,6.417853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(981,6.329327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(982,6.314452);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(983,6.358972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(984,6.344167);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(985,6.59134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(986,6.417853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(987,6.117785);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(988,5.993554);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(989,6.505175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(990,6.254598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(991,6.284596);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(992,5.818405);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(993,6.38848);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(994,6.373743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(995,6.086965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(996,6.117785);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(997,6.605591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(998,5.753393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(999,6.209328);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1000,6.102395);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1001,100.6554);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetEntries(3073644);

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
   VH_tagFirst_Z_mass__71->SetBinContent(1000,50);
   VH_tagFirst_Z_mass__71->SetBinContent(1001,26893);
   VH_tagFirst_Z_mass__71->SetEntries(1359367);

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
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9108.112, 9385.232, 9662.353,
   9603.373, 9666.69, 9775.977, 9860.977, 9794.625, 9673.628, 9645.439, 9653.246, 9605.975, 9414.289, 9465.463, 9352.273, 9283.318, 8981.044, 8861.783, 8589.433,
   8489.687, 8285.858, 8043.865, 8027.386, 7699.525, 7645.749, 7576.36, 7395.516, 7272.352, 7195.157, 7056.38, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 43.36783 };
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fey1071[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.9697342, 0.7511529, 2.491292, 5.587554, 8.972007, 13.23962,
   17.78081, 22.75055, 27.12484, 32.27336, 36.906, 41.22454, 45.47423, 49.01524, 52.68254, 55.20846, 57.80624, 59.76899, 61.4233, 62.84895, 63.7979, 64.73294,
   64.53506, 64.74746, 65.11243, 65.39489, 65.17451, 64.77069, 64.67625, 64.70242, 64.54381, 63.89658, 64.07001, 63.68577, 63.45056, 62.40901, 61.99325, 61.03319,
   60.67778, 59.94495, 59.0631, 59.00257, 57.78509, 57.58294, 57.32105, 56.63281, 56.15925, 55.86039, 55.31906, 54.99513, 54.67272, 54.4141, 54.34839, 54.07431,
   53.79185, 53.47801, 52.90698, 52.66291, 52.38719, 52.08655, 51.74238, 51.73875, 51.74238, 51.06735, 50.75519, 50.58258, 50.32351, 49.85792, 49.64622, 49.52295,
   49.15701, 49.1704, 48.3702, 48.17344, 48.04248, 47.95235, 47.80504, 47.26895, 47.1893, 46.43802, 46.31636, 46.06595, 46.10268, 45.49697, 45.56513, 45.13173,
   45.06291, 44.47265, 44.25432, 43.91729, 43.59923, 43.57334, 42.70355, 42.85742, 42.50047, 42.41409, 42.4717, 41.74365, 41.46337, 41.82467, 41.1149, 40.77499,
   40.53675, 40.48103, 40.26441, 39.78984, 39.14652, 39.22092, 38.93456, 38.93214, 38.50223, 38.67039, 38.34805, 37.63268, 38.0477, 37.59768, 37.50252, 37.23325,
   36.89326, 36.56039, 36.59639, 36.71696, 35.92469, 35.92731, 36.01358, 35.50075, 35.29086, 35.37337, 35.47955, 35.14133, 35.05022, 34.6047, 34.74031, 34.12583,
   34.10377, 33.86025, 33.90743, 33.75177, 33.53935, 33.63734, 33.66249, 33.0365, 32.82518, 32.96526, 32.98522, 32.34903, 32.27627, 31.81556, 32.37518, 31.75047,
   32.10098, 31.55438, 31.75935, 31.95123, 31.37206, 31.37506, 31.50069, 30.99814, 30.9526, 30.88569, 30.29857, 30.5243, 30.32029, 30.5243, 30.13674, 30.31408,
   30.09927, 30.45953, 29.9238, 29.81992, 29.7473, 29.70301, 29.77889, 29.54747, 29.27248, 29.53155, 29.19528, 29.02082, 29.10818, 28.96569, 29.15338, 28.82248,
   28.8779, 29.27891, 28.71789, 28.56028, 28.42827, 28.35208, 27.98822, 28.18242, 28.45141, 28.20243, 28.24907, 28.27902, 28.18575, 27.83999, 27.65358, 27.80957,
   27.50697, 27.30107, 28.03522, 27.82985, 27.37675, 27.10403, 27.22174, 27.40765, 26.99626, 27.38362, 27.25971, 26.92301, 27.2321, 26.75834, 26.89155, 26.45793,
   26.72317, 26.80048, 26.62093, 26.60326, 26.55372, 26.79346, 26.75482, 26.42237, 26.2832, 25.95557, 26.67033, 26.14329, 26.37606, 26.17205, 26.17205, 26.22947,
   25.64576, 25.28385, 25.91568, 25.78837, 25.74457, 25.84301, 25.60172, 25.78472, 25.94469, 25.53552, 25.66775, 25.43959, 25.53183, 25.27269, 25.60539, 24.9883,
   24.86758, 25.2019, 25.07846, 24.80701, 25.22428, 25.20563, 25.08221, 24.66253, 24.82974, 25.17576, 25.49497, 24.78046, 24.52105, 24.75008, 24.67016, 24.8638,
   24.97324, 24.32854, 24.57468, 24.12671, 24.35944, 24.74628, 24.31308, 23.98598, 24.20453, 24.61674, 24.10721, 24.35558, 23.87201, 24.17343, 23.86019, 24.33627,
   23.88383, 24.11111, 23.93889, 23.79705, 23.65038, 23.72977, 23.78124, 23.76937, 23.62651, 23.37442, 23.44271, 23.53879, 23.62651, 23.3905, 23.35832, 23.45073,
   23.04216, 22.85777, 23.35832, 23.45474, 23.1805, 22.63452, 22.9276, 22.99313, 23.25745, 23.06255, 23.04624, 23.04624, 23.08701, 22.86188, 22.74228, 22.86599,
   22.68017, 22.71746, 22.61789, 22.77947, 22.75055, 22.50118, 22.62621, 22.57628, 22.38385, 22.78772, 22.67188, 22.24055, 22.9276, 22.43421, 22.29123, 22.12185,
   22.23632, 21.91256, 21.91256, 21.94687, 22.31653, 21.84809, 22.26168, 22.0452, 22.29545, 21.8524, 21.45283, 21.56214, 21.42213, 21.51849, 22.0025, 21.19263,
   21.65788, 21.46598, 21.55778, 21.74887, 21.17931, 21.61006, 21.21481, 21.20594, 21.22367, 21.04122, 21.21037, 21.00544, 21.14376, 20.88421, 20.64418, 20.68059,
   20.69423, 20.73962, 21.23253, 20.42436, 20.66239, 20.79396, 20.63507, 20.44277, 20.91571, 20.89772, 20.44737, 20.69423, 20.35518, 20.63507, 20.55288, 20.59401,
   20.31819, 20.32282, 20.00569, 20.03857, 20.05264, 20.16488, 19.89256, 19.84523, 20.05733, 19.8831, 19.60686, 19.77877, 19.6739, 20.40133, 19.8689, 20.09948,
   19.42859, 19.59727, 19.78353, 19.8547, 20.02448, 19.66912, 19.63083, 19.75975, 19.14089, 19.77877, 19.58767, 19.10155, 19.58767, 19.45278, 19.54441, 19.19486,
   19.34614, 19.50106, 19.46245, 19.28284, 19.32668, 19.24379, 18.62799, 19.08677, 19.26332, 19.04238, 19.30721, 19.02262, 18.88369, 18.51151, 18.48101, 18.6784,
   18.84381, 18.74875, 18.86376, 18.14725, 18.41985, 18.55211, 17.88101, 18.85877, 18.41985, 18.14725, 18.55718, 18.50135, 18.32772, 18.28663, 18.41474, 18.29691,
   18.23513, 17.69599, 18.53182, 18.20933, 18.06935, 18.37384, 18.07456, 17.83889, 17.92304, 17.58939, 17.73845, 17.75435, 18.00679, 17.98066, 17.88627, 17.41206,
   17.7861, 17.77023, 17.35255, 17.77023, 17.60007, 17.36339, 17.54656, 17.06291, 17.56799, 17.44983, 17.38504, 17.36339, 17.22746, 17.26563, 17.04637, 17.27107,
   16.89677, 17.45522, 16.85776, 17.27107, 17.39045, 17.29827, 16.61616, 17.03533, 16.58217, 16.59351, 16.38822, 16.79629, 16.92457, 16.96342, 16.70647, 16.61616,
   16.71772, 16.47407, 16.35376, 16.4455, 16.61616, 16.62182, 16.52536, 16.46265, 16.6783, 16.43978, 16.27305, 16.64444, 16.29615, 16.02851, 16.30769, 16.13377,
   15.95795, 16.45693, 15.67854, 16.0109, 16.02264, 16.1046, 15.71448, 15.93436, 15.92846, 15.93436, 15.91073, 16.08707, 15.13531, 15.67854, 15.33284, 15.9815,
   15.38794, 15.21587, 16.00502, 15.55207, 15.77421, 15.30215, 15.40627, 15.3696, 15.42457, 15.16014, 15.32057, 15.18494, 15.56416, 15.296, 14.88471, 15.22822,
   15.12288, 14.83408, 14.60408, 14.91626, 14.93517, 14.998, 14.8214, 14.95404, 14.55248, 15.02306, 15.15394, 14.98545, 14.96033, 14.64909, 14.59764, 14.78328,
   14.45522, 14.90996, 15.06681, 14.55894, 14.62982, 14.24552, 14.53308, 14.26531, 14.58475, 14.23232, 14.23892, 14.09955, 14.62982, 13.79615, 14.44871, 14.21909,
   13.87093, 14.28508, 14.05947, 14.21248, 13.97225, 13.93181, 13.85736, 13.83019, 13.73467, 13.74151, 13.80297, 13.83019, 13.61778, 13.73467, 13.76203, 13.70039,
   13.91155, 13.78933, 13.56935, 13.56935, 13.70039, 13.9453, 13.61778, 13.67978, 13.80297, 13.56935, 13.72782, 13.63848, 13.72097, 13.4929, 13.47198, 13.66603,
   13.06805, 13.31046, 13.15411, 13.50683, 13.40901, 13.3034, 13.26801, 13.49987, 13.17554, 12.92332, 12.62145, 13.11832, 13.03202, 13.0248, 12.97416, 13.11115,
   12.79902, 13.2183, 13.04644, 12.95965, 13.15411, 12.64379, 12.93787, 13.05365, 12.77696, 12.50168, 12.66608, 12.85767, 12.64379, 12.80637, 12.614, 12.53173,
   12.5092, 12.41866, 12.09644, 12.53923, 12.21249, 12.32745, 12.56171, 12.42623, 12.60654, 12.08088, 12.55422, 12.11974, 12.93787, 12.44135, 11.85299, 12.614,
   12.33508, 12.31219, 11.82917, 12.02627, 12.27394, 11.62064, 12.48662, 12.22019, 11.86092, 11.63681, 11.70931, 11.69324, 11.78137, 12.0419, 11.86885, 12.23557,
   11.95569, 11.82121, 11.67715, 11.73338, 11.67715, 11.50679, 11.57198, 11.47405, 11.78935, 11.55572, 11.86092, 11.44944, 11.30063, 11.79733, 11.35873, 11.2923,
   11.41654, 11.6852, 11.05667, 11.44944, 11.04816, 11.45765, 11.35045, 11.82917, 10.71106, 11.25894, 11.05667, 11.23386, 10.97986, 11.49043, 11.20032, 10.89387,
   11.24223, 10.91113, 10.88524, 11.2171, 10.86795, 11.09912, 11.11605, 10.8766, 10.75487, 11.08216, 10.68469, 10.98842, 10.59632, 10.68469, 10.85063, 10.80721,
   10.72861, 10.9025, 10.55185, 10.71106, 10.42633, 10.76361, 10.71984, 10.48928, 10.94555, 10.7985, 10.52508, 10.31753, 10.2627, 10.35393, 10.51614, 10.29015,
   10.58744, 10.44436, 10.1799, 10.60519, 10.37208, 10.59632, 10.18913, 10.44436, 10.43535, 10.0871, 9.774613, 10.70228, 10.28101, 10.20758, 10.14288, 10.34484,
   9.965169, 9.832167, 9.917873, 9.81302, 10.06844, 9.974601, 10.12432, 9.955728, 9.92735, 9.697342, 9.774613, 10.02163, 9.72639, 9.993439, 9.540923, 10.06844,
   9.411919, 9.461744, 9.764987, 9.784229, 9.629221, 9.260835, 9.822598, 9.501416, 9.260835, 9.260835, 9.570446, 9.936818, 9.471677, 9.501416, 9.860819, 9.361828,
   9.361828, 9.331645, 9.461744, 9.4518, 9.68764, 9.580267, 9.17924, 9.065848, 9.107245, 8.95102, 9.230321, 9.189479, 9.045078, 9.138169, 9.220127, 8.982482,
   9.281121, 8.887761, 9.481601, 9.199706, 9.148454, 9.281121, 9.511308, 8.476165, 9.013834, 9.013834, 8.929983, 9.107245, 8.866574, 9.065848, 8.684401, 8.898335,
   8.982482, 9.209923, 8.877174, 8.792019, 8.386939, 9.024261, 8.619186, 8.341969, 8.727608, 9.076215, 8.759873, 8.716826, 8.364484, 8.695223, 8.770601, 8.684401,
   8.274055, 8.727608, 8.908897, 8.101779, 8.442816, 8.398144, 8.113378, 8.285413, 8.476165, 8.364484, 8.262682, 8.398144, 8.509383, 8.228467, 8.330688, 8.651855,
   8.575434, 8.101779, 8.42051, 8.285413, 8.171126, 8.020118, 8.101779, 7.80621, 8.101779, 8.090164, 8.171126, 7.984865, 8.182626, 8.101779, 8.296755, 8.055217,
   8.101779, 7.996633, 8.217031, 8.341969, 8.008384, 8.124961, 7.598658, 7.745742, 7.984865, 7.684799, 8.364484, 8.055217, 8.159609, 7.949455, 7.937616, 7.854248,
   7.818247, 7.745742, 7.498999, 7.660286, 7.282697, 7.684799, 7.461284, 7.672553, 7.461284, 7.794154, 7.44867, 7.295598, 7.794154, 7.648, 7.152406, 7.295598,
   7.511529, 7.423377, 7.498999, 6.992853, 7.308477, 7.56144, 7.498999, 7.697027, 7.486448, 7.573866, 7.372531, 7.256826, 7.059771, 7.204805, 6.965905, 7.073079,
   7.385276, 7.461284, 7.359765, 7.410698, 7.217846, 7.178653, 7.44867, 6.801979, 7.769986, 7.112853, 7.385276, 7.623369, 7.126062, 6.911695, 7.165542, 7.152406,
   6.662293, 7.165542, 6.925287, 6.81579, 7.006288, 7.112853, 6.938853, 7.073079, 6.801979, 6.992853, 7.295598, 7.243856, 6.373743, 6.562744, 6.911695, 6.648163,
   7.059771, 7.03308, 6.952392, 6.81579, 6.704504, 6.788139, 7.112853, 6.870757, 6.690463, 6.519615, 7.006288, 6.619812, 6.829573, 6.648163, 6.718516, 6.718516,
   6.965905, 6.774272, 6.857056, 6.417853, 6.577057, 6.634003, 6.194165, 6.88443, 6.358972, 6.417853, 6.447092, 6.534023, 6.857056, 6.548399, 6.857056, 6.133138,
   6.648163, 6.403184, 6.417853, 6.329327, 6.314452, 6.358972, 6.344167, 6.59134, 6.417853, 6.117785, 5.993554, 6.505175, 6.254598, 6.284596, 5.818405, 6.38848,
   6.373743, 6.086965, 6.117785, 6.605591, 5.753393, 6.209328, 6.102395 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_Z_mass_fx1071,Graph_from_VH_tagFirst_2b1c_Z_mass_fy1071,Graph_from_VH_tagFirst_2b1c_Z_mass_fex1071,Graph_from_VH_tagFirst_2b1c_Z_mass_fey1071);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1071 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1071","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1071->SetMinimum(-1060.203);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1071->SetMaximum(10925.15);
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
   data_mc_ratio__72->SetBinContent(1000,1.152928);
   data_mc_ratio__72->SetBinContent(1001,1.151152);
   data_mc_ratio__72->SetBinError(1000,0.1630487);
   data_mc_ratio__72->SetBinError(1001,0.008595024);
   data_mc_ratio__72->SetMinimum(0.4);
   data_mc_ratio__72->SetMaximum(1.6);
   data_mc_ratio__72->SetEntries(25.12563);
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
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.006900327, 0.00679769, 0.0066995,
   0.006720042, 0.006697997, 0.006660453, 0.006631685, 0.00665411, 0.006695595, 0.006705372, 0.00670266, 0.006719131, 0.006787191, 0.006768819, 0.006809657, 0.006834901, 0.00694897, 0.006995573, 0.007105614,
   0.007147234, 0.00723461, 0.007342627, 0.00735016, 0.007505021, 0.007531368, 0.007565777, 0.007657722, 0.007722296, 0.00776361, 0.007839581, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1407125 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1072,Graph_from_mc_statistical_error_fy1072,Graph_from_mc_statistical_error_fex1072,Graph_from_mc_statistical_error_fey1072);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1072 = new TH1F("Graph_Graph_from_mc_statistical_error1072","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1072->SetMinimum(0.831145);
   Graph_Graph_from_mc_statistical_error1072->SetMaximum(1.168855);
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
