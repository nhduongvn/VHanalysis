#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagFirst_SR_18()
{
//=========Macro generated from canvas: H_mass_tagFirst_SR_18/H_mass_tagFirst_SR_18
//=========  (Thu Jan 25 12:40:55 2024) by ROOT version 6.28/10
   TCanvas *H_mass_tagFirst_SR_18 = new TCanvas("H_mass_tagFirst_SR_18", "H_mass_tagFirst_SR_18",0,0,600,600);
   H_mass_tagFirst_SR_18->SetHighLightColor(2);
   H_mass_tagFirst_SR_18->Range(0,0,1,1);
   H_mass_tagFirst_SR_18->SetFillColor(0);
   H_mass_tagFirst_SR_18->SetFillStyle(4000);
   H_mass_tagFirst_SR_18->SetBorderMode(0);
   H_mass_tagFirst_SR_18->SetBorderSize(2);
   H_mass_tagFirst_SR_18->SetFrameFillStyle(1000);
   H_mass_tagFirst_SR_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-29.13437,315.7258,29115.24);
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
   st->SetMaximum(26200.8);
   
   TH1F *st_stack_101 = new TH1F("st_stack_101","",1000,0,2000);
   st_stack_101->SetMinimum(0.01);
   st_stack_101->SetMaximum(26200.8);
   st_stack_101->SetDirectory(nullptr);
   st_stack_101->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_101->SetLineColor(ci);
   st_stack_101->SetLineWidth(0);
   st_stack_101->GetXaxis()->SetRange(1,150);
   st_stack_101->GetXaxis()->SetLabelFont(42);
   st_stack_101->GetXaxis()->SetTitleOffset(1);
   st_stack_101->GetXaxis()->SetTitleFont(42);
   st_stack_101->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_101->GetYaxis()->SetLabelFont(42);
   st_stack_101->GetYaxis()->SetLabelSize(0.05);
   st_stack_101->GetYaxis()->SetTitleSize(0.057);
   st_stack_101->GetYaxis()->SetTitleOffset(1.2);
   st_stack_101->GetYaxis()->SetTitleFont(42);
   st_stack_101->GetZaxis()->SetLabelFont(42);
   st_stack_101->GetZaxis()->SetTitleOffset(1);
   st_stack_101->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_101);
   
   
   TH1D *VH_tagFirst_2b1c_H_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(48,5887.44);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(49,11790.36);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(50,11707.92);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(51,11644.56);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(52,11479.32);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(53,11331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(54,11329.92);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(55,11383.2);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(56,11170.08);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(57,11201.4);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(58,11114.64);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(59,11020.32);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(60,10993.32);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(61,10792.8);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(62,10789.2);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(63,10754.28);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(64,10609.92);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(65,10592.28);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(66,10652.4);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(67,10631.88);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(68,10485.36);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(69,10464.48);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(70,10305.72);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(71,10217.52);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(72,10120.32);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(73,10124.64);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(74,10081.8);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(75,10001.52);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(76,9844.2);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(77,9795.24);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(78,4933.8);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1000,38.52);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1001,17811.72);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(11,0.5091169);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(12,2.468036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(13,6.409618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(14,11.65978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(15,17.33242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(16,23.63147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(17,29.62518);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(18,35.5052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(19,40.9847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(20,46.53479);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(21,51.19727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(22,54.9858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(23,58.33333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(24,61.27302);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(25,63.71492);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(26,65.31198);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(27,66.78461);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(28,67.8884);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(29,68.65437);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(30,69.28106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(31,69.88452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(32,69.59648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(33,69.76573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(34,69.74715);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(35,69.35585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(36,69.26703);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(37,69.35491);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(38,68.97923);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(39,68.26724);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(40,68.31468);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(41,67.92848);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(42,67.05767);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(43,66.89804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(44,66.90772);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(45,66.48314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(46,66.02836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(47,65.68101);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(48,65.14906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(49,65.15005);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(50,64.92189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(51,64.74598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(52,64.28495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(53,63.8683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(54,63.86526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(55,64.01525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(56,63.41316);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(57,63.502);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(58,63.2556);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(59,62.98663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(60,62.90942);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(61,62.33304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(62,62.32264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(63,62.22171);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(64,61.80268);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(65,61.75128);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(66,61.92628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(67,61.8666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(68,61.43883);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(69,61.37762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(70,60.91026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(71,60.64905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(72,60.35988);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(73,60.37276);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(74,60.2449);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(75,60.00456);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(76,59.53077);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(77,59.38254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(78,59.4981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(79,58.69435);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(80,58.78261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(81,58.48311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(82,58.42435);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(83,58.03374);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(84,57.73709);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(85,57.431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(86,57.1777);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(87,57.13008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(88,57.11307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(89,57.30675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(90,56.9722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(91,56.38455);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(92,56.23265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(93,55.8267);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(94,55.71981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(95,55.42831);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(96,55.22334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(97,55.21395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(98,55.42714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(99,54.90679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(100,54.99523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(101,54.72947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(102,54.25022);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(103,54.12825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(104,53.80525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(105,53.5348);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(106,53.63154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(107,53.47061);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(108,53.24107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(109,53.12654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(110,52.65977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(111,52.76794);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(112,52.645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(113,52.34009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(114,52.45263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(115,52.20248);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(116,52.067);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(117,51.81499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(118,51.67348);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(119,51.58688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(120,51.64338);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(121,51.17448);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(122,51.40568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(123,51.02484);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(124,50.90532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(125,50.78425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(126,50.58352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(127,50.56687);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(128,50.20419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(129,50.4912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(130,50.17191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(131,50.0633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(132,50.23);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(133,49.5677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(134,49.87917);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(135,49.67217);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(136,49.63824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(137,49.45252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(138,49.23716);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(139,48.9772);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(140,49.37909);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(141,49.33314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(142,48.87787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(143,48.70123);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(144,48.95735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(145,48.31919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(146,48.61067);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(147,48.32589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(148,48.59467);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(149,48.09875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(150,48.20775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(151,47.93816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(152,47.70917);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(153,47.55817);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(154,47.69558);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(155,47.39985);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(156,47.66569);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(157,47.52);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(158,47.13389);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(159,46.83184);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(160,47.15725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(161,46.88577);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(162,46.883);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(163,46.99896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(164,46.55706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(165,46.70575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(166,46.55567);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(167,46.62799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(168,46.28346);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(169,46.18815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(170,45.92082);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(171,46.00541);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(172,45.99414);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(173,46.08562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(174,45.51972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(175,45.60931);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(176,45.41853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(177,45.47557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(178,45.27134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(179,45.37428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(180,44.92794);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(181,44.71687);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(182,44.59062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(183,45);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(184,44.63855);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(185,44.74005);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(186,44.50334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(187,44.05112);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(188,44.34434);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(189,43.97014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(190,44.07171);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(191,43.93918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(192,43.95834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(193,43.85947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(194,43.63135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(195,43.64768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(196,43.68775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(197,43.07833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(198,43.34526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(199,43.08134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(200,43.3602);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(201,42.99853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(202,42.78854);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(203,42.92915);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(204,42.49068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(205,42.25977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(206,42.18764);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(207,42.38532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(208,42.14307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(209,42.04147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(210,42.15998);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(211,41.83442);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(212,41.9427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(213,41.64346);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(214,41.72274);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(215,41.82512);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(216,41.48444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(217,41.461);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(218,40.95465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(219,41.47037);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(220,41.17084);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(221,41.11099);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(222,41.15353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(223,40.61304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(224,40.47559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(225,40.47719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(226,40.46759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(227,40.18316);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(228,40.39547);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(229,40.12022);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(230,39.98108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(231,39.85283);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(232,40.0588);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(233,40.02481);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(234,39.78285);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(235,39.77145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(236,39.11926);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(237,39.2433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(238,39.56726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(239,38.98984);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(240,39.07949);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(241,39.09109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(242,38.87);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(243,39.159);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(244,38.73975);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(245,38.51159);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(246,38.38181);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(247,38.11752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(248,38.27868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(249,38.03072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(250,37.9864);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(251,38.21939);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(252,38.13452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(253,37.84626);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(254,37.7657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(255,37.70388);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(256,37.87878);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(257,37.47287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(258,37.16902);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(259,37.19342);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(260,37.32559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(261,37.1097);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(262,36.76057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(263,36.74999);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(264,36.65111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(265,36.69529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(266,36.68999);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(267,36.42766);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(268,36.21178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(269,36.41876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(270,36.23146);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(271,35.86475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(272,35.88281);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(273,35.881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(274,35.79059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(275,35.94235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(276,35.56355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(277,35.39003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(278,35.6109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(279,35.35706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(280,35.46868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(281,35.48329);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(282,34.98674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(283,34.91629);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(284,34.89215);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(285,34.90329);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(286,34.3569);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(287,34.78241);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(288,34.39084);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(289,34.39649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(290,34.4492);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(291,34.10323);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(292,34.16019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(293,33.72875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(294,33.89166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(295,34.01762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(296,33.26447);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(297,33.53995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(298,33.69223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(299,33.22158);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(300,33.38697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(301,33.18255);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(302,33.38309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(303,32.76593);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(304,32.83705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(305,32.78768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(306,32.53173);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(307,32.74417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(308,32.55961);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(309,32.406);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(310,32.5795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(311,32.15507);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(312,32.0683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(313,32.21547);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(314,32.11071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(315,32.27978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(316,31.79026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(317,31.75763);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(318,31.65135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(319,31.52827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(320,31.45626);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(321,31.42328);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(322,31.19769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(323,31.15612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(324,31.09992);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(325,30.80052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(326,30.52155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(327,30.69726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(328,30.68037);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(329,30.82155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(330,30.64444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(331,30.50031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(332,30.42799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(333,30.54277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(334,30.012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(335,30.23571);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(336,29.85614);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(337,29.92551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(338,29.19109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(339,29.94499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(340,29.6208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(341,29.41004);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(342,29.58797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(343,29.38359);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(344,28.93692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(345,29.22881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(346,29.31072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(347,29.19997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(348,28.9078);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(349,29.22659);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(350,29.0085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(351,28.74144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(352,28.87415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(353,28.53099);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(354,28.2686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(355,28.32127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(356,28.40808);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(357,28.28693);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(358,28.32127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(359,27.88316);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(360,27.96206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(361,28.00837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(362,28.10768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(363,27.92728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(364,27.71065);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(365,27.28411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(366,27.49938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(367,27.3671);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(368,27.2651);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(369,27.28173);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(370,27.14839);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(371,27.31734);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(372,27.06951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(373,26.74197);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(374,26.91587);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(375,26.65459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(376,26.78071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(377,26.48387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(378,26.37108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(379,26.49121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(380,26.44959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(381,26.09193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(382,26.33911);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(383,26.05714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(384,26.16385);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(385,25.79721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(386,25.93749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(387,25.78967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(388,25.60812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(389,25.66878);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(390,25.55746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(391,25.32057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(392,25.50416);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(393,25.33336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(394,25.40233);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(395,25.28728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(396,25.14594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(397,25.22313);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(398,24.64883);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(399,24.82173);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(400,24.74067);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(401,24.53288);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(402,24.96231);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(403,24.74853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(404,24.5091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(405,24.66197);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(406,24.34463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(407,24.45616);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(408,24.09312);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(409,23.96367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(410,24.02848);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(411,24.08505);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(412,24.12);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(413,24.02848);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(414,23.77636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(415,23.8036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(416,23.78453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(417,23.52429);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(418,23.69992);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(419,23.48017);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(420,23.38892);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(421,23.67804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(422,23.40277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(423,23.22767);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(424,22.794);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(425,23.02593);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(426,23.29175);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(427,22.93005);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(428,22.947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(429,22.81957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(430,22.28804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(431,22.29967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(432,22.66285);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(433,22.22107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(434,22.60559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(435,22.22982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(436,22.02776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(437,22.49352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(438,22.38667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(439,21.82384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(440,21.92456);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(441,21.92161);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(442,21.95705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(443,21.90386);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(444,21.83275);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(445,21.68384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(446,21.44343);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(447,21.57899);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(448,21.47363);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(449,21.57599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(450,21.34955);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(451,21.55796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(452,21.31917);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(453,20.98216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(454,20.99143);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(455,20.9976);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(456,20.68669);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(457,20.77733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(458,21.07768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(459,20.29136);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(460,21.2003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(461,20.60509);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(462,20.7711);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(463,20.47891);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(464,20.58621);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(465,20.55155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(466,20.44724);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(467,20.13105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(468,20.14714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(469,19.87187);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(470,20.05042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(471,20.10528);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(472,19.95972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(473,20.14714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(474,19.93698);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(475,19.30956);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(476,19.70486);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(477,19.81309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(478,19.57619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(479,19.73115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(480,19.62248);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(481,19.46332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(482,19.32633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(483,19.43333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(484,19.56957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(485,19.17486);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(486,19.15795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(487,19.26589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(488,19.20862);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(489,19.16134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(490,19.09358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(491,18.82012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(492,18.96759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(493,19.05281);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(494,18.7891);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(495,18.96759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(496,18.80289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(497,18.81323);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(498,18.53913);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(499,18.39526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(500,18.6089);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(501,18.33881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(502,18.52164);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(503,18.2751);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(504,18.55659);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(505,18.0036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(506,18.35647);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(507,17.91339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(508,17.95675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(509,17.90616);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(510,18.05751);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(511,17.95314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(512,17.65836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(513,17.91701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(514,17.58113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(515,17.75716);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(516,17.47762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(517,17.36604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(518,17.24246);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(519,17.57007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(520,17.15203);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(521,17.6767);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(522,17.3212);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(523,17.45165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(524,16.85092);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(525,17.01548);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(526,17.22366);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(527,17.04211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(528,16.89701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(529,17.01928);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(530,16.83938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(531,16.91234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(532,16.74677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(533,16.73903);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(534,16.9888);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(535,16.68863);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(536,16.91234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(537,16.72354);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(538,16.59127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(539,16.98498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(540,16.5012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(541,16.56);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(542,16.16797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(543,16.21999);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(544,16.47762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(545,16.33147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(546,16.10774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(547,16.08761);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(548,16.29969);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(549,15.89717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(550,15.9947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(551,16.12784);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(552,15.99875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(553,15.62582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(554,16.31162);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(555,15.77852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(556,15.35391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(557,15.57598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(558,15.51763);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(559,15.73328);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(560,15.84409);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(561,15.27351);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(562,15.70855);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(563,15.48837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(564,15.23102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(565,15.43388);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(566,15.01247);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(567,15.42969);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(568,14.99952);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(569,14.73803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(570,15.27775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(571,15.05558);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(572,15.31587);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(573,15.40867);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(574,14.79946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(575,14.96492);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(576,14.65868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(577,14.65868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(578,14.6144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(579,14.41349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(580,14.51206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(581,14.29159);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(582,14.57889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(583,14.45838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(584,14.50313);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(585,14.68518);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(586,14.42248);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(587,14.52099);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(588,14.42697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(589,14.42697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(590,14.22797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(591,14.22342);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(592,14.13659);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(593,14.07687);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(594,14.37748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(595,14.33234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(596,14.19149);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(597,13.97524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(598,13.96596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(599,14.10906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(600,14.18236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(601,13.86818);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(602,13.66578);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(603,13.73201);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(604,13.92414);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(605,13.76971);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(606,13.68474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(607,13.53236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(608,13.59924);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(609,13.43625);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(610,13.70366);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(611,13.38309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(612,13.52278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(613,13.41694);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(614,13.4892);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(615,13.33945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(616,13.39761);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(617,13.10914);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(618,13.1042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(619,13.31027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(620,13.07449);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(621,12.96);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(622,13.07945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(623,13.26638);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(624,13.01986);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(625,13.15355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(626,12.82429);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(627,13.13383);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(628,12.99994);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(629,12.81924);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(630,12.86969);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(631,12.79394);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(632,12.68713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(633,12.74319);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(634,12.70754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(635,12.51227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(636,13.05962);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(637,12.48634);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(638,12.53813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(639,12.34543);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(640,12.5019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(641,12.5019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(642,12.25587);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(643,12.73301);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(644,12.09086);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(645,12.36116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(646,12.53813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(647,12.25058);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(648,12.22941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(649,12.08013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(650,12.26644);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(651,11.95612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(652,12.22941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(653,11.97778);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(654,11.92356);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(655,11.80339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(656,11.83628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(657,11.91812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(658,12.0102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(659,11.84723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(660,11.89635);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(661,11.91268);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(662,11.85816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(663,11.61523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(664,11.71522);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(665,11.64866);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(666,11.31569);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(667,11.54248);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(668,11.4862);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(669,11.54809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(670,11.44664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(671,11.57611);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(672,11.31569);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(673,11.4862);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(674,11.63753);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(675,11.67644);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(676,11.41262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(677,11.62081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(678,11.12511);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(679,11.26403);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(680,11.07841);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(681,11.22946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(682,11.20636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(683,11.1832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(684,11.00211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(685,11.15419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(686,11.34428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(687,10.87176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(688,10.90152);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(689,11.008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(690,10.94897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(691,10.9134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(692,10.78198);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(693,10.72172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(694,10.66718);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(695,10.90152);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(696,10.52654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(697,10.78799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(698,10.61237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(699,10.52654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(700,10.84192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(701,10.55727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(702,10.78198);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(703,10.4586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(704,10.76394);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(705,10.45241);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(706,10.41514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(707,10.69145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(708,10.21411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(709,10.40269);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(710,10.3715);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(711,10.5818);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(712,10.41514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(713,10.33394);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(714,10.25842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(715,10.61847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(716,10.359);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(717,10.23945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(718,10.60015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(719,10.4648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(720,10.18234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(721,9.859006);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(722,9.766555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(723,10.14408);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(724,10.14408);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(725,9.83268);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(726,10.20776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(727,9.812889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(728,10.15047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(729,9.713331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(730,9.78644);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(731,10.0349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(732,9.779816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(733,9.304451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(734,9.766555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(735,9.845852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(736,9.66652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(737,9.394552);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(738,10.06713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(739,9.976613);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(740,9.78644);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(741,9.686609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(742,9.476962);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(743,9.290511);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(744,9.497452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(745,9.456426);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(746,9.408337);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(747,9.57221);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(748,9.093118);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(749,9.408337);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(750,9.339208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(751,9.483797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(752,9.483797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(753,9.178235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(754,9.415222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(755,9.511088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(756,9.304451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(757,9.121579);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(758,9.497452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(759,9.332267);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(760,9);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(761,9.043097);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(762,9.213468);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(763,9.415222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(764,9);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(765,8.832848);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(766,9.100242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(767,8.862144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(768,8.669948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(769,8.707238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(770,8.810812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(771,8.862144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(772,8.818163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(773,9.035928);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(774,8.736956);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(775,9.007197);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(776,9.035928);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(777,8.534354);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(778,8.334603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(779,8.818163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(780,8.79609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(781,8.632497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(782,8.64);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(783,8.832848);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(784,8.365644);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(785,8.654987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(786,8.617471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(787,8.564672);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(788,8.617471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(789,8.647497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(790,8.751777);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(791,8.503929);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(792,8.549526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(793,8.411991);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(794,8.057891);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(795,8.357894);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(796,8.57979);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(797,8.256488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(798,8.326824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(799,8.098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(800,8.0014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(801,8.381122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(802,8.209263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(803,8.465743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(804,8.411991);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(805,7.812912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(806,8.185548);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(807,8.303445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(808,8.256488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(809,8.105998);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(810,8.153821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(811,8.065928);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(812,8.089994);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(813,7.887205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(814,8.049845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(815,7.804614);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(816,7.895416);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(817,7.737907);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(818,8.089994);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(819,7.821202);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(820,7.754637);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(821,7.695921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(822,7.662167);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(823,7.837755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(824,8.017581);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(825,7.936347);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(826,7.985186);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(827,7.796307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(828,7.746277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(829,7.821202);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(830,7.56);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(831,7.619764);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(832,7.746277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(833,7.585671);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(834,7.42159);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(835,7.412854);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(836,7.737907);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(837,7.695921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(838,8.025659);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(839,7.542838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(840,7.482459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(841,7.602736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(842,7.679062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(843,7.712743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(844,7.594208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(845,7.787991);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(846,7.262727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(847,7.447738);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(848,7.091178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(849,7.878985);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(850,7.404107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(851,7.42159);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(852,7.145796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(853,7.154858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(854,7.56);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(855,7.679062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(856,7.333758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(857,7.10943);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(858,7.23591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(859,7.136722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(860,7.39535);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(861,7.181977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(862,6.83052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(863,6.952755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(864,6.924738);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(865,6.792466);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(866,7.05453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(867,6.87779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(868,7.360217);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(869,7.045339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(870,6.915374);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(871,7.298329);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(872,6.849467);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(873,6.915374);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(874,6.952755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(875,6.87779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(876,6.754199);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(877,7.271644);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(878,6.657567);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(879,6.802);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(880,6.924738);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(881,6.896608);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(882,6.77336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(883,6.87779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(884,6.802);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(885,6.821026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(886,6.763786);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(887,7.118539);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(888,6.754199);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(889,6.489992);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(890,6.715713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(891,6.224982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(892,6.539725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(893,6.549626);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(894,6.338454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(895,6.389366);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(896,6.715713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(897,6.44993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(898,6.647827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(899,6.235383);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(900,6.338454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(901,6.539725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(902,6.224982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(903,6.647827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(904,6.499969);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(905,6.715713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(906,6.48);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(907,6.638072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(908,6.28713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(909,6.429806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(910,6.12);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(911,6.3995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(912,6.077499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(913,6.214564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(914,6.28713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(915,6.162207);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(916,6.098787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(917,6.429806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(918,6.088152);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(919,6.214564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(920,6.109403);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(921,6.14114);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(922,6.256133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(923,6.297428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(924,6.151683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(925,6.12);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(926,6.14114);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(927,6.276814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(928,6.183203);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(929,6.389366);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(930,6.077499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(931,6.077499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(932,5.926348);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(933,5.871422);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(934,5.782456);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(935,5.937272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(936,5.804826);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(937,5.937272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(938,6.098787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(939,5.804826);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(940,5.838219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(941,5.980769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(942,5.915404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(943,5.849308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(944,5.893454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(945,5.969925);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(946,6.0024);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(947,5.815978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(948,5.76);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(949,5.980769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(950,5.969925);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(951,5.771239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(952,5.55381);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(953,5.6921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(954,5.600286);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(955,5.915404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(956,5.669286);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(957,5.703473);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(958,5.518695);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(959,5.54213);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(960,5.363879);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(961,5.771239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(962,5.375946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(963,5.611845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(964,5.827109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(965,5.447789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(966,5.771239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(967,5.804826);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(968,5.771239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(969,5.278636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(970,5.577096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(971,5.6921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(972,5.351785);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(973,5.103881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(974,5.495162);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(975,5.363879);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(976,5.435881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(977,5.179498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(978,5.565465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(979,5.027126);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(980,5.04);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(981,5.588703);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(982,4.843305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(983,5.447789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(984,5.254027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(985,5.55381);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(986,5.351785);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(987,5.726151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(988,5.483357);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(989,5.12921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(990,5.530425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(991,5.435881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(992,5.20446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(993,5.495162);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(994,5.254027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(995,5.254027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(996,5.518695);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(997,4.949182);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(998,5.229302);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(999,5.166972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1000,5.052841);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1001,80.07633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetEntries(6884267);

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
   
   TH1D *VH_tagFirst_H_mass__201 = new TH1D("VH_tagFirst_H_mass__201","",1000,0,2000);
   VH_tagFirst_H_mass__201->SetBinContent(1000,55);
   VH_tagFirst_H_mass__201->SetBinContent(1001,23972);
   VH_tagFirst_H_mass__201->SetEntries(3106559);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_mass__201->SetLineColor(ci);
   VH_tagFirst_H_mass__201->SetLineWidth(2);
   VH_tagFirst_H_mass__201->SetMarkerStyle(20);
   VH_tagFirst_H_mass__201->SetMarkerSize(1.2);
   VH_tagFirst_H_mass__201->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_H_mass__201->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__201->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__201->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__201->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__201->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__201->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__201->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__201->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__201->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fx1201[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fy1201[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5887.44, 11790.36,
   11707.92, 11644.56, 11479.32, 11331, 11329.92, 11383.2, 11170.08, 11201.4, 11114.64, 11020.32, 10993.32, 10792.8, 10789.2, 10754.28, 10609.92, 10592.28,
   10652.4, 10631.88, 10485.36, 10464.48, 10305.72, 10217.52, 10120.32, 10124.64, 10081.8, 10001.52, 9844.2, 9795.24, 4933.8, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 38.52 };
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fex1201[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fey1201[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.5091169, 2.468036, 6.409618, 11.65978, 17.33242, 23.63147, 29.62518,
   35.5052, 40.9847, 46.53479, 51.19727, 54.9858, 58.33333, 61.27302, 63.71492, 65.31198, 66.78461, 67.8884, 68.65437, 69.28106, 69.88452, 69.59648, 69.76573,
   69.74715, 69.35585, 69.26703, 69.35491, 68.97923, 68.26724, 68.31468, 67.92848, 67.05767, 66.89804, 66.90772, 66.48314, 66.02836, 65.68101, 65.14906, 65.15005,
   64.92189, 64.74598, 64.28495, 63.8683, 63.86526, 64.01525, 63.41316, 63.502, 63.2556, 62.98663, 62.90942, 62.33304, 62.32264, 62.22171, 61.80268, 61.75128,
   61.92628, 61.8666, 61.43883, 61.37762, 60.91026, 60.64905, 60.35988, 60.37276, 60.2449, 60.00456, 59.53077, 59.38254, 59.4981, 58.69435, 58.78261, 58.48311,
   58.42435, 58.03374, 57.73709, 57.431, 57.1777, 57.13008, 57.11307, 57.30675, 56.9722, 56.38455, 56.23265, 55.8267, 55.71981, 55.42831, 55.22334, 55.21395,
   55.42714, 54.90679, 54.99523, 54.72947, 54.25022, 54.12825, 53.80525, 53.5348, 53.63154, 53.47061, 53.24107, 53.12654, 52.65977, 52.76794, 52.645, 52.34009,
   52.45263, 52.20248, 52.067, 51.81499, 51.67348, 51.58688, 51.64338, 51.17448, 51.40568, 51.02484, 50.90532, 50.78425, 50.58352, 50.56687, 50.20419, 50.4912,
   50.17191, 50.0633, 50.23, 49.5677, 49.87917, 49.67217, 49.63824, 49.45252, 49.23716, 48.9772, 49.37909, 49.33314, 48.87787, 48.70123, 48.95735, 48.31919,
   48.61067, 48.32589, 48.59467, 48.09875, 48.20775, 47.93816, 47.70917, 47.55817, 47.69558, 47.39985, 47.66569, 47.52, 47.13389, 46.83184, 47.15725, 46.88577,
   46.883, 46.99896, 46.55706, 46.70575, 46.55567, 46.62799, 46.28346, 46.18815, 45.92082, 46.00541, 45.99414, 46.08562, 45.51972, 45.60931, 45.41853, 45.47557,
   45.27134, 45.37428, 44.92794, 44.71687, 44.59062, 45, 44.63855, 44.74005, 44.50334, 44.05112, 44.34434, 43.97014, 44.07171, 43.93918, 43.95834, 43.85947,
   43.63135, 43.64768, 43.68775, 43.07833, 43.34526, 43.08134, 43.3602, 42.99853, 42.78854, 42.92915, 42.49068, 42.25977, 42.18764, 42.38532, 42.14307, 42.04147,
   42.15998, 41.83442, 41.9427, 41.64346, 41.72274, 41.82512, 41.48444, 41.461, 40.95465, 41.47037, 41.17084, 41.11099, 41.15353, 40.61304, 40.47559, 40.47719,
   40.46759, 40.18316, 40.39547, 40.12022, 39.98108, 39.85283, 40.0588, 40.02481, 39.78285, 39.77145, 39.11926, 39.2433, 39.56726, 38.98984, 39.07949, 39.09109,
   38.87, 39.159, 38.73975, 38.51159, 38.38181, 38.11752, 38.27868, 38.03072, 37.9864, 38.21939, 38.13452, 37.84626, 37.7657, 37.70388, 37.87878, 37.47287,
   37.16902, 37.19342, 37.32559, 37.1097, 36.76057, 36.74999, 36.65111, 36.69529, 36.68999, 36.42766, 36.21178, 36.41876, 36.23146, 35.86475, 35.88281, 35.881,
   35.79059, 35.94235, 35.56355, 35.39003, 35.6109, 35.35706, 35.46868, 35.48329, 34.98674, 34.91629, 34.89215, 34.90329, 34.3569, 34.78241, 34.39084, 34.39649,
   34.4492, 34.10323, 34.16019, 33.72875, 33.89166, 34.01762, 33.26447, 33.53995, 33.69223, 33.22158, 33.38697, 33.18255, 33.38309, 32.76593, 32.83705, 32.78768,
   32.53173, 32.74417, 32.55961, 32.406, 32.5795, 32.15507, 32.0683, 32.21547, 32.11071, 32.27978, 31.79026, 31.75763, 31.65135, 31.52827, 31.45626, 31.42328,
   31.19769, 31.15612, 31.09992, 30.80052, 30.52155, 30.69726, 30.68037, 30.82155, 30.64444, 30.50031, 30.42799, 30.54277, 30.012, 30.23571, 29.85614, 29.92551,
   29.19109, 29.94499, 29.6208, 29.41004, 29.58797, 29.38359, 28.93692, 29.22881, 29.31072, 29.19997, 28.9078, 29.22659, 29.0085, 28.74144, 28.87415, 28.53099,
   28.2686, 28.32127, 28.40808, 28.28693, 28.32127, 27.88316, 27.96206, 28.00837, 28.10768, 27.92728, 27.71065, 27.28411, 27.49938, 27.3671, 27.2651, 27.28173,
   27.14839, 27.31734, 27.06951, 26.74197, 26.91587, 26.65459, 26.78071, 26.48387, 26.37108, 26.49121, 26.44959, 26.09193, 26.33911, 26.05714, 26.16385, 25.79721,
   25.93749, 25.78967, 25.60812, 25.66878, 25.55746, 25.32057, 25.50416, 25.33336, 25.40233, 25.28728, 25.14594, 25.22313, 24.64883, 24.82173, 24.74067, 24.53288,
   24.96231, 24.74853, 24.5091, 24.66197, 24.34463, 24.45616, 24.09312, 23.96367, 24.02848, 24.08505, 24.12, 24.02848, 23.77636, 23.8036, 23.78453, 23.52429,
   23.69992, 23.48017, 23.38892, 23.67804, 23.40277, 23.22767, 22.794, 23.02593, 23.29175, 22.93005, 22.947, 22.81957, 22.28804, 22.29967, 22.66285, 22.22107,
   22.60559, 22.22982, 22.02776, 22.49352, 22.38667, 21.82384, 21.92456, 21.92161, 21.95705, 21.90386, 21.83275, 21.68384, 21.44343, 21.57899, 21.47363, 21.57599,
   21.34955, 21.55796, 21.31917, 20.98216, 20.99143, 20.9976, 20.68669, 20.77733, 21.07768, 20.29136, 21.2003, 20.60509, 20.7711, 20.47891, 20.58621, 20.55155,
   20.44724, 20.13105, 20.14714, 19.87187, 20.05042, 20.10528, 19.95972, 20.14714, 19.93698, 19.30956, 19.70486, 19.81309, 19.57619, 19.73115, 19.62248, 19.46332,
   19.32633, 19.43333, 19.56957, 19.17486, 19.15795, 19.26589, 19.20862, 19.16134, 19.09358, 18.82012, 18.96759, 19.05281, 18.7891, 18.96759, 18.80289, 18.81323,
   18.53913, 18.39526, 18.6089, 18.33881, 18.52164, 18.2751, 18.55659, 18.0036, 18.35647, 17.91339, 17.95675, 17.90616, 18.05751, 17.95314, 17.65836, 17.91701,
   17.58113, 17.75716, 17.47762, 17.36604, 17.24246, 17.57007, 17.15203, 17.6767, 17.3212, 17.45165, 16.85092, 17.01548, 17.22366, 17.04211, 16.89701, 17.01928,
   16.83938, 16.91234, 16.74677, 16.73903, 16.9888, 16.68863, 16.91234, 16.72354, 16.59127, 16.98498, 16.5012, 16.56, 16.16797, 16.21999, 16.47762, 16.33147,
   16.10774, 16.08761, 16.29969, 15.89717, 15.9947, 16.12784, 15.99875, 15.62582, 16.31162, 15.77852, 15.35391, 15.57598, 15.51763, 15.73328, 15.84409, 15.27351,
   15.70855, 15.48837, 15.23102, 15.43388, 15.01247, 15.42969, 14.99952, 14.73803, 15.27775, 15.05558, 15.31587, 15.40867, 14.79946, 14.96492, 14.65868, 14.65868,
   14.6144, 14.41349, 14.51206, 14.29159, 14.57889, 14.45838, 14.50313, 14.68518, 14.42248, 14.52099, 14.42697, 14.42697, 14.22797, 14.22342, 14.13659, 14.07687,
   14.37748, 14.33234, 14.19149, 13.97524, 13.96596, 14.10906, 14.18236, 13.86818, 13.66578, 13.73201, 13.92414, 13.76971, 13.68474, 13.53236, 13.59924, 13.43625,
   13.70366, 13.38309, 13.52278, 13.41694, 13.4892, 13.33945, 13.39761, 13.10914, 13.1042, 13.31027, 13.07449, 12.96, 13.07945, 13.26638, 13.01986, 13.15355,
   12.82429, 13.13383, 12.99994, 12.81924, 12.86969, 12.79394, 12.68713, 12.74319, 12.70754, 12.51227, 13.05962, 12.48634, 12.53813, 12.34543, 12.5019, 12.5019,
   12.25587, 12.73301, 12.09086, 12.36116, 12.53813, 12.25058, 12.22941, 12.08013, 12.26644, 11.95612, 12.22941, 11.97778, 11.92356, 11.80339, 11.83628, 11.91812,
   12.0102, 11.84723, 11.89635, 11.91268, 11.85816, 11.61523, 11.71522, 11.64866, 11.31569, 11.54248, 11.4862, 11.54809, 11.44664, 11.57611, 11.31569, 11.4862,
   11.63753, 11.67644, 11.41262, 11.62081, 11.12511, 11.26403, 11.07841, 11.22946, 11.20636, 11.1832, 11.00211, 11.15419, 11.34428, 10.87176, 10.90152, 11.008,
   10.94897, 10.9134, 10.78198, 10.72172, 10.66718, 10.90152, 10.52654, 10.78799, 10.61237, 10.52654, 10.84192, 10.55727, 10.78198, 10.4586, 10.76394, 10.45241,
   10.41514, 10.69145, 10.21411, 10.40269, 10.3715, 10.5818, 10.41514, 10.33394, 10.25842, 10.61847, 10.359, 10.23945, 10.60015, 10.4648, 10.18234, 9.859006,
   9.766555, 10.14408, 10.14408, 9.83268, 10.20776, 9.812889, 10.15047, 9.713331, 9.78644, 10.0349, 9.779816, 9.304451, 9.766555, 9.845852, 9.66652, 9.394552,
   10.06713, 9.976613, 9.78644, 9.686609, 9.476962, 9.290511, 9.497452, 9.456426, 9.408337, 9.57221, 9.093118, 9.408337, 9.339208, 9.483797, 9.483797, 9.178235,
   9.415222, 9.511088, 9.304451, 9.121579, 9.497452, 9.332267, 9, 9.043097, 9.213468, 9.415222, 9, 8.832848, 9.100242, 8.862144, 8.669948, 8.707238,
   8.810812, 8.862144, 8.818163, 9.035928, 8.736956, 9.007197, 9.035928, 8.534354, 8.334603, 8.818163, 8.79609, 8.632497, 8.64, 8.832848, 8.365644, 8.654987,
   8.617471, 8.564672, 8.617471, 8.647497, 8.751777, 8.503929, 8.549526, 8.411991, 8.057891, 8.357894, 8.57979, 8.256488, 8.326824, 8.098, 8.0014, 8.381122,
   8.209263, 8.465743, 8.411991, 7.812912, 8.185548, 8.303445, 8.256488, 8.105998, 8.153821, 8.065928, 8.089994, 7.887205, 8.049845, 7.804614, 7.895416, 7.737907,
   8.089994, 7.821202, 7.754637, 7.695921, 7.662167, 7.837755, 8.017581, 7.936347, 7.985186, 7.796307, 7.746277, 7.821202, 7.56, 7.619764, 7.746277, 7.585671,
   7.42159, 7.412854, 7.737907, 7.695921, 8.025659, 7.542838, 7.482459, 7.602736, 7.679062, 7.712743, 7.594208, 7.787991, 7.262727, 7.447738, 7.091178, 7.878985,
   7.404107, 7.42159, 7.145796, 7.154858, 7.56, 7.679062, 7.333758, 7.10943, 7.23591, 7.136722, 7.39535, 7.181977, 6.83052, 6.952755, 6.924738, 6.792466,
   7.05453, 6.87779, 7.360217, 7.045339, 6.915374, 7.298329, 6.849467, 6.915374, 6.952755, 6.87779, 6.754199, 7.271644, 6.657567, 6.802, 6.924738, 6.896608,
   6.77336, 6.87779, 6.802, 6.821026, 6.763786, 7.118539, 6.754199, 6.489992, 6.715713, 6.224982, 6.539725, 6.549626, 6.338454, 6.389366, 6.715713, 6.44993,
   6.647827, 6.235383, 6.338454, 6.539725, 6.224982, 6.647827, 6.499969, 6.715713, 6.48, 6.638072, 6.28713, 6.429806, 6.12, 6.3995, 6.077499, 6.214564,
   6.28713, 6.162207, 6.098787, 6.429806, 6.088152, 6.214564, 6.109403, 6.14114, 6.256133, 6.297428, 6.151683, 6.12, 6.14114, 6.276814, 6.183203, 6.389366,
   6.077499, 6.077499, 5.926348, 5.871422, 5.782456, 5.937272, 5.804826, 5.937272, 6.098787, 5.804826, 5.838219, 5.980769, 5.915404, 5.849308, 5.893454, 5.969925,
   6.0024, 5.815978, 5.76, 5.980769, 5.969925, 5.771239, 5.55381, 5.6921, 5.600286, 5.915404, 5.669286, 5.703473, 5.518695, 5.54213, 5.363879, 5.771239,
   5.375946, 5.611845, 5.827109, 5.447789, 5.771239, 5.804826, 5.771239, 5.278636, 5.577096, 5.6921, 5.351785, 5.103881, 5.495162, 5.363879, 5.435881, 5.179498,
   5.565465, 5.027126, 5.04, 5.588703, 4.843305, 5.447789, 5.254027, 5.55381, 5.351785, 5.726151, 5.483357, 5.12921, 5.530425, 5.435881, 5.20446, 5.495162,
   5.254027, 5.254027, 5.518695, 4.949182, 5.229302, 5.166972, 5.052841 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_H_mass_fx1201,Graph_from_VH_tagFirst_2b1c_H_mass_fy1201,Graph_from_VH_tagFirst_2b1c_H_mass_fex1201,Graph_from_VH_tagFirst_2b1c_H_mass_fey1201);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_H_mass1201 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_H_mass1201","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1201->SetMinimum(-1262.424);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1201->SetMaximum(13048.05);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1201->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1201->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1201->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1201->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1201->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1201->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1201->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1201->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1201->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1201->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1201->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_H_mass1201);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_H_mass","Data (JetHT, 2018)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_mass_tagFirst_SR_18->cd();
  
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
   
   TH1D *data_mc_ratio__202 = new TH1D("data_mc_ratio__202","",1000,0,2000);
   data_mc_ratio__202->SetBinContent(1000,1.42783);
   data_mc_ratio__202->SetBinContent(1001,1.345855);
   data_mc_ratio__202->SetBinError(1000,0.1925285);
   data_mc_ratio__202->SetBinError(1001,0.01059101);
   data_mc_ratio__202->SetMinimum(0.4);
   data_mc_ratio__202->SetMaximum(1.6);
   data_mc_ratio__202->SetEntries(28.25772);
   data_mc_ratio__202->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__202->SetLineColor(ci);
   data_mc_ratio__202->SetLineWidth(2);
   data_mc_ratio__202->SetMarkerStyle(20);
   data_mc_ratio__202->SetMarkerSize(1.2);
   data_mc_ratio__202->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__202->GetXaxis()->SetRange(1,150);
   data_mc_ratio__202->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__202->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__202->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__202->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__202->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__202->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__202->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__202->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__202->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__202->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__202->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__202->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__202->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__202->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__202->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__202->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1202[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1202[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1202[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1202[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01106577, 0.005525705,
   0.005545125, 0.005560191, 0.005600066, 0.005636599, 0.005636868, 0.00562366, 0.005677055, 0.005669113, 0.005691196, 0.005715499, 0.005722513, 0.005775428, 0.005776392, 0.005785762, 0.00582499, 0.005829839,
   0.005813364, 0.005818971, 0.005859487, 0.00586533, 0.005910335, 0.00593579, 0.005964226, 0.005962954, 0.00597561, 0.005999544, 0.006047293, 0.006062388, 0.01205929, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1311745 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1202,Graph_from_mc_statistical_error_fy1202,Graph_from_mc_statistical_error_fex1202,Graph_from_mc_statistical_error_fey1202);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1202 = new TH1F("Graph_Graph_from_mc_statistical_error1202","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1202->SetMinimum(0.8425906);
   Graph_Graph_from_mc_statistical_error1202->SetMaximum(1.157409);
   Graph_Graph_from_mc_statistical_error1202->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1202->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1202->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1202->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1202->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1202->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1202->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1202->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1202->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1202->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1202->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1202);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagFirst_SR_18->cd();
   H_mass_tagFirst_SR_18->Modified();
   H_mass_tagFirst_SR_18->cd();
   H_mass_tagFirst_SR_18->SetSelected(H_mass_tagFirst_SR_18);
}
