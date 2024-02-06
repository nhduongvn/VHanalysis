#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagFirst_SR_16()
{
//=========Macro generated from canvas: H_mass_tagFirst_SR_16/H_mass_tagFirst_SR_16
//=========  (Tue Feb  6 13:31:00 2024) by ROOT version 6.28/10
   TCanvas *H_mass_tagFirst_SR_16 = new TCanvas("H_mass_tagFirst_SR_16", "H_mass_tagFirst_SR_16",0,0,600,600);
   H_mass_tagFirst_SR_16->SetHighLightColor(2);
   H_mass_tagFirst_SR_16->Range(0,0,1,1);
   H_mass_tagFirst_SR_16->SetFillColor(0);
   H_mass_tagFirst_SR_16->SetFillStyle(4000);
   H_mass_tagFirst_SR_16->SetBorderMode(0);
   H_mass_tagFirst_SR_16->SetBorderSize(2);
   H_mass_tagFirst_SR_16->SetFrameFillStyle(1000);
   H_mass_tagFirst_SR_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-22.61532,315.7258,22602.71);
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
   st->SetMaximum(20340.18);
   
   TH1F *st_stack_4 = new TH1F("st_stack_4","",1000,0,2000);
   st_stack_4->SetMinimum(0.01);
   st_stack_4->SetMaximum(20340.18);
   st_stack_4->SetDirectory(nullptr);
   st_stack_4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_4->SetLineColor(ci);
   st_stack_4->SetLineWidth(0);
   st_stack_4->GetXaxis()->SetRange(1,150);
   st_stack_4->GetXaxis()->SetLabelFont(42);
   st_stack_4->GetXaxis()->SetTitleOffset(1);
   st_stack_4->GetXaxis()->SetTitleFont(42);
   st_stack_4->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_4->GetYaxis()->SetLabelFont(42);
   st_stack_4->GetYaxis()->SetLabelSize(0.05);
   st_stack_4->GetYaxis()->SetTitleSize(0.057);
   st_stack_4->GetYaxis()->SetTitleOffset(1.2);
   st_stack_4->GetYaxis()->SetTitleFont(42);
   st_stack_4->GetZaxis()->SetLabelFont(42);
   st_stack_4->GetZaxis()->SetTitleOffset(1);
   st_stack_4->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_4);
   
   
   TH1D *VH_tagFirst_2b1c_H_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(48,4580.634);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(49,9153.079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(50,9118.683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(51,9056.575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(52,8987.898);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(53,8880.054);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(54,9017.16);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(55,8828.376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(56,8805.835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(57,8539.959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(58,8567.025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(59,8455.34);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(60,8584.691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(61,8439.593);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(62,8425.798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(63,8438.569);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(64,8299.166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(65,8216.93);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(66,8292.645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(67,8148.297);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(68,8034.308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(69,8100.637);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(70,8119.646);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(71,8119.025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(72,7924.431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(73,7963.188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(74,7955.069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(75,7765.337);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(76,7688.773);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(77,7746.012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(78,3867.339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1000,26.59948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1001,16915.24);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(10,0.378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(11,0.6566515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(12,3.098616);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(13,7.219683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(14,12.47974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(15,17.45319);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(16,22.86635);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(17,28.34914);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(18,33.68431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(19,38.90041);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(20,43.52677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(21,48.81117);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(22,52.61229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(23,56.36924);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(24,59.73212);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(25,62.23917);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(26,64.0131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(27,65.26709);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(28,66.44331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(29,67.04791);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(30,67.39983);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(31,67.52012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(32,67.31155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(33,67.54144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(34,67.33716);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(35,66.92009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(36,66.85351);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(37,66.48325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(38,65.98396);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(39,65.77943);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(40,65.2522);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(41,65.19619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(42,64.79127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(43,64.22302);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(44,64.14877);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(45,63.91556);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(46,63.14102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(47,62.92429);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(48,62.54542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(49,62.37316);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(50,62.33789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(51,61.90265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(52,61.75311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(53,61.24241);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(54,61.64562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(55,61.05318);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(56,60.95717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(57,60.12434);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(58,60.12252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(59,59.73764);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(60,60.12235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(61,59.6905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(62,59.65837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(63,59.74367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(64,59.27836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(65,58.97178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(66,59.16321);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(67,58.67193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(68,58.30393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(69,58.52846);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(70,58.51238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(71,58.51372);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(72,57.98294);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(73,58.03337);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(74,57.94491);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(75,57.39736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(76,57.18154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(77,57.25517);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(78,57.13135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(79,56.84454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(80,56.60222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(81,56.60253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(82,55.92775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(83,56.08346);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(84,56.05201);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(85,55.7523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(86,55.21812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(87,55.08483);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(88,55.08096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(89,54.81429);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(90,54.70414);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(91,54.23824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(92,54.39167);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(93,54.40198);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(94,53.63667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(95,53.64071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(96,53.44963);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(97,53.04772);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(98,53.10673);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(99,53.06177);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(100,52.78006);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(101,52.71645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(102,52.51113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(103,52.08282);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(104,51.91932);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(105,51.6375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(106,51.89163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(107,51.56214);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(108,51.5704);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(109,50.95452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(110,50.88402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(111,50.53516);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(112,51.01425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(113,50.61938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(114,50.53687);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(115,50.34148);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(116,49.94538);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(117,50.08403);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(118,49.87717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(119,49.59836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(120,49.63806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(121,49.53831);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(122,49.27111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(123,49.28103);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(124,49.1016);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(125,48.70513);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(126,48.77183);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(127,48.71345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(128,48.60142);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(129,48.42452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(130,48.48021);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(131,47.934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(132,47.81953);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(133,48.0282);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(134,47.47761);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(135,47.74438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(136,47.64254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(137,47.31248);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(138,47.34362);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(139,47.37106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(140,46.89638);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(141,46.80312);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(142,46.65175);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(143,46.74879);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(144,46.76443);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(145,46.75363);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(146,46.30703);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(147,46.21698);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(148,46.07217);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(149,46.03875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(150,46.22973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(151,45.98784);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(152,45.87065);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(153,45.62316);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(154,45.61989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(155,45.75748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(156,45.04364);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(157,45.58717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(158,45.02725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(159,45.19113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(160,44.9196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(161,44.78804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(162,44.39136);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(163,44.73258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(164,44.63643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(165,44.44582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(166,44.09225);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(167,44.48551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(168,44.14313);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(169,44.13024);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(170,43.79692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(171,43.68509);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(172,43.74975);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(173,43.56161);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(174,43.86908);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(175,43.69644);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(176,43.46771);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(177,42.93578);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(178,43.31121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(179,43.20275);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(180,42.84412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(181,43.13442);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(182,42.93284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(183,42.95101);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(184,42.39116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(185,42.37234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(186,42.5361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(187,42.47195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(188,42.05102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(189,42.25544);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(190,41.66114);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(191,41.77484);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(192,41.89303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(193,42.08493);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(194,41.6433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(195,41.66139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(196,41.70744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(197,41.5353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(198,41.76077);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(199,41.18717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(200,41.26699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(201,41.05876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(202,40.86579);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(203,40.76463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(204,41.21701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(205,40.16438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(206,40.87699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(207,40.69725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(208,40.48123);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(209,40.28173);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(210,40.1561);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(211,40.19112);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(212,39.92125);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(213,40.27732);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(214,39.89732);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(215,39.72699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(216,39.53096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(217,39.81588);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(218,39.63182);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(219,39.01468);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(220,39.3907);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(221,39.39164);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(222,39.2469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(223,38.49768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(224,39.16028);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(225,38.36304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(226,38.97919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(227,38.88064);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(228,38.79127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(229,38.30524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(230,38.26958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(231,38.25636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(232,38.06593);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(233,38.27005);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(234,37.93568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(235,38.40487);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(236,37.99071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(237,37.85126);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(238,37.57818);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(239,37.7334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(240,37.30035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(241,37.50491);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(242,37.02788);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(243,37.28843);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(244,37.23112);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(245,37.20561);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(246,36.93054);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(247,37.1514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(248,36.7696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(249,37.01184);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(250,36.73213);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(251,36.90959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(252,36.40645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(253,36.56929);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(254,36.16141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(255,36.03023);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(256,36.3311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(257,35.79042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(258,35.93738);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(259,36.05857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(260,35.65772);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(261,35.57153);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(262,35.85031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(263,35.83515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(264,35.05379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(265,35.52865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(266,35.15209);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(267,35.2937);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(268,34.81381);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(269,34.87517);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(270,34.88865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(271,34.78065);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(272,34.54731);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(273,34.50133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(274,34.52778);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(275,34.35843);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(276,34.34798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(277,34.0383);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(278,34.02025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(279,33.76917);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(280,34.12193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(281,34.0324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(282,33.97717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(283,33.45977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(284,33.62171);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(285,33.67084);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(286,33.4374);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(287,33.46774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(288,32.9714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(289,32.91332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(290,32.87911);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(291,32.8634);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(292,32.78361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(293,32.80553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(294,32.61658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(295,32.46726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(296,32.4795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(297,32.38317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(298,32.43054);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(299,32.52227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(300,31.76322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(301,31.75782);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(302,31.88211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(303,32.02598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(304,31.54765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(305,31.77395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(306,31.7367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(307,31.32052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(308,31.28715);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(309,31.55347);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(310,31.43125);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(311,30.86814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(312,31.06609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(313,30.70407);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(314,30.75989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(315,30.65386);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(316,30.71303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(317,30.94785);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(318,30.36808);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(319,30.70626);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(320,30.25963);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(321,30.72759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(322,30.47471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(323,30.28255);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(324,29.80714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(325,30.0922);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(326,29.68348);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(327,29.82031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(328,29.48677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(329,30.10861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(330,30.11168);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(331,29.4341);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(332,29.36272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(333,29.50279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(334,29.37376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(335,29.46408);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(336,29.01874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(337,28.91936);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(338,29.11407);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(339,28.82285);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(340,29.12575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(341,28.74944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(342,28.46247);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(343,28.708);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(344,28.63999);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(345,28.34067);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(346,28.50902);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(347,28.3183);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(348,28.07295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(349,28.18201);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(350,27.97845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(351,27.86267);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(352,27.45637);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(353,27.70534);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(354,27.66164);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(355,27.45459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(356,27.42225);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(357,27.62911);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(358,27.23852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(359,27.48774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(360,27.10703);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(361,27.11902);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(362,27.11774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(363,26.90965);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(364,26.64725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(365,26.5477);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(366,26.78445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(367,26.73038);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(368,26.27517);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(369,26.66882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(370,26.72509);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(371,26.43407);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(372,26.13335);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(373,26.40838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(374,26.1312);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(375,25.76951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(376,25.98773);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(377,25.78074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(378,26.02839);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(379,25.63869);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(380,25.88002);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(381,25.44742);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(382,25.46261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(383,25.25485);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(384,25.53834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(385,25.36433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(386,24.92147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(387,24.66974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(388,24.88056);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(389,24.98108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(390,24.86594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(391,24.78003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(392,25.28487);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(393,24.95159);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(394,24.52165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(395,24.31908);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(396,24.40319);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(397,24.2682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(398,24.46296);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(399,24.06107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(400,24.11374);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(401,24.323);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(402,24.06904);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(403,23.95869);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(404,23.73561);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(405,23.71111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(406,23.98647);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(407,23.8876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(408,23.96458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(409,23.54526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(410,23.35498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(411,23.61729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(412,23.51042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(413,23.47505);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(414,23.27072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(415,23.2455);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(416,23.1431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(417,23.14944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(418,22.97395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(419,22.89341);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(420,22.75089);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(421,22.68979);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(422,22.70543);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(423,22.47152);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(424,22.7309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(425,22.0902);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(426,22.69937);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(427,22.01768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(428,22.41816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(429,22.26383);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(430,22.20672);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(431,22.23504);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(432,21.96041);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(433,22.23008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(434,21.59701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(435,21.97451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(436,21.80138);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(437,21.6003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(438,22.21304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(439,21.99667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(440,21.314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(441,21.6145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(442,21.59906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(443,21.66665);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(444,21.32815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(445,21.22581);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(446,21.15638);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(447,21.14081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(448,21.23473);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(449,20.8244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(450,20.66238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(451,20.45154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(452,20.78619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(453,21.05169);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(454,20.55595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(455,20.8992);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(456,20.62235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(457,20.5523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(458,20.5538);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(459,20.37361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(460,20.5926);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(461,20.24266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(462,20.53251);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(463,20.26453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(464,20.00965);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(465,19.98102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(466,20.02398);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(467,19.83611);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(468,19.81371);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(469,20.12938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(470,19.86644);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(471,19.33127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(472,19.85353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(473,19.48639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(474,19.56496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(475,19.51393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(476,19.18647);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(477,19.28637);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(478,19.29174);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(479,19.19622);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(480,19.47869);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(481,19.27408);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(482,19.19654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(483,18.88695);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(484,18.92075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(485,18.69712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(486,18.94334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(487,19.14483);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(488,18.78309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(489,18.49609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(490,18.69738);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(491,18.7268);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(492,18.63575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(493,18.57488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(494,18.3898);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(495,18.36175);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(496,18.25256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(497,17.95053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(498,17.87536);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(499,18.26747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(500,18.28502);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(501,17.88633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(502,18.18462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(503,18.00195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(504,17.74591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(505,18.01493);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(506,17.91666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(507,17.78753);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(508,17.55049);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(509,17.28264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(510,17.66041);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(511,17.17477);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(512,17.44605);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(513,17.55422);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(514,17.26521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(515,16.90787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(516,17.76065);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(517,17.1481);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(518,17.23595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(519,17.23325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(520,17.27513);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(521,16.9843);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(522,16.97621);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(523,16.94063);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(524,16.88517);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(525,16.67977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(526,16.64496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(527,16.5489);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(528,16.9274);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(529,16.46102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(530,16.5734);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(531,16.28222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(532,16.96577);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(533,15.96352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(534,16.36459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(535,16.21182);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(536,16.74364);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(537,16.06999);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(538,16.13416);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(539,16.48836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(540,15.84733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(541,16.21599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(542,15.7915);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(543,15.89648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(544,16.11529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(545,15.75794);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(546,16.03255);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(547,15.54621);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(548,15.90966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(549,15.90759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(550,15.773);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(551,15.58121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(552,15.57734);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(553,15.3708);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(554,15.37539);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(555,15.09613);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(556,15.49582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(557,15.17171);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(558,15.34729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(559,15.45004);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(560,14.80378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(561,15.35334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(562,14.95629);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(563,15.06232);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(564,14.92109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(565,14.84606);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(566,15.00734);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(567,14.68282);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(568,14.91121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(569,15.0849);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(570,15.00782);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(571,14.71662);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(572,14.67223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(573,15.04768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(574,14.95205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(575,14.55683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(576,14.59902);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(577,14.33332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(578,14.63026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(579,14.52242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(580,14.413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(581,14.05993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(582,14.27365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(583,14.07244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(584,14.18959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(585,14.51472);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(586,14.0272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(587,14.41777);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(588,13.93994);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(589,14.32819);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(590,14.27353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(591,13.97091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(592,13.68633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(593,14.1771);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(594,14.23063);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(595,13.7809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(596,13.69565);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(597,13.70316);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(598,13.66176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(599,13.62287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(600,13.61589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(601,13.52767);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(602,13.75249);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(603,13.84676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(604,13.64384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(605,13.53135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(606,13.25819);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(607,13.42714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(608,13.39193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(609,13.23895);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(610,13.46965);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(611,13.44096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(612,13.28299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(613,13.18497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(614,13.12307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(615,12.96237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(616,13.06102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(617,12.99563);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(618,13.2064);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(619,13.02823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(620,13.07515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(621,12.92454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(622,13.03278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(623,12.93229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(624,13.02515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(625,12.83697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(626,13.23467);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(627,12.66794);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(628,12.3718);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(629,12.60051);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(630,12.53059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(631,12.5302);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(632,12.12549);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(633,12.43152);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(634,12.66852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(635,12.41827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(636,12.67417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(637,12.01268);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(638,12.22342);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(639,12.09412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(640,12.36057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(641,12.22647);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(642,12.20915);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(643,12.00723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(644,12.30196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(645,12.47238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(646,11.94544);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(647,11.89373);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(648,11.98915);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(649,12.42032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(650,12.0872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(651,11.78806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(652,12.07456);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(653,11.64644);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(654,11.59535);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(655,11.723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(656,11.85123);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(657,11.70236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(658,11.39418);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(659,11.70646);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(660,11.7711);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(661,12.25533);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(662,12.02481);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(663,11.80305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(664,11.68254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(665,11.09821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(666,11.24643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(667,11.29931);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(668,11.76425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(669,11.30815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(670,11.41232);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(671,11.12905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(672,11.13512);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(673,11.43334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(674,11.01798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(675,11.1551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(676,11.14024);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(677,11.19947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(678,11.16078);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(679,10.49706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(680,11.19967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(681,10.85346);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(682,10.9804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(683,10.91075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(684,11.0573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(685,10.88414);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(686,10.70965);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(687,10.98708);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(688,10.83796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(689,11.07957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(690,11.17136);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(691,11.0085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(692,11.22307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(693,10.66869);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(694,10.5698);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(695,10.52938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(696,10.92634);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(697,10.67508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(698,10.61818);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(699,10.88349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(700,10.80001);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(701,10.39962);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(702,10.42872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(703,10.50506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(704,10.60083);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(705,10.47878);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(706,10.11801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(707,10.25759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(708,10.27846);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(709,10.12278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(710,10.47604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(711,10.22408);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(712,10.44229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(713,9.992688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(714,10.30425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(715,10.37758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(716,10.12923);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(717,10.11121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(718,10.33454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(719,9.978961);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(720,9.947981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(721,9.874839);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(722,10.00818);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(723,10.15562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(724,9.960364);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(725,10.0281);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(726,10.20531);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(727,10.02109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(728,9.665787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(729,9.725666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(730,9.705127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(731,9.461192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(732,9.741047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(733,9.708875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(734,9.440267);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(735,10.01944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(736,9.277432);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(737,9.478993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(738,9.63182);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(739,9.654525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(740,9.814557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(741,9.7326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(742,9.758733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(743,9.761554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(744,9.825127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(745,9.407018);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(746,9.528485);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(747,9.368456);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(748,9.370935);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(749,9.379694);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(750,9.742127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(751,9.449753);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(752,9.560304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(753,8.97589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(754,9.272945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(755,9.179411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(756,9.178854);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(757,8.729872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(758,8.960486);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(759,9.129286);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(760,9.161733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(761,8.852437);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(762,9.131341);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(763,8.488132);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(764,9.214638);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(765,8.719557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(766,9.069249);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(767,9.049384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(768,8.853793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(769,8.830036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(770,9.031947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(771,8.947668);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(772,8.59853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(773,8.667093);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(774,8.626139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(775,8.626786);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(776,8.904567);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(777,8.841458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(778,8.526448);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(779,8.660996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(780,8.187617);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(781,8.678474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(782,8.70829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(783,8.630326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(784,8.62703);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(785,8.843346);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(786,8.594723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(787,8.864361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(788,8.377054);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(789,8.485304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(790,8.57176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(791,8.375102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(792,8.458697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(793,8.125614);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(794,8.454988);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(795,8.221353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(796,8.53439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(797,8.314962);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(798,8.448419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(799,8.466855);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(800,8.125572);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(801,8.517528);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(802,8.122232);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(803,7.997552);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(804,8.329277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(805,8.158705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(806,8.524163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(807,8.106212);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(808,7.905698);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(809,8.164038);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(810,8.2555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(811,7.981955);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(812,8.181663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(813,8.144953);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(814,7.735551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(815,7.942504);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(816,7.97169);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(817,7.919264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(818,7.772019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(819,7.924339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(820,7.876458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(821,7.983424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(822,7.897135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(823,7.877244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(824,7.695425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(825,7.816303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(826,7.65763);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(827,7.864078);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(828,7.480053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(829,7.552988);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(830,7.732651);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(831,7.429477);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(832,7.602416);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(833,7.922749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(834,7.466874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(835,7.213483);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(836,7.371654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(837,7.627393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(838,7.362129);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(839,7.380801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(840,7.306569);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(841,7.044626);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(842,7.547501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(843,7.615835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(844,7.465393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(845,7.328001);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(846,7.111533);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(847,7.609527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(848,7.402327);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(849,7.433338);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(850,7.105501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(851,7.588815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(852,7.115189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(853,7.524273);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(854,7.301864);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(855,6.904454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(856,7.133493);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(857,7.321113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(858,7.378235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(859,6.844683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(860,6.835247);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(861,6.673628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(862,6.69721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(863,6.884774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(864,7.222319);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(865,6.717462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(866,7.516466);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(867,7.150103);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(868,6.835639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(869,7.163574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(870,6.908527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(871,6.988872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(872,7.121896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(873,7.030002);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(874,7.041425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(875,6.783315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(876,6.895207);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(877,6.865189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(878,6.709598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(879,6.985135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(880,7.13476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(881,6.855282);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(882,6.883686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(883,6.856952);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(884,6.662624);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(885,6.872268);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(886,6.912655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(887,6.866133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(888,6.663149);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(889,6.553843);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(890,7.069224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(891,6.757484);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(892,6.954736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(893,6.537682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(894,6.694447);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(895,6.479019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(896,6.769034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(897,6.330952);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(898,6.512982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(899,6.791932);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(900,6.763474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(901,6.819601);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(902,6.338494);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(903,6.641584);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(904,6.287428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(905,6.362741);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(906,5.921355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(907,6.255671);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(908,6.262736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(909,6.293698);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(910,6.365981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(911,6.397366);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(912,6.433996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(913,6.19167);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(914,6.365912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(915,6.160676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(916,6.172613);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(917,6.355378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(918,6.246744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(919,6.333007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(920,6.111554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(921,6.412945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(922,6.039941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(923,6.249588);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(924,5.995599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(925,6.102132);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(926,5.835989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(927,5.814183);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(928,5.776823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(929,5.750199);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(930,5.950945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(931,6.240518);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(932,6.052427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(933,5.978718);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(934,6.192772);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(935,5.851584);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(936,5.935782);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(937,6.181576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(938,6.175882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(939,5.815955);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(940,5.800265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(941,5.898081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(942,5.660702);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(943,6.042098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(944,5.942783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(945,5.871586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(946,5.76038);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(947,6.005672);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(948,6.016978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(949,5.861121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(950,5.737773);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(951,5.730507);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(952,5.660385);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(953,5.573767);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(954,5.56579);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(955,5.724807);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(956,5.484141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(957,5.684292);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(958,5.611597);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(959,5.597145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(960,5.400339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(961,5.58574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(962,5.322273);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(963,5.467741);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(964,5.48276);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(965,5.761209);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(966,5.481849);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(967,5.59651);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(968,5.631827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(969,5.609526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(970,5.582094);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(971,5.505834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(972,5.520537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(973,5.647853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(974,5.610716);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(975,5.634808);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(976,5.158835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(977,5.130999);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(978,5.735845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(979,5.199232);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(980,5.47628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(981,5.385629);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(982,5.439233);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(983,5.39994);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(984,5.545595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(985,5.455168);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(986,5.557162);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(987,5.297673);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(988,5.330548);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(989,4.960652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(990,5.054179);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(991,5.518191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(992,5.320611);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(993,5.521927);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(994,5.057985);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(995,5.596554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(996,5.383597);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(997,4.764127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(998,5.47819);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(999,4.912541);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1000,5.01781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1001,83.62967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetEntries(4349456);

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
   
   TH1D *VH_tagFirst_H_mass__7 = new TH1D("VH_tagFirst_H_mass__7","",1000,0,2000);
   VH_tagFirst_H_mass__7->SetBinContent(1000,23);
   VH_tagFirst_H_mass__7->SetBinContent(1001,21121);
   VH_tagFirst_H_mass__7->SetEntries(2298534);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_mass__7->SetLineColor(ci);
   VH_tagFirst_H_mass__7->SetLineWidth(2);
   VH_tagFirst_H_mass__7->SetMarkerStyle(20);
   VH_tagFirst_H_mass__7->SetMarkerSize(1.2);
   VH_tagFirst_H_mass__7->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_H_mass__7->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__7->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__7->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__7->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__7->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__7->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__7->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__7->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__7->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fx1007[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fy1007[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4580.634, 9153.079,
   9118.683, 9056.575, 8987.898, 8880.054, 9017.16, 8828.376, 8805.835, 8539.959, 8567.025, 8455.34, 8584.691, 8439.593, 8425.798, 8438.569, 8299.166, 8216.93,
   8292.645, 8148.297, 8034.308, 8100.637, 8119.646, 8119.025, 7924.431, 7963.188, 7955.069, 7765.337, 7688.773, 7746.012, 3867.339, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 26.59948 };
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fex1007[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fey1007[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.378, 0.6566515, 3.098616, 7.219683, 12.47974, 17.45319, 22.86635, 28.34914,
   33.68431, 38.90041, 43.52677, 48.81117, 52.61229, 56.36924, 59.73212, 62.23917, 64.0131, 65.26709, 66.44331, 67.04791, 67.39983, 67.52012, 67.31155, 67.54144,
   67.33716, 66.92009, 66.85351, 66.48325, 65.98396, 65.77943, 65.2522, 65.19619, 64.79127, 64.22302, 64.14877, 63.91556, 63.14102, 62.92429, 62.54542, 62.37316,
   62.33789, 61.90265, 61.75311, 61.24241, 61.64562, 61.05318, 60.95717, 60.12434, 60.12252, 59.73764, 60.12235, 59.6905, 59.65837, 59.74367, 59.27836, 58.97178,
   59.16321, 58.67193, 58.30393, 58.52846, 58.51238, 58.51372, 57.98294, 58.03337, 57.94491, 57.39736, 57.18154, 57.25517, 57.13135, 56.84454, 56.60222, 56.60253,
   55.92775, 56.08346, 56.05201, 55.7523, 55.21812, 55.08483, 55.08096, 54.81429, 54.70414, 54.23824, 54.39167, 54.40198, 53.63667, 53.64071, 53.44963, 53.04772,
   53.10673, 53.06177, 52.78006, 52.71645, 52.51113, 52.08282, 51.91932, 51.6375, 51.89163, 51.56214, 51.5704, 50.95452, 50.88402, 50.53516, 51.01425, 50.61938,
   50.53687, 50.34148, 49.94538, 50.08403, 49.87717, 49.59836, 49.63806, 49.53831, 49.27111, 49.28103, 49.1016, 48.70513, 48.77183, 48.71345, 48.60142, 48.42452,
   48.48021, 47.934, 47.81953, 48.0282, 47.47761, 47.74438, 47.64254, 47.31248, 47.34362, 47.37106, 46.89638, 46.80312, 46.65175, 46.74879, 46.76443, 46.75363,
   46.30703, 46.21698, 46.07217, 46.03875, 46.22973, 45.98784, 45.87065, 45.62316, 45.61989, 45.75748, 45.04364, 45.58717, 45.02725, 45.19113, 44.9196, 44.78804,
   44.39136, 44.73258, 44.63643, 44.44582, 44.09225, 44.48551, 44.14313, 44.13024, 43.79692, 43.68509, 43.74975, 43.56161, 43.86908, 43.69644, 43.46771, 42.93578,
   43.31121, 43.20275, 42.84412, 43.13442, 42.93284, 42.95101, 42.39116, 42.37234, 42.5361, 42.47195, 42.05102, 42.25544, 41.66114, 41.77484, 41.89303, 42.08493,
   41.6433, 41.66139, 41.70744, 41.5353, 41.76077, 41.18717, 41.26699, 41.05876, 40.86579, 40.76463, 41.21701, 40.16438, 40.87699, 40.69725, 40.48123, 40.28173,
   40.1561, 40.19112, 39.92125, 40.27732, 39.89732, 39.72699, 39.53096, 39.81588, 39.63182, 39.01468, 39.3907, 39.39164, 39.2469, 38.49768, 39.16028, 38.36304,
   38.97919, 38.88064, 38.79127, 38.30524, 38.26958, 38.25636, 38.06593, 38.27005, 37.93568, 38.40487, 37.99071, 37.85126, 37.57818, 37.7334, 37.30035, 37.50491,
   37.02788, 37.28843, 37.23112, 37.20561, 36.93054, 37.1514, 36.7696, 37.01184, 36.73213, 36.90959, 36.40645, 36.56929, 36.16141, 36.03023, 36.3311, 35.79042,
   35.93738, 36.05857, 35.65772, 35.57153, 35.85031, 35.83515, 35.05379, 35.52865, 35.15209, 35.2937, 34.81381, 34.87517, 34.88865, 34.78065, 34.54731, 34.50133,
   34.52778, 34.35843, 34.34798, 34.0383, 34.02025, 33.76917, 34.12193, 34.0324, 33.97717, 33.45977, 33.62171, 33.67084, 33.4374, 33.46774, 32.9714, 32.91332,
   32.87911, 32.8634, 32.78361, 32.80553, 32.61658, 32.46726, 32.4795, 32.38317, 32.43054, 32.52227, 31.76322, 31.75782, 31.88211, 32.02598, 31.54765, 31.77395,
   31.7367, 31.32052, 31.28715, 31.55347, 31.43125, 30.86814, 31.06609, 30.70407, 30.75989, 30.65386, 30.71303, 30.94785, 30.36808, 30.70626, 30.25963, 30.72759,
   30.47471, 30.28255, 29.80714, 30.0922, 29.68348, 29.82031, 29.48677, 30.10861, 30.11168, 29.4341, 29.36272, 29.50279, 29.37376, 29.46408, 29.01874, 28.91936,
   29.11407, 28.82285, 29.12575, 28.74944, 28.46247, 28.708, 28.63999, 28.34067, 28.50902, 28.3183, 28.07295, 28.18201, 27.97845, 27.86267, 27.45637, 27.70534,
   27.66164, 27.45459, 27.42225, 27.62911, 27.23852, 27.48774, 27.10703, 27.11902, 27.11774, 26.90965, 26.64725, 26.5477, 26.78445, 26.73038, 26.27517, 26.66882,
   26.72509, 26.43407, 26.13335, 26.40838, 26.1312, 25.76951, 25.98773, 25.78074, 26.02839, 25.63869, 25.88002, 25.44742, 25.46261, 25.25485, 25.53834, 25.36433,
   24.92147, 24.66974, 24.88056, 24.98108, 24.86594, 24.78003, 25.28487, 24.95159, 24.52165, 24.31908, 24.40319, 24.2682, 24.46296, 24.06107, 24.11374, 24.323,
   24.06904, 23.95869, 23.73561, 23.71111, 23.98647, 23.8876, 23.96458, 23.54526, 23.35498, 23.61729, 23.51042, 23.47505, 23.27072, 23.2455, 23.1431, 23.14944,
   22.97395, 22.89341, 22.75089, 22.68979, 22.70543, 22.47152, 22.7309, 22.0902, 22.69937, 22.01768, 22.41816, 22.26383, 22.20672, 22.23504, 21.96041, 22.23008,
   21.59701, 21.97451, 21.80138, 21.6003, 22.21304, 21.99667, 21.314, 21.6145, 21.59906, 21.66665, 21.32815, 21.22581, 21.15638, 21.14081, 21.23473, 20.8244,
   20.66238, 20.45154, 20.78619, 21.05169, 20.55595, 20.8992, 20.62235, 20.5523, 20.5538, 20.37361, 20.5926, 20.24266, 20.53251, 20.26453, 20.00965, 19.98102,
   20.02398, 19.83611, 19.81371, 20.12938, 19.86644, 19.33127, 19.85353, 19.48639, 19.56496, 19.51393, 19.18647, 19.28637, 19.29174, 19.19622, 19.47869, 19.27408,
   19.19654, 18.88695, 18.92075, 18.69712, 18.94334, 19.14483, 18.78309, 18.49609, 18.69738, 18.7268, 18.63575, 18.57488, 18.3898, 18.36175, 18.25256, 17.95053,
   17.87536, 18.26747, 18.28502, 17.88633, 18.18462, 18.00195, 17.74591, 18.01493, 17.91666, 17.78753, 17.55049, 17.28264, 17.66041, 17.17477, 17.44605, 17.55422,
   17.26521, 16.90787, 17.76065, 17.1481, 17.23595, 17.23325, 17.27513, 16.9843, 16.97621, 16.94063, 16.88517, 16.67977, 16.64496, 16.5489, 16.9274, 16.46102,
   16.5734, 16.28222, 16.96577, 15.96352, 16.36459, 16.21182, 16.74364, 16.06999, 16.13416, 16.48836, 15.84733, 16.21599, 15.7915, 15.89648, 16.11529, 15.75794,
   16.03255, 15.54621, 15.90966, 15.90759, 15.773, 15.58121, 15.57734, 15.3708, 15.37539, 15.09613, 15.49582, 15.17171, 15.34729, 15.45004, 14.80378, 15.35334,
   14.95629, 15.06232, 14.92109, 14.84606, 15.00734, 14.68282, 14.91121, 15.0849, 15.00782, 14.71662, 14.67223, 15.04768, 14.95205, 14.55683, 14.59902, 14.33332,
   14.63026, 14.52242, 14.413, 14.05993, 14.27365, 14.07244, 14.18959, 14.51472, 14.0272, 14.41777, 13.93994, 14.32819, 14.27353, 13.97091, 13.68633, 14.1771,
   14.23063, 13.7809, 13.69565, 13.70316, 13.66176, 13.62287, 13.61589, 13.52767, 13.75249, 13.84676, 13.64384, 13.53135, 13.25819, 13.42714, 13.39193, 13.23895,
   13.46965, 13.44096, 13.28299, 13.18497, 13.12307, 12.96237, 13.06102, 12.99563, 13.2064, 13.02823, 13.07515, 12.92454, 13.03278, 12.93229, 13.02515, 12.83697,
   13.23467, 12.66794, 12.3718, 12.60051, 12.53059, 12.5302, 12.12549, 12.43152, 12.66852, 12.41827, 12.67417, 12.01268, 12.22342, 12.09412, 12.36057, 12.22647,
   12.20915, 12.00723, 12.30196, 12.47238, 11.94544, 11.89373, 11.98915, 12.42032, 12.0872, 11.78806, 12.07456, 11.64644, 11.59535, 11.723, 11.85123, 11.70236,
   11.39418, 11.70646, 11.7711, 12.25533, 12.02481, 11.80305, 11.68254, 11.09821, 11.24643, 11.29931, 11.76425, 11.30815, 11.41232, 11.12905, 11.13512, 11.43334,
   11.01798, 11.1551, 11.14024, 11.19947, 11.16078, 10.49706, 11.19967, 10.85346, 10.9804, 10.91075, 11.0573, 10.88414, 10.70965, 10.98708, 10.83796, 11.07957,
   11.17136, 11.0085, 11.22307, 10.66869, 10.5698, 10.52938, 10.92634, 10.67508, 10.61818, 10.88349, 10.80001, 10.39962, 10.42872, 10.50506, 10.60083, 10.47878,
   10.11801, 10.25759, 10.27846, 10.12278, 10.47604, 10.22408, 10.44229, 9.992688, 10.30425, 10.37758, 10.12923, 10.11121, 10.33454, 9.978961, 9.947981, 9.874839,
   10.00818, 10.15562, 9.960364, 10.0281, 10.20531, 10.02109, 9.665787, 9.725666, 9.705127, 9.461192, 9.741047, 9.708875, 9.440267, 10.01944, 9.277432, 9.478993,
   9.63182, 9.654525, 9.814557, 9.7326, 9.758733, 9.761554, 9.825127, 9.407018, 9.528485, 9.368456, 9.370935, 9.379694, 9.742127, 9.449753, 9.560304, 8.97589,
   9.272945, 9.179411, 9.178854, 8.729872, 8.960486, 9.129286, 9.161733, 8.852437, 9.131341, 8.488132, 9.214638, 8.719557, 9.069249, 9.049384, 8.853793, 8.830036,
   9.031947, 8.947668, 8.59853, 8.667093, 8.626139, 8.626786, 8.904567, 8.841458, 8.526448, 8.660996, 8.187617, 8.678474, 8.70829, 8.630326, 8.62703, 8.843346,
   8.594723, 8.864361, 8.377054, 8.485304, 8.57176, 8.375102, 8.458697, 8.125614, 8.454988, 8.221353, 8.53439, 8.314962, 8.448419, 8.466855, 8.125572, 8.517528,
   8.122232, 7.997552, 8.329277, 8.158705, 8.524163, 8.106212, 7.905698, 8.164038, 8.2555, 7.981955, 8.181663, 8.144953, 7.735551, 7.942504, 7.97169, 7.919264,
   7.772019, 7.924339, 7.876458, 7.983424, 7.897135, 7.877244, 7.695425, 7.816303, 7.65763, 7.864078, 7.480053, 7.552988, 7.732651, 7.429477, 7.602416, 7.922749,
   7.466874, 7.213483, 7.371654, 7.627393, 7.362129, 7.380801, 7.306569, 7.044626, 7.547501, 7.615835, 7.465393, 7.328001, 7.111533, 7.609527, 7.402327, 7.433338,
   7.105501, 7.588815, 7.115189, 7.524273, 7.301864, 6.904454, 7.133493, 7.321113, 7.378235, 6.844683, 6.835247, 6.673628, 6.69721, 6.884774, 7.222319, 6.717462,
   7.516466, 7.150103, 6.835639, 7.163574, 6.908527, 6.988872, 7.121896, 7.030002, 7.041425, 6.783315, 6.895207, 6.865189, 6.709598, 6.985135, 7.13476, 6.855282,
   6.883686, 6.856952, 6.662624, 6.872268, 6.912655, 6.866133, 6.663149, 6.553843, 7.069224, 6.757484, 6.954736, 6.537682, 6.694447, 6.479019, 6.769034, 6.330952,
   6.512982, 6.791932, 6.763474, 6.819601, 6.338494, 6.641584, 6.287428, 6.362741, 5.921355, 6.255671, 6.262736, 6.293698, 6.365981, 6.397366, 6.433996, 6.19167,
   6.365912, 6.160676, 6.172613, 6.355378, 6.246744, 6.333007, 6.111554, 6.412945, 6.039941, 6.249588, 5.995599, 6.102132, 5.835989, 5.814183, 5.776823, 5.750199,
   5.950945, 6.240518, 6.052427, 5.978718, 6.192772, 5.851584, 5.935782, 6.181576, 6.175882, 5.815955, 5.800265, 5.898081, 5.660702, 6.042098, 5.942783, 5.871586,
   5.76038, 6.005672, 6.016978, 5.861121, 5.737773, 5.730507, 5.660385, 5.573767, 5.56579, 5.724807, 5.484141, 5.684292, 5.611597, 5.597145, 5.400339, 5.58574,
   5.322273, 5.467741, 5.48276, 5.761209, 5.481849, 5.59651, 5.631827, 5.609526, 5.582094, 5.505834, 5.520537, 5.647853, 5.610716, 5.634808, 5.158835, 5.130999,
   5.735845, 5.199232, 5.47628, 5.385629, 5.439233, 5.39994, 5.545595, 5.455168, 5.557162, 5.297673, 5.330548, 4.960652, 5.054179, 5.518191, 5.320611, 5.521927,
   5.057985, 5.596554, 5.383597, 4.764127, 5.47819, 4.912541, 5.01781 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_H_mass_fx1007,Graph_from_VH_tagFirst_2b1c_H_mass_fy1007,Graph_from_VH_tagFirst_2b1c_H_mass_fex1007,Graph_from_VH_tagFirst_2b1c_H_mass_fey1007);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_H_mass1007 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_H_mass1007","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1007->SetMinimum(-995.8408);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1007->SetMaximum(10143.75);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1007->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1007->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1007->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1007->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1007->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1007->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1007->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1007->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_H_mass1007);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_H_mass","Data (BTagCSV, 2016)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_mass_tagFirst_SR_16->cd();
  
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
   
   TH1D *data_mc_ratio__8 = new TH1D("data_mc_ratio__8","",1000,0,2000);
   data_mc_ratio__8->SetBinContent(1000,0.8646786);
   data_mc_ratio__8->SetBinContent(1001,1.248638);
   data_mc_ratio__8->SetBinError(1000,0.180298);
   data_mc_ratio__8->SetBinError(1001,0.01057956);
   data_mc_ratio__8->SetMinimum(0.4);
   data_mc_ratio__8->SetMaximum(1.6);
   data_mc_ratio__8->SetEntries(12.6479);
   data_mc_ratio__8->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__8->SetLineColor(ci);
   data_mc_ratio__8->SetLineWidth(2);
   data_mc_ratio__8->SetMarkerStyle(20);
   data_mc_ratio__8->SetMarkerSize(1.2);
   data_mc_ratio__8->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__8->GetXaxis()->SetRange(1,150);
   data_mc_ratio__8->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__8->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__8->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__8->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__8->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__8->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__8->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__8->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__8->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__8->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__8->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__8->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__8->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__8->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__8->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__8->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1008[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1008[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1008[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1008[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01365432, 0.006814446,
   0.006836282, 0.006835106, 0.006870696, 0.006896626, 0.006836478, 0.006915562, 0.006922361, 0.007040355, 0.007017899, 0.007065078, 0.007003438, 0.007072675, 0.007080442, 0.007079834, 0.007142689, 0.007176863,
   0.00713442, 0.007200514, 0.007256869, 0.007225168, 0.007206273, 0.007206989, 0.007316984, 0.007287706, 0.007284024, 0.007391484, 0.007437017, 0.007391568, 0.01477278, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1886432 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1008,Graph_from_mc_statistical_error_fy1008,Graph_from_mc_statistical_error_fex1008,Graph_from_mc_statistical_error_fey1008);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1008 = new TH1F("Graph_Graph_from_mc_statistical_error1008","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1008->SetMinimum(0.7736282);
   Graph_Graph_from_mc_statistical_error1008->SetMaximum(1.226372);
   Graph_Graph_from_mc_statistical_error1008->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1008->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1008->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1008->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1008);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagFirst_SR_16->cd();
   H_mass_tagFirst_SR_16->Modified();
   H_mass_tagFirst_SR_16->cd();
   H_mass_tagFirst_SR_16->SetSelected(H_mass_tagFirst_SR_16);
}
